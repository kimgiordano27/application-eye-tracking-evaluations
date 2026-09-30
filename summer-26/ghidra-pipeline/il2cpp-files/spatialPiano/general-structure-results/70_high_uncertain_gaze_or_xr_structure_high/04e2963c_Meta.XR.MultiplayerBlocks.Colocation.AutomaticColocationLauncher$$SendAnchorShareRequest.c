/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$SendAnchorShareRequest
ENTRY_POINT: 04e2963c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__SendAnchorShareRequest
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5,
               int param_6,long param_7)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  if ((DAT_06bb7e41 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9840);
    DAT_06bb7e41 = 1;
  }
  puVar1 = PTR_DAT_067c9840;
  if ((int)param_5 < (int)(param_6 + param_5)) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar5 = (long)(int)(param_6 + param_5) - (long)(int)param_5;
    lVar4 = param_2 + (long)(int)param_5 * 0x10 + 0x20;
    do {
      uVar3 = *(uint *)(param_2 + 0x18);
      if (uVar3 <= param_5) {
LAB_04e29724:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        uVar3 = *(uint *)(param_2 + 0x18);
      }
      if (uVar3 <= param_5) goto LAB_04e29724;
      uVar2 = FUN_0628d45c(lVar4,param_3,param_4,
                           *(undefined8 *)(*(long *)(*(long *)(param_7 + 0x20) + 0xc0) + 0x10));
      if ((uVar2 & 1) != 0) {
        return param_5;
      }
      lVar5 = lVar5 + -1;
      lVar4 = lVar4 + 0x10;
      param_5 = param_5 + 1;
    } while (lVar5 != 0);
  }
  return 0xffffffff;
}


