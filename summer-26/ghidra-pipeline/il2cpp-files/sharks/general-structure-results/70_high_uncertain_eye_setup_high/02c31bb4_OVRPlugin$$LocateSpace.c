/*
FUNCTION_NAME: OVRPlugin$$LocateSpace
ENTRY_POINT: 02c31bb4
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


/* WARNING: Removing unreachable block (ram,0x02c31e44) */
/* WARNING: Removing unreachable block (ram,0x02c31df4) */

byte OVRPlugin__LocateSpace(void)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  int in_w8;
  long unaff_x19;
  int unaff_w20;
  undefined8 uVar6;
  int unaff_w21;
  int unaff_w22;
  long *unaff_x23;
  undefined8 uVar7;
  int unaff_w24;
  uint unaff_w25;
  long *unaff_x26;
  int iVar8;
  byte bVar9;
  char cStack0000000000000014;
  int in_stack_00000030;
  
  while( true ) {
    if (in_w8 == 0) {
      thunk_FUN_01843fdc();
    }
    iVar3 = in_stack_00000030;
    if (99 < in_stack_00000030) {
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      uVar1 = iVar3 * unaff_w24;
                    /* try { // try from 02c31bdc to 02d31bf3 has its CatchHandler @ 02c31e00 */
      if ((uVar1 >> 1 | uVar1 * -0x80000000) <= unaff_w25) {
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        FUN_02c30da8(&stack0x00000038);
      }
    }
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    if (unaff_w20 <= iVar3) break;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    FUN_02c31f70(&stack0x00000030,0x28);
    uVar4 = FUN_02c31238();
    if ((uVar4 & 1) != 0) {
      return 1;
    }
    in_w8 = *(int *)(*unaff_x23 + 0xe0);
  }
  FUN_02c31764();
  puVar2 = PTR_DAT_0380be80;
  lVar5 = *(long *)PTR_DAT_0380be80;
  if (*(int *)(lVar5 + 0xe0) == 0) {
                    /* try { // try from 02c31c20 to 02d31c23 has its CatchHandler @ 02c31df0 */
    thunk_FUN_01843fdc();
    lVar5 = *(long *)puVar2;
  }
                    /* try { // try from 02c31c30 to 02d31c37 has its CatchHandler @ 02c31df8 */
  uVar6 = **(undefined8 **)(lVar5 + 0xb8);
                    /* try { // try from 02c31c38 to 02d31cd3 has its CatchHandler @ 02c31a98 */
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01843fdc(*unaff_x26);
  }
  FUN_02c30798(&stack0x00000018,&stack0x00000038,uVar6);
  uVar6 = *(undefined8 *)(unaff_x19 + 0x10);
  thunk_FUN_0181f594();
  cStack0000000000000014 = '\0';
  FUN_02c317e4(uVar6,&stack0x00000014);
  iVar3 = unaff_w21;
  while( true ) {
    uVar4 = FUN_02c31238();
    if ((uVar4 & 1) != 0) {
      bVar9 = 0;
      iVar8 = 5;
      goto LAB_02c31dac;
    }
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    FUN_02c30da8(&stack0x00000038);
    if (unaff_w21 != -1) {
      iVar3 = thunk_FUN_018486b4(0);
      bVar9 = 0;
      iVar8 = 0xe;
      if ((iVar3 - unaff_w22 < 0) || (iVar3 = unaff_w21 - (iVar3 - unaff_w22), iVar3 < 1))
      goto LAB_02c31dac;
    }
    FUN_02c31430();
    FUN_02c3148c();
    uVar4 = FUN_02c31238();
    if ((uVar4 & 1) != 0) break;
    uVar7 = *(undefined8 *)(unaff_x19 + 0x10);
    thunk_FUN_0181f594();
    uVar4 = FUN_02c38c7c(uVar7,iVar3,0);
    iVar8 = 0xb;
    if ((uVar4 & 1) == 0) {
      iVar8 = 0xe;
    }
    FUN_02c31430();
    FUN_02c3148c();
    if ((iVar8 != 0xb) && (iVar8 != 0)) {
      bVar9 = 0;
LAB_02c31dac:
      if (cStack0000000000000014 != '\0') {
        FUN_0184c01c(uVar6);
      }
      FUN_02c328cc(&stack0x00000018);
      return iVar8 != 0xe | bVar9;
    }
  }
  FUN_02c31430();
  FUN_02c3148c();
  bVar9 = 1;
  iVar8 = 0xe;
  goto LAB_02c31dac;
}


