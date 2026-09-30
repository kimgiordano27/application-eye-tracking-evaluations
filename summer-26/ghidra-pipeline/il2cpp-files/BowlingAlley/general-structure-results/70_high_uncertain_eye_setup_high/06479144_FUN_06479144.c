/*
FUNCTION_NAME: FUN_06479144
ENTRY_POINT: 06479144
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined1  [16] FUN_06479144(ulong param_1,ulong param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  puVar2 = Oculus_Avatar2_OvrPluginTracking_OvrPluginInputTrackingProvider_TypeInfo;
  if ((DAT_076df380 & 1) == 0) {
    thunk_FUN_032e1da0(Oculus_Avatar2_OvrPluginTracking_OvrPluginInputTrackingProvider_TypeInfo);
    DAT_076df380 = 1;
  }
  iVar1 = 8;
  if (param_3 != 0xc) {
    iVar1 = param_3;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar4 = FUN_06478f74(param_1 & 0xffffffff,iVar1);
  uVar5 = FUN_06478f74(param_1 >> 0x20,iVar1);
  uVar3 = FUN_06478f74(param_2 & 0xffffffff,iVar1);
  lVar6 = FUN_06478f74(param_2 >> 0x20,iVar1);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar4 & 0xffff | (uVar5 & 0xffff) << 0x10 | (ulong)(uVar3 & 0xffff) << 0x20 |
                 lVar6 << 0x30;
  return auVar7;
}


