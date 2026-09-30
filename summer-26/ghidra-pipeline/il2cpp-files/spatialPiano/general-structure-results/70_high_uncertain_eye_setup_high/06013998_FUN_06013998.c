/*
FUNCTION_NAME: FUN_06013998
ENTRY_POINT: 06013998
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_5
*/


void FUN_06013998(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__837_106__;
  if ((DAT_06bc5312 & 1) == 0) {
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_106__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_107__);
    DAT_06bc5312 = 1;
  }
  FUN_03ec2dc4(param_1,param_2,*(undefined8 *)puVar2);
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)Method_OVRPlugin_<>c_<_cctor>b__837_107__ + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Method_OVRPlugin_<>c_<_cctor>b__837_107__)) {
      uVar3 = *(undefined4 *)((long)param_2 + 0x24);
      *(char *)(param_1 + 0x20) = (char)param_2[4];
      *(undefined4 *)(param_1 + 0x24) = uVar3;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48(param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


