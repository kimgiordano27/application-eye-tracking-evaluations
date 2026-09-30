/*
FUNCTION_NAME: FUN_01a7b894
ENTRY_POINT: 01a7b894
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_01a7b894(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  
  puVar3 = Method_System_Nullable<MRUKAnchor_SceneLabels>_get_Value__;
  if ((DAT_0377cc79 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Nullable<MRUKAnchor_SceneLabels>_get_Value__);
    thunk_FUN_00d48444(Method_System_Data_DataView_System_Collections_IList_Remove__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    thunk_FUN_00d48444(GoogleSheetsToUnity_GoogleAuthrisationHelper_TypeInfo);
    DAT_0377cc79 = 1;
  }
  puVar2 = Method_System_Data_DataView_System_Collections_IList_Remove__;
  FUN_017b46ec(param_1,0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar5 = FUN_01a4ff0c(param_2);
  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  puVar2 = Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__;
  if (lVar6 != 0) {
    FUN_01a7e5c0(lVar6,uVar5,0);
    *(long *)(param_1 + 0x18) = lVar6;
    uVar7 = FUN_017b4f64(uVar5,**(undefined8 **)(*(long *)puVar2 + 0xb8),0);
    if ((uVar7 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
    }
    else {
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    puVar1 = GoogleSheetsToUnity_GoogleAuthrisationHelper_TypeInfo;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar5 = FUN_01a4ff88(param_2);
    *(undefined8 *)(param_1 + 0x20) = uVar5;
    bVar4 = FUN_01a50004(param_2);
    *(byte *)(param_1 + 0x28) = bVar4 & 1;
    uVar5 = FUN_01a50088(param_2);
    *(undefined8 *)(param_1 + 0x30) = uVar5;
    uVar5 = OVRPlugin_OVRP_1_78_0__ovrp_SetLocalDimming(param_2);
    *(undefined8 *)(param_1 + 0x38) = uVar5;
    uVar5 = FUN_01a50230(param_2);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar6 != 0) {
      FUN_01a7dbcc(lVar6,uVar5,0);
      *(long *)(param_1 + 0x48) = lVar6;
      uVar7 = FUN_017b4f64(uVar5,**(undefined8 **)(*(long *)puVar2 + 0xb8),0);
      if ((uVar7 & 1) == 0) {
        *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x48);
      }
      else {
        *(undefined8 *)(param_1 + 0x40) = 0;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


