/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 047a79d4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (undefined8 *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  code *in_x9;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  int unaff_w25;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  
  do {
    uStack0000000000000008 = param_1[1];
    uStack0000000000000000 = *param_1;
    uStack0000000000000010 = param_1[2];
    uStack0000000000000040 = uStack0000000000000000;
    uStack0000000000000048 = uStack0000000000000008;
    uStack0000000000000050 = uStack0000000000000010;
    uVar3 = (*in_x9)(*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                     *(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar3 & 1) != 0) {
      lVar4 = *(long *)(unaff_x21 + 0x10);
      if (lVar4 == 0) {
LAB_047a7ae0:
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      if (*(uint *)(lVar4 + 0x18) <= unaff_x23) goto LAB_047a7ae4;
      if (unaff_x22 == 0) goto LAB_047a7ae0;
      puVar1 = (undefined8 *)(lVar4 + unaff_x24);
      uVar7 = puVar1[1];
      uVar6 = *puVar1;
      uVar5 = puVar1[2];
      lVar4 = *(long *)(unaff_x22 + 0x10);
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_047a7ae0;
      uVar2 = *(uint *)(unaff_x22 + 0x18);
      if (uVar2 < *(uint *)(lVar4 + 0x18)) {
        lVar4 = lVar4 + (long)(int)uVar2 * (long)unaff_w25;
        *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar4 + 0x28) = uVar7;
        *(undefined8 *)(lVar4 + 0x20) = uVar6;
        *(undefined8 *)(lVar4 + 0x30) = uVar5;
        thunk_FUN_036b7ad0(lVar4 + 0x20,0);
      }
      else {
        uStack0000000000000040 = uVar6;
        uStack0000000000000048 = uVar7;
        uStack0000000000000050 = uVar5;
        FUN_047a70a8();
      }
    }
    unaff_x23 = unaff_x23 + 1;
    unaff_x24 = unaff_x24 + 0x18;
    if ((long)*(int *)(unaff_x21 + 0x18) <= (long)unaff_x23) {
      return;
    }
    lVar4 = *(long *)(unaff_x21 + 0x10);
    if (lVar4 == 0) goto LAB_047a7ae0;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x23) {
LAB_047a7ae4:
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    if (unaff_x20 == 0) goto LAB_047a7ae0;
    param_1 = (undefined8 *)(lVar4 + unaff_x24);
    in_x9 = *(code **)(unaff_x20 + 0x18);
  } while( true );
}


