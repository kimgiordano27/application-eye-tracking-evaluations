/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Message_GetNetSyncSessionArray
ENTRY_POINT: 019596a4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Oculus_Platform_CAPI__ovr_Message_GetNetSyncSessionArray
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long in_x9;
  int *in_x10;
  
  do {
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 0xd) * 0x10 + 0x138);
LAB_019596e0:
                    /* WARNING: Could not recover jumptable at 0x019596f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar1)();
      return;
    }
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_00d59724();
      goto LAB_019596e0;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  } while( true );
}


