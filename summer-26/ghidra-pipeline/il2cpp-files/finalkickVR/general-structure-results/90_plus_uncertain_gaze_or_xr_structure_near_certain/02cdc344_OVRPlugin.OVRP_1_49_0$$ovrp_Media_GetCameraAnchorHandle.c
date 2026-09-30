/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_GetCameraAnchorHandle
ENTRY_POINT: 02cdc344
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 96
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_GetCameraAnchorHandle(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x29;
  undefined8 uStack0000000000000020;
  undefined4 uStack000000000000002c;
  undefined8 *in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 *in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  byte bStack0000000000000097;
  void *in_stack_00000098;
  undefined4 uStack00000000000000a4;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined4 uStack00000000000000c4;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  void *in_stack_000000e0;
  
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  uStack0000000000000020 = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  *(undefined1 *)(unaff_x29 + -0x39) = 0;
  *(undefined1 *)(unaff_x29 + -0x3a) = 0;
  *(undefined1 *)(unaff_x29 + -0x3b) = 0;
  Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(*(undefined8 *)(unaff_x29 + -8));
  *(undefined8 *)(unaff_x29 + -0x48) = *(undefined8 *)(unaff_x29 + -0x10);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000030);
  uVar2 = CAPI_ovr_Message_GetType_m423043F7F22673776E081CE00F34D7E17BB1CFF5
                    (*(undefined8 *)(unaff_x29 + -0x48),uStack0000000000000020);
  *(undefined4 *)(unaff_x29 + -0x4c) = uVar2;
  *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x10) = *(undefined4 *)(unaff_x29 + -0x4c);
  *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(unaff_x29 + -0x10);
  bVar1 = CAPI_ovr_Message_IsError_m01BAF4B3D9FD119F4E21F6B6A6444321C71DEA49
                    (*(undefined8 *)(unaff_x29 + -0x58),uStack0000000000000020);
  uStack000000000000002c = 1;
  *(byte *)(unaff_x29 + -0x59) = bVar1 & 1;
  *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(unaff_x29 + -0x10);
  uVar3 = CAPI_ovr_Message_GetRequestID_m0255FC17539095CC9CE4099019C1CAA7F7052D12
                    (*(undefined8 *)(unaff_x29 + -0x68),uStack0000000000000020);
  *(undefined8 *)(unaff_x29 + -0x70) = uVar3;
  *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x18) = *(undefined8 *)(unaff_x29 + -0x70);
  *(byte *)(unaff_x29 + -0x71) = *(byte *)(unaff_x29 + -0x59) & (byte)uStack000000000000002c;
  if ((*(byte *)(unaff_x29 + -0x71) & 1) == 0) {
    *(byte *)(unaff_x29 + -0x3a) = *(byte *)(unaff_x29 + -0x71) & 1;
    *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x10);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000030);
    uVar3 = CAPI_ovr_Message_GetNativeMessage_m09B6890DFE2A4D608E3441F2AFB2D43425EEAB6C
                      (*(undefined8 *)(unaff_x29 + -0x80));
    *(undefined8 *)(unaff_x29 + -0x88) = uVar3;
    *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0x88);
    *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x20);
    bVar1 = CAPI_ovr_Message_IsError_m01BAF4B3D9FD119F4E21F6B6A6444321C71DEA49
                      (*(undefined8 *)(unaff_x29 + -0x90),0);
    *(byte *)(unaff_x29 + -0x91) = bVar1 & 1;
    if ((*(byte *)(unaff_x29 + -0x91) & 1) == 0) {
      *(byte *)(unaff_x29 + -0x39) = *(byte *)(unaff_x29 + -0x3a) & 1;
    }
    else {
      *(byte *)(unaff_x29 + -0x3b) = *(byte *)(unaff_x29 + -0x3a) & 1;
      *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0x20);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000030);
      uVar3 = CAPI_ovr_Message_GetError_mAA0BE0A72705D199898393A7F551A42E913929EC
                        (*(undefined8 *)(unaff_x29 + -0xa0));
      *(undefined8 *)(unaff_x29 + -0xa8) = uVar3;
      *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x29 + -0xa8);
      *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0x28);
      uVar2 = CAPI_ovr_Error_GetCode_m046CBADD3B75A266B652406378547F9D6AF6457F
                        (*(undefined8 *)(unaff_x29 + -0xb0),0);
      *(undefined4 *)(unaff_x29 + -0xb4) = uVar2;
      *(undefined8 *)(unaff_x29 + -0xc0) = *(undefined8 *)(unaff_x29 + -0x28);
      uVar3 = CAPI_ovr_Error_GetMessage_m13AE495071EA046058B0165A4914053C042FCD9C
                        (*(undefined8 *)(unaff_x29 + -0xc0),0);
      *(undefined8 *)(unaff_x29 + -200) = uVar3;
      *(undefined8 *)(unaff_x29 + -0xd0) = *(undefined8 *)(unaff_x29 + -0x28);
      uVar2 = CAPI_ovr_Error_GetHttpCode_m621D1B5D41C91E594F21DA86A9ED9EAF23DF48BE
                        (*(undefined8 *)(unaff_x29 + -0xd0),0);
      *(undefined4 *)(unaff_x29 + -0xd4) = uVar2;
      in_stack_000000e0 = (void *)il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000048);
      Error__ctor_m62F1438EC56B44EBC6CAEAC0B62CEEE9C98EF44A
                (in_stack_000000e0,*(undefined4 *)(unaff_x29 + -0xb4),
                 *(undefined8 *)(unaff_x29 + -200),*(undefined4 *)(unaff_x29 + -0xd4),0);
      *(void **)(*(long *)(unaff_x29 + -8) + 0x20) = in_stack_000000e0;
      Il2CppCodeGenWriteBarrier((void **)(*(long *)(unaff_x29 + -8) + 0x20),in_stack_000000e0);
      *(byte *)(unaff_x29 + -0x39) = *(byte *)(unaff_x29 + -0x3b) & 1;
    }
  }
  else {
    *(byte *)(unaff_x29 + -0x39) = *(byte *)(unaff_x29 + -0x71) & 1;
  }
  if ((*(byte *)(unaff_x29 + -0x39) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000038);
    lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000038);
    bStack0000000000000097 = *(byte *)(lVar4 + 1) & 1;
    if (bStack0000000000000097 != 0) {
      in_stack_00000088 = *(undefined8 *)(unaff_x29 + -0x10);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000030);
      in_stack_00000080 =
           CAPI_ovr_Message_GetString_m3C6D6B1CDF076E33BF9D669A8B862FD8920441FA(in_stack_00000088,0)
      ;
      *(undefined8 *)(unaff_x29 + -0x38) = in_stack_00000080;
      in_stack_00000078 = *(long *)(unaff_x29 + -0x38);
      if (in_stack_00000078 == 0) {
        in_stack_00000060 = *(undefined8 *)(unaff_x29 + -0x10);
        in_stack_00000068 = in_stack_00000060;
        uVar3 = Box(*(Il2CppClass **)
                     Method_UnityEngine_UIElements_PointerCaptureEventBase<MouseCaptureOutEvent>_GetPooled__
                    ,&stack0x00000060);
        uVar3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8
                          (*(undefined8 *)
                            Method_Newtonsoft_Json_Linq_JToken_<AfterSelf>d__49_System_Collections_IEnumerator_Reset__
                           ,uVar3);
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000040);
        Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(uVar3,0);
      }
      else {
        in_stack_00000070 = *(undefined8 *)(unaff_x29 + -0x38);
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000040);
        Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(in_stack_00000070,0);
      }
    }
  }
  else {
    in_stack_000000d8 = *(undefined8 *)(unaff_x29 + -0x10);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000030);
    in_stack_000000d0 =
         CAPI_ovr_Message_GetError_mAA0BE0A72705D199898393A7F551A42E913929EC(in_stack_000000d8);
    *(undefined8 *)(unaff_x29 + -0x30) = in_stack_000000d0;
    in_stack_000000c8 = *(undefined8 *)(unaff_x29 + -0x30);
    uStack00000000000000c4 =
         CAPI_ovr_Error_GetCode_m046CBADD3B75A266B652406378547F9D6AF6457F(in_stack_000000c8,0);
    in_stack_000000b8 = *(undefined8 *)(unaff_x29 + -0x30);
    in_stack_000000b0 =
         CAPI_ovr_Error_GetMessage_m13AE495071EA046058B0165A4914053C042FCD9C(in_stack_000000b8,0);
    in_stack_000000a8 = *(undefined8 *)(unaff_x29 + -0x30);
    uStack00000000000000a4 =
         CAPI_ovr_Error_GetHttpCode_m621D1B5D41C91E594F21DA86A9ED9EAF23DF48BE(in_stack_000000a8,0);
    in_stack_00000098 = (void *)il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000048);
    Error__ctor_m62F1438EC56B44EBC6CAEAC0B62CEEE9C98EF44A
              (in_stack_00000098,uStack00000000000000c4,in_stack_000000b0,uStack00000000000000a4,0);
    *(void **)(*(long *)(unaff_x29 + -8) + 0x20) = in_stack_00000098;
    Il2CppCodeGenWriteBarrier((void **)(*(long *)(unaff_x29 + -8) + 0x20),in_stack_00000098);
  }
  return;
}


