/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnInstanceCreate
ENTRY_POINT: 076ddb14
PROGRAM: m3ar-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_UnityOpenXR__OnInstanceCreate(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x22;
  long *unaff_x23;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float unaff_s8;
  undefined4 unaff_s9;
  float unaff_s10;
  float unaff_s11;
  
  if (param_1 != 0) {
    lVar1 = FUN_085849e0(param_1,0);
    if (*(char *)(unaff_x22 + 0xe18) == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      *(undefined1 *)(unaff_x22 + 0xe18) = 1;
    }
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar4 = SQRT(unaff_s10 * unaff_s10 + unaff_s11 * unaff_s11);
    if (fVar4 <= unaff_s8) {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539c10 = '\x01';
      }
      fVar3 = (float)((ulong)**(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) >> 0x20);
      fVar4 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
    }
    else {
      fVar3 = 0.0 / fVar4;
      fVar4 = -unaff_s10 / fVar4;
    }
    if (lVar1 != 0) {
      uVar2 = FUN_08599d5c(lVar1,0);
      *(undefined4 *)(unaff_x19 + 0xc) = uVar2;
      *(float *)(unaff_x19 + 0x10) = fVar3;
      *(float *)(unaff_x19 + 0x14) = fVar4;
      uVar2 = FUN_076dd2c0(unaff_s9);
      *(undefined4 *)(unaff_x19 + 0x18) = uVar2;
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


