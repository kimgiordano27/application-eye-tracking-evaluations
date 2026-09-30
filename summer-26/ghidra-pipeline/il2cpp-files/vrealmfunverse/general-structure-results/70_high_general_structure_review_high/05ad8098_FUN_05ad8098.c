/*
FUNCTION_NAME: FUN_05ad8098
ENTRY_POINT: 05ad8098
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_4;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void FUN_05ad8098(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_30;
  long local_28;
  
  puVar2 = System_Func<IMEEvent>_TypeInfo;
  if ((DAT_066d444b & 1) == 0) {
    FUN_02b3c81c(Method_RootMotion_FinalIK_FBBIKArmBending_OnPostFBBIK__);
    FUN_02b3c81c(Method_RootMotion_FinalIK_FBBIKHeadEffector_Iterate__);
    FUN_02b3c81c(Method_RootMotion_FinalIK_FBBIKHeadEffector_OnFixTransforms__);
    FUN_02b3c81c(Method_RootMotion_FinalIK_FBBIKHeadEffector_OnPostUpdate__);
    FUN_02b3c81c(Method_RootMotion_FinalIK_FBBIKHeadEffector_OnPreRead__);
    FUN_02b3c81c(System_Func<IMEEvent>_TypeInfo);
    FUN_02b3c81c(Method_RootMotion_FinalIK_FBBIKHeadEffector_OnStoreDefaultLocalState__);
    FUN_02b3c81c(Method_RootMotion_Demos_FBIKHandsOnProp_OnPreRead__);
    FUN_02b3c81c(PTR_DAT_06312cb0);
    FUN_02b3c81c(PTR_DAT_06312520);
    FUN_02b3c81c(PTR_DAT_0631e1d8);
    FUN_02b3c81c(Method_RootMotion_Demos_FXCollisionBlood_OnCollisionImpulse__);
    DAT_066d444b = 1;
  }
  puVar1 = PTR_DAT_06312520;
  local_30 = 0;
  local_28 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar3 = FUN_05f9b768(0);
  lVar7 = *(long *)puVar1;
  local_28 = lVar3;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(lVar7);
  }
  uVar4 = FUN_05c8e378(lVar3,0,0);
  puVar2 = Method_RootMotion_FinalIK_FBBIKArmBending_OnPostFBBIK__;
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)Method_RootMotion_FinalIK_FBBIKHeadEffector_Iterate__ + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar4 = FUN_042ea558(&local_28,*(undefined8 *)puVar2);
    if ((uVar4 & 1) == 0) {
      plVar5 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_0631e1d8,1);
      uVar6 = *(undefined8 *)Method_RootMotion_FinalIK_FBBIKHeadEffector_OnPreRead__;
      if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
      }
      lVar3 = FUN_04d8a7b0(uVar6,0);
      if (plVar5 == (long *)0x0) goto LAB_05ad8350;
      if ((lVar3 != 0) &&
         (lVar7 = thunk_FUN_02b79548(lVar3,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
        uVar6 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar6,0);
      }
      if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      plVar5[4] = lVar3;
      thunk_FUN_02bb0e9c(plVar5 + 4,lVar3);
      lVar3 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06312cb0);
      FUN_05c8d6c0(lVar3,*(undefined8 *)
                          Method_RootMotion_Demos_FXCollisionBlood_OnCollisionImpulse__,plVar5,0);
      if (lVar3 == 0) goto LAB_05ad8350;
      local_28 = FUN_031d80b0(lVar3,*(undefined8 *)
                                     Method_RootMotion_Demos_FBIKHandsOnProp_OnPreRead__);
    }
    else {
      if (local_28 == 0) goto LAB_05ad8350;
      uVar4 = FUN_0317392c(local_28,&local_30,
                           *(undefined8 *)
                            Method_RootMotion_FinalIK_FBBIKHeadEffector_OnFixTransforms__);
      uVar6 = local_30;
      if ((uVar4 & 1) != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_05c93130(uVar6,0);
      }
    }
  }
  if (local_28 == 0) {
LAB_05ad8350:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar4 = FUN_0317392c(local_28,param_1 + 0x10,
                       *(undefined8 *)Method_RootMotion_FinalIK_FBBIKHeadEffector_OnPostUpdate__);
  if ((uVar4 & 1) == 0) {
    if ((local_28 == 0) || (lVar3 = FUN_05c89410(local_28,0), lVar3 == 0)) goto LAB_05ad8350;
    uVar6 = FUN_031d8020(lVar3,*(undefined8 *)
                                Method_RootMotion_FinalIK_FBBIKHeadEffector_OnStoreDefaultLocalState__
                        );
    *(undefined8 *)(param_1 + 0x10) = uVar6;
    thunk_FUN_02bb0e9c(param_1 + 0x10,uVar6);
  }
  return;
}


