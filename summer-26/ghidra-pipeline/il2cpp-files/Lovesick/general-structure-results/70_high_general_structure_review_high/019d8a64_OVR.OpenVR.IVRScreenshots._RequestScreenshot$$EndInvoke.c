/*
FUNCTION_NAME: OVR.OpenVR.IVRScreenshots._RequestScreenshot$$EndInvoke
ENTRY_POINT: 019d8a64
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


long OVR_OpenVR_IVRScreenshots__RequestScreenshot__EndInvoke(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int iStack000000000000000c;
  
  puVar2 = Method_Newtonsoft_Json_Utilities_DateTimeUtils_EnsureDateTime__;
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_Start<MonoTlsStream_<CreateStream>d__18>__
  ;
  if ((DAT_0377a776 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<BarCustomer>_get_Current__)
    ;
    thunk_FUN_00d48444(Method_Newtonsoft_Json_Utilities_DateTimeUtils_EnsureDateTime__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_Start<MonoTlsStream_<CreateStream>d__18>__
                      );
    thunk_FUN_00d48444(TMPro_TMP_InputField_SubmitEvent_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_45);
    thunk_FUN_00d48444(Method_System_Text_UTF8Encoding_GetByteCount__);
    DAT_0377a776 = 1;
  }
  iStack000000000000000c = 0;
  plVar3 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,2);
  uVar4 = FUN_0176eb1c(param_1,0);
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar5 != 0) {
    uVar7 = *(undefined8 *)Method_System_Text_UTF8Encoding_GetByteCount__;
    FUN_017b46ec(lVar5,0);
    *(undefined8 *)(lVar5 + 0x10) = uVar4;
    *(undefined8 *)(lVar5 + 0x18) = uVar7;
    if (plVar3 != (long *)0x0) {
      lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar6 == 0) {
LAB_019d8c1c:
        uVar4 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar4,0);
      }
      if ((int)plVar3[3] == 0) {
LAB_019d8c28:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar3[4] = lVar5;
      iStack000000000000000c = *param_1 + 2;
      uVar4 = FUN_0176eb1c(&stack0x0000000c,0);
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar5 != 0) {
        uVar7 = *(undefined8 *)StringLiteral_45;
        FUN_017b46ec(lVar5,0);
        *(undefined8 *)(lVar5 + 0x10) = uVar4;
        *(undefined8 *)(lVar5 + 0x18) = uVar7;
        lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar3 + 0x40));
        puVar1 = Method_System_Collections_Generic_List_Enumerator<BarCustomer>_get_Current__;
        if (lVar6 == 0) goto LAB_019d8c1c;
        if (*(uint *)(plVar3 + 3) < 2) goto LAB_019d8c28;
        plVar3[5] = lVar5;
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        if (lVar5 != 0) {
          uVar7 = *(undefined8 *)TMPro_TMP_InputField_SubmitEvent_TypeInfo;
          FUN_017b46ec(lVar5,0);
          uVar4 = DAT_02945470;
          *(undefined8 *)(lVar5 + 0x10) = uVar7;
          *(undefined8 *)(lVar5 + 0x18) = uVar7;
          *(long **)(lVar5 + 0x28) = plVar3;
          *(undefined8 *)(lVar5 + 0x20) = uVar4;
          *param_1 = *param_1 + 3;
          return lVar5;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


