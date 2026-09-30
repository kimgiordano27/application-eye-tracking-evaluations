/*
FUNCTION_NAME: OVR.OpenVR.IVRRenderModels._GetRenderModelThumbnailURL$$Invoke
ENTRY_POINT: 019d6b7c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 171
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void OVR_OpenVR_IVRRenderModels__GetRenderModelThumbnailURL__Invoke(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x538));
  thunk_FUN_00d48444(Method_UnityEngine_UI_LayoutGroup_SetProperty<float>__);
  thunk_FUN_00d48444(
                    Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionGroup_MoveGroupMemberTo__
                    );
  *(undefined1 *)(unaff_x19 + 0x759) = 1;
  lVar4 = thunk_FUN_00d62348(*unaff_x21);
  if ((lVar4 != 0) &&
     (FUN_01320e50(lVar4,*(undefined8 *)
                          Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResource<ComputeBufferDesc,_ComputeBuffer>__ctor__
                  ),
     puVar2 = Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionGroup_MoveGroupMemberTo__,
     unaff_x20 != 0)) {
    uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
    lVar5 = *(long *)
             Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionGroup_MoveGroupMemberTo__;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar5 = *(long *)puVar2;
    }
    puVar1 = 
    Method_System_Collections_Generic_List_Enumerator<ProbeBrickIndex_ReservedBrick>_MoveNext__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar5 = *(long *)puVar2;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar7 == 0) goto LAB_019d6d2c;
      FUN_012d239c(lVar7,uVar8,
                   *(undefined8 *)
                    System_Collections_Generic_Dictionary<IXRSelectInteractable,_List<IXRTargetPriorityInteractor>>_TypeInfo
                   ,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar7;
    }
    puVar3 = StringLiteral_692;
    puVar1 = Method_UnityEngine_UIElements_DragEventsProcessor_OnPointerDownEvent__;
    uVar6 = FUN_010dcdb8(uVar6,lVar7,*(undefined8 *)StringLiteral_9176);
    FUN_01322050(lVar4,uVar6,*(undefined8 *)puVar3);
    FUN_00bfba38(lVar4,*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar5 = *(long *)puVar2;
    }
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__ctor__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar5 = *(long *)puVar2;
      }
      uVar6 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar7 == 0) goto LAB_019d6d2c;
      FUN_012d239c(lVar7,uVar6,*(undefined8 *)Method_UnityEngine_UI_LayoutGroup_SetProperty<float>__
                   ,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = lVar7;
    }
    System_Collections_Generic_ValueListBuilder<__Il2CppFullySharedGenericType>__AsSpan
              (lVar4,lVar7,*(undefined8 *)FullSerializer_fsGlobalConfig_TypeInfo);
    return;
  }
LAB_019d6d2c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


