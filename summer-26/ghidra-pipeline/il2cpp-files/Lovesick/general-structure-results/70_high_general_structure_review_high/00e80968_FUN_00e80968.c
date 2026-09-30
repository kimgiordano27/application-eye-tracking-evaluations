/*
FUNCTION_NAME: FUN_00e80968
ENTRY_POINT: 00e80968
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_12;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_10
*/


undefined8 FUN_00e80968(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_03774f77 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Meta_Voice_NLPRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults,_WitResponseNode>_GetSendError__
                      );
    thunk_FUN_00d48444(StringLiteral_7350);
    thunk_FUN_00d48444(Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<PinchGesture>_Cancel__);
    thunk_FUN_00d48444(OVR_OpenVR_IVRCompositor__LockGLSharedTextureForAccess_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ebb80);
    thunk_FUN_00d48444(StringLiteral_4557);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UI_SetPropertyUtility_SetStruct<InputField_CharacterValidation>__
                      );
    thunk_FUN_00d48444(
                      Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsDefined<OdinSerializeAttribute>__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<SubtitleData>_get_Count__);
    thunk_FUN_00d48444(Method_System_Nullable<Rect>_get_HasValue__);
    thunk_FUN_00d48444(
                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<Quaternion>_SubscribeAndUpdate__
                      );
    thunk_FUN_00d48444(PTR_DAT_033eb938);
    thunk_FUN_00d48444(PTR_DAT_033efdc0);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__
                      );
    thunk_FUN_00d48444(StringLiteral_7635);
    thunk_FUN_00d48444(Method_UnityEngine_UI_SetPropertyUtility_SetStruct<char>__);
    thunk_FUN_00d48444(StringLiteral_12098);
    DAT_03774f77 = 1;
  }
  puVar5 = StringLiteral_12098;
  puVar4 = 
  Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsDefined<OdinSerializeAttribute>__;
  puVar3 = Method_System_Nullable<Rect>_get_HasValue__;
  puVar2 = OVR_OpenVR_IVRCompositor__LockGLSharedTextureForAccess_TypeInfo;
  puVar1 = PTR_DAT_033ebb80;
  uStack_58 = 0;
  local_50 = 0;
  local_68 = 0;
  local_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  if (3 < *(uint *)(param_1 + 0x10)) {
    return 0;
  }
  lVar13 = *(long *)(param_1 + 0x20);
  switch(*(uint *)(param_1 + 0x10)) {
  case 0:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar13 != 0) {
      *(undefined4 *)(lVar13 + 0xb0) = 0;
      if (*(long *)(lVar13 + 0x88) != 0) {
        FUN_01323390(*(long *)(lVar13 + 0x88),&local_90,*(undefined8 *)puVar3);
        uStack_58 = CONCAT44(uStack_84,uStack_88);
        local_60 = CONCAT44(uStack_8c,local_90);
        local_50 = local_80;
        while (uVar7 = FUN_012b894c(&local_60,*(undefined8 *)puVar1), (uVar7 & 1) != 0) {
          lVar13 = FUN_00ac5198(&local_60,*(undefined8 *)puVar4);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_026f2c70(lVar13,0,0);
        }
        FUN_012b8948(&local_60,*(undefined8 *)puVar2);
        lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
        if (lVar13 != 0) {
          FUN_0268a094(0x3f800000,lVar13,0);
          *(long *)(param_1 + 0x18) = lVar13;
          *(undefined4 *)(param_1 + 0x10) = 1;
          return 1;
        }
      }
    }
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    puVar3 = StringLiteral_4557;
    puVar2 = Method_UnityEngine_UI_SetPropertyUtility_SetStruct<InputField_CharacterValidation>__;
    puVar1 = Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<PinchGesture>_Cancel__;
    if ((lVar13 != 0) && (*(long *)(lVar13 + 0x80) != 0)) {
      FUN_01323390(*(long *)(lVar13 + 0x80),&local_78,
                   *(undefined8 *)
                    Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<Quaternion>_SubscribeAndUpdate__
                  );
      while (uVar7 = FUN_012b894c(&local_78,*(undefined8 *)puVar3), (uVar7 & 1) != 0) {
        lVar13 = FUN_00ac4460(&local_78,*(undefined8 *)puVar2);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_00e7b4dc(lVar13,1);
      }
      FUN_012b8948(&local_78,*(undefined8 *)puVar1);
      lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
      if (lVar13 != 0) {
        FUN_0268a094(0x3f800000,lVar13,0);
        uVar8 = 2;
        *(long *)(param_1 + 0x18) = lVar13;
LAB_00e80e08:
        *(undefined4 *)(param_1 + 0x10) = uVar8;
        return 1;
      }
    }
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    puVar1 = Method_UnityEngine_UI_SetPropertyUtility_SetStruct<char>__;
    if (lVar13 != 0) {
      uVar10 = *(undefined8 *)(lVar13 + 0xb8);
      lVar6 = *(long *)Method_UnityEngine_UI_SetPropertyUtility_SetStruct<char>__;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar6 = *(long *)puVar1;
      }
      puVar2 = Method_System_Collections_Generic_List<SubtitleData>_get_Count__;
      lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
      if (lVar11 == 0) {
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar6 = *(long *)puVar1;
        }
        uVar12 = **(undefined8 **)(lVar6 + 0xb8);
        lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        if (lVar11 == 0) break;
        FUN_012d239c(lVar11,uVar12,*(undefined8 *)StringLiteral_7635,0);
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = lVar11;
      }
      puVar1 = StringLiteral_7350;
      uVar10 = FUN_010dca98(uVar10,lVar11,
                            *(undefined8 *)
                             Method_Meta_Voice_NLPRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults,_WitResponseNode>_GetSendError__
                           );
      uVar10 = FUN_010dfe04(uVar10,*(undefined8 *)puVar1);
      lVar6 = *(long *)(lVar13 + 0x80);
      *(undefined8 *)(lVar13 + 0xb8) = uVar10;
      puVar2 = Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__;
      puVar1 = PTR_DAT_033efdc0;
      if (lVar6 != 0) {
        iVar9 = 0;
        while (iVar9 < *(int *)(lVar6 + 0x18)) {
          FUN_0132138c(lVar6,iVar9,&local_90,*(undefined8 *)puVar1);
          if (CONCAT44(uStack_8c,local_90) == 0) goto LAB_00e80c94;
          lVar6 = FUN_0268fd10(CONCAT44(uStack_8c,local_90),0);
          if ((*(long *)(lVar13 + 0xb8) == 0) ||
             (FUN_0132138c(*(long *)(lVar13 + 0xb8),iVar9,&local_90,*(undefined8 *)puVar2),
             lVar6 == 0)) goto LAB_00e80c94;
          FUN_0269f618(local_90,uStack_8c,uStack_88,lVar6,0);
          if (*(long *)(lVar13 + 0x80) == 0) goto LAB_00e80c94;
          FUN_0132138c(*(long *)(lVar13 + 0x80),iVar9,&local_90,*(undefined8 *)puVar1);
          lVar6 = CONCAT44(uStack_8c,local_90);
          if (lVar6 == 0) goto LAB_00e80c94;
          *(undefined1 *)(lVar6 + 0x28) = 0;
          FUN_00e7b878(lVar6,1);
          lVar6 = *(long *)(lVar13 + 0x80);
          iVar9 = iVar9 + 1;
          if (lVar6 == 0) goto LAB_00e80c94;
        }
        lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
        if (lVar13 != 0) {
          FUN_0268a094(0x3f000000,lVar13,0);
          *(long *)(param_1 + 0x18) = lVar13;
          uVar8 = 3;
          goto LAB_00e80e08;
        }
      }
    }
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar13 != 0) && (*(long *)(lVar13 + 0x88) != 0)) {
      FUN_01323390(*(long *)(lVar13 + 0x88),&local_90,*(undefined8 *)puVar3);
      local_50 = local_80;
      while( true ) {
        uVar7 = FUN_012b894c(&local_60,*(undefined8 *)puVar1);
        if ((uVar7 & 1) == 0) {
          FUN_012b8948(&local_60,*(undefined8 *)puVar2);
          return 0;
        }
        lVar13 = FUN_00ac5198(&local_60,*(undefined8 *)puVar4);
        if (lVar13 == 0) break;
        FUN_026f2c70(lVar13,1,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
LAB_00e80c94:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


