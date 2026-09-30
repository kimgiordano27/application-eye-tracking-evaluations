/*
FUNCTION_NAME: OVREyeGaze$$StartEyeTracking
ENTRY_POINT: 027abd80
PROGRAM: vrlegs-libil2cpp.so
SCORE: 95
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;validity_or_gating_hits_3;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__StartEyeTracking(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *unaff_x19;
  uint unaff_w20;
  uint unaff_w22;
  undefined8 uVar7;
  long unaff_x24;
  long *unaff_x25;
  ulong uVar8;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 uStack0000000000000024;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined1 in_stack_00000038;
  char cStack000000000000003c;
  
  FUN_01ab69ac(PTR_DAT_03cd73a0);
  *(undefined1 *)(unaff_x24 + 0xe5e) = 1;
  cStack000000000000003c = '\0';
  in_stack_00000038 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  uStack0000000000000024 = 0;
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
                    /* try { // try from 027abdb8 to 028abe0b has its CatchHandler @ 027abdb8
                       catch() { ... } // from try @ 027abdb8 with catch @ 027abdb8
                       catch() { ... } // from try @ 027abeac with catch @ 027abdb8
                       catch() { ... } // from try @ 027abee4 with catch @ 027abdb8
                       catch() { ... } // from try @ 027abf54 with catch @ 027abdb8
                       catch() { ... } // from try @ 027abf80 with catch @ 027abdb8 */
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_027a9a98();
  FUN_027a9c0c(unaff_w20 & 0xfffffff7,&stack0x00000030,unaff_w22 & 1,&stack0x0000003c,
               &stack0x00000038,&stack0x00000024);
  lVar5 = FUN_027abedc();
  if (lVar5 != 0) {
                    /* try { // try from 027abe0c to 028abe23 has its CatchHandler @ 027abeb4 */
    FUN_02213014(&stack0x00000008,*(undefined4 *)(lVar5 + 0x18),*(undefined8 *)PTR_DAT_03cfbc78);
    cVar4 = cStack000000000000003c;
    puVar1 = PTR_DAT_03cfbc70;
    if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
      uVar8 = 0;
      uVar6 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
      do {
        uVar3 = in_stack_00000030;
        uVar2 = in_stack_00000028;
                    /* try { // try from 027abe44 to 028abe6f has its CatchHandler @ 027abeb0 */
        if (uVar6 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        uVar7 = *(undefined8 *)(lVar5 + 0x20 + uVar8 * 8);
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar6 = FUN_027aa028(uVar7,unaff_w20 & 0xfffffff7,uVar3,cVar4 != '\0',uVar2);
        if ((uVar6 & 1) != 0) {
          FUN_02213244(&stack0x00000008,uVar7,*(undefined8 *)puVar1);
        }
        uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar5 + 0x18));
    }
    unaff_x19[2] = in_stack_00000018;
    unaff_x19[1] = in_stack_00000010;
    *unaff_x19 = in_stack_00000008;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


