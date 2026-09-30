/*
FUNCTION_NAME: OVRPlugin$$PollFuture
ENTRY_POINT: 02c34e30
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c35034) */

undefined8 OVRPlugin__PollFuture(void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x24;
  char cStack000000000000000c;
  
  iVar1 = *(int *)(unaff_x21 + 0x20);
  thunk_FUN_0181f594();
  if (1 < iVar1) {
    if (*(int *)(*(long *)PTR_DAT_037f45f0 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
                    /* try { // try from 02c34e68 to 02d34e73 has its CatchHandler @ 02c36078 */
    uVar3 = FUN_01bc5664();
    return uVar3;
  }
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
                    /* try { // try from 02c34e78 to 02d34e83 has its CatchHandler @ 02c36074 */
  cStack000000000000000c = '\0';
  FUN_02c317e4(uVar3,&stack0x0000000c);
  iVar1 = *(int *)(unaff_x20 + 0x10);
  thunk_FUN_0181f594();
  puVar2 = PTR_DAT_03800ea8;
  if (iVar1 < 1) {
    if (unaff_w22 == 0) {
      lVar4 = *(long *)PTR_DAT_03800ea8;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
        lVar4 = *(long *)puVar2;
      }
      uVar5 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 8);
    }
    else {
      uVar5 = FUN_02c351f0();
      if (unaff_w22 == -1) {
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        if (unaff_x21 == 0) goto LAB_02c34f78;
      }
      uVar5 = FUN_02c352a0();
    }
  }
  else {
                    /* try { // try from 02c34e98 to 02d34e9f has its CatchHandler @ 02c36040 */
    iVar1 = *(int *)(unaff_x20 + 0x10);
    thunk_FUN_0181f594();
    thunk_FUN_0181f594();
    lVar4 = *(long *)(unaff_x20 + 0x28);
                    /* try { // try from 02c34eac to 02d34ecb has its CatchHandler @ 02c36064 */
    *(int *)(unaff_x20 + 0x10) = iVar1 + -1;
    thunk_FUN_0181f594();
    if ((lVar4 != 0) && (iVar1 = *(int *)(unaff_x20 + 0x10), thunk_FUN_0181f594(), iVar1 == 0)) {
      lVar4 = *(long *)(unaff_x20 + 0x28);
      thunk_FUN_0181f594();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      FUN_02c35188(lVar4);
    }
    puVar2 = PTR_DAT_03800ea8;
    lVar4 = *(long *)PTR_DAT_03800ea8;
                    /* try { // try from 02c34ee4 to 02d34eef has its CatchHandler @ 02c3608c */
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
      lVar4 = *(long *)puVar2;
    }
    uVar5 = **(undefined8 **)(lVar4 + 0xb8);
  }
LAB_02c34f78:
  if (cStack000000000000000c != '\0') {
    FUN_0184c01c(uVar3);
  }
  return uVar5;
}


