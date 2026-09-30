/*
FUNCTION_NAME: FUN_03234ce0
ENTRY_POINT: 03234ce0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1
*/


void FUN_03234ce0(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((DAT_04532903 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422fc80);
    DAT_04532903 = 1;
  }
  FUN_03231f84(param_1);
  if (param_2 == 0) {
    thunk_FUN_01c273e8(PTR_DAT_0422fa20);
    uVar2 = thunk_FUN_01c496e0();
    uVar3 = thunk_FUN_01c273e8(
                              UnityEngine_UIElements_VisualElementFocusRing_FocusRingRecord_TypeInfo
                              );
    FUN_0323fc78(uVar2,uVar3,0);
    uVar3 = thunk_FUN_01c273e8(UnityEngine_UIElements_VisualElementListPool_<>c_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar2,uVar3);
  }
  if (param_1 != 0) {
    lVar1 = param_2;
    if (param_3 != 0) {
      lVar1 = param_3;
    }
    *(long *)(param_1 + 0x98) = param_2;
    if ((param_5 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_0422fc80 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar1 = FUN_03262a98(lVar1,0);
    }
    if (param_1 != 0) {
      *(long *)(param_1 + 0x90) = lVar1;
      if (param_4 == 0) {
        if (*(int *)(*(long *)PTR_DAT_0422fc80 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        param_4 = Newtonsoft_Json_JsonSerializer__get_MetadataPropertyHandling(param_2,0);
      }
      *(long *)(param_1 + 0xa0) = param_4;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


