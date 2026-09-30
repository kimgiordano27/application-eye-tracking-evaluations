/*
FUNCTION_NAME: OVR.OpenVR.IVROverlay._GetOverlayFlags$$BeginInvoke
ENTRY_POINT: 02da2574
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_10;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVR_OpenVR_IVROverlay__GetOverlayFlags__BeginInvoke(void *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 uVar4;
  long unaff_x29;
  long in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  byte bStack000000000000003f;
  byte bStack000000000000004f;
  byte bStack000000000000006f;
  byte bStack0000000000000087;
  undefined4 uStack0000000000000094;
  int iStack00000000000000a4;
  OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *in_stack_000000a8;
  
  NullCheck(param_1);
                    /* catch(type#1 @ 0474a728) { ... } // from try @ 02da2504 with catch @ 02da2578
                        */
  iStack00000000000000a4 =
       OVROverlay_get_layerId_mA7DC748DC6428FC5D81249F457EE93C790B254D2_inline
                 (in_stack_000000a8,(MethodInfo *)0x0);
  if (0 < iStack00000000000000a4) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000028);
                    /* try { // try from 02da25a4 to 02ea25ab has its CatchHandler @ 02da25e0 */
                    /* try { // try from 02da25ac to 02ea25af has its CatchHandler @ 02da25f8 */
                    /* try { // try from 02da25b0 to 02ea25ef has its CatchHandler @ 02da23dc */
    Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
              (*(undefined8 *)
                Method_UnityEngine_InputSystem_Layouts_InputControlLayout_Collection_<GetBaseLayouts>d__24_System_Collections_IEnumerator_Reset__
               ,0);
  }
  if (*(int *)(*(long *)(in_stack_00000020 + 0xe8) + 0x20) == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000028);
                    /* catch() { ... } // from try @ 02da25a4 with catch @ 02da25e0 */
                    /* try { // try from 02da25f0 to 02ea260f has its CatchHandler @ 02da2618 */
    Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
              (*(undefined8 *)
                Method_UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_ControlBuilder_WithUsages__
              );
                    /* catch() { ... } // from try @ 02da25ac with catch @ 02da25f8 */
    OVRPassthroughLayer_DestroySurfaceGeometries_mE9931884A6CBBBD8E058F382F951ACF92B4B1C68
              (*(undefined8 *)(in_stack_00000020 + 0xe8),0,0);
  }
                    /* try { // try from 02da2610 to 02ea261b has its CatchHandler @ 02da23dc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02da25f0 with catch @ 02da2618
                        */
  pvVar3 = *(void **)(*(long *)(in_stack_00000020 + 0xe8) + 0xd0);
  uStack0000000000000094 =
       OVRPassthroughLayer_get_overlayShape_mBE7B3DAAB0F23246C5ED2A3F9E4FD3A0C6C120B7
                 (*(undefined8 *)(in_stack_00000020 + 0xe8),0);
  NullCheck(pvVar3);
  *(undefined4 *)((long)pvVar3 + 0xec) = uStack0000000000000094;
  pvVar3 = *(void **)(*(long *)(in_stack_00000020 + 0xe8) + 0xd0);
  NullCheck(pvVar3);
  bStack0000000000000087 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(pvVar3);
  bStack0000000000000087 = bStack0000000000000087 & 1;
  uVar4 = *(undefined8 *)(*(long *)(in_stack_00000020 + 0xe8) + 0xd0);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000030);
  uVar2 = OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                    ((MethodInfo *)0x0);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
  bStack000000000000006f = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar2,0);
  bStack000000000000006f = bStack000000000000006f & 1;
  if (bStack000000000000006f == 0) {
    *(undefined8 *)(in_stack_00000020 + 0xb8) = uVar4;
    *(byte *)(unaff_x29 + -0x39) = bStack0000000000000087 & 1;
  }
  else {
    *(undefined8 *)(in_stack_00000020 + 0xa8) = uVar4;
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


