/*
FUNCTION_NAME: OVRPlugin$$GetLayerTextureStageCount
ENTRY_POINT: 076c6b58
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


undefined8 OVRPlugin__GetLayerTextureStageCount(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  uint in_w9;
  undefined8 *unaff_x19;
  long unaff_x22;
  float fVar3;
  undefined8 uVar4;
  
  if (in_w9 <= (uint)param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_04031894();
  }
  if (unaff_x22 == 0) {
LAB_076c6bf4:
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  if (*(char *)(unaff_x22 + 0x10) != '\0') {
    lVar2 = *(long *)(param_2 + param_1 * 8 + 0x20);
    if (lVar2 == 0) goto LAB_076c6bf4;
    if (*(char *)(lVar2 + 0x10) != '\0') {
      uVar1 = 1;
      uVar4 = CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 0x14) >> 0x20) -
                       (float)((ulong)*(undefined8 *)(unaff_x22 + 0x14) >> 0x20),
                       (float)*(undefined8 *)(lVar2 + 0x14) -
                       (float)*(undefined8 *)(unaff_x22 + 0x14));
      fVar3 = *(float *)(lVar2 + 0x1c) - *(float *)(unaff_x22 + 0x1c);
      goto LAB_076c6bdc;
    }
  }
  if (DAT_09539c10 == '\0') {
    FUN_0403162c(PTR_DAT_08f65568);
    DAT_09539c10 = '\x01';
  }
  uVar1 = 0;
  uVar4 = **(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8);
  fVar3 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
LAB_076c6bdc:
  *unaff_x19 = uVar4;
  *(float *)(unaff_x19 + 1) = fVar3;
  return uVar1;
}


