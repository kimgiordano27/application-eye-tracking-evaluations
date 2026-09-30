/*
FUNCTION_NAME: OVRGrabber$$Awake
ENTRY_POINT: 02d3c408
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 84
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_21;ui_or_gameplay_sink_hits_6;functionality_possible_biometrics_hits_1
*/


void OVRGrabber__Awake(long param_1)

{
  byte bVar1;
  int iVar2;
  void *pvVar3;
  long in_x9;
  undefined8 uVar4;
  long unaff_x29;
  undefined4 uStack000000000000000c;
  uint uStack0000000000000014;
  undefined8 in_stack_00000030;
  long in_stack_00000160;
  int *in_stack_00000168;
  undefined8 *in_stack_00000178;
  undefined8 *in_stack_00000188;
  undefined8 *in_stack_00000190;
  undefined8 *in_stack_00000198;
  byte bStack00000000000001a7;
  byte bStack00000000000001b7;
  byte bStack00000000000001c7;
  
  *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)(*(long *)(in_x9 + 0x370) + 0x130);
  NullCheck(*(void **)(param_1 + 0x74));
  Component_set_tag_mAF8B6EC052F8AA67088F1841B57EA37F13D0451E
            (*(undefined8 *)(in_stack_00000168 + 0x1d),*in_stack_00000198,in_stack_00000030);
  *(undefined8 *)(in_stack_00000168 + 0x1b) =
       *(undefined8 *)(*(long *)(in_stack_00000160 + 0x370) + 0x138);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000190);
  bVar1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605
                    (*(undefined8 *)(in_stack_00000168 + 0x1b),0);
  if ((bVar1 & 1) != 0) {
    uVar4 = OVRCameraRig_get_rightEyeAnchor_m5AD100BC9FA1732C9AF150CEC1A0F34F2305840E_inline
                      (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                        (in_stack_00000160 + 0x370),(MethodInfo *)0x0);
    *(undefined8 *)(in_stack_00000168 + 0x17) = uVar4;
    NullCheck(*(void **)(in_stack_00000168 + 0x17));
    uVar4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B
                      (*(undefined8 *)(in_stack_00000168 + 0x17),0);
    *(undefined8 *)(in_stack_00000168 + 0x15) = uVar4;
    NullCheck(*(void **)(in_stack_00000168 + 0x15));
    uVar4 = GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142
                      (*(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)
                        (in_stack_00000168 + 0x15),(MethodInfo *)*in_stack_00000178);
    *(undefined8 *)(in_stack_00000168 + 0x13) = uVar4;
    *(undefined8 *)(*(long *)(in_stack_00000160 + 0x370) + 0x138) =
         *(undefined8 *)(in_stack_00000168 + 0x13);
    Il2CppCodeGenWriteBarrier
              ((void **)(*(long *)(in_stack_00000160 + 0x370) + 0x138),
               *(void **)(in_stack_00000168 + 0x13));
    *(undefined8 *)(in_stack_00000168 + 0x11) =
         *(undefined8 *)(*(long *)(in_stack_00000160 + 0x370) + 0x138);
    NullCheck(*(void **)(in_stack_00000168 + 0x11));
    Component_set_tag_mAF8B6EC052F8AA67088F1841B57EA37F13D0451E
              (*(undefined8 *)(in_stack_00000168 + 0x11),*in_stack_00000198,0);
  }
  *(undefined8 *)(in_stack_00000168 + 0xf) =
       *(undefined8 *)(*(long *)(in_stack_00000160 + 0x370) + 0x128);
  NullCheck(*(void **)(in_stack_00000168 + 0xf));
  Camera_set_stereoTargetEye_mDB97D9BA5BF538F709EBD006B6B59E78603510DD
            (*(undefined8 *)(in_stack_00000168 + 0xf),3);
  *(undefined8 *)(in_stack_00000168 + 0xd) =
       *(undefined8 *)(*(long *)(in_stack_00000160 + 0x370) + 0x130);
  NullCheck(*(void **)(in_stack_00000168 + 0xd));
  Camera_set_stereoTargetEye_mDB97D9BA5BF538F709EBD006B6B59E78603510DD
            (*(undefined8 *)(in_stack_00000168 + 0xd),1,0);
  *(undefined8 *)(in_stack_00000168 + 0xb) =
       *(undefined8 *)(*(long *)(in_stack_00000160 + 0x370) + 0x138);
  NullCheck(*(void **)(in_stack_00000168 + 0xb));
  Camera_set_stereoTargetEye_mDB97D9BA5BF538F709EBD006B6B59E78603510DD
            (*(undefined8 *)(in_stack_00000168 + 0xb),2,0);
  if ((*(byte *)(unaff_x29 + -0x11) & 1) == 0) {
LAB_02d3c680:
    *(undefined8 *)(in_stack_00000168 + 1) =
         *(undefined8 *)(*(long *)(in_stack_00000160 + 0x370) + 0x128);
    NullCheck(*(void **)(in_stack_00000168 + 1));
    iVar2 = Camera_get_stereoTargetEye_m4EAC83490BE3B389A5393D72AA5D0830F0476538
                      (*(undefined8 *)(in_stack_00000168 + 1),0);
    *in_stack_00000168 = iVar2;
    if (*in_stack_00000168 != 3) {
      pvVar3 = *(void **)(*(long *)(in_stack_00000160 + 0x370) + 0x128);
      NullCheck(pvVar3);
      Camera_set_stereoTargetEye_mDB97D9BA5BF538F709EBD006B6B59E78603510DD(pvVar3,3,0);
    }
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000188);
    bVar1 = OVRPlugin_get_EyeTextureArrayEnabled_m16DFC619BF9FAD94EAAA87EDE6F06D22BBED02A9(0);
    if ((bVar1 & 1) != 0) goto LAB_02d3c680;
    *(undefined8 *)(in_stack_00000168 + 7) =
         *(undefined8 *)(*(long *)(in_stack_00000160 + 0x370) + 0x128);
    NullCheck(*(void **)(in_stack_00000168 + 7));
    iVar2 = Camera_get_stereoTargetEye_m4EAC83490BE3B389A5393D72AA5D0830F0476538
                      (*(undefined8 *)(in_stack_00000168 + 7),0);
    in_stack_00000168[6] = iVar2;
    if (in_stack_00000168[6] != 1) {
      *(undefined8 *)(in_stack_00000168 + 3) =
           *(undefined8 *)(*(long *)(in_stack_00000160 + 0x370) + 0x128);
      NullCheck(*(void **)(in_stack_00000168 + 3));
      Camera_set_stereoTargetEye_mDB97D9BA5BF538F709EBD006B6B59E78603510DD
                (*(undefined8 *)(in_stack_00000168 + 3),1,0);
    }
  }
  if ((*(byte *)(*(long *)(in_stack_00000160 + 0x370) + 0xaa) & 1) != 0) {
    pvVar3 = *(void **)(*(long *)(in_stack_00000160 + 0x370) + 0x128);
    NullCheck(pvVar3);
    uStack0000000000000014 = 0;
    Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(pvVar3,0);
    pvVar3 = *(void **)(*(long *)(in_stack_00000160 + 0x370) + 0x130);
    NullCheck(pvVar3);
    Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A
              (pvVar3,uStack0000000000000014 & 1,0);
    pvVar3 = *(void **)(*(long *)(in_stack_00000160 + 0x370) + 0x138);
    NullCheck(pvVar3);
    Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A
              (pvVar3,uStack0000000000000014 & 1,0);
    return;
  }
  pvVar3 = *(void **)(*(long *)(in_stack_00000160 + 0x370) + 0x128);
  NullCheck(pvVar3);
  bVar1 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(pvVar3,0);
  if ((bVar1 & 1) != (*(byte *)(*(long *)(in_stack_00000160 + 0x370) + 0xa8) & 1)) {
    pvVar3 = *(void **)(*(long *)(in_stack_00000160 + 0x370) + 0x130);
    NullCheck(pvVar3);
    bVar1 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(pvVar3,0);
    if ((bool)(bVar1 & 1) != ((*(byte *)(*(long *)(in_stack_00000160 + 0x370) + 0xa8) & 1) == 0)) {
      pvVar3 = *(void **)(*(long *)(in_stack_00000160 + 0x370) + 0x138);
      NullCheck(pvVar3);
      bVar1 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(pvVar3,0);
      if ((*(byte *)(*(long *)(in_stack_00000160 + 0x370) + 0xa8) & 1) == 0) {
        *(byte *)(unaff_x29 + -0x19) = bVar1 & 1;
        *(undefined4 *)(in_stack_00000160 + 0x358) = 1;
        *(byte *)(unaff_x29 + -0x21) = *(byte *)(unaff_x29 + -0x19) & 1;
      }
      else {
        *(byte *)(unaff_x29 + -0x1a) = bVar1 & 1;
        if ((*(byte *)(unaff_x29 + -0x11) & 1) == 0) {
          *(byte *)(unaff_x29 + -0x1b) = *(byte *)(unaff_x29 + -0x1a) & 1;
          *(undefined4 *)(in_stack_00000160 + 0x358) = 0;
          *(byte *)(unaff_x29 + -0x21) = *(byte *)(unaff_x29 + -0x1b) & 1;
        }
        else {
          *(byte *)(unaff_x29 + -0x1c) = *(byte *)(unaff_x29 + -0x1a) & 1;
          il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000188);
          bVar1 = OVRPlugin_get_EyeTextureArrayEnabled_m16DFC619BF9FAD94EAAA87EDE6F06D22BBED02A9(0);
          *(uint *)(in_stack_00000160 + 0x358) = (uint)((bVar1 & 1) == 0);
          *(byte *)(unaff_x29 + -0x21) = *(byte *)(unaff_x29 + -0x1c) & 1;
        }
      }
      if ((*(byte *)(unaff_x29 + -0x21) & 1) != *(uint *)(in_stack_00000160 + 0x358))
      goto LAB_02d3c9ac;
    }
  }
  *(undefined1 *)(*(long *)(in_stack_00000160 + 0x370) + 0xab) = 1;
