/*
FUNCTION_NAME: OVREyeGaze$$PrepareHeadDirection
ENTRY_POINT: 07bf5180
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 91
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


uint OVREyeGaze__PrepareHeadDirection
               (long param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,
               undefined8 param_5,long param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  long in_x9;
  int *piVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uStack000000000000000c;
  uint uStack0000000000000014;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  ulong in_stack_00000030;
  
  uVar7 = in_stack_00000030 >> 0x20;
  if (in_x9 != 0) {
    piVar3 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar3 + -2) == param_6) {
        puVar2 = (undefined8 *)(param_1 + (long)(*piVar3 + 2) * 0x10 + 0x138);
        goto LAB_07bf51c4;
      }
      in_x9 = in_x9 + -1;
      piVar3 = piVar3 + 4;
    } while (in_x9 != 0);
  }
  puVar2 = (undefined8 *)FUN_044822ac();
LAB_07bf51c4:
  uVar1 = (*(code *)*puVar2)(0);
  if ((uVar1 & 1) == 0) {
    uVar4 = unaff_x20[2];
    uVar6 = unaff_x20[1];
    uVar5 = *unaff_x20;
    *(undefined4 *)(unaff_x19 + 3) = *(undefined4 *)(unaff_x20 + 3);
    unaff_x19[2] = uVar4;
    unaff_x19[1] = uVar6;
    *unaff_x19 = uVar5;
  }
  else {
    in_stack_00000030 = in_stack_00000030 & 0xffffffff;
    if (*(int *)(*(long *)PTR_DAT_09f25358 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar4 = FUN_09538150();
    uVar5 = FUN_09516bac(uStack000000000000002c,in_stack_00000030,uVar7,uVar4,param_3,param_4,0);
    uStack000000000000000c = 0;
    uStack0000000000000014 = 0;
    FUN_09537b20(uStack0000000000000020,uStack0000000000000024,uStack0000000000000028,uVar5,
                 in_stack_00000030,uVar7,uVar4);
    *(ulong *)((long)unaff_x19 + 0x14) = (ulong)uStack0000000000000014;
    *(ulong *)((long)unaff_x19 + 0xc) = (ulong)uStack000000000000000c;
    unaff_x19[1] = (ulong)uStack000000000000000c << 0x20;
    *unaff_x19 = 0;
  }
  return uVar1 & 1;
}


