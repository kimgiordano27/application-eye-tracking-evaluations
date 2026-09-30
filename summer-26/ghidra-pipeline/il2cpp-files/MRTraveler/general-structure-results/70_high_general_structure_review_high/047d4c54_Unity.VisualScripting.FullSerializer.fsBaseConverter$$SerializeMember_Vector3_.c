/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsBaseConverter$$SerializeMember<Vector3>
ENTRY_POINT: 047d4c54
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_fsBaseConverter__SerializeMember<Vector3>(long param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 uVar3;
  long unaff_x20;
  long unaff_x21;
  
  FUN_03c8f898(*(undefined8 *)(param_1 + 0x108));
  if (*(long *)(unaff_x20 + 0x38) == 0) {
    FUN_03cf12a0();
  }
  if (unaff_x19 != 0) {
    uVar1 = FUN_083c9d2c();
    if ((uVar1 & 1) == 0) {
      if (unaff_x21 != 0) {
        lVar2 = FUN_085dbb5c();
        FUN_047dfb6c();
        FUN_07eb01c8(0);
        if (lVar2 != 0) {
          FUN_085ec970(lVar2,0);
          FUN_07eb01cc(0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_047d5604();
    uVar3 = *(undefined8 *)PTR_DAT_08e82108;
    memcpy(&stack0x00000048,&stack0x00000000,0x48);
    FUN_047dfa40(&stack0x00000048,uVar3);
  }
  return;
}


