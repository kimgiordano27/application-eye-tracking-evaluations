/*
FUNCTION_NAME: Oculus.Interaction.GrabAPI.FingerRawPinchAPI.FingerPinchData$$UpdateTipPosition
ENTRY_POINT: 035c7130
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined1  [16]
Oculus_Interaction_GrabAPI_FingerRawPinchAPI_FingerPinchData__UpdateTipPosition
          (undefined1 (*param_1) [16],uint param_2,uint param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uStack000000000000000c;
  
  if ((DAT_04833647 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass10_0_<DOColor>b__1__);
    thunk_FUN_01efb3a4(Method_System_Numerics_BigNumber_FormatBigInteger__);
    DAT_04833647 = 1;
  }
  puVar2 = Method_System_Numerics_BigNumber_FormatBigInteger__;
  if (param_2 < 0x1d) {
    if (param_3 < 2) {
      if (*(int *)(*(long *)Method_System_Numerics_BigNumber_FormatBigInteger__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      puVar3 = Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass10_0_<DOColor>b__1__;
      iVar1 = (byte)(*param_1)[2] - param_2;
      if (0 < iVar1) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_035c72ec(param_1,iVar1,param_3);
      }
      return *param_1;
    }
    uStack000000000000000c = param_3;
    uVar4 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlsl_s16__);
    uVar4 = thunk_FUN_01f113fc(uVar4,&stack0x0000000c);
    uVar5 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlsl_s32__);
    uVar6 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlslh_lane_s16__);
    uVar4 = FUN_033f1b0c(uVar5,uVar4,uVar6,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar5 = thunk_FUN_01f117cc();
    uVar6 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_Rendering_ScriptableRenderContext_ExecuteCommandBufferAsync__
                              );
    FUN_034efd98(uVar5,uVar4,uVar6,0);
    uVar4 = thunk_FUN_01efb3a4(
                              Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass17_0_<DOAnchorPos3DX>b__0__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar5,uVar4);
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar4 = thunk_FUN_01f117cc();
  uVar5 = thunk_FUN_01efb3a4(
                            Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass16_0_<DOAnchorPos3D>b__0__
                            );
  uVar6 = thunk_FUN_01efb3a4(
                            Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass16_0_<DOAnchorPos3D>b__1__
                            );
  FUN_034f3578(uVar4,uVar5,uVar6,0);
  uVar5 = thunk_FUN_01efb3a4(
                            Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass17_0_<DOAnchorPos3DX>b__0__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar4,uVar5);
}


