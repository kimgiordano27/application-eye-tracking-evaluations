/*
FUNCTION_NAME: FUN_06b3bba4
ENTRY_POINT: 06b3bba4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_06b3bba4(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  
  if ((DAT_076e3678 & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_System_Threading_Tasks_Task<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_GetAwaiter__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Threading_Tasks_Task<ValueTuple<WebHeaderCollection,_byte[],_int>>_ConfigureAwait__
                      );
    thunk_FUN_032e1da0(Method_System_Tuple<Vector3,_Vector3>_get_Item2__);
    thunk_FUN_032e1da0(
                      Method_System_Threading_Tasks_TaskCompletionSource<OvrAvatarManager_AvatarRequestBoolResults>__ctor__
                      );
    thunk_FUN_032e1da0(Method_System_Threading_Tasks_TaskFactory<IPAddress[]>_FromAsync<string>__);
    thunk_FUN_032e1da0(PTR_DAT_0727a8d8);
    thunk_FUN_032e1da0(PTR_DAT_0727ac80);
    thunk_FUN_032e1da0(PTR_DAT_0728f0f0);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
                      );
    thunk_FUN_032e1da0(PTR_DAT_07279f90);
    thunk_FUN_032e1da0(PTR_DAT_07279f98);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_Pointer>__
                      );
    thunk_FUN_032e1da0(PTR_DAT_07279fa0);
    thunk_FUN_032e1da0(PTR_DAT_0728e9a8);
    thunk_FUN_032e1da0(PTR_DAT_0728f0f8);
    thunk_FUN_032e1da0(PTR_DAT_0727a0d8);
    thunk_FUN_032e1da0(PTR_DAT_0728f3e8);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_InsertAt<InputBinding>__
                      );
    thunk_FUN_032e1da0(PTR_DAT_0727a0e0);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_InsertAt<InputControl>__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_InsertAt<ushort>__);
    thunk_FUN_032e1da0(PTR_DAT_0728f3f0);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_InsertAtWithCapacity<Touch>__
                      );
    DAT_076e3678 = 1;
  }
  if (param_1[9] == 0) goto LAB_06b3c510;
  FUN_06a5bcdc(param_1[9],0);
  if ((char)param_1[0x1a] != '\0') {
    plVar11 = (long *)param_1[0x11];
    uVar6 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Threading_Tasks_Task<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_GetAwaiter__
                              );
    FUN_0501f060(uVar6,param_1,*(undefined8 *)(*param_1 + 0x230),0);
    puVar1 = 
    Method_System_Threading_Tasks_Task<ValueTuple<WebHeaderCollection,_byte[],_int>>_ConfigureAwait__
    ;
    puVar2 = PTR_DAT_0727a8d8;
    if (plVar11 != (long *)0x0) {
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0727a8d8) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_06b3bd8c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_032937ac(plVar11,*(long *)PTR_DAT_0727a8d8,1);
LAB_06b3bd8c:
      (*(code *)*puVar7)(plVar11,uVar6,puVar7[1]);
      plVar11 = (long *)param_1[0x11];
      uVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
      FUN_0501f060(uVar6,param_1,*(undefined8 *)(*param_1 + 0x240),0);
      if (plVar11 != (long *)0x0) {
        lVar8 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 3) * 0x10 + 0x138);
              goto LAB_06b3be14;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_032937ac(plVar11,*(long *)puVar2,3);
LAB_06b3be14:
        (*(code *)*puVar7)(plVar11,uVar6,puVar7[1]);
        puVar2 = Method_System_Threading_Tasks_TaskFactory<IPAddress[]>_FromAsync<string>__;
        plVar11 = (long *)param_1[0x12];
        if (plVar11 != (long *)0x0) {
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) ==
                  *(long *)
                   Method_System_Threading_Tasks_TaskFactory<IPAddress[]>_FromAsync<string>__) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_06b3be80;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)
                   FUN_032937ac(plVar11,*(long *)
                                         Method_System_Threading_Tasks_TaskFactory<IPAddress[]>_FromAsync<string>__
                                ,0);
LAB_06b3be80:
          lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
          puVar1 = PTR_DAT_07279f98;
          uVar6 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07279f98);
          FUN_04af414c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x250),0);
          puVar4 = PTR_DAT_0728f3e8;
          if (lVar8 == 0) goto LAB_06b3c510;
          FUN_04af7778(lVar8,uVar6,*(undefined8 *)PTR_DAT_0728f3e8);
          plVar11 = (long *)param_1[0x12];
          if (plVar11 == (long *)0x0) goto LAB_06b3c510;
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto LAB_06b3bf30;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_032937ac(plVar11,*(long *)puVar2,1);
LAB_06b3bf30:
          lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
          puVar3 = PTR_DAT_0728e9a8;
          uVar6 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0728e9a8);
          FUN_04af414c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x260),0);
          puVar5 = PTR_DAT_0728f3f0;
          if (lVar8 == 0) goto LAB_06b3c510;
          FUN_04af7778(lVar8,uVar6,*(undefined8 *)PTR_DAT_0728f3f0);
          plVar11 = (long *)param_1[0x12];
          if (plVar11 == (long *)0x0) goto LAB_06b3c510;
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                goto LAB_06b3bfe0;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_032937ac(plVar11,*(long *)puVar2,2);
LAB_06b3bfe0:
          lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
          uVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
          FUN_04af414c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x270),0);
          if (lVar8 == 0) goto LAB_06b3c510;
          FUN_04af7778(lVar8,uVar6,*(undefined8 *)puVar4);
          plVar11 = (long *)param_1[0x12];
          if (plVar11 == (long *)0x0) goto LAB_06b3c510;
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 3) * 0x10 + 0x138);
                goto LAB_06b3c080;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_032937ac(plVar11,*(long *)puVar2,3);
LAB_06b3c080:
          lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
          uVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
          FUN_04af414c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x280),0);
          if (lVar8 == 0) goto LAB_06b3c510;
          FUN_04af7778(lVar8,uVar6,*(undefined8 *)puVar5);
        }
        puVar2 = PTR_DAT_0727ac80;
        plVar11 = (long *)param_1[0x13];
        if (plVar11 != (long *)0x0) {
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0727ac80) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_06b3c124;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_032937ac(plVar11,*(long *)PTR_DAT_0727ac80,0);
LAB_06b3c124:
          lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
          uVar6 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07279f90);
          FUN_04af414c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x290),0);
          if (lVar8 == 0) goto LAB_06b3c510;
          FUN_04af7778(lVar8,uVar6,*(undefined8 *)PTR_DAT_0727a0d8);
          plVar11 = (long *)param_1[0x13];
          if (plVar11 == (long *)0x0) goto LAB_06b3c510;
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto LAB_06b3c1d4;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_032937ac(plVar11,*(long *)puVar2,1);
LAB_06b3c1d4:
          lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
          uVar6 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07279fa0);
          FUN_04af414c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x2a0),0);
          if (lVar8 == 0) goto LAB_06b3c510;
          FUN_04af7778(lVar8,uVar6,*(undefined8 *)PTR_DAT_0727a0e0);
        }
        puVar2 = 
        Method_System_Threading_Tasks_TaskCompletionSource<OvrAvatarManager_AvatarRequestBoolResults>__ctor__
        ;
        plVar11 = (long *)param_1[0x14];
        if (plVar11 != (long *)0x0) {
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) ==
                  *(long *)
                   Method_System_Threading_Tasks_TaskCompletionSource<OvrAvatarManager_AvatarRequestBoolResults>__ctor__
                 ) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_06b3c288;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)
                   FUN_032937ac(plVar11,*(long *)
                                         Method_System_Threading_Tasks_TaskCompletionSource<OvrAvatarManager_AvatarRequestBoolResults>__ctor__
                                ,0);
LAB_06b3c288:
          lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
          uVar6 = thunk_FUN_032a56a0(*(undefined8 *)
                                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
                                    );
          FUN_04af414c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x2b0),0);
          if (lVar8 == 0) goto LAB_06b3c510;
          FUN_04af7778(lVar8,uVar6,
                       *(undefined8 *)
                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_InsertAtWithCapacity<Touch>__
                      );
          plVar11 = (long *)param_1[0x14];
          if (plVar11 == (long *)0x0) goto LAB_06b3c510;
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto LAB_06b3c338;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_032937ac(plVar11,*(long *)puVar2,1);
LAB_06b3c338:
          lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
          uVar6 = thunk_FUN_032a56a0(*(undefined8 *)
                                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_Pointer>__
                                    );
          FUN_04af414c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x2c0),0);
          if (lVar8 == 0) goto LAB_06b3c510;
          FUN_04af7778(lVar8,uVar6,
                       *(undefined8 *)
                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_InsertAt<InputBinding>__
                      );
        }
        puVar2 = Method_System_Tuple<Vector3,_Vector3>_get_Item2__;
        plVar11 = (long *)param_1[0x15];
        if (plVar11 == (long *)0x0) goto LAB_06b3c4f4;
        lVar8 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) ==
                *(long *)Method_System_Tuple<Vector3,_Vector3>_get_Item2__) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_06b3c3ec;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_032937ac(plVar11,*(long *)Method_System_Tuple<Vector3,_Vector3>_get_Item2__,0);
LAB_06b3c3ec:
        lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
        uVar6 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0728f0f8);
        FUN_04af414c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x2d0),0);
        if (lVar8 != 0) {
          FUN_04af7778(lVar8,uVar6,
                       *(undefined8 *)
                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_InsertAt<InputControl>__
                      );
          plVar11 = (long *)param_1[0x15];
          if (plVar11 != (long *)0x0) {
            lVar8 = *plVar11;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                  puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                  goto LAB_06b3c49c;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar7 = (undefined8 *)FUN_032937ac(plVar11,*(long *)puVar2,1);
LAB_06b3c49c:
            lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
            uVar6 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0728f0f0);
            FUN_04af414c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x2e0),0);
            if (lVar8 != 0) {
              FUN_04af7778(lVar8,uVar6,
                           *(undefined8 *)
                            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_InsertAt<ushort>__
                          );
              goto LAB_06b3c4f4;
            }
          }
        }
      }
    }
LAB_06b3c510:
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
LAB_06b3c4f4:
  *(undefined1 *)(param_1 + 0x1a) = 0;
  return;
}


