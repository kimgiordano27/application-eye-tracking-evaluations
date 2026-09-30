/*
FUNCTION_NAME: OVRPlugin_GetRenderModelProperties_m2127B2E834AAB019EAA607A12F06B7F51875D7C1
ENTRY_POINT: 02dc67a0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool OVRPlugin_GetRenderModelProperties_m2127B2E834AAB019EAA607A12F06B7F51875D7C1
               (undefined8 param_1,void **param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 *pBVar5;
  void **ppvVar6;
  byte bVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  Il2CppObject *pIVar10;
  void *pvVar11;
  undefined4 uStack_15c;
  undefined4 local_130;
  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 *local_60;
  void *pvStack_58;
  undefined8 local_50;
  int local_44;
  undefined8 local_40;
  void **local_38;
  undefined8 local_30;
  
  puVar4 = 
  Field_<PrivateImplementationDetails>_CF97ADEEDB59E05BFD73A2B4C2A8885708C4F4F70C84C64B27120E72AB733B72
  ;
  puVar3 = 
  Field_<PrivateImplementationDetails>_B3D3D4A10F76661CE83041738FC598097C7B3E13EC83565F57291BBA1647DE37
  ;
  puVar2 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  local_40 = param_3;
  local_38 = param_2;
  local_30 = param_1;
  if ((OVRPlugin_GetRenderModelProperties_m2127B2E834AAB019EAA607A12F06B7F51875D7C1::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_B3D3D4A10F76661CE83041738FC598097C7B3E13EC83565F57291BBA1647DE37
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    OVRPlugin_GetRenderModelProperties_m2127B2E834AAB019EAA607A12F06B7F51875D7C1::
    s_Il2CppMethodInitialized = 1;
  }
  local_44 = 0;
  local_60 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 *)0x0;
  pvStack_58 = (void *)0x0;
  local_50 = 0;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  uVar8 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
  puVar9 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
  bVar7 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar8,*puVar9,0);
  uVar8 = local_30;
  if ((bVar7 & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    uVar8 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    puVar9 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    bVar7 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar8,*puVar9,0)
    ;
    uVar8 = local_30;
    if ((bVar7 & 1) == 0) {
      return false;
    }
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    local_44 = OVRP_1_68_0_ovrp_GetRenderModelProperties_m90C3DD1985667E4E48184E5602CA7232E1E5689E
                         (uVar8,&local_60,0);
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
    local_44 = OVRP_1_74_0_ovrp_GetRenderModelProperties2_m5130D55440A03F23FF5F6B38634EF551D39C3F1E
                         (uVar8,2,&local_60,0);
  }
  ppvVar6 = local_38;
  bVar1 = local_44 == 0;
  if (bVar1) {
    pIVar10 = (Il2CppObject *)Encoding_get_Default_mB48FC92A61D1153AC33C2C59F01D7266DF7D155C(0);
    pBVar5 = local_60;
    NullCheck(pIVar10);
    pvVar11 = (void *)VirtualFuncInvoker1<String_t*,ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*>
                      ::Invoke(0x24,pIVar10,pBVar5);
    *ppvVar6 = pvVar11;
    Il2CppCodeGenWriteBarrier(ppvVar6,pvVar11);
    local_38[1] = pvStack_58;
    local_130 = (undefined4)local_50;
    *(undefined4 *)(local_38 + 2) = local_130;
    uStack_15c = (undefined4)((ulong)local_50 >> 0x20);
    *(undefined4 *)((long)local_38 + 0x14) = uStack_15c;
  }
  return bVar1;
}


