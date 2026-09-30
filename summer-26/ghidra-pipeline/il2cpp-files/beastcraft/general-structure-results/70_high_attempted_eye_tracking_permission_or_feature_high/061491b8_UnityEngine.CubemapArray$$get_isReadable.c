/*
FUNCTION_NAME: UnityEngine.CubemapArray$$get_isReadable
ENTRY_POINT: 061491b8
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;attempted_eye_tracking_permission_or_feature_enable;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_CubemapArray__get_isReadable
               (undefined8 *param_1,undefined1 param_2 [16],undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  long lVar9;
  long *unaff_x23;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  uVar10 = FUN_04acf55c(param_4,*param_1);
  FUN_060ba3e8((long)&stack0x00000000 + 4);
  uVar12 = uStack0000000000000018;
  uVar5 = uStack0000000000000010;
  uVar11 = uStack0000000000000008;
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  FUN_06108af0(in_stack_00000000._4_4_,uVar11,uStack000000000000000c);
  FUN_06108c44(uVar5,uStack0000000000000014,uVar12,uStack000000000000001c);
  FUN_06108a0c();
  FUN_06108e7c(uVar10);
  FUN_06108dec();
  UnityEngine_Android_Permission__RequestUserPermissions();
  lVar9 = *(long *)(unaff_x20 + 0xd8);
  if (lVar9 != 0) {
    *(undefined4 *)(lVar9 + 0x18) = 0;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    FUN_061493a0();
    if (*(long *)(unaff_x19 + 0x3d8) != 0) {
      iVar1 = *(int *)(*(long *)(unaff_x19 + 0x3d8) + 0x18);
      if (0 < iVar1) {
        iVar6 = FUN_03fef0b4(lVar9,*(undefined8 *)UnityEngine_Rendering_BatchBufferTarget_TypeInfo);
        if (iVar6 < iVar1) {
          FUN_03fef0cc(lVar9,iVar1,
                       *(undefined8 *)UnityEngine_Rendering_BatchCullingViewType_TypeInfo);
        }
        puVar4 = UnityEngine_UIElements_BaseTreeViewController_TypeInfo;
        puVar3 = PTR_DAT_06a3ac90;
        iVar6 = 0;
        do {
          if (*(long *)(unaff_x19 + 0x3d8) == 0) goto LAB_0614939c;
          FUN_040e5aac(*(long *)(unaff_x19 + 0x3d8),iVar6,*(undefined8 *)puVar4);
          uVar11 = FUN_05d965fc(0);
          lVar7 = *(long *)(lVar9 + 0x10);
          lVar8 = *(long *)puVar3;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar7 == 0) goto LAB_0614939c;
          uVar2 = *(uint *)(lVar9 + 0x18);
          if (uVar2 < *(uint *)(lVar7 + 0x18)) {
            lVar7 = lVar7 + (long)(int)uVar2 * 0xc;
            *(uint *)(lVar9 + 0x18) = uVar2 + 1;
            *(undefined4 *)(lVar7 + 0x20) = uVar11;
            *(undefined4 *)(lVar7 + 0x24) = param_3;
            *(undefined4 *)(lVar7 + 0x28) = uVar12;
          }
          else {
            FUN_03fef5ac(lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          iVar6 = iVar6 + 1;
        } while (iVar1 != iVar6);
      }
      return;
    }
  }
LAB_0614939c:
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


