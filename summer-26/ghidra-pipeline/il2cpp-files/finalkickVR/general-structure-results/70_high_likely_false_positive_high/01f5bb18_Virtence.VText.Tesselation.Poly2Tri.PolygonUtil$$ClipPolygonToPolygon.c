/*
FUNCTION_NAME: Virtence.VText.Tesselation.Poly2Tri.PolygonUtil$$ClipPolygonToPolygon
ENTRY_POINT: 01f5bb18
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 76
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;data_collection;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_11;strong_file_logging_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;negative_known_unity_or_il2cpp_false_positive_family
*/


void Virtence_VText_Tesselation_Poly2Tri_PolygonUtil__ClipPolygonToPolygon
               (undefined8 param_1,__28 *param_2)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C *pAVar7;
  Il2CppObject *pIVar8;
  void *pvVar9;
  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 *pBVar10;
  void *pvVar11;
  HttpListenerContext_tECC4D05334EF1D3F0F9A84EB5354F025AAB99463 *pHVar12;
  Il2CppObject *pIVar13;
  long unaff_x29;
  long lStack0000000000000070;
  
  *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0x70);
  lStack0000000000000070 = unaff_x29 + -0x21;
  *(undefined1 *)(unaff_x29 + -0x21) = 0;
  *(long *)(unaff_x29 + -0x98) = lStack0000000000000070;
  *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0x20;
  il2cpp::utils::Finally<HttpConnection_onRead_mED87866620172DEB01B3D4EBAB90B2B226ABEA5A::__28>
            ((utils *)(unaff_x29 + -0x98),param_2);
  *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0x20);
  Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149
            (*(undefined8 *)(unaff_x29 + -0xa0),lStack0000000000000070,0);
  *(undefined8 *)(unaff_x29 + -0xb8) = *(undefined8 *)(unaff_x29 + -0x18);
  NullCheck(*(void **)(unaff_x29 + -0xb8));
  *(undefined8 *)(unaff_x29 + -0xc0) = *(undefined8 *)(*(long *)(unaff_x29 + -0xb8) + 0x88);
  if (*(long *)(unaff_x29 + -0xc0) != 0) {
    *(undefined4 *)(unaff_x29 + -0x28) = 0xffffffff;
    *(undefined8 *)(unaff_x29 + -200) = *(undefined8 *)(unaff_x29 + -0x18);
    NullCheck(*(void **)(unaff_x29 + -200));
    *(undefined8 *)(unaff_x29 + -0xd0) = *(undefined8 *)(*(long *)(unaff_x29 + -200) + 0xa8);
    NullCheck(*(void **)(unaff_x29 + -0xd0));
    bVar2 = Timer_Change_mC17480F2947443FCEF2D5A47DAF0E74D55DE0A57
                      (*(undefined8 *)(unaff_x29 + -0xd0),0xffffffff,0xffffffff,0);
    *(byte *)(unaff_x29 + -0xd1) = bVar2 & 1;
    *(undefined8 *)(unaff_x29 + -0xe0) = *(undefined8 *)(unaff_x29 + -0x18);
    NullCheck(*(void **)(unaff_x29 + -0xe0));
    *(undefined8 *)(unaff_x29 + -0xe8) = *(undefined8 *)(*(long *)(unaff_x29 + -0xe0) + 0x90);
    *(undefined8 *)(unaff_x29 + -0xf0) = *(undefined8 *)(unaff_x29 + -8);
    NullCheck(*(void **)(unaff_x29 + -0xe8));
    uVar3 = VirtualFuncInvoker1<int,Il2CppObject*>::Invoke
                      (0x18,*(Il2CppObject **)(unaff_x29 + -0xe8),
                       *(Il2CppObject **)(unaff_x29 + -0xf0));
    *(undefined4 *)(unaff_x29 + -0xf4) = uVar3;
    *(undefined4 *)(unaff_x29 + -0x28) = *(undefined4 *)(unaff_x29 + -0xf4);
    *(undefined8 *)(unaff_x29 + -0x100) = *(undefined8 *)(unaff_x29 + -0x18);
    NullCheck(*(void **)(unaff_x29 + -0x100));
    pIVar8 = *(Il2CppObject **)(*(long *)(unaff_x29 + -0x100) + 0x78);
    pvVar9 = *(void **)(unaff_x29 + -0x18);
    NullCheck(pvVar9);
    pBVar10 = *(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 **)((long)pvVar9 + 0x10);
    iVar1 = *(int *)(unaff_x29 + -0x28);
    NullCheck(pIVar8);
    VirtualActionInvoker3<ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*,int,int>::Invoke
              (0x24,pIVar8,pBVar10,0,iVar1);
    pvVar9 = *(void **)(unaff_x29 + -0x18);
    NullCheck(pvVar9);
    pIVar8 = *(Il2CppObject **)((long)pvVar9 + 0x78);
    NullCheck(pIVar8);
    lVar5 = VirtualFuncInvoker0<long>::Invoke(0xb,pIVar8);
    if (lVar5 < 0x8001) {
      if (*(int *)(unaff_x29 + -0x28) < 1) {
        pvVar9 = *(void **)(unaff_x29 + -0x18);
        NullCheck(pvVar9);
        HttpConnection_close_m085648CA42F08A3939AEFC36691AE5C86474F4C4(pvVar9,0);
      }
      else {
        pvVar9 = *(void **)(unaff_x29 + -0x18);
        pvVar11 = *(void **)(unaff_x29 + -0x18);
        NullCheck(pvVar11);
        pIVar8 = *(Il2CppObject **)((long)pvVar11 + 0x78);
        NullCheck(pIVar8);
        uVar6 = VirtualFuncInvoker0<ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*>::Invoke
                          (0x27,pIVar8);
        NullCheck(pvVar9);
        uVar4 = HttpConnection_processInput_m83A82D7AE00EA478C0F6964C39FB9EFE54B1E664
                          (pvVar9,uVar6,0);
        if ((uVar4 & 1) == 0) {
          pvVar9 = *(void **)(unaff_x29 + -0x18);
          NullCheck(pvVar9);
          pIVar8 = *(Il2CppObject **)((long)pvVar9 + 0x90);
          pvVar9 = *(void **)(unaff_x29 + -0x18);
          NullCheck(pvVar9);
          pBVar10 = *(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 **)((long)pvVar9 + 0x10);
          pAVar7 = (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C *)
                   il2cpp_codegen_object_new
                             (*(Il2CppClass **)
                               Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputActionState>_Clear__
                             );
          AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC
                    (pAVar7,0,*(undefined8 *)
                               Method_System_Collections_Generic_LinkedList<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebConnection,_Task>>_AddLast__
                    );
          pIVar13 = *(Il2CppObject **)(unaff_x29 + -0x18);
          NullCheck(pIVar8);
          VirtualFuncInvoker5<Il2CppObject*,ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*,int,int,AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*,Il2CppObject*>
          ::Invoke(0x17,pIVar8,pBVar10,0,0x2000,pAVar7,pIVar13);
        }
        else {
          pvVar9 = *(void **)(unaff_x29 + -0x18);
          NullCheck(pvVar9);
          pvVar9 = *(void **)((long)pvVar9 + 0x20);
          NullCheck(pvVar9);
          uVar4 = HttpListenerContext_get_HasError_m2EAAA5BD1B7450BB9D433F9805C8D4306EED6A0C
                            (pvVar9,0);
          if ((uVar4 & 1) == 0) {
            pvVar9 = *(void **)(unaff_x29 + -0x18);
            NullCheck(pvVar9);
            pHVar12 = *(HttpListenerContext_tECC4D05334EF1D3F0F9A84EB5354F025AAB99463 **)
                       ((long)pvVar9 + 0x20);
            NullCheck(pHVar12);
            pvVar9 = (void *)HttpListenerContext_get_Request_m1DF07E6C2BEE06F92FA5F58A72DA37E8FE666A11_inline
                                       (pHVar12,(MethodInfo *)0x0);
            NullCheck(pvVar9);
            HttpListenerRequest_FinishInitialization_m901A76468CBFB22A376E4CF03CB109D04B8E9D17
                      (pvVar9,0);
          }
          pvVar9 = *(void **)(unaff_x29 + -0x18);
          NullCheck(pvVar9);
          pvVar9 = *(void **)((long)pvVar9 + 0x20);
          NullCheck(pvVar9);
          uVar4 = HttpListenerContext_get_HasError_m2EAAA5BD1B7450BB9D433F9805C8D4306EED6A0C
                            (pvVar9,0);
          if ((uVar4 & 1) == 0) {
            pvVar9 = *(void **)(unaff_x29 + -0x18);
            NullCheck(pvVar9);
            pvVar9 = *(void **)((long)pvVar9 + 0x58);
            pvVar11 = *(void **)(unaff_x29 + -0x18);
            NullCheck(pvVar11);
            uVar6 = *(undefined8 *)((long)pvVar11 + 0x20);
            NullCheck(pvVar9);
            uVar4 = EndPointListener_BindContext_mEC27AF89DBAA7F736030F7F272A2F1A2344E3F4F
                              (pvVar9,uVar6,0);
            if ((uVar4 & 1) == 0) {
              pvVar9 = *(void **)(unaff_x29 + -0x18);
              NullCheck(pvVar9);
              HttpConnection_SendError_mE4B0DAADD8DAAAE0438BF40AEAD59998C1BF4148
                        (pvVar9,*(undefined8 *)
                                 Method_UnityEngine_UIElements_UIR_LinkedPool<GradientRemap>_Get__,
                         400,0);
              pvVar9 = *(void **)(unaff_x29 + -0x18);
              NullCheck(pvVar9);
              HttpConnection_Close_m53AA5F6BC14E44DC3AEE76AEFF060E3FE43D72D3(pvVar9,1,0);
            }
            else {
              pvVar9 = *(void **)(unaff_x29 + -0x18);
              NullCheck(pvVar9);
              pvVar9 = *(void **)((long)pvVar9 + 0x20);
              NullCheck(pvVar9);
              *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)((long)pvVar9 + 0x40);
              pvVar9 = *(void **)(unaff_x29 + -0x18);
              NullCheck(pvVar9);
              if (*(long *)((long)pvVar9 + 0x48) != *(long *)(unaff_x29 + -0x30)) {
                pvVar9 = *(void **)(unaff_x29 + -0x18);
                NullCheck(pvVar9);
                HttpConnection_removeConnection_m341DB77302AD988695450D64D919C520F46645C6(pvVar9,0);
                pvVar9 = *(void **)(unaff_x29 + -0x30);
                uVar6 = *(undefined8 *)(unaff_x29 + -0x18);
                NullCheck(pvVar9);
                HttpListener_AddConnection_m38B6F33804F8EC4CF77472CBD19B2F9C39B4006B(pvVar9,uVar6,0)
                ;
                pvVar9 = *(void **)(unaff_x29 + -0x18);
                pvVar11 = *(void **)(unaff_x29 + -0x30);
                NullCheck(pvVar9);
                *(void **)((long)pvVar9 + 0x48) = pvVar11;
                Il2CppCodeGenWriteBarrier((void **)((long)pvVar9 + 0x48),pvVar11);
              }
              pvVar9 = *(void **)(unaff_x29 + -0x18);
              NullCheck(pvVar9);
              *(undefined1 *)((long)pvVar9 + 0x28) = 1;
              pvVar9 = *(void **)(unaff_x29 + -0x30);
              pvVar11 = *(void **)(unaff_x29 + -0x18);
              NullCheck(pvVar11);
              uVar6 = *(undefined8 *)((long)pvVar11 + 0x20);
              NullCheck(pvVar9);
              HttpListener_RegisterContext_mD61B1675EC217A90112A534D37E98DA174426212(pvVar9,uVar6,0)
              ;
            }
          }
          else {
            pvVar9 = *(void **)(unaff_x29 + -0x18);
            NullCheck(pvVar9);
            HttpConnection_SendError_m39A2ACD9998E080166FEE7CB303FB65DD5A9A630(pvVar9,0);
            pvVar9 = *(void **)(unaff_x29 + -0x18);
            NullCheck(pvVar9);
            HttpConnection_Close_m53AA5F6BC14E44DC3AEE76AEFF060E3FE43D72D3(pvVar9,1,0);
          }
        }
      }
    }
    else {
      pvVar9 = *(void **)(unaff_x29 + -0x18);
      NullCheck(pvVar9);
      HttpConnection_SendError_mE4B0DAADD8DAAAE0438BF40AEAD59998C1BF4148
                (pvVar9,*(undefined8 *)
                         Method_UnityEngine_UIElements_UIR_LinkedPool<GradientRemap>_Clear__,400,0);
      pvVar9 = *(void **)(unaff_x29 + -0x18);
      NullCheck(pvVar9);
      HttpConnection_Close_m53AA5F6BC14E44DC3AEE76AEFF060E3FE43D72D3(pvVar9,1,0);
    }
  }
  il2cpp::utils::
  FinallyHelper<HttpConnection_onRead_mED87866620172DEB01B3D4EBAB90B2B226ABEA5A::$_28,false>::
  ~FinallyHelper((FinallyHelper<HttpConnection_onRead_mED87866620172DEB01B3D4EBAB90B2B226ABEA5A::__28,false>
                  *)(unaff_x29 + -0x88));
  return;
}


