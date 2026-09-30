/*
FUNCTION_NAME: RenderHeads.Media.AVProVideo.NullMediaPlayer$$Dispose
ENTRY_POINT: 049f9cd8
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined4 RenderHeads_Media_AVProVideo_NullMediaPlayer__Dispose(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  short sVar10;
  ushort uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  long *unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  undefined4 unaff_w23;
  undefined4 unaff_w24;
  
RenderHeads_Media_AVProVideo_NullMediaPlayer__InternalSetActiveTrack:
  FUN_049fa77c();
  unaff_x19[0x13] = (ulong)*(uint *)((long)unaff_x19 + 0xac);
  FUN_049f8a84(*unaff_x19);
  iVar8 = *(int *)(*unaff_x19 + 0x20);
  do {
    if (iVar8 == 0) {
      return 0;
    }
LAB_049f99cc:
    if (*(uint *)((long)unaff_x19 + 0xb4) < 0x106) {
      FUN_049f7c18();
      uVar4 = *(uint *)((long)unaff_x19 + 0xb4);
      if ((unaff_w20 == 0) && (uVar4 < 0x106)) {
        return 0;
      }
      if (uVar4 == 0) {
        if ((int)unaff_x19[0x15] != 0) {
          uVar16 = *(uint *)((long)unaff_x19 + 0x170c);
          bVar9 = *(byte *)(unaff_x19[0xc] + (ulong)(*(int *)((long)unaff_x19 + 0xac) - 1));
          *(uint *)((long)unaff_x19 + 0x170c) = uVar16 + 1;
          *(undefined1 *)(unaff_x19[0x2e0] + (ulong)uVar16) = 0;
          uVar16 = *(uint *)((long)unaff_x19 + 0x170c);
          *(uint *)((long)unaff_x19 + 0x170c) = uVar16 + 1;
          *(undefined1 *)(unaff_x19[0x2e0] + (ulong)uVar16) = 0;
          uVar16 = *(uint *)((long)unaff_x19 + 0x170c);
          *(uint *)((long)unaff_x19 + 0x170c) = uVar16 + 1;
          *(byte *)(unaff_x19[0x2e0] + (ulong)uVar16) = bVar9;
          sVar10 = *(short *)((long)unaff_x19 + (ulong)bVar9 * 4 + 0xd4);
          *(undefined4 *)(unaff_x19 + 0x15) = 0;
          *(short *)((long)unaff_x19 + (ulong)bVar9 * 4 + 0xd4) = sVar10 + 1;
        }
        uVar16 = *(uint *)((long)unaff_x19 + 0xac);
        if (1 < uVar16) {
          uVar16 = 2;
        }
        *(uint *)((long)unaff_x19 + 0x172c) = uVar16;
        if (unaff_w20 != 4) {
          if (*(int *)((long)unaff_x19 + 0x170c) != 0) {
            FUN_049fa77c();
            unaff_x19[0x13] = (ulong)*(uint *)((long)unaff_x19 + 0xac);
            FUN_049f8a84(*unaff_x19);
            if (*(int *)(*unaff_x19 + 0x20) == 0) {
              return 0;
            }
          }
          return 1;
        }
        FUN_049fa77c();
        unaff_x19[0x13] = (ulong)*(uint *)((long)unaff_x19 + 0xac);
        FUN_049f8a84(*unaff_x19);
        if (*(int *)(*unaff_x19 + 0x20) != 0) {
          return 3;
        }
        return 2;
      }
      uVar16 = *(uint *)(unaff_x19 + 0x14);
      uVar15 = (undefined4)unaff_x19[0x16];
      if (2 < uVar4) goto LAB_049f9a1c;
      uVar14 = 2;
      *(uint *)(unaff_x19 + 0x17) = uVar16;
      *(undefined4 *)(unaff_x19 + 0x14) = 2;
      *(undefined4 *)((long)unaff_x19 + 0xa4) = uVar15;
    }
    else {
      uVar16 = *(uint *)(unaff_x19 + 0x14);
      uVar15 = (undefined4)unaff_x19[0x16];
LAB_049f9a1c:
      uVar4 = *(uint *)((long)unaff_x19 + 0xac);
      uVar14 = 2;
      bVar9 = *(byte *)(unaff_x19[0xc] + (ulong)(uVar4 + 2));
      *(uint *)(unaff_x19 + 0x17) = uVar16;
      lVar13 = unaff_x19[0xf];
      uVar12 = ((int)unaff_x19[0x10] << (ulong)(*(uint *)(unaff_x19 + 0x12) & 0x1f) ^ (uint)bVar9) &
               *(uint *)((long)unaff_x19 + 0x8c);
      *(undefined4 *)(unaff_x19 + 0x14) = 2;
      *(undefined4 *)((long)unaff_x19 + 0xa4) = uVar15;
      *(uint *)(unaff_x19 + 0x10) = uVar12;
      uVar11 = *(ushort *)(lVar13 + (ulong)uVar12 * 2);
      *(ushort *)(unaff_x19[0xe] + (ulong)(*(uint *)(unaff_x19 + 0xb) & uVar4) * 2) = uVar11;
      *(short *)(lVar13 + (ulong)uVar12 * 2) = (short)uVar4;
      if (uVar11 != 0) {
        uVar14 = 2;
        if ((uVar16 < *(uint *)(unaff_x19 + 0x18)) &&
           (uVar4 - uVar11 <= (int)unaff_x19[10] - 0x106U)) {
          uVar14 = FUN_049f9e98();
          *(uint *)(unaff_x19 + 0x14) = uVar14;
          if (uVar14 < 6) {
            if ((int)unaff_x19[0x19] == 1) {
RenderHeads_Media_AVProVideo_NullMediaPlayer__IsFinished:
              uVar14 = 2;
              *(undefined4 *)(unaff_x19 + 0x14) = 2;
            }
            else if (uVar14 == 3) {
              if (0x1000 < (uint)(*(int *)((long)unaff_x19 + 0xac) - (int)unaff_x19[0x16]))
              goto RenderHeads_Media_AVProVideo_NullMediaPlayer__IsFinished;
              uVar14 = 3;
            }
          }
        }
        uVar16 = *(uint *)(unaff_x19 + 0x17);
      }
    }
    if ((2 < uVar16) && (uVar14 <= uVar16)) {
      uVar4 = *(uint *)((long)unaff_x19 + 0x170c);
      iVar5 = *(int *)((long)unaff_x19 + 0xac);
      *(uint *)((long)unaff_x19 + 0x170c) = uVar4 + 1;
      iVar6 = *(int *)((long)unaff_x19 + 0xb4);
      iVar8 = iVar5 + ~*(uint *)((long)unaff_x19 + 0xa4);
      *(char *)(unaff_x19[0x2e0] + (ulong)uVar4) = (char)iVar8;
      uVar4 = *(uint *)((long)unaff_x19 + 0x170c);
      *(uint *)((long)unaff_x19 + 0x170c) = uVar4 + 1;
      *(char *)(unaff_x19[0x2e0] + (ulong)uVar4) = (char)((uint)iVar8 >> 8);
      uVar4 = *(uint *)((long)unaff_x19 + 0x170c);
      *(uint *)((long)unaff_x19 + 0x170c) = uVar4 + 1;
      *(char *)(unaff_x19[0x2e0] + (ulong)uVar4) = (char)(uVar16 - 3);
      uVar4 = iVar8 - 1;
      bVar9 = *(byte *)(unaff_x21 + ((ulong)(uVar16 - 3) & 0xff));
      iVar8 = *(int *)((long)unaff_x19 + 0xac);
      if ((uVar4 & 0xff00) != 0) {
        uVar4 = (uVar4 >> 7 & 0x1ff) + 0x100;
      }
      *(short *)((long)unaff_x19 + (ulong)bVar9 * 4 + 0x4d8) =
           *(short *)((long)unaff_x19 + (ulong)bVar9 * 4 + 0x4d8) + 1;
      bVar9 = *(byte *)(unaff_x22 + ((ulong)uVar4 & 0xffff));
      iVar1 = *(int *)((long)unaff_x19 + 0xb4);
      iVar2 = (int)unaff_x19[0x17];
      iVar7 = *(int *)((long)unaff_x19 + 0x170c);
      lVar13 = unaff_x19[0x2e2];
      *(short *)((long)unaff_x19 + (ulong)bVar9 * 4 + 0x9c8) =
           *(short *)((long)unaff_x19 + (ulong)bVar9 * 4 + 0x9c8) + 1;
      iVar17 = iVar2 + -3;
      *(int *)((long)unaff_x19 + 0xb4) = (iVar1 - iVar2) + 1;
      *(int *)(unaff_x19 + 0x17) = iVar2 + -2;
      uVar16 = iVar8 + 1;
      do {
        *(uint *)((long)unaff_x19 + 0xac) = uVar16;
        if (uVar16 <= (iVar5 + iVar6) - 3U) {
          lVar3 = unaff_x19[0xf];
          uVar4 = ((int)unaff_x19[0x10] << (ulong)(*(uint *)(unaff_x19 + 0x12) & 0x1f) ^
                  (uint)*(byte *)(unaff_x19[0xc] + (ulong)(uVar16 + 2))) &
                  *(uint *)((long)unaff_x19 + 0x8c);
          *(uint *)(unaff_x19 + 0x10) = uVar4;
          *(undefined2 *)(unaff_x19[0xe] + (ulong)(*(uint *)(unaff_x19 + 0xb) & uVar16) * 2) =
               *(undefined2 *)(lVar3 + (ulong)uVar4 * 2);
          *(short *)(lVar3 + (ulong)uVar4 * 2) = (short)uVar16;
        }
        *(int *)(unaff_x19 + 0x17) = iVar17;
        iVar17 = iVar17 + -1;
        uVar16 = uVar16 + 1;
      } while (iVar17 != -1);
      *(undefined4 *)(unaff_x19 + 0x14) = unaff_w24;
      *(undefined4 *)(unaff_x19 + 0x15) = 0;
      *(uint *)((long)unaff_x19 + 0xac) = uVar16;
      if (iVar7 == (int)lVar13)
      goto RenderHeads_Media_AVProVideo_NullMediaPlayer__InternalSetActiveTrack;
      goto LAB_049f99cc;
    }
    if ((int)unaff_x19[0x15] == 0) {
      *(undefined4 *)(unaff_x19 + 0x15) = unaff_w23;
      *(int *)((long)unaff_x19 + 0xac) = *(int *)((long)unaff_x19 + 0xac) + 1;
      *(int *)((long)unaff_x19 + 0xb4) = *(int *)((long)unaff_x19 + 0xb4) + -1;
      goto LAB_049f99cc;
    }
    uVar16 = *(uint *)((long)unaff_x19 + 0x170c);
    bVar9 = *(byte *)(unaff_x19[0xc] + (ulong)(*(int *)((long)unaff_x19 + 0xac) - 1));
    *(uint *)((long)unaff_x19 + 0x170c) = uVar16 + 1;
    *(undefined1 *)(unaff_x19[0x2e0] + (ulong)uVar16) = 0;
    uVar16 = *(uint *)((long)unaff_x19 + 0x170c);
    *(uint *)((long)unaff_x19 + 0x170c) = uVar16 + 1;
    *(undefined1 *)(unaff_x19[0x2e0] + (ulong)uVar16) = 0;
    uVar16 = *(uint *)((long)unaff_x19 + 0x170c);
    *(uint *)((long)unaff_x19 + 0x170c) = uVar16 + 1;
    *(byte *)(unaff_x19[0x2e0] + (ulong)uVar16) = bVar9;
    iVar8 = *(int *)((long)unaff_x19 + 0x170c);
    lVar13 = unaff_x19[0x2e2];
    *(short *)((long)unaff_x19 + (ulong)bVar9 * 4 + 0xd4) =
         *(short *)((long)unaff_x19 + (ulong)bVar9 * 4 + 0xd4) + 1;
    if (iVar8 == (int)lVar13) {
      FUN_049fa77c();
      unaff_x19[0x13] = (ulong)*(uint *)((long)unaff_x19 + 0xac);
      FUN_049f8a84(*unaff_x19);
    }
    iVar8 = *(int *)(*unaff_x19 + 0x20);
    *(int *)((long)unaff_x19 + 0xac) = *(int *)((long)unaff_x19 + 0xac) + 1;
    *(int *)((long)unaff_x19 + 0xb4) = *(int *)((long)unaff_x19 + 0xb4) + -1;
  } while( true );
}


