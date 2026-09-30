/*
FUNCTION_NAME: MagicaCloth2.ExSimpleNativeArray<int2>$$Serialize
ENTRY_POINT: 04168480
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


int MagicaCloth2_ExSimpleNativeArray<int2>__Serialize(void)

{
  uint uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  ulong uVar6;
  ulong extraout_x1;
  ulong extraout_x1_00;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w23;
  ulong uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  uint uStack0000000000000004;
  int iStack0000000000000008;
  int iStack000000000000000c;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  
  auVar12 = FUN_0335b6c8();
  DataMemoryBarrier(2,3);
  lVar8 = *(long *)(unaff_x21 + 0x38);
  if (lVar8 == 0) {
    auVar12 = FUN_0338f674();
    lVar8 = *(long *)(unaff_x21 + 0x38);
  }
  uVar6 = auVar12._8_8_;
  uVar1 = *(uint *)(*(long *)(lVar8 + 8) + 0xfc);
  iStack0000000000000008 = 0;
  if (unaff_x19 != 0) {
    iStack000000000000000c = uVar1 * *(int *)(unaff_x19 + 0x18);
    lVar8 = 0;
    if (*(int *)(unaff_x19 + 0x18) != 0) {
      lVar8 = unaff_x19 + 0x20;
    }
    uVar10 = 0;
    uVar7 = 0;
    if ((iStack000000000000000c != 0) && (lVar8 != 0)) {
      in_stack_00000010 = 0;
      in_stack_00000018 = 0;
      FUN_079f6ed0(lVar8,iStack000000000000000c,&stack0x00000018,&stack0x00000010);
      uVar6 = extraout_x1;
      uVar10 = in_stack_00000018;
      uVar7 = in_stack_00000010;
    }
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar6;
    auVar12 = auVar12 << 0x40;
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      uVar6 = FUN_05c87aac(*(long *)(unaff_x20 + 0x20),uVar10,uVar7,&stack0x00000008,DAT_083e0e90);
      if ((uVar6 & 1) != 0) {
        return iStack0000000000000008;
      }
      auVar12 = FUN_0766d6dc();
      lVar11 = auVar12._0_8_;
      if ((lVar11 != 0) && (lVar9 = *(long *)(lVar11 + 0x18), lVar9 != 0)) {
        if (*(uint *)(lVar9 + 0x18) <= *(uint *)(lVar11 + 0x10)) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d44();
        }
        iVar2 = *(int *)(unaff_x20 + 0x10);
        lVar9 = lVar9 + (ulong)*(uint *)(lVar11 + 0x10);
        uStack0000000000000004 = unaff_w23;
        if (DAT_086ed1b8 == (code *)0x0) {
          DAT_086ed1b8 = (code *)FUN_033d1b68(
                                             "Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)"
                                             );
        }
        (*DAT_086ed1b8)(lVar9 + 0x20,(long)&stack0x00000008 + 4,4);
        iVar5 = iStack000000000000000c;
        if (DAT_086ed1b8 == (code *)0x0) {
          DAT_086ed1b8 = (code *)FUN_033d1b68(
                                             "Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)"
                                             );
        }
        (*DAT_086ed1b8)(lVar9 + 0x24,lVar8,iVar5);
        *(int *)(unaff_x20 + 0x10) = iStack000000000000000c + 4 + *(int *)(unaff_x20 + 0x10);
        *(int *)(lVar11 + 0x10) = *(int *)(lVar11 + 0x10) + iStack000000000000000c + 4;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = extraout_x1_00;
        auVar12 = auVar3 << 0x40;
        if (*(long *)(unaff_x20 + 0x20) != 0) {
          iVar2 = iVar2 + 4;
          FUN_05c86a40(*(long *)(unaff_x20 + 0x20),uVar10,uVar7,iVar2,1,
                       *(undefined8 *)(*(long *)(*(long *)(DAT_083e0e98 + 0x20) + 0xc0) + 0x110));
          if ((int)uVar1 < 5) {
            return iVar2;
          }
          if ((uStack0000000000000004 & 1) == 0) {
            return iVar2;
          }
          if (*(int *)(unaff_x19 + 0x18) < 1) {
            return iVar2;
          }
          lVar9 = 0;
          lVar11 = 0;
          while( true ) {
            if (lVar8 + lVar9 == 0) {
              uVar6 = 0;
              uVar7 = 0;
            }
            else {
              in_stack_00000010 = 0;
              in_stack_00000018 = 0;
              FUN_079f6ed0(lVar8 + lVar9,(ulong)uVar1,&stack0x00000018,&stack0x00000010);
              uVar6 = in_stack_00000018;
              uVar7 = in_stack_00000010;
            }
            auVar4._8_8_ = 0;
            auVar4._0_8_ = uVar6;
            auVar12 = auVar4 << 0x40;
            if (*(long *)(unaff_x20 + 0x20) == 0) break;
            FUN_05c86a40(*(long *)(unaff_x20 + 0x20),uVar6,uVar7,iVar2 + (int)lVar9,1,
                         *(undefined8 *)(*(long *)(*(long *)(DAT_083e0e98 + 0x20) + 0xc0) + 0x110));
            lVar11 = lVar11 + 1;
            lVar9 = lVar9 + (ulong)uVar1;
            if (*(int *)(unaff_x19 + 0x18) <= lVar11) {
              return iVar2;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c(auVar12._0_8_,auVar12._8_8_);
}


