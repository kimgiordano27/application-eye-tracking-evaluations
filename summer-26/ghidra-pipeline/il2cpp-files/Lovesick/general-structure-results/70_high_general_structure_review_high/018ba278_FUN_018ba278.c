/*
FUNCTION_NAME: FUN_018ba278
ENTRY_POINT: 018ba278
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_018ba278(void)

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
  undefined8 uVar11;
  
  puVar10 = StringLiteral_12154;
  puVar9 = Method_Oculus_Interaction_HoverInteractorsGate_<>c_<Awake>b__7_1__;
  puVar8 = Method_MultiRotationKnob_OnGrab__;
  puVar7 = Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_WriteTo__;
  puVar6 = Method_Sirenix_Serialization_IDataWriter_WritePrimitiveArray<bool>__;
  puVar5 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WitRequest_<WaitForTimeout>d__96>__
  ;
  puVar4 = Method_System_Collections_Generic_ValueListBuilder<int>_Append__;
  puVar3 = 
  Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
  ;
  puVar2 = 
  Method_System_Collections_Generic_Dictionary<OVRGLTFInputNode,_OVRGLTFAnimatinonNode>_set_Item__;
  puVar1 = SetGlobalTintOnMessage_<>c_TypeInfo;
  if ((DAT_03779960 & 1) == 0) {
    thunk_FUN_00d48444(Method_Sirenix_Serialization_IDataWriter_WritePrimitiveArray<bool>__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
                      );
    thunk_FUN_00d48444(SetGlobalTintOnMessage_<>c_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_ValueListBuilder<int>_Append__);
    thunk_FUN_00d48444(StringLiteral_12154);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_WriteTo__);
    thunk_FUN_00d48444(Method_Oculus_Interaction_HoverInteractorsGate_<>c_<Awake>b__7_1__);
    thunk_FUN_00d48444(Method_MultiRotationKnob_OnGrab__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<OVRGLTFInputNode,_OVRGLTFAnimatinonNode>_set_Item__
                      );
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WitRequest_<WaitForTimeout>d__96>__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_VolumeStack_GetComponent<ColorCurves>__);
    DAT_03779960 = 1;
  }
  uVar11 = FUN_00da4fb8(*(undefined8 *)puVar6,6);
  FUN_016a34e8(uVar11,*(undefined8 *)puVar9,0);
  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = uVar11;
  uVar11 = FUN_00da4fb8(*(undefined8 *)puVar6,6);
  FUN_016a34e8(uVar11,*(undefined8 *)puVar9,0);
  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10) = uVar11;
  uVar11 = FUN_00da4fb8(*(undefined8 *)puVar6,7);
  FUN_016a34e8(uVar11,*(undefined8 *)puVar7,0);
  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18) = uVar11;
  uVar11 = FUN_00da4fb8(*(undefined8 *)puVar6,0xb);
  FUN_016a34e8(uVar11,*(undefined8 *)puVar1,0);
  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20) = uVar11;
  uVar11 = FUN_00da4fb8(*(undefined8 *)puVar6,5);
  FUN_016a34e8(uVar11,*(undefined8 *)puVar5,0);
  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28) = uVar11;
  uVar11 = FUN_00da4fb8(*(undefined8 *)puVar6,4);
  FUN_016a34e8(uVar11,*(undefined8 *)puVar10,0);
  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30) = uVar11;
  uVar11 = FUN_00da4fb8(*(undefined8 *)puVar6,4);
  FUN_016a34e8(uVar11,*(undefined8 *)puVar2,0);
  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38) = uVar11;
  uVar11 = FUN_00da4fb8(*(undefined8 *)puVar6,5);
  FUN_016a34e8(uVar11,*(undefined8 *)puVar4,0);
  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x40) = uVar11;
  uVar11 = FUN_00da4fb8(*(undefined8 *)puVar6,4);
  FUN_016a34e8(uVar11,*(undefined8 *)puVar8,0);
  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x48) = uVar11;
  uVar11 = FUN_00da4fb8(*(undefined8 *)puVar6,5);
  FUN_016a34e8(uVar11,*(undefined8 *)
                       Method_UnityEngine_Rendering_VolumeStack_GetComponent<ColorCurves>__,0);
  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x50) = uVar11;
  return;
}


