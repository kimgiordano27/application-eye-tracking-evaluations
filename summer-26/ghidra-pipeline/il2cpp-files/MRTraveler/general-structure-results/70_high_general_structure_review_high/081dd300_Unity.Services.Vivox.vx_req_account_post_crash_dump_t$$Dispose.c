/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_account_post_crash_dump_t$$Dispose
ENTRY_POINT: 081dd300
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_vx_req_account_post_crash_dump_t__Dispose(long param_1)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  uint in_w9;
  long in_x10;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  
  if (((*(byte *)(in_x10 + 0x130) <= in_w9) &&
      (*(long *)(*(long *)(param_1 + 200) + (ulong)*(byte *)(in_x10 + 0x130) * 8 + -8) == in_x10))
     || (param_1 == *(long *)PTR_DAT_08e69d78)) {
    return;
  }
  bVar1 = *(byte *)(*(long *)PTR_DAT_08e79178 + 0x130);
  if ((in_w9 < bVar1) ||
     (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_08e79178)) {
    FUN_046e891c();
    return;
  }
  lVar3 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69770,6);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x20) = unaff_x22;
      thunk_FUN_03d233cc((undefined8 *)(lVar3 + 0x20));
      if (1 < *(uint *)(lVar3 + 0x18)) {
        *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)PTR_DAT_08f05398;
        thunk_FUN_03d233cc((undefined8 *)(lVar3 + 0x28));
        if (2 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x30) = unaff_x21;
          thunk_FUN_03d233cc((undefined8 *)(lVar3 + 0x30));
          if (3 < *(uint *)(lVar3 + 0x18)) {
            *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)PTR_DAT_08f05390;
            thunk_FUN_03d233cc((undefined8 *)(lVar3 + 0x38));
            if (4 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x40) = unaff_x20;
              thunk_FUN_03d233cc((undefined8 *)(lVar3 + 0x40));
              if (5 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)PTR_DAT_08f053a0;
                thunk_FUN_03d233cc();
                uVar4 = FUN_06f74f38(lVar3,0);
                if (unaff_x19 != 0) {
                  lVar3 = *(long *)(unaff_x19 + 0x10);
                  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
                  if (lVar3 != 0) {
                    uVar2 = *(uint *)(unaff_x19 + 0x18);
                    if (uVar2 < *(uint *)(lVar3 + 0x18)) {
                      *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
                      *(undefined8 *)(lVar3 + (long)(int)uVar2 * 8 + 0x20) = uVar4;
                      thunk_FUN_03d233cc();
                      return;
                    }
                    FUN_05212cf4();
                    return;
                  }
                }
                goto LAB_081dd51c;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb38();
  }
LAB_081dd51c:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


