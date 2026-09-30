/*
FUNCTION_NAME: OVR.OpenVR.IVROverlay._CreateOverlay$$Invoke
ENTRY_POINT: 02d95914
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Heritage AFTER dead removal. Example location: s0x0000027c : 0x02d96028 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte OVR_OpenVR_IVROverlay__CreateOverlay__Invoke(long param_1)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x29;
  undefined4 uVar6;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000034;
  uint uStack00000000000000b4;
  uint uStack00000000000000bc;
  undefined4 uStack00000000000000d4;
  undefined8 *in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined4 uStack0000000000000114;
  undefined4 uStack000000000000011c;
  undefined4 uStack0000000000000120;
  undefined4 uStack0000000000000124;
  undefined4 uStack0000000000000128;
  undefined4 uStack000000000000012c;
  ulong in_stack_00000170;
  undefined4 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined4 in_stack_00000188;
  undefined4 uStack000000000000018c;
  undefined4 in_stack_00000190;
  byte in_stack_000001a8;
  byte bStack00000000000001a9;
  byte bStack00000000000001aa;
  byte bStack00000000000001ab;
  byte bStack00000000000001ac;
  byte bStack00000000000001ad;
  byte bStack00000000000001ae;
  byte bStack00000000000001af;
  byte bStack00000000000001d3;
  undefined4 in_stack_00000220;
  undefined4 in_stack_00000224;
  undefined8 in_stack_0000027c;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  
  *(byte *)(unaff_x29 + -0xae) = *(byte *)(*(long *)(param_1 + 0x208) + 0x103) & 1;
  if ((((*(byte *)(unaff_x29 + -0xae) & 1) == 0) &&
      (*(byte *)(unaff_x29 + -0xaf) = *(byte *)(in_stack_000000f8[0x41] + 0xd1) & 1,
      (*(byte *)(unaff_x29 + -0xaf) & 1) == 0)) &&
     (*(byte *)(unaff_x29 + -0xb0) = *(byte *)(in_stack_000000f8[0x41] + 0xd0) & 1,
     (*(byte *)(unaff_x29 + -0xb0) & 1) == 0)) {
    *(undefined1 *)(unaff_x29 + -0x2d) = 1;
    *(undefined1 *)(unaff_x29 + -0x2e) = 1;
  }
  *(byte *)(unaff_x29 + -0xb1) = *(byte *)(in_stack_000000f8[0x41] + 0x105) & 1;
  if (((*(byte *)(unaff_x29 + -0xb1) & 1) == 0) &&
     (((((*(byte *)(unaff_x29 + -0xb2) = *(byte *)(in_stack_000000f8[0x41] + 0x104) & 1,
         (*(byte *)(unaff_x29 + -0xb2) & 1) != 0 &&
         (*(byte *)(unaff_x29 + -0xb3) = *(byte *)(in_stack_000000f8[0x41] + 0x103) & 1,
         (*(byte *)(unaff_x29 + -0xb3) & 1) != 0)) ||
        ((*(byte *)(unaff_x29 + -0xb4) = *(byte *)(in_stack_000000f8[0x41] + 0xd1) & 1,
         (*(byte *)(unaff_x29 + -0xb4) & 1) != 0 &&
         (*(byte *)(unaff_x29 + -0xb5) = *(byte *)(in_stack_000000f8[0x41] + 0xd0) & 1,
         (*(byte *)(unaff_x29 + -0xb5) & 1) != 0)))) ||
       ((*(byte *)(unaff_x29 + -0xb6) = *(byte *)(in_stack_000000f8[0x41] + 0x104) & 1,
        (*(byte *)(unaff_x29 + -0xb6) & 1) != 0 &&
        (*(byte *)(unaff_x29 + -0xb7) = *(byte *)(in_stack_000000f8[0x41] + 0xd0) & 1,
        (*(byte *)(unaff_x29 + -0xb7) & 1) != 0)))) ||
      ((*(byte *)(unaff_x29 + -0xb8) = *(byte *)(in_stack_000000f8[0x41] + 0xd1) & 1,
       (*(byte *)(unaff_x29 + -0xb8) & 1) != 0 &&
       (*(byte *)(unaff_x29 + -0xb9) = *(byte *)(in_stack_000000f8[0x41] + 0x103) & 1,
       (*(byte *)(unaff_x29 + -0xb9) & 1) != 0)))))) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__)
    ;
    Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2
              (*(undefined8 *)
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass2_0_<CreateAdditionalWireframeShaderViews>b__0__
               ,0);
    *(undefined1 *)(unaff_x29 + -1) = 0;
  }
  else {
    *(byte *)(unaff_x29 + -0xba) = *(byte *)(in_stack_000000f8[0x41] + 0xd3) & 1;
    if ((*(byte *)(unaff_x29 + -0xba) & 1) == 0) {
      *(undefined4 *)(unaff_x29 + -0xc0) = *(undefined4 *)(in_stack_000000f8[0x41] + 0xec);
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass11_0_<CreatePixelValidationChannels>b__0__
                );
      bVar1 = OVROverlay_NeedsTexturesForShape_m7F193B7A4CDE200B3DBF3AF44CD30ADB43AD947D
                        (*(undefined4 *)(unaff_x29 + -0xc0),0);
      *(byte *)(unaff_x29 + -0xc1) = bVar1 & 1;
      *(uint *)(unaff_x29 + -0x58) = (uint)((*(byte *)(unaff_x29 + -0xc1) & 1) == 0);
    }
    else {
      *(undefined4 *)(unaff_x29 + -0x58) = 1;
    }
    *(bool *)(unaff_x29 + -0x2f) = *(int *)(unaff_x29 + -0x58) != 0;
    *(byte *)(unaff_x29 + -0xc2) = *(byte *)(unaff_x29 + -0x19) & 1;
    *(byte *)(unaff_x29 + -0xc3) = *(byte *)(unaff_x29 + -0x1a) & 1;
    *(byte *)(unaff_x29 + -0xc4) = *(byte *)(unaff_x29 + -0x1b) & 1;
    *(byte *)(unaff_x29 + -0xc5) = *(byte *)(unaff_x29 + -0x2f) & 1;
    if ((*(byte *)(unaff_x29 + -0xc5) & 1) == 0) {
      *(byte *)(unaff_x29 + -0x5c) = *(byte *)(unaff_x29 + -0xc4) & 1;
      *(byte *)(unaff_x29 + -0x5d) = *(byte *)(unaff_x29 + -0xc3) & 1;
      *(byte *)(unaff_x29 + -0x5e) = *(byte *)(unaff_x29 + -0xc2) & 1;
      in_stack_000000f8[0x2a] = *(undefined8 *)(in_stack_000000f8[0x41] + 0x128);
      NullCheck((void *)in_stack_000000f8[0x2a]);
      lVar3 = LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB::GetAddressAt
                        ((LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB *)
                         in_stack_000000f8[0x2a],0);
      in_stack_000000f8[0x29] = *(undefined8 *)(lVar3 + 8);
      in_stack_000000f8[0x37] = in_stack_000000f8[0x29];
      *(byte *)(unaff_x29 + -0x69) = *(byte *)(unaff_x29 + -0x5c) & 1;
      *(byte *)(unaff_x29 + -0x6a) = *(byte *)(unaff_x29 + -0x5d) & 1;
      *(byte *)(unaff_x29 + -0x6b) = *(byte *)(unaff_x29 + -0x5e) & 1;
    }
    else {
      *(byte *)(unaff_x29 + -0x59) = *(byte *)(unaff_x29 + -0xc4) & 1;
      *(byte *)(unaff_x29 + -0x5a) = *(byte *)(unaff_x29 + -0xc3) & 1;
      *(byte *)(unaff_x29 + -0x5b) = *(byte *)(unaff_x29 + -0xc2) & 1;
      in_stack_000000f8[0x37] = 0;
      *(byte *)(unaff_x29 + -0x69) = *(byte *)(unaff_x29 + -0x59) & 1;
      *(byte *)(unaff_x29 + -0x6a) = *(byte *)(unaff_x29 + -0x5a) & 1;
      *(byte *)(unaff_x29 + -0x6b) = *(byte *)(unaff_x29 + -0x5b) & 1;
    }
    *(byte *)(unaff_x29 + -0xd9) = *(byte *)(unaff_x29 + -0x2f) & 1;
    if ((*(byte *)(unaff_x29 + -0xd9) & 1) == 0) {
      in_stack_000000f8[0x33] = in_stack_000000f8[0x37];
      *(byte *)(unaff_x29 + -0x89) = *(byte *)(unaff_x29 + -0x69) & 1;
      *(byte *)(unaff_x29 + -0x8a) = *(byte *)(unaff_x29 + -0x6a) & 1;
      *(byte *)(unaff_x29 + -0x8b) = *(byte *)(unaff_x29 + -0x6b) & 1;
      in_stack_000000f8[0x27] = *(undefined8 *)(in_stack_000000f8[0x41] + 0x128);
      *(undefined4 *)(unaff_x29 + -0xec) = *(undefined4 *)(unaff_x29 + -0x2c);
      NullCheck((void *)in_stack_000000f8[0x27]);
      lVar3 = LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB::GetAddressAt
                        ((LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB *)
                         in_stack_000000f8[0x27],(long)*(int *)(unaff_x29 + -0xec));
      in_stack_000000f8[0x25] = *(undefined8 *)(lVar3 + 8);
      in_stack_000000f8[0x31] = in_stack_000000f8[0x25];
      in_stack_000000f8[0x30] = in_stack_000000f8[0x33];
      *(byte *)(unaff_x29 + -0xa1) = *(byte *)(unaff_x29 + -0x89) & 1;
      *(byte *)(unaff_x29 + -0xa2) = *(byte *)(unaff_x29 + -0x8a) & 1;
      *(byte *)(unaff_x29 + -0xa3) = *(byte *)(unaff_x29 + -0x8b) & 1;
    }
    else {
      in_stack_000000f8[0x35] = in_stack_000000f8[0x37];
      *(byte *)(unaff_x29 + -0x79) = *(byte *)(unaff_x29 + -0x69) & 1;
      *(byte *)(unaff_x29 + -0x7a) = *(byte *)(unaff_x29 + -0x6a) & 1;
      *(byte *)(unaff_x29 + -0x7b) = *(byte *)(unaff_x29 + -0x6b) & 1;
      in_stack_000000f8[0x31] = 0;
      in_stack_000000f8[0x30] = in_stack_000000f8[0x35];
      *(byte *)(unaff_x29 + -0xa1) = *(byte *)(unaff_x29 + -0x79) & 1;
      *(byte *)(unaff_x29 + -0xa2) = *(byte *)(unaff_x29 + -0x7a) & 1;
      *(byte *)(unaff_x29 + -0xa3) = *(byte *)(unaff_x29 + -0x7b) & 1;
    }
    uVar2 = OVROverlay_get_layerId_mA7DC748DC6428FC5D81249F457EE93C790B254D2_inline
                      ((OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *)
                       in_stack_000000f8[0x41],(MethodInfo *)0x0);
    *(undefined4 *)(unaff_x29 + -0xfc) = uVar2;
    *(undefined4 *)(unaff_x29 + -0x100) = *(undefined4 *)(unaff_x29 + -0x20);
    OVRPose_flipZ_m733EAC7D6E899B471B373706C787534E4D46E78C(in_stack_00000100,0);
    in_stack_000000f8[0x21] = *(undefined8 *)((long)in_stack_000000f8 + 0xec);
    in_stack_000000f8[0x20] = *(undefined8 *)((long)in_stack_000000f8 + 0xe4);
    in_stack_000000f8[0x3b] = in_stack_000000f8[0x21];
    in_stack_000000f8[0x3a] = in_stack_000000f8[0x20];
    *(undefined8 *)(unaff_x29 + -0x3c) = in_stack_000002a8;
    *(undefined8 *)(unaff_x29 + -0x44) = in_stack_000002a0;
    OVRPose_ToPosef_Legacy_mD9CEB204C7B417176FD6A32CD9E6F9CEA9E565C3(unaff_x29 + -0x50,0);
    in_stack_000000f8[0x19] = *(undefined8 *)((long)in_stack_000000f8 + 0xac);
    in_stack_000000f8[0x18] = *(undefined8 *)((long)in_stack_000000f8 + 0xa4);
    in_stack_000000f8[0x13] = in_stack_000000f8[0x42];
    uVar2 = *(undefined4 *)(unaff_x29 + -8);
    in_stack_000000f8[0xe] = in_stack_000000f8[0x13];
    uVar6 = OVRExtensions_ToVector3f_m21A8631A98D29AED03A5ED3FF46475646703F4DC(in_stack_00000220,0);
    in_stack_000000f8[0x11] = CONCAT44(in_stack_00000224,uVar6);
    memcpy(&stack0x000001d4,(void *)(in_stack_000000f8[0x41] + 0x6c),0x40);
    bStack00000000000001d3 = *(byte *)(in_stack_000000f8[0x41] + 0xad) & 1;
    uVar4 = *(undefined8 *)(in_stack_000000f8[0x41] + 0xb0);
    in_stack_000000f8[3] = *(undefined8 *)(in_stack_000000f8[0x41] + 0xb8);
    in_stack_000000f8[2] = uVar4;
    uVar4 = *(undefined8 *)(in_stack_000000f8[0x41] + 0xc0);
    in_stack_000000f8[1] = *(undefined8 *)(in_stack_000000f8[0x41] + 200);
    *in_stack_000000f8 = uVar4;
    bStack00000000000001af = *(byte *)(in_stack_000000f8[0x41] + 0xd0) & 1;
    bStack00000000000001ae = *(byte *)(in_stack_000000f8[0x41] + 0x101) & 1;
    bStack00000000000001ad = *(byte *)(unaff_x29 + -0x2e) & 1;
    bStack00000000000001ac = *(byte *)(unaff_x29 + -0x2d) & 1;
    bStack00000000000001ab = *(byte *)(in_stack_000000f8[0x41] + 0xd1) & 1;
    bStack00000000000001aa = *(byte *)(in_stack_000000f8[0x41] + 0xd2) & 1;
    bStack00000000000001a9 = *(byte *)(in_stack_000000f8[0x41] + 0x25) & 1;
    in_stack_000001a8 = *(byte *)(in_stack_000000f8[0x41] + 0x105) & 1;
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    uStack00000000000000b4 = (uint)*(byte *)(unaff_x29 + -0xa3);
    bVar1 = *(byte *)(unaff_x29 + -0xa2);
    uStack00000000000000bc = (uint)*(byte *)(unaff_x29 + -0xa1);
    uVar4 = in_stack_000000f8[0x30];
    uVar5 = in_stack_000000f8[0x31];
    uVar6 = *(undefined4 *)(unaff_x29 + -0xfc);
    uStack00000000000000d4 = *(undefined4 *)(unaff_x29 + -0x100);
    in_stack_00000180 = in_stack_000000f8[0x18];
    in_stack_00000188 = (undefined4)in_stack_000000f8[0x19];
    uStack000000000000018c = (undefined4)in_stack_0000027c;
    in_stack_00000190 = (undefined4)((ulong)in_stack_0000027c >> 0x20);
    in_stack_00000170 = in_stack_000000f8[0x11];
    in_stack_00000178 = uVar2;
    memcpy(&stack0x00000130,&stack0x000001d4,0x40);
    uStack0000000000000120 = (undefined4)in_stack_000000f8[2];
    uStack0000000000000124 = (undefined4)((ulong)in_stack_000000f8[2] >> 0x20);
    uStack0000000000000128 = (undefined4)in_stack_000000f8[3];
    uStack000000000000012c = (undefined4)((ulong)in_stack_000000f8[3] >> 0x20);
    uStack0000000000000114 = (undefined4)((ulong)*in_stack_000000f8 >> 0x20);
    uStack000000000000011c = (undefined4)((ulong)in_stack_000000f8[1] >> 0x20);
    uStack000000000000002c = uStack0000000000000114;
    uStack0000000000000034 = uStack000000000000011c;
    bVar1 = OVRPlugin_EnqueueSubmitLayer_mCAB4C8E7194B009F4F37376C8898C633452EB54F
                      (in_stack_00000170 & 0xffffffff,in_stack_00000170._4_4_,in_stack_00000178,
                       uStack0000000000000120,uStack0000000000000124,uStack0000000000000128,
                       uStack000000000000012c,uStack00000000000000b4 & 1,bVar1 & 1,
                       uStack00000000000000bc & 1,uVar4,uVar5,uVar6,uStack00000000000000d4,
                       &stack0x00000180);
    *(undefined4 *)(in_stack_000000f8[0x41] + 0xf0) =
         *(undefined4 *)(in_stack_000000f8[0x41] + 0xec);
    *(byte *)(unaff_x29 + -1) = bVar1 & 1;
  }
  return *(byte *)(unaff_x29 + -1) & 1;
}


