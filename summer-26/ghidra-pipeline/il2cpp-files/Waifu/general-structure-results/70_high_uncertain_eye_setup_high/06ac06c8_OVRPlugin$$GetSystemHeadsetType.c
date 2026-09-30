/*
FUNCTION_NAME: OVRPlugin$$GetSystemHeadsetType
ENTRY_POINT: 06ac06c8
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSystemHeadsetType(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  long lVar4;
  long in_x9;
  int *in_x10;
  undefined8 uVar5;
  undefined8 *unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  uint unaff_w23;
  
  do {
    in_x9 = in_x9 + -1;
    piVar2 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar3 = (undefined8 *)FUN_0338f71c();
      goto LAB_06ac06f0;
    }
    plVar1 = (long *)(in_x10 + 2);
    in_x10 = piVar2;
  } while (*plVar1 != param_3);
  puVar3 = (undefined8 *)(param_1 + (long)*piVar2 * 0x10 + 0x138);
LAB_06ac06f0:
                    /* try { // try from 06ac06fc to 06bc072b has its CatchHandler @ 06ac0994 */
  (*(code *)*puVar3)();
  FUN_06ac063c();
  if ((*(long *)(unaff_x21 + 0x10) != 0) && (*(long *)(unaff_x21 + 0x18) != 0)) {
    if ((unaff_w20 < *(uint *)(*(long *)(unaff_x21 + 0x10) + 0x18)) &&
       (unaff_w20 < *(uint *)(*(long *)(unaff_x21 + 0x18) + 0x18))) {
                    /* try { // try from 06ac0748 to 06bc074f has its CatchHandler @ 06ac0988 */
      FUN_06a70228();
                    /* try { // try from 06ac0764 to 06bc076b has its CatchHandler @ 06ac0940 */
      *(uint *)(unaff_x21 + 0x44) = *(uint *)(unaff_x21 + 0x44) & (unaff_w23 ^ 0xffffffff);
      lVar4 = *(long *)(unaff_x21 + 0x18);
      if (lVar4 == 0) goto LAB_06ac07b0;
      if (unaff_w20 < *(uint *)(lVar4 + 0x18)) {
        lVar4 = lVar4 + (long)(int)unaff_w20 * 0x1c;
        uVar5 = *(undefined8 *)(lVar4 + 0x20);
        *(undefined4 *)(unaff_x19 + 1) = *(undefined4 *)(lVar4 + 0x28);
        *unaff_x19 = uVar5;
        uVar5 = *(undefined8 *)(lVar4 + 0x2c);
        *(undefined8 *)((long)unaff_x19 + 0x14) = *(undefined8 *)(lVar4 + 0x34);
        *(undefined8 *)((long)unaff_x19 + 0xc) = uVar5;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_033d1d44();
  }
LAB_06ac07b0:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


