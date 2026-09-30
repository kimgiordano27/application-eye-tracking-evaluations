/*
FUNCTION_NAME: FUN_0645dea0
ENTRY_POINT: 0645dea0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_11;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0645dea0(long param_1,long param_2,long param_3)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_40 [16];
  
  if ((DAT_06dcce35 & 1) == 0) {
    FUN_02d965b8(
                Method_System_Net_Http_Headers_HttpRequestHeaders_<>c_<get_ConnectionClose>b__19_0__
                );
    FUN_02d965b8(Method_System_Net_Http_Headers_HttpRequestHeaders_<>c_<get_ExpectContinue>b__29_0__
                );
    FUN_02d965b8(Method_System_Net_Http_HttpClient_<SendAsyncWorker>d__47_MoveNext__);
    FUN_02d965b8(
                Method_System_Net_Http_Headers_HttpRequestHeaders_<>c_<get_TransferEncodingChunked>b__71_0__
                );
    FUN_02d965b8(Method_System_Net_HttpWebRequest_<GetResponseFromData>d__244_MoveNext__);
    DAT_06dcce35 = 1;
  }
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  auVar1 = ZEXT816(0);
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar2 = FUN_03c23c0c(*(long *)(param_1 + 0x28),param_2,
                         *(undefined8 *)
                          Method_System_Net_HttpWebRequest_<GetResponseFromData>d__244_MoveNext__);
    auVar1._8_8_ = local_40._8_8_;
    auVar1._0_8_ = local_40._0_8_;
    if ((uVar2 & 1) == 0) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_0645e000;
      uVar2 = FUN_04ef1e2c(*(long *)(param_1 + 0x20),param_2,local_40,
                           *(undefined8 *)
                            Method_System_Net_Http_HttpClient_<SendAsyncWorker>d__47_MoveNext__);
      if ((uVar2 & 1) == 0) {
        thunk_FUN_02dfd288(PTR_DAT_069ff3c8);
        uVar3 = thunk_FUN_02dd3144();
        uVar4 = thunk_FUN_02dfd288(
                                  Method_System_Net_HttpWebRequest_<MyGetResponseAsync>d__243_MoveNext__
                                  );
        FUN_054e8008(uVar3,uVar4,0);
        uVar4 = thunk_FUN_02dfd288(Method_UnityEngine_UIElements_IMEEvent_<>c_<_cctor>b__4_0__);
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar3,uVar4);
      }
    }
    else {
      local_40 = FUN_0646059c();
      auVar1 = local_40;
      if ((*(long *)(param_1 + 0x20) == 0) ||
         (FUN_04ef0394(*(long *)(param_1 + 0x20),param_2,local_40._0_8_,local_40._8_8_,
                       *(undefined8 *)
                        Method_System_Net_Http_Headers_HttpRequestHeaders_<>c_<get_ExpectContinue>b__29_0__
                      ), auVar1 = local_40, param_2 == 0)) goto LAB_0645e000;
      FUN_0359fb70(param_2,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x20),0,
                   *(undefined8 *)
                    Method_System_Net_Http_Headers_HttpRequestHeaders_<>c_<get_ConnectionClose>b__19_0__
                  );
    }
    auVar1 = local_40;
    if ((param_3 != 0) && (*(long *)(param_3 + 0xb8) != 0)) {
      *(undefined1 *)(*(long *)(param_3 + 0xb8) + 0x10) = 1;
      FUN_06460678(local_40,param_3);
      auVar1 = local_40;
      if (*(long *)(param_1 + 0x20) != 0) {
        FUN_04ef0380(*(long *)(param_1 + 0x20),param_2,local_40._0_8_,local_40._8_8_,
                     *(undefined8 *)
                      Method_System_Net_Http_Headers_HttpRequestHeaders_<>c_<get_TransferEncodingChunked>b__71_0__
                    );
        *(undefined1 *)(param_1 + 0x38) = 1;
        return;
      }
    }
  }
LAB_0645e000:
  local_40 = auVar1;
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


