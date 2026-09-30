/*
FUNCTION_NAME: FUN_054855cc
ENTRY_POINT: 054855cc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void FUN_054855cc(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint local_44;
  
  if ((DAT_066d0ff5 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06313048);
    FUN_02b3c81c(System_TimeZoneInfo_CachedData_TypeInfo);
    FUN_02b3c81c(
                UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_TargetCondition_CheckConditionBursted_00000227_BurstDirectCall_TypeInfo
                );
    FUN_02b3c81c(PTR_DAT_0632f848);
    FUN_02b3c81c(
                UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_TargetCondition_CheckConditionBursted_00000227_PostfixBurstDelegate_TypeInfo
                );
    DAT_066d0ff5 = 1;
  }
  puVar2 = 
  UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_TargetCondition_CheckConditionBursted_00000227_PostfixBurstDelegate_TypeInfo
  ;
  puVar1 = System_TimeZoneInfo_CachedData_TypeInfo;
  if (param_2 != (long *)0x0) {
    lVar4 = (**(code **)(*param_2 + 0x1e8))(param_2,*(undefined8 *)(*param_2 + 0x1f0));
    if ((lVar4 == 0) || (*(int *)(lVar4 + 0x10) == 0)) {
      uVar5 = FUN_0557fa0c(*(undefined8 *)PTR_DAT_0632f848,0);
      FUN_055bdfd0(param_1,*(undefined8 *)puVar2,0,uVar5,param_2,0);
    }
    lVar4 = FUN_0557df48(lVar4,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)puVar1);
    }
    uVar3 = FUN_0557cf7c(lVar4,0,0);
    if (lVar4 != 0) {
      if (uVar3 == *(uint *)(lVar4 + 0x10)) {
        plVar6 = *(long **)(param_1 + 0x10);
        if (plVar6 != (long *)0x0) {
          uVar5 = (**(code **)(*plVar6 + 0x1a8))(plVar6,lVar4,*(undefined8 *)(*plVar6 + 0x1b0));
                    /* WARNING: Could not recover jumptable at 0x05485720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_2 + 0x1f8))(param_2,uVar5,*(undefined8 *)(*param_2 + 0x200));
          return;
        }
      }
      else {
        lVar7 = FUN_0557fcc4(lVar4,uVar3,0);
        plVar6 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,3);
        if (lVar7 != 0) {
          if (*(int *)(lVar7 + 0x18) == 0) goto LAB_0548587c;
          if (plVar6 != (long *)0x0) {
            lVar9 = *(long *)(lVar7 + 0x20);
            if ((lVar9 != 0) &&
               (lVar8 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
            goto LAB_05485880;
            if ((int)plVar6[3] != 0) {
              plVar6[4] = lVar9;
              thunk_FUN_02bb0e9c(plVar6 + 4,lVar9);
              if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) != 0) {
                lVar7 = *(long *)(lVar7 + 0x28);
                if ((lVar7 != 0) &&
                   (lVar9 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0))
                {
LAB_05485880:
                  uVar5 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
                  FUN_02b3c988(uVar5,0);
                }
                if ((*(uint *)(plVar6 + 3) & 0xfffffffe) != 0) {
                  plVar6[5] = lVar7;
                  thunk_FUN_02bb0e9c(plVar6 + 5,lVar7);
                  local_44 = uVar3;
                  lVar7 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                    (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&local_44);
                  if ((lVar7 != 0) &&
                     (lVar9 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)
                     ) goto LAB_05485880;
                  if (2 < *(uint *)(plVar6 + 3)) {
                    plVar6[6] = lVar7;
                    thunk_FUN_02bb0e9c(plVar6 + 6,lVar7);
                    uVar5 = FUN_05580fc0(*(undefined8 *)
                                          UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_TargetCondition_CheckConditionBursted_00000227_BurstDirectCall_TypeInfo
                                         ,plVar6,0);
                    FUN_055bdfd0(param_1,*(undefined8 *)puVar2,lVar4,uVar5,param_2,0);
                    return;
                  }
                }
              }
            }
LAB_0548587c:
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


