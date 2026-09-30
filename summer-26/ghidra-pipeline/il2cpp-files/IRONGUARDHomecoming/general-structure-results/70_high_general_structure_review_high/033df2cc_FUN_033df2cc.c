/*
FUNCTION_NAME: FUN_033df2cc
ENTRY_POINT: 033df2cc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_033df2cc(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = Method_System_Reflection_Module_get_Assembly__;
  if ((DAT_04832555 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_System_Reflection_Module_get_Assembly__);
    thunk_FUN_01efb3a4(Method_System_Reflection_Module_get_ModuleVersionId__);
    thunk_FUN_01efb3a4(Method_System_Reflection_Module_get_ScopeName__);
    DAT_04832555 = 1;
  }
  lVar2 = **(long **)(*(long *)puVar1 + 0xb8);
  if (lVar2 == 0) {
    uVar3 = FUN_035b0a44(0x1a,0);
    if (*(int *)(*(long *)
                  Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)
                          Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                        );
    }
    uVar3 = System_Threading_OSSpecificSynchronizationContext__Post
                      (uVar3,*(undefined8 *)Method_System_Reflection_Module_get_ModuleVersionId__,0)
    ;
    **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar3;
    thunk_FUN_01f51358(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar3);
    uVar3 = System_Threading_OSSpecificSynchronizationContext__Post
                      (**(undefined8 **)(*(long *)puVar1 + 0xb8),
                       *(undefined8 *)Method_System_Reflection_Module_get_ScopeName__,0);
    **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar3;
    thunk_FUN_01f51358(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar3);
    lVar2 = **(long **)(*(long *)puVar1 + 0xb8);
  }
  return lVar2;
}


