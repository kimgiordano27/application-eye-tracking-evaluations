/*
FUNCTION_NAME: FUN_06ff5284
ENTRY_POINT: 06ff5284
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_06ff5284(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  
  puVar10 = Google_MiniJSON_Json_Parser_TypeInfo;
  puVar9 = AmplitudeNS_MiniJSON_Json_Serializer_TypeInfo;
  puVar8 = AmplitudeNS_MiniJSON_Json_Parser_TypeInfo;
  puVar7 = Oculus_Interaction_PoseDetection_JointVelocityActiveState_<>c_TypeInfo;
  puVar6 = Oculus_Interaction_PoseDetection_JointRotationActiveState_<>c_TypeInfo;
  puVar5 = Oculus_Interaction_PoseDetection_JointDeltaProvider_PoseData_TypeInfo;
  puVar4 = Oculus_Interaction_HandGrab_Visuals_JointCollection_<>c__DisplayClass2_0_TypeInfo;
  puVar3 = Newtonsoft_Json_Linq_JValue_JValueDynamicProxy_TypeInfo;
  puVar2 = OVR_OpenVR_IVRCompositor__ClearLastSubmittedFrame_TypeInfo;
  puVar1 = Oculus_Interaction_PoseDetection_FingerFeatureStateProvider_<>c_TypeInfo;
  if ((DAT_07eebc1c & 1) == 0) {
    FUN_03642964(PTR_DAT_079f49f0);
    FUN_03642964(OVR_OpenVR_IVRCompositor__ClearLastSubmittedFrame_TypeInfo);
    FUN_03642964(Google_MiniJSON_Json_Parser_TypeInfo);
    FUN_03642964(Google_MiniJSON_Json_Serializer_TypeInfo);
    FUN_03642964(Newtonsoft_Json_Serialization_JsonContract_<>c__DisplayClass57_0_TypeInfo);
    FUN_03642964(Newtonsoft_Json_Serialization_JsonContract_<>c__DisplayClass58_0_TypeInfo);
    FUN_03642964(UnityEngine_InputSystem_Utilities_JsonParser_JsonString_TypeInfo);
    FUN_03642964(Oculus_Interaction_PoseDetection_JointDeltaProvider_PoseData_TypeInfo);
    FUN_03642964(Oculus_Interaction_PoseDetection_FingerFeatureStateProvider_<>c_TypeInfo);
    FUN_03642964(OVR_OpenVR_IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose_TypeInfo);
    FUN_03642964(AmplitudeNS_MiniJSON_Json_Serializer_TypeInfo);
    FUN_03642964(UnityEngine_InputSystem_Utilities_JsonParser_JsonValue_TypeInfo);
    FUN_03642964(Newtonsoft_Json_Linq_JValue_JValueDynamicProxy_TypeInfo);
    FUN_03642964(Oculus_Interaction_PoseDetection_JointRotationActiveState_<>c_TypeInfo);
    FUN_03642964(Newtonsoft_Json_JsonReader_State_TypeInfo);
    FUN_03642964(Newtonsoft_Json_Schema_JsonSchemaBuilder_<>c__DisplayClass23_0_TypeInfo);
    FUN_03642964(AmplitudeNS_MiniJSON_Json_Parser_TypeInfo);
    FUN_03642964(Oculus_Interaction_PoseDetection_JointVelocityActiveState_<>c_TypeInfo);
    FUN_03642964(Newtonsoft_Json_Schema_JsonSchemaGenerator_<>c__DisplayClass23_0_TypeInfo);
    FUN_03642964(Oculus_Interaction_HandGrab_Visuals_JointCollection_<>c__DisplayClass2_0_TypeInfo);
    DAT_07eebc1c = 1;
  }
  uVar11 = FUN_07189d2c(*(undefined8 *)puVar3,0);
  uVar14 = *(undefined8 *)puVar4;
  **(undefined4 **)(*(long *)puVar2 + 0xb8) = uVar11;
  uVar11 = FUN_07189d2c(uVar14,0);
  uVar14 = *(undefined8 *)puVar5;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 4) = uVar11;
  uVar11 = FUN_07189d2c(uVar14,0);
  uVar14 = *(undefined8 *)puVar6;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = uVar11;
  uVar11 = FUN_07189d2c(uVar14,0);
  uVar14 = *(undefined8 *)puVar1;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc) = uVar11;
  uVar11 = FUN_07189d2c(uVar14,0);
  uVar14 = *(undefined8 *)puVar7;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = uVar11;
  uVar11 = FUN_07189d2c(uVar14,0);
  uVar14 = *(undefined8 *)puVar8;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x14) = uVar11;
  uVar11 = FUN_07189d2c(uVar14,0);
  uVar14 = *(undefined8 *)puVar9;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = uVar11;
  uVar11 = FUN_07189d2c(uVar14,0);
  puVar1 = Newtonsoft_Json_Schema_JsonSchemaGenerator_<>c__DisplayClass23_0_TypeInfo;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x1c) = uVar11;
  uVar11 = FUN_07189d2c(*(undefined8 *)puVar1,0);
  puVar1 = UnityEngine_InputSystem_Utilities_JsonParser_JsonValue_TypeInfo;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20) = uVar11;
  uVar11 = FUN_07189d2c(*(undefined8 *)puVar1,0);
  puVar1 = Newtonsoft_Json_JsonReader_State_TypeInfo;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x24) = uVar11;
  uVar11 = FUN_07189d2c(*(undefined8 *)puVar1,0);
  puVar1 = OVR_OpenVR_IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose_TypeInfo;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28) = uVar11;
  uVar11 = FUN_07189d2c(*(undefined8 *)puVar1,0);
  puVar1 = Newtonsoft_Json_Schema_JsonSchemaBuilder_<>c__DisplayClass23_0_TypeInfo;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x2c) = uVar11;
  uVar11 = FUN_07189d2c(*(undefined8 *)puVar1,0);
  puVar1 = PTR_DAT_079f49f0;
  uVar14 = *(undefined8 *)PTR_DAT_079f49f0;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30) = uVar11;
  uVar14 = FUN_03642a4c(uVar14,4);
  FUN_05d3bc48(uVar14,*(undefined8 *)
                       Newtonsoft_Json_Serialization_JsonContract_<>c__DisplayClass58_0_TypeInfo,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38);
  *puVar12 = uVar14;
  thunk_FUN_036b7ad0(puVar12,uVar14);
  uVar14 = FUN_03642a4c(*(undefined8 *)puVar10,3);
  FUN_05d3bc48(uVar14,*(undefined8 *)Google_MiniJSON_Json_Serializer_TypeInfo,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40);
  *puVar12 = uVar14;
  thunk_FUN_036b7ad0(puVar12,uVar14);
  uVar14 = FUN_03642a4c(*(undefined8 *)puVar10,3);
  FUN_05d3bc48(uVar14,*(undefined8 *)
                       Newtonsoft_Json_Serialization_JsonContract_<>c__DisplayClass57_0_TypeInfo,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48);
  *puVar12 = uVar14;
  thunk_FUN_036b7ad0(puVar12,uVar14);
  uVar14 = FUN_03642a4c(*(undefined8 *)puVar1,4);
  FUN_05d3bc48(uVar14,*(undefined8 *)
                       UnityEngine_InputSystem_Utilities_JsonParser_JsonString_TypeInfo,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x50);
  *puVar12 = uVar14;
  thunk_FUN_036b7ad0(puVar12,uVar14);
  lVar13 = FUN_03642a4c(*(undefined8 *)puVar10,2);
  if (lVar13 != 0) {
    if ((*(int *)(lVar13 + 0x18) != 0) &&
       (*(undefined4 *)(lVar13 + 0x20) = 5, *(int *)(lVar13 + 0x18) != 1)) {
      lVar15 = *(long *)puVar2;
      *(undefined4 *)(lVar13 + 0x24) = 6;
      *(long *)(*(long *)(lVar15 + 0xb8) + 0x58) = lVar13;
      thunk_FUN_036b7ad0();
      lVar13 = FUN_03642a4c(*(undefined8 *)puVar10,2);
      if (lVar13 == 0) goto LAB_06ff57b0;
      if ((*(int *)(lVar13 + 0x18) != 0) &&
         (*(undefined4 *)(lVar13 + 0x20) = 5, *(int *)(lVar13 + 0x18) != 1)) {
        lVar15 = *(long *)puVar2;
        *(undefined4 *)(lVar13 + 0x24) = 7;
        *(long *)(*(long *)(lVar15 + 0xb8) + 0x60) = lVar13;
        thunk_FUN_036b7ad0();
        lVar13 = FUN_03642a4c(*(undefined8 *)puVar1,2);
        if (lVar13 == 0) goto LAB_06ff57b0;
        if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) != 0) {
          lVar15 = *(long *)puVar2;
          *(undefined4 *)(lVar13 + 0x24) = 3;
          *(long *)(*(long *)(lVar15 + 0xb8) + 0x68) = lVar13;
          thunk_FUN_036b7ad0();
          lVar13 = FUN_03642a4c(*(undefined8 *)puVar10,1);
          if (lVar13 == 0) goto LAB_06ff57b0;
          if (*(int *)(lVar13 + 0x18) != 0) {
            lVar15 = *(long *)puVar2;
            *(undefined4 *)(lVar13 + 0x20) = 8;
            *(long *)(*(long *)(lVar15 + 0xb8) + 0x70) = lVar13;
            thunk_FUN_036b7ad0();
            lVar13 = FUN_03642a4c(*(undefined8 *)puVar10,1);
            if (lVar13 == 0) goto LAB_06ff57b0;
            if (*(int *)(lVar13 + 0x18) != 0) {
              lVar15 = *(long *)(*(long *)puVar2 + 0xb8);
              *(undefined4 *)(lVar13 + 0x20) = 9;
              *(long *)(lVar15 + 0x78) = lVar13;
              thunk_FUN_036b7ad0();
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03642c20();
  }
LAB_06ff57b0:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


