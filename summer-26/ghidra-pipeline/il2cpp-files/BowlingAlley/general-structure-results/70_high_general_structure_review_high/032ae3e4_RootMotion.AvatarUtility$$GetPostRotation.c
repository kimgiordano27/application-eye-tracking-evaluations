/*
FUNCTION_NAME: RootMotion.AvatarUtility$$GetPostRotation
ENTRY_POINT: 032ae3e4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


uint RootMotion_AvatarUtility__GetPostRotation(ulong *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if ((char)param_1[3] == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_032ae5cc(param_1);
  }
  uVar4 = param_1[0xc];
  if (~param_2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  uVar3 = param_1[0xb];
  if ((uVar3 < 4) || (*param_1 < uVar4 + param_2)) {
    uVar2 = 4;
    do {
      uVar5 = uVar2;
      uVar2 = uVar5 << 1;
    } while ((ulong)(long)(*(float *)(param_1 + 2) * (float)uVar5) <= uVar4 + param_2);
    if (uVar3 < uVar5) {
      param_2 = (uVar4 - param_1[7]) + param_2;
      uVar4 = 4;
      do {
        do {
          uVar2 = uVar4;
          uVar4 = uVar2 << 1;
        } while (uVar2 < uVar3);
      } while ((ulong)(long)(*(float *)(param_1 + 2) * (float)uVar2) <= param_2);
      if (((uVar2 < uVar5) && (uVar2 < 0x7fffffffffffffff)) &&
         ((ulong)(long)(*(float *)((long)param_1 + 0x14) * (float)uVar4) <= param_2)) {
        uVar2 = uVar4;
      }
      FUN_032ae680(&stack0x00000008,0,param_1,uVar2);
      FUN_032a1eac(param_1,&stack0x00000008);
      FUN_03294da4(&stack0x00000048);
      uVar1 = 1;
    }
  }
  return uVar1 & 1;
}


