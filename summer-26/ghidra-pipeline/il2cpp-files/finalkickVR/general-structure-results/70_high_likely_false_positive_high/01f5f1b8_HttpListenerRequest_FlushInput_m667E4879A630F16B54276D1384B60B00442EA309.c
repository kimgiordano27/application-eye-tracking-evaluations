/*
FUNCTION_NAME: HttpListenerRequest_FlushInput_m667E4879A630F16B54276D1384B60B00442EA309
ENTRY_POINT: 01f5f1b8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 82
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;data_collection;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_10;strong_file_logging_hits_4;telemetry_or_network_hits_7;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_known_unity_or_il2cpp_false_positive_family
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1
HttpListenerRequest_FlushInput_m667E4879A630F16B54276D1384B60B00442EA309
          (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 *pBVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  Il2CppObject *pIVar6;
  Il2CppObject *pIVar7;
  undefined8 uVar8;
  ExceptionSupportStack<Il2CppObject*,1> aEStack_68 [23];
  undefined1 local_51;
  Il2CppObject *local_50;
  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 *local_48;
  uint local_3c;
  undefined8 local_38;
  long local_30;
  undefined1 local_21;
  
  puVar1 = Method_System_Collections_Generic_KeyValuePair<int,_Vector2>_get_Key__;
  local_38 = param_2;
  local_30 = param_1;
  if ((HttpListenerRequest_FlushInput_m667E4879A630F16B54276D1384B60B00442EA309::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_Clear__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_ReflectionProbeManager_CachedProbe>_GetEnumerator__
              );
    HttpListenerRequest_FlushInput_m667E4879A630F16B54276D1384B60B00442EA309::
    s_Il2CppMethodInitialized = 1;
  }
  local_3c = 0;
  local_48 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 *)0x0;
  local_50 = (Il2CppObject *)0x0;
  local_51 = 0;
  il2cpp::utils::ExceptionSupportStack<Il2CppObject*,1>::ExceptionSupportStack(aEStack_68);
  bVar3 = HttpListenerRequest_get_HasEntityBody_mB1C634664D8832FC4BA4AD6623F5DE5E7DE6F982
                    (local_30,0);
  if ((bVar3 & 1) == 0) {
    local_21 = 1;
  }
  else {
    local_3c = 0x800;
    if (0 < *(long *)(local_30 + 0x28)) {
      uVar8 = *(undefined8 *)(local_30 + 0x28);
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_Dictionary<int,_ReflectionProbeManager_CachedProbe>_GetEnumerator__
                );
      local_3c = Math_Min_mD731E8A02F13C67C1EAC7C1E7F81909FE466F079(uVar8,0x800,0);
    }
    local_48 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 *)
               SZArrayNew(*(Il2CppClass **)
                           Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_Clear__
                          ,local_3c);
    do {
      pIVar6 = (Il2CppObject *)
               HttpListenerRequest_get_InputStream_m7EEBF9CD7AC9E92D0B334D179FFFC04B30BED4FE
                         (local_30,0);
      uVar4 = local_3c;
      pBVar2 = local_48;
      NullCheck(pIVar6);
      pIVar6 = (Il2CppObject *)
               VirtualFuncInvoker5<Il2CppObject*,ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*,int,int,AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*,Il2CppObject*>
               ::Invoke(0x17,pIVar6,pBVar2,0,uVar4,
                        (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C *)0x0,
                        (Il2CppObject *)0x0);
      local_50 = pIVar6;
      NullCheck(pIVar6);
      uVar4 = InterfaceFuncInvoker0<bool>::Invoke(0,*(Il2CppClass **)puVar1,pIVar6);
      pIVar6 = local_50;
      if ((uVar4 & 1) == 0) {
        NullCheck(local_50);
        pIVar6 = (Il2CppObject *)
                 InterfaceFuncInvoker0<WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8*>::
                 Invoke(1,*(Il2CppClass **)puVar1,pIVar6);
        NullCheck(pIVar6);
        uVar4 = VirtualFuncInvoker1<bool,int>::Invoke(0xb,pIVar6,100);
        if ((uVar4 & 1) == 0) {
          local_51 = 0;
          goto LAB_01f5f5bc;
        }
      }
      pIVar7 = (Il2CppObject *)
               HttpListenerRequest_get_InputStream_m7EEBF9CD7AC9E92D0B334D179FFFC04B30BED4FE
                         (local_30,0);
      pIVar6 = local_50;
      NullCheck(pIVar7);
      iVar5 = VirtualFuncInvoker1<int,Il2CppObject*>::Invoke(0x18,pIVar7,pIVar6);
    } while (0 < iVar5);
    local_51 = 1;
LAB_01f5f5bc:
    local_21 = local_51;
  }
  return local_21;
}


