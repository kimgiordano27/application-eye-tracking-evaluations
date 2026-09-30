/*
FUNCTION_NAME: OVRPlugin.Sizei$$GetHashCode
ENTRY_POINT: 01da93dc
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Sizei__GetHashCode(long param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  if ((*(byte *)(unaff_x22 + 0x983) & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_02359f98);
    *(undefined1 *)(unaff_x22 + 0x983) = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  thunk_FUN_00ffe618();
  if (param_2 != 0) {
    lVar2 = FUN_01a371c8(param_2,param_3,uVar4,*(undefined8 *)PTR_DAT_02359f98);
    lVar3 = *(long *)(param_1 + 0x30);
    thunk_FUN_00ffe618();
    if (lVar2 != lVar3) {
      return;
    }
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + 0x28);
      uVar1 = FUN_01d8c0b0(0);
      if (lVar3 != 0) {
        thunk_FUN_00ffe618();
        *(undefined4 *)(lVar3 + 0x24) = uVar1;
        FUN_01da9500(lVar2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


