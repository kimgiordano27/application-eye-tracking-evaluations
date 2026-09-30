/*
FUNCTION_NAME: FUN_03ebbb2c
ENTRY_POINT: 03ebbb2c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;ui_interaction;telemetry
EVIDENCE: strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_03ebbb2c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_DAT_0457b9f0;
  if ((DAT_0483ac29 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_0457b9f0);
                    /* try { // try from 03ebbb60 to 03fbbbab has its CatchHandler @ 03ebbc94 */
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
    DAT_0483ac29 = 1;
  }
  puVar1 = Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__;
  uVar3 = FUN_035b0494(0);
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar4);
    lVar4 = *(long *)puVar2;
  }
  uVar5 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10);
                    /* try { // try from 03ebbbac to 03fbbc63 has its CatchHandler @ 03ebb978 */
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar3 = System_Threading_OSSpecificSynchronizationContext__Post(uVar3,uVar5,0);
  System_Threading_OSSpecificSynchronizationContext__Post(uVar3,param_1,0);
  return;
}