LAB_02d3c9ac:
  pvVar3 = *(void **)(*(long *)(in_stack_00000160 + 0x370) + 0x128);
  uStack000000000000000c = 1;
  bStack00000000000001c7 = *(byte *)(*(long *)(in_stack_00000160 + 0x370) + 0xa8) & 1;
  NullCheck(pvVar3);
  Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A
            (pvVar3,(bStack00000000000001c7 & 1) == 0);
  pvVar3 = *(void **)(*(long *)(in_stack_00000160 + 0x370) + 0x130);
  bStack00000000000001b7 =
       *(byte *)(*(long *)(in_stack_00000160 + 0x370) + 0xa8) & (byte)uStack000000000000000c;
  NullCheck(pvVar3);
  Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A
            (pvVar3,bStack00000000000001b7 & 1,0);
  uVar4 = *(undefined8 *)(*(long *)(in_stack_00000160 + 0x370) + 0x138);
  bStack00000000000001a7 =
       *(byte *)(*(long *)(in_stack_00000160 + 0x370) + 0xa8) & (byte)uStack000000000000000c;
  if ((bStack00000000000001a7 & 1) == 0) {
    *(undefined8 *)(in_stack_00000160 + 0x348) = uVar4;
    *(undefined4 *)(in_stack_00000160 + 0x32c) = 0;
    *(undefined8 *)(in_stack_00000160 + 800) = *(undefined8 *)(in_stack_00000160 + 0x348);
  }
  else {
    *(undefined8 *)(in_stack_00000160 + 0x340) = uVar4;
    if ((*(byte *)(unaff_x29 + -0x11) & 1) == 0) {
      *(undefined8 *)(in_stack_00000160 + 0x338) = *(undefined8 *)(in_stack_00000160 + 0x340);
      *(undefined4 *)(in_stack_00000160 + 0x32c) = 1;
      *(undefined8 *)(in_stack_00000160 + 800) = *(undefined8 *)(in_stack_00000160 + 0x338);
    }
    else {
      *(undefined8 *)(in_stack_00000160 + 0x330) = *(undefined8 *)(in_stack_00000160 + 0x340);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000188);
      bVar1 = OVRPlugin_get_EyeTextureArrayEnabled_m16DFC619BF9FAD94EAAA87EDE6F06D22BBED02A9(0);
      *(uint *)(in_stack_00000160 + 0x32c) = (uint)(bVar1 & 1);
      *(undefined8 *)(in_stack_00000160 + 800) = *(undefined8 *)(in_stack_00000160 + 0x330);
    }
  }
  NullCheck(*(void **)(in_stack_00000160 + 800));
  Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A
            (*(undefined8 *)(in_stack_00000160 + 800),*(int *)(in_stack_00000160 + 0x32c) != 0,0);
  return;
}


