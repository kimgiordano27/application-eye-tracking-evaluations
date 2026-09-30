/*
FUNCTION_NAME: OVRBone$$.ctor
ENTRY_POINT: 02d5d240
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 93
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void OVRBone___ctor(undefined1 param_1 [16],float param_2)

{
  long unaff_x29;
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  undefined8 in_stack_00000020;
  long in_stack_00000060;
  long in_stack_00000070;
  byte bStack000000000000013f;
  
  uVar1 = il2cpp_codegen_add<float,float>(in_stack_00000020._4_4_,param_2);
  *(undefined4 *)(in_stack_00000060 + 0x48) = uVar1;
  *(undefined4 *)(in_stack_00000070 + 0x70) = *(undefined4 *)(in_stack_00000060 + 0x44);
  *(undefined4 *)(in_stack_00000070 + 0x6c) = *(undefined4 *)(in_stack_00000060 + 0x50);
  fVar2 = *(float *)(in_stack_00000070 + 0x70);
  fVar3 = (float)il2cpp_codegen_multiply<float,float>(*(float *)(in_stack_00000070 + 0x6c),-2.0);
  uVar1 = il2cpp_codegen_add<float,float>(fVar2,fVar3);
  *(undefined4 *)(in_stack_00000060 + 0x44) = uVar1;
  *(undefined8 *)(in_stack_00000070 + 0x60) =
       *(undefined8 *)(*(long *)(in_stack_00000060 + 0x70) + 0x38);
  *(undefined4 *)(in_stack_00000070 + 0x5c) = *(undefined4 *)(in_stack_00000060 + 0x48);
  *(undefined4 *)(in_stack_00000070 + 0x58) = *(undefined4 *)(in_stack_00000060 + 0x44);
  *(undefined4 *)(in_stack_00000070 + 0x54) = *(undefined4 *)(in_stack_00000060 + 0x40);
  *(undefined8 *)(in_stack_00000070 + 0x48) = 0;
  *(undefined4 *)(in_stack_00000070 + 0x50) = 0;
  Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline
            (&stack0x00000150,*(float *)(in_stack_00000070 + 0x5c),
             *(float *)(in_stack_00000070 + 0x58),*(float *)(in_stack_00000070 + 0x54),
             (MethodInfo *)0x0);
  NullCheck(*(void **)(in_stack_00000070 + 0x60));
  *(undefined8 *)(in_stack_00000070 + 0x38) = *(undefined8 *)(in_stack_00000070 + 0x48);
  *(undefined4 *)(in_stack_00000070 + 0x40) = *(undefined4 *)(in_stack_00000070 + 0x50);
  OVRManager_set_headPoseRelativeOffsetRotation_m607DFB21F99CE3107ECA6BD9E1C0A2B6AC4242FC
            (*(undefined4 *)(in_stack_00000070 + 0x38),*(undefined4 *)(in_stack_00000070 + 0x3c),
             *(undefined4 *)(in_stack_00000070 + 0x40),*(undefined8 *)(in_stack_00000070 + 0x60),0);
  bStack000000000000013f = *(byte *)(*(long *)(in_stack_00000060 + 0x70) + 0x5c) & 1;
  if (bStack000000000000013f == 0) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_SendEvent_m2724870AAEAEC48E83D56DB0019FEB45B917A70D
              (*(undefined8 *)
                Method_WebSocketSharp_Net_WebHeaderCollection_<>c__DisplayClass44_0_<ToStringMultiValue>b__0__
               ,*(undefined8 *)
                 Method_UnityEngine_UIElements_PointerEventBase<PointerDownEvent>_GetPooled__,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>__ctor__,0);
    *(undefined1 *)(*(long *)(in_stack_00000060 + 0x70) + 0x5c) = 1;
  }
  *(byte *)(*(long *)(in_stack_00000060 + 0x70) + 0x40) = *(byte *)(unaff_x29 + -0x11) & 1;
  return;
}


