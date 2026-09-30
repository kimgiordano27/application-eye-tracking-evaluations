/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Qpl.Annotation>$$MoveNext
ENTRY_POINT: 045e9654
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation>__MoveNext(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  ulong unaff_x20;
  long unaff_x23;
  uint unaff_w24;
  uint unaff_w25;
  long unaff_x26;
  uint unaff_w27;
  int *unaff_x28;
  int unaff_w29;
  long in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
                    /* catch() { ... } // from try @ 045e9648 with catch @ 045e9654 */
    plVar7 = *(long **)(unaff_x23 + 0x30);
                    /* try { // try from 045e9658 to 046e965f has its CatchHandler @ 045e9668 */
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)FUN_03421e68(*(undefined8 *)
                                     (*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x18))
      ;
      if (plVar7 == (long *)0x0) goto LAB_045e9814;
      uVar5 = (**(code **)(*plVar7 + 0x1b8))
                        (plVar7,*(undefined4 *)
                                 (unaff_x26 + (ulong)unaff_w27 * (unaff_x20 & 0xffffffff) + 8),
                         in_stack_00000018._4_4_,*(undefined8 *)(*plVar7 + 0x1c0));
    }
    else {
      lVar3 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 8);
      uVar1 = *(undefined4 *)(unaff_x26 + (ulong)unaff_w27 * (unaff_x20 & 0xffffffff) + 8);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02b76218(lVar3);
      }
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar3) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_045e9728;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_02b7654c(plVar7,lVar3,0);
LAB_045e9728:
      uVar5 = (*(code *)*puVar2)(plVar7,uVar1,in_stack_00000018._4_4_,puVar2[1]);
      unaff_x23 = in_stack_00000008;
    }
    if ((uVar5 & 1) != 0) {
      if ((int)unaff_w25 < 0) {
        lVar3 = *(long *)(unaff_x23 + 0x10);
        if (lVar3 != 0) {
          if ((uint)in_stack_00000000 < *(uint *)(lVar3 + 0x18)) {
            *(int *)(lVar3 + in_stack_00000000 * 4 + 0x20) =
                 *(int *)(unaff_x26 + (ulong)unaff_w27 * 100 + 4) + 1;
            goto LAB_045e97e0;
          }
LAB_045e9818:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
      }
      else {
        lVar3 = *(long *)(unaff_x23 + 0x18);
        if (lVar3 != 0) {
          if (unaff_w25 < *(uint *)(lVar3 + 0x18)) {
            *(undefined4 *)(lVar3 + (ulong)unaff_w25 * 100 + 0x24) =
                 *(undefined4 *)(unaff_x26 + (ulong)unaff_w27 * 100 + 4);
LAB_045e97e0:
            uVar1 = *(undefined4 *)(unaff_x23 + 0x24);
            *unaff_x28 = -1;
            *(uint *)(unaff_x23 + 0x24) = unaff_w24;
            *(undefined4 *)(unaff_x26 + (ulong)unaff_w27 * 100 + 4) = uVar1;
            *(ulong *)(unaff_x23 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x23 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x23 + 0x28) + 1);
            return 1;
          }
          goto LAB_045e9818;
        }
      }
LAB_045e9814:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    do {
      unaff_w25 = unaff_w24;
      unaff_w27 = *(uint *)(unaff_x26 + (ulong)unaff_w27 * (unaff_x20 & 0xffffffff) + 4);
      if ((int)unaff_w27 < 0) {
        return 0;
      }
      lVar3 = *(long *)(unaff_x23 + 0x18);
      if (lVar3 == 0) goto LAB_045e9814;
      if (*(uint *)(lVar3 + 0x18) <= unaff_w27) goto LAB_045e9818;
      unaff_x26 = lVar3 + 0x20;
      unaff_x28 = (int *)(unaff_x26 + (ulong)unaff_w27 * (unaff_x20 & 0xffffffff));
      unaff_w24 = unaff_w27;
    } while (*unaff_x28 != unaff_w29);
  } while( true );
}


