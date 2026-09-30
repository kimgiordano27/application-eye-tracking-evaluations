/*
FUNCTION_NAME: InputActionTrace_UnsubscribeFrom_mEA85B9B11BF16D8A40A8852FB7F8B99B05D248B0
ENTRY_POINT: 037743ec
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void InputActionTrace_UnsubscribeFrom_mEA85B9B11BF16D8A40A8852FB7F8B99B05D248B0
               (long param_1,void *param_2,undefined8 param_3)

{
  Il2CppClass *pIVar1;
  Exception_t *pEVar2;
  undefined8 uVar3;
  MethodInfo *pMVar4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  int local_7c;
  void *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  Exception_t *local_40;
  void *local_38;
  int local_2c;
  undefined8 local_28;
  void *local_20;
  long local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  if ((InputActionTrace_UnsubscribeFrom_mEA85B9B11BF16D8A40A8852FB7F8B99B05D248B0::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_15374);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_15375);
    InputActionTrace_UnsubscribeFrom_mEA85B9B11BF16D8A40A8852FB7F8B99B05D248B0::
    s_Il2CppMethodInitialized = 1;
  }
  local_2c = 0;
  local_38 = local_20;
  if (local_20 == (void *)0x0) {
    pIVar1 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_get_Count__
                       );
    pEVar2 = (Exception_t *)il2cpp_codegen_object_new(pIVar1);
    local_40 = pEVar2;
    uVar3 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)
                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(pEVar2,uVar3,0);
    pEVar2 = local_40;
    pMVar4 = (MethodInfo *)
             il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_15376);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar2,pMVar4);
  }
  local_48 = *(long *)(local_18 + 0x98);
  if (local_48 != 0) {
    local_50 = local_20;
    local_58 = *(undefined8 *)(local_18 + 0x98);
    NullCheck(local_20);
    InputActionMap_remove_actionTriggered_mF5973EE3AD4EFC35F2702D4E3464973D084C3D21
              (local_50,local_58,0);
    uStack_98 = *(undefined8 *)(local_18 + 0x38);
    local_a0 = *(undefined8 *)(local_18 + 0x30);
    local_90 = *(undefined8 *)(local_18 + 0x40);
    local_78 = local_20;
    local_70 = local_a0;
    uStack_68 = uStack_98;
    local_60 = local_90;
    local_7c = InputArrayExtensions_IndexOfReference_TisInputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09_m3588D00C5A2EF5BD6DB52BD8148B6FE232E3C2BF
                         (&local_a0,local_20,*(undefined8 *)StringLiteral_15375);
    if (local_7c != -1) {
      local_2c = local_7c;
      InlinedArray_1_RemoveAtWithCapacity_m214DC78880E690C12F2F6190AE03C5125C9D984D
                ((InlinedArray_1_tA400D09B80F15161B84CD387A6FA2EA0249125EB *)(local_18 + 0x30),
                 local_7c,*(MethodInfo **)StringLiteral_15374);
    }
  }
  return;
}


