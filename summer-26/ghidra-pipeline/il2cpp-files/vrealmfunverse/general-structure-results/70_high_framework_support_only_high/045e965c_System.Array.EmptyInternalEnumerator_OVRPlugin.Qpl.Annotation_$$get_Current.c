/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Qpl.Annotation>$$get_Current
ENTRY_POINT: 045e965c
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


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation>__get_Current(void)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  ulong unaff_x20;
  long *unaff_x22;
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
    plVar3 = unaff_x22;
    if (!(bool)in_ZR) {
      plVar3 = unaff_x19;
    }
                    /* try { // try from 045e9660 to 046e966b has its CatchHandler @ 045e9124 */
    if (unaff_x19 == (long *)0x0) {
      plVar3 = (long *)FUN_03421e68(*(undefined8 *)
                                     (*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x18))
      ;
      if (plVar3 == (long *)0x0) goto LAB_045e9814;
      uVar6 = (**(code **)(*plVar3 + 0x1b8))
                        (plVar3,*(undefined4 *)
                                 (unaff_x26 + (ulong)unaff_w27 * (unaff_x20 & 0xffffffff) + 8),
                         in_stack_00000018._4_4_,*(undefined8 *)(*plVar3 + 0x1c0));
    }
    else {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 045e9658 with catch @ 045e9668
                        */
      lVar4 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 8);
                    /* try { // try from 045e9680 to 046e9883 has its CatchHandler @ 045e9680
                       catch() { ... } // from try @ 045e9680 with catch @ 045e9680
                       catch() { ... } // from try @ 045e99a8 with catch @ 045e9680
                       catch() { ... } // from try @ 045e9a38 with catch @ 045e9680
                       catch() { ... } // from try @ 045e9a94 with catch @ 045e9680 */
      uVar1 = *(undefined4 *)(unaff_x26 + (ulong)unaff_w27 * (unaff_x20 & 0xffffffff) + 8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02b76218(lVar4);
      }
      lVar5 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar4) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_045e9728;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_02b7654c(plVar3,lVar4,0);
LAB_045e9728:
      uVar6 = (*(code *)*puVar2)(plVar3,uVar1,in_stack_00000018._4_4_,puVar2[1]);
      unaff_x22 = plVar3;
      unaff_x23 = in_stack_00000008;
    }
    if ((uVar6 & 1) != 0) {
      if ((int)unaff_w25 < 0) {
        lVar4 = *(long *)(unaff_x23 + 0x10);
        if (lVar4 != 0) {
          if ((uint)in_stack_00000000 < *(uint *)(lVar4 + 0x18)) {
            *(int *)(lVar4 + in_stack_00000000 * 4 + 0x20) =
                 *(int *)(unaff_x26 + (ulong)unaff_w27 * 100 + 4) + 1;
            goto LAB_045e97e0;
          }
LAB_045e9818:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
      }
      else {
        lVar4 = *(long *)(unaff_x23 + 0x18);
        if (lVar4 != 0) {
          if (unaff_w25 < *(uint *)(lVar4 + 0x18)) {
            *(undefined4 *)(lVar4 + (ulong)unaff_w25 * 100 + 0x24) =
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
      lVar4 = *(long *)(unaff_x23 + 0x18);
      if (lVar4 == 0) goto LAB_045e9814;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w27) goto LAB_045e9818;
      unaff_x26 = lVar4 + 0x20;
      unaff_x28 = (int *)(unaff_x26 + (ulong)unaff_w27 * (unaff_x20 & 0xffffffff));
      unaff_w24 = unaff_w27;
    } while (*unaff_x28 != unaff_w29);
    unaff_x19 = *(long **)(unaff_x23 + 0x30);
    in_ZR = unaff_x19 == (long *)0x0;
  } while( true );
}


