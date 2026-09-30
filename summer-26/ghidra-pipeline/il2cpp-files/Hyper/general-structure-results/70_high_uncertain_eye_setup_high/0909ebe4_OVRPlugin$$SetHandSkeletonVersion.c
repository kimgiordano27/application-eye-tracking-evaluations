/*
FUNCTION_NAME: OVRPlugin$$SetHandSkeletonVersion
ENTRY_POINT: 0909ebe4
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__SetHandSkeletonVersion(long param_1,uint param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long *in_x10;
  int *piVar4;
  long *unaff_x19;
  long unaff_x21;
  uint uVar5;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  uint in_stack_00000048;
  uint uStack000000000000004c;
  
                    /* try { // try from 0909ebe4 to 0919ebeb has its CatchHandler @ 0909f240 */
  uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
  uStack000000000000004c = param_2;
  if (uVar3 != 0) {
                    /* try { // try from 0909ebf4 to 0919ebff has its CatchHandler @ 0909f23c */
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *in_x10) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar4 + 8) * 0x10 + 0x138);
        goto LAB_0909ec44;
      }
                    /* try { // try from 0909ec08 to 0919ec0f has its CatchHandler @ 0909f248 */
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
                    /* try { // try from 0909ec10 to 0919ec5f has its CatchHandler @ 0909e91c */
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_04980e68();
LAB_0909ec44:
  (*(code *)*puVar1)(&stack0x00000008);
                    /* try { // try from 0909ec60 to 0919ec67 has its CatchHandler @ 0909f1dc */
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000018;
  if (*(int *)(*(long *)PTR_DAT_0ac75960 + 0xe4) == 0) {
                    /* try { // try from 0909ec78 to 0919ec7f has its CatchHandler @ 0909f200 */
    thunk_FUN_049a583c();
  }
  FUN_090be048(&stack0x00000020,&stack0x0000004c,0);
  uVar5 = uStack000000000000004c;
                    /* try { // try from 0909ec94 to 0919ec9b has its CatchHandler @ 0909f1f4 */
  uVar3 = FUN_0909e13c();
  if ((uVar3 & 1) != 0) {
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    in_stack_00000048 = FUN_090be954();
    lVar2 = *unaff_x19;
                    /* try { // try from 0909ecb8 to 0919ecbf has its CatchHandler @ 0909f1ac */
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
                    /* try { // try from 0909ecdc to 0919ece3 has its CatchHandler @ 0909f1b4 */
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0ac75968) {
                    /* try { // try from 0909ed00 to 0919ed07 has its CatchHandler @ 0909f1bc */
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 9) * 0x10 + 0x138);
          goto LAB_0909ed0c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_04980e68();
LAB_0909ed0c:
    (*(code *)*puVar1)(&stack0x00000008);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
                    /* try { // try from 0909ed34 to 0919ed37 has its CatchHandler @ 0909f190 */
    in_stack_00000030 = in_stack_00000018;
    if (*(int *)(*(long *)PTR_DAT_0ac75960 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
                    /* try { // try from 0909ed44 to 0919ed47 has its CatchHandler @ 0909f178 */
                    /* try { // try from 0909ed48 to 0919ed4f has its CatchHandler @ 0909f174 */
    FUN_090be048(&stack0x00000020,&stack0x00000048,0);
    uVar5 = in_stack_00000048 | uVar5;
  }
  return uVar5;
}


