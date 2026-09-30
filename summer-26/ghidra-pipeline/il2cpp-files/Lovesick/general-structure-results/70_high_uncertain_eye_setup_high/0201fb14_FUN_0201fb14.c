/*
FUNCTION_NAME: FUN_0201fb14
ENTRY_POINT: 0201fb14
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_0201fb14(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__796_105__;
  if ((DAT_037809a1 & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    DAT_037809a1 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x18);
  if (lVar2 == 0) {
    uVar4 = 0;
    *param_2 = 0;
  }
  else {
    while( true ) {
      lVar2 = *(long *)(lVar2 + 0x18);
      *param_2 = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
      local_60 = *(undefined8 *)(lVar2 + 0x30);
      uStack_68 = *(undefined8 *)(lVar2 + 0x28);
      local_70 = *(undefined8 *)(lVar2 + 0x20);
      local_40 = param_1[2];
      uStack_48 = param_1[1];
      local_50 = *param_1;
      uVar3 = FUN_02021b88(&local_70,&local_50);
      if ((uVar3 & 1) != 0) break;
      lVar2 = *param_2;
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}


