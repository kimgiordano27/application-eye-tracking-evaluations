/*
FUNCTION_NAME: OVRPlugin.OVRP_1_87_0$$ovrp_SetControllerDrivenHandPosesAreNatural
ENTRY_POINT: 05bf70f4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_87_0__ovrp_SetControllerDrivenHandPosesAreNatural
               (long *param_1,long param_2,undefined4 *param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar1 = *(uint *)(param_2 + 0x18);
  uVar2 = 0;
  puVar3 = (undefined4 *)(param_2 + 0x2c);
  while ((ulong)uVar1 * 4 - uVar2 != 0) {
    lVar4 = *param_1;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar5 = (ulong)*(uint *)(lVar4 + 0x18);
    if (uVar5 <= uVar2) break;
    uVar8 = puVar3[-2];
    lVar4 = lVar4 + uVar2 * 4;
    uVar7 = puVar3[-1];
    uVar6 = *puVar3;
    *(undefined4 *)(lVar4 + 0x20) = puVar3[-3];
    if (((uVar5 <= uVar2 + 1) || (*(undefined4 *)(lVar4 + 0x24) = uVar8, uVar5 <= uVar2 + 2)) ||
       (*(undefined4 *)(lVar4 + 0x28) = uVar7, uVar5 <= uVar2 + 3)) break;
    uVar2 = uVar2 + 4;
    puVar3 = puVar3 + 4;
    *(undefined4 *)(lVar4 + 0x2c) = uVar6;
    if (uVar2 == 0x60) {
      *(undefined4 *)(param_1 + 1) = param_3[3];
      *(undefined4 *)((long)param_1 + 0xc) = param_3[4];
      *(undefined4 *)(param_1 + 2) = param_3[5];
      *(undefined4 *)((long)param_1 + 0x14) = param_3[6];
      *(undefined4 *)(param_1 + 3) = *param_3;
      *(undefined4 *)((long)param_1 + 0x1c) = param_3[1];
      *(undefined4 *)(param_1 + 4) = param_3[2];
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


