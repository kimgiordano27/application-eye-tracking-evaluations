/*
FUNCTION_NAME: FUN_0570eff4
ENTRY_POINT: 0570eff4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_0570eff4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar4 = Unity_Services_Analytics_Internal_BufferX_TypeInfo;
  puVar3 = Unity_Services_Analytics_Internal_BufferSystemCalls_TypeInfo;
  puVar2 = Newtonsoft_Json_Utilities_BoxedPrimitives_TypeInfo;
  puVar1 = UnityEngine_BoxCollider_TypeInfo;
  if ((DAT_06b7fc8a & 1) == 0) {
    FUN_02d6084c(UnityEngine_BoxCollider_TypeInfo);
    FUN_02d6084c(Unity_Services_Analytics_Internal_BufferSystemCalls_TypeInfo);
    FUN_02d6084c(Unity_Services_Analytics_Internal_BufferX_TypeInfo);
    FUN_02d6084c(Newtonsoft_Json_Utilities_BoxedPrimitives_TypeInfo);
    DAT_06b7fc8a = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  thunk_FUN_02d6f164();
  local_58 = *(undefined8 *)puVar3;
  uStack_50 = 0xffffffffffffffff;
  local_48 = *(undefined4 *)(param_1 + 0x28);
  uVar5 = FUN_0503c914(&local_58,0);
  uVar6 = thunk_FUN_02d9d534(*(undefined8 *)puVar4);
  FUN_0570b458(uVar6,uVar8,uVar5);
  thunk_FUN_02d6f164();
  *(undefined8 *)(param_1 + 0x10) = uVar6;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x10),uVar6);
  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
  FUN_0570cb38();
  thunk_FUN_02d6f164();
  plVar9 = (long *)(param_1 + 0x18);
  *plVar9 = lVar7;
  thunk_FUN_02dd37b4(plVar9,lVar7);
  lVar7 = *plVar9;
  thunk_FUN_02d6f164();
  uVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
  FUN_0570cba8();
  if (lVar7 != 0) {
    FUN_0570ccd8(lVar7,uVar5);
    *(undefined8 *)(param_1 + 0x20) = 0;
    thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x20),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


