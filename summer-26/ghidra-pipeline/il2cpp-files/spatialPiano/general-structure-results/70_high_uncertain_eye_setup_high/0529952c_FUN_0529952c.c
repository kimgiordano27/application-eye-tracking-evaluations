/*
FUNCTION_NAME: FUN_0529952c
ENTRY_POINT: 0529952c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


uint FUN_0529952c(long param_1,undefined4 param_2,uint *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = OVROverlay_LayerTexture___TypeInfo;
  if ((DAT_06bbaccb & 1) == 0) {
    FUN_02f08768(OVRPlugin_AppPerfFrameStats___TypeInfo);
    FUN_02f08768(PTR_DAT_067ce198);
    FUN_02f08768(OVRPlugin_BodyJointLocation___TypeInfo);
    FUN_02f08768(OVROverlay_LayerTexture___TypeInfo);
    DAT_06bbaccb = 1;
  }
  lVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
  FUN_05116b38(lVar5,0);
  puVar3 = OVRPlugin_BodyJointLocation___TypeInfo;
  puVar2 = OVRPlugin_AppPerfFrameStats___TypeInfo;
  puVar1 = PTR_DAT_067ce198;
  if (lVar5 != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    *(undefined4 *)(lVar5 + 0x10) = param_2;
    uVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
    FUN_03f65840(uVar6,lVar5,*(undefined8 *)puVar3,0);
    uVar4 = FUN_0355b3cc(uVar7,uVar6,*(undefined8 *)puVar2);
    *param_3 = uVar4;
    return ~uVar4 >> 0x1f;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


