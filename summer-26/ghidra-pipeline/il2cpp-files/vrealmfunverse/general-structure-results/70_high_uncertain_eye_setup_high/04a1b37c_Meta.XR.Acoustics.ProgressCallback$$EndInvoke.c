/*
FUNCTION_NAME: Meta.XR.Acoustics.ProgressCallback$$EndInvoke
ENTRY_POINT: 04a1b37c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Acoustics_ProgressCallback__EndInvoke(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint in_w8;
  int in_w9;
  long *unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  int unaff_w22;
  int unaff_w23;
  
  iVar3 = 1 << (ulong)(in_w8 & 0x1f);
  if (in_w9 <= unaff_w23) {
    in_w9 = unaff_w23;
  }
  if (in_w9 <= iVar3) {
    in_w9 = iVar3;
  }
  if (in_w9 < 2) {
    in_w9 = 1;
  }
  uVar4 = in_w9 - 1U | in_w9 - 1U >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  iVar3 = (uVar4 | uVar4 >> 0x10) + 1;
  *(int *)((long)unaff_x19 + 0x24) = iVar3;
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    FUN_02b76218();
  }
  *(undefined4 *)((long)unaff_x19 + 0x3c) = unaff_w21;
  lVar5 = *(long *)(unaff_x20 + 0x20);
  *(int *)(unaff_x19 + 7) = unaff_w22;
  *(int *)((long)unaff_x19 + 0x2c) = iVar3 * 2;
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    FUN_02b76218();
  }
  iVar1 = iVar3 * unaff_w22 + iVar3 * 4;
  iVar2 = iVar1 + iVar3 * 4;
  lVar5 = FUN_056d9780((long)(iVar2 + iVar3 * 8),0x40,unaff_w21,0);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  *unaff_x19 = lVar5;
  unaff_x19[1] = lVar5 + iVar3 * unaff_w22;
  unaff_x19[2] = lVar5 + iVar1;
  unaff_x19[3] = lVar5 + iVar2;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    FUN_02b76218();
  }
  FUN_04a1b2a4();
  return;
}


