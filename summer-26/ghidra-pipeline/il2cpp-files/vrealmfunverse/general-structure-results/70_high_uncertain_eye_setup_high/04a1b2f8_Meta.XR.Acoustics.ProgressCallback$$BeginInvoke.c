/*
FUNCTION_NAME: Meta.XR.Acoustics.ProgressCallback$$BeginInvoke
ENTRY_POINT: 04a1b2f8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Acoustics_ProgressCallback__BeginInvoke
               (long *param_1,int param_2,int param_3,int param_4,undefined4 param_5,long param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  
  if (param_4 < 2) {
    param_4 = 1;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  uVar5 = 0;
  if (param_4 - 1U != 0) {
    uVar5 = (uint)((ulong)((double)((ulong)(param_4 - 1U) | 0x4330000000000000) +
                          -4503599627370496.0) >> 0x34) + 2 & 0xff;
  }
  lVar3 = *(long *)(param_6 + 0x20);
  *(uint *)(param_1 + 5) = uVar5;
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    FUN_02b76218();
    iVar6 = (int)param_1[4];
    uVar5 = *(uint *)(param_1 + 5);
    lVar3 = *(long *)(param_6 + 0x20);
  }
  else {
    iVar6 = 0;
  }
  iVar2 = 1 << (ulong)(uVar5 & 0x1f);
  if (iVar6 <= param_2) {
    iVar6 = param_2;
  }
  if (iVar6 <= iVar2) {
    iVar6 = iVar2;
  }
  if (iVar6 < 2) {
    iVar6 = 1;
  }
  uVar5 = iVar6 - 1U | iVar6 - 1U >> 1;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  iVar6 = (uVar5 | uVar5 >> 0x10) + 1;
  *(int *)((long)param_1 + 0x24) = iVar6;
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    FUN_02b76218();
  }
  *(undefined4 *)((long)param_1 + 0x3c) = param_5;
  lVar3 = *(long *)(param_6 + 0x20);
  *(int *)(param_1 + 7) = param_3;
  *(int *)((long)param_1 + 0x2c) = iVar6 * 2;
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    FUN_02b76218();
  }
  iVar2 = iVar6 * param_3 + iVar6 * 4;
  iVar1 = iVar2 + iVar6 * 4;
  lVar3 = FUN_056d9780((long)(iVar1 + iVar6 * 8),0x40,param_5,0);
  lVar4 = *(long *)(param_6 + 0x20);
  *param_1 = lVar3;
  param_1[1] = lVar3 + iVar6 * param_3;
  param_1[2] = lVar3 + iVar2;
  param_1[3] = lVar3 + iVar1;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    FUN_02b76218();
  }
  FUN_04a1b2a4(param_1);
  return;
}


