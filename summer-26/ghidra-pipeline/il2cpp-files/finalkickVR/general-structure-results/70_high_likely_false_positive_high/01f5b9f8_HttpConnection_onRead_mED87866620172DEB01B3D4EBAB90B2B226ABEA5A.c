/*
FUNCTION_NAME: HttpConnection_onRead_mED87866620172DEB01B3D4EBAB90B2B226ABEA5A
ENTRY_POINT: 01f5b9f8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;data_collection;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_13;strong_file_logging_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;negative_known_unity_or_il2cpp_false_positive_family;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void HttpConnection_onRead_mED87866620172DEB01B3D4EBAB90B2B226ABEA5A
               (Il2CppObject *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C *pAVar5;
  __28 *extraout_x1;
  void *pvVar6;
  Il2CppObject *pIVar7;
  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 *pBVar8;
  Il2CppObject *pIVar9;
  HttpListenerContext_tECC4D05334EF1D3F0F9A84EB5354F025AAB99463 *pHVar10;
  Il2CppObject *pIVar11;
  undefined1 *local_b8;
  undefined8 *local_b0;
  FinallyHelper<HttpConnection_onRead_mED87866620172DEB01B3D4EBAB90B2B226ABEA5A::__28,false>
  aFStack_a8 [24];
  undefined8 local_90;
  Il2CppObject *local_88;
  long local_80;
  Il2CppObject *local_78;
  Il2CppObject *local_70;
  Il2CppObject *local_68;
  ExceptionSupportStack<Il2CppObject*,1> aEStack_60 [16];
  void *local_50;
  int local_48;
  undefined1 local_41;
  undefined8 local_40;
  Il2CppObject *local_38;
  undefined8 local_30;
  Il2CppObject *local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  if ((HttpConnection_onRead_mED87866620172DEB01B3D4EBAB90B2B226ABEA5A::s_Il2CppMethodInitialized &
      1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputActionState>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_LinkedList<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebConnection,_Task>>_AddLast__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_LinkedList<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>>_Remove__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_KeyValuePair<int,_Vector2>_get_Key__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_UIR_LinkedPool<GradientRemap>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_UIR_LinkedPool<GradientRemap>_Get__);
    HttpConnection_onRead_mED87866620172DEB01B3D4EBAB90B2B226ABEA5A::s_Il2CppMethodInitialized = 1;
  }
  local_38 = (Il2CppObject *)0x0;
  local_40 = 0;
  local_41 = 0;
  local_48 = 0;
  local_50 = (void *)0x0;
  il2cpp::utils::ExceptionSupportStack<Il2CppObject*,1>::ExceptionSupportStack(aEStack_60);
  local_68 = local_28;
  NullCheck(local_28);
  local_70 = (Il2CppObject *)
             InterfaceFuncInvoker0<Il2CppObject*>::Invoke
                       (2,*(Il2CppClass **)
                           Method_System_Collections_Generic_KeyValuePair<int,_Vector2>_get_Key__,
                        local_68);
  local_78 = (Il2CppObject *)
             CastclassSealed(local_70,*(Il2CppClass **)
                                       Method_System_Collections_Generic_LinkedList<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>>_Remove__
                            );
  local_38 = local_78;
  NullCheck(local_78);
  local_80 = *(long *)(local_78 + 0x88);
  if (local_80 != 0) {
    local_88 = local_38;
    NullCheck(local_38);
    local_90 = *(undefined8 *)(local_88 + 0x98);
    local_b0 = &local_40;
    local_41 = 0;
    local_b8 = &local_41;
    local_40 = local_90;
    il2cpp::utils::Finally<HttpConnection_onRead_mED87866620172DEB01B3D4EBAB90B2B226ABEA5A::__28>
              ((utils *)&local_b8,extraout_x1);
    Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(local_40,&local_41,0);
    pIVar7 = local_38;
    NullCheck(local_38);
    pIVar9 = local_38;
    if (*(long *)(pIVar7 + 0x88) != 0) {
      local_48 = 0xffffffff;
      NullCheck(local_38);
      pvVar6 = *(void **)(pIVar9 + 0xa8);
      NullCheck(pvVar6);
      Timer_Change_mC17480F2947443FCEF2D5A47DAF0E74D55DE0A57(pvVar6,0xffffffff,0xffffffff,0);
      pIVar7 = local_38;
      NullCheck(local_38);
      pIVar9 = local_28;
      pIVar7 = *(Il2CppObject **)(pIVar7 + 0x90);
      NullCheck(pIVar7);
      local_48 = VirtualFuncInvoker1<int,Il2CppObject*>::Invoke(0x18,pIVar7,pIVar9);
      pIVar7 = local_38;
      NullCheck(local_38);
      pIVar9 = local_38;
      pIVar7 = *(Il2CppObject **)(pIVar7 + 0x78);
      NullCheck(local_38);
      iVar1 = local_48;
      pBVar8 = *(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 **)(pIVar9 + 0x10);
      NullCheck(pIVar7);
      VirtualActionInvoker3<ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*,int,int>::Invoke
                (0x24,pIVar7,pBVar8,0,iVar1);
      pIVar7 = local_38;
      NullCheck(local_38);
      pIVar7 = *(Il2CppObject **)(pIVar7 + 0x78);
      NullCheck(pIVar7);
      lVar3 = VirtualFuncInvoker0<long>::Invoke(0xb,pIVar7);
      pIVar7 = local_38;
      if (lVar3 < 0x8001) {
        if (local_48 < 1) {
          NullCheck(local_38);
          HttpConnection_close_m085648CA42F08A3939AEFC36691AE5C86474F4C4(pIVar7,0);
        }
        else {
          NullCheck(local_38);
          pIVar9 = *(Il2CppObject **)(pIVar7 + 0x78);
          NullCheck(pIVar9);
          uVar4 = VirtualFuncInvoker0<ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*>::Invoke
                            (0x27,pIVar9);
          NullCheck(pIVar7);
          uVar2 = HttpConnection_processInput_m83A82D7AE00EA478C0F6964C39FB9EFE54B1E664
                            (pIVar7,uVar4,0);
          pIVar7 = local_38;
          if ((uVar2 & 1) == 0) {
            NullCheck(local_38);
            pIVar9 = local_38;
            pIVar11 = *(Il2CppObject **)(pIVar7 + 0x90);
            NullCheck(local_38);
            pBVar8 = *(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 **)(pIVar9 + 0x10);
            pAVar5 = (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C *)
                     il2cpp_codegen_object_new
                               (*(Il2CppClass **)
                                 Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputActionState>_Clear__
                               );
            AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC
                      (pAVar5,0,*(undefined8 *)
                                 Method_System_Collections_Generic_LinkedList<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebConnection,_Task>>_AddLast__
                      );
            pIVar7 = local_38;
            NullCheck(pIVar11);
            VirtualFuncInvoker5<Il2CppObject*,ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*,int,int,AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*,Il2CppObject*>
            ::Invoke(0x17,pIVar11,pBVar8,0,0x2000,pAVar5,pIVar7);
          }
          else {
            NullCheck(local_38);
            pvVar6 = *(void **)(pIVar7 + 0x20);
            NullCheck(pvVar6);
            uVar2 = HttpListenerContext_get_HasError_m2EAAA5BD1B7450BB9D433F9805C8D4306EED6A0C
                              (pvVar6,0);
            pIVar7 = local_38;
            if ((uVar2 & 1) == 0) {
              NullCheck(local_38);
              pHVar10 = *(HttpListenerContext_tECC4D05334EF1D3F0F9A84EB5354F025AAB99463 **)
                         (pIVar7 + 0x20);
              NullCheck(pHVar10);
              pvVar6 = (void *)HttpListenerContext_get_Request_m1DF07E6C2BEE06F92FA5F58A72DA37E8FE666A11_inline
                                         (pHVar10,(MethodInfo *)0x0);
              NullCheck(pvVar6);
              HttpListenerRequest_FinishInitialization_m901A76468CBFB22A376E4CF03CB109D04B8E9D17
                        (pvVar6,0);
            }
            pIVar7 = local_38;
            NullCheck(local_38);
            pvVar6 = *(void **)(pIVar7 + 0x20);
            NullCheck(pvVar6);
            uVar2 = HttpListenerContext_get_HasError_m2EAAA5BD1B7450BB9D433F9805C8D4306EED6A0C
                              (pvVar6,0);
            pIVar7 = local_38;
            if ((uVar2 & 1) == 0) {
              NullCheck(local_38);
              pIVar9 = local_38;
              pvVar6 = *(void **)(pIVar7 + 0x58);
              NullCheck(local_38);
              uVar4 = *(undefined8 *)(pIVar9 + 0x20);
              NullCheck(pvVar6);
              uVar2 = EndPointListener_BindContext_mEC27AF89DBAA7F736030F7F272A2F1A2344E3F4F
                                (pvVar6,uVar4,0);
              pIVar7 = local_38;
              if ((uVar2 & 1) == 0) {
                NullCheck(local_38);
                HttpConnection_SendError_mE4B0DAADD8DAAAE0438BF40AEAD59998C1BF4148
                          (pIVar7,*(undefined8 *)
                                   Method_UnityEngine_UIElements_UIR_LinkedPool<GradientRemap>_Get__
                           ,400,0);
                pIVar7 = local_38;
                NullCheck(local_38);
                HttpConnection_Close_m53AA5F6BC14E44DC3AEE76AEFF060E3FE43D72D3(pIVar7,1,0);
              }
              else {
                NullCheck(local_38);
                pvVar6 = *(void **)(pIVar7 + 0x20);
                NullCheck(pvVar6);
                pIVar7 = local_38;
                local_50 = *(void **)((long)pvVar6 + 0x40);
                NullCheck(local_38);
                pIVar9 = local_38;
                if (*(void **)(pIVar7 + 0x48) != local_50) {
                  NullCheck(local_38);
                  HttpConnection_removeConnection_m341DB77302AD988695450D64D919C520F46645C6
                            (pIVar9,0);
                  pIVar7 = local_38;
                  pvVar6 = local_50;
                  NullCheck(local_50);
                  HttpListener_AddConnection_m38B6F33804F8EC4CF77472CBD19B2F9C39B4006B
                            (pvVar6,pIVar7,0);
                  pIVar7 = local_38;
                  pvVar6 = local_50;
                  NullCheck(local_38);
                  *(void **)(pIVar7 + 0x48) = pvVar6;
                  Il2CppCodeGenWriteBarrier((void **)(pIVar7 + 0x48),pvVar6);
                }
                pIVar7 = local_38;
                NullCheck(local_38);
                pIVar9 = local_38;
                pvVar6 = local_50;
                pIVar7[0x28] = (Il2CppObject)0x1;
                NullCheck(local_38);
                uVar4 = *(undefined8 *)(pIVar9 + 0x20);
                NullCheck(pvVar6);
                HttpListener_RegisterContext_mD61B1675EC217A90112A534D37E98DA174426212
                          (pvVar6,uVar4,0);
              }
            }
            else {
              NullCheck(local_38);
              HttpConnection_SendError_m39A2ACD9998E080166FEE7CB303FB65DD5A9A630(pIVar7,0);
              pIVar7 = local_38;
              NullCheck(local_38);
              HttpConnection_Close_m53AA5F6BC14E44DC3AEE76AEFF060E3FE43D72D3(pIVar7,1,0);
            }
          }
        }
      }
      else {
        NullCheck(local_38);
        HttpConnection_SendError_mE4B0DAADD8DAAAE0438BF40AEAD59998C1BF4148
                  (pIVar7,*(undefined8 *)
                           Method_UnityEngine_UIElements_UIR_LinkedPool<GradientRemap>_Clear__,400,0
                  );
        pIVar7 = local_38;
        NullCheck(local_38);
        HttpConnection_Close_m53AA5F6BC14E44DC3AEE76AEFF060E3FE43D72D3(pIVar7,1,0);
      }
    }
    il2cpp::utils::
    FinallyHelper<HttpConnection_onRead_mED87866620172DEB01B3D4EBAB90B2B226ABEA5A::$_28,false>::
    ~FinallyHelper(aFStack_a8);
  }
  return;
}


