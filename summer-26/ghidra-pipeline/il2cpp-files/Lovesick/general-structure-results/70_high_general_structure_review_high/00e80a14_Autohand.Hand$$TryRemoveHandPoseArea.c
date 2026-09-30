/*
FUNCTION_NAME: Autohand.Hand$$TryRemoveHandPoseArea
ENTRY_POINT: 00e80a14
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_5
*/


undefined8 Autohand_Hand__TryRemoveHandPoseArea(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  long unaff_x19;
  int iVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x938));
  thunk_FUN_00d48444(PTR_DAT_033efdc0);
  thunk_FUN_00d48444(Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__)
  ;
  thunk_FUN_00d48444(StringLiteral_7635);
  thunk_FUN_00d48444(Method_UnityEngine_UI_SetPropertyUtility_SetStruct<char>__);
  thunk_FUN_00d48444(StringLiteral_12098);
  *(undefined1 *)(unaff_x20 + 0xf77) = 1;
  puVar4 = StringLiteral_12098;
  puVar3 = 
  Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsDefined<OdinSerializeAttribute>__;
  puVar2 = OVR_OpenVR_IVRCompositor__LockGLSharedTextureForAccess_TypeInfo;
  puVar1 = PTR_DAT_033ebb80;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  if (3 < *(uint *)(unaff_x19 + 0x10)) {
    return 0;
  }
  lVar12 = *(long *)(unaff_x19 + 0x20);
  switch(*(uint *)(unaff_x19 + 0x10)) {
  case 0:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if ((lVar12 != 0) && (*(undefined4 *)(lVar12 + 0xb0) = 0, *(long *)(lVar12 + 0x88) != 0)) {
      FUN_01323390();
      in_stack_00000038 = _uStack0000000000000008;
      in_stack_00000030 = _uStack0000000000000000;
      in_stack_00000040 = in_stack_00000010;
      while (uVar6 = FUN_012b894c(&stack0x00000030,*(undefined8 *)puVar1), (uVar6 & 1) != 0) {
        lVar12 = FUN_00ac5198(&stack0x00000030,*(undefined8 *)puVar3);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_026f2c70(lVar12,0,0);
      }
      FUN_012b8948(&stack0x00000030,*(undefined8 *)puVar2);
      lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
      if (lVar12 != 0) {
        FUN_0268a094(0x3f800000,lVar12,0);
        *(long *)(unaff_x19 + 0x18) = lVar12;
        *(undefined4 *)(unaff_x19 + 0x10) = 1;
        return 1;
      }
    }
    break;
  case 1:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    puVar3 = StringLiteral_4557;
    puVar2 = Method_UnityEngine_UI_SetPropertyUtility_SetStruct<InputField_CharacterValidation>__;
    puVar1 = Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<PinchGesture>_Cancel__;
    if ((lVar12 != 0) && (*(long *)(lVar12 + 0x80) != 0)) {
      FUN_01323390(*(long *)(lVar12 + 0x80),&stack0x00000018,
                   *(undefined8 *)
                    Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<Quaternion>_SubscribeAndUpdate__
                  );
      while (uVar6 = FUN_012b894c(&stack0x00000018,*(undefined8 *)puVar3), (uVar6 & 1) != 0) {
        lVar12 = FUN_00ac4460(&stack0x00000018,*(undefined8 *)puVar2);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_00e7b4dc(lVar12,1);
      }
      FUN_012b8948(&stack0x00000018,*(undefined8 *)puVar1);
      lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
      if (lVar12 != 0) {
        FUN_0268a094(0x3f800000,lVar12,0);
        uVar7 = 2;
        *(long *)(unaff_x19 + 0x18) = lVar12;
LAB_00e80e08:
        *(undefined4 *)(unaff_x19 + 0x10) = uVar7;
        return 1;
      }
    }
    break;
  case 2:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    puVar1 = Method_UnityEngine_UI_SetPropertyUtility_SetStruct<char>__;
    if (lVar12 != 0) {
      uVar9 = *(undefined8 *)(lVar12 + 0xb8);
      lVar5 = *(long *)Method_UnityEngine_UI_SetPropertyUtility_SetStruct<char>__;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar5 = *(long *)puVar1;
      }
      puVar2 = Method_System_Collections_Generic_List<SubtitleData>_get_Count__;
      lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
      if (lVar10 == 0) {
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar5 = *(long *)puVar1;
        }
        uVar11 = **(undefined8 **)(lVar5 + 0xb8);
        lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        if (lVar10 == 0) break;
        FUN_012d239c(lVar10,uVar11,*(undefined8 *)StringLiteral_7635,0);
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = lVar10;
      }
      puVar1 = StringLiteral_7350;
      uVar9 = FUN_010dca98(uVar9,lVar10,
                           *(undefined8 *)
                            Method_Meta_Voice_NLPRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults,_WitResponseNode>_GetSendError__
                          );
      uVar9 = FUN_010dfe04(uVar9,*(undefined8 *)puVar1);
      lVar5 = *(long *)(lVar12 + 0x80);
      *(undefined8 *)(lVar12 + 0xb8) = uVar9;
      if (lVar5 != 0) {
        iVar8 = 0;
        while (iVar8 < *(int *)(lVar5 + 0x18)) {
          FUN_0132138c(lVar5,iVar8);
          if (_uStack0000000000000000 == 0) goto LAB_00e80c94;
          lVar5 = FUN_0268fd10(_uStack0000000000000000,0);
          if ((*(long *)(lVar12 + 0xb8) == 0) ||
             (FUN_0132138c(*(long *)(lVar12 + 0xb8),iVar8), lVar5 == 0)) goto LAB_00e80c94;
          FUN_0269f618(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,lVar5,0)
          ;
          if ((*(long *)(lVar12 + 0x80) == 0) ||
             (FUN_0132138c(*(long *)(lVar12 + 0x80),iVar8), _uStack0000000000000000 == 0))
          goto LAB_00e80c94;
          *(undefined1 *)(_uStack0000000000000000 + 0x28) = 0;
          FUN_00e7b878(_uStack0000000000000000,1);
          lVar5 = *(long *)(lVar12 + 0x80);
          iVar8 = iVar8 + 1;
          if (lVar5 == 0) goto LAB_00e80c94;
        }
        lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
        if (lVar12 != 0) {
          FUN_0268a094(0x3f000000,lVar12,0);
          *(long *)(unaff_x19 + 0x18) = lVar12;
          uVar7 = 3;
          goto LAB_00e80e08;
        }
      }
    }
    break;
  case 3:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if ((lVar12 != 0) && (*(long *)(lVar12 + 0x88) != 0)) {
      FUN_01323390();
      in_stack_00000038 = _uStack0000000000000008;
      in_stack_00000030 = _uStack0000000000000000;
      in_stack_00000040 = in_stack_00000010;
      while( true ) {
        uVar6 = FUN_012b894c(&stack0x00000030,*(undefined8 *)puVar1);
        if ((uVar6 & 1) == 0) {
          FUN_012b8948(&stack0x00000030,*(undefined8 *)puVar2);
          return 0;
        }
        lVar12 = FUN_00ac5198(&stack0x00000030,*(undefined8 *)puVar3);
        if (lVar12 == 0) break;
        FUN_026f2c70(lVar12,1,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
LAB_00e80c94:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


