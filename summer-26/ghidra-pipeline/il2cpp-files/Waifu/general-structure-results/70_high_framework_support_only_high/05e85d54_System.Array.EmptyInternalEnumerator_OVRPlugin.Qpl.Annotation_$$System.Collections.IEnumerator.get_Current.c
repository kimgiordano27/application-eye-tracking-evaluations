/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Qpl.Annotation>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 05e85d54
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerator_get_Current
               (void)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  uint in_w8;
  uint uVar4;
  undefined8 uVar5;
  uint in_w10;
  long unaff_x19;
  int iVar6;
  uint uVar7;
  long unaff_x23;
  int unaff_w24;
  long unaff_x25;
  long lVar8;
  
  if (in_w10 <= in_w8) {
LAB_05e85f58:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d44();
  }
  if (unaff_x25 != 0) {
    uVar5 = *(undefined8 *)(unaff_x25 + 0x18);
    uVar7 = *(int *)(unaff_x23 + (ulong)in_w8 * 4 + 0x20) - 1;
    if (uVar7 < (uint)uVar5) {
      iVar6 = -1;
      do {
        lVar8 = (long)(int)uVar7;
        if (*(int *)(unaff_x25 + lVar8 * 0x20 + 0x20) == unaff_w24) {
          plVar2 = (long *)FUN_045b2df4(*(undefined8 *)
                                         (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18));
          if (*(uint *)(unaff_x25 + 0x18) <= uVar7) goto LAB_05e85f58;
          if (plVar2 == (long *)0x0) goto LAB_05e85f64;
          lVar1 = unaff_x25 + lVar8 * 0x20;
          uVar3 = (**(code **)(*plVar2 + 0x1b8))
                            (plVar2,*(undefined8 *)(lVar1 + 0x28),*(undefined4 *)(lVar1 + 0x30));
          if ((uVar3 & 1) != 0) {
            return uVar7;
          }
          uVar5 = *(undefined8 *)(unaff_x25 + 0x18);
        }
        uVar4 = (uint)uVar5;
        if (uVar4 <= uVar7) goto LAB_05e85f58;
        iVar6 = iVar6 + 1;
        if ((int)uVar4 <= iVar6) {
          FUN_06851c18(0);
          goto LAB_05e85f64;
        }
        uVar7 = *(uint *)(unaff_x25 + lVar8 * 0x20 + 0x24);
      } while (uVar7 < uVar4);
    }
    return uVar7;
  }
LAB_05e85f64:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


