/*
FUNCTION_NAME: FUN_0526a1b4
ENTRY_POINT: 0526a1b4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_1;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


void FUN_0526a1b4(long param_1,int param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 local_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((DAT_066cfe26 & 1) == 0) {
    FUN_02b3c81c(UnityEngine_Analytics_SubsystemsAnalyticStart_TypeInfo);
    FUN_02b3c81c(PTR_DAT_0631c498);
    DAT_066cfe26 = 1;
  }
  puVar3 = PTR_DAT_0631c498;
  auVar2._8_8_ = local_48._8_8_;
  auVar2._0_8_ = local_48._0_8_;
  uVar4 = local_48._4_4_;
  switch(*(undefined4 *)(param_1 + 0x14)) {
  case 3:
    local_48[0] = param_2 != 0;
    uVar5 = *(undefined8 *)(PTR_DAT_06312310 + 0x28);
    break;
  case 4:
    if (0xffff < param_2) goto LAB_0526a3a8;
    uVar5 = *(undefined8 *)(PTR_DAT_06312310 + 0x88);
LAB_0526a334:
    local_48._0_2_ = (short)param_2;
    break;
  case 5:
    if (0x7f < param_2) goto LAB_0526a3a8;
    uVar5 = *(undefined8 *)(PTR_DAT_06312310 + 0x30);
LAB_0526a2f0:
    local_48[0] = (char)param_2;
    break;
  case 6:
    if (param_2 < 0x100) {
      uVar5 = *(undefined8 *)(PTR_DAT_06312310 + 0x18);
      goto LAB_0526a2f0;
    }
    goto LAB_0526a3a8;
  case 7:
    if (param_2 < 0x8000) {
      uVar5 = *(undefined8 *)(PTR_DAT_06312310 + 0x38);
      goto LAB_0526a334;
    }
    goto LAB_0526a3a8;
  case 8:
    if (param_2 < 0x10000) {
      uVar5 = *(undefined8 *)(PTR_DAT_06312310 + 0x40);
      goto LAB_0526a334;
    }
LAB_0526a3a8:
    if (*(long *)(lVar1 + 0x28) == local_38) {
      uVar5 = FUN_02b3cad4();
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar5,*(undefined8 *)UnityEngine_Analytics_SubsystemsAnalyticStart_TypeInfo);
    }
    goto LAB_0526a400;
  case 9:
    uVar5 = *(undefined8 *)(PTR_DAT_06312310 + 0x48);
    goto LAB_0526a348;
  case 10:
    uVar5 = *(undefined8 *)(PTR_DAT_06312310 + 0x50);
LAB_0526a348:
    local_48._0_4_ = param_2;
    local_48._0_8_ = CONCAT44(uVar4,local_48._0_4_);
    break;
  case 0xb:
    uVar5 = *(undefined8 *)(PTR_DAT_06312310 + 0x68);
    goto LAB_0526a378;
  case 0xc:
    uVar5 = *(undefined8 *)(PTR_DAT_06312310 + 0x70);
LAB_0526a378:
    local_48._0_8_ = (long)param_2;
    break;
  case 0xd:
    uVar5 = *(undefined8 *)(PTR_DAT_06312310 + 0x78);
    local_48._0_4_ = (float)param_2;
    local_48._0_8_ = CONCAT44(uVar4,local_48._0_4_);
    break;
  case 0xe:
    local_48._0_8_ = (double)param_2;
    uVar5 = *(undefined8 *)(PTR_DAT_06312310 + 0x80);
    break;
  case 0xf:
    if (*(int *)(*(long *)PTR_DAT_0631c498 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    local_48 = FUN_04dda47c(param_2,0);
    uVar5 = *(undefined8 *)puVar3;
    break;
  default:
    uVar5 = FUN_05279718(0);
    auVar2._8_8_ = local_48._8_8_;
    auVar2._0_8_ = local_48._0_8_;
    if (*(long *)(lVar1 + 0x28) == local_38) {
      uVar6 = thunk_FUN_02ba3594(UnityEngine_Analytics_SubsystemsAnalyticStart_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar5,uVar6);
    }
    goto LAB_0526a400;
  }
  DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(uVar5,local_48);
  auVar2 = local_48;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_0526a400:
  local_48 = auVar2;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


