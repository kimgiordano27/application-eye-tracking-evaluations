/*
FUNCTION_NAME: UnityEngine.Texture2DArray$$Apply
ENTRY_POINT: 06149154
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_Texture2DArray__Apply(undefined1 param_1 [16],undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  long lVar10;
  long *unaff_x23;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  if ((*(int *)(unaff_x19 + 0x1b4) == 0 && *(char *)(unaff_x19 + 0x1c0) != '\0') ||
     (*(int *)(unaff_x19 + 0x1b4) == 1)) {
    uVar11 = FUN_061359fc();
  }
  else {
    if (*(long *)(unaff_x19 + 0x330) == 0) goto LAB_0614939c;
    uVar11 = FUN_04acf55c(*(long *)(unaff_x19 + 0x330),
                          *(undefined8 *)Oculus_Platform_Request<PurchaseList>_TypeInfo);
  }
  FUN_060ba3e8((long)&stack0x00000000 + 4);
  uVar12 = uStack0000000000000018;
  uVar6 = uStack0000000000000010;
  uVar5 = uStack0000000000000008;
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  FUN_06108af0(in_stack_00000000._4_4_,uVar5,uStack000000000000000c);
  FUN_06108c44(uVar6,uStack0000000000000014,uVar12,uStack000000000000001c);
  FUN_06108a0c();
  FUN_06108e7c(uVar11);
  FUN_06108dec();
  UnityEngine_Android_Permission__RequestUserPermissions();
  lVar10 = *(long *)(unaff_x20 + 0xd8);
  if (lVar10 != 0) {
    *(undefined4 *)(lVar10 + 0x18) = 0;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    FUN_061493a0();
    if (*(long *)(unaff_x19 + 0x3d8) != 0) {
      iVar1 = *(int *)(*(long *)(unaff_x19 + 0x3d8) + 0x18);
      if (0 < iVar1) {
        iVar7 = FUN_03fef0b4(lVar10,*(undefined8 *)UnityEngine_Rendering_BatchBufferTarget_TypeInfo)
        ;
        if (iVar7 < iVar1) {
          FUN_03fef0cc(lVar10,iVar1,
                       *(undefined8 *)UnityEngine_Rendering_BatchCullingViewType_TypeInfo);
        }
        puVar4 = UnityEngine_UIElements_BaseTreeViewController_TypeInfo;
        puVar3 = PTR_DAT_06a3ac90;
        iVar7 = 0;
        do {
          if (*(long *)(unaff_x19 + 0x3d8) == 0) goto LAB_0614939c;
          FUN_040e5aac(*(long *)(unaff_x19 + 0x3d8),iVar7,*(undefined8 *)puVar4);
          uVar11 = FUN_05d965fc(0);
          lVar8 = *(long *)(lVar10 + 0x10);
          lVar9 = *(long *)puVar3;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_0614939c;
          uVar2 = *(uint *)(lVar10 + 0x18);
          if (uVar2 < *(uint *)(lVar8 + 0x18)) {
            lVar8 = lVar8 + (long)(int)uVar2 * 0xc;
            *(uint *)(lVar10 + 0x18) = uVar2 + 1;
            *(undefined4 *)(lVar8 + 0x20) = uVar11;
            *(undefined4 *)(lVar8 + 0x24) = param_2;
            *(undefined4 *)(lVar8 + 0x28) = uVar12;
          }
          else {
            FUN_03fef5ac(lVar10,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          iVar7 = iVar7 + 1;
        } while (iVar1 != iVar7);
      }
      return;
    }
  }
LAB_0614939c:
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


