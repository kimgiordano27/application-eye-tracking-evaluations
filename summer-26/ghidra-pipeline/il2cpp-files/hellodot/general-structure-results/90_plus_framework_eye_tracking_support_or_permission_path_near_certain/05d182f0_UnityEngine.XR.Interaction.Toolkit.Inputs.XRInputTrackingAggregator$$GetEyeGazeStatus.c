/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Inputs.XRInputTrackingAggregator$$GetEyeGazeStatus
ENTRY_POINT: 05d182f0
PROGRAM: hellodot-libil2cpp.so
SCORE: 95
LABEL: framework_eye_tracking_support_or_permission_path_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_3;validity_or_gating_hits_10;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputTrackingAggregator__GetEyeGazeStatus(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  long lVar11;
  long lVar12;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  ulong in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  ulong in_stack_00000048;
  ulong in_stack_00000050;
  undefined8 in_stack_00000058;
  
  AkMIDIEventCallbackInfo__get_byProgramNum
            (System_Collections_Generic_Dictionary<NullObject<S2Loop>,_List<S2Loop>>_TypeInfo);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
  AkMIDIEventCallbackInfo__get_byProgramNum
            (
            System_Collections_Generic_Dictionary<ObjectIntPair<IDescriptor>,_EnumValueDescriptor>_TypeInfo
            );
  *(undefined1 *)(unaff_x20 + 0x605) = 1;
  puVar2 = UnityEngine_UIElements_DefaultMultiColumnTreeViewController<object>_TypeInfo;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  lVar11 = *(long *)(unaff_x19 + 0x150);
  if (lVar11 == 0) {
LAB_05d18354:
    puVar1 = 
    System_Collections_Generic_Dictionary<ObjectIntPair<IDescriptor>,_EnumValueDescriptor>_TypeInfo;
    if (*(long *)(unaff_x19 + 0x148) == 0) goto LAB_05d184f0;
    uVar6 = FUN_04718384(*(long *)(unaff_x19 + 0x148),*(undefined8 *)puVar2);
    uVar8 = FUN_02ce7ad4(*(undefined8 *)puVar1,uVar6);
    *(undefined8 *)(unaff_x19 + 0x150) = uVar8;
  }
  else {
    if (*(long *)(unaff_x19 + 0x148) == 0) goto LAB_05d184f0;
    iVar5 = FUN_04718384(*(long *)(unaff_x19 + 0x148),
                         *(undefined8 *)
                          UnityEngine_UIElements_DefaultMultiColumnTreeViewController<object>_TypeInfo
                        );
    if (*(int *)(lVar11 + 0x18) < iVar5) goto LAB_05d18354;
  }
  puVar4 = UnityEngine_Rendering_Universal_LibTessDotNet_Dict<Tess_ActiveRegion>_TypeInfo;
  puVar3 = UnityEngine_UIElements_DefaultTreeViewController<object>_TypeInfo;
  puVar1 = PTR_DAT_065c8d28;
  if (*(long *)(unaff_x19 + 0x148) != 0) {
    FUN_04718ad4(*(long *)(unaff_x19 + 0x148),
                 *(undefined8 *)
                  UnityEngine_Rendering_DebugDisplaySettings<UniversalRenderPipelineDebugDisplaySettings>_TypeInfo
                );
    in_stack_00000038 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000000;
    in_stack_00000048 = in_stack_00000018;
    in_stack_00000040 = in_stack_00000010;
    in_stack_00000058 = in_stack_00000028;
    in_stack_00000050 = in_stack_00000020;
    while (uVar9 = FUN_048bf25c(&stack0x00000030,*(undefined8 *)puVar4), (uVar9 & 1) != 0) {
      FUN_05d18560(in_stack_00000048 & 0xffffffff,in_stack_00000048._4_4_,
                   in_stack_00000050 & 0xffffffff);
    }
    FUN_048bf394(&stack0x00000030,*(undefined8 *)puVar3);
    if (*(long *)(unaff_x19 + 0x148) != 0) {
      iVar5 = FUN_04718384(*(long *)(unaff_x19 + 0x148),*(undefined8 *)puVar2);
      if (iVar5 < *(int *)(unaff_x19 + 0x164)) {
        lVar12 = (long)iVar5;
        lVar11 = (long)iVar5 * 0x84 + 0x20;
        do {
          lVar10 = *(long *)(unaff_x19 + 0x150);
          if (lVar10 == 0) goto LAB_05d184f0;
          if (*(uint *)(lVar10 + 0x18) <= (uint)lVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c84();
          }
          FUN_05f466b4(0xbf800000,lVar10 + lVar11,0);
          lVar12 = lVar12 + 1;
          lVar11 = lVar11 + 0x84;
        } while (lVar12 < *(int *)(unaff_x19 + 0x164));
      }
      if (*(long *)(unaff_x19 + 0x148) != 0) {
        lVar11 = *(long *)(unaff_x19 + 0x120);
        uVar8 = *(undefined8 *)(unaff_x19 + 0x150);
        uVar7 = FUN_04718384(*(long *)(unaff_x19 + 0x148),*(undefined8 *)puVar2);
        uVar6 = *(undefined4 *)(unaff_x19 + 0x164);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02cd038c(*(long *)puVar1);
        }
        uVar6 = FUN_04f32070(uVar7,uVar6,0);
        if (lVar11 != 0) {
          FUN_05f4434c(lVar11,uVar8,uVar6,0);
          if (*(long *)(unaff_x19 + 0x148) != 0) {
            uVar6 = FUN_04718384(*(long *)(unaff_x19 + 0x148),*(undefined8 *)puVar2);
            *(undefined4 *)(unaff_x19 + 0x164) = uVar6;
            return;
          }
        }
      }
    }
  }
LAB_05d184f0:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


