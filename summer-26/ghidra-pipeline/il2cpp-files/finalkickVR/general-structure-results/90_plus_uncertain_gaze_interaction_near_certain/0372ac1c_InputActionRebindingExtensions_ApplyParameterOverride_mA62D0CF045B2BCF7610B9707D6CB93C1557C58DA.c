/*
FUNCTION_NAME: InputActionRebindingExtensions_ApplyParameterOverride_mA62D0CF045B2BCF7610B9707D6CB93C1557C58DA
ENTRY_POINT: 0372ac1c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 143
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_1
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void InputActionRebindingExtensions_ApplyParameterOverride_mA62D0CF045B2BCF7610B9707D6CB93C1557C58DA
               (void *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,void *param_5
               ,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  Il2CppClass *pIVar4;
  Exception_t *pEVar5;
  undefined8 uVar6;
  MethodInfo *pMVar7;
  undefined1 auStack_288 [120];
  undefined8 local_210;
  undefined8 uStack_208;
  undefined1 auStack_200 [88];
  undefined1 auStack_1a8 [120];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [88];
  undefined8 local_c8;
  long local_c0;
  void *local_b8;
  long local_b0;
  void *local_a8;
  undefined4 local_9c;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  byte local_79;
  void *local_78;
  Exception_t *local_70;
  byte local_61;
  undefined8 local_60;
  Exception_t *local_58;
  void *local_50;
  undefined8 local_48;
  undefined8 local_40;
  void *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_50 = param_1;
  local_48 = param_6;
  local_40 = param_2;
  local_38 = param_1;
  local_30 = param_3;
  uStack_28 = param_4;
  if (param_1 == (void *)0x0) {
    pIVar4 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_get_Count__
                       );
    pEVar5 = (Exception_t *)il2cpp_codegen_object_new(pIVar4);
    local_58 = pEVar5;
    uVar6 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)
                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(pEVar5,uVar6,0);
    pEVar5 = local_58;
    pMVar7 = (MethodInfo *)
             il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_14926);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar5,pMVar7);
  }
  local_60 = param_2;
  local_61 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(param_2,0);
  local_61 = local_61 & 1;
  if (local_61 == 0) {
    local_78 = local_38;
    NullCheck(local_38);
    local_79 = InputActionMap_ResolveBindingsIfNecessary_m0233826C82F2E43D8A804066120B70BE7FDA7D14
                         (local_78);
    local_79 = local_79 & 1;
    local_88 = local_38;
    NullCheck(local_38);
    local_90 = *(undefined8 *)((long)local_88 + 0x60);
    local_98 = local_38;
    NullCheck(local_38);
    local_9c = *(undefined4 *)((long)local_98 + 0x58);
    local_a8 = local_38;
    NullCheck(local_38);
    local_b0 = (long)local_a8 + 0xd0;
    local_b8 = local_38;
    NullCheck(local_38);
    local_c0 = (long)local_b8 + 0xcc;
    local_c8 = local_40;
    memcpy(auStack_120,param_5,0x58);
    uStack_128 = uStack_28;
    local_130 = local_30;
    memset(auStack_1a8,0,0x78);
    uVar6 = local_c8;
    memcpy(auStack_200,auStack_120,0x58);
    uStack_208 = uStack_128;
    local_210 = local_130;
    ParameterOverride__ctor_m57D4416CDE1A6D816FFD451A4A7365159772F929
              (auStack_1a8,uVar6,auStack_200,local_130,uStack_128,0);
    uVar6 = local_90;
    uVar3 = local_9c;
    lVar2 = local_b0;
    lVar1 = local_c0;
    memcpy(auStack_288,auStack_1a8,0x78);
    InputActionRebindingExtensions_ApplyParameterOverride_m27CA33A7B2B2D9FA7D2D5A48E892BE39C71DDCE9
              (uVar6,uVar3,lVar2,lVar1,auStack_288,0);
    return;
  }
  pIVar4 = (Il2CppClass *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)
                      Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_get_Count__
                     );
  pEVar5 = (Exception_t *)il2cpp_codegen_object_new(pIVar4);
  local_70 = pEVar5;
  uVar6 = il2cpp_codegen_initialize_runtime_metadata_inline
                    ((ulong *)
                     Method_System_Collections_Generic_KeyValuePair<TrackedDeviceGraphicRaycaster,_HashSet<IUIInteractor>>_get_Key__
                    );
  ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(pEVar5,uVar6,0);
  pEVar5 = local_70;
  pMVar7 = (MethodInfo *)
           il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_14926);
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar5,pMVar7);
}


