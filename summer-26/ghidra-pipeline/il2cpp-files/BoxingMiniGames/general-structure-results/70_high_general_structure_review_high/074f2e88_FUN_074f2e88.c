/*
FUNCTION_NAME: FUN_074f2e88
ENTRY_POINT: 074f2e88
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void FUN_074f2e88(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar2 = Method_System_Nullable<LoopType>_get_HasValue__;
                    /* try { // try from 074f2ea0 to 075f2ea3 has its CatchHandler @ 074f2ea8 */
                    /* catch() { ... } // from try @ 074f2ea0 with catch @ 074f2ea8 */
  if ((DAT_07ef49b8 & 1) == 0) {
                    /* try { // try from 074f2eac to 075f2eb3 has its CatchHandler @ 074f2f00 */
                    /* try { // try from 074f2eb4 to 075f2ed3 has its CatchHandler @ 074f2af8 */
    FUN_03642964(PTR_DAT_079f7420);
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 074f2c08 with catch @ 074f2eb8
                       catch(type#1 @ 07542bc8) { ... } // from try @ 074f2e04 with catch @ 074f2eb8
                        */
    FUN_03642964(Method_System_Nullable<OVRPose>_get_HasValue__);
    FUN_03642964(Method_System_Nullable<OVRPose>_get_Value__);
                    /* try { // try from 074f2ed4 to 075f2ed7 has its CatchHandler @ 074f2eec */
                    /* try { // try from 074f2ed8 to 075f2eef has its CatchHandler @ 074f2af8 */
    FUN_03642964(Method_System_Nullable<OVRTelemetryMarker>__ctor__);
    FUN_03642964(Method_System_Nullable<LoopType>_get_HasValue__);
                    /* catch() { ... } // from try @ 074f2ed4 with catch @ 074f2eec */
    DAT_07ef49b8 = 1;
  }
                    /* try { // try from 074f2ef0 to 075f2ef7 has its CatchHandler @ 074f2f00 */
  uVar4 = FUN_074f2d48();
  lVar6 = *(long *)puVar2;
                    /* try { // try from 074f2ef8 to 075f2f03 has its CatchHandler @ 074f2af8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 074f2eac with catch @ 074f2f00
                       catch(type#2 @ 00000000) { ... } // from try @ 074f2ef0 with catch @ 074f2f00
                        */
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_036a1978(lVar6);
    lVar6 = *(long *)puVar2;
  }
  puVar3 = Method_System_Nullable<OVRPose>_get_HasValue__;
  puVar1 = PTR_DAT_079f7420;
  puVar7 = *(undefined8 **)(lVar6 + 0xb8);
  lVar8 = puVar7[6];
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_036a1978(lVar6);
      puVar7 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar9 = *puVar7;
    lVar8 = thunk_FUN_0367fe20(*(undefined8 *)Method_System_Nullable<OVRPose>_get_Value__);
    FUN_04159004(lVar8,uVar9,*(undefined8 *)Method_System_Nullable<OVRTelemetryMarker>__ctor__,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
    *plVar5 = lVar8;
    thunk_FUN_036b7ad0(plVar5,lVar8);
  }
  uVar4 = FUN_03cc7aa0(uVar4,lVar8,*(undefined8 *)puVar3);
  FUN_03cc668c(uVar4,*(undefined8 *)puVar1);
  return;
}


