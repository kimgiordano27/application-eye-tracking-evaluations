/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 04fd7314
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>__Dispose(void)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  
  uVar2 = *(uint *)(unaff_x22 + 0x20);
  FUN_0550b264(*(undefined8 *)(unaff_x22 + 0x18),0);
  if (0 < (int)uVar2) {
    if (unaff_x23 == 0) {
LAB_04fd73e0:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar3 = *(uint *)(unaff_x23 + 0x18);
    uVar7 = 0;
    do {
      if (uVar7 == uVar3) {
LAB_04fd73dc:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      iVar4 = *(int *)(unaff_x23 + 0x20 + uVar7 * 0x18);
      if (-1 < iVar4) {
        if (unaff_x21 == 0) goto LAB_04fd73e0;
        iVar6 = 0;
        if (unaff_w20 != 0) {
          iVar6 = iVar4 / unaff_w20;
        }
        uVar5 = iVar4 - iVar6 * unaff_w20;
        if (*(uint *)(unaff_x21 + 0x18) <= uVar5) goto LAB_04fd73dc;
        lVar1 = unaff_x21 + (ulong)uVar5 * 4;
        *(int *)(unaff_x23 + 0x20 + uVar7 * 0x18 + 4) = *(int *)(lVar1 + 0x20) + -1;
        *(int *)(lVar1 + 0x20) = (int)uVar7 + 1;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar2);
  }
  *(long *)(unaff_x19 + 0x10) = unaff_x21;
  LeanTween__value((long *)(unaff_x19 + 0x10));
  *(long *)(unaff_x19 + 0x18) = unaff_x23;
  LeanTween__value((undefined8 *)(unaff_x22 + 0x18));
  return;
}


