/*
FUNCTION_NAME: InputActionRebindingExtensions_ApplyBindingOverride_mBB5BDDDD1F8D92630C3C3289C140D99AFA83E10B
ENTRY_POINT: 0372e814
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

int InputActionRebindingExtensions_ApplyBindingOverride_mBB5BDDDD1F8D92630C3C3289C140D99AFA83E10B
              (void *param_1,InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 *param_2)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  Exception_t *pEVar3;
  MethodInfo *pMVar4;
  undefined8 uVar5;
  String_t *pSVar6;
  InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 *pIVar7;
  undefined8 uVar8;
  InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57 *this;
  int local_4c;
  int local_48;
  int local_24;
  
  if (param_1 == (void *)0x0) {
    pIVar2 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_get_Count__
                       );
    pEVar3 = (Exception_t *)il2cpp_codegen_object_new(pIVar2);
    uVar8 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)
                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(pEVar3,uVar8,0);
    pMVar4 = (MethodInfo *)
             il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_14950);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar3,pMVar4);
  }
  NullCheck(param_1);
  this = *(InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57 **)((long)param_1 + 0x30);
  if (this == (InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57 *)0x0) {
    local_24 = 0;
  }
  else {
    NullCheck(this);
    uVar8 = *(undefined8 *)(this + 0x18);
    local_48 = 0;
    for (local_4c = 0; local_4c < (int)uVar8; local_4c = il2cpp_codegen_add<int,int>(local_4c,1)) {
      NullCheck(this);
      uVar5 = InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57::GetAddressAt
                        (this,(long)local_4c);
      bVar1 = InputBinding_Matches_mCF4F98B26B9EAF88434A3A0C6BF8F9EFF2BF592F(param_2,uVar5,0,0);
      if ((bVar1 & 1) != 0) {
        NullCheck(this);
        pSVar6 = (String_t *)
                 InputBinding_get_overridePath_m933C22735A101E7C636149C8D3E87036A8F2D1AB_inline
                           (param_2,(MethodInfo *)0x0);
        pIVar7 = (InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 *)
                 InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57::GetAddressAt
                           (this,(long)local_4c);
        InputBinding_set_overridePath_m254083B15DE914A24B72ADAEB458B426693EBBDE_inline
                  (pIVar7,pSVar6,(MethodInfo *)0x0);
        NullCheck(this);
        pSVar6 = (String_t *)
                 InputBinding_get_overrideInteractions_mBC50CB48E4F95053F5F44CD720C3E73C9CC765F0_inline
                           (param_2,(MethodInfo *)0x0);
        pIVar7 = (InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 *)
                 InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57::GetAddressAt
                           (this,(long)local_4c);
        InputBinding_set_overrideInteractions_mB1F18069CFF50CD35A419EEAB6AEE8F3BA4AB88D_inline
                  (pIVar7,pSVar6,(MethodInfo *)0x0);
        NullCheck(this);
        pSVar6 = (String_t *)
                 InputBinding_get_overrideProcessors_mB061B1A5BAA7AC94038880A74B9A2F7AE4D0AFDA_inline
                           (param_2,(MethodInfo *)0x0);
        pIVar7 = (InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 *)
                 InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57::GetAddressAt
                           (this,(long)local_4c);
        InputBinding_set_overrideProcessors_mF193786F6350EB5E0EF63B57530BC89EC304BAE0_inline
                  (pIVar7,pSVar6,(MethodInfo *)0x0);
        local_48 = il2cpp_codegen_add<int,int>(local_48,1);
      }
    }
    if (0 < local_48) {
      NullCheck(param_1);
      InputActionMap_OnBindingModified_m5D83F89CFCDD65DDE6ACF1C887676F7F8C5707B2(param_1,0);
    }
    local_24 = local_48;
  }
  return local_24;
}


