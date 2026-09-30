/*
FUNCTION_NAME: FUN_03a954a0
ENTRY_POINT: 03a954a0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;ui_interaction;telemetry
EVIDENCE: strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void FUN_03a954a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  puVar1 = Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__;
  if ((DAT_04838eda & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
    thunk_FUN_01efb3a4(StringLiteral_8381);
    thunk_FUN_01efb3a4(StringLiteral_8382);
    thunk_FUN_01efb3a4(StringLiteral_8383);
    thunk_FUN_01efb3a4(StringLiteral_8384);
    thunk_FUN_01efb3a4(StringLiteral_8385);
    thunk_FUN_01efb3a4(StringLiteral_8386);
    DAT_04838eda = 1;
  }
  puVar7 = StringLiteral_8386;
  puVar6 = StringLiteral_8385;
  puVar5 = StringLiteral_8384;
  puVar4 = StringLiteral_8383;
  puVar3 = StringLiteral_8382;
  puVar2 = StringLiteral_8381;
  FUN_035ac8e8(param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar8 = System_Threading_OSSpecificSynchronizationContext__Post(param_2,*(undefined8 *)puVar3,0);
  *(undefined8 *)(param_1 + 0x10) = uVar8;
  thunk_FUN_01f51358();
  uVar8 = System_Threading_OSSpecificSynchronizationContext__Post(param_2,*(undefined8 *)puVar2,0);
  *(undefined8 *)(param_1 + 0x18) = uVar8;
  thunk_FUN_01f51358();
  uVar8 = System_Threading_OSSpecificSynchronizationContext__Post(param_2,*(undefined8 *)puVar6,0);
  *(undefined8 *)(param_1 + 0x20) = uVar8;
  thunk_FUN_01f51358();
  uVar8 = System_Threading_OSSpecificSynchronizationContext__Post(param_2,*(undefined8 *)puVar4,0);
  *(undefined8 *)(param_1 + 0x28) = uVar8;
  thunk_FUN_01f51358();
  uVar8 = System_Threading_OSSpecificSynchronizationContext__Post(param_2,*(undefined8 *)puVar7,0);
  *(undefined8 *)(param_1 + 0x30) = uVar8;
  thunk_FUN_01f51358();
  uVar8 = System_Threading_OSSpecificSynchronizationContext__Post(param_2,*(undefined8 *)puVar5,0);
  *(undefined8 *)(param_1 + 0x38) = uVar8;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x38),uVar8);
  return;
}


