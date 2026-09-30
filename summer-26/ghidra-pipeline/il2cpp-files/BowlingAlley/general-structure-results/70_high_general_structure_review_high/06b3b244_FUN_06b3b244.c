/*
FUNCTION_NAME: FUN_06b3b244
ENTRY_POINT: 06b3b244
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;ray_or_cast_sink_hits_2;telemetry_or_network_hits_3;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_06b3b244(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long *plVar12;
  long *unaff_x22;
  long *unaff_x23;
  
  (*(code *)*param_1)();
  plVar12 = *(long **)(unaff_x19 + 0x88);
  uVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                              Method_System_Threading_Tasks_Task<ValueTuple<WebHeaderCollection,_byte[],_int>>_ConfigureAwait__
                            );
  FUN_0501f060();
  if (plVar12 == (long *)0x0) goto LAB_06b3bba0;
  lVar9 = *plVar12;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x23) {
        puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
        goto LAB_06b3b2d4;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar8 = (undefined8 *)FUN_032937ac(plVar12,*unaff_x23,2);
LAB_06b3b2d4:
  (*(code *)*puVar8)(plVar12,uVar7,puVar8[1]);
  puVar3 = Method_System_Threading_Tasks_TaskFactory<IPAddress[]>_FromAsync<string>__;
  plVar12 = *(long **)(unaff_x19 + 0x90);
  if (plVar12 != (long *)0x0) {
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_System_Threading_Tasks_TaskFactory<IPAddress[]>_FromAsync<string>__) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto UnityEngine_Physics2D___cctor;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_032937ac(plVar12,*(long *)
                                   Method_System_Threading_Tasks_TaskFactory<IPAddress[]>_FromAsync<string>__
                          ,0);
UnityEngine_Physics2D___cctor:
    lVar9 = (*(code *)*puVar8)(plVar12,puVar8[1]);
    puVar1 = PTR_DAT_07279f98;
    uVar7 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07279f98);
    FUN_04af414c();
    puVar2 = PTR_DAT_07279fa8;
    if (lVar9 == 0) goto LAB_06b3bba0;
    FUN_04af773c(lVar9,uVar7,*(undefined8 *)PTR_DAT_07279fa8);
    plVar12 = *(long **)(unaff_x19 + 0x90);
    if (plVar12 == (long *)0x0) goto LAB_06b3bba0;
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_06b3b3f0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar3,1);
LAB_06b3b3f0:
    lVar9 = (*(code *)*puVar8)(plVar12,puVar8[1]);
    puVar4 = PTR_DAT_0728e9a8;
    uVar7 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0728e9a8);
    FUN_04af414c();
    puVar5 = PTR_DAT_0728e9b0;
    if (lVar9 == 0) goto LAB_06b3bba0;
    FUN_04af773c(lVar9,uVar7,*(undefined8 *)PTR_DAT_0728e9b0);
    plVar12 = *(long **)(unaff_x19 + 0x90);
    if (plVar12 == (long *)0x0) goto LAB_06b3bba0;
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_06b3b4a0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar3,2);
LAB_06b3b4a0:
    lVar9 = (*(code *)*puVar8)(plVar12,puVar8[1]);
    uVar7 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
    FUN_04af414c();
    if (lVar9 == 0) goto LAB_06b3bba0;
    FUN_04af773c(lVar9,uVar7,*(undefined8 *)puVar2);
    plVar12 = *(long **)(unaff_x19 + 0x90);
    if (plVar12 == (long *)0x0) goto LAB_06b3bba0;
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 3) * 0x10 + 0x138);
          goto LAB_06b3b540;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar3,3);
LAB_06b3b540:
    lVar9 = (*(code *)*puVar8)(plVar12,puVar8[1]);
    uVar7 = thunk_FUN_032a56a0(*(undefined8 *)puVar4);
    FUN_04af414c();
    if (lVar9 == 0) goto LAB_06b3bba0;
    FUN_04af773c(lVar9,uVar7,*(undefined8 *)puVar5);
  }
  puVar3 = PTR_DAT_0727ac80;
  plVar12 = *(long **)(unaff_x19 + 0x98);
  if (plVar12 != (long *)0x0) {
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0727ac80) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_06b3b5e4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_032937ac(plVar12,*(long *)PTR_DAT_0727ac80,0);
LAB_06b3b5e4:
    lVar9 = (*(code *)*puVar8)(plVar12,puVar8[1]);
    uVar7 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07279f90);
    FUN_04af414c();
    if (lVar9 == 0) goto LAB_06b3bba0;
    FUN_04af773c(lVar9,uVar7,*(undefined8 *)PTR_DAT_07279fb0);
    plVar12 = *(long **)(unaff_x19 + 0x98);
    if (plVar12 == (long *)0x0) goto LAB_06b3bba0;
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_06b3b694;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar3,1);
LAB_06b3b694:
    lVar9 = (*(code *)*puVar8)(plVar12,puVar8[1]);
    uVar7 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07279fa0);
    FUN_04af414c();
    if (lVar9 == 0) goto LAB_06b3bba0;
    FUN_04af773c(lVar9,uVar7,*(undefined8 *)PTR_DAT_07279fb8);
  }
  puVar3 = 
  Method_System_Threading_Tasks_TaskCompletionSource<OvrAvatarManager_AvatarRequestBoolResults>__ctor__
  ;
  plVar12 = *(long **)(unaff_x19 + 0xa0);
  if (plVar12 != (long *)0x0) {
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)
             Method_System_Threading_Tasks_TaskCompletionSource<OvrAvatarManager_AvatarRequestBoolResults>__ctor__
           ) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_06b3b748;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_032937ac(plVar12,*(long *)
                                   Method_System_Threading_Tasks_TaskCompletionSource<OvrAvatarManager_AvatarRequestBoolResults>__ctor__
                          ,0);
LAB_06b3b748:
    lVar9 = (*(code *)*puVar8)(plVar12,puVar8[1]);
    uVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
                              );
    FUN_04af414c();
    if (lVar9 == 0) goto LAB_06b3bba0;
    FUN_04af773c(lVar9,uVar7,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfValue<InternedString>__
                );
    plVar12 = *(long **)(unaff_x19 + 0xa0);
    if (plVar12 == (long *)0x0) goto LAB_06b3bba0;
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_06b3b7f8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar3,1);
LAB_06b3b7f8:
    lVar9 = (*(code *)*puVar8)(plVar12,puVar8[1]);
    uVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_Pointer>__
                              );
    FUN_04af414c();
    if (lVar9 == 0) goto LAB_06b3bba0;
    FUN_04af773c(lVar9,uVar7,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputDevice,_InputDevice>__
                );
  }
  puVar3 = Method_System_Tuple<Vector3,_Vector3>_get_Item2__;
  plVar12 = *(long **)(unaff_x19 + 0xa8);
  if (plVar12 != (long *)0x0) {
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)Method_System_Tuple<Vector3,_Vector3>_get_Item2__) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_06b3b8ac;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_032937ac(plVar12,*(long *)Method_System_Tuple<Vector3,_Vector3>_get_Item2__,0);
LAB_06b3b8ac:
    lVar9 = (*(code *)*puVar8)(plVar12,puVar8[1]);
    uVar7 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0728f0f8);
    FUN_04af414c();
    if (lVar9 == 0) goto LAB_06b3bba0;
    FUN_04af773c(lVar9,uVar7,*(undefined8 *)PTR_DAT_0728f108);
    plVar12 = *(long **)(unaff_x19 + 0xa8);
    if (plVar12 == (long *)0x0) goto LAB_06b3bba0;
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto UnityEngine_SoftJointLimit__set_limit;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar3,1);
UnityEngine_SoftJointLimit__set_limit:
    lVar9 = (*(code *)*puVar8)(plVar12,puVar8[1]);
    uVar7 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0728f0f0);
    FUN_04af414c();
    if (lVar9 == 0) goto LAB_06b3bba0;
    FUN_04af773c(lVar9,uVar7,*(undefined8 *)PTR_DAT_0728f100);
  }
  plVar12 = *(long **)(unaff_x19 + 0xb0);
  if (plVar12 != (long *)0x0) {
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XRAnchor>__ctor__) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_06b3ba10;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_032937ac(plVar12,*(long *)
                                   Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XRAnchor>__ctor__
                          ,0);
LAB_06b3ba10:
    plVar12 = (long *)(*(code *)*puVar8)(plVar12,puVar8[1]);
    uVar7 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ad50);
    FUN_05020914();
    if (plVar12 == (long *)0x0) goto LAB_06b3bba0;
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)
             Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
           ) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_06b3baa4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_032937ac(plVar12,*(long *)
                                   Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
                          ,0);
LAB_06b3baa4:
    uVar7 = (*(code *)*puVar8)(plVar12,uVar7,puVar8[1]);
    if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_06b3bba0;
    FUN_06a5b940(*(long *)(unaff_x19 + 0x48),uVar7,0);
  }
  plVar12 = *(long **)(unaff_x19 + 0x88);
  *(undefined1 *)(unaff_x19 + 0xd1) = 0;
  if (plVar12 == (long *)0x0) {
LAB_06b3bb38:
    bVar6 = 1;
  }
  else {
    lVar9 = *plVar12;
    bVar6 = *(byte *)(*(long *)PTR_DAT_0727ad30 + 0x130);
    if ((*(byte *)(lVar9 + 0x130) < bVar6) ||
       (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar6 * 8 + -8) != *(long *)PTR_DAT_0727ad30)) {
      bVar6 = *(byte *)(*(long *)PTR_DAT_072804a8 + 0x130);
      if ((*(byte *)(lVar9 + 0x130) < bVar6) ||
         (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar6 * 8 + -8) != *(long *)PTR_DAT_072804a8))
      goto LAB_06b3bb38;
      bVar6 = FUN_06be6054(plVar12,0);
    }
    else {
      lVar9 = plVar12[7];
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar10 = FUN_06be9890(lVar9,0,0);
      if ((uVar10 & 1) == 0) {
        bVar6 = 0;
      }
      else {
        if (plVar12[7] == 0) {
LAB_06b3bba0:
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        bVar6 = FUN_06ac5fe8(plVar12[7],*(undefined8 *)(unaff_x19 + 0x88),0);
      }
    }
    bVar6 = bVar6 & 1;
  }
  *(byte *)(unaff_x19 + 0xd2) = bVar6;
  FUN_06b39cf4();
  return;
}


