/*
FUNCTION_NAME: UnityEngine.ContactFilter2D$$CheckConsistency
ENTRY_POINT: 06b3b3d8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_3;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_ContactFilter2D__CheckConsistency(void)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *plVar9;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  
  puVar4 = (undefined8 *)FUN_032937ac();
  lVar5 = (*(code *)*puVar4)();
  puVar1 = PTR_DAT_0728e9a8;
  uVar6 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0728e9a8);
  FUN_04af414c();
  puVar2 = PTR_DAT_0728e9b0;
  if (lVar5 == 0) {
LAB_06b3bba0:
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  FUN_04af773c(lVar5,uVar6,*(undefined8 *)PTR_DAT_0728e9b0);
  plVar9 = *(long **)(unaff_x19 + 0x90);
  if (plVar9 == (long *)0x0) goto LAB_06b3bba0;
  lVar5 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x23) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 2) * 0x10 + 0x138);
        goto LAB_06b3b4a0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_032937ac(plVar9,*unaff_x23,2);
LAB_06b3b4a0:
  lVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
  uVar6 = thunk_FUN_032a56a0(*unaff_x24);
  FUN_04af414c();
  if (lVar5 == 0) goto LAB_06b3bba0;
  FUN_04af773c(lVar5,uVar6,*unaff_x25);
  plVar9 = *(long **)(unaff_x19 + 0x90);
  if (plVar9 == (long *)0x0) goto LAB_06b3bba0;
  lVar5 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x23) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 3) * 0x10 + 0x138);
        goto LAB_06b3b540;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_032937ac(plVar9,*unaff_x23,3);
LAB_06b3b540:
  lVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
  uVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
  FUN_04af414c();
  if (lVar5 == 0) goto LAB_06b3bba0;
  FUN_04af773c(lVar5,uVar6,*(undefined8 *)puVar2);
  puVar1 = PTR_DAT_0727ac80;
  plVar9 = *(long **)(unaff_x19 + 0x98);
  if (plVar9 != (long *)0x0) {
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0727ac80) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06b3b5e4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_032937ac(plVar9,*(long *)PTR_DAT_0727ac80,0);
LAB_06b3b5e4:
    lVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    uVar6 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07279f90);
    FUN_04af414c();
    if (lVar5 == 0) goto LAB_06b3bba0;
    FUN_04af773c(lVar5,uVar6,*(undefined8 *)PTR_DAT_07279fb0);
    plVar9 = *(long **)(unaff_x19 + 0x98);
    if (plVar9 == (long *)0x0) goto LAB_06b3bba0;
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_06b3b694;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_032937ac(plVar9,*(long *)puVar1,1);
LAB_06b3b694:
    lVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    uVar6 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07279fa0);
    FUN_04af414c();
    if (lVar5 == 0) goto LAB_06b3bba0;
    FUN_04af773c(lVar5,uVar6,*(undefined8 *)PTR_DAT_07279fb8);
  }
  puVar1 = 
  Method_System_Threading_Tasks_TaskCompletionSource<OvrAvatarManager_AvatarRequestBoolResults>__ctor__
  ;
  plVar9 = *(long **)(unaff_x19 + 0xa0);
  if (plVar9 != (long *)0x0) {
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)
             Method_System_Threading_Tasks_TaskCompletionSource<OvrAvatarManager_AvatarRequestBoolResults>__ctor__
           ) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06b3b748;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_032937ac(plVar9,*(long *)
                                  Method_System_Threading_Tasks_TaskCompletionSource<OvrAvatarManager_AvatarRequestBoolResults>__ctor__
                          ,0);
LAB_06b3b748:
    lVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    uVar6 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
                              );
    FUN_04af414c();
    if (lVar5 == 0) goto LAB_06b3bba0;
    FUN_04af773c(lVar5,uVar6,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfValue<InternedString>__
                );
    plVar9 = *(long **)(unaff_x19 + 0xa0);
    if (plVar9 == (long *)0x0) goto LAB_06b3bba0;
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_06b3b7f8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_032937ac(plVar9,*(long *)puVar1,1);
LAB_06b3b7f8:
    lVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    uVar6 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_Pointer>__
                              );
    FUN_04af414c();
    if (lVar5 == 0) goto LAB_06b3bba0;
    FUN_04af773c(lVar5,uVar6,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputDevice,_InputDevice>__
                );
  }
  puVar1 = Method_System_Tuple<Vector3,_Vector3>_get_Item2__;
  plVar9 = *(long **)(unaff_x19 + 0xa8);
  if (plVar9 != (long *)0x0) {
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)Method_System_Tuple<Vector3,_Vector3>_get_Item2__) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06b3b8ac;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_032937ac(plVar9,*(long *)Method_System_Tuple<Vector3,_Vector3>_get_Item2__,0);
LAB_06b3b8ac:
    lVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    uVar6 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0728f0f8);
    FUN_04af414c();
    if (lVar5 == 0) goto LAB_06b3bba0;
    FUN_04af773c(lVar5,uVar6,*(undefined8 *)PTR_DAT_0728f108);
    plVar9 = *(long **)(unaff_x19 + 0xa8);
    if (plVar9 == (long *)0x0) goto LAB_06b3bba0;
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto UnityEngine_SoftJointLimit__set_limit;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_032937ac(plVar9,*(long *)puVar1,1);
UnityEngine_SoftJointLimit__set_limit:
    lVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    uVar6 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0728f0f0);
    FUN_04af414c();
    if (lVar5 == 0) goto LAB_06b3bba0;
    FUN_04af773c(lVar5,uVar6,*(undefined8 *)PTR_DAT_0728f100);
  }
  plVar9 = *(long **)(unaff_x19 + 0xb0);
  if (plVar9 != (long *)0x0) {
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XRAnchor>__ctor__) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06b3ba10;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_032937ac(plVar9,*(long *)
                                  Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XRAnchor>__ctor__
                          ,0);
LAB_06b3ba10:
    plVar9 = (long *)(*(code *)*puVar4)(plVar9,puVar4[1]);
    uVar6 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ad50);
    FUN_05020914();
    if (plVar9 == (long *)0x0) goto LAB_06b3bba0;
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)
             Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
           ) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06b3baa4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_032937ac(plVar9,*(long *)
                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
                          ,0);
LAB_06b3baa4:
    uVar6 = (*(code *)*puVar4)(plVar9,uVar6,puVar4[1]);
    if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_06b3bba0;
    FUN_06a5b940(*(long *)(unaff_x19 + 0x48),uVar6,0);
  }
  plVar9 = *(long **)(unaff_x19 + 0x88);
  *(undefined1 *)(unaff_x19 + 0xd1) = 0;
  if (plVar9 == (long *)0x0) {
LAB_06b3bb38:
    bVar3 = 1;
  }
  else {
    lVar5 = *plVar9;
    bVar3 = *(byte *)(*(long *)PTR_DAT_0727ad30 + 0x130);
    if ((*(byte *)(lVar5 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_0727ad30)) {
      bVar3 = *(byte *)(*(long *)PTR_DAT_072804a8 + 0x130);
      if ((*(byte *)(lVar5 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_072804a8))
      goto LAB_06b3bb38;
      bVar3 = FUN_06be6054(plVar9,0);
    }
    else {
      lVar5 = plVar9[7];
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar7 = FUN_06be9890(lVar5,0,0);
      if ((uVar7 & 1) == 0) {
        bVar3 = 0;
      }
      else {
        if (plVar9[7] == 0) goto LAB_06b3bba0;
        bVar3 = FUN_06ac5fe8(plVar9[7],*(undefined8 *)(unaff_x19 + 0x88),0);
      }
    }
    bVar3 = bVar3 & 1;
  }
  *(byte *)(unaff_x19 + 0xd2) = bVar3;
  FUN_06b39cf4();
  return;
}


