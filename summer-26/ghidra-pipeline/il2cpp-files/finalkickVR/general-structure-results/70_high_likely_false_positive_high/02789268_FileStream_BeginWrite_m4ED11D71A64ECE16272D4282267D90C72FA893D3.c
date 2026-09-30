/*
FUNCTION_NAME: FileStream_BeginWrite_m4ED11D71A64ECE16272D4282267D90C72FA893D3
ENTRY_POINT: 02789268
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 86
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;data_collection;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_3;strong_file_logging_hits_6;telemetry_or_network_hits_1;source_validity_pose_sink_structure;negative_known_unity_or_il2cpp_false_positive_family
*/


undefined8
FileStream_BeginWrite_m4ED11D71A64ECE16272D4282267D90C72FA893D3
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
  
  puVar1 = Method_LibTessDotNet_IPool_Register<MeshUtils_Vertex>__;
  if ((FileStream_BeginWrite_m4ED11D71A64ECE16272D4282267D90C72FA893D3::s_Il2CppMethodInitialized &
      1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_LibTessDotNet_IPool_Register<Tess_ActiveRegion>__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_LibTessDotNet_IPool_Register<MeshUtils_Face>__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_LibTessDotNet_IPool_Return<Mesh>__);
    FileStream_BeginWrite_m4ED11D71A64ECE16272D4282267D90C72FA893D3::s_Il2CppMethodInitialized = 1;
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
  bVar2 = VirtualFuncInvoker0<bool>::Invoke(10,param_1);
  if ((bVar2 & 1) == 0) {
    pIVar5 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_System_Collections_Generic_Dictionary<object,_Transform>__ctor__);
    pEVar6 = (Exception_t *)il2cpp_codegen_object_new(pIVar5);
    uVar7 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)Method_LibTessDotNet_IPool_Return<MeshUtils_Edge>__);
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
          local_28 = Stream_BeginWrite_mD4F6B107B8E8665E634D1702DEFB6C240C3D620B
                               (param_1,param_2,param_3,param_4,param_5,param_6,0);
        }
        else {
          pvVar9 = (void *)il2cpp_codegen_object_new
                                     (*(Il2CppClass **)
                                       Method_LibTessDotNet_IPool_Register<Tess_ActiveRegion>__);
          FileStreamAsyncResult__ctor_m0985ECF746AEB53C743BE9F5F51B4933E6ABF85D
                    (pvVar9,param_5,param_6);
          NullCheck(pvVar9);
          *(undefined4 *)((long)pvVar9 + 0x3c) = 0xffffffff;
          NullCheck(pvVar9);
          *(int *)((long)pvVar9 + 0x34) = param_4;
          NullCheck(pvVar9);
          *(int *)((long)pvVar9 + 0x38) = param_4;
          pvVar9 = (void *)il2cpp_codegen_object_new
                                     (*(Il2CppClass **)Method_LibTessDotNet_IPool_Return<Mesh>__);
          WriteDelegate__ctor_m186943F3D4E331CB3302B459ABFF74E80FF80055
                    (pvVar9,param_1,
                     *(undefined8 *)Method_LibTessDotNet_IPool_Register<MeshUtils_Face>__,0);
          NullCheck(pvVar9);
          local_28 = WriteDelegate_BeginInvoke_m8EA7AA1E0DA584A7C9B0491DA771D4FD7436D6F8
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
                        ((ulong *)Method_LibTessDotNet_IPool_Return<MeshUtils_Face>__);
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


