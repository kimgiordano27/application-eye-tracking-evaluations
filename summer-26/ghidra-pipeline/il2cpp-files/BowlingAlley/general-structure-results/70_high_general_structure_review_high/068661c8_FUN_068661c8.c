/*
FUNCTION_NAME: FUN_068661c8
ENTRY_POINT: 068661c8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void FUN_068661c8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = Method_System_Collections_Generic_KeyValuePair<ulong,_Vector3>_get_Value__;
  if ((DAT_076e0f87 & 1) == 0) {
    thunk_FUN_032e1da0(Method_System_Collections_Generic_KeyValuePair<Variant,_Variant>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_KeyValuePair<Variant,_Variant>_get_Key__);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_KeyValuePair<Type,_CAPI_ovrAvatar2ExperimentalEventPayloadTypeId>_get_Key__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_KeyValuePair<Variant,_Variant>_get_Value__)
    ;
    thunk_FUN_032e1da0(Method_System_Collections_Generic_KeyValuePair<Vector3,_int>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_KeyValuePair<ulong,_Vector3>_get_Value__);
    DAT_076e0f87 = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar3 = *(long *)puVar1;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar3 = *(long *)puVar1;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_KeyValuePair<Type,_CAPI_ovrAvatar2ExperimentalEventPayloadTypeId>_get_Key__
                              );
    FUN_055e1814(lVar5,uVar6,
                 *(undefined8 *)
                  Method_System_Collections_Generic_KeyValuePair<Variant,_Variant>_get_Value__,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar4 = lVar5;
    thunk_FUN_0333a630(plVar4,lVar5);
    lVar3 = *(long *)puVar1;
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar3 = *(long *)puVar1;
  }
  puVar2 = Method_System_Collections_Generic_KeyValuePair<Variant,_Variant>_get_Key__;
  lVar7 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar7 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar3 = *(long *)puVar1;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_KeyValuePair<Variant,_Variant>__ctor__
                              );
    FUN_0510f054(lVar7,uVar6,
                 *(undefined8 *)Method_System_Collections_Generic_KeyValuePair<Vector3,_int>__ctor__
                 ,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
    *plVar4 = lVar7;
    thunk_FUN_0333a630(plVar4,lVar7);
  }
  FUN_0551bf6c(param_1,lVar5,lVar7,*(undefined8 *)puVar2);
  return;
}


