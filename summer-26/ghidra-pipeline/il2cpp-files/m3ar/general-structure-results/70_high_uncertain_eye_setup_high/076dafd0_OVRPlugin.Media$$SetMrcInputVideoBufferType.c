/*
FUNCTION_NAME: OVRPlugin.Media$$SetMrcInputVideoBufferType
ENTRY_POINT: 076dafd0
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


bool OVRPlugin_Media__SetMrcInputVideoBufferType
               (undefined1 param_1 [16],float param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  float *unaff_x19;
  long unaff_x20;
  float *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  float fVar3;
  undefined8 uVar4;
  undefined4 unaff_s8;
  float unaff_s9;
  float unaff_s12;
  float fVar5;
  float fVar6;
  float fVar7;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float in_stack_00000010;
  undefined4 in_stack_00000020;
  
  fVar3 = (float)FUN_08596980(in_stack_00000020,param_3,0);
  *unaff_x19 = fVar3;
  unaff_x19[1] = param_2;
  unaff_x19[2] = unaff_s12;
  fVar5 = *unaff_x21;
  fVar7 = unaff_x21[1];
  fVar6 = unaff_x21[2];
  if (*(char *)(unaff_x23 + 0xe19) == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    *(undefined1 *)(unaff_x23 + 0xe19) = 1;
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  lVar2 = *(long *)(unaff_x20 + 0x20);
  unaff_x19[6] = SQRT((fVar6 - unaff_s12) * (fVar6 - unaff_s12) +
                      (fVar5 - fVar3) * (fVar5 - fVar3) + (fVar7 - param_2) * (fVar7 - param_2));
  if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) &&
     (lVar2 = FUN_085849e0(lVar2,0), lVar2 != 0)) {
    fVar3 = (float)FUN_08599d5c(unaff_s8,lVar2,0);
    if (*(char *)(unaff_x24 + 0xe18) == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      *(undefined1 *)(unaff_x24 + 0xe18) = 1;
    }
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar5 = SQRT(in_stack_00000010 * in_stack_00000010 + fVar3 * fVar3 + unaff_s9 * unaff_s9);
    if (fVar5 <= fStack0000000000000008) {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539c10 = '\x01';
      }
      uVar4 = **(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8);
      in_stack_00000010 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
    }
    else {
      in_stack_00000010 = in_stack_00000010 / fVar5;
      uVar4 = CONCAT44(unaff_s9 / fVar5,fVar3 / fVar5);
    }
    *(undefined8 *)(unaff_x19 + 3) = uVar4;
    unaff_x19[5] = in_stack_00000010;
    if (fStack000000000000000c <= 0.0) {
      bVar1 = true;
    }
    else {
      bVar1 = unaff_x19[6] <= fStack000000000000000c;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


