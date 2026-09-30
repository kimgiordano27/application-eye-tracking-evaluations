/*
FUNCTION_NAME: RootMotion.FinalIK.IKMappingLimb$$ReadPose
ENTRY_POINT: 033dd9a0
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void RootMotion_FinalIK_IKMappingLimb__ReadPose(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = param_1 + 0xf;
  if (0xfffffffffffffff0 < param_1) {
    uVar4 = 0xffffffffffffffff;
  }
  uVar4 = uVar4 & 0xfffffffffffffff0;
  DAT_08908ce8 = DAT_08908ce8 + uVar4;
  if (DAT_086f6838 < DAT_08908ce8) {
    do {
      uVar2 = -DAT_08908cf0;
      if (0x3ffff < uVar4) {
        uVar3 = (uVar4 + DAT_08908cf0) - 1;
        if (uVar2 <= uVar4) {
          uVar3 = 0xffffffffffffffff;
        }
        lVar1 = FUN_033e8aa8(uVar3 & uVar2);
        if (lVar1 == 0) {
          DAT_08908ce8 = DAT_08908ce8 - uVar4;
          return;
        }
        DAT_086f6840 = lVar1 + uVar4;
        DAT_08908ce8 = DAT_08908ce8 - uVar4;
        return;
      }
      uVar3 = DAT_08908cf0 + 0x3ffff;
      if (uVar2 < 0x40000 || DAT_08908cf0 == -0x40000) {
        uVar3 = 0xffffffffffffffff;
      }
      lVar1 = FUN_033e8aa8(uVar3 & uVar2);
      if (lVar1 == 0) {
        (*(code *)PTR_thunk_FUN_033dd8cc_086d5220)
                  ("GC Warning: Out of memory - trying to allocate requested amount (%ld bytes)...\n"
                   ,uVar4);
        DAT_08908ce8 = DAT_08908ce8 - uVar4;
        uVar2 = (uVar4 + DAT_08908cf0) - 1;
        if ((ulong)-DAT_08908cf0 <= uVar4) {
          uVar2 = 0xffffffffffffffff;
        }
        FUN_033e8aa8(uVar2 & -DAT_08908cf0);
        return;
      }
      DAT_086f6838 = lVar1 + (uVar3 & uVar2);
      DAT_08908ce8 = lVar1 + uVar4;
      DAT_086f6840 = DAT_086f6838;
    } while (DAT_086f6838 < DAT_08908ce8);
  }
  return;
}


