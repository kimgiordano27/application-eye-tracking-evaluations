/*
FUNCTION_NAME: ApkImpl_GetFiles_m1B7347DBCD6A3937A3C3BBE374E1B23C272BD303
ENTRY_POINT: 01e67ae0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 114
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_15;validity_or_gating_hits_7;telemetry_or_network_hits_8;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_8
*/


undefined8
ApkImpl_GetFiles_m1B7347DBCD6A3937A3C3BBE374E1B23C272BD303(long param_1,void *param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  Il2CppObject *pIVar10;
  String_t *pSVar11;
  undefined8 *puVar12;
  Il2CppClass *pIVar13;
  Exception_t *pEVar14;
  MethodInfo *pMVar15;
  Il2CppObject *pIVar16;
  List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD *pLVar17;
  String_t *pSVar18;
  long *plVar19;
  undefined8 uVar20;
  void *pvVar21;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *this;
  String_t *local_80;
  int local_6c;
  long local_68;
  Predicate_1_tEB15485FDAFC48C82EE54427A8DBDB401213706C *local_58;
  
  puVar3 = 
  Method_System_Collections_Generic_Dictionary<JointVelocityActiveState_JointVelocityFeatureConfig,_JointVelocityActiveState_JointVelocityFeatureState>__ctor__
  ;
  puVar2 = 
  Method_System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>_set_Item__
  ;
  puVar1 = Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaEntity>_get_Values__
  ;
  if ((ApkImpl_GetFiles_m1B7347DBCD6A3937A3C3BBE374E1B23C272BD303::s_Il2CppMethodInitialized & 1) ==
      0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaEntity>_get_Values__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<string,_object>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<string,_object>_GetEnumerator__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<string,_object>_Remove__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_set_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<JointVelocityActiveState_JointVelocityFeatureConfig,_JointVelocityActiveState_JointVelocityFeatureState>_Add__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<JointVelocityActiveState_JointVelocityFeatureConfig,_JointVelocityActiveState_JointVelocityFeatureState>_set_Item__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>__ctor__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_Clear__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TryGetValue__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_set_Item__
              );
    ApkImpl_GetFiles_m1B7347DBCD6A3937A3C3BBE374E1B23C272BD303::s_Il2CppMethodInitialized = 1;
  }
  pIVar10 = (Il2CppObject *)
            il2cpp_codegen_object_new
                      (*(Il2CppClass **)
                        Method_System_Collections_Generic_Dictionary<JointVelocityActiveState_JointVelocityFeatureConfig,_JointVelocityActiveState_JointVelocityFeatureState>_set_Item__
                      );
  U3CU3Ec__DisplayClass7_0__ctor_mC4D74926A770DCF44681CC5E0A97F4292CF0475C(pIVar10,0);
  NullCheck(pIVar10);
  *(void **)(pIVar10 + 0x10) = param_2;
  Il2CppCodeGenWriteBarrier((void **)(pIVar10 + 0x10),param_2);
  if (param_1 == 0) {
    pIVar13 = (Il2CppClass *)
              il2cpp_codegen_initialize_runtime_metadata_inline
                        ((ulong *)
                         Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_get_Count__
                        );
    pEVar14 = (Exception_t *)il2cpp_codegen_object_new(pIVar13);
    uVar20 = il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_set_Item__
                       );
    ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(pEVar14,uVar20,0);
    pMVar15 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar3);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar14,pMVar15);
  }
  pSVar11 = (String_t *)
            PathUtil_NormalizeRelativePath_mEC557017A1B1C6CA6B287821476FC551DF50FBB4(param_1,1);
  local_6c = ApkImpl_GetDirectoryIndex_m2D05FA0EA09496924644EBD8640B29DF2DBCDED9(pSVar11,0);
  if (local_6c < 0) {
    pIVar13 = (Il2CppClass *)
              il2cpp_codegen_initialize_runtime_metadata_inline
                        ((ulong *)
                         Method_System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>__ctor__
                        );
    pEVar14 = (Exception_t *)il2cpp_codegen_object_new(pIVar13);
    IOException__ctor_mF001EA9B9B8DBFBDD9B63B97A5CC6F0D7FD9F2B3(pEVar14,0);
    pMVar15 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar3);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar14,pMVar15);
  }
  puVar12 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  pvVar21 = (void *)*puVar12;
  NullCheck(pvVar21);
  if (local_6c == (int)*(undefined8 *)((long)pvVar21 + 0x18)) {
    pIVar13 = (Il2CppClass *)
              il2cpp_codegen_initialize_runtime_metadata_inline
                        ((ulong *)
                         Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>__ctor__
                        );
    pEVar14 = (Exception_t *)il2cpp_codegen_object_new(pIVar13);
    DirectoryNotFoundException__ctor_m3E7AD60F0D1A82ED671568427050835C56704361(pEVar14,0);
    pMVar15 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar3);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar14,pMVar15);
  }
  NullCheck(pIVar10);
  bVar4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478
                    (*(undefined8 *)(pIVar10 + 0x10),0);
  if ((bVar4 & 1) == 0) {
    NullCheck(pIVar10);
    bVar4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1
                      (*(undefined8 *)(pIVar10 + 0x10),
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_set_Item__
                       ,0);
    if ((bVar4 & 1) == 0) {
      NullCheck(pIVar10);
      pvVar21 = *(void **)(pIVar10 + 0x10);
      NullCheck(pvVar21);
      iVar5 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(pvVar21,0x2a,0);
      if (iVar5 < 0) {
        NullCheck(pIVar10);
        pvVar21 = *(void **)(pIVar10 + 0x10);
        NullCheck(pvVar21);
        iVar5 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(pvVar21,0x3f,0);
        if (iVar5 < 0) {
          local_58 = (Predicate_1_tEB15485FDAFC48C82EE54427A8DBDB401213706C *)
                     il2cpp_codegen_object_new(*(Il2CppClass **)puVar2);
          Predicate_1__ctor_m792445D8ACC019EE3CE897994AF6C04721045A7E
                    (local_58,pIVar10,
                     *(long *)
                      Method_System_Collections_Generic_Dictionary<JointVelocityActiveState_JointVelocityFeatureConfig,_JointVelocityActiveState_JointVelocityFeatureState>_Add__
                     ,(MethodInfo *)0x0);
          goto LAB_01e68084;
        }
      }
      pIVar16 = (Il2CppObject *)
                il2cpp_codegen_object_new
                          (*(Il2CppClass **)
                            Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_Clear__
                          );
      U3CU3Ec__DisplayClass7_1__ctor_m51A7EB31B369443033EF6738804272603D167D78(pIVar16);
      NullCheck(pIVar10);
      pvVar21 = (void *)PathUtil_WildcardToRegex_m3E50A3A843CF385F3E3057ACB61486C92950DD81
                                  (*(undefined8 *)(pIVar10 + 0x10),0);
      NullCheck(pIVar16);
      *(void **)(pIVar16 + 0x10) = pvVar21;
      Il2CppCodeGenWriteBarrier((void **)(pIVar16 + 0x10),pvVar21);
      local_58 = (Predicate_1_tEB15485FDAFC48C82EE54427A8DBDB401213706C *)
                 il2cpp_codegen_object_new(*(Il2CppClass **)puVar2);
      Predicate_1__ctor_m792445D8ACC019EE3CE897994AF6C04721045A7E
                (local_58,pIVar16,
                 *(long *)
                  Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>__ctor__
                 ,(MethodInfo *)0x0);
      goto LAB_01e68084;
    }
  }
  local_58 = (Predicate_1_tEB15485FDAFC48C82EE54427A8DBDB401213706C *)0x0;
