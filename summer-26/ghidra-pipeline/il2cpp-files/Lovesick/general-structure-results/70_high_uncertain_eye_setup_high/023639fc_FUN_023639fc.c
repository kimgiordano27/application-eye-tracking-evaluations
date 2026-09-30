/*
FUNCTION_NAME: FUN_023639fc
ENTRY_POINT: 023639fc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_023639fc(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  puVar6 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_03781d6b & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_14183);
    thunk_FUN_00d48444(
                      Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__10>__
                      );
    thunk_FUN_00d48444(StringLiteral_3420);
    thunk_FUN_00d48444(PTR_DAT_033eefc0);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_System_Decimal_DecCalc_VarDecFromR4__);
    DAT_03781d6b = 1;
  }
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar2 = FUN_0268b4e0(param_1,0,0);
  if ((uVar2 & 1) == 0) {
    if (param_2 != 0) {
      lVar3 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033eefc0);
      puVar6 = Method_System_Decimal_DecCalc_VarDecFromR4__;
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_012dd38c(lVar3,*(undefined8 *)StringLiteral_3420);
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar4 = FUN_0233e4fc(param_1,0,0);
      puVar1 = StringLiteral_14183;
      puVar6 = 
      Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__10>__
      ;
      if (0 < (int)*(ulong *)(param_2 + 0x18)) {
        uVar2 = 0;
        uVar7 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
        do {
          if (uVar7 <= uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          uVar8 = *(undefined8 *)(param_2 + 0x20 + uVar2 * 8);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar5 = FUN_02363818(uVar4,uVar8,1);
          FUN_012df294(lVar3,uVar5,*(undefined8 *)puVar6);
          uVar8 = FUN_02363818(uVar4,uVar8,0);
          FUN_012df294(lVar3,uVar8,*(undefined8 *)puVar6);
          uVar7 = (ulong)*(uint *)(param_2 + 0x18);
          uVar2 = uVar2 + 1;
        } while ((long)uVar2 < (long)(int)*(uint *)(param_2 + 0x18));
      }
      return lVar3;
    }
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar4 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar6 = MetaXRAcousticNativeInterface_UnityNativeInterface_TypeInfo;
  }
  else {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar4 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar6 = Method_System_Collections_Generic_List<NotePrefabMapping_PrefabPoolEntry>_get_Count__;
  }
  uVar8 = thunk_FUN_00d48444(puVar6);
  FUN_016ec5b8(uVar4,uVar8,0);
  uVar8 = thunk_FUN_00d48444(StringLiteral_10582);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar4,uVar8);
}


