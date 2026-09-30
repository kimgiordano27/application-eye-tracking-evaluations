/*
FUNCTION_NAME: FUN_05f77730
ENTRY_POINT: 05f77730
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05f77730(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if ((DAT_066dd44f & 1) == 0) {
    FUN_02b3c81c(StringLiteral_668);
    FUN_02b3c81c(Method_OVRPlugin_PinnedArray<Guid>_Dispose__);
    FUN_02b3c81c(Method_UnityEngine_Component_GetComponentInChildren<Grabbable>__);
    FUN_02b3c81c(PTR_DAT_063132e8);
    FUN_02b3c81c(PTR_DAT_06312cb0);
    FUN_02b3c81c(Method_UnityEngine_Component_GetComponentInChildren<HandGrabInteractable>__);
    FUN_02b3c81c(PTR_DAT_06312520);
    FUN_02b3c81c(Method_System_Uri_get_Query__);
    FUN_02b3c81c(PTR_DAT_0631e1d8);
    FUN_02b3c81c(StringLiteral_669);
    DAT_066dd44f = 1;
  }
  uVar3 = FUN_05c988dc(0);
  if ((((uVar3 & 1) == 0) || (*(char *)(param_1 + 0x210) != '\0')) ||
     (uVar3 = FUN_05f7004c(param_1), (uVar3 & 1) != 0)) {
    puVar1 = PTR_DAT_06312520;
    uVar8 = *(undefined8 *)(param_1 + 0x1b8);
    if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar3 = FUN_05c8e378(uVar8,0,0);
    if ((uVar3 & 1) != 0) {
      uVar8 = *(undefined8 *)(param_1 + 0x108);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar3 = FUN_05c8c45c(uVar8,0,0);
      if ((uVar3 & 1) != 0) {
        lVar4 = FUN_05c89340(param_1,0);
        if (lVar4 == 0) goto LAB_05f77b60;
        uVar8 = thunk_FUN_05c92238(lVar4,0);
        uVar8 = FUN_04bffdac(uVar8,*(undefined8 *)StringLiteral_669,0);
        plVar5 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_0631e1d8,2);
        uVar9 = *(undefined8 *)Method_System_Uri_get_Query__;
        if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
        }
        lVar4 = FUN_04d8a7b0(uVar9,0);
        if (plVar5 == (long *)0x0) goto LAB_05f77b60;
        if ((lVar4 != 0) &&
           (lVar6 = thunk_FUN_02b79548(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
LAB_05f77b68:
          uVar8 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
          FUN_02b3c988(uVar8,0);
        }
        if ((int)plVar5[3] == 0) {
LAB_05f77b64:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        plVar5[4] = lVar4;
        thunk_FUN_02bb0e9c(plVar5 + 4,lVar4);
        lVar4 = FUN_04d8a7b0(*(undefined8 *)StringLiteral_668,0);
        if ((lVar4 != 0) &&
           (lVar6 = thunk_FUN_02b79548(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
        goto LAB_05f77b68;
        if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) goto LAB_05f77b64;
        plVar5[5] = lVar4;
        thunk_FUN_02bb0e9c(plVar5 + 5,lVar4);
        lVar4 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06312cb0);
        FUN_05c8d6c0(lVar4,uVar8,plVar5,0);
        if (lVar4 == 0) goto LAB_05f77b60;
        FUN_05c9364c(lVar4,0x34,0);
        lVar6 = FUN_05c8c8e0(lVar4,0);
        if (((*(long *)(param_1 + 0x108) == 0) ||
            (lVar7 = FUN_05c89340(*(long *)(param_1 + 0x108),0), lVar7 == 0)) ||
           (uVar8 = thunk_FUN_05c9c9cc(lVar7,0), lVar6 == 0)) goto LAB_05f77b60;
        FUN_05c9ca60(lVar6,uVar8,0);
        lVar6 = FUN_05c8c8e0(lVar4,0);
        if (lVar6 == 0) goto LAB_05f77b60;
        FUN_05c9df1c(lVar6,0);
        lVar6 = FUN_05c89410(param_1,0);
        if (lVar6 == 0) goto LAB_05f77b60;
        uVar2 = FUN_05c8c9b0(lVar6,0);
        FUN_05c8ca64(lVar4,uVar2,0);
        uVar8 = FUN_031d80b0(lVar4,*(undefined8 *)PTR_DAT_063132e8);
        *(undefined8 *)(param_1 + 0x1a0) = uVar8;
        thunk_FUN_02bb0e9c(param_1 + 0x1a0,uVar8);
        uVar8 = FUN_031d80b0(lVar4,*(undefined8 *)
                                    Method_UnityEngine_Component_GetComponentInChildren<Grabbable>__
                            );
        *(undefined8 *)(param_1 + 0x1b8) = uVar8;
        thunk_FUN_02bb0e9c(param_1 + 0x1b8,uVar8);
        lVar6 = *(long *)(param_1 + 0x1b8);
        plVar5 = *(long **)(param_1 + 0x108);
        if (*(int *)(*(long *)
                      Method_UnityEngine_Component_GetComponentInChildren<HandGrabInteractable>__ +
                    0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar8 = FUN_05d9077c(0);
        if (plVar5 == (long *)0x0) goto LAB_05f77b60;
        uVar8 = (**(code **)(*plVar5 + 0x4d8))(plVar5,uVar8,*(undefined8 *)(*plVar5 + 0x4e0));
        uVar9 = FUN_05c69330(0);
        if (lVar6 == 0) goto LAB_05f77b60;
        FUN_05f6bccc(lVar6,uVar8,uVar9,0);
        plVar5 = (long *)FUN_031d8020(lVar4,*(undefined8 *)
                                             Method_OVRPlugin_PinnedArray<Guid>_Dispose__);
        if (plVar5 == (long *)0x0) goto LAB_05f77b60;
        (**(code **)(*plVar5 + 0x2f8))(plVar5,1,*(undefined8 *)(*plVar5 + 0x300));
        FUN_05f730dc(param_1);
      }
    }
    uVar8 = *(undefined8 *)(param_1 + 0x1b8);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar3 = FUN_05c8e378(uVar8,0,0);
    if ((uVar3 & 1) == 0) {
      uVar8 = FUN_05f6fee0(param_1);
      FUN_05f77b7c(param_1,uVar8);
      lVar4 = *(long *)(param_1 + 0x1b8);
      uVar8 = FUN_05f6fee0(param_1);
      if (lVar4 != 0) {
        FUN_05f6baf8(lVar4,uVar8,0);
        return;
      }
LAB_05f77b60:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
  }
  return;
}


