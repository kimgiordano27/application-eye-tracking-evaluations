/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$GetSubArray
ENTRY_POINT: 03cb96b4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__GetSubArray(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined4 unaff_w22;
  
  uVar1 = FUN_02f41e9c();
  uVar1 = FUN_02f0880c(uVar1,unaff_w22);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar1;
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x28);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03cb9688 with catch @ 03cb96e0
                       try { // try from 03cb96e0 to 03db96f7 has its CatchHandler @ 03cb963c */
    lVar3 = FUN_02f41e9c(lVar3);
  }
  lVar4 = *unaff_x21;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
                    /* try { // try from 03cb96f8 to 03db970f has its CatchHandler @ 03cb9784 */
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar3) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 5) * 0x10 + 0x138);
        goto LAB_03cb9784;
      }
      uVar5 = uVar5 - 1;
                    /* try { // try from 03cb9710 to 03db9773 has its CatchHandler @ 03cb963c */
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_02f421d0();
LAB_03cb9784:
  (*(code *)*puVar2)();
  *(undefined4 *)(unaff_x19 + 0x18) = unaff_w22;
  return;
}


