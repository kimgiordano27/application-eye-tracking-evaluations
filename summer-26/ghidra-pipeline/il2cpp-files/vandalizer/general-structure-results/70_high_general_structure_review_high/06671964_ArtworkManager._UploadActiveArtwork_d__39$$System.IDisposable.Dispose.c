/*
FUNCTION_NAME: ArtworkManager.<UploadActiveArtwork>d__39$$System.IDisposable.Dispose
ENTRY_POINT: 06671964
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


bool ArtworkManager_<UploadActiveArtwork>d__39__System_IDisposable_Dispose
               (undefined8 param_1,long param_2)

{
  long lVar1;
  short *psVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  bool bVar11;
  short *psVar12;
  long lVar13;
  
  if ((DAT_07a4d046 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_076163b0);
    FUN_031f20f4(PTR_DAT_0759c1b8);
    DAT_07a4d046 = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  iVar7 = thunk_FUN_031fe65c(0);
  puVar6 = PTR_DAT_0759c1b8;
  iVar5 = *(int *)(param_2 + 0x10) + -2;
  bVar11 = 0 < iVar5;
  if (0 < iVar5) {
    psVar2 = (short *)(param_2 + iVar7);
    lVar10 = 0;
    lVar13 = 0x200000000;
    psVar12 = psVar2;
    do {
      if (*psVar12 == 0x25) {
        uVar3 = psVar12[1];
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        if ((uVar3 - 0x30 < 10) ||
           ((uVar8 = uVar3 - 0x41, uVar8 < 0x26 &&
            ((1L << ((ulong)uVar8 & 0x3f) & 0x3f0000003fU) != 0)))) {
          uVar3 = *(ushort *)((lVar13 >> 0x1f) + (long)psVar2);
          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          uVar8 = (uint)uVar3;
          if (((uVar8 - 0x30 < 10) ||
              ((uVar8 = uVar8 - 0x41, uVar8 < 0x26 &&
               ((1L << ((ulong)uVar8 & 0x3f) & 0x3f0000003fU) != 0)))) &&
             (uVar3 = psVar12[1], (uVar3 & 0xfff8) == 0x30)) {
            uVar4 = *(undefined2 *)((long)psVar2 + (lVar13 >> 0x1f));
            if (*(int *)(*(long *)PTR_DAT_076163b0 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            uVar8 = FUN_066ab028(uVar3,uVar4,0);
            if ((~uVar8 & 0xffff) != 0) {
              if (*(int *)(*(long *)PTR_DAT_076163b0 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              uVar9 = FUN_066acc88(uVar8,0);
              if ((uVar9 & 1) != 0) {
                return bVar11;
              }
            }
          }
        }
      }
      lVar10 = lVar10 + 1;
      psVar12 = psVar12 + 1;
      lVar13 = lVar13 + 0x100000000;
      lVar1 = (long)(*(int *)(param_2 + 0x10) + -2);
      bVar11 = lVar10 < lVar1;
    } while (lVar10 < lVar1);
  }
  return bVar11;
}


