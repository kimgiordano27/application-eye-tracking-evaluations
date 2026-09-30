/*
FUNCTION_NAME: Unity.XR.CoreUtils.Capabilities.CapabilityDictionary$$OnBeforeSerialize
ENTRY_POINT: 05d76728
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 84
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool Unity_XR_CoreUtils_Capabilities_CapabilityDictionary__OnBeforeSerialize(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *unaff_x22;
  undefined8 in_stack_00000018;
  
                    /* catch() { ... } // from try @ 05d76434 with catch @ 05d76728 */
  iVar5 = FUN_048953c0();
  if (param_1 != 0) {
    iVar6 = FUN_048953c0(param_1,*unaff_x22);
    if (iVar5 == iVar6) {
      lVar7 = FUN_048953d0();
      if (lVar7 == 0) goto LAB_05d768fc;
      FUN_038e3508(&stack0x00000008,lVar7,
                   *(undefined8 *)Method_System_Nullable<OVRSceneManager_LogForwarder>__ctor__);
      puVar3 = Method_System_Nullable<OVRPlugin_XrApi>_get_HasValue__;
      puVar2 = Method_System_Nullable<MetadataPropertyHandling>_GetValueOrDefault__;
      puVar1 = Method_System_Nullable<MetadataPropertyHandling>__ctor__;
      do {
        uVar8 = FUN_04b3ac4c(&stack0x00000008,*(undefined8 *)puVar3);
        uVar9 = in_stack_00000018;
        if ((uVar8 & 1) == 0) {
          iVar5 = 0x17;
          goto LAB_05d768dc;
        }
        uVar8 = FUN_048958e4(param_1,in_stack_00000018,*(undefined8 *)puVar1);
        if ((uVar8 & 1) == 0) break;
        lVar7 = FUN_04895670();
        uVar9 = FUN_04895670(param_1,uVar9,*(undefined8 *)puVar2);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8(uVar9,uVar9);
        }
        uVar8 = FUN_05d76504(lVar7);
      } while ((uVar8 & 1) != 0);
      iVar5 = 0x16;
LAB_05d768dc:
      FUN_04b3ac48(&stack0x00000008,*(undefined8 *)Method_System_Nullable<OVRPlugin_XrApi>__ctor__);
      bVar4 = iVar5 != 0x16;
    }
    else {
      bVar4 = false;
    }
    return bVar4;
  }
LAB_05d768fc:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


