/*
FUNCTION_NAME: UniRx.MainThreadDispatcher.<RunFixedUpdateMicroCoroutine>d__32$$System.IDisposable.Dispose
ENTRY_POINT: 09a9e048
PROGRAM: Hyper-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x09a9e2c0) */

void UniRx_MainThreadDispatcher_<RunFixedUpdateMicroCoroutine>d__32__System_IDisposable_Dispose
               (void)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined4 unaff_w21;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x22;
  undefined8 uStack0000000000000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  FUN_04947ee4(PTR_DAT_0acb8e30);
  FUN_04947ee4(PTR_DAT_0acb8e38);
  FUN_04947ee4(PTR_DAT_0acb8fa8);
  FUN_04947ee4(PTR_DAT_0ac46d48);
  FUN_04947ee4(PTR_DAT_0ac34b50);
  FUN_04947ee4(PTR_DAT_0acb9010);
  FUN_04947ee4(PTR_DAT_0acb9008);
  *(undefined1 *)(unaff_x22 + 0x105) = 1;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  lVar9 = thunk_FUN_04983f60(*unaff_x20);
  FUN_08dbf2f0(lVar9,0);
  if (lVar9 != 0) {
    *(undefined4 *)(lVar9 + 0x10) = unaff_w21;
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar2 = *(uint *)(unaff_x19 + 0x5c);
    uVar4 = *(uint *)(unaff_x19 + 0x60);
    uVar6 = *(uint *)(unaff_x19 + 100);
    uVar1 = uVar2 & 0x7fffffff;
    lVar11 = *(long *)PTR_DAT_0ac46d48;
    if ((uVar1 < uVar4) || (uVar1 - uVar4 < uVar6)) {
      FUN_08d9c7d4(0);
    }
    uVar12 = *(undefined8 *)(unaff_x19 + 0x50);
    iVar10 = *(int *)(unaff_x19 + 0x58);
    if ((*(byte *)(*(long *)(lVar11 + 0x20) + 0x135) & 1) == 0) {
      FUN_04980b34();
    }
    thunk_FUN_049ee3d8();
    uStack0000000000000008 = CONCAT44(uVar2 & 0x80000000 | uVar6,iVar10 + uVar4);
    in_stack_00000038 = uStack0000000000000008;
    in_stack_00000030 = uVar12;
    FUN_06ea1198(&stack0x00000030,*(undefined8 *)PTR_DAT_0acb8fa8);
    in_stack_00000050 = in_stack_00000010;
    in_stack_00000048 = uStack0000000000000008;
    in_stack_00000040 = uVar12;
    if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar13 = *(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x30);
    uVar3 = *(undefined4 *)(unaff_x19 + 100);
    uVar5 = *(undefined4 *)(unaff_x19 + 0x68);
    if (*(int *)(*(long *)PTR_DAT_0ac34b50 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    iVar8 = FUN_09a9dab0(uVar13,uVar12,uVar3,uVar5,unaff_x19 + 0xa4,0);
    FUN_08d0fecc(&stack0x00000040,0);
    iVar10 = *(int *)(lVar9 + 0x10);
    if (*(int *)(unaff_x19 + 0xa4) == 0) {
      iVar10 = iVar10 + iVar8;
      *(int *)(lVar9 + 0x10) = iVar10;
      lVar11 = *(long *)(unaff_x19 + 0x30);
      iVar7 = *(int *)(unaff_x19 + 100) - iVar8;
      *(int *)(unaff_x19 + 0x60) = *(int *)(unaff_x19 + 0x60) + iVar8;
      *(int *)(unaff_x19 + 100) = iVar7;
      if (lVar11 == 0) goto LAB_09a9e398;
      if (*(int *)(lVar11 + 0x54) != 1) {
        if (0 < iVar7) {
          if (*(long *)(lVar11 + 0x30) != 0) {
            uVar14 = *(undefined8 *)(*(long *)(lVar11 + 0x30) + 0x10);
            uVar12 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0acb8e30);
            FUN_09ac3d24(uVar12,lVar9,*(undefined8 *)PTR_DAT_0acb9010,0);
            uVar13 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0acb8e38);
            FUN_09ac4100(uVar13,2,uVar12);
            thunk_FUN_0496ba88(uVar14,uVar13,0);
            return;
          }
          goto LAB_09a9e398;
        }
        *(int *)(unaff_x19 + 0xa0) = iVar10;
      }
    }
    *(int *)(unaff_x19 + 0xa0) = iVar10;
    UniRx_ObservableWWW__PostAndGetBytes();
    return;
  }
LAB_09a9e398:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


