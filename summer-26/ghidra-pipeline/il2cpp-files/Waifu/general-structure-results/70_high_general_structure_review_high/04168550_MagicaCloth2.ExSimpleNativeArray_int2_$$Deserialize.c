/*
FUNCTION_NAME: MagicaCloth2.ExSimpleNativeArray<int2>$$Deserialize
ENTRY_POINT: 04168550
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


int MagicaCloth2_ExSimpleNativeArray<int2>__Deserialize(void)

{
  int iVar1;
  undefined8 extraout_x1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_x9;
  long in_x10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar4;
  long lVar5;
  long unaff_x26;
  ulong in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  iVar1 = *(int *)(unaff_x20 + 0x10);
  if (DAT_086ed1b8 == (code *)0x0) {
    DAT_086ed1b8 = (code *)FUN_033d1b68(
                                       "Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)"
                                       );
  }
  (*DAT_086ed1b8)(in_x9 + in_x10 + 0x20,(long)&stack0x00000008 + 4,4);
  if (DAT_086ed1b8 == (code *)0x0) {
    DAT_086ed1b8 = (code *)FUN_033d1b68(
                                       "Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)"
                                       );
  }
  (*DAT_086ed1b8)(in_x9 + in_x10 + 0x24);
  *(int *)(unaff_x20 + 0x10) = in_stack_00000008._4_4_ + 4 + *(int *)(unaff_x20 + 0x10);
  *(int *)(unaff_x26 + 0x10) = *(int *)(unaff_x26 + 0x10) + in_stack_00000008._4_4_ + 4;
  uVar2 = extraout_x1;
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    iVar1 = iVar1 + 4;
    FUN_05c86a40();
    if (((4 < (int)unaff_x21) && ((in_stack_00000000 & 0x100000000) != 0)) &&
       (0 < *(int *)(unaff_x19 + 0x18))) {
      lVar4 = 0;
      lVar5 = 0;
      do {
        if (unaff_x22 + lVar4 == 0) {
          uVar2 = 0;
          uVar3 = 0;
        }
        else {
          in_stack_00000010 = 0;
          in_stack_00000018 = 0;
          FUN_079f6ed0(unaff_x22 + lVar4);
          uVar2 = in_stack_00000018;
          uVar3 = in_stack_00000010;
        }
        if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_041686c4;
        FUN_05c86a40(*(long *)(unaff_x20 + 0x20),uVar2,uVar3,iVar1 + (int)lVar4,1,
                     *(undefined8 *)(*(long *)(*(long *)(DAT_083e0e98 + 0x20) + 0xc0) + 0x110));
        lVar5 = lVar5 + 1;
        lVar4 = lVar4 + unaff_x21;
      } while (lVar5 < *(int *)(unaff_x19 + 0x18));
    }
    return iVar1;
  }
LAB_041686c4:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c(0,uVar2);
}


