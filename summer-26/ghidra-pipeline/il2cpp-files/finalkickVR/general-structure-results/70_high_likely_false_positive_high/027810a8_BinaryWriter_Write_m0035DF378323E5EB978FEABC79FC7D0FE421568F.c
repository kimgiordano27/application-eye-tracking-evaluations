/*
FUNCTION_NAME: BinaryWriter_Write_m0035DF378323E5EB978FEABC79FC7D0FE421568F
ENTRY_POINT: 027810a8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 86
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;data_collection;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_12;strong_file_logging_hits_5;telemetry_or_network_hits_2;source_validity_pose_sink_structure;negative_known_unity_or_il2cpp_false_positive_family
*/


/* WARNING: Removing unreachable block (ram,0x0278163c) */

void BinaryWriter_Write_m0035DF378323E5EB978FEABC79FC7D0FE421568F(long param_1,String_t *param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Il2CppClass *pIVar5;
  Exception_t *pEVar6;
  undefined8 uVar7;
  MethodInfo *pMVar8;
  long lVar9;
  wchar16 *pwVar10;
  Il2CppObject *pIVar11;
  void *pvVar12;
  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 *pBVar13;
  int local_74;
  uchar *local_68;
  long local_58;
  int local_44;
  int local_40;
  
  puVar1 = 
  Method_System_Net_HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData__;
  if ((BinaryWriter_Write_m0035DF378323E5EB978FEABC79FC7D0FE421568F::s_Il2CppMethodInitialized & 1)
      == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Net_HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_Clear__
              );
    BinaryWriter_Write_m0035DF378323E5EB978FEABC79FC7D0FE421568F::s_Il2CppMethodInitialized = 1;
  }
  if (param_2 == (String_t *)0x0) {
    pIVar5 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_get_Count__
                       );
    pEVar6 = (Exception_t *)il2cpp_codegen_object_new(pIVar5);
    uVar7 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)Method_System_Collections_Generic_HashSet<int>_Remove__);
    ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(pEVar6,uVar7,0);
    pMVar8 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar1);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar6,pMVar8);
  }
  pIVar11 = *(Il2CppObject **)(param_1 + 0x20);
  NullCheck(pIVar11);
  iVar2 = VirtualFuncInvoker1<int,String_t*>::Invoke(0xc,pIVar11,param_2);
  BinaryWriter_Write7BitEncodedInt_m4E635B57122A4266BE3E01C0633BAFE001B15C76(param_1,iVar2,0);
  if (*(long *)(param_1 + 0x38) == 0) {
    pvVar12 = (void *)SZArrayNew(*(Il2CppClass **)
                                  Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_Clear__
                                 ,0x100);
    *(void **)(param_1 + 0x38) = pvVar12;
    Il2CppCodeGenWriteBarrier((void **)(param_1 + 0x38),pvVar12);
    pvVar12 = *(void **)(param_1 + 0x38);
    NullCheck(pvVar12);
    pIVar11 = *(Il2CppObject **)(param_1 + 0x20);
    NullCheck(pIVar11);
    iVar3 = VirtualFuncInvoker1<int,int>::Invoke(0x22,pIVar11,1);
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = (int)*(undefined8 *)((long)pvVar12 + 0x18) / iVar3;
    }
    *(int *)(param_1 + 0x40) = iVar4;
  }
  pvVar12 = *(void **)(param_1 + 0x38);
  NullCheck(pvVar12);
  if ((int)*(undefined8 *)((long)pvVar12 + 0x18) < iVar2) {
    local_40 = 0;
    NullCheck(param_2);
    for (local_44 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline
                              (param_2,(MethodInfo *)0x0); 0 < local_44;
        local_44 = il2cpp_codegen_subtract<int,int>(local_44,local_74)) {
      if (*(int *)(param_1 + 0x40) < local_44) {
        local_74 = *(int *)(param_1 + 0x40);
      }
      else {
        local_74 = local_44;
      }
      if ((local_40 < 0) || (local_74 < 0)) {
LAB_027814a8:
        pIVar5 = (Il2CppClass *)
                 il2cpp_codegen_initialize_runtime_metadata_inline
                           ((ulong *)
                            Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_RemoveAtWithCapacity__
                           );
        pEVar6 = (Exception_t *)il2cpp_codegen_object_new(pIVar5);
        uVar7 = il2cpp_codegen_initialize_runtime_metadata_inline
                          ((ulong *)Method_UnityEngine_Component_GetComponent<FullBodyBipedIK>__);
        ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(pEVar6,uVar7,0);
        pMVar8 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar1);
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar6,pMVar8);
      }
      if (((long)local_40 + (long)local_74 < -0x80000000) ||
         (0x7fffffff < (long)local_40 + (long)local_74)) {
        pEVar6 = (Exception_t *)il2cpp_codegen_get_overflow_exception();
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar6,*(MethodInfo **)puVar1);
      }
      NullCheck(param_2);
      iVar2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline
                        (param_2,(MethodInfo *)0x0);
      iVar4 = il2cpp_codegen_add<int,int>(local_40,local_74);
      if (iVar2 < iVar4) goto LAB_027814a8;
      if (param_2 == (String_t *)0x0) {
        local_58 = 0;
      }
      else {
        iVar2 = RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD(0);
        local_58 = il2cpp_codegen_add<long,int>((long)param_2,iVar2);
      }
      pBVar13 = *(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 **)(param_1 + 0x38);
      if ((pBVar13 == (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 *)0x0) ||
         (NullCheck(pBVar13), (int)*(undefined8 *)(pBVar13 + 0x18) == 0)) {
        local_68 = (uchar *)0x0;
      }
      else {
        NullCheck(pBVar13);
        local_68 = (uchar *)ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031::GetAddressAt
                                      (pBVar13,0);
      }
      pIVar11 = *(Il2CppObject **)(param_1 + 0x28);
      if (((long)local_40 * 2 < -0x8000000000000000) || (0x7fffffffffffffff < (long)local_40 * 2)) {
        pEVar6 = (Exception_t *)il2cpp_codegen_get_overflow_exception();
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar6,*(MethodInfo **)puVar1);
      }
      il2cpp_codegen_multiply<long,int>((long)local_40,2);
      pvVar12 = *(void **)(param_1 + 0x38);
      NullCheck(pvVar12);
      NullCheck(pIVar11);
      lVar9 = il2cpp_codegen_multiply<long,int>((long)local_40,2);
      pwVar10 = (wchar16 *)il2cpp_codegen_add<long,long>(local_58,lVar9);
      iVar2 = VirtualFuncInvoker5<int,char16_t*,int,unsigned_char*,int,bool>::Invoke
                        (8,pIVar11,pwVar10,local_74,local_68,
                         (int)*(undefined8 *)((long)pvVar12 + 0x18),local_74 == local_44);
      pIVar11 = *(Il2CppObject **)(param_1 + 0x10);
      pBVar13 = *(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 **)(param_1 + 0x38);
      NullCheck(pIVar11);
      VirtualActionInvoker3<ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*,int,int>::Invoke
                (0x24,pIVar11,pBVar13,0,iVar2);
      local_40 = il2cpp_codegen_add<int,int>(local_40,local_74);
    }
  }
  else {
    pIVar11 = *(Il2CppObject **)(param_1 + 0x20);
    NullCheck(param_2);
    iVar4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline
                      (param_2,(MethodInfo *)0x0);
    pBVar13 = *(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 **)(param_1 + 0x38);
    NullCheck(pIVar11);
    VirtualFuncInvoker5<int,String_t*,int,int,ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*,int>
    ::Invoke(0x14,pIVar11,param_2,0,iVar4,pBVar13,0);
    pIVar11 = *(Il2CppObject **)(param_1 + 0x10);
    pBVar13 = *(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 **)(param_1 + 0x38);
    NullCheck(pIVar11);
    VirtualActionInvoker3<ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*,int,int>::Invoke
              (0x24,pIVar11,pBVar13,0,iVar2);
  }
  return;
}


