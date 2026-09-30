/*
FUNCTION_NAME: Oculus.Avatar2.OvrAvatarEntity$$GetGazePosition
ENTRY_POINT: 05b51df0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 132
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void Oculus_Avatar2_OvrAvatarEntity__GetGazePosition
               (long param_1,undefined8 *param_2,long param_3,undefined8 param_4,byte param_5,
               undefined4 param_6,byte param_7,byte param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uStack000000000000000c;
  undefined4 in_stack_00000070;
  undefined8 *in_stack_00000078;
  
  puVar1 = PTR_DAT_072a1ee0;
                    /* try { // try from 05b51e0c to 05c51e9f has its CatchHandler @ 05b51e0c
                       catch() { ... } // from try @ 05b51e0c with catch @ 05b51e0c
                       catch() { ... } // from try @ 05b51ec8 with catch @ 05b51e0c
                       catch() { ... } // from try @ 05b51f4c with catch @ 05b51e0c
                       catch() { ... } // from try @ 05b51fe4 with catch @ 05b51e0c */
  uStack000000000000000c = param_6;
  if ((DAT_076d6715 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07280e70);
    thunk_FUN_032e1da0(PTR_DAT_07280e78);
    thunk_FUN_032e1da0(PTR_DAT_07280c38);
    thunk_FUN_032e1da0(PTR_DAT_072a1ee8);
    thunk_FUN_032e1da0(PTR_DAT_072a1ee0);
    thunk_FUN_032e1da0(PTR_DAT_072a31f8);
    thunk_FUN_032e1da0(PTR_DAT_07280ea8);
    thunk_FUN_032e1da0(PTR_DAT_072a5230);
    DAT_076d6715 = 1;
  }
  puVar2 = PTR_DAT_072a1ee8;
                    /* try { // try from 05b51ea0 to 05c51eab has its CatchHandler @ 05b51f50 */
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  lVar6 = *(long *)puVar2;
  lVar3 = *(long *)(lVar6 + 0x20);
                    /* try { // try from 05b51ec0 to 05c51ec7 has its CatchHandler @ 05b51f54 */
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                    /* try { // try from 05b51ec8 to 05c51f47 has its CatchHandler @ 05b51e0c */
    lVar3 = FUN_032934b8();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_032934b8();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  lVar3 = *(long *)(lVar6 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_032934b8();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_032934b8();
  }
  puVar1 = PTR_DAT_07280c38;
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar3 == 0) goto LAB_05b520ec;
  if (*(char *)(lVar3 + 0x41) == '\0') {
    return;
  }
  uVar8 = param_2[1];
  uVar7 = *param_2;
  *(undefined8 *)(param_1 + 0x90) = param_2[2];
  *(undefined8 *)(param_1 + 0x88) = uVar8;
  *(undefined8 *)(param_1 + 0x80) = uVar7;
  *(undefined4 *)(param_1 + 0x98) = in_stack_00000070;
                    /* try { // try from 05b51f48 to 05c51f4b has its CatchHandler @ 05b51f4c */
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    if (param_3 == 0) goto LAB_05b51fa8;
LAB_05b51f50:
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 05b51ea0 with catch @ 05b51f50
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 05b51ec0 with catch @ 05b51f54
                        */
    *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x2a0) = *(undefined8 *)(param_1 + 0x10);
                    /* try { // try from 05b51f6c to 05c51f6f has its CatchHandler @ 05b51f84 */
    param_5 = param_5 & 1;
    FUN_045751e4(param_1 + 0x2a0,0,param_3,*(undefined8 *)PTR_DAT_072a5230);
    bVar5 = (byte)uStack000000000000000c;
  }
  else {
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 05b51f48 with catch @ 05b51f4c
                       try { // try from 05b51f4c to 05c51f6b has its CatchHandler @ 05b51e0c */
    if (param_3 != 0) goto LAB_05b51f50;
LAB_05b51fa8:
    if (*(int *)(*(long *)PTR_DAT_07280e78 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    lVar6 = *(long *)PTR_DAT_07280e70;
    lVar3 = *(long *)(lVar6 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_032934b8();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_032934b8();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    lVar3 = *(long *)(lVar6 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_032934b8();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_032934b8();
    }
    if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_05b520ec;
    puVar4 = (undefined8 *)FUN_05b5f220(**(long **)(lVar3 + 0xb8),0);
    uVar7 = *puVar4;
    *(undefined8 *)(param_1 + 0x2a8) = puVar4[1];
    *(undefined8 *)(param_1 + 0x2a0) = uVar7;
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar3 = *(long *)puVar1;
    }
    bVar5 = (byte)uStack000000000000000c;
    param_5 = 0;
    param_3 = **(long **)(lVar3 + 0xb8);
  }
  *(long *)(param_1 + 0x200) = param_3;
  *(byte *)(param_1 + 0x208) = param_5;
  *(undefined8 *)(param_1 + 0x1f0) = param_4;
  *(byte *)(param_1 + 0x1f8) = param_7 & 1;
  *(byte *)(param_1 + 0x1e8) = param_8 & 1;
  *(byte *)(param_1 + 0x1c0) = bVar5 & 1;
  uVar7 = *in_stack_00000078;
  *(undefined8 *)(param_1 + 0x288) = in_stack_00000078[1];
  *(undefined8 *)(param_1 + 0x280) = uVar7;
  puVar1 = PTR_DAT_07280ea8;
  uVar7 = in_stack_00000078[2];
  *(undefined8 *)(param_1 + 0x278) = in_stack_00000078[3];
  *(undefined8 *)(param_1 + 0x270) = uVar7;
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar3 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x05b520e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x18))
              (*(undefined8 *)(lVar3 + 0x40),param_1 + 0x80,*(undefined8 *)(lVar3 + 0x28));
    return;
  }
LAB_05b520ec:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


