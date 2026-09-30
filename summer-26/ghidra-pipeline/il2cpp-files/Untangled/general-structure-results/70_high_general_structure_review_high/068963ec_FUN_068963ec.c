/*
FUNCTION_NAME: FUN_068963ec
ENTRY_POINT: 068963ec
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_068963ec(long *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar5 = UnityEngine_Transform_Enumerator_TypeInfo;
  puVar4 = UnityEngine_SpatialTracking_TrackedPoseDriver_TrackedPose_TypeInfo;
  puVar3 = UnityEngine_InputSystem_UI_TrackedDeviceRaycaster_<>c_TypeInfo;
  puVar2 = System_Xml_Schema_XmlSchemaParticle_TypeInfo;
  puVar1 = PTR_DAT_06d37040;
  if ((DAT_071d6e88 & 1) == 0) {
    FUN_02f07e70(UnityEngine_SpatialTracking_TrackedPoseDriver_TrackedPose_TypeInfo);
    FUN_02f07e70(System_Threading_Tasks_Task_ContingentProperties_TypeInfo);
    FUN_02f07e70(Meta_XR_ImmersiveDebugger_Telemetry_Method_TypeInfo);
    FUN_02f07e70(UnityEngine_InputSystem_UI_TrackedDeviceRaycaster_<>c_TypeInfo);
    FUN_02f07e70(MagicaCloth2_TransformData_ShareSerializationData_TypeInfo);
    FUN_02f07e70(TMPro_TMP_TextEventHandler_CharacterSelectionEvent_TypeInfo);
    FUN_02f07e70(System_Xml_Schema_XmlSchemaParticle_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d37040);
    FUN_02f07e70(UnityEngine_Transform_Enumerator_TypeInfo);
    FUN_02f07e70(MagicaCloth2_TransformData_UniqueSerializationData_TypeInfo);
    FUN_02f07e70(UnityEngine_UIElements_TransitionCancelEvent_<>c_TypeInfo);
    DAT_071d6e88 = 1;
  }
  puVar6 = MagicaCloth2_TransformData_UniqueSerializationData_TypeInfo;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  FUN_06894cbc(param_1);
  (**(code **)(*param_1 + 0x228))(param_1,param_2,*(undefined8 *)(*param_1 + 0x230));
  (**(code **)(*param_1 + 0x408))(param_1,param_3,*(undefined8 *)(*param_1 + 0x410));
  (**(code **)(*param_1 + 0x3b8))(param_1,param_4,*(undefined8 *)(*param_1 + 0x3c0));
  uVar7 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
  FUN_06894ae0();
  (**(code **)(*param_1 + 0x358))(param_1,uVar7,*(undefined8 *)(*param_1 + 0x360));
  uVar7 = thunk_FUN_02ef1808(*(undefined8 *)puVar4);
  FUN_06864bc0(uVar7,0);
  (**(code **)(*param_1 + 0x378))(param_1,uVar7,*(undefined8 *)(*param_1 + 0x380));
  param_1[0xc] = 0;
  thunk_FUN_02f411dc(param_1 + 0xc,0);
  lVar8 = thunk_FUN_02ef1808(*(undefined8 *)puVar5);
  FUN_067eec28(lVar8,param_1,0);
  param_1[0x16] = lVar8;
  thunk_FUN_02f411dc(param_1 + 0x16,lVar8);
  lVar8 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
  FUN_068c963c(lVar8,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar7 = FUN_067eab24(*(undefined8 *)puVar6,0);
  puVar1 = UnityEngine_UIElements_TransitionCancelEvent_<>c_TypeInfo;
  if (lVar8 != 0) {
    FUN_068c920c(lVar8,uVar7,0);
    FUN_068c584c(lVar8,*(undefined8 *)puVar1,0);
    FUN_068c91cc(lVar8,param_3 != 1,0);
    FUN_068d0064(lVar8,0x80000000,0);
    param_1[0x15] = lVar8;
    thunk_FUN_02f411dc(param_1 + 0x15,lVar8);
    lVar8 = (**(code **)(*param_1 + 0x398))(param_1,*(undefined8 *)(*param_1 + 0x3a0));
    puVar4 = MagicaCloth2_TransformData_ShareSerializationData_TypeInfo;
    puVar3 = Meta_XR_ImmersiveDebugger_Telemetry_Method_TypeInfo;
    puVar2 = System_Threading_Tasks_Task_ContingentProperties_TypeInfo;
    puVar1 = TMPro_TMP_TextEventHandler_CharacterSelectionEvent_TypeInfo;
    if (lVar8 != 0) {
      FUN_068ca6b8(lVar8,param_1,0);
      uVar7 = (**(code **)(*param_1 + 0x398))(param_1,*(undefined8 *)(*param_1 + 0x3a0));
      uVar9 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
      FUN_067e8b94(uVar9,uVar7,0,0);
      uVar7 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
      FUN_06888920(uVar7,uVar9);
      (**(code **)(*param_1 + 0x288))(param_1,uVar7,*(undefined8 *)(*param_1 + 0x290));
      uVar7 = thunk_FUN_02ef1808(*(undefined8 *)puVar4);
      FUN_068db3a8(uVar7,0);
      (**(code **)(*param_1 + 1000))(param_1,uVar7,*(undefined8 *)(*param_1 + 0x3f0));
      FUN_06896090(param_1);
      uVar7 = (**(code **)(*param_1 + 0x398))(param_1,*(undefined8 *)(*param_1 + 0x3a0));
      lVar8 = param_1[0x13];
      if (lVar8 != 0) {
        (**(code **)(lVar8 + 0x18))
                  (*(undefined8 *)(lVar8 + 0x40),uVar7,0,*(undefined8 *)(lVar8 + 0x28));
      }
      uVar7 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
      FUN_067a4574(uVar7,0);
                    /* WARNING: Could not recover jumptable at 0x068967a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x478))(param_1,uVar7,*(undefined8 *)(*param_1 + 0x480));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


