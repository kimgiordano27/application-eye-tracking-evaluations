/*
FUNCTION_NAME: OVRPlugin.Ktx$$TranscodeKtxTexture
ENTRY_POINT: 05776aac
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Ktx__TranscodeKtxTexture(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  int iVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long unaff_x20;
  long unaff_x22;
  long *unaff_x24;
  uint uVar11;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  FUN_02f07e70(PTR_DAT_06d5a128);
  FUN_02f07e70(PTR_DAT_06d110c0);
                    /* try { // try from 05776ac8 to 05876ad3 has its CatchHandler @ 05776cbc */
  FUN_02f07e70(PTR_DAT_06d110d0);
                    /* try { // try from 05776ad4 to 05876b2f has its CatchHandler @ 05776780 */
  FUN_02f07e70(PTR_DAT_06d110e0);
  FUN_02f07e70(PTR_DAT_06d535b0);
  FUN_02f07e70(PTR_DAT_06d06568);
  FUN_02f07e70(PTR_DAT_06d06570);
  FUN_02f07e70(PTR_DAT_06d36fa0);
  *(undefined1 *)(unaff_x20 + 0xc59) = 1;
  in_stack_00000050 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
                    /* try { // try from 05776b30 to 05876b47 has its CatchHandler @ 05776bd0 */
  puVar2 = PTR_DAT_06d535b0;
  pvVar6 = (void *)FUN_057759cc();
  if (unaff_x22 == 0) {
                    /* try { // try from 05776b64 to 05876b6f has its CatchHandler @ 05776780 */
    iVar5 = 0;
  }
  else {
                    /* try { // try from 05776b50 to 05876b53 has its CatchHandler @ 05776bc0 */
    iVar5 = FUN_04c742fc();
                    /* try { // try from 05776b5c to 05876b63 has its CatchHandler @ 05776bbc */
  }
                    /* try { // try from 05776b70 to 05876b77 has its CatchHandler @ 05776cbc */
  lVar7 = FUN_02f07f14(*(undefined8 *)puVar2,iVar5 << 1);
  puVar3 = PTR_DAT_06d110d0;
  puVar2 = PTR_DAT_06d110c0;
                    /* try { // try from 05776b78 to 05876b87 has its CatchHandler @ 05776780 */
  if (0 < iVar5) {
    if (unaff_x22 == 0) goto LAB_05776d14;
                    /* try { // try from 05776b88 to 05876b97 has its CatchHandler @ 05776c4c */
                    /* try { // try from 05776b98 to 05876bab has its CatchHandler @ 05776780 */
    FUN_04c74a5c(&stack0x00000008);
                    /* try { // try from 05776bac to 05876bbb has its CatchHandler @ 05776bd0 */
    uVar11 = 1;
                    /* catch() { ... } // from try @ 05776b5c with catch @ 05776bbc */
    in_stack_00000038 = in_stack_00000010;
    in_stack_00000030 = in_stack_00000008;
    in_stack_00000048 = in_stack_00000020;
    in_stack_00000040 = in_stack_00000018;
                    /* catch() { ... } // from try @ 05776b50 with catch @ 05776bc0 */
    in_stack_00000050 = in_stack_00000028;
                    /* catch() { ... } // from try @ 05776a68 with catch @ 05776bcc */
                    /* catch() { ... } // from try @ 05776b30 with catch @ 05776bd0
                       catch() { ... } // from try @ 05776bac with catch @ 05776bd0 */
    while (uVar8 = FUN_04e98e80(&stack0x00000030,*(undefined8 *)puVar3), uVar4 = in_stack_00000048,
          uVar9 = in_stack_00000040, (uVar8 & 1) != 0) {
                    /* try { // try from 05776bd8 to 05876bdb has its CatchHandler @ 05776cb8 */
                    /* try { // try from 05776bdc to 05876bf7 has its CatchHandler @ 05776780 */
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar9 = FUN_057759cc(uVar9);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar11 - 1) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      *(undefined8 *)(lVar7 + (long)(int)(uVar11 - 1) * 8 + 0x20) = uVar9;
      uVar9 = FUN_057759cc(uVar4);
      if (*(uint *)(lVar7 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      lVar1 = (long)(int)uVar11;
      uVar11 = uVar11 + 2;
      *(undefined8 *)(lVar7 + lVar1 * 8 + 0x20) = uVar9;
    }
    FUN_04e98fa0(&stack0x00000030,*(undefined8 *)puVar2);
  }
  puVar2 = PTR_DAT_06d36fa0;
  uVar9 = FUN_0565dbf8((long)iVar5,0);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*unaff_x24);
  }
  FUN_05776d90(pvVar6,lVar7,uVar9);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  free(pvVar6);
  if (lVar7 != 0) {
    if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
      uVar8 = 0;
      uVar10 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      do {
        if (uVar10 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c8();
        }
        pvVar6 = *(void **)(lVar7 + 0x20 + uVar8 * 8);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        free(pvVar6);
        uVar10 = (ulong)*(uint *)(lVar7 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar7 + 0x18));
    }
    return;
  }
LAB_05776d14:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


