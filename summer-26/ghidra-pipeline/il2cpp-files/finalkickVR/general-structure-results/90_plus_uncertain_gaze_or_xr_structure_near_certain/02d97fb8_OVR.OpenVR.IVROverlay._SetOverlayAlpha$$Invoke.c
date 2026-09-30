/*
FUNCTION_NAME: OVR.OpenVR.IVROverlay._SetOverlayAlpha$$Invoke
ENTRY_POINT: 02d97fb8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior;functionality_possible_biometrics_hits_1
*/


void OVR_OpenVR_IVROverlay__SetOverlayAlpha__Invoke
               (undefined8 *param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long in_x9;
  long unaff_x29;
  undefined4 uVar10;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000094;
  undefined8 *in_stack_000000b0;
  long in_stack_000000b8;
  undefined8 *in_stack_000000c0;
  long in_stack_000000c8;
  undefined8 *in_stack_000000d0;
  undefined8 *in_stack_000000d8;
  undefined8 *in_stack_000000e0;
  undefined8 *in_stack_000000e8;
  byte bStack00000000000000f7;
  byte bStack0000000000000107;
  byte bStack000000000000011b;
  undefined4 uStack000000000000011c;
  undefined4 uStack0000000000000124;
  undefined8 in_stack_00000130;
  undefined4 in_stack_00000138;
  undefined4 uStack000000000000013c;
  undefined4 in_stack_00000140;
  undefined8 uStack0000000000000144;
  byte bStack000000000000015b;
  undefined4 uStack000000000000015c;
  ulong in_stack_00000160;
  undefined4 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined4 in_stack_00000178;
  undefined4 uStack000000000000017c;
  undefined4 in_stack_00000180;
  undefined8 uStack0000000000000184;
  byte bStack000000000000018d;
  byte bStack000000000000018e;
  byte bStack000000000000018f;
  undefined8 in_stack_00000198;
  undefined8 in_stack_00000a60;
  undefined8 in_stack_00000a68;
  
  *(undefined4 *)(in_x9 + 0x110) = 0;
  *(undefined4 *)(in_x9 + 0x10c) = 0;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*param_1);
  lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000000d8);
  *(byte *)(unaff_x29 + -0xd5) = *(byte *)(lVar6 + 0x180) & 1;
  if ((*(byte *)(unaff_x29 + -0xd5) & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    bVar4 = OVRPlugin_get_userPresent_mDC6C3FFE8897342A888E529C7BEAF368413C8151(0);
    *(byte *)(unaff_x29 + -0xd6) = bVar4 & 1;
    if ((*(byte *)(unaff_x29 + -0xd6) & 1) != 0) {
      *(byte *)(unaff_x29 + -0xd7) = *(byte *)(in_stack_000000b0[0x3b] + 0x1fc) & 1;
      if ((*(byte *)(unaff_x29 + -0xd7) & 1) == 0) {
        OVROverlay_InitOVROverlay_m8B089AEF56625D94A9F896DA7570F130F5EF64BF
                  (in_stack_000000b0[0x3b],0);
      }
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000d8);
      lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000000d8);
      *(undefined4 *)((long)in_stack_000000b0 + 0x104) = *(undefined4 *)(lVar6 + 0x100);
      *(undefined4 *)(in_stack_000000b0 + 0x20) = *(undefined4 *)(in_stack_000000b0[0x3b] + 0x1f8);
      if (*(int *)((long)in_stack_000000b0 + 0x104) == *(int *)(in_stack_000000b0 + 0x20)) {
        *(byte *)(unaff_x29 + -0xe1) = *(byte *)(in_stack_000000b0[0x3b] + 0xd3) & 1;
        if ((*(byte *)(unaff_x29 + -0xe1) & 1) == 0) {
          *(undefined4 *)(in_stack_000000b0 + 0x1f) =
               *(undefined4 *)(in_stack_000000b0[0x3b] + 0xec);
          il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000e0);
          bVar4 = OVROverlay_NeedsTexturesForShape_m7F193B7A4CDE200B3DBF3AF44CD30ADB43AD947D
                            (*(undefined4 *)(in_stack_000000b0 + 0x1f),0);
          *(byte *)(unaff_x29 + -0xe9) = bVar4 & 1;
          *(uint *)(in_stack_000000b0 + 0x22) = *(byte *)(unaff_x29 + -0xe9) & 1;
        }
        else {
          *(undefined4 *)(in_stack_000000b0 + 0x22) = 0;
        }
        *(bool *)(unaff_x29 + -0x11) = *(int *)(in_stack_000000b0 + 0x22) != 0;
        *(undefined4 *)(in_stack_000000b0 + 0x1e) = *(undefined4 *)(in_stack_000000b0[0x3b] + 0x20);
        if (*(int *)(in_stack_000000b0 + 0x1e) != 0) {
          *(byte *)(unaff_x29 + -0xf1) = *(byte *)(unaff_x29 + -0x11) & 1;
          if ((*(byte *)(unaff_x29 + -0xf1) & 1) != 0) {
            in_stack_000000b0[0x1c] = *(undefined8 *)(in_stack_000000b0[0x3b] + 0xf8);
            NullCheck((void *)in_stack_000000b0[0x1c]);
            uVar10 = OVROverlay_get_texturesPerStage_m673F2EE33C14D1A244CBF00394A423B3E81C0D42
                               (in_stack_000000b0[0x3b],0);
            *(undefined4 *)((long)in_stack_000000b0 + 0xdc) = uVar10;
            if ((int)*(undefined8 *)(in_stack_000000b0[0x1c] + 0x18) <
                *(int *)((long)in_stack_000000b0 + 0xdc)) {
              return;
            }
            in_stack_000000b0[0x1a] = *(undefined8 *)(in_stack_000000b0[0x3b] + 0xf8);
            NullCheck((void *)in_stack_000000b0[0x1a]);
            *(undefined4 *)((long)in_stack_000000b0 + 0xcc) = 0;
            uVar8 = TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46::GetAt
                              ((TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46 *)
                               in_stack_000000b0[0x1a],
                               (long)*(int *)((long)in_stack_000000b0 + 0xcc));
            in_stack_000000b0[0x18] = uVar8;
            il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000e8);
            bVar4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605
                              (in_stack_000000b0[0x18],0);
            if ((bVar4 & 1) != 0) {
              return;
            }
          }
          OVRPose_get_identity_m80A35AA376851112A6104A67226582D63EB0739B();
          in_stack_000000b0[0x15] = *(undefined8 *)((long)in_stack_000000b0 + 0x8c);
          in_stack_000000b0[0x14] = *(undefined8 *)((long)in_stack_000000b0 + 0x84);
          in_stack_000000b0[0x37] = in_stack_000000b0[0x15];
          in_stack_000000b0[0x36] = in_stack_000000b0[0x14];
          *(undefined8 *)(unaff_x29 + -0x1c) = in_stack_00000a68;
          *(undefined8 *)(unaff_x29 + -0x24) = in_stack_00000a60;
          uVar10 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline
                             ((MethodInfo *)0x0);
          *(undefined4 *)((long)in_stack_000000b0 + 0x6c) = uVar10;
          *(undefined4 *)(in_stack_000000b0 + 0xe) = param_3;
          *(undefined4 *)((long)in_stack_000000b0 + 0x74) = param_4;
          in_stack_000000b0[0xf] = *(undefined8 *)((long)in_stack_000000b0 + 0x6c);
          *(undefined4 *)(in_stack_000000b0 + 0x10) =
               *(undefined4 *)((long)in_stack_000000b0 + 0x74);
          in_stack_000000b0[0x34] = in_stack_000000b0[0xf];
          *(undefined4 *)(in_stack_000000b0 + 0x35) = *(undefined4 *)(in_stack_000000b0 + 0x10);
          *(undefined1 *)(unaff_x29 + -0x41) = 0;
          *(undefined1 *)(unaff_x29 + -0x42) = 0;
          bVar4 = OVROverlay_ComputeSubmit_mD3EA4D18F6A3AC12F9A15CAD6B5F04357572FD9F
                            (in_stack_000000b0[0x3b],unaff_x29 + -0x30,unaff_x29 + -0x40,
                             unaff_x29 + -0x41,unaff_x29 + -0x42,0);
          if ((bVar4 & 1) != 0) {
            il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000d8);
            lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000000d8);
            *(undefined4 *)((long)in_stack_000000b0 + 100) = *(undefined4 *)(lVar6 + 0x100);
            if (*(int *)((long)in_stack_000000b0 + 100) == 2) {
              *(undefined4 *)(in_stack_000000b0 + 0xc) =
                   *(undefined4 *)(in_stack_000000b0[0x3b] + 0xec);
              if (*(int *)(in_stack_000000b0 + 0xc) == 0) {
                in_stack_000000b0[10] = in_stack_000000b0[0x34];
                *(undefined4 *)(in_stack_000000b0 + 0xb) = *(undefined4 *)(in_stack_000000b0 + 0x35)
                ;
                in_stack_000000b0[7] = in_stack_000000b0[0x37];
                in_stack_000000b0[6] = in_stack_000000b0[0x36];
                in_stack_000000b0[4] = in_stack_000000b0[10];
                *(undefined4 *)(in_stack_000000b0 + 5) = *(undefined4 *)(in_stack_000000b0 + 0xb);
                in_stack_000000b0[1] = in_stack_000000b0[7];
                *in_stack_000000b0 = in_stack_000000b0[6];
                OVROverlay_OpenVROverlayUpdate_m3B2152A89A025BF04C32D2623C772AD17544BE0B
                          (*(undefined4 *)(in_stack_000000b0 + 4),
                           *(undefined4 *)((long)in_stack_000000b0 + 0x24),
                           *(undefined4 *)(in_stack_000000b0 + 5),in_stack_000000b0[0x3b],
                           &stack0x000009d0,0);
              }
            }
            else {
              OVROverlay_GetCurrentLayerDesc_m91821535540B4DE656CCAA164A85091BC5AA3B8F
                        (in_stack_000000b0[0x3b]);
              memcpy(&stack0x00000954,&stack0x000008d8,0x7c);
              pvVar7 = (void *)(unaff_x29 + -0xc0);
              memcpy(pvVar7,&stack0x00000954,0x7c);
              memcpy(&stack0x0000085c,pvVar7,0x7c);
              *(undefined4 *)(in_stack_000000b8 + 0x8c) = *(undefined4 *)(in_stack_000000b8 + 0xa8);
              uStack0000000000000094 = 1;
              *(bool *)(unaff_x29 + -0xc1) = *(int *)(in_stack_000000b8 + 0x8c) == 2;
              *(long *)(in_stack_000000b8 + 0x84) = in_stack_000000b0[0x3b] + 0x130;
              *(long *)(in_stack_000000b8 + 0x7c) = *(long *)(in_stack_000000b8 + 0x84) + 8;
              memcpy(&stack0x000007cc,pvVar7,0x7c);
              in_stack_000000c0[0x67] = *(undefined8 *)(in_stack_000000b8 + 8);
              il2cpp_codegen_runtime_class_init_inline
                        (*(Il2CppClass **)
                          Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass11_0_<CreatePixelValidationChannels>b__1__
                        );
              uVar8 = *(undefined8 *)(in_stack_000000b8 + 0x7c);
              in_stack_000000c0[0x65] = in_stack_000000c0[0x67];
              bVar4 = Sizei_Equals_mCD498318CBD1F49F2CA7C33ACF59A2A5B70FCD17
                                (uVar8,in_stack_000000c0[0x65],0);
              if ((bVar4 & (byte)uStack0000000000000094 & 1) == 0) {
                uVar10 = OVROverlay_get_layerId_mA7DC748DC6428FC5D81249F457EE93C790B254D2_inline
                                   ((OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *)
                                    in_stack_000000b0[0x3b],(MethodInfo *)0x0);
                *(undefined4 *)((long)in_stack_000000c0 + 0x324) = uVar10;
                *(uint *)((long)in_stack_000000b0 + 0x10c) =
                     (uint)(0 < *(int *)((long)in_stack_000000c0 + 0x324));
              }
              else {
                *(undefined4 *)((long)in_stack_000000b0 + 0x10c) = 0;
              }
              *(undefined4 *)(in_stack_000000c0 + 100) =
                   *(undefined4 *)(in_stack_000000b0[0x3b] + 0xec);
              il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000e0);
              bVar4 = OVROverlay_NeedsTexturesForShape_m7F193B7A4CDE200B3DBF3AF44CD30ADB43AD947D
                                (*(undefined4 *)(in_stack_000000c0 + 100));
              uStack0000000000000064 = 1;
              *(byte *)(unaff_x29 + -0xc2) = bVar4 & 1;
              *(undefined4 *)(in_stack_000000c0 + 99) =
                   *(undefined4 *)(in_stack_000000b0[0x3b] + 0xf0);
              bVar5 = OVROverlay_NeedsTexturesForShape_m7F193B7A4CDE200B3DBF3AF44CD30ADB43AD947D
                                (*(undefined4 *)(in_stack_000000c0 + 99),0);
              bVar4 = (byte)uStack0000000000000064;
              *(byte *)(unaff_x29 + -0xc3) =
                   (bVar5 & bVar4 & 1) != (*(byte *)(unaff_x29 + -0xc2) & bVar4 & 1) & bVar4;
              if (*(int *)((long)in_stack_000000b0 + 0x10c) != 0 ||
                  (*(byte *)(unaff_x29 + -0xc3) & bVar4 & 1) != 0) {
                OVROverlay_DestroyLayerTextures_mC2EB8CF6BEE55E844E411F82DBDD07B844170672
                          (in_stack_000000b0[0x3b]);
                OVROverlay_DestroyLayer_mCABEA927EFDFE37F86EF9CF10174A73F188A1A25
                          (in_stack_000000b0[0x3b],0);
              }
              pvVar7 = (void *)(unaff_x29 + -0xc0);
              memcpy(&stack0x00000720,pvVar7,0x7c);
              *(undefined4 *)((long)in_stack_000000c0 + 0x294) =
                   *(undefined4 *)(in_stack_000000c0 + 0x55);
              memcpy(&stack0x000006a0,pvVar7,0x7c);
              *(undefined4 *)((long)in_stack_000000c0 + 0x214) =
                   *(undefined4 *)((long)in_stack_000000c0 + 0x22c);
              memcpy(&stack0x00000620,pvVar7,0x7c);
              *(undefined4 *)((long)in_stack_000000c0 + 0x194) =
                   *(undefined4 *)(in_stack_000000c0 + 0x36);
              memcpy(&stack0x000005a0,pvVar7,0x7c);
              *(undefined4 *)((long)in_stack_000000c0 + 0x114) =
                   *(undefined4 *)((long)in_stack_000000c0 + 0x134);
              memcpy(&stack0x00000520,pvVar7,0x7c);
              in_stack_000000c0[0x12] = in_stack_000000c0[0x14];
              memcpy(&stack0x0000049c,pvVar7,0x7c);
              *(undefined4 *)(in_stack_000000c0 + 2) =
                   *(undefined4 *)((long)in_stack_000000c0 + 0x14);
              uVar8 = in_stack_000000b0[0x3b];
              *in_stack_000000c0 = in_stack_000000c0[0x12];
              bVar4 = OVROverlay_CreateLayer_mC0E0B6F846A16A366032C5C66227138D3688693D
                                (uVar8,*(undefined4 *)((long)in_stack_000000c0 + 0x294),
                                 *(undefined4 *)((long)in_stack_000000c0 + 0x214),
                                 *(undefined4 *)((long)in_stack_000000c0 + 0x194),
                                 *(undefined4 *)((long)in_stack_000000c0 + 0x114),*in_stack_000000c0
                                 ,*(undefined4 *)(in_stack_000000c0 + 2),0);
              *(byte *)(unaff_x29 + -0xc4) = bVar4 & 1;
              *(undefined4 *)(in_stack_000000c8 + 0x110) =
                   *(undefined4 *)(in_stack_000000b0[0x3b] + 0x1b0);
              if (*(int *)(in_stack_000000c8 + 0x110) != -1) {
                uVar10 = OVROverlay_get_layerId_mA7DC748DC6428FC5D81249F457EE93C790B254D2_inline
                                   ((OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *)
                                    in_stack_000000b0[0x3b],(MethodInfo *)0x0);
                *(undefined4 *)(in_stack_000000c8 + 0x10c) = uVar10;
                if (0 < *(int *)(in_stack_000000c8 + 0x10c)) {
                  if ((*(byte *)(unaff_x29 + -0xc2) & 1) != 0) {
                    memcpy(&stack0x000003f8,(void *)(unaff_x29 + -0xc0),0x7c);
                    *(undefined4 *)(in_stack_000000c8 + 0x80) =
                         *(undefined4 *)(in_stack_000000c8 + 0x94);
                    *(bool *)(unaff_x29 + -0xc6) = 1 < *(int *)(in_stack_000000c8 + 0x80);
                    bVar4 = *(byte *)(unaff_x29 + -0xc4);
                    bVar5 = *(byte *)(unaff_x29 + -0xc6);
                    memcpy(&stack0x00000374,(void *)(unaff_x29 + -0xc0),0x7c);
                    in_stack_000000d0[0x3b] = *(undefined8 *)(in_stack_000000c8 + 8);
                    bVar2 = *(byte *)(unaff_x29 + -0xc1);
                    uVar8 = in_stack_000000b0[0x3b];
                    in_stack_000000d0[0x39] = in_stack_000000d0[0x3b];
                    bVar5 = OVROverlay_CreateLayerTextures_m06511B1901D6E9246E21B5AB859A66C7D44D9842
                                      (uVar8,bVar5 & 1,in_stack_000000d0[0x39],bVar2 & 1,0);
                    *(bool *)(unaff_x29 + -0xc4) = (bVar4 & 1) != 0 || (bVar5 & 1) != 0;
                    if ((*(byte *)(in_stack_000000b0[0x3b] + 0xd3) & 1) == 0) {
                      in_stack_000000d0[0x37] = *(undefined8 *)(in_stack_000000b0[0x3b] + 0x128);
                      NullCheck((void *)in_stack_000000d0[0x37]);
                      puVar9 = (undefined8 *)
                               LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB::
                               GetAddressAt((LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB
                                             *)in_stack_000000d0[0x37],0);
                      in_stack_000000d0[0x36] = *puVar9;
                      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000e8);
                      uVar8 = IsInstClass((Il2CppObject *)in_stack_000000d0[0x36],
                                          *(Il2CppClass **)
                                           Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_Remove__
                                         );
                      bVar4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602
                                        (uVar8,0);
                      if ((bVar4 & 1) != 0) {
                        *(undefined1 *)(in_stack_000000b0[0x3b] + 0x24) = 1;
                      }
                    }
                    bVar4 = OVROverlay_LatchLayerTextures_mE956A0D6D10DDB34531E068F7DC782E1240C0C88
                                      (in_stack_000000b0[0x3b],0);
                    if ((bVar4 & 1) == 0) {
                      return;
                    }
                    *(undefined4 *)(in_stack_000000d0 + 0x35) =
                         *(undefined4 *)(in_stack_000000b0[0x3b] + 0x1c8);
                    *(undefined4 *)((long)in_stack_000000d0 + 0x1a4) =
                         *(undefined4 *)(in_stack_000000b0[0x3b] + 0x1cc);
                    if (*(int *)((long)in_stack_000000d0 + 0x1a4) <
                        *(int *)(in_stack_000000d0 + 0x35)) {
                      *(undefined4 *)(in_stack_000000d0 + 0x34) =
                           *(undefined4 *)(in_stack_000000b0[0x3b] + 0x1c8);
                      *(undefined4 *)((long)in_stack_000000d0 + 0x19c) =
                           *(undefined4 *)(in_stack_000000b0[0x3b] + 0x1ac);
                      iVar1 = *(int *)((long)in_stack_000000d0 + 0x19c);
                      iVar3 = 0;
                      if (iVar1 != 0) {
                        iVar3 = *(int *)(in_stack_000000d0 + 0x34) / iVar1;
                      }
                      *(int *)((long)in_stack_000000b0 + 0x114) =
                           *(int *)(in_stack_000000d0 + 0x34) - iVar3 * iVar1;
                      pvVar7 = (void *)(unaff_x29 + -0xc0);
                      memcpy(&stack0x000002b0,pvVar7,0x7c);
                      *(undefined4 *)((long)in_stack_000000d0 + 0x11c) =
                           *(undefined4 *)(in_stack_000000d0 + 0x26);
                      bVar4 = *(byte *)(unaff_x29 + -0xc1);
                      memcpy(&stack0x0000022c,pvVar7,0x7c);
                      in_stack_000000d0[0x12] = *(undefined8 *)((long)in_stack_000000d0 + 0xa4);
                      memcpy(&stack0x000001a4,pvVar7,0x7c);
                      *(undefined4 *)(in_stack_000000d0 + 2) =
                           *(undefined4 *)(in_stack_000000d0 + 5);
                      *(undefined4 *)((long)in_stack_000000d0 + 0xc) =
                           *(undefined4 *)((long)in_stack_000000b0 + 0x114);
                      uVar8 = in_stack_000000b0[0x3b];
                      *in_stack_000000d0 = in_stack_000000d0[0x12];
                      bVar4 = OVROverlay_PopulateLayer_m7384F18049DABA190D5538233BA69B380554C918
                                        (uVar8,*(undefined4 *)((long)in_stack_000000d0 + 0x11c),
                                         bVar4 & 1,*in_stack_000000d0,
                                         *(undefined4 *)(in_stack_000000d0 + 2),
                                         *(undefined4 *)((long)in_stack_000000d0 + 0xc),0);
                      in_stack_00000198._3_1_ = bVar4 & 1;
                      if ((bVar4 & 1) == 0) {
                        return;
                      }
                    }
                  }
                  uStack000000000000000c = 1;
                  bStack000000000000018f = *(byte *)(unaff_x29 + -0x41) & 1;
                  bStack000000000000018e = *(byte *)(unaff_x29 + -0x42) & 1;
                  bStack000000000000018d = *(byte *)(in_stack_000000b0[0x3b] + 0xe4) & 1;
                  in_stack_00000130 = in_stack_000000b0[0x36];
                  in_stack_00000178 = (undefined4)in_stack_000000b0[0x37];
                  uStack0000000000000144 = *(undefined8 *)(unaff_x29 + -0x1c);
                  uStack000000000000017c = (undefined4)*(undefined8 *)(unaff_x29 + -0x24);
                  in_stack_00000180 =
                       (undefined4)((ulong)*(undefined8 *)(unaff_x29 + -0x24) >> 0x20);
                  in_stack_00000160 = in_stack_000000b0[0x34];
                  in_stack_00000168 = *(undefined4 *)(in_stack_000000b0 + 0x35);
                  uStack000000000000015c = *(undefined4 *)(in_stack_000000b0[0x3b] + 0x1c8);
                  in_stack_00000138 = in_stack_00000178;
                  uStack0000000000000124 = (undefined4)(in_stack_00000160 >> 0x20);
                  uStack000000000000013c = uStack000000000000017c;
                  in_stack_00000140 = in_stack_00000180;
                  in_stack_00000170 = in_stack_00000130;
                  uStack0000000000000184 = uStack0000000000000144;
                  bStack000000000000015b =
                       OVROverlay_SubmitLayer_mA4FDF12219922CA745CBBB7BDA95369AE20D9D3C
                                 (in_stack_00000160 & 0xffffffff,uStack0000000000000124,
                                  in_stack_00000168,in_stack_000000b0[0x3b],bStack000000000000018f,
                                  bStack000000000000018e,bStack000000000000018d,&stack0x00000130,
                                  uStack000000000000015c,0);
                  bStack000000000000011b = (byte)uStack000000000000000c;
                  bStack000000000000015b = bStack000000000000015b & bStack000000000000011b;
                  *(byte *)(unaff_x29 + -0xc5) = bStack000000000000015b & bStack000000000000011b;
                  uStack000000000000011c = *(undefined4 *)(in_stack_000000b0[0x3b] + 0x1c8);
                  *(undefined4 *)(in_stack_000000b0[0x3b] + 0x1cc) = uStack000000000000011c;
                  bStack000000000000011b =
                       *(byte *)(in_stack_000000b0[0x3b] + 0x24) & bStack000000000000011b;
                  if ((bStack000000000000011b & 1) != 0) {
                    uVar10 = il2cpp_codegen_add<int,int>
                                       (*(int *)(in_stack_000000b0[0x3b] + 0x1c8),1);
                    *(undefined4 *)(in_stack_000000b0[0x3b] + 0x1c8) = uVar10;
                  }
                  uVar8 = *(undefined8 *)(in_stack_000000b0[0x3b] + 0x1d0);
                  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000e8);
                  bStack0000000000000107 =
                       Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(uVar8,0);
                  bStack0000000000000107 = bStack0000000000000107 & 1;
                  if (bStack0000000000000107 == 0) {
                    return;
                  }
                  pvVar7 = *(void **)(in_stack_000000b0[0x3b] + 0x1d0);
                  bStack00000000000000f7 = *(byte *)(unaff_x29 + -0xc5) & 1;
                  NullCheck(pvVar7);
                  Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8
                            (pvVar7,(bStack00000000000000f7 & 1) == 0,0);
                  return;
                }
              }
              if ((*(byte *)(unaff_x29 + -0xc4) & 1) != 0) {
                *(undefined4 *)(in_stack_000000c8 + 0x104) =
                     *(undefined4 *)(in_stack_000000b0[0x3b] + 0xec);
                *(undefined4 *)(in_stack_000000b0[0x3b] + 0xf0) =
                     *(undefined4 *)(in_stack_000000c8 + 0x104);
              }
            }
          }
        }
      }
      else {
        il2cpp_codegen_runtime_class_init_inline
                  (*(Il2CppClass **)
                    Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__
                  );
        Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2
                  (*(undefined8 *)
                    Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass5_0_<CreateMaxOverdrawCount>b__0__
                   ,0);
      }
    }
  }
  return;
}


