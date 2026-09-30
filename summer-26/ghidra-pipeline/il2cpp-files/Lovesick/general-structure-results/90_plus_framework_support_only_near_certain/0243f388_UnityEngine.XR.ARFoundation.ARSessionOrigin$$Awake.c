/*
FUNCTION_NAME: UnityEngine.XR.ARFoundation.ARSessionOrigin$$Awake
ENTRY_POINT: 0243f388
PROGRAM: Lovesick-libil2cpp.so
SCORE: 150
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_XR_ARFoundation_ARSessionOrigin__Awake(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar1 = Method_MedleyHingedComboLock_CheckPuzzleComplete__;
  FUN_02431698(param_1,0x226);
  *(undefined8 *)(unaff_x19 + 0x220) = param_1;
  uVar10 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar11 = *(undefined8 *)(unaff_x19 + 0x440);
  memset(&stack0x00000030,0,0x90);
  FUN_02431cf8(&stack0x00000030,uVar10,uVar11);
  memcpy((void *)(unaff_x19 + 0x480),&stack0x00000030,0x90);
  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__796_7__;
  if (lVar9 != 0) {
    FUN_02430c78(lVar9,1000);
    *(long *)(unaff_x19 + 0x230) = lVar9;
    uVar10 = *(undefined8 *)(unaff_x19 + 0x440);
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vabds_f32__;
    if (lVar9 != 0) {
      FUN_02470ed0(lVar9,0x3e9,uVar10,0);
      *(long *)(unaff_x19 + 0x228) = lVar9;
      lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      puVar8 = StringLiteral_6311;
      puVar7 = StringLiteral_1130;
      puVar6 = StringLiteral_672;
      puVar5 = StringLiteral_127;
      puVar4 = Method_Newtonsoft_Json_Linq_JToken_WriteToAsync__;
      puVar3 = Method_System_Collections_Generic_List<RectTransform>__ctor__;
      puVar2 = Method_System_Collections_Generic_List<IXRSelectInteractable>_AddRange__;
      puVar1 = 
      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRSelectFilter>_RegisterReferences<Object>__
      ;
      if (lVar9 != 0) {
        FUN_024803cc(lVar9,*(undefined8 *)PTR_DAT_033f53e0,0);
        *(long *)(unaff_x19 + 0x248) = lVar9;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02431dd4(unaff_x19 + 0x2e0,*(undefined8 *)puVar8);
        FUN_02431dd4(unaff_x19 + 0x310,*(undefined8 *)puVar3);
        FUN_02431dd4(unaff_x19 + 0x340,*(undefined8 *)puVar4);
        FUN_02431dd4(unaff_x19 + 0x370,*(undefined8 *)puVar7);
        FUN_02431dd4(unaff_x19 + 0x3a0,*(undefined8 *)puVar6);
        FUN_02431dd4(unaff_x19 + 0x3d0,*(undefined8 *)puVar1);
        lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
        if (lVar9 != 0) {
          FUN_02423ad4(lVar9,0);
          puVar1 = StringLiteral_5516;
          if (*(int *)(*(long *)StringLiteral_5516 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          *(long *)(unaff_x19 + 0xe0) = lVar9;
          if (*(int *)(unaff_x19 + 0x410) == 1) {
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar9 = *(long *)(unaff_x19 + 0xe0);
            }
            puVar1 = System_Func<DropdownMenuAction,_DropdownMenuAction_Status>_TypeInfo;
            if (lVar9 == 0) goto LAB_0243f5d0;
            *(undefined1 *)(lVar9 + 0x11) = 0;
            puVar2 = 
            Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller_Append<TextArea>__;
            uVar10 = FUN_00da4fb8(*(undefined8 *)puVar1,3);
            FUN_016a34e8(uVar10,*(undefined8 *)puVar2,0);
            *(undefined8 *)(unaff_x19 + 0xe8) = uVar10;
          }
          puVar1 = Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__;
          lVar9 = *(long *)Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar9 = *(long *)puVar1;
          }
          *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x1c) = DAT_028ab160;
          TMPro_TMP_Dropdown__OnPointerClick(0);
          return;
        }
      }
    }
  }
LAB_0243f5d0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


