/*
FUNCTION_NAME: OVRPlugin.TextureRectMatrixf$$.cctor
ENTRY_POINT: 026cb4a4
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_TextureRectMatrixf___cctor(long param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  uint *unaff_x26;
  uint *puVar7;
  
  while( true ) {
    uVar5 = (**(code **)(param_1 + 0x158))(param_2,*(undefined8 *)(param_1 + 0x160));
    uVar2 = *(uint *)(unaff_x23 + 0x18);
    if (uVar2 <= unaff_x25) break;
    *unaff_x26 = uVar5 & 0x7fffffff;
    do {
      puVar7 = unaff_x26;
      unaff_x25 = unaff_x25 + 1;
      unaff_x26 = puVar7 + 6;
      if (unaff_x24 == unaff_x25) {
        if ((int)unaff_x24 < 1) goto LAB_026cb544;
        if (unaff_x23 == 0) goto LAB_026cb57c;
        uVar2 = *(uint *)(unaff_x23 + 0x18);
        uVar6 = 0;
        goto LAB_026cb4e8;
      }
      if (uVar2 <= unaff_x25) goto LAB_026cb578;
    } while ((int)*unaff_x26 < 0);
    param_2 = *(long **)(puVar7 + 8);
    if (param_2 == (long *)0x0) goto LAB_026cb57c;
    param_1 = *param_2;
  }
LAB_026cb578:
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
LAB_026cb4e8:
  if (uVar2 <= uVar6) goto LAB_026cb578;
  iVar3 = *(int *)(unaff_x23 + uVar6 * 0x18 + 0x20);
  if (-1 < iVar3) {
    if (unaff_x21 == 0) {
LAB_026cb57c:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    iVar4 = 0;
    if (unaff_w20 != 0) {
      iVar4 = iVar3 / unaff_w20;
    }
    uVar5 = iVar3 - iVar4 * unaff_w20;
    if (*(uint *)(unaff_x21 + 0x18) <= uVar5) goto LAB_026cb578;
    lVar1 = unaff_x21 + (long)(int)uVar5 * 4;
    *(int *)(unaff_x23 + uVar6 * 0x18 + 0x24) = *(int *)(lVar1 + 0x20) + -1;
    *(int *)(lVar1 + 0x20) = (int)uVar6 + 1;
  }
  uVar6 = uVar6 + 1;
  if (uVar6 == unaff_x24) {
LAB_026cb544:
    *(long *)(unaff_x19 + 0x10) = unaff_x21;
    thunk_FUN_01656ef8((long *)(unaff_x19 + 0x10));
    *(long *)(unaff_x19 + 0x18) = unaff_x23;
    thunk_FUN_01656ef8();
    return;
  }
  goto LAB_026cb4e8;
}


