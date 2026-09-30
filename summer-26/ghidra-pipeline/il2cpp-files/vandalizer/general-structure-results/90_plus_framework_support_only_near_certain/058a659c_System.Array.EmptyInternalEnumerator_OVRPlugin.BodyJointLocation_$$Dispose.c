/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BodyJointLocation>$$Dispose
ENTRY_POINT: 058a659c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_BodyJointLocation>__Dispose(void)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  
  *(undefined1 *)(unaff_x22 + 0xb4d) = 1;
  lVar7 = FUN_031f21dc(*unaff_x23,unaff_w20);
  lVar8 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x1a8);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0322bef4(lVar8);
  }
  lVar8 = FUN_031f21dc(lVar8,unaff_w20);
  uVar2 = *(uint *)(unaff_x19 + 0x20);
  FUN_05e24634(*(undefined8 *)(unaff_x19 + 0x18),0,lVar8,0,(ulong)uVar2,0);
  if (0 < (int)uVar2) {
    if (lVar8 == 0) {
LAB_058a66b4:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    uVar3 = *(uint *)(lVar8 + 0x18);
    uVar9 = 0;
    do {
      if (uVar3 <= uVar9) {
LAB_058a66b0:
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      iVar4 = *(int *)(lVar8 + uVar9 * 0x24 + 0x20);
      if (-1 < iVar4) {
        if (lVar7 == 0) goto LAB_058a66b4;
        iVar6 = 0;
        if (unaff_w20 != 0) {
          iVar6 = iVar4 / unaff_w20;
        }
        uVar5 = iVar4 - iVar6 * unaff_w20;
        if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_058a66b0;
        lVar1 = lVar7 + (ulong)uVar5 * 4;
        *(int *)(lVar8 + uVar9 * 0x24 + 0x24) = *(int *)(lVar1 + 0x20) + -1;
        *(int *)(lVar1 + 0x20) = (int)uVar9 + 1;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar2);
  }
  *(long *)(unaff_x19 + 0x10) = lVar7;
  thunk_FUN_0329bf60((long *)(unaff_x19 + 0x10),lVar7);
  *(long *)(unaff_x19 + 0x18) = lVar8;
  thunk_FUN_0329bf60((undefined8 *)(unaff_x19 + 0x18),lVar8);
  return;
}


