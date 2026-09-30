/*
FUNCTION_NAME: OVR.OpenVR.IVROverlay._ShowMessageOverlay$$.ctor
ENTRY_POINT: 02da2678
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_8;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVR_OpenVR_IVROverlay__ShowMessageOverlay___ctor(undefined8 *param_1,byte param_2)

{
  byte bVar1;
  undefined8 uVar2;
  void *pvVar3;
  long in_x9;
  byte in_w10;
  long unaff_x29;
  MethodInfo *in_stack_00000010;
  long in_stack_00000020;
  undefined8 *in_stack_00000030;
  byte bStack000000000000003f;
  byte bStack000000000000004f;
  byte bStack000000000000006f;
  undefined8 uStack0000000000000078;
  byte bStack0000000000000087;
  
  bStack0000000000000087 = param_2 & in_w10;
  uStack0000000000000078 = *(undefined8 *)(*(long *)(in_x9 + 0xe8) + 0xd0);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*param_1);
  uVar2 = OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                    (in_stack_00000010);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
  bStack000000000000006f =
       Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar2,in_stack_00000010);
  bStack000000000000006f = bStack000000000000006f & 1;
  if (bStack000000000000006f == 0) {
    *(undefined8 *)(in_stack_00000020 + 0xb8) = uStack0000000000000078;
    *(byte *)(unaff_x29 + -0x39) = bStack0000000000000087 & 1;
  }
  else {
    *(undefined8 *)(in_stack_00000020 + 0xa8) = uStack0000000000000078;
                    /* try { // try from 02da26fc to 02ea2823 has its CatchHandler @ 02da26fc
                       catch() { ... } // from try @ 02da26fc with catch @ 02da26fc
                       catch() { ... } // from try @ 02da287c with catch @ 02da26fc
                       catch() { ... } // from try @ 02da28d0 with catch @ 02da26fc
                       catch() { ... } // from try @ 02da2930 with catch @ 02da26fc */
    *(byte *)(unaff_x29 + -0x49) = bStack0000000000000087 & 1;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000030);
    pvVar3 = (void *)OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                               ((MethodInfo *)0x0);
    NullCheck(pvVar3);
    if ((*(byte *)((long)pvVar3 + 0x101) & 1) != 0) {
      *(undefined8 *)(in_stack_00000020 + 0x98) = *(undefined8 *)(in_stack_00000020 + 0xa8);
      *(byte *)(unaff_x29 + -0x59) = *(byte *)(unaff_x29 + -0x49) & 1;
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000030);
      bVar1 = OVRManager_IsInsightPassthroughInitialized_m7752AC4A37C80B772E4E66527F3401A6D31D1A1B
                        (0);
      *(uint *)(in_stack_00000020 + 0x90) = (uint)(bVar1 & 1);
      *(undefined8 *)(in_stack_00000020 + 0x88) = *(undefined8 *)(in_stack_00000020 + 0x98);
      *(byte *)(unaff_x29 + -0x69) = *(byte *)(unaff_x29 + -0x59) & 1;
      goto LAB_02da27e0;
    }
    *(undefined8 *)(in_stack_00000020 + 0xb8) = *(undefined8 *)(in_stack_00000020 + 0xa8);
    *(byte *)(unaff_x29 + -0x39) = *(byte *)(unaff_x29 + -0x49) & 1;
  }
  *(undefined4 *)(in_stack_00000020 + 0x90) = 0;
  *(undefined8 *)(in_stack_00000020 + 0x88) = *(undefined8 *)(in_stack_00000020 + 0xb8);
  *(byte *)(unaff_x29 + -0x69) = *(byte *)(unaff_x29 + -0x39) & 1;
LAB_02da27e0:
  NullCheck(*(void **)(in_stack_00000020 + 0x88));
  Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A
            (*(undefined8 *)(in_stack_00000020 + 0x88),*(int *)(in_stack_00000020 + 0x90) != 0);
  pvVar3 = *(void **)(*(long *)(in_stack_00000020 + 0xe8) + 0xd0);
  NullCheck(pvVar3);
  bVar1 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(pvVar3,0);
  bStack000000000000004f = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x69) & 1) != (bVar1 & 1)) {
    pvVar3 = *(void **)(*(long *)(in_stack_00000020 + 0xe8) + 0xd0);
    NullCheck(pvVar3);
    bStack000000000000003f =
         Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(pvVar3,0);
    bStack000000000000003f = bStack000000000000003f & 1;
    if (bStack000000000000003f == 0) {
      OVRPassthroughLayer_DestroySurfaceGeometries_mE9931884A6CBBBD8E058F382F951ACF92B4B1C68
                (*(undefined8 *)(in_stack_00000020 + 0xe8),1,0);
    }
    else {
      *(undefined1 *)(*(long *)(in_stack_00000020 + 0xe8) + 0x10c) = 1;
    }
  }
  return;
}