LAB_01e68084:
  pLVar17 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD *)
            il2cpp_codegen_object_new
                      (*(Il2CppClass **)
                        Method_System_Collections_Generic_Dictionary<string,_object>_Remove__);
  List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E
            (pLVar17,*(MethodInfo **)
                      Method_System_Collections_Generic_Dictionary<string,_object>_GetEnumerator__);
  local_68 = 0;
  while( true ) {
    puVar12 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    pvVar21 = (void *)*puVar12;
    NullCheck(pvVar21);
    if ((int)*(undefined8 *)((long)pvVar21 + 0x18) <= local_6c) break;
    puVar12 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    this = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)*puVar12;
    NullCheck(this);
    pSVar18 = (String_t *)
              StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::GetAt(this,(long)local_6c);
    NullCheck(pSVar18);
    bVar4 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(pSVar18,pSVar11,0);
    if ((bVar4 & 1) == 0) break;
    NullCheck(pSVar18);
    iVar5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline
                      (pSVar18,(MethodInfo *)0x0);
    NullCheck(pSVar18);
    iVar6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline
                      (pSVar18,(MethodInfo *)0x0);
                    /* try { // try from 01e68190 to 01f68243 has its CatchHandler @ 01e68190
                       catch() { ... } // from try @ 01e68190 with catch @ 01e68190
                       catch() { ... } // from try @ 01e68250 with catch @ 01e68190
                       catch() { ... } // from try @ 01e682a4 with catch @ 01e68190
                       catch() { ... } // from try @ 01e68304 with catch @ 01e68190 */
    NullCheck(pSVar11);
    iVar7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline
                      (pSVar11,(MethodInfo *)0x0);
    NullCheck(pSVar18);
    uVar8 = il2cpp_codegen_subtract<int,int>(iVar5,1);
    uVar9 = il2cpp_codegen_subtract<int,int>(iVar6,iVar7);
    iVar5 = String_LastIndexOf_mC92062EF4E7765DD44424828FA75C027AA325442(pSVar18,0x2f,uVar8,uVar9,0)
    ;
    if (iVar5 < 0) {
      NullCheck(pSVar11);
                    /* try { // try from 01e68298 to 01f6829f has its CatchHandler @ 01e682d4 */
      uVar8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline
                        (pSVar11,(MethodInfo *)0x0);
                    /* try { // try from 01e682a0 to 01f682a3 has its CatchHandler @ 01e682ec */
                    /* try { // try from 01e682a4 to 01f682e3 has its CatchHandler @ 01e68190 */
      NullCheck(pSVar18);
      local_80 = (String_t *)
                 String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(pSVar18,uVar8,0);
LAB_01e682c8:
                    /* catch() { ... } // from try @ 01e68298 with catch @ 01e682d4 */
      if (local_58 != (Predicate_1_tEB15485FDAFC48C82EE54427A8DBDB401213706C *)0x0) {
                    /* try { // try from 01e682e4 to 01f68303 has its CatchHandler @ 01e6830c */
                    /* catch() { ... } // from try @ 01e682a0 with catch @ 01e682ec */
        NullCheck(local_58);
        bVar4 = Predicate_1_Invoke_m180565420FDCD7211D85CB31534D98770D88A4FF_inline
                          (local_58,local_80,(MethodInfo *)0x0);
                    /* try { // try from 01e68304 to 01f6830f has its CatchHandler @ 01e68190 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01e682e4 with catch @ 01e6830c
                        */
                    /* try { // try from 01e68310 to 01f6839f has its CatchHandler @ 01e68310
                       catch() { ... } // from try @ 01e68310 with catch @ 01e68310
                       catch() { ... } // from try @ 01e683ac with catch @ 01e68310
                       catch() { ... } // from try @ 01e68400 with catch @ 01e68310
                       catch() { ... } // from try @ 01e68460 with catch @ 01e68310 */
        if ((bVar4 & 1) == 0) goto LAB_01e68450;
      }
      NullCheck(pSVar11);
      uVar8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline
                        (pSVar11,(MethodInfo *)0x0);
      NullCheck(pSVar18);
      uVar20 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(pSVar18,uVar8,0);
      if (local_68 == 0) {
        local_68 = PathUtil_FixTrailingDirectorySeparators_m587EF8190834B1D8C6A719CB6DE377840E5ACC66
                             (param_1);
                    /* try { // try from 01e683a0 to 01f683ab has its CatchHandler @ 01e683c8 */
                    /* try { // try from 01e683ac to 01f683f3 has its CatchHandler @ 01e68310 */
        bVar4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1
                          (local_68,*(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TryGetValue__
                           ,0);
                    /* catch(type#1 @ 0474a728) { ... } // from try @ 01e683a0 with catch @ 01e683c8
                        */
        if ((bVar4 & 1) != 0) {
          plVar19 = (long *)il2cpp_codegen_static_fields_for
                                      (*(Il2CppClass **)
                                        Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_set_Item__
                                      );
          local_68 = *plVar19;
        }
      }
                    /* try { // try from 01e683f4 to 01f683fb has its CatchHandler @ 01e68430 */
                    /* try { // try from 01e683fc to 01f683ff has its CatchHandler @ 01e68448 */
      pSVar18 = (String_t *)
                PathUtil_CombineSlash_mD9DF6E68D6F9191803FF3AA55732410C04533681(local_68,uVar20,0);
      NullCheck(pLVar17);
      List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline
                (pLVar17,pSVar18,
                 *(MethodInfo **)
                  Method_System_Collections_Generic_Dictionary<string,_object>_Clear__);
    }
    else if (param_3 != 0) {
      NullCheck(pSVar18);
                    /* try { // try from 01e68244 to 01f6824f has its CatchHandler @ 01e6826c */
                    /* try { // try from 01e68250 to 01f68297 has its CatchHandler @ 01e68190 */
      uVar8 = il2cpp_codegen_add<int,int>(iVar5,1);
      local_80 = (String_t *)
                 String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(pSVar18,uVar8,0);
                    /* catch(type#1 @ 0474a728) { ... } // from try @ 01e68244 with catch @ 01e6826c
                        */
      goto LAB_01e682c8;
    }
LAB_01e68450:
    local_6c = il2cpp_codegen_add<int,int>(local_6c,1);
  }
  NullCheck(pLVar17);
  uVar20 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A
                     (pLVar17,*(MethodInfo **)
                               Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__
                     );
  return uVar20;
}


