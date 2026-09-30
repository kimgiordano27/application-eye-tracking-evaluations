/*
FUNCTION_NAME: FileStream_BeginRead_mAF1D444E4DB43E2DD74A8EF58ECB5DEDE2F6B718
ENTRY_POINT: 02787d50
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 82
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;data_collection;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_3;strong_file_logging_hits_5;telemetry_or_network_hits_1;source_validity_pose_sink_structure;negative_known_unity_or_il2cpp_false_positive_family
*/


undefined8
FileStream_BeginRead_mAF1D444E4DB43E2DD74A8EF58ECB5DEDE2F6B718
          (Il2CppObject *param_1,void *param_2,int param_3,int param_4,undefined8 param_5,
          undefined8 param_6)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  Il2CppClass *pIVar5;
  Exception_t *pEVar6;
  undefined8 uVar7;
  MethodInfo *pMVar8;
  void *pvVar9;
  undefined8 local_28;
  
  puVar1 = Method_System_Net_IPAddressParser_Parse__;
                    /* try { // try from 02787d64 to 02887d6b has its CatchHandler @ 02787de0 */
                    /* try { // try from 02787d6c to 02887d6f has its CatchHandler @ 02787df8 */
                    /* try { // try from 02787d70 to 02887def has its CatchHandler @ 027878e4 */
  if ((FileStream_BeginRead_mAF1D444E4DB43E2DD74A8EF58ECB5DEDE2F6B718::s_Il2CppMethodInitialized & 1
      ) == 0) {
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Net_IPEndPoint__ctor__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Net_IPEndPoint_Create__);
    FileStream_BeginRead_mAF1D444E4DB43E2DD74A8EF58ECB5DEDE2F6B718::s_Il2CppMethodInitialized = 1;
  }
  pvVar9 = *(void **)(param_1 + 0x38);
  NullCheck(pvVar9);
  bVar2 = SafeHandle_get_IsClosed_mD2CD4AA6E3B0A242E48080F18BC07199CAB80273(pvVar9,0);
  if ((bVar2 & 1) != 0) {
    pIVar5 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_System_Collections_Generic_KeyValuePair<InternedString,_object>_get_Key__
                       );
    pEVar6 = (Exception_t *)il2cpp_codegen_object_new(pIVar5);
    uVar7 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)
                       Method_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback<bool>__
                      );
    ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(pEVar6,uVar7,0);
    pMVar8 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar1);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar6,pMVar8);
  }
  bVar2 = VirtualFuncInvoker0<bool>::Invoke(7,param_1);
  if ((bVar2 & 1) == 0) {
    pIVar5 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_System_Collections_Generic_Dictionary<object,_Transform>__ctor__);
    pEVar6 = (Exception_t *)il2cpp_codegen_object_new(pIVar5);
    uVar7 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)
                       Method_System_Net_NetworkInformation_IPGlobalPropertiesFactoryPal_Create__);
    NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(pEVar6,uVar7,0);
    pMVar8 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar1);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar6,pMVar8);
  }
  if (param_2 != (void *)0x0) {
    if (param_4 < 0) {
      pIVar5 = (Il2CppClass *)
               il2cpp_codegen_initialize_runtime_metadata_inline
                         ((ulong *)
                          Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_RemoveAtWithCapacity__
                         );
      pEVar6 = (Exception_t *)il2cpp_codegen_object_new(pIVar5);
      uVar7 = il2cpp_codegen_initialize_runtime_metadata_inline
                        ((ulong *)Method_System_Net_HttpWebRequest_EndGetResponse__);
      uVar4 = il2cpp_codegen_initialize_runtime_metadata_inline
                        ((ulong *)Method_LibTessDotNet_IPool_Get<Mesh>__);
      ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66
                (pEVar6,uVar7,uVar4,0);
      pMVar8 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar1);
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar6,pMVar8);
    }
    if (-1 < param_3) {
      NullCheck(param_2);
      iVar3 = il2cpp_codegen_subtract<int,int>((int)*(undefined8 *)((long)param_2 + 0x18),param_3);
      if (param_4 <= iVar3) {
        if (((byte)param_1[0x55] & 1) == 0) {
          local_28 = Stream_BeginRead_m2A759634A3B717B38685E4BE7E28715881DEA2DA
                               (param_1,param_2,param_3,param_4,param_5,param_6,0);
        }
        else {
          pvVar9 = (void *)il2cpp_codegen_object_new
                                     (*(Il2CppClass **)Method_System_Net_IPEndPoint_Create__);
          ReadDelegate__ctor_mBA1BEB5913BE4A71248167B48787B3FF6E1DB6EE
                    (pvVar9,param_1,*(undefined8 *)Method_System_Net_IPEndPoint__ctor__);
          NullCheck(pvVar9);
          local_28 = ReadDelegate_BeginInvoke_mA1EC49077A5F2D0288A8C1150A52B63A92296A8C
                               (pvVar9,param_2,param_3,param_4,param_5,param_6,0);
        }
        return local_28;
      }
      pIVar5 = (Il2CppClass *)
               il2cpp_codegen_initialize_runtime_metadata_inline
                         ((ulong *)
                          Method_System_Collections_Generic_Dictionary<AxisAlignedBox_BoxSurface,_float>_Add__
                         );
      pEVar6 = (Exception_t *)il2cpp_codegen_object_new(pIVar5);
      uVar7 = il2cpp_codegen_initialize_runtime_metadata_inline
                        ((ulong *)Method_LibTessDotNet_IPool_Get<MeshUtils_Edge>__);
      ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(pEVar6,uVar7,0);
      pMVar8 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar1);
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar6,pMVar8);
    }
    pIVar5 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_RemoveAtWithCapacity__
                       );
    pEVar6 = (Exception_t *)il2cpp_codegen_object_new(pIVar5);
    uVar7 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)Method_System_Collections_Generic_List<CanvasGroup>__ctor__);
    uVar4 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)Method_LibTessDotNet_IPool_Get<Mesh>__);
    ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66
              (pEVar6,uVar7,uVar4,0);
    pMVar8 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar1);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar6,pMVar8);
  }
  pIVar5 = (Il2CppClass *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)
                      Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_get_Count__
                     );
  pEVar6 = (Exception_t *)il2cpp_codegen_object_new(pIVar5);
  uVar7 = il2cpp_codegen_initialize_runtime_metadata_inline
                    ((ulong *)
                     Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_get_character__);
  ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(pEVar6,uVar7,0);
  pMVar8 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar1);
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar6,pMVar8);
}


