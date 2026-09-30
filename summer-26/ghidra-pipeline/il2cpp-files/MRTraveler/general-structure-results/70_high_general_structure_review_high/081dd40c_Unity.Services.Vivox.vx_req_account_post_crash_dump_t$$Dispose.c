/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_account_post_crash_dump_t$$Dispose
ENTRY_POINT: 081dd40c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_vx_req_account_post_crash_dump_t__Dispose(void)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x23;
  
  *(undefined8 *)(unaff_x23 + 0x30) = unaff_x21;
  thunk_FUN_03d233cc((undefined8 *)(unaff_x23 + 0x30));
  if (3 < *(uint *)(unaff_x23 + 0x18)) {
    *(undefined8 *)(unaff_x23 + 0x38) = *(undefined8 *)PTR_DAT_08f05390;
    thunk_FUN_03d233cc((undefined8 *)(unaff_x23 + 0x38));
    if (4 < *(uint *)(unaff_x23 + 0x18)) {
      *(undefined8 *)(unaff_x23 + 0x40) = unaff_x20;
      thunk_FUN_03d233cc((undefined8 *)(unaff_x23 + 0x40));
      if (5 < *(uint *)(unaff_x23 + 0x18)) {
        *(undefined8 *)(unaff_x23 + 0x48) = *(undefined8 *)PTR_DAT_08f053a0;
        thunk_FUN_03d233cc();
        uVar2 = FUN_06f74f38();
        if (unaff_x19 != 0) {
          lVar3 = *(long *)(unaff_x19 + 0x10);
          *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
          if (lVar3 != 0) {
            uVar1 = *(uint *)(unaff_x19 + 0x18);
            if (uVar1 < *(uint *)(lVar3 + 0x18)) {
              *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = uVar2;
              thunk_FUN_03d233cc();
              return;
            }
            FUN_05212cf4();
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


