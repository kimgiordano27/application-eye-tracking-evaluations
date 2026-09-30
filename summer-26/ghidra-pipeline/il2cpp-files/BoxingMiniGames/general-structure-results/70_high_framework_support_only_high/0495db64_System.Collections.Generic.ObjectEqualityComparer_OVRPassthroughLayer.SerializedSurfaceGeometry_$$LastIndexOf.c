/*
FUNCTION_NAME: System.Collections.Generic.ObjectEqualityComparer<OVRPassthroughLayer.SerializedSurfaceGeometry>$$LastIndexOf
ENTRY_POINT: 0495db64
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 85
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Collections_Generic_ObjectEqualityComparer<OVRPassthroughLayer_SerializedSurfaceGeometry>__LastIndexOf
          (long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long in_x9;
  int *in_x10;
  undefined8 in_stack_00000008;
  
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
      goto System_Collections_Generic_ObjectEqualityComparer<OVRPlugin_RoomFace>__Equals;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar2 = (undefined8 *)FUN_0367cd30();
System_Collections_Generic_ObjectEqualityComparer<OVRPlugin_RoomFace>__Equals:
  uVar1 = (*(code *)*puVar2)();
  in_stack_00000008 = 0;
  FUN_0493bdd8(&stack0x00000008,uVar1,*(undefined8 *)PTR_DAT_079f5e18);
  return in_stack_00000008;
}


