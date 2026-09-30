/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Bone>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 03ccf004
PROGRAM: Untangled-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Bone>__System_Collections_IEnumerator_get_Current
               (void)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong in_x9;
  long lVar5;
  int in_w12;
  long lVar6;
  long lVar7;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar4 = 0;
  lVar5 = 0x20;
  do {
    lVar6 = *(long *)(unaff_x19 + 0x18);
    if (lVar6 == 0) {
LAB_03ccf154:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (*(uint *)(lVar6 + 0x18) <= in_x9) goto LAB_03ccf150;
    if (-1 < *(int *)(lVar6 + lVar5)) {
      puVar1 = (undefined8 *)(lVar6 + lVar5);
      uVar9 = puVar1[1];
      uVar8 = *puVar1;
      if (unaff_x21 == 0) goto LAB_03ccf154;
      if (*(uint *)(unaff_x21 + 0x18) <= uVar4) {
LAB_03ccf150:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      lVar6 = unaff_x21 + (long)(int)uVar4 * 0x18;
      *(undefined8 *)(lVar6 + 0x30) = puVar1[2];
      *(undefined8 *)(lVar6 + 0x28) = uVar9;
      *(undefined8 *)(lVar6 + 0x20) = uVar8;
      if (*(uint *)(unaff_x21 + 0x18) <= uVar4) goto LAB_03ccf150;
      if (unaff_x22 == 0) goto LAB_03ccf154;
      iVar3 = 0;
      if (unaff_w20 != 0) {
        iVar3 = *(int *)(lVar6 + 0x20) / unaff_w20;
      }
      uVar2 = *(int *)(lVar6 + 0x20) - iVar3 * unaff_w20;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar2) goto LAB_03ccf150;
      lVar6 = unaff_x22 + (long)(int)uVar2 * 4;
      lVar7 = (long)(int)uVar4;
      uVar4 = uVar4 + 1;
      *(int *)(unaff_x21 + lVar7 * 0x18 + 0x24) = *(int *)(lVar6 + 0x20) + -1;
      *(uint *)(lVar6 + 0x20) = uVar4;
      in_w12 = *(int *)(unaff_x19 + 0x24);
    }
    in_x9 = in_x9 + 1;
    lVar5 = lVar5 + 0x18;
    if ((long)in_w12 <= (long)in_x9) {
      *(uint *)(unaff_x19 + 0x24) = uVar4;
      *(long *)(unaff_x19 + 0x18) = unaff_x21;
      thunk_FUN_02f411dc();
      *(long *)(unaff_x19 + 0x10) = unaff_x22;
      thunk_FUN_02f411dc((long *)(unaff_x19 + 0x10));
      *(undefined4 *)(unaff_x19 + 0x28) = 0xffffffff;
      return;
    }
  } while( true );
}


