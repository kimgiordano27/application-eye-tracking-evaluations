/*
FUNCTION_NAME: BNG.HandController$$GetDefaultClosedPose
ENTRY_POINT: 01b741ec
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void BNG_HandController__GetDefaultClosedPose(long param_1)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  ulong in_x9;
  undefined1 uVar5;
  long unaff_x20;
  char *pcVar6;
  char *pcVar7;
  ulong uVar8;
  long unaff_x26;
  long unaff_x29;
  
  uVar5 = 0x78;
  if ((in_x9 & 0x4000) != 0) {
    uVar5 = 0x58;
  }
  *(undefined1 *)(param_1 + 1) = uVar5;
  uVar8 = (ulong)(*(uint *)(unaff_x20 + 8) >> 9) & 1;
  uVar1 = uVar8 + 0x17;
  pcVar6 = &stack0x00000000 + -((ulong)((int)uVar1 + 0xf) & 0x30);
  if (((DAT_04213ec0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04213ec0), iVar4 != 0)) {
    DAT_04213eb8 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_04213ec0);
  }
  iVar4 = std::__ndk1::__libcpp_snprintf_l
                    (pcVar6,uVar1,(__locale_t *)DAT_04213eb8,(char *)(unaff_x29 + -0x10));
  uVar2 = *(uint *)(unaff_x20 + 8) & 0xb0;
  pcVar7 = pcVar6 + iVar4;
  if ((uVar2 != 0x20) && (pcVar7 = pcVar6, uVar2 == 0x10)) {
    cVar3 = *pcVar6;
    if ((cVar3 == '-') || (cVar3 == '+')) {
      pcVar7 = pcVar6 + 1;
    }
    else if (((1 < iVar4) && (cVar3 == '0')) && ((byte)(pcVar6[1] | 0x20U) == 0x78)) {
      pcVar7 = pcVar6 + 2;
    }
  }
  std::__ndk1::ios_base::getloc();
  std::__ndk1::__num_put<char>::__widen_and_group_int
            (pcVar6,pcVar7,pcVar6 + iVar4,
             pcVar6 + -((ulong)(((uint)uVar8 | 0x16) * 2 - 1) + 0xf & 0x1fffffff0),
             (char **)(unaff_x29 + -0x18),(char **)(unaff_x29 + -0x20),(locale *)(unaff_x29 + -0x28)
            );
  std::__ndk1::__shared_count::__release_shared(*(__shared_count **)(unaff_x29 + -0x28));
  FUN_01ae9ccc();
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


