/*
FUNCTION_NAME: Unity.Netcode.BufferSerializer<BufferSerializerReader>$$SerializeValue<HalfVector3>
ENTRY_POINT: 0445340c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6
*/


void Unity_Netcode_BufferSerializer<BufferSerializerReader>__SerializeValue<HalfVector3>(void)

{
  long lVar1;
  undefined8 uVar2;
  uint unaff_w19;
  undefined8 unaff_x20;
  long unaff_x23;
  
  lVar1 = thunk_FUN_03cf5138();
  if (lVar1 == 0) {
    uVar2 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc(uVar2,0);
  }
  if (unaff_w19 < *(uint *)(unaff_x23 + 0x18)) {
    *(undefined8 *)(unaff_x23 + (long)(int)unaff_w19 * 8 + 0x20) = unaff_x20;
    thunk_FUN_03d233cc();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


