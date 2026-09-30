/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.LayerMask_DirectConverter$$DoSerialize
ENTRY_POINT: 071de4fc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_2;telemetry_or_network_hits_6
*/


undefined8 Unity_VisualScripting_FullSerializer_LayerMask_DirectConverter__DoSerialize(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  
  puVar2 = System_Func<DivrPostProcessController_ColorAdjustmentsSetting,_int>_TypeInfo;
  uVar3 = RootMotion_FinalIK_Finger___ctor
                    (**(undefined8 **)(param_1 + 0xc80),*(undefined4 *)(unaff_x20 + 0x18));
  FUN_06266b00();
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar4 = *(long *)puVar2;
  }
  puVar1 = System_Func<IGraphElement,_IEnumerable<ISerializationDependency>>_TypeInfo;
  lVar6 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  if (lVar6 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar4 = *(long *)puVar2;
    }
    uVar7 = **(undefined8 **)(lVar4 + 0xb8);
    lVar6 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Func<IGraphElement,_IEnumerable<object>>_TypeInfo);
    FUN_058673e8(lVar6,uVar7,
                 *(undefined8 *)
                  System_Func<DivrPostProcessController_ColorAdjustmentsSetting,_bool>_TypeInfo,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar5 = lVar6;
    thunk_FUN_037aeb94(plVar5,lVar6);
  }
  FUN_03e26b28(uVar3,lVar6,*(undefined8 *)puVar1);
  return uVar3;
}


