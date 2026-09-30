/*
FUNCTION_NAME: FUN_05f81f2c
ENTRY_POINT: 05f81f2c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_8;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05f81f2c(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  puVar2 = PTR_DAT_0664b8f0;
  if ((DAT_06a5db56 & 1) == 0) {
    FUN_02d4dc40(Method_System_Net_HttpListenerRequest_Context_GetChannelBinding__);
    FUN_02d4dc40(
                Method_System_Net_Http_Headers_HttpRequestHeaders_<>c_<get_ConnectionClose>b__19_0__
                );
    FUN_02d4dc40(Method_System_Net_Http_Headers_HttpRequestHeaders_<>c_<get_ExpectContinue>b__29_0__
                );
    FUN_02d4dc40(
                Method_System_Net_Http_Headers_HttpRequestHeaders_<>c_<get_TransferEncodingChunked>b__71_0__
                );
    FUN_02d4dc40(Method_System_Net_HttpWebRequest_<GetResponseFromData>d__244_MoveNext__);
    FUN_02d4dc40(PTR_DAT_0664b8f0);
    DAT_06a5db56 = 1;
  }
  lVar5 = *(long *)puVar2;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
    lVar5 = *(long *)puVar2;
  }
  puVar4 = Method_System_Net_Http_Headers_HttpRequestHeaders_<>c_<get_ConnectionClose>b__19_0__;
  puVar3 = Method_System_Net_HttpListenerRequest_Context_GetChannelBinding__;
  if (**(long **)(lVar5 + 0xb8) != 0) {
    FUN_036a68ac(&local_48,**(long **)(lVar5 + 0xb8),
                 *(undefined8 *)
                  Method_System_Net_HttpWebRequest_<GetResponseFromData>d__244_MoveNext__);
    while (uVar6 = FUN_049c6928(&local_48,*(undefined8 *)puVar4), (uVar6 & 1) != 0) {
      if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      *(undefined8 *)(local_38 + 0x10) = 0;
    }
    FUN_049c6924(&local_48,*(undefined8 *)puVar3);
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar5 = *(long *)puVar2;
    }
    lVar5 = **(long **)(lVar5 + 0xb8);
    if (lVar5 != 0) {
      iVar1 = *(int *)(lVar5 + 0x18);
      *(undefined4 *)(lVar5 + 0x18) = 0;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_05025690(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


