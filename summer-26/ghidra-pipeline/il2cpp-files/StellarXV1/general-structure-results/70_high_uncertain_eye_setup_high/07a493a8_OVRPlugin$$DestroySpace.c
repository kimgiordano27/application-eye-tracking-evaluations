/*
FUNCTION_NAME: OVRPlugin$$DestroySpace
ENTRY_POINT: 07a493a8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__DestroySpace(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined4 unaff_w19;
  undefined4 *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  int iVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  puVar2 = PTR_DAT_092f07f8;
  uVar8 = 0;
  iVar7 = 0;
  do {
    lVar4 = *unaff_x22;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
                    /* try { // try from 07a493c8 to 07b493cf has its CatchHandler @ 07a49738 */
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
                    /* try { // try from 07a49400 to 07b49407 has its CatchHandler @ 07a495b8 */
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_07a49404;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_040b1e00();
LAB_07a49404:
    (*(code *)*puVar3)((long)&stack0x00000000 + 4);
    lVar4 = *(long *)(unaff_x21 + 0x10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar5 = (ulong)*(uint *)(lVar4 + 0x18);
    if (uVar5 <= uVar8) {
LAB_07a49520:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
                    /* try { // try from 07a49430 to 07b49433 has its CatchHandler @ 07a495a8 */
                    /* try { // try from 07a49434 to 07b49443 has its CatchHandler @ 07a495ac */
    *(undefined4 *)(lVar4 + uVar8 * 4 + 0x20) = uStack0000000000000010;
    if (uVar5 <= uVar8 + 1) goto LAB_07a49520;
                    /* try { // try from 07a49458 to 07b49467 has its CatchHandler @ 07a495a4 */
    *(undefined4 *)(lVar4 + (uVar8 + 1) * 4 + 0x20) = uStack0000000000000014;
    if (uVar5 <= uVar8 + 2) goto LAB_07a49520;
    *(undefined4 *)(lVar4 + (uVar8 + 2) * 4 + 0x20) = uStack0000000000000018;
    if (uVar5 <= uVar8 + 3) goto LAB_07a49520;
    *(undefined4 *)(lVar4 + (uVar8 + 3) * 4 + 0x20) = uStack000000000000001c;
    if (uVar5 <= uVar8 + 4) goto LAB_07a49520;
    *(undefined4 *)(lVar4 + (uVar8 + 4) * 4 + 0x20) = in_stack_00000000._4_4_;
    if (uVar5 <= uVar8 + 5) goto LAB_07a49520;
    uVar1 = uVar8 + 6;
    *(undefined4 *)(lVar4 + (uVar8 + 5) * 4 + 0x20) = uStack0000000000000008;
    if (uVar5 <= uVar1) goto LAB_07a49520;
    iVar7 = iVar7 + 1;
    uVar8 = uVar8 + 7;
    *(undefined4 *)(lVar4 + uVar1 * 4 + 0x20) = uStack000000000000000c;
    if (iVar7 == 0x18) {
      *(undefined4 *)(unaff_x21 + 0x18) = unaff_x20[3];
      *(undefined4 *)(unaff_x21 + 0x1c) = unaff_x20[4];
      *(undefined4 *)(unaff_x21 + 0x20) = unaff_x20[5];
      *(undefined4 *)(unaff_x21 + 0x24) = unaff_x20[6];
      *(undefined4 *)(unaff_x21 + 0x28) = *unaff_x20;
      *(undefined4 *)(unaff_x21 + 0x2c) = unaff_x20[1];
      uVar9 = unaff_x20[2];
      *(undefined4 *)(unaff_x21 + 0x34) = unaff_w19;
      *(undefined4 *)(unaff_x21 + 0x30) = uVar9;
      return;
    }
  } while( true );
}


