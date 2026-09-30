/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Bone>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 03cceff8
PROGRAM: Untangled-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Bone>__System_Collections_IEnumerator_Reset(void)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  int in_w12;
  long lVar7;
  long lVar8;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (in_w12 < 1) {
    uVar4 = 0;
  }
  else {
    uVar5 = 0;
    uVar4 = 0;
    lVar6 = 0x20;
    do {
      lVar7 = *(long *)(unaff_x19 + 0x18);
      if (lVar7 == 0) {
LAB_03ccf154:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_03ccf150;
      if (-1 < *(int *)(lVar7 + lVar6)) {
        puVar1 = (undefined8 *)(lVar7 + lVar6);
        uVar10 = puVar1[1];
        uVar9 = *puVar1;
        if (unaff_x21 == 0) goto LAB_03ccf154;
        if (*(uint *)(unaff_x21 + 0x18) <= uVar4) {
LAB_03ccf150:
                    /* WARNING: Subroutine does not return */
          FUN_02f080c8();
        }
        lVar7 = unaff_x21 + (long)(int)uVar4 * 0x18;
        *(undefined8 *)(lVar7 + 0x30) = puVar1[2];
        *(undefined8 *)(lVar7 + 0x28) = uVar10;
        *(undefined8 *)(lVar7 + 0x20) = uVar9;
        if (*(uint *)(unaff_x21 + 0x18) <= uVar4) goto LAB_03ccf150;
        if (unaff_x22 == 0) goto LAB_03ccf154;
        iVar3 = 0;
        if (unaff_w20 != 0) {
          iVar3 = *(int *)(lVar7 + 0x20) / unaff_w20;
        }
        uVar2 = *(int *)(lVar7 + 0x20) - iVar3 * unaff_w20;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar2) goto LAB_03ccf150;
        lVar7 = unaff_x22 + (long)(int)uVar2 * 4;
        lVar8 = (long)(int)uVar4;
        uVar4 = uVar4 + 1;
        *(int *)(unaff_x21 + lVar8 * 0x18 + 0x24) = *(int *)(lVar7 + 0x20) + -1;
        *(uint *)(lVar7 + 0x20) = uVar4;
        in_w12 = *(int *)(unaff_x19 + 0x24);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x18;
    } while ((long)uVar5 < (long)in_w12);
  }
  *(uint *)(unaff_x19 + 0x24) = uVar4;
  *(long *)(unaff_x19 + 0x18) = unaff_x21;
  thunk_FUN_02f411dc();
  *(long *)(unaff_x19 + 0x10) = unaff_x22;
  thunk_FUN_02f411dc((long *)(unaff_x19 + 0x10));
  *(undefined4 *)(unaff_x19 + 0x28) = 0xffffffff;
  return;
}


