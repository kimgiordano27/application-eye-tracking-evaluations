/*
FUNCTION_NAME: OVRManager$$add_VrFocusLost
ENTRY_POINT: 02fc3a54
PROGRAM: vrfs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02fc3aa4) */

undefined8 OVRManager__add_VrFocusLost(long param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint unaff_w19;
  long unaff_x20;
  undefined8 *unaff_x25;
  long lVar6;
  int unaff_w27;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000038;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  iVar5 = 0;
  if (uVar2 != 0) {
    iVar5 = unaff_w27 / (int)uVar2;
  }
  uVar4 = unaff_w27 - iVar5 * uVar2;
  if (uVar4 < uVar2) {
    lVar6 = *(long *)(unaff_x20 + 0x18);
    piVar1 = (int *)(param_1 + (ulong)uVar4 * 4 + 0x20);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02fc3b84 with catch @ 02fc3bd0 */
      FUN_0160eeb4();
    }
                    /* try { // try from 02fc3a98 to 030c3a9b has its CatchHandler @ 02fc3c10 */
    if (unaff_w19 < *(uint *)(lVar6 + 0x18)) {
                    /* try { // try from 02fc3a9c to 030c3a9f has its CatchHandler @ 02fc3c0c */
                    /* try { // try from 02fc3aa0 to 030c3aa3 has its CatchHandler @ 02fc3c08 */
                    /* try { // try from 02fc3ab8 to 030c3abf has its CatchHandler @ 02fc3c00 */
      lVar6 = lVar6 + (long)(int)unaff_w19 * 0x38;
      *(int *)(lVar6 + 0x20) = unaff_w27;
                    /* try { // try from 02fc3ac4 to 030c3acf has its CatchHandler @ 02fc3be0 */
      *(int *)(lVar6 + 0x24) = *piVar1 + -1;
      *(undefined4 *)(lVar6 + 0x28) = in_stack_00000038._4_4_;
                    /* try { // try from 02fc3adc to 030c3adf has its CatchHandler @ 02fc3bfc */
      uVar3 = *(undefined4 *)(unaff_x25 + 5);
                    /* try { // try from 02fc3ae0 to 030c3ae3 has its CatchHandler @ 02fc3bf8 */
      uVar8 = unaff_x25[1];
      uVar7 = *unaff_x25;
      uVar10 = unaff_x25[3];
      uVar9 = unaff_x25[2];
                    /* try { // try from 02fc3ae4 to 030c3ae7 has its CatchHandler @ 02fc3bf4 */
      *(undefined8 *)(lVar6 + 0x4c) = unaff_x25[4];
                    /* try { // try from 02fc3ae8 to 030c3aeb has its CatchHandler @ 02fc3bf0 */
      *(undefined4 *)(lVar6 + 0x54) = uVar3;
                    /* try { // try from 02fc3aec to 030c3aef has its CatchHandler @ 02fc3bec */
      *(undefined8 *)(lVar6 + 0x44) = uVar10;
      *(undefined8 *)(lVar6 + 0x3c) = uVar9;
                    /* try { // try from 02fc3af0 to 030c3af3 has its CatchHandler @ 02fc3be8 */
      *(undefined8 *)(lVar6 + 0x34) = uVar8;
      *(undefined8 *)(lVar6 + 0x2c) = uVar7;
                    /* try { // try from 02fc3af4 to 030c3af7 has its CatchHandler @ 02fc3be4 */
      *piVar1 = unaff_w19 + 1;
                    /* try { // try from 02fc3af8 to 030c3b03 has its CatchHandler @ 02fc3be0 */
                    /* try { // try from 02fc3b10 to 030c3b17 has its CatchHandler @ 02fc3bdc */
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


