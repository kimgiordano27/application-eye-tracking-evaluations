/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__657_65
ENTRY_POINT: 076ed078
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__657_65(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_08fae638;
  if ((DAT_09548363 & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f66370);
    FUN_0403162c(PTR_DAT_08fae640);
    FUN_0403162c(PTR_DAT_08fae648);
    FUN_0403162c(PTR_DAT_08fae650);
    FUN_0403162c(PTR_DAT_08fae638);
    DAT_09548363 = 1;
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0408f364();
    lVar3 = *(long *)puVar2;
  }
  puVar4 = *(undefined8 **)(lVar3 + 0xb8);
  lVar5 = puVar4[1];
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      puVar4 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar4;
    lVar5 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f66370);
    FUN_07449f28(lVar5,uVar6,*(undefined8 *)PTR_DAT_08fae650,0);
    *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar5;
  }
  puVar2 = PTR_DAT_08fae640;
  if (param_1 != 0) {
    iVar1 = *(int *)(*(long *)PTR_DAT_08fae648 + 0xe4);
    *(long *)(param_1 + 0x78) = lVar5;
    if (iVar1 == 0) {
      thunk_FUN_0408f364();
    }
    FUN_06dfbf60(param_1,*(undefined8 *)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


