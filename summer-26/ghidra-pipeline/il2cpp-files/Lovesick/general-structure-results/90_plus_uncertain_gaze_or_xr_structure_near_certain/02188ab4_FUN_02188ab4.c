/*
FUNCTION_NAME: FUN_02188ab4
ENTRY_POINT: 02188ab4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 176
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_02188ab4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar1 = 
  UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizePosition_00000D6D_PostfixBurstDelegate_var
  ;
  if ((DAT_03781444 & 1) == 0) {
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizePosition_00000D6D_PostfixBurstDelegate_var
                      );
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_MouseEventBase<MouseEnterWindowEvent>_Init__);
    thunk_FUN_00d48444(StringLiteral_4981);
    thunk_FUN_00d48444(Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreatePose>b__20_0__);
    thunk_FUN_00d48444(OVRManager_SystemHeadsetType_TypeInfo);
    DAT_03781444 = 1;
  }
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar5 != 0) {
    FUN_021f6d1c(lVar5,0);
    lVar6 = FUN_02147788(lVar5,0);
    if ((param_1 != 0) && (plVar9 = *(long **)(param_1 + 0x150), plVar9 != (long *)0x0)) {
      if ((lVar6 != 0) &&
         (lVar7 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar9 + 0x40)), lVar7 == 0)) {
        uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar8,0);
      }
      if (*(uint *)(plVar9 + 3) < 7) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar9[10] = lVar6;
      puVar4 = StringLiteral_4981;
      puVar3 = Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreatePose>b__20_0__;
      puVar1 = OVRManager_SystemHeadsetType_TypeInfo;
      if (lVar6 != 0) {
        *(long *)(lVar6 + 0x78) = param_1;
        *(undefined8 *)(lVar6 + 0x80) = param_4;
        puVar2 = Method_UnityEngine_UIElements_MouseEventBase<MouseEnterWindowEvent>_Init__;
        local_60 = 0;
        uStack_58 = 0;
        FUN_021f605c(&local_60,*(undefined8 *)puVar3,0);
        *(undefined8 *)(lVar6 + 0x28) = uStack_58;
        *(undefined8 *)(lVar6 + 0x20) = local_60;
        local_60 = 0;
        uStack_58 = 0;
        FUN_021f605c(&local_60,*(undefined8 *)puVar1,0);
        uVar8 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(local_60,uStack_58,0);
        *(undefined8 *)(lVar6 + 0x40) = uVar8;
        local_60 = 0;
        uStack_58 = 0;
        FUN_021f605c(&local_60,*(undefined8 *)puVar4,0);
        uVar8 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(local_60,uStack_58,0);
        *(undefined8 *)(lVar6 + 0x50) = uVar8;
        *(undefined8 *)(lVar6 + 0x58) = param_2;
        *(undefined8 *)(lVar6 + 0x60) = param_3;
        FUN_02145450(lVar6,1,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar8 = _DAT_02955680;
        *(undefined8 *)(lVar6 + 0x18) = _UNK_02955688;
        *(undefined8 *)(lVar6 + 0x10) = uVar8;
        auVar10 = FUN_02204a80(0,0);
        auVar11 = FUN_02204a80(1,0);
        *(undefined1 (*) [16])(lVar6 + 200) = auVar11;
        *(undefined1 (*) [16])(lVar6 + 0xb8) = auVar10;
        FUN_02145428(lVar6,1,0);
        return lVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


