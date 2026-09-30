/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_sessiongroup_set_tx_all_sessions_t$$Dispose
ENTRY_POINT: 05ff09ac
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_vx_req_sessiongroup_set_tx_all_sessions_t__Dispose(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long in_x10;
  int *piVar4;
  long *unaff_x19;
  
  lVar2 = *unaff_x19;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == **(long **)(in_x10 + 0xb40)) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
        goto LAB_05ff0a00;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02dd004c();
LAB_05ff0a00:
                    /* WARNING: Could not recover jumptable at 0x05ff0a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)();
  return;
}


