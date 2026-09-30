/*
FUNCTION_NAME: Unity.Netcode.BufferSerializerWriter$$SerializeValue<HalfVector3>
ENTRY_POINT: 04dada44
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Unity_Netcode_BufferSerializerWriter__SerializeValue<HalfVector3>
               (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  uint unaff_w19;
  long unaff_x20;
  long *unaff_x23;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000010;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000010 = param_1;
  lVar1 = thunk_FUN_03d2eb70(**(undefined8 **)(unaff_x20 + 0x38));
  if ((lVar1 != 0) &&
     (lVar2 = thunk_FUN_03d2ee44(lVar1,*(undefined8 *)(*unaff_x23 + 0x40)), lVar2 == 0)) {
    uVar3 = thunk_FUN_03d3c630();
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar3,0);
  }
  if (unaff_w19 < *(uint *)(unaff_x23 + 3)) {
    unaff_x23[(long)(int)unaff_w19 + 4] = lVar1;
    thunk_FUN_03d1023c(unaff_x23 + (long)(int)unaff_w19 + 4,lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


