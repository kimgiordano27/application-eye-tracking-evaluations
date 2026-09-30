/*
FUNCTION_NAME: OVRGrabber$$Start
ENTRY_POINT: 02d3c608
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_18;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRGrabber__Start(void)

{
  byte bVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined8 uVar4;
  long unaff_x29;
  undefined4 uStack000000000000000c;
  uint uStack0000000000000014;
  long in_stack_00000160;
  long in_stack_00000168;
  undefined8 *in_stack_00000188;
  byte bStack00000000000001a7;
  byte bStack00000000000001b7;
  byte bStack00000000000001c7;
  
  *(undefined8 *)(in_stack_00000168 + 0x1c) =
       *(undefined8 *)(*(long *)(in_stack_00000160 + 0x370) + 0x128);
  NullCheck(*(void **)(in_stack_00000168 + 0x1c));
  uVar2 = Camera_get_stereoTargetEye_m4EAC83490BE3B389A5393D72AA5D0830F0476538
                    (*(undefined8 *)(in_stack_00000168 + 0x1c),0);
  *(undefined4 *)(in_stack_00000168 + 0x18) = uVar2;
  if (*(int *)(in_stack_00000168 + 0x18) != 1) {
    *(undefined8 *)(in_stack_00000168 + 0xc) =
         *(undefined8 *)(*(long *)(in_stack_00000160 + 0x370) + 0x128);
    NullCheck(*(void **)(in_stack_00000168 + 0xc));
    Camera_set_stereoTargetEye_mDB97D9BA5BF538F709EBD006B6B59E78603510DD
              (*(undefined8 *)(in_stack_00000168 + 0xc),1,0);
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


