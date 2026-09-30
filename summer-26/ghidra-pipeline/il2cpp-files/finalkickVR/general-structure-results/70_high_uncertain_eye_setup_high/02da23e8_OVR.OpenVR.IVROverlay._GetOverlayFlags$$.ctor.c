/*
FUNCTION_NAME: OVR.OpenVR.IVROverlay._GetOverlayFlags$$.ctor
ENTRY_POINT: 02da23e8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_10;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVR_OpenVR_IVROverlay__GetOverlayFlags___ctor(void)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *pOVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x29;
  undefined8 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  byte bStack000000000000003f;
  byte bStack000000000000004f;
  byte bStack000000000000006f;
  byte bStack0000000000000087;
  int iStack00000000000000b4;
  
  if ((*(byte *)(unaff_x29 + -0x99) & 1) == 0) {
    in_stack_00000020[0x1a] = in_stack_00000020[0xb];
    bVar1 = OVRPassthroughLayer_IsUserDefinedAndDoesNotContainSurfaceGeometry_m72365E470BC70020B144CED6A1F58BE0D772E0CD
                      (in_stack_00000020[0x1d],0);
    *(byte *)(unaff_x29 + -0x9a) = bVar1 & 1;
    *(uint *)((long)in_stack_00000020 + 0xcc) = *(byte *)(unaff_x29 + -0x9a) & 1;
    in_stack_00000020[0x18] = in_stack_00000020[0x1a];
  }
  else {
    in_stack_00000020[0x1b] = in_stack_00000020[0xb];
    *(undefined4 *)((long)in_stack_00000020 + 0xcc) = 1;
    in_stack_00000020[0x18] = in_stack_00000020[0x1b];
  }
  NullCheck((void *)in_stack_00000020[0x18]);
  *(bool *)(in_stack_00000020[0x18] + 0xd2) = *(int *)((long)in_stack_00000020 + 0xcc) != 0;
  in_stack_00000020[9] = *(undefined8 *)(in_stack_00000020[0x1d] + 0xd0);
  *(byte *)(unaff_x29 + -0xa9) = *(byte *)(in_stack_00000020[0x1d] + 0x2d) & 1;
  NullCheck((void *)in_stack_00000020[9]);
  *(byte *)(in_stack_00000020[9] + 0xad) = *(byte *)(unaff_x29 + -0xa9) & 1;
  in_stack_00000020[7] = *(undefined8 *)(in_stack_00000020[0x1d] + 0xd0);
  uVar4 = *(undefined8 *)(in_stack_00000020[0x1d] + 0x30);
  in_stack_00000020[5] = *(undefined8 *)(in_stack_00000020[0x1d] + 0x38);
  in_stack_00000020[4] = uVar4;
  NullCheck((void *)in_stack_00000020[7]);
  lVar7 = in_stack_00000020[7];
  uVar4 = in_stack_00000020[4];
  *(undefined8 *)(lVar7 + 0xb8) = in_stack_00000020[5];
  *(undefined8 *)(lVar7 + 0xb0) = uVar4;
  in_stack_00000020[3] = *(undefined8 *)(in_stack_00000020[0x1d] + 0xd0);
  uVar4 = *(undefined8 *)(in_stack_00000020[0x1d] + 0x40);
  in_stack_00000020[1] = *(undefined8 *)(in_stack_00000020[0x1d] + 0x48);
  *in_stack_00000020 = uVar4;
                    /* try { // try from 02da2504 to 02ea255b has its CatchHandler @ 02da2578 */
  NullCheck((void *)in_stack_00000020[3]);
  lVar7 = in_stack_00000020[3];
  uVar4 = *in_stack_00000020;
  *(undefined8 *)(lVar7 + 200) = in_stack_00000020[1];
  *(undefined8 *)(lVar7 + 0xc0) = uVar4;
  pvVar5 = *(void **)(in_stack_00000020[0x1d] + 0xd0);
  NullCheck(pvVar5);
  iStack00000000000000b4 = *(int *)((long)pvVar5 + 0xec);
  iVar2 = OVRPassthroughLayer_get_overlayShape_mBE7B3DAAB0F23246C5ED2A3F9E4FD3A0C6C120B7
                    (in_stack_00000020[0x1d],0);
  if (iStack00000000000000b4 != iVar2) {
    pOVar6 = *(OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D **)
              (in_stack_00000020[0x1d] + 0xd0);
    NullCheck(pOVar6);
    iVar2 = OVROverlay_get_layerId_mA7DC748DC6428FC5D81249F457EE93C790B254D2_inline
                      (pOVar6,(MethodInfo *)0x0);
    if (0 < iVar2) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000028);
      Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
                (*(undefined8 *)
                  Method_UnityEngine_InputSystem_Layouts_InputControlLayout_Collection_<GetBaseLayouts>d__24_System_Collections_IEnumerator_Reset__
                 ,0);
    }
    if (*(int *)(in_stack_00000020[0x1d] + 0x20) == 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000028);
      Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
                (*(undefined8 *)
                  Method_UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_ControlBuilder_WithUsages__
                );
      OVRPassthroughLayer_DestroySurfaceGeometries_mE9931884A6CBBBD8E058F382F951ACF92B4B1C68
                (in_stack_00000020[0x1d],0,0);
    }
    pvVar5 = *(void **)(in_stack_00000020[0x1d] + 0xd0);
    uVar3 = OVRPassthroughLayer_get_overlayShape_mBE7B3DAAB0F23246C5ED2A3F9E4FD3A0C6C120B7
                      (in_stack_00000020[0x1d],0);
    NullCheck(pvVar5);
    *(undefined4 *)((long)pvVar5 + 0xec) = uVar3;
  }
  pvVar5 = *(void **)(in_stack_00000020[0x1d] + 0xd0);
  NullCheck(pvVar5);
  bStack0000000000000087 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(pvVar5);
  bStack0000000000000087 = bStack0000000000000087 & 1;
  uVar8 = *(undefined8 *)(in_stack_00000020[0x1d] + 0xd0);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000030);
  uVar4 = OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                    ((MethodInfo *)0x0);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
  bStack000000000000006f = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar4,0);
  bStack000000000000006f = bStack000000000000006f & 1;
  if (bStack000000000000006f == 0) {
    in_stack_00000020[0x17] = uVar8;
    *(byte *)(unaff_x29 + -0x39) = bStack0000000000000087 & 1;
  }
  else {
    in_stack_00000020[0x15] = uVar8;
    *(byte *)(unaff_x29 + -0x49) = bStack0000000000000087 & 1;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000030);
    pvVar5 = (void *)OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                               ((MethodInfo *)0x0);
    NullCheck(pvVar5);
    if ((*(byte *)((long)pvVar5 + 0x101) & 1) != 0) {
      in_stack_00000020[0x13] = in_stack_00000020[0x15];
      *(byte *)(unaff_x29 + -0x59) = *(byte *)(unaff_x29 + -0x49) & 1;
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000030);
      bVar1 = OVRManager_IsInsightPassthroughInitialized_m7752AC4A37C80B772E4E66527F3401A6D31D1A1B
                        (0);
      *(uint *)(in_stack_00000020 + 0x12) = (uint)(bVar1 & 1);
      in_stack_00000020[0x11] = in_stack_00000020[0x13];
      *(byte *)(unaff_x29 + -0x69) = *(byte *)(unaff_x29 + -0x59) & 1;
      goto LAB_02da27e0;
    }
    in_stack_00000020[0x17] = in_stack_00000020[0x15];
    *(byte *)(unaff_x29 + -0x39) = *(byte *)(unaff_x29 + -0x49) & 1;
  }
  *(undefined4 *)(in_stack_00000020 + 0x12) = 0;
  in_stack_00000020[0x11] = in_stack_00000020[0x17];
  *(byte *)(unaff_x29 + -0x69) = *(byte *)(unaff_x29 + -0x39) & 1;
LAB_02da27e0:
  NullCheck((void *)in_stack_00000020[0x11]);
  Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A
            (in_stack_00000020[0x11],*(int *)(in_stack_00000020 + 0x12) != 0);
  pvVar5 = *(void **)(in_stack_00000020[0x1d] + 0xd0);
  NullCheck(pvVar5);
  bVar1 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(pvVar5,0);
  bStack000000000000004f = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x69) & 1) != (bVar1 & 1)) {
    pvVar5 = *(void **)(in_stack_00000020[0x1d] + 0xd0);
    NullCheck(pvVar5);
    bStack000000000000003f =
         Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(pvVar5,0);
    bStack000000000000003f = bStack000000000000003f & 1;
    if (bStack000000000000003f == 0) {
      OVRPassthroughLayer_DestroySurfaceGeometries_mE9931884A6CBBBD8E058F382F951ACF92B4B1C68
                (in_stack_00000020[0x1d],1,0);
    }
    else {
      *(undefined1 *)(in_stack_00000020[0x1d] + 0x10c) = 1;
    }
  }
  return;
}


