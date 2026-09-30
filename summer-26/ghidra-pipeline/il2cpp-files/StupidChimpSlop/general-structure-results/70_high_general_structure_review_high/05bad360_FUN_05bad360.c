/*
FUNCTION_NAME: FUN_05bad360
ENTRY_POINT: 05bad360
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void FUN_05bad360(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  puVar1 = Method_System_Net_Http_HttpMessageInvoker__ctor__;
  puVar2 = Method_System_HashCode_Combine<int,_int>__;
  if ((DAT_06a573ec & 1) == 0) {
    FUN_02d4dc40(System_Collections_Generic_IEnumerator<SwitchCase>_TypeInfo);
    FUN_02d4dc40(Method_System_HashCode_Combine<int,_int>__);
    FUN_02d4dc40(Method_System_Net_Http_HttpMethod__ctor__);
    FUN_02d4dc40(Method_System_Net_HttpProtocolUtils_string2date__);
    FUN_02d4dc40(Method_System_Net_Http_HttpRequestMessage_set_Method__);
    FUN_02d4dc40(Method_System_Net_Http_HttpRequestMessage_set_RequestUri__);
    FUN_02d4dc40(Method_System_Net_Http_HttpResponseMessage_EnsureSuccessStatusCode__);
    FUN_02d4dc40(Method_System_Net_Http_HttpResponseMessage_set_StatusCode__);
    FUN_02d4dc40(Method_System_Net_Http_HttpMessageInvoker__ctor__);
    FUN_02d4dc40(Method_System_Data_DataSet_ReadXmlDiffgram__);
    DAT_06a573ec = 1;
  }
  *(undefined8 *)(param_1 + 0x58) = param_2;
  thunk_FUN_02dc1ef0((undefined8 *)(param_1 + 0x58),param_2);
  lVar4 = FUN_031bf7d4(param_1,*(undefined8 *)puVar1);
  plVar8 = (long *)(param_1 + 0x88);
  *plVar8 = lVar4;
  thunk_FUN_02dc1ef0(plVar8,lVar4);
  uVar5 = FUN_0319d120(param_1,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x90) = uVar5;
  thunk_FUN_02dc1ef0((undefined8 *)(param_1 + 0x90),uVar5);
  puVar1 = Method_System_Net_Http_HttpMethod__ctor__;
  puVar2 = Method_System_Data_DataSet_ReadXmlDiffgram__;
  if ((*plVar8 != 0) && (plVar6 = *(long **)(param_1 + 0x60), plVar6 != (long *)0x0)) {
    (**(code **)(*plVar6 + 0x5e8))
              (plVar6,*(undefined8 *)(*plVar8 + 0x30),*(undefined8 *)(*plVar6 + 0x5f0));
    lVar4 = *(long *)(param_1 + 0x70);
    uVar5 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
    FUN_04c44350(uVar5,param_1,*(undefined8 *)puVar1,0);
    puVar3 = Method_System_Net_HttpProtocolUtils_string2date__;
    puVar1 = System_Collections_Generic_IEnumerator<SwitchCase>_TypeInfo;
    if (lVar4 != 0) {
      puVar7 = (undefined8 *)(lVar4 + 0x70);
      *puVar7 = uVar5;
      thunk_FUN_02dc1ef0(puVar7,uVar5);
      lVar4 = *(long *)(param_1 + 0x70);
      uVar5 = thunk_FUN_02d8a638(*(undefined8 *)puVar1);
      FUN_04d2a320(uVar5,param_1,*(undefined8 *)puVar3,0);
      if (lVar4 != 0) {
        puVar7 = (undefined8 *)(lVar4 + 0x78);
        *puVar7 = uVar5;
        thunk_FUN_02dc1ef0(puVar7,uVar5);
        puVar3 = Method_System_Net_Http_HttpRequestMessage_set_Method__;
        if (*(long *)(param_1 + 0x70) != 0) {
          *(undefined8 *)(*(long *)(param_1 + 0x70) + 0x50) = *(undefined8 *)(param_1 + 0x78);
          thunk_FUN_02dc1ef0();
          FUN_05bad688(param_1,*(undefined8 *)(param_1 + 0x70));
          lVar4 = *(long *)(param_1 + 0x78);
          uVar5 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
          FUN_04c44350(uVar5,param_1,*(undefined8 *)puVar3,0);
          puVar3 = Method_System_Net_Http_HttpRequestMessage_set_RequestUri__;
          if (lVar4 != 0) {
            puVar7 = (undefined8 *)(lVar4 + 0x70);
            *puVar7 = uVar5;
            thunk_FUN_02dc1ef0(puVar7,uVar5);
            lVar4 = *(long *)(param_1 + 0x78);
            uVar5 = thunk_FUN_02d8a638(*(undefined8 *)puVar1);
            FUN_04d2a320(uVar5,param_1,*(undefined8 *)puVar3,0);
            if (lVar4 != 0) {
              puVar7 = (undefined8 *)(lVar4 + 0x78);
              *puVar7 = uVar5;
              thunk_FUN_02dc1ef0(puVar7,uVar5);
              if (*(long *)(param_1 + 0x78) != 0) {
                *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x48) = *(undefined8 *)(param_1 + 0x70);
                thunk_FUN_02dc1ef0();
                puVar3 = Method_System_Net_Http_HttpResponseMessage_EnsureSuccessStatusCode__;
                if (*(long *)(param_1 + 0x78) != 0) {
                  *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x50) =
                       *(undefined8 *)(param_1 + 0x80);
                  thunk_FUN_02dc1ef0();
                  FUN_05bad688(param_1,*(undefined8 *)(param_1 + 0x78));
                  lVar4 = *(long *)(param_1 + 0x80);
                  uVar5 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
                  FUN_04c44350(uVar5,param_1,*(undefined8 *)puVar3,0);
                  puVar2 = Method_System_Net_Http_HttpResponseMessage_set_StatusCode__;
                  if (lVar4 != 0) {
                    puVar7 = (undefined8 *)(lVar4 + 0x70);
                    *puVar7 = uVar5;
                    thunk_FUN_02dc1ef0(puVar7,uVar5);
                    lVar4 = *(long *)(param_1 + 0x80);
                    uVar5 = thunk_FUN_02d8a638(*(undefined8 *)puVar1);
                    FUN_04d2a320(uVar5,param_1,*(undefined8 *)puVar2,0);
                    if (lVar4 != 0) {
                      puVar7 = (undefined8 *)(lVar4 + 0x78);
                      *puVar7 = uVar5;
                      thunk_FUN_02dc1ef0(puVar7,uVar5);
                      if (*(long *)(param_1 + 0x80) != 0) {
                        *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x48) =
                             *(undefined8 *)(param_1 + 0x78);
                        thunk_FUN_02dc1ef0();
                        FUN_05bad688(param_1,*(undefined8 *)(param_1 + 0x80));
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


