/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_UnityOpenXR_OnAppSpaceChange2
ENTRY_POINT: 07406b24
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_106_0__ovrp_UnityOpenXR_OnAppSpaceChange2
               (long *param_1,long param_2,undefined4 *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong in_x10;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar2 = 0;
  uVar3 = 0;
  puVar4 = (undefined4 *)(param_2 + 0x2c);
  while (uVar3 < in_x10) {
    lVar5 = *param_1;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
    if (uVar6 <= uVar2) break;
    uVar9 = puVar4[-2];
    uVar8 = puVar4[-1];
    uVar7 = *puVar4;
    lVar1 = lVar5 + uVar2 * 4;
    *(undefined4 *)(lVar1 + 0x20) = puVar4[-3];
    if ((uVar6 <= uVar2 + 1) || (*(undefined4 *)(lVar1 + 0x24) = uVar9, uVar6 <= uVar2 + 2)) break;
    lVar5 = lVar5 + uVar2 * 4;
    *(undefined4 *)(lVar5 + 0x28) = uVar8;
    if (uVar6 <= uVar2 + 3) break;
    uVar2 = uVar2 + 4;
    uVar3 = uVar3 + 1;
    puVar4 = puVar4 + 4;
    *(undefined4 *)(lVar5 + 0x2c) = uVar7;
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
  FUN_03c8fb38();
}


