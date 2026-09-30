/*
FUNCTION_NAME: FUN_02021454
ENTRY_POINT: 02021454
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_02021454(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_037809b3 & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    thunk_FUN_00d48444(Newtonsoft_Json_Linq_JToken_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<XRReferenceObjectEntry>_GetEnumerator__
                      );
    DAT_037809b3 = 1;
  }
  lVar2 = thunk_FUN_00d92814(0);
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__796_105__;
  if (lVar2 != 0) {
    plVar3 = (long *)thunk_FUN_00d9287c(lVar2,*(undefined8 *)
                                               Method_System_Collections_Generic_List<XRReferenceObjectEntry>_GetEnumerator__
                                        ,0);
    if (plVar3 == (long *)0x0) {
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar2 = *(long *)puVar1;
      }
      uVar6 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x38);
    }
    else {
      if (*plVar3 != *(long *)Newtonsoft_Json_Linq_JToken_TypeInfo) {
        uVar6 = thunk_FUN_00d48444(StringLiteral_2752);
        uVar5 = thunk_FUN_00d48444(
                                  Method_System_Collections_Generic_List<XRReferenceObjectEntry>_GetEnumerator__
                                  );
        uVar6 = FUN_015e2494(uVar6,uVar5,plVar3,0);
        thunk_FUN_00d48444(
                          Method_Unity_XR_CoreUtils_Datums_DatumProperty<PokeThresholdData,_PokeThresholdDatum>__ctor__
                          );
        uVar5 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        FUN_0176e8d0(uVar5,uVar6,0);
        uVar6 = thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqsubq_u8__);
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar5,uVar6);
      }
      puVar4 = (undefined8 *)thunk_FUN_00d624a0(plVar3);
      uVar6 = *puVar4;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02021694(uVar6);
    }
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


