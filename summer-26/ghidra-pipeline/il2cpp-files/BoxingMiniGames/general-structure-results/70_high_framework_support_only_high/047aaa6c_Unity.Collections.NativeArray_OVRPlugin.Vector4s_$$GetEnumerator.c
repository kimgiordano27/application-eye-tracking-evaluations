/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$GetEnumerator
ENTRY_POINT: 047aaa6c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__GetEnumerator(void)

{
  undefined8 *puVar1;
  int iVar2;
  char in_NG;
  char in_OV;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  ulong unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  while (in_NG != in_OV) {
    iVar2 = *(int *)(unaff_x19 + 0x1c);
    if (unaff_w21 != iVar2) goto LAB_047aaa74;
    lVar3 = *(long *)(unaff_x19 + 0x10);
    if (lVar3 == 0) {
LAB_047aaa98:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if (*(uint *)(lVar3 + 0x18) <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    if (unaff_x20 == 0) goto LAB_047aaa98;
    puVar1 = (undefined8 *)(lVar3 + unaff_x23);
    in_stack_00000028 = puVar1[1];
    in_stack_00000020 = *puVar1;
    in_stack_00000038 = puVar1[3];
    in_stack_00000030 = puVar1[2];
    (**(code **)(unaff_x20 + 0x18))
              (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000020,*(undefined8 *)(unaff_x20 + 0x28))
    ;
    unaff_x22 = unaff_x22 + 1;
    unaff_x23 = unaff_x23 + 0x20;
    in_OV = SBORROW8(unaff_x22,(long)*(int *)(unaff_x19 + 0x18));
    in_NG = (long)(unaff_x22 - (long)*(int *)(unaff_x19 + 0x18)) < 0;
  }
  iVar2 = *(int *)(unaff_x19 + 0x1c);
LAB_047aaa74:
  if (unaff_w21 != iVar2) {
                    /* try { // try from 047aaa80 to 048aaaa7 has its CatchHandler @ 047aa9f0 */
    FUN_05e3971c(0);
  }
  return;
}


