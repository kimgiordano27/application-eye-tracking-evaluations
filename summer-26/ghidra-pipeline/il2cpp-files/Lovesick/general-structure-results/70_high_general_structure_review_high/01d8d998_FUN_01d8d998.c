/*
FUNCTION_NAME: FUN_01d8d998
ENTRY_POINT: 01d8d998
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_01d8d998(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar1 = System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
  if ((DAT_0377f684 & 1) == 0) {
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__);
    thunk_FUN_00d48444(TMPro_TMP_InputField_SubmitEvent_TypeInfo);
    DAT_0377f684 = 1;
  }
  uVar4 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
  *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  *(undefined8 *)(param_1 + 0x70) = uVar4;
  FUN_017b46ec(param_1,0);
  puVar1 = Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__;
  if (param_2 == 0) {
LAB_01d8dab4:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x50);
  uVar4 = FUN_01eca598(param_2,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar1);
  }
  uVar2 = FUN_01f76228(uVar4,0,0);
  puVar5 = (undefined8 *)TMPro_TMP_InputField_SubmitEvent_TypeInfo;
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_01eca598(param_2,0);
    if (lVar3 == 0) goto LAB_01d8dab4;
    puVar5 = (undefined8 *)(lVar3 + 0x18);
  }
  *(undefined8 *)(param_1 + 0x48) = *puVar5;
  FUN_01d8dab8(param_1,param_2);
  return;
}


