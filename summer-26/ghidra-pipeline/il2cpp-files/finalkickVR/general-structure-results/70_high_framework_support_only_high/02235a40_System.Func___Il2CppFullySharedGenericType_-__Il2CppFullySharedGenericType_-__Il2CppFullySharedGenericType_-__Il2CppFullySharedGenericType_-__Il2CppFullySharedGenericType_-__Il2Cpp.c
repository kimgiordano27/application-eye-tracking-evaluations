/*
FUNCTION_NAME: System.Func<__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericType>$$.ctor
ENTRY_POINT: 02235a40
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_3;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8
System_Func<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>___ctor
          (void)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  __58 *extraout_x1;
  undefined8 *puVar4;
  undefined8 *unaff_x19;
  long unaff_x29;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *(byte *)((long)unaff_x19 + 0x224) = *(byte *)(unaff_x29 + -0x74) & 1;
  if ((*(byte *)((long)unaff_x19 + 0x224) & 1) == 0) {
    *(undefined8 *)(unaff_x29 + -0x58) = 0;
  }
  else {
    *(undefined8 *)(unaff_x29 + -0x80) = 0;
    uVar3 = *(undefined8 *)(unaff_x29 + -0x70);
    unaff_x19[0x43] = *(undefined8 *)(unaff_x29 + -0x68);
    unaff_x19[0x42] = uVar3;
    unaff_x19[0x41] = unaff_x19[0x43];
    NullCheck((void *)unaff_x19[0x41]);
    List_1_GetEnumerator_mFBE07E24F0C0A5A84ABF31BB319C8FD868DF77DC
              ((List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4 *)unaff_x19[0x41],
               *(MethodInfo **)Method_System_Nullable<OVRPlugin_XrApi>_get_Value__);
    unaff_x19[0x40] = unaff_x19[0x3d];
    unaff_x19[0x3f] = unaff_x19[0x3c];
    unaff_x19[0x3e] = unaff_x19[0x3b];
    uVar5 = unaff_x19[0x3f];
    uVar3 = unaff_x19[0x3e];
    *(undefined8 *)(unaff_x29 + -0x90) = unaff_x19[0x40];
    *(undefined8 *)(unaff_x29 + -0x98) = uVar5;
    *(undefined8 *)(unaff_x29 + -0xa0) = uVar3;
    unaff_x19[0x38] = unaff_x29 + -0xa0;
    il2cpp::utils::
    Finally<VisualTreeAsset_GetUxmlObjects_TisIl2CppFullySharedGenericAny_m9C730BDD6D80B98E4BDA494C66E2CDB0DB9E1210_gshared::__58>
              ((utils *)(unaff_x19 + 0x38),extraout_x1);
    while( true ) {
      uVar2 = Enumerator_MoveNext_m7D2843E190E2E102A9F21E94554F3376F095049E
                        ((Enumerator_t053CCDA3CA9796408752589B0250DBD2E9A7EA3D *)(unaff_x29 + -0xa0)
                         ,*(MethodInfo **)Method_System_Nullable<OVRPlugin_XrApi>__ctor__);
      *(undefined4 *)((long)unaff_x19 + 0xc) = uVar2;
      *(byte *)((long)unaff_x19 + 0x104) = (byte)*(undefined4 *)((long)unaff_x19 + 0xc) & 1;
      if ((*(byte *)((long)unaff_x19 + 0x104) & 1) == 0) break;
      uVar3 = Enumerator_get_Current_m9AF56B1480533ABE6FE3921680B31143579FD245_inline
                        ((Enumerator_t053CCDA3CA9796408752589B0250DBD2E9A7EA3D *)(unaff_x29 + -0xa0)
                         ,*(MethodInfo **)Method_System_Nullable<OVRPlugin_XrApi>_get_HasValue__);
      unaff_x19[0x17] = uVar3;
      unaff_x19[0x37] = unaff_x19[0x17];
      *(undefined8 *)(unaff_x29 + -0xa8) = unaff_x19[0x37];
      unaff_x19[0x34] = *(undefined8 *)(unaff_x29 + -0xa8);
      uVar3 = VisualTreeAsset_GetUxmlObjectFactory_m5E630E3421141777AE53E93EFC74E877227D1461
                        (*(undefined8 *)(unaff_x29 + -0x10),unaff_x19[0x34],0);
      unaff_x19[0x16] = uVar3;
      unaff_x19[0x33] = unaff_x19[0x16];
      *(undefined8 *)(unaff_x29 + -0xb0) = unaff_x19[0x33];
      unaff_x19[0x32] = *(undefined8 *)(unaff_x29 + -0xb0);
      unaff_x19[0x14] = unaff_x19[0x32];
      uVar3 = il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(unaff_x29 + -0x20) + 0x38),0);
      unaff_x19[0x15] = uVar3;
      uVar3 = IsInst((Il2CppObject *)unaff_x19[0x14],(Il2CppClass *)unaff_x19[0x15]);
      unaff_x19[0x13] = uVar3;
      *(undefined8 *)(unaff_x29 + -0xb8) = unaff_x19[0x13];
      unaff_x19[0x31] = *(undefined8 *)(unaff_x29 + -0xb8);
      *(bool *)(unaff_x29 + -0xc4) = unaff_x19[0x31] == 0;
      *(byte *)((long)unaff_x19 + 0x184) = *(byte *)(unaff_x29 + -0xc4) & 1;
      if ((*(byte *)((long)unaff_x19 + 0x184) & 1) == 0) {
        puVar4 = (undefined8 *)unaff_x19[0x1b];
        unaff_x19[0x2f] = *(undefined8 *)(unaff_x29 + -0xb8);
        unaff_x19[0x2e] = *(undefined8 *)(unaff_x29 + -0xa8);
        uVar5 = puVar4[1];
        uVar3 = *puVar4;
        uVar6 = puVar4[2];
        unaff_x19[0x2d] = puVar4[3];
        unaff_x19[0x2c] = uVar6;
        unaff_x19[0x2b] = uVar5;
        unaff_x19[0x2a] = uVar3;
        NullCheck((void *)unaff_x19[0x2f]);
        uVar3 = il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(unaff_x29 + -0x20) + 0x38),0);
        unaff_x19[0x12] = uVar3;
        unaff_x19[0x29] = unaff_x19[0x2d];
        unaff_x19[0x28] = unaff_x19[0x2c];
        unaff_x19[0x27] = unaff_x19[0x2b];
        unaff_x19[0x26] = unaff_x19[0x2a];
        InterfaceActionInvoker3Invoker<Il2CppObject*,CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257,void**>
        ::Invoke(0,unaff_x19[0x12],unaff_x19[0x2f],unaff_x19[0x2e],unaff_x19 + 0x26,
                 *(undefined8 *)(unaff_x29 + -0x30));
        il2cpp_codegen_memcpy
                  (*(void **)(unaff_x29 + -0xc0),*(void **)(unaff_x29 + -0x30),
                   (ulong)*(uint *)(unaff_x29 + -0x24));
        unaff_x19[0x25] = *(undefined8 *)(unaff_x29 + -0x80);
        *(bool *)(unaff_x29 + -200) = unaff_x19[0x25] == 0;
        *(byte *)((long)unaff_x19 + 0x124) = *(byte *)(unaff_x29 + -200) & 1;
        if ((*(byte *)((long)unaff_x19 + 0x124) & 1) == 0) {
          unaff_x19[0x21] = *(undefined8 *)(unaff_x29 + -0x80);
          il2cpp_codegen_memcpy
                    (*(void **)(unaff_x29 + -0x40),*(void **)(unaff_x29 + -0xc0),
                     (ulong)*(uint *)(unaff_x29 + -0x24));
          NullCheck((void *)unaff_x19[0x21]);
          unaff_x19[6] = unaff_x19[0x21];
          uVar3 = il2cpp_rgctx_data_no_init
                            (*(Il2CppRGCTXData **)(*(long *)(unaff_x29 + -0x20) + 0x38),2);
          unaff_x19[7] = uVar3;
          uVar2 = il2cpp_codegen_class_is_value_type((Il2CppClass *)unaff_x19[7]);
          *(undefined4 *)((long)unaff_x19 + 0x2c) = uVar2;
          if ((*(uint *)((long)unaff_x19 + 0x2c) & 1) == 0) {
            unaff_x19[4] = **(undefined8 **)(unaff_x29 + -0x40);
          }
          else {
            unaff_x19[4] = *(undefined8 *)(unaff_x29 + -0x40);
          }
          unaff_x19[2] = unaff_x19[4];
          uVar3 = il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(unaff_x29 + -0x20) + 0x38),5);
          unaff_x19[3] = uVar3;
          List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_inline
                    ((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A *)unaff_x19[6],
                     (void *)unaff_x19[2],(MethodInfo *)unaff_x19[3]);
        }
        else {
          uVar3 = il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(unaff_x29 + -0x20) + 0x38),3);
          unaff_x19[0x11] = uVar3;
          uVar3 = il2cpp_codegen_object_new((Il2CppClass *)unaff_x19[0x11]);
          unaff_x19[0x10] = uVar3;
          unaff_x19[0x23] = unaff_x19[0x10];
          unaff_x19[0xe] = unaff_x19[0x23];
          uVar3 = il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(unaff_x29 + -0x20) + 0x38),4);
          unaff_x19[0xf] = uVar3;
          List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374
                    ((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A *)unaff_x19[0xe],
                     (MethodInfo *)unaff_x19[0xf]);
          unaff_x19[0x22] = unaff_x19[0x23];
          il2cpp_codegen_memcpy
                    (*(void **)(unaff_x29 + -0x38),*(void **)(unaff_x29 + -0xc0),
                     (ulong)*(uint *)(unaff_x29 + -0x24));
          NullCheck((void *)unaff_x19[0x22]);
          unaff_x19[0xc] = unaff_x19[0x22];
          uVar3 = il2cpp_rgctx_data_no_init
                            (*(Il2CppRGCTXData **)(*(long *)(unaff_x29 + -0x20) + 0x38),2);
          unaff_x19[0xd] = uVar3;
          uVar2 = il2cpp_codegen_class_is_value_type((Il2CppClass *)unaff_x19[0xd]);
          *(undefined4 *)((long)unaff_x19 + 0x5c) = uVar2;
          if ((*(uint *)((long)unaff_x19 + 0x5c) & 1) == 0) {
            unaff_x19[10] = **(undefined8 **)(unaff_x29 + -0x38);
          }
          else {
            unaff_x19[10] = *(undefined8 *)(unaff_x29 + -0x38);
          }
          unaff_x19[8] = unaff_x19[10];
          uVar3 = il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(unaff_x29 + -0x20) + 0x38),5);
          unaff_x19[9] = uVar3;
          List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_inline
                    ((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A *)unaff_x19[0xc],
                     (void *)unaff_x19[8],(MethodInfo *)unaff_x19[9]);
          *(undefined8 *)(unaff_x29 + -0x80) = unaff_x19[0x22];
        }
      }
    }
    *(undefined4 *)((long)unaff_x19 + 0xf4) = 0xb;
    il2cpp::utils::
    FinallyHelper<VisualTreeAsset_GetUxmlObjects_TisIl2CppFullySharedGenericAny_m9C730BDD6D80B98E4BDA494C66E2CDB0DB9E1210_gshared::$_58,false>
    ::~FinallyHelper((FinallyHelper<VisualTreeAsset_GetUxmlObjects_TisIl2CppFullySharedGenericAny_m9C730BDD6D80B98E4BDA494C66E2CDB0DB9E1210_gshared::__58,false>
                      *)(unaff_x19 + 0x39));
    unaff_x19[0x1d] = *(undefined8 *)(unaff_x29 + -0x80);
    *(undefined8 *)(unaff_x29 + -0x58) = unaff_x19[0x1d];
  }
  unaff_x19[0x1c] = *(undefined8 *)(unaff_x29 + -0x58);
  *unaff_x19 = unaff_x19[0x1c];
  lVar1 = tpidr_el0;
  lVar1 = *(long *)(lVar1 + 0x28) - *(long *)(unaff_x29 + -8);
  if (lVar1 == 0) {
    return *unaff_x19;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1);
}


