/*
FUNCTION_NAME: FUN_06b3afac
ENTRY_POINT: 06b3afac
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_06b3afac(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  
  if ((DAT_076e3677 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727ad50);
    thunk_FUN_032e1da0(
                      Method_System_Threading_Tasks_Task<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_GetAwaiter__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Threading_Tasks_Task<ValueTuple<WebHeaderCollection,_byte[],_int>>_ConfigureAwait__
                      );
    thunk_FUN_032e1da0(PTR_DAT_072804a8);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
                      );
    thunk_FUN_032e1da0(Method_System_Tuple<Vector3,_Vector3>_get_Item2__);
    thunk_FUN_032e1da0(
                      Method_System_Threading_Tasks_TaskCompletionSource<OvrAvatarManager_AvatarRequestBoolResults>__ctor__
                      );
    thunk_FUN_032e1da0(Method_System_Threading_Tasks_TaskFactory<IPAddress[]>_FromAsync<string>__);
    thunk_FUN_032e1da0(PTR_DAT_0727a8d8);
    thunk_FUN_032e1da0(Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XRAnchor>__ctor__);
    thunk_FUN_032e1da0(PTR_DAT_0727ac80);
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
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
    thunk_FUN_032e1da0(PTR_DAT_0728e9b0);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputDevice,_InputDevice>__
                      );
    thunk_FUN_032e1da0(PTR_DAT_0728f100);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfValue<InternedString>__
                      );
    thunk_FUN_032e1da0(PTR_DAT_07279fa8);
    thunk_FUN_032e1da0(PTR_DAT_07279fb0);
    thunk_FUN_032e1da0(PTR_DAT_07279fb8);
    thunk_FUN_032e1da0(PTR_DAT_0728f108);
    thunk_FUN_032e1da0(PTR_DAT_0727ad30);
    DAT_076e3677 = 1;
  }
  FUN_06b390bc(param_1);
  puVar1 = PTR_DAT_072794f0;
  plVar13 = (long *)param_1[0x11];
  if (plVar13 != (long *)0x0) {
    lVar8 = *(long *)PTR_DAT_072794f0;
    if ((*(byte *)(lVar8 + 0x130) <= *(byte *)(*plVar13 + 0x130)) &&
       (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) == lVar8)) {
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      bVar7 = FUN_06be9890(plVar13,0,0);
      *(byte *)(param_1 + 0x1a) = bVar7 & 1;
      if ((bVar7 & 1) == 0) goto LAB_06b3b17c;
      plVar13 = (long *)param_1[0x11];
      uVar9 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Threading_Tasks_Task<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_GetAwaiter__
                                );
      FUN_0501f060(uVar9,param_1,*(undefined8 *)(*param_1 + 0x230),0);
      puVar4 = PTR_DAT_0727a8d8;
      if (plVar13 == (long *)0x0) {
LAB_06b3bba0:
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar8 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0727a8d8) {
            puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
            goto FUN_06b3b244;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar10 = (undefined8 *)FUN_032937ac(plVar13,*(long *)PTR_DAT_0727a8d8,0);
FUN_06b3b244:
      (*(code *)*puVar10)(plVar13,uVar9,puVar10[1]);
      plVar13 = (long *)param_1[0x11];
      uVar9 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Threading_Tasks_Task<ValueTuple<WebHeaderCollection,_byte[],_int>>_ConfigureAwait__
                                );
      FUN_0501f060(uVar9,param_1,*(undefined8 *)(*param_1 + 0x240),0);
      if (plVar13 == (long *)0x0) goto LAB_06b3bba0;
      lVar8 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
            puVar10 = (undefined8 *)(lVar8 + (long)(*piVar12 + 2) * 0x10 + 0x138);
            goto LAB_06b3b2d4;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar10 = (undefined8 *)FUN_032937ac(plVar13,*(long *)puVar4,2);
LAB_06b3b2d4:
      (*(code *)*puVar10)(plVar13,uVar9,puVar10[1]);
      puVar4 = Method_System_Threading_Tasks_TaskFactory<IPAddress[]>_FromAsync<string>__;
      plVar13 = (long *)param_1[0x12];
      if (plVar13 != (long *)0x0) {
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)Method_System_Threading_Tasks_TaskFactory<IPAddress[]>_FromAsync<string>__)
            {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto UnityEngine_Physics2D___cctor;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_032937ac(plVar13,*(long *)
                                        Method_System_Threading_Tasks_TaskFactory<IPAddress[]>_FromAsync<string>__
                               ,0);
UnityEngine_Physics2D___cctor:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        puVar2 = PTR_DAT_07279f98;
        uVar9 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07279f98);
        FUN_04af414c(uVar9,param_1,*(undefined8 *)(*param_1 + 0x250),0);
        puVar3 = PTR_DAT_07279fa8;
        if (lVar8 == 0) goto LAB_06b3bba0;
        FUN_04af773c(lVar8,uVar9,*(undefined8 *)PTR_DAT_07279fa8);
        plVar13 = (long *)param_1[0x12];
        if (plVar13 == (long *)0x0) goto LAB_06b3bba0;
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
              puVar10 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_06b3b3f0;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_032937ac(plVar13,*(long *)puVar4,1);
LAB_06b3b3f0:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        puVar5 = PTR_DAT_0728e9a8;
        uVar9 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0728e9a8);
        FUN_04af414c(uVar9,param_1,*(undefined8 *)(*param_1 + 0x260),0);
        puVar6 = PTR_DAT_0728e9b0;
        if (lVar8 == 0) goto LAB_06b3bba0;
        FUN_04af773c(lVar8,uVar9,*(undefined8 *)PTR_DAT_0728e9b0);
        plVar13 = (long *)param_1[0x12];
        if (plVar13 == (long *)0x0) goto LAB_06b3bba0;
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
              puVar10 = (undefined8 *)(lVar8 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto LAB_06b3b4a0;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_032937ac(plVar13,*(long *)puVar4,2);
LAB_06b3b4a0:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
        FUN_04af414c(uVar9,param_1,*(undefined8 *)(*param_1 + 0x270),0);
        if (lVar8 == 0) goto LAB_06b3bba0;
        FUN_04af773c(lVar8,uVar9,*(undefined8 *)puVar3);
        plVar13 = (long *)param_1[0x12];
        if (plVar13 == (long *)0x0) goto LAB_06b3bba0;
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
              puVar10 = (undefined8 *)(lVar8 + (long)(*piVar12 + 3) * 0x10 + 0x138);
              goto LAB_06b3b540;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_032937ac(plVar13,*(long *)puVar4,3);
LAB_06b3b540:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar5);
        FUN_04af414c(uVar9,param_1,*(undefined8 *)(*param_1 + 0x280),0);
        if (lVar8 == 0) goto LAB_06b3bba0;
        FUN_04af773c(lVar8,uVar9,*(undefined8 *)puVar6);
      }
      puVar4 = PTR_DAT_0727ac80;
      plVar13 = (long *)param_1[0x13];
      if (plVar13 != (long *)0x0) {
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0727ac80) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_06b3b5e4;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_032937ac(plVar13,*(long *)PTR_DAT_0727ac80,0);
LAB_06b3b5e4:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07279f90);
        FUN_04af414c(uVar9,param_1,*(undefined8 *)(*param_1 + 0x290),0);
        if (lVar8 == 0) goto LAB_06b3bba0;
        FUN_04af773c(lVar8,uVar9,*(undefined8 *)PTR_DAT_07279fb0);
        plVar13 = (long *)param_1[0x13];
        if (plVar13 == (long *)0x0) goto LAB_06b3bba0;
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
              puVar10 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_06b3b694;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_032937ac(plVar13,*(long *)puVar4,1);
LAB_06b3b694:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07279fa0);
        FUN_04af414c(uVar9,param_1,*(undefined8 *)(*param_1 + 0x2a0),0);
        if (lVar8 == 0) goto LAB_06b3bba0;
        FUN_04af773c(lVar8,uVar9,*(undefined8 *)PTR_DAT_07279fb8);
      }
      puVar4 = 
      Method_System_Threading_Tasks_TaskCompletionSource<OvrAvatarManager_AvatarRequestBoolResults>__ctor__
      ;
      plVar13 = (long *)param_1[0x14];
      if (plVar13 != (long *)0x0) {
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)
                 Method_System_Threading_Tasks_TaskCompletionSource<OvrAvatarManager_AvatarRequestBoolResults>__ctor__
               ) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_06b3b748;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_032937ac(plVar13,*(long *)
                                        Method_System_Threading_Tasks_TaskCompletionSource<OvrAvatarManager_AvatarRequestBoolResults>__ctor__
                               ,0);
LAB_06b3b748:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_032a56a0(*(undefined8 *)
                                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
                                  );
        FUN_04af414c(uVar9,param_1,*(undefined8 *)(*param_1 + 0x2b0),0);
        if (lVar8 == 0) goto LAB_06b3bba0;
        FUN_04af773c(lVar8,uVar9,
                     *(undefined8 *)
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfValue<InternedString>__
                    );
        plVar13 = (long *)param_1[0x14];
        if (plVar13 == (long *)0x0) goto LAB_06b3bba0;
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
              puVar10 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_06b3b7f8;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_032937ac(plVar13,*(long *)puVar4,1);
LAB_06b3b7f8:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_032a56a0(*(undefined8 *)
                                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_Pointer>__
                                  );
        FUN_04af414c(uVar9,param_1,*(undefined8 *)(*param_1 + 0x2c0),0);
        if (lVar8 == 0) goto LAB_06b3bba0;
        FUN_04af773c(lVar8,uVar9,
                     *(undefined8 *)
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputDevice,_InputDevice>__
                    );
      }
      puVar4 = Method_System_Tuple<Vector3,_Vector3>_get_Item2__;
      plVar13 = (long *)param_1[0x15];
      if (plVar13 != (long *)0x0) {
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)Method_System_Tuple<Vector3,_Vector3>_get_Item2__) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_06b3b8ac;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_032937ac(plVar13,*(long *)Method_System_Tuple<Vector3,_Vector3>_get_Item2__,0)
        ;
LAB_06b3b8ac:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0728f0f8);
        FUN_04af414c(uVar9,param_1,*(undefined8 *)(*param_1 + 0x2d0),0);
        if (lVar8 == 0) goto LAB_06b3bba0;
        FUN_04af773c(lVar8,uVar9,*(undefined8 *)PTR_DAT_0728f108);
        plVar13 = (long *)param_1[0x15];
        if (plVar13 == (long *)0x0) goto LAB_06b3bba0;
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
              puVar10 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto UnityEngine_SoftJointLimit__set_limit;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_032937ac(plVar13,*(long *)puVar4,1);
UnityEngine_SoftJointLimit__set_limit:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0728f0f0);
        FUN_04af414c(uVar9,param_1,*(undefined8 *)(*param_1 + 0x2e0),0);
        if (lVar8 == 0) goto LAB_06b3bba0;
        FUN_04af773c(lVar8,uVar9,*(undefined8 *)PTR_DAT_0728f100);
      }
      plVar13 = (long *)param_1[0x16];
      if (plVar13 != (long *)0x0) {
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XRAnchor>__ctor__) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_06b3ba10;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_032937ac(plVar13,*(long *)
                                        Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XRAnchor>__ctor__
                               ,0);
LAB_06b3ba10:
        plVar13 = (long *)(*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ad50);
        FUN_05020914(uVar9,param_1,*(undefined8 *)(*param_1 + 0x2f0),0);
        if (plVar13 == (long *)0x0) goto LAB_06b3bba0;
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)
                 Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
               ) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_06b3baa4;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_032937ac(plVar13,*(long *)
                                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
                               ,0);
LAB_06b3baa4:
        uVar9 = (*(code *)*puVar10)(plVar13,uVar9,puVar10[1]);
        if (param_1[9] == 0) goto LAB_06b3bba0;
        FUN_06a5b940(param_1[9],uVar9,0);
      }
      plVar13 = (long *)param_1[0x11];
      *(undefined1 *)((long)param_1 + 0xd1) = 0;
      if (plVar13 == (long *)0x0) {
LAB_06b3bb38:
        bVar7 = 1;
      }
      else {
        lVar8 = *plVar13;
        bVar7 = *(byte *)(*(long *)PTR_DAT_0727ad30 + 0x130);
        if ((*(byte *)(lVar8 + 0x130) < bVar7) ||
           (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar7 * 8 + -8) != *(long *)PTR_DAT_0727ad30))
        {
          bVar7 = *(byte *)(*(long *)PTR_DAT_072804a8 + 0x130);
          if ((*(byte *)(lVar8 + 0x130) < bVar7) ||
             (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar7 * 8 + -8) != *(long *)PTR_DAT_072804a8
             )) goto LAB_06b3bb38;
          bVar7 = FUN_06be6054(plVar13,0);
        }
        else {
          lVar8 = plVar13[7];
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          uVar11 = FUN_06be9890(lVar8,0,0);
          if ((uVar11 & 1) == 0) {
            bVar7 = 0;
          }
          else {
            if (plVar13[7] == 0) goto LAB_06b3bba0;
            bVar7 = FUN_06ac5fe8(plVar13[7],param_1[0x11],0);
          }
        }
        bVar7 = bVar7 & 1;
      }
      *(byte *)((long)param_1 + 0xd2) = bVar7;
      goto LAB_06b3b17c;
    }
  }
  *(undefined1 *)(param_1 + 0x1a) = 0;
LAB_06b3b17c:
  FUN_06b39cf4(param_1);
  return;
}


