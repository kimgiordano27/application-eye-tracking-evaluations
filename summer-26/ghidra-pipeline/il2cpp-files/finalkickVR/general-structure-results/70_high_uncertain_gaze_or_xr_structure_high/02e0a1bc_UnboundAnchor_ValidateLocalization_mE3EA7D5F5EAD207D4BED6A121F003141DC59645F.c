/*
FUNCTION_NAME: UnboundAnchor_ValidateLocalization_mE3EA7D5F5EAD207D4BED6A121F003141DC59645F
ENTRY_POINT: 02e0a1bc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 73
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_10;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void UnboundAnchor_ValidateLocalization_mE3EA7D5F5EAD207D4BED6A121F003141DC59645F
               (undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  Il2CppClass *pIVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  Exception_t *pEVar8;
  MethodInfo *pMVar9;
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  byte local_f9;
  Exception_t *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  byte local_a9;
  Exception_t *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  byte local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  byte local_32;
  byte local_31;
  undefined8 local_30;
  undefined8 *local_28;
  
  puVar3 = StringLiteral_199;
  puVar2 = Method_System_Nullable<long>_ToString__;
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_get_Keys__;
  local_30 = param_2;
  local_28 = param_1;
  if ((UnboundAnchor_ValidateLocalization_mE3EA7D5F5EAD207D4BED6A121F003141DC59645F::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    UnboundAnchor_ValidateLocalization_mE3EA7D5F5EAD207D4BED6A121F003141DC59645F::
    s_Il2CppMethodInitialized = 1;
  }
  local_31 = 0;
  local_32 = 0;
  local_50 = *local_28;
  local_40 = local_50;
  local_48 = OVRSpace_op_Implicit_m1F9D1045BC491FB6F551F3F2317DC526B2574AE0(local_50);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  local_51 = OVRPlugin_GetSpaceComponentStatus_m696F271B0C19564580C6DAC3AEE92EFC6B24FD56
                       (local_48,0,&local_31,&local_32,0);
  local_51 = local_51 & 1;
  if (local_51 == 0) {
    local_80 = UnboundAnchor_get_Uuid_m886644B48ED53F44AA34A2D597D31EFCAA845E83_inline
                         ((UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 *)local_28,
                          (MethodInfo *)0x0);
    local_90 = local_80;
    local_70 = local_80;
    pIVar5 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar2);
    local_98 = Box(pIVar5,local_90);
    uVar7 = il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_200);
    uVar6 = local_98;
    uVar4 = il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_201);
    local_a0 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(uVar7,uVar6,uVar4,0);
    pIVar5 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar1);
    local_a8 = (Exception_t *)il2cpp_codegen_object_new(pIVar5);
    InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(local_a8,local_a0,0);
    pEVar8 = local_a8;
    pMVar9 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar3);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar8,pMVar9);
  }
  local_a9 = local_31 & 1;
  if (local_a9 != 0) {
    local_d0 = UnboundAnchor_get_Uuid_m886644B48ED53F44AA34A2D597D31EFCAA845E83_inline
                         ((UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 *)local_28,
                          (MethodInfo *)0x0);
    local_e0 = local_d0;
    local_c0 = local_d0;
    pIVar5 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar2);
    local_e8 = Box(pIVar5,local_e0);
    uVar6 = il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_202);
    local_f0 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(uVar6,local_e8,0);
    pIVar5 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar1);
    local_f8 = (Exception_t *)il2cpp_codegen_object_new(pIVar5);
    InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(local_f8,local_f0,0);
    pEVar8 = local_f8;
    pMVar9 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar3);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar8,pMVar9);
  }
  local_f9 = local_32 & 1;
  if (local_f9 == 0) {
    return;
  }
  local_130 = UnboundAnchor_get_Uuid_m886644B48ED53F44AA34A2D597D31EFCAA845E83_inline
                        ((UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 *)local_28,
                         (MethodInfo *)0x0);
  local_120 = local_130;
  local_110 = local_130;
  pIVar5 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar2);
  uVar6 = Box(pIVar5,local_130);
  uVar7 = il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_203);
  uVar6 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(uVar7,uVar6,0);
  pIVar5 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar1);
  pEVar8 = (Exception_t *)il2cpp_codegen_object_new(pIVar5);
  InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(pEVar8,uVar6,0);
  pMVar9 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar3);
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar8,pMVar9);
}


