/*
FUNCTION_NAME: InputActionRebindingExtensions_GetBindingIndex_m4D5A5FDF5663F02DEC5346D0EF56BE128E5DDFC5
ENTRY_POINT: 0372c68c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int InputActionRebindingExtensions_GetBindingIndex_m4D5A5FDF5663F02DEC5346D0EF56BE128E5DDFC5
              (void *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  Il2CppClass *pIVar3;
  Exception_t *pEVar4;
  undefined8 uVar5;
  MethodInfo *pMVar6;
  undefined1 auStack_1a8 [95];
  byte local_149;
  undefined1 auStack_148 [88];
  undefined1 auStack_f0 [92];
  int local_94;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  void *local_70;
  Exception_t *local_68;
  void *local_60;
  int local_54;
  undefined1 local_50 [16];
  undefined8 local_38;
  void *local_30;
  
  local_38 = param_3;
  local_30 = param_1;
  if ((InputActionRebindingExtensions_GetBindingIndex_m4D5A5FDF5663F02DEC5346D0EF56BE128E5DDFC5::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_14933);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_14846);
    InputActionRebindingExtensions_GetBindingIndex_m4D5A5FDF5663F02DEC5346D0EF56BE128E5DDFC5::
    s_Il2CppMethodInitialized = 1;
  }
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  local_54 = 0;
  local_60 = local_30;
  if (local_30 != (void *)0x0) {
    local_70 = local_30;
    NullCheck(local_30);
    local_90 = InputActionMap_get_bindings_m92132C34F4075A36A0E4C1AE7315745DC5C4ACB6(local_70,0);
    local_54 = 0;
    local_50 = local_90;
    local_80 = local_90;
    while( true ) {
      iVar1 = local_54;
      iVar2 = ReadOnlyArray_1_get_Count_mF499542388380AA211FCBBFC8C4B272447A81B96_inline
                        ((ReadOnlyArray_1_tF49E7A2430C7D717C5DF8A8C2626314D0D9C1CF4 *)local_50,
                         *(MethodInfo **)StringLiteral_14933);
      if (iVar2 <= iVar1) {
        return -1;
      }
      local_94 = local_54;
      ReadOnlyArray_1_get_Item_mDAAB3D7833424DD373EA449309C8728D5BA96C4A
                ((ReadOnlyArray_1_tF49E7A2430C7D717C5DF8A8C2626314D0D9C1CF4 *)local_50,local_54,
                 *(MethodInfo **)StringLiteral_14846);
      memcpy(auStack_f0,auStack_148,0x58);
      memcpy(auStack_1a8,auStack_f0,0x58);
      local_149 = InputBinding_Matches_m2B18C0E0A361E2E7139779A41F6C4DA26C6759F3
                            (param_2,auStack_1a8,0);
      local_149 = local_149 & 1;
      if (local_149 != 0) break;
      local_54 = il2cpp_codegen_add<int,int>(local_54,1);
    }
    return local_54;
  }
  pIVar3 = (Il2CppClass *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)
                      Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_get_Count__
                     );
  pEVar4 = (Exception_t *)il2cpp_codegen_object_new(pIVar3);
  local_68 = pEVar4;
  uVar5 = il2cpp_codegen_initialize_runtime_metadata_inline
                    ((ulong *)
                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
  ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(pEVar4,uVar5,0);
  pEVar4 = local_68;
  pMVar6 = (MethodInfo *)
           il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_14935);
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar4,pMVar6);
}


