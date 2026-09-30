/*
FUNCTION_NAME: ExitGames.Client.Photon.Protocol16$$DeserializeStringArray
ENTRY_POINT: 02e4dd78
PROGRAM: vrfs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


undefined8
ExitGames_Client_Photon_Protocol16__DeserializeStringArray
          (long param_1,float param_2,float param_3,float param_4,long param_5)

{
  uint uVar1;
  undefined4 *unaff_x19;
  float *unaff_x20;
  long *unaff_x22;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  undefined8 in_stack_00000018;
  
  if ((0.0 <= (unaff_s10 - param_4) * (*(float *)(param_1 + 0x4c) - param_4) +
              (unaff_s8 - param_2) * (*(float *)(param_1 + 0x44) - param_2) +
              (unaff_s9 - param_3) * (*(float *)(param_1 + 0x48) - param_3)) &&
     (0.0 <= (unaff_s10 - param_4) * (*(float *)(param_1 + 0x34) - param_4) +
             (unaff_s8 - param_2) * (*(float *)(param_1 + 0x2c) - param_2) +
             (unaff_s9 - param_3) * (*(float *)(param_1 + 0x30) - param_3))) {
    if (*(int *)(param_5 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      param_1 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
    }
    uVar1 = *(uint *)(param_1 + 0x18);
    if (((uVar1 < 2) || (uVar1 == 2)) || (uVar1 < 4)) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    fVar2 = *(float *)(param_1 + 0x38);
    fVar4 = *(float *)(param_1 + 0x3c);
    fVar3 = *(float *)(param_1 + 0x40);
    if ((0.0 <= (unaff_s10 - fVar3) * (*(float *)(param_1 + 0x34) - fVar3) +
                (unaff_s8 - fVar2) * (*(float *)(param_1 + 0x2c) - fVar2) +
                (unaff_s9 - fVar4) * (*(float *)(param_1 + 0x30) - fVar4)) &&
       (0.0 <= (unaff_s10 - fVar3) * (*(float *)(param_1 + 0x4c) - fVar3) +
               (unaff_s8 - fVar2) * (*(float *)(param_1 + 0x44) - fVar2) +
               (unaff_s9 - fVar4) * (*(float *)(param_1 + 0x48) - fVar4))) {
      *unaff_x20 = unaff_s8;
      unaff_x20[1] = unaff_s9;
      unaff_x20[2] = unaff_s10;
      *unaff_x19 = in_stack_00000018._4_4_;
      return 1;
    }
  }
  if (DAT_0722a13e == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06e50440);
    DAT_0722a13e = '\x01';
  }
  fVar2 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_06e50440 + 0xb8) + 1);
  *(undefined8 *)unaff_x20 = **(undefined8 **)(*(long *)PTR_DAT_06e50440 + 0xb8);
  unaff_x20[2] = fVar2;
  *unaff_x19 = 0;
  return 0;
}


