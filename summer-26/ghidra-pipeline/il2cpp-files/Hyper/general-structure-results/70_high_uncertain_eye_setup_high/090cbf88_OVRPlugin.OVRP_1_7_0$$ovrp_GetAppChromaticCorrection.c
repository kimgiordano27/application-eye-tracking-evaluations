/*
FUNCTION_NAME: OVRPlugin.OVRP_1_7_0$$ovrp_GetAppChromaticCorrection
ENTRY_POINT: 090cbf88
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_7_0__ovrp_GetAppChromaticCorrection(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  
  lVar6 = thunk_FUN_04983f60(param_1);
  FUN_08dbf2f0(lVar6,0);
  puVar4 = PTR_DAT_0ac79628;
  puVar3 = PTR_DAT_0ac79620;
  puVar2 = PTR_DAT_0ac79618;
  puVar1 = PTR_DAT_0ac76fb8;
  if (lVar6 != 0) {
    uVar10 = 0;
    *(undefined4 *)(lVar6 + 0x10) = 0;
    while( true ) {
      lVar7 = *(long *)puVar1;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar7 = *(long *)puVar1;
      }
      uVar9 = **(undefined8 **)(lVar7 + 0xb8);
      uVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
      FUN_0718aae0(uVar8,lVar6,*(undefined8 *)puVar4,0);
      uVar5 = FUN_05624d04(uVar9,uVar8,*(undefined8 *)puVar2);
      if (param_2 == 0) break;
      if (*(uint *)(param_2 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      *(undefined4 *)(param_2 + (long)(int)uVar10 * 4 + 0x20) = uVar5;
      uVar10 = *(int *)(lVar6 + 0x10) + 1;
      *(uint *)(lVar6 + 0x10) = uVar10;
      if (0x19 < (int)uVar10) {
        return param_2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


