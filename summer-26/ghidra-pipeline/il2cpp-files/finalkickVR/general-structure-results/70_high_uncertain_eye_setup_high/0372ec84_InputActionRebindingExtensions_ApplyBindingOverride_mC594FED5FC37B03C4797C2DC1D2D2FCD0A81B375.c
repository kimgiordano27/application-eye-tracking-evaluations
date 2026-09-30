/*
FUNCTION_NAME: InputActionRebindingExtensions_ApplyBindingOverride_mC594FED5FC37B03C4797C2DC1D2D2FCD0A81B375
ENTRY_POINT: 0372ec84
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void InputActionRebindingExtensions_ApplyBindingOverride_mC594FED5FC37B03C4797C2DC1D2D2FCD0A81B375
               (void *param_1,int param_2,
               InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  int iVar2;
  void *pvVar3;
  Il2CppClass *pIVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  Exception_t *pEVar7;
  MethodInfo *pMVar8;
  String_t *pSVar9;
  InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 *pIVar10;
  InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57 *pIVar11;
  int local_b0;
  int local_ac;
  void *local_a8;
  undefined8 local_a0;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  void *local_80;
  void *local_78;
  void *local_70;
  Exception_t *local_68;
  void *local_60;
  int local_54;
  undefined8 local_50;
  void *local_48;
  int local_3c;
  undefined8 local_38;
  int local_2c;
  void *local_28;
  
  local_3c = 0;
  local_48 = (void *)0x0;
  local_50 = 0;
  local_54 = 0;
  local_60 = param_1;
  local_38 = param_4;
  local_2c = param_2;
  local_28 = param_1;
  if (param_1 == (void *)0x0) {
    pIVar4 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_get_Count__
                       );
    pEVar7 = (Exception_t *)il2cpp_codegen_object_new(pIVar4);
    local_68 = pEVar7;
    uVar5 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)
                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(pEVar7,uVar5,0);
    pEVar7 = local_68;
    pMVar8 = (MethodInfo *)
             il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_14952);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar7,pMVar8);
  }
  local_70 = param_1;
  NullCheck(param_1);
  local_80 = *(void **)((long)local_70 + 0x30);
  local_78 = local_80;
  if (local_80 == (void *)0x0) {
    local_54 = 0;
    local_50 = 0;
  }
  else {
    local_48 = local_80;
    NullCheck(local_80);
    local_54 = (int)*(undefined8 *)((long)local_48 + 0x18);
  }
  pvVar3 = local_28;
  puVar1 = Method_System_Collections_Generic_Dictionary<Transform,_HashSetList<object>>_set_Item__;
  local_3c = local_54;
  local_84 = local_2c;
  if (-1 < local_2c) {
    local_88 = local_2c;
    local_8c = local_54;
    if (local_2c < local_54) {
      NullCheck(local_28);
      iVar2 = local_2c;
      pIVar11 = *(InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57 **)
                 ((long)pvVar3 + 0x30);
      NullCheck(pIVar11);
      pSVar9 = (String_t *)
               InputBinding_get_overridePath_m933C22735A101E7C636149C8D3E87036A8F2D1AB_inline
                         (param_3,(MethodInfo *)0x0);
      pIVar10 = (InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 *)
                InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57::GetAddressAt
                          (pIVar11,(long)iVar2);
      InputBinding_set_overridePath_m254083B15DE914A24B72ADAEB458B426693EBBDE_inline
                (pIVar10,pSVar9,(MethodInfo *)0x0);
      pvVar3 = local_28;
      NullCheck(local_28);
      iVar2 = local_2c;
      pIVar11 = *(InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57 **)
                 ((long)pvVar3 + 0x30);
      NullCheck(pIVar11);
      pSVar9 = (String_t *)
               InputBinding_get_overrideInteractions_mBC50CB48E4F95053F5F44CD720C3E73C9CC765F0_inline
                         (param_3,(MethodInfo *)0x0);
      pIVar10 = (InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 *)
                InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57::GetAddressAt
                          (pIVar11,(long)iVar2);
      InputBinding_set_overrideInteractions_mB1F18069CFF50CD35A419EEAB6AEE8F3BA4AB88D_inline
                (pIVar10,pSVar9,(MethodInfo *)0x0);
      pvVar3 = local_28;
      NullCheck(local_28);
      iVar2 = local_2c;
      pIVar11 = *(InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57 **)
                 ((long)pvVar3 + 0x30);
      NullCheck(pIVar11);
      pSVar9 = (String_t *)
               InputBinding_get_overrideProcessors_mB061B1A5BAA7AC94038880A74B9A2F7AE4D0AFDA_inline
                         (param_3,(MethodInfo *)0x0);
      pIVar10 = (InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 *)
                InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57::GetAddressAt
                          (pIVar11,(long)iVar2);
      InputBinding_set_overrideProcessors_mF193786F6350EB5E0EF63B57530BC89EC304BAE0_inline
                (pIVar10,pSVar9,(MethodInfo *)0x0);
      pvVar3 = local_28;
      NullCheck(local_28);
      InputActionMap_OnBindingModified_m5D83F89CFCDD65DDE6ACF1C887676F7F8C5707B2(pvVar3,0);
      return;
    }
  }
  local_90 = local_2c;
  local_94 = local_2c;
  pIVar4 = (Il2CppClass *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)
                      Method_System_Collections_Generic_Dictionary<Transform,_HashSetList<object>>_set_Item__
                     );
  local_a0 = Box(pIVar4,&local_94);
  local_a8 = local_28;
  local_ac = local_3c;
  local_b0 = local_3c;
  pIVar4 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar1);
  uVar5 = Box(pIVar4,&local_b0);
  uVar6 = il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_14953);
  uVar5 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(uVar6,local_a0,local_a8,uVar5);
  pIVar4 = (Il2CppClass *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_RemoveAtWithCapacity__
                     );
  pEVar7 = (Exception_t *)il2cpp_codegen_object_new(pIVar4);
  uVar6 = il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_14925);
  ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(pEVar7,uVar6,uVar5,0);
  pMVar8 = (MethodInfo *)
           il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_14952);
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar7,pMVar8);
}


