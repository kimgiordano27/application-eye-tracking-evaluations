/*
FUNCTION_NAME: FUN_01d8c0e4
ENTRY_POINT: 01d8c0e4
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


void FUN_01d8c0e4(long param_1,undefined4 param_2,int param_3,byte param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  byte local_38 [4];
  undefined4 local_34;
  
  puVar1 = OVRPlugin_OVRP_1_28_0_TypeInfo;
  if ((DAT_0377f67a & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet_Enumerator<OVRAnchor>_get_Current__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_LowLevelListWithIList<Task>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033f5258);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_28_0_TypeInfo);
    DAT_0377f67a = 1;
  }
  lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    FUN_017b46ec(lVar2,0);
    *(undefined4 *)(lVar2 + 0x10) = param_2;
    lVar5 = *(long *)(param_1 + 0x48);
    if (param_3 < 0) {
      uVar4 = 0;
    }
    else {
      if ((*(long *)(param_1 + 0x10) == 0) ||
         (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x68), lVar3 == 0)) goto LAB_01d8c210;
      uVar4 = FUN_01d89280(lVar3,param_3);
    }
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_System_Collections_Generic_HashSet_Enumerator<OVRAnchor>_get_Current__
                              );
    if ((lVar3 != 0) && (FUN_011c23e8(lVar3,lVar2,*(undefined8 *)PTR_DAT_033f5258,0), lVar5 != 0)) {
      local_38[0] = param_4 & 1;
      local_34 = param_2;
      FUN_0109b75c(lVar5,&local_34,uVar4,local_38,lVar3,
                   *(undefined8 *)
                    Method_System_Collections_Generic_LowLevelListWithIList<Task>__ctor__);
      return;
    }
  }
LAB_01d8c210:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


