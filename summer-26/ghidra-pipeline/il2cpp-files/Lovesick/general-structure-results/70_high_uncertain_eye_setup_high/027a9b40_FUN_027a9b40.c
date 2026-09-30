/*
FUNCTION_NAME: FUN_027a9b40
ENTRY_POINT: 027a9b40
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong FUN_027a9b40(undefined8 param_1,long *param_2,uint param_3,uint param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  puVar1 = StringLiteral_10512;
  if ((DAT_037887a4 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_10512);
    thunk_FUN_00d48444(Method_System_Net_Sockets_TcpClient_Connect__);
    thunk_FUN_00d48444(Sirenix_Serialization_WeakGenericCollectionFormatter_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<OVRGrabbable,_int>_get_Keys__);
    thunk_FUN_00d48444(StringLiteral_6994);
    thunk_FUN_00d48444(Method_System_Net_IPAddress__ctor__);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_147__);
    DAT_037887a4 = 1;
  }
  lVar5 = thunk_FUN_00d6225c(param_2,*(undefined8 *)puVar1);
  if (lVar5 == 0) {
    uVar6 = FUN_027aa464(param_1,param_2,param_3 & 1,param_4 & 1);
    return uVar6;
  }
  if (param_2 == (long *)0x0) goto LAB_027a9dd8;
  lVar5 = FUN_027fb064(param_2,0);
  if (lVar5 != 0) {
    lVar5 = FUN_027fb064(param_2,0);
    if (lVar5 == 0) goto LAB_027a9dd8;
    uVar6 = FUN_026d57f0(lVar5,0);
    if ((uVar6 & 1) != 0) {
      lVar5 = FUN_027fb064(param_2,0);
      puVar1 = Method_System_Net_Sockets_TcpClient_Connect__;
      if (lVar5 == 0) goto LAB_027a9dd8;
      uVar2 = FUN_026d8144(lVar5,0);
      lVar5 = *param_2;
      if (lVar5 == *(long *)puVar1) {
        lVar5 = FUN_027fb064(param_2,0);
        if (lVar5 == 0) goto LAB_027a9dd8;
        uVar7 = 0x1e;
      }
      else if (lVar5 == *(long *)Method_OVRPlugin_<>c_<_cctor>b__796_147__) {
        lVar5 = FUN_027fb064(param_2,0);
        if (lVar5 == 0) goto LAB_027a9dd8;
        uVar7 = 0x1f;
      }
      else {
        if (lVar5 == *(long *)StringLiteral_6994) {
          lVar5 = FUN_027fb064(param_2,0);
          if (lVar5 == 0) goto LAB_027a9dd8;
          iVar3 = FUN_026d8144(lVar5,0);
          if (iVar3 == 3) {
            lVar5 = FUN_027fb064(param_2,0);
            if (lVar5 == 0) goto LAB_027a9dd8;
            uVar7 = 0x20;
            goto LAB_027a9d84;
          }
          lVar5 = *param_2;
        }
        if (lVar5 == *(long *)
                      Method_System_Collections_Generic_Dictionary<OVRGrabbable,_int>_get_Keys__) {
          lVar5 = FUN_027fb064(param_2,0);
          if (lVar5 == 0) goto LAB_027a9dd8;
          uVar7 = 0x22;
        }
        else if (lVar5 == *(long *)Sirenix_Serialization_WeakGenericCollectionFormatter_TypeInfo) {
          lVar5 = FUN_027fb064(param_2,0);
          if (lVar5 == 0) goto LAB_027a9dd8;
          uVar7 = 0x21;
        }
        else {
          if (lVar5 != *(long *)Method_System_Net_IPAddress__ctor__) goto LAB_027a9d38;
          lVar5 = FUN_027fb064(param_2,0);
          if (lVar5 == 0) goto LAB_027a9dd8;
          uVar7 = 0x23;
        }
      }
LAB_027a9d84:
      FUN_026d7434(lVar5,uVar7,0);
      uVar4 = FUN_027aa464(param_1,param_2,param_3 & 1,param_4 & 1);
      lVar5 = FUN_027fb064(param_2,0);
      if (lVar5 == 0) {
LAB_027a9dd8:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_026d7434(lVar5,uVar2,0);
      goto LAB_027a9dc0;
    }
  }
LAB_027a9d38:
  uVar4 = 0;
LAB_027a9dc0:
  return (ulong)(uVar4 & 1);
}


