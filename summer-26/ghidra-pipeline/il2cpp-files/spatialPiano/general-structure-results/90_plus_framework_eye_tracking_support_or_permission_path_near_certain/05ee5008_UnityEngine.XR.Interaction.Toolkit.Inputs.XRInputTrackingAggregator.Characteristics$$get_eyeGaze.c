/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Inputs.XRInputTrackingAggregator.Characteristics$$get_eyeGaze
ENTRY_POINT: 05ee5008
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 108
LABEL: framework_eye_tracking_support_or_permission_path_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_6;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


uint UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputTrackingAggregator_Characteristics__get_eyeGaze
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined4 uStack000000000000004c;
  
  FUN_02f08768();
  FUN_02f08768(
              Method_System_Runtime_Serialization_XmlObjectSerializerReadContext_ReadIXmlSerializable__
              );
  FUN_02f08768(PTR_DAT_067c8f20);
  *(undefined1 *)(unaff_x20 + 0x666) = 1;
  lVar5 = *unaff_x19;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  uStack000000000000004c = 0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar5 = *unaff_x19;
  }
  lVar8 = **(long **)(lVar5 + 0xb8);
  if (lVar8 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar8 = **(long **)(*unaff_x19 + 0xb8);
      if (lVar8 == 0) goto LAB_05ee51c8;
    }
    if ((*(long *)(lVar8 + 0x10) == 0) ||
       (lVar5 = FUN_0494c934(*(long *)(lVar8 + 0x10),
                             *(undefined8 *)Method_System_Xml_XmlLoader_ReadCurrentNode__),
       puVar3 = 
       Method_System_Runtime_Serialization_XmlObjectSerializerReadContext_ReadAndResolveUnknownXmlData__
       , puVar2 = Method_System_Runtime_Serialization_XmlObjectSerializerReadContext_Read__,
       puVar1 = PTR_DAT_067c8f20, lVar5 == 0)) {
LAB_05ee51c8:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_038f3f9c(&stack0x00000008,lVar5,
                 *(undefined8 *)
                  Method_System_Runtime_Serialization_XmlObjectSerializerReadContext_ReadIXmlSerializable__
                );
    in_stack_00000030 = in_stack_00000018;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000008 = 0;
    in_stack_00000010 = &stack0x00000020;
    do {
      do {
        do {
          uVar4 = FUN_04bc4e80(&stack0x00000020,*(undefined8 *)puVar3);
          lVar5 = in_stack_00000030;
          if ((uVar4 & 1) == 0) goto LAB_05ee518c;
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar6 = FUN_060f245c(lVar5,0,0);
        } while ((uVar6 & 1) != 0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar7 = FUN_060ed87c(lVar5,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar6 = FUN_060f245c(uVar7,0,0);
      } while ((uVar6 & 1) != 0);
      lVar8 = FUN_060ed87c(lVar5,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_060f1af0(lVar8,0);
      lVar5 = FUN_060ed87c(lVar5,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uStack000000000000004c = FUN_060f1af0(lVar5,0);
      uVar6 = FUN_06106760(&stack0x0000004c,0);
    } while ((uVar6 & 1) == 0);
LAB_05ee518c:
    FUN_04bc4e7c(&stack0x00000020,*(undefined8 *)puVar2);
  }
  return uVar4 & 1;
}


