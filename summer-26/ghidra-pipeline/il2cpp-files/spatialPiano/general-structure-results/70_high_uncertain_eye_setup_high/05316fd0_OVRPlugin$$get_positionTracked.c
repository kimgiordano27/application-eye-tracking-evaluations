/*
FUNCTION_NAME: OVRPlugin$$get_positionTracked
ENTRY_POINT: 05316fd0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__get_positionTracked(void)

{
  long lVar1;
  int in_w8;
  long *unaff_x19;
  float fVar2;
  float unaff_s8;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  
  if (in_w8 < 2) {
    return 0;
  }
  lVar1 = FUN_060ed7ac();
  if (lVar1 != 0) {
    fVar2 = (float)FUN_06101d4c(lVar1,0);
                    /* try { // try from 05316ff0 to 05416ff7 has its CatchHandler @ 0531709c */
    FUN_05310ba4(unaff_s8 / fVar2);
                    /* try { // try from 0531700c to 0541701b has its CatchHandler @ 05317090 */
    if (in_stack_00000028 != 0) {
                    /* try { // try from 0531701c to 0541704b has its CatchHandler @ 05316ec4 */
      if ((*(char *)(in_stack_00000028 + 0x38) == '\0') ||
         (lVar1 = *(long *)(in_stack_00000028 + 0x48), lVar1 == 0)) {
                    /* try { // try from 05317054 to 054170b7 has its CatchHandler @ 05316ec4 */
        if (in_stack_00000020 == 0) goto LAB_053170b0;
        if (*(char *)(in_stack_00000020 + 0x38) == '\0') {
          return 0;
        }
        lVar1 = *(long *)(in_stack_00000020 + 0x48);
        if (lVar1 == 0) {
          return 0;
        }
      }
      else {
        if (in_stack_00000020 == 0) goto LAB_053170b0;
        if ((*(char *)(in_stack_00000020 + 0x38) != '\0') &&
           (*(long *)(in_stack_00000020 + 0x48) != 0)) {
          in_stack_00000008 = *(long *)(in_stack_00000020 + 0x48);
          in_stack_00000010 = lVar1;
                    /* try { // try from 0531704c to 0541704f has its CatchHandler @ 05317094 */
          OVRMixedReality___cctor(in_stack_00000018._4_4_,&stack0x00000010,&stack0x00000008);
          return 1;
                    /* try { // try from 05317050 to 05417053 has its CatchHandler @ 0531708c */
        }
      }
      if (*unaff_x19 != 0) {
        FUN_05310ddc(*unaff_x19,lVar1,0);
        return 1;
      }
    }
  }
LAB_053170b0:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


