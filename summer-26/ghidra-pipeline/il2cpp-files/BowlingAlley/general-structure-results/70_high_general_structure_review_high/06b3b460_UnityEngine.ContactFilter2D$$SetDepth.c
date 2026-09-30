/*
FUNCTION_NAME: UnityEngine.ContactFilter2D$$SetDepth
ENTRY_POINT: 06b3b460
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_3;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_ContactFilter2D__SetDepth(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  byte bVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long in_x9;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *plVar8;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  
  piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar7 + -2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)(*piVar7 + 2) * 0x10 + 0x138);
      goto LAB_06b3b4a0;
    }
    in_x9 = in_x9 + -1;
    piVar7 = piVar7 + 4;
  } while (in_x9 != 0);
  puVar3 = (undefined8 *)FUN_032937ac();
LAB_06b3b4a0:
  lVar4 = (*(code *)*puVar3)();
  uVar5 = thunk_FUN_032a56a0(*unaff_x24);
  FUN_04af414c();
  if (lVar4 == 0) {
LAB_06b3bba0:
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  FUN_04af773c(lVar4,uVar5,*unaff_x25);
  plVar8 = *(long **)(unaff_x19 + 0x90);
  if (plVar8 == (long *)0x0) goto LAB_06b3bba0;
  lVar4 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x23) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 3) * 0x10 + 0x138);
        goto LAB_06b3b540;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_032937ac(plVar8,*unaff_x23,3);
LAB_06b3b540:
  lVar4 = (*(code *)*puVar3)(plVar8,puVar3[1]);
  uVar5 = thunk_FUN_032a56a0(*unaff_x26);
  FUN_04af414c();
  if (lVar4 == 0) goto LAB_06b3bba0;
  FUN_04af773c(lVar4,uVar5,*unaff_x27);
  puVar1 = PTR_DAT_0727ac80;
  plVar8 = *(long **)(unaff_x19 + 0x98);
  if (plVar8 != (long *)0x0) {
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0727ac80) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_06b3b5e4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_032937ac(plVar8,*(long *)PTR_DAT_0727ac80,0);
LAB_06b3b5e4:
    lVar4 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    uVar5 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07279f90);
    FUN_04af414c();
    if (lVar4 == 0) goto LAB_06b3bba0;
    FUN_04af773c(lVar4,uVar5,*(undefined8 *)PTR_DAT_07279fb0);
    plVar8 = *(long **)(unaff_x19 + 0x98);
    if (plVar8 == (long *)0x0) goto LAB_06b3bba0;
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_06b3b694;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_032937ac(plVar8,*(long *)puVar1,1);
LAB_06b3b694:
    lVar4 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    uVar5 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07279fa0);
    FUN_04af414c();
    if (lVar4 == 0) goto LAB_06b3bba0;
    FUN_04af773c(lVar4,uVar5,*(undefined8 *)PTR_DAT_07279fb8);
  }
  puVar1 = 
  Method_System_Threading_Tasks_TaskCompletionSource<OvrAvatarManager_AvatarRequestBoolResults>__ctor__
  ;
  plVar8 = *(long **)(unaff_x19 + 0xa0);
  if (plVar8 != (long *)0x0) {
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)
             Method_System_Threading_Tasks_TaskCompletionSource<OvrAvatarManager_AvatarRequestBoolResults>__ctor__
           ) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_06b3b748;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_032937ac(plVar8,*(long *)
                                  Method_System_Threading_Tasks_TaskCompletionSource<OvrAvatarManager_AvatarRequestBoolResults>__ctor__
                          ,0);
LAB_06b3b748:
    lVar4 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    uVar5 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
                              );
    FUN_04af414c();
    if (lVar4 == 0) goto LAB_06b3bba0;
    FUN_04af773c(lVar4,uVar5,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfValue<InternedString>__
                );
    plVar8 = *(long **)(unaff_x19 + 0xa0);
    if (plVar8 == (long *)0x0) goto LAB_06b3bba0;
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_06b3b7f8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_032937ac(plVar8,*(long *)puVar1,1);
LAB_06b3b7f8:
    lVar4 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    uVar5 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_Pointer>__
                              );
    FUN_04af414c();
    if (lVar4 == 0) goto LAB_06b3bba0;
    FUN_04af773c(lVar4,uVar5,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputDevice,_InputDevice>__
                );
  }
  puVar1 = Method_System_Tuple<Vector3,_Vector3>_get_Item2__;
  plVar8 = *(long **)(unaff_x19 + 0xa8);
  if (plVar8 != (long *)0x0) {
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)Method_System_Tuple<Vector3,_Vector3>_get_Item2__) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_06b3b8ac;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_032937ac(plVar8,*(long *)Method_System_Tuple<Vector3,_Vector3>_get_Item2__,0);
LAB_06b3b8ac:
    lVar4 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    uVar5 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0728f0f8);
    FUN_04af414c();
    if (lVar4 == 0) goto LAB_06b3bba0;
    FUN_04af773c(lVar4,uVar5,*(undefined8 *)PTR_DAT_0728f108);
    plVar8 = *(long **)(unaff_x19 + 0xa8);
    if (plVar8 == (long *)0x0) goto LAB_06b3bba0;
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto UnityEngine_SoftJointLimit__set_limit;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_032937ac(plVar8,*(long *)puVar1,1);
UnityEngine_SoftJointLimit__set_limit:
    lVar4 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    uVar5 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0728f0f0);
    FUN_04af414c();
    if (lVar4 == 0) goto LAB_06b3bba0;
    FUN_04af773c(lVar4,uVar5,*(undefined8 *)PTR_DAT_0728f100);
  }
  plVar8 = *(long **)(unaff_x19 + 0xb0);
  if (plVar8 != (long *)0x0) {
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XRAnchor>__ctor__) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_06b3ba10;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_032937ac(plVar8,*(long *)
                                  Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XRAnchor>__ctor__
                          ,0);
LAB_06b3ba10:
    plVar8 = (long *)(*(code *)*puVar3)(plVar8,puVar3[1]);
    uVar5 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ad50);
    FUN_05020914();
    if (plVar8 == (long *)0x0) goto LAB_06b3bba0;
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)
             Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
           ) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_06b3baa4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_032937ac(plVar8,*(long *)
                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
                          ,0);
LAB_06b3baa4:
    uVar5 = (*(code *)*puVar3)(plVar8,uVar5,puVar3[1]);
    if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_06b3bba0;
    FUN_06a5b940(*(long *)(unaff_x19 + 0x48),uVar5,0);
  }
  plVar8 = *(long **)(unaff_x19 + 0x88);
  *(undefined1 *)(unaff_x19 + 0xd1) = 0;
  if (plVar8 == (long *)0x0) {
LAB_06b3bb38:
    bVar2 = 1;
  }
  else {
    lVar4 = *plVar8;
    bVar2 = *(byte *)(*(long *)PTR_DAT_0727ad30 + 0x130);
    if ((*(byte *)(lVar4 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_0727ad30)) {
      bVar2 = *(byte *)(*(long *)PTR_DAT_072804a8 + 0x130);
      if ((*(byte *)(lVar4 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_072804a8))
      goto LAB_06b3bb38;
      bVar2 = FUN_06be6054(plVar8,0);
    }
    else {
      lVar4 = plVar8[7];
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar6 = FUN_06be9890(lVar4,0,0);
      if ((uVar6 & 1) == 0) {
        bVar2 = 0;
      }
      else {
        if (plVar8[7] == 0) goto LAB_06b3bba0;
        bVar2 = FUN_06ac5fe8(plVar8[7],*(undefined8 *)(unaff_x19 + 0x88),0);
      }
    }
    bVar2 = bVar2 & 1;
  }
  *(byte *)(unaff_x19 + 0xd2) = bVar2;
  FUN_06b39cf4();
  return;
}


