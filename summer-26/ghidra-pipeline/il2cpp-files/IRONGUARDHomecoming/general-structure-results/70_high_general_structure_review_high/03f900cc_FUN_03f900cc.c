/*
FUNCTION_NAME: FUN_03f900cc
ENTRY_POINT: 03f900cc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


undefined1  [16] FUN_03f900cc(long param_1,undefined8 param_2,long *param_3,long *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar3 = Method_UnityEngine_Rendering_Universal_DBufferRenderPass_OnCameraCleanup__;
  if ((DAT_0483b6e1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_DBNull_System_IConvertible_ToDouble__);
    thunk_FUN_01efb3a4(Method_Oculus_Interaction_FingerPinchValue_HandleHandUpdated__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_FirstHoverInteractorGroup_HandleBestInteractorStateChanged__
                      );
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_GroupBy<KeyValuePair<Vector3,_int>,_Vector3>__)
    ;
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_DBufferRenderPass_OnCameraCleanup__);
    thunk_FUN_01efb3a4(Method_System_DBNull_System_IConvertible_ToDecimal__);
    DAT_0483b6e1 = 1;
  }
  puVar5 = Method_Oculus_Interaction_FirstHoverInteractorGroup_HandleBestInteractorStateChanged__;
  puVar4 = Method_Oculus_Interaction_FingerPinchValue_HandleHandUpdated__;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  local_68 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar6 = (long *)FUN_03fa7f6c(param_4,*(undefined8 *)puVar5,0);
  plVar7 = (long *)FUN_03fa7f6c(param_4,*(undefined8 *)puVar4,0);
  if (plVar6 != (long *)0x0) {
    uVar8 = (**(code **)(*plVar6 + 0x308))(plVar6,param_2,0,*(undefined8 *)(*plVar6 + 0x310));
    if (plVar7 != (long *)0x0) {
      uVar9 = (**(code **)(*plVar7 + 0x308))(plVar7,param_2,0,*(undefined8 *)(*plVar7 + 0x310));
      if (param_4 != (long *)0x0) {
        lVar10 = (**(code **)(*param_4 + 0x478))(param_4,*(undefined8 *)(*param_4 + 0x480));
        puVar3 = Method_System_DBNull_System_IConvertible_ToDecimal__;
        if (lVar10 != 0) {
          if ((*(int *)(lVar10 + 0x18) == 0) || (*(int *)(lVar10 + 0x18) == 1)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          uVar1 = *(undefined8 *)(lVar10 + 0x20);
          uVar2 = *(undefined8 *)(lVar10 + 0x28);
          lVar10 = *(long *)Method_System_DBNull_System_IConvertible_ToDecimal__;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(lVar10);
            lVar10 = *(long *)puVar3;
          }
          uStack_58 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x10);
          local_60 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 8);
          if (*(long *)(param_1 + 0x10) != 0) {
            auVar12 = FUN_03fa041c(*(long *)(param_1 + 0x10),uVar1,uVar8,&local_68,0);
            FUN_03f8a150(&local_60,auVar12._0_8_,auVar12._8_8_);
            puVar3 = Method_System_Linq_Enumerable_GroupBy<KeyValuePair<Vector3,_int>,_Vector3>__;
            if (*(long *)(param_1 + 0x10) != 0) {
              auVar12 = FUN_03fa041c(*(long *)(param_1 + 0x10),uVar2,uVar9,&local_70,0);
              FUN_03f8a150(&local_60,auVar12._0_8_,auVar12._8_8_);
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              lVar10 = FUN_03f8cf14();
              *param_3 = lVar10;
              thunk_FUN_01f51358(param_3,lVar10);
              uVar11 = FUN_03f9038c(local_68,0);
              if ((uVar11 & 1) != 0) {
                if ((*param_3 == 0) || (lVar10 = FUN_03f8c2dc(), lVar10 == 0)) goto LAB_03f90384;
                FUN_02b6b2d0(lVar10,*(undefined8 *)puVar5,local_68,
                             *(undefined8 *)Method_System_DBNull_System_IConvertible_ToDouble__);
              }
              uVar8 = local_70;
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar11 = FUN_03f9038c(uVar8,0);
              if ((uVar11 & 1) != 0) {
                if ((*param_3 == 0) || (lVar10 = FUN_03f8c2dc(), lVar10 == 0)) goto LAB_03f90384;
                FUN_02b6b2d0(lVar10,*(undefined8 *)puVar4,local_70,
                             *(undefined8 *)Method_System_DBNull_System_IConvertible_ToDouble__);
              }
              auVar12._8_8_ = uStack_58;
              auVar12._0_8_ = local_60;
              return auVar12;
            }
          }
        }
      }
    }
  }
LAB_03f90384:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


