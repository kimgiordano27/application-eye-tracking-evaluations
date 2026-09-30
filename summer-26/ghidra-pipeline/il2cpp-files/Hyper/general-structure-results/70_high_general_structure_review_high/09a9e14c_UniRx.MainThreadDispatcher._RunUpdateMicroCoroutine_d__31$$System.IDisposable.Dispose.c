/*
FUNCTION_NAME: UniRx.MainThreadDispatcher.<RunUpdateMicroCoroutine>d__31$$System.IDisposable.Dispose
ENTRY_POINT: 09a9e14c
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x09a9e2c0) */

void UniRx_MainThreadDispatcher_<RunUpdateMicroCoroutine>d__31__System_IDisposable_Dispose
               (undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  uStack0000000000000038 = in_stack_00000008;
  uStack0000000000000030 = in_stack_00000000;
  FUN_06ea1198(&stack0x00000030,*param_1);
  in_stack_00000050 = in_stack_00000010;
  in_stack_00000048 = in_stack_00000008;
  in_stack_00000040 = in_stack_00000000;
  if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x30);
  uVar1 = *(undefined4 *)(unaff_x19 + 100);
  uVar2 = *(undefined4 *)(unaff_x19 + 0x68);
  if (*(int *)(*(long *)PTR_DAT_0ac34b50 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  iVar4 = FUN_09a9dab0(uVar8,in_stack_00000000,uVar1,uVar2,unaff_x19 + 0xa4,0);
  FUN_08d0fecc(&stack0x00000040,0);
  iVar6 = *(int *)(unaff_x20 + 0x10);
  if (*(int *)(unaff_x19 + 0xa4) == 0) {
    iVar6 = iVar6 + iVar4;
    *(int *)(unaff_x20 + 0x10) = iVar6;
    lVar7 = *(long *)(unaff_x19 + 0x30);
    iVar3 = *(int *)(unaff_x19 + 100) - iVar4;
    *(int *)(unaff_x19 + 0x60) = *(int *)(unaff_x19 + 0x60) + iVar4;
    *(int *)(unaff_x19 + 100) = iVar3;
    if (lVar7 == 0) {
LAB_09a9e398:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(int *)(lVar7 + 0x54) != 1) {
      if (0 < iVar3) {
        if (*(long *)(lVar7 + 0x30) != 0) {
          uVar9 = *(undefined8 *)(*(long *)(lVar7 + 0x30) + 0x10);
          uVar8 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0acb8e30);
          FUN_09ac3d24();
          uVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0acb8e38);
          FUN_09ac4100(uVar5,2,uVar8);
          thunk_FUN_0496ba88(uVar9,uVar5,0);
          return;
        }
        goto LAB_09a9e398;
      }
      *(int *)(unaff_x19 + 0xa0) = iVar6;
    }
  }
  *(int *)(unaff_x19 + 0xa0) = iVar6;
  UniRx_ObservableWWW__PostAndGetBytes();
  return;
}


