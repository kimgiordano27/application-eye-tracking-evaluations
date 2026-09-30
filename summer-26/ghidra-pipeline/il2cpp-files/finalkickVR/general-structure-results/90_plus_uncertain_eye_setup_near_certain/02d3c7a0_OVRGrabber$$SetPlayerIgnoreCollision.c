/*
FUNCTION_NAME: OVRGrabber$$SetPlayerIgnoreCollision
ENTRY_POINT: 02d3c7a0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_15;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRGrabber__SetPlayerIgnoreCollision(long param_1)

{
  byte bVar1;
  void *pvVar2;
  undefined8 uVar3;
  long unaff_x29;
  undefined4 uStack000000000000000c;
  long in_stack_00000160;
  undefined8 *in_stack_00000188;
  byte bStack00000000000001a7;
  byte bStack00000000000001b7;
  byte bStack00000000000001c7;
  
  pvVar2 = *(void **)(*(long *)(param_1 + 0x370) + 0x128);
  NullCheck(pvVar2);
  bVar1 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(pvVar2,0);
  if ((bVar1 & 1) != (*(byte *)(*(long *)(in_stack_00000160 + 0x370) + 0xa8) & 1)) {
    pvVar2 = *(void **)(*(long *)(in_stack_00000160 + 0x370) + 0x130);
    NullCheck(pvVar2);
    bVar1 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(pvVar2,0);
    if ((bool)(bVar1 & 1) != ((*(byte *)(*(long *)(in_stack_00000160 + 0x370) + 0xa8) & 1) == 0)) {
      pvVar2 = *(void **)(*(long *)(in_stack_00000160 + 0x370) + 0x138);
      NullCheck(pvVar2);
      bVar1 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(pvVar2,0);
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
  pvVar2 = *(void **)(*(long *)(in_stack_00000160 + 0x370) + 0x128);
  uStack000000000000000c = 1;
  bStack00000000000001c7 = *(byte *)(*(long *)(in_stack_00000160 + 0x370) + 0xa8) & 1;
  NullCheck(pvVar2);
  Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A
            (pvVar2,(bStack00000000000001c7 & 1) == 0);
  pvVar2 = *(void **)(*(long *)(in_stack_00000160 + 0x370) + 0x130);
  bStack00000000000001b7 =
       *(byte *)(*(long *)(in_stack_00000160 + 0x370) + 0xa8) & (byte)uStack000000000000000c;
  NullCheck(pvVar2);
  Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A
            (pvVar2,bStack00000000000001b7 & 1,0);
  uVar3 = *(undefined8 *)(*(long *)(in_stack_00000160 + 0x370) + 0x138);
  bStack00000000000001a7 =
       *(byte *)(*(long *)(in_stack_00000160 + 0x370) + 0xa8) & (byte)uStack000000000000000c;
  if ((bStack00000000000001a7 & 1) == 0) {
    *(undefined8 *)(in_stack_00000160 + 0x348) = uVar3;
    *(undefined4 *)(in_stack_00000160 + 0x32c) = 0;
    *(undefined8 *)(in_stack_00000160 + 800) = *(undefined8 *)(in_stack_00000160 + 0x348);
  }
  else {
    *(undefined8 *)(in_stack_00000160 + 0x340) = uVar3;
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


