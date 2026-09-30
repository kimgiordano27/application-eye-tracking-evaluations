/*
FUNCTION_NAME: OVRPlugin_GetEyeGazesState_m3567E7530F9FEA062FA81DC5F7809FBD337D6F99
ENTRY_POINT: 02dc0484
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 97
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_11;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined1
OVRPlugin_GetEyeGazesState_m3567E7530F9FEA062FA81DC5F7809FBD337D6F99
          (int param_1,undefined4 param_2,void **param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  EyeGazeStateU5BU5D_t8F18F753F2C427FE1DE7C88ABF6910A7E73793FC *pEVar3;
  undefined4 uVar4;
  int iVar5;
  void **ppvVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined1 auStack_148 [36];
  undefined1 auStack_124 [36];
  EyeGazeStateU5BU5D_t8F18F753F2C427FE1DE7C88ABF6910A7E73793FC *local_100;
  void **local_f8;
  undefined1 auStack_f0 [36];
  undefined1 auStack_cc [36];
  EyeGazeStateU5BU5D_t8F18F753F2C427FE1DE7C88ABF6910A7E73793FC *local_a8;
  void **local_a0;
  void *local_98;
  void **local_90;
  void *local_88;
  void **local_80;
  void *local_78;
  void **local_70;
  int local_68;
  undefined4 local_64;
  int local_60;
  byte local_59;
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  int local_44;
  undefined8 local_40;
  void **local_38;
  undefined4 local_2c;
  int local_28;
  
  puVar2 = Method_Oculus_Interaction_PoseDetection_Sequence_DebugModel_<>c_<GetChildren>b__0_1__;
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  local_40 = param_4;
  local_38 = param_3;
  local_2c = param_2;
  local_28 = param_1;
  if ((OVRPlugin_GetEyeGazesState_m3567E7530F9FEA062FA81DC5F7809FBD337D6F99::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_2F60A552A1E8068E1716EF882A4FAA8F6F70C4D7E0BEBCD31BC64C432CCE80B0
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_18B4D7A705116EFC8816DC695463BC74F9F861491D844C0AC4AEB6363EBB2200
              );
    OVRPlugin_GetEyeGazesState_m3567E7530F9FEA062FA81DC5F7809FBD337D6F99::s_Il2CppMethodInitialized
         = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  local_44 = OVRPlugin_get_nativeXrApi_m32634338020C30D956A1579A7745C94BD77279F3(0);
  if ((local_44 == 3) && (local_48 = local_28, local_28 == 0)) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__)
    ;
    Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
              (*(undefined8 *)
                Field_<PrivateImplementationDetails>_18B4D7A705116EFC8816DC695463BC74F9F861491D844C0AC4AEB6363EBB2200
               ,0);
    local_28 = -1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  local_50 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  puVar7 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  local_58 = *puVar7;
  local_59 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                       (local_50,local_58,0);
  local_59 = local_59 & 1;
  if (local_59 == 0) {
    return 0;
  }
  local_60 = local_28;
  local_64 = local_2c;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  iVar5 = local_60;
  uVar4 = local_64;
  lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  local_68 = OVRP_1_78_0_ovrp_GetEyeGazesState_m10C5916A172DD99E824FA1A61777089AC4ECDC69
                       (iVar5,uVar4,lVar8 + 0x1008,0);
  if (local_68 != 0) {
    return 0;
  }
  local_70 = local_38;
  local_78 = *local_38;
  if (local_78 != (void *)0x0) {
    local_80 = local_38;
    local_88 = *local_38;
    NullCheck(local_88);
    if ((int)*(undefined8 *)((long)local_88 + 0x18) == 2) goto LAB_02dc06c8;
  }
  local_90 = local_38;
  local_98 = (void *)SZArrayNew(*(Il2CppClass **)
                                 Field_<PrivateImplementationDetails>_2F60A552A1E8068E1716EF882A4FAA8F6F70C4D7E0BEBCD31BC64C432CCE80B0
                                ,2);
  *local_90 = local_98;
  Il2CppCodeGenWriteBarrier(local_90,local_98);
LAB_02dc06c8:
  local_a0 = local_38;
  local_a8 = *local_38;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  memcpy(auStack_cc,(void *)(lVar8 + 0x1008),0x24);
  NullCheck(local_a8);
  pEVar3 = local_a8;
  memcpy(auStack_f0,auStack_cc,0x24);
  EyeGazeStateU5BU5D_t8F18F753F2C427FE1DE7C88ABF6910A7E73793FC::SetAt(pEVar3,0,auStack_f0);
  local_f8 = local_38;
  local_100 = *local_38;
  lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  memcpy(auStack_124,(void *)(lVar8 + 0x102c),0x24);
  NullCheck(local_100);
  pEVar3 = local_100;
  memcpy(auStack_148,auStack_124,0x24);
  EyeGazeStateU5BU5D_t8F18F753F2C427FE1DE7C88ABF6910A7E73793FC::SetAt(pEVar3,1,auStack_148);
  ppvVar6 = local_38;
  lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  ppvVar6[1] = *(void **)(lVar8 + 0x1050);
  return 1;
}


