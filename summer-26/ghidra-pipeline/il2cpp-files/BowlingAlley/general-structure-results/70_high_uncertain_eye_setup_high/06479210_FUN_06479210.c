/*
FUNCTION_NAME: FUN_06479210
ENTRY_POINT: 06479210
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


undefined1  [16] FUN_06479210(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  puVar3 = Oculus_Avatar2_OvrPluginTracking_OvrPluginInputTrackingProvider_TypeInfo;
  if ((DAT_076df381 & 1) == 0) {
    thunk_FUN_032e1da0(Oculus_Avatar2_OvrPluginTracking_OvrPluginInputTrackingProvider_TypeInfo);
    DAT_076df381 = 1;
  }
  uVar2 = *param_1;
  iVar1 = 8;
  if (param_2 != 0xc) {
    iVar1 = param_2;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar6 = FUN_06478f74(uVar2,iVar1);
  uVar7 = FUN_06478f74(param_1[1],iVar1);
  uVar4 = FUN_06478f74(param_1[2],iVar1);
  lVar8 = FUN_06478f74(param_1[3],iVar1);
  uVar9 = FUN_06478f74(param_1[4],iVar1);
  uVar10 = FUN_06478f74(param_1[5],iVar1);
  uVar5 = FUN_06478f74(param_1[6],iVar1);
  lVar11 = FUN_06478f74(param_1[7],iVar1);
  auVar12._8_8_ =
       uVar9 & 0xffff | (uVar10 & 0xffff) << 0x10 | (ulong)(uVar5 & 0xffff) << 0x20 | lVar11 << 0x30
  ;
  auVar12._0_8_ =
       uVar6 & 0xffff | (uVar7 & 0xffff) << 0x10 | (ulong)(uVar4 & 0xffff) << 0x20 | lVar8 << 0x30;
  return auVar12;
}


