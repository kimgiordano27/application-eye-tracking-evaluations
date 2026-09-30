/*
FUNCTION_NAME: UnityEngine.CubemapArray$$Internal_CreateImpl
ENTRY_POINT: 0614926c
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


void UnityEngine_CubemapArray__Internal_CreateImpl
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long lVar8;
  undefined4 uVar9;
  
  UnityEngine_Android_Permission__RequestUserPermissions();
  lVar8 = *(long *)(unaff_x20 + 0xd8);
  if (lVar8 != 0) {
    *(undefined4 *)(lVar8 + 0x18) = 0;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    FUN_061493a0();
    if (*(long *)(unaff_x19 + 0x3d8) != 0) {
      iVar1 = *(int *)(*(long *)(unaff_x19 + 0x3d8) + 0x18);
      if (0 < iVar1) {
        iVar5 = FUN_03fef0b4(lVar8,*(undefined8 *)UnityEngine_Rendering_BatchBufferTarget_TypeInfo);
        if (iVar5 < iVar1) {
          FUN_03fef0cc(lVar8,iVar1,
                       *(undefined8 *)UnityEngine_Rendering_BatchCullingViewType_TypeInfo);
        }
        puVar4 = UnityEngine_UIElements_BaseTreeViewController_TypeInfo;
        puVar3 = PTR_DAT_06a3ac90;
        iVar5 = 0;
        do {
          if (*(long *)(unaff_x19 + 0x3d8) == 0) goto LAB_0614939c;
          FUN_040e5aac(*(long *)(unaff_x19 + 0x3d8),iVar5,*(undefined8 *)puVar4);
          uVar9 = FUN_05d965fc(0);
          lVar6 = *(long *)(lVar8 + 0x10);
          lVar7 = *(long *)puVar3;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar6 == 0) goto LAB_0614939c;
          uVar2 = *(uint *)(lVar8 + 0x18);
          if (uVar2 < *(uint *)(lVar6 + 0x18)) {
            lVar6 = lVar6 + (long)(int)uVar2 * 0xc;
            *(uint *)(lVar8 + 0x18) = uVar2 + 1;
            *(undefined4 *)(lVar6 + 0x20) = uVar9;
            *(undefined4 *)(lVar6 + 0x24) = param_2;
            *(undefined4 *)(lVar6 + 0x28) = param_3;
          }
          else {
            FUN_03fef5ac(lVar8,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          iVar5 = iVar5 + 1;
        } while (iVar1 != iVar5);
      }
      return;
    }
  }
LAB_0614939c:
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


