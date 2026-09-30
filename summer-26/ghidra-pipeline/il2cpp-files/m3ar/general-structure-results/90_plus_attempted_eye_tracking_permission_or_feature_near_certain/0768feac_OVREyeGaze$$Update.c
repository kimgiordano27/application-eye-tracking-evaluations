/*
FUNCTION_NAME: OVREyeGaze$$Update
ENTRY_POINT: 0768feac
PROGRAM: m3ar-libil2cpp.so
SCORE: 98
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__Update(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x19;
  long lVar4;
  long unaff_x21;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  
  FUN_0403162c();
  FUN_0403162c(PTR_DAT_08fac7d0);
  FUN_0403162c(PTR_DAT_08fac880);
                    /* try { // try from 0768fec8 to 0778fed3 has its CatchHandler @ 0769005c */
  FUN_0403162c(PTR_DAT_08fac890);
  FUN_0403162c(PTR_DAT_08fab600);
  FUN_0403162c(PTR_DAT_08fab608);
  FUN_0403162c(PTR_DAT_08f65598);
                    /* try { // try from 0768fefc to 0778feff has its CatchHandler @ 07690048 */
  *(undefined1 *)(unaff_x21 + 0xf0a) = 1;
  puVar1 = PTR_DAT_08f65598;
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
                    /* try { // try from 0768ff08 to 0778ff23 has its CatchHandler @ 07690060 */
  in_stack_00000028 = 0;
  if (*(long *)(unaff_x19 + 0x40) == 0) {
LAB_07690044:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 07690044 to 07790047 has its CatchHandler @ 07690060 */
    FUN_0403188c();
  }
  FUN_053e38a0();
                    /* try { // try from 0768ff34 to 0778ff3b has its CatchHandler @ 07690054 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
                    /* try { // try from 0768ff4c to 0778ff57 has its CatchHandler @ 07690050 */
  uVar2 = FUN_08589e5c();
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar4 = *(long *)(unaff_x19 + 0x48);
  uVar3 = FUN_0768f300();
  if (lVar4 == 0) goto LAB_07690044;
                    /* try { // try from 0768ff68 to 0778ff6f has its CatchHandler @ 07690068 */
                    /* try { // try from 0768ff70 to 0779000b has its CatchHandler @ 0768fdec */
  FUN_054b4d04(lVar4,uVar3,*(undefined8 *)PTR_DAT_08fab608);
  if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_07690044;
  FUN_053e3b44(&stack0x00000018,*(long *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_08fac880);
  uVar2 = FUN_07204d88(&stack0x00000018,*(undefined8 *)PTR_DAT_08fac7c8);
  lVar4 = in_stack_00000028;
  if ((uVar2 & 1) != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar2 = FUN_0858816c(lVar4,0,0);
    lVar4 = in_stack_00000028;
    if ((uVar2 & 1) != 0) {
      *(long *)(unaff_x19 + 0x48) = in_stack_00000028;
      uVar3 = FUN_0768f300();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0768fefc with catch @ 07690048
                       try { // try from 07690048 to 07790087 has its CatchHandler @ 0768fdec */
        FUN_0403188c(uVar3,uVar3);
      }
      FUN_054b4c68(lVar4,uVar3,*(undefined8 *)PTR_DAT_08fab600);
                    /* try { // try from 0769000c to 0779002b has its CatchHandler @ 0769004c */
      goto LAB_0769001c;
    }
  }
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  FUN_0768fa94();
LAB_0769001c:
  FUN_07204d84(&stack0x00000018,*(undefined8 *)PTR_DAT_08fac7c0);
                    /* try { // try from 07690030 to 07790033 has its CatchHandler @ 0769006c */
                    /* try { // try from 07690034 to 07790037 has its CatchHandler @ 07690064 */
                    /* try { // try from 07690038 to 0779003f has its CatchHandler @ 07690070 */
                    /* try { // try from 07690040 to 07790043 has its CatchHandler @ 07690058 */
  return;
}


