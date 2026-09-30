/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Copy
ENTRY_POINT: 02bf1390
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy(ulong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  uint uVar6;
  ulong unaff_x21;
  uint unaff_w22;
  ulong unaff_x23;
  undefined8 uVar7;
  
code_r0x02bf1390:
  unaff_x23 = unaff_x23 + 0x10;
  if ((long)unaff_x21 < (long)param_1) goto LAB_02bf1354;
  do {
    iVar4 = (int)param_1;
    uVar6 = (uint)unaff_x21;
    if ((int)uVar6 < iVar4) {
      lVar5 = *(long *)(unaff_x19 + 0x10);
      if (lVar5 == 0) goto LAB_02bf1410;
      if ((*(uint *)(lVar5 + 0x18) <= uVar6) || (*(uint *)(lVar5 + 0x18) <= unaff_w22))
      goto LAB_02bf1414;
                    /* try { // try from 02bf13d0 to 02cf13d3 has its CatchHandler @ 02bf13dc */
                    /* try { // try from 02bf13d4 to 02cf13ff has its CatchHandler @ 02bf0f24 */
      puVar1 = (undefined8 *)(lVar5 + 0x20 + (long)(int)uVar6 * 0x10);
      uVar7 = *puVar1;
      puVar2 = (undefined8 *)(lVar5 + 0x20 + (long)(int)unaff_w22 * 0x10);
      puVar2[1] = puVar1[1];
      *puVar2 = uVar7;
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 02bf13d0 with catch @ 02bf13dc
                        */
      iVar4 = *(int *)(unaff_x19 + 0x18);
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 02bf12fc with catch @ 02bf13e0
                        */
      unaff_w22 = unaff_w22 + 1;
      unaff_x21 = (ulong)(uVar6 + 1);
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 02bf1228 with catch @ 02bf13e4
                        */
    }
    if (iVar4 <= (int)unaff_x21) {
      *(uint *)(unaff_x19 + 0x18) = unaff_w22;
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      return iVar4 - unaff_w22;
    }
    unaff_x23 = -(unaff_x21 >> 0x1f & 1) & 0xfffffff000000000 | (unaff_x21 & 0xffffffff) << 4;
    unaff_x21 = (ulong)(int)unaff_x21;
LAB_02bf1354:
    lVar5 = *(long *)(unaff_x19 + 0x10);
    if (lVar5 == 0) {
LAB_02bf1410:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(uint *)(lVar5 + 0x18) <= (uint)unaff_x21) {
LAB_02bf1414:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    if (unaff_x20 == 0) goto LAB_02bf1410;
    uVar3 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar5 + unaff_x23 + 0x20),
                       *(undefined8 *)(lVar5 + unaff_x23 + 0x28),*(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar3 & 1) != 0) break;
    param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
  } while( true );
  param_1 = (ulong)*(int *)(unaff_x19 + 0x18);
  unaff_x21 = unaff_x21 + 1;
  goto code_r0x02bf1390;
}


