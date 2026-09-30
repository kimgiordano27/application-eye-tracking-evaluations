/*
FUNCTION_NAME: OVRPlugin$$SetDesiredEyeTextureFormat
ENTRY_POINT: 01d80db0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetDesiredEyeTextureFormat(void)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint in_w8;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lVar4;
  long *unaff_x23;
  long unaff_x24;
  int unaff_w25;
  int unaff_w26;
  uint unaff_w28;
  long unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000028;
  
  do {
    if (in_w8 <= (uint)unaff_x24) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01d80d98 with catch @ 01d80e68
                        */
      FUN_00fdc53c();
    }
    lVar4 = *(long *)(unaff_x29 + unaff_x24 * 8);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01d80ddc with catch @ 01d80e6c
                        */
      FUN_00fdc534();
    }
    uVar1 = FUN_01cd31bc(lVar4,0);
    uVar2 = FUN_01cd31bc(lVar4,0);
                    /* try { // try from 01d80ddc to 01e80e03 has its CatchHandler @ 01d80e6c */
    if ((uVar1 & unaff_w28) == uVar2) {
      if (unaff_w25 != 0) {
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
                    /* try { // try from 01d80e04 to 01e80e0f has its CatchHandler @ 01d80e60 */
                    /* try { // try from 01d80e10 to 01e80e5b has its CatchHandler @ 01d80ce8 */
        uVar3 = FUN_01d7f224(lVar4,in_stack_00000028,unaff_w26 != 0);
        if ((uVar3 & 1) == 0) goto LAB_01d80e28;
      }
      FUN_0174899c();
    }
LAB_01d80e28:
    in_w8 = *(uint *)(unaff_x20 + 0x18);
    unaff_x24 = unaff_x24 + 1;
    if ((int)in_w8 <= (int)unaff_x24) {
      unaff_x19[2] = in_stack_00000010;
      unaff_x19[1] = in_stack_00000008;
      *unaff_x19 = in_stack_00000000;
                    /* try { // try from 01d80e5c to 01e80e5f has its CatchHandler @ 01d80e64 */
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01d80e04 with catch @ 01d80e60
                       try { // try from 01d80e60 to 01e80e83 has its CatchHandler @ 01d80ce8 */
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01d80e5c with catch @ 01d80e64
                        */
      return;
    }
  } while( true );
}


