/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.AppPerfFrameStats>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 051761c8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_AppPerfFrameStats>__System_Collections_IEnumerator_get_Current
          (void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  uint uVar9;
  ulong unaff_x21;
  long unaff_x24;
  ulong unaff_x25;
  ulong uVar10;
  ulong unaff_x26;
  long unaff_x27;
  int unaff_w28;
  int *piVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long in_stack_00000000;
  undefined8 *in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    while( true ) {
      do {
        uVar10 = unaff_x25;
        uVar2 = *(uint *)(unaff_x27 + unaff_x26 * unaff_x21 + 0x24);
        unaff_x26 = (ulong)uVar2;
        if ((int)uVar2 < 0) {
          *in_stack_00000008 = 0;
          in_stack_00000008[1] = 0;
          in_stack_00000008[2] = 0;
          return 0;
        }
        unaff_x27 = *(long *)(unaff_x19 + 0x18);
        if (unaff_x27 == 0) goto LAB_05176328;
        if (*(uint *)(unaff_x27 + 0x18) <= uVar2) goto LAB_0517632c;
        piVar11 = (int *)(unaff_x27 + unaff_x26 * (unaff_x21 & 0xffffffff) + 0x20);
        unaff_x25 = unaff_x26;
      } while (*piVar11 != unaff_w28);
      plVar5 = *(long **)(unaff_x19 + 0x30);
      if (plVar5 == (long *)0x0) break;
      if (plVar5 == (long *)0x0) goto LAB_05176328;
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 8);
      uVar1 = *(undefined4 *)(unaff_x27 + unaff_x26 * unaff_x21 + 0x28);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_032934b8(lVar4);
      }
      lVar6 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar4) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_05176218;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_032937ac(plVar5,lVar4,0);
LAB_05176218:
      uVar7 = (*(code *)*puVar3)(plVar5,uVar1,in_stack_00000018._4_4_,puVar3[1]);
      unaff_x24 = in_stack_00000010;
      if ((uVar7 & 1) != 0) goto LAB_0517627c;
    }
    plVar5 = (long *)FUN_03896198(*(undefined8 *)
                                   (*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 0x18));
    if (plVar5 == (long *)0x0) goto LAB_05176328;
    uVar7 = (**(code **)(*plVar5 + 0x1b8))
                      (plVar5,*(undefined4 *)(unaff_x27 + unaff_x26 * unaff_x21 + 0x28),
                       in_stack_00000018._4_4_,*(undefined8 *)(*plVar5 + 0x1c0));
  } while ((uVar7 & 1) == 0);
LAB_0517627c:
  uVar9 = (uint)uVar10;
  if ((int)uVar9 < 0) {
    lVar4 = *(long *)(unaff_x19 + 0x10);
    if (lVar4 == 0) goto LAB_05176328;
    if (*(uint *)(lVar4 + 0x18) <= (uint)in_stack_00000000) goto LAB_0517632c;
    *(int *)(lVar4 + in_stack_00000000 * 4 + 0x20) =
         *(int *)(unaff_x27 + unaff_x26 * 0x24 + 0x24) + 1;
  }
  else {
    lVar4 = *(long *)(unaff_x19 + 0x18);
    if (lVar4 == 0) {
LAB_05176328:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar9) {
LAB_0517632c:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    *(undefined4 *)(lVar4 + (uVar10 & 0xffffffff) * 0x24 + 0x24) =
         *(undefined4 *)(unaff_x27 + unaff_x26 * 0x24 + 0x24);
  }
  lVar4 = unaff_x27 + unaff_x26 * 0x24;
  uVar13 = *(undefined8 *)(lVar4 + 0x34);
  uVar12 = *(undefined8 *)(lVar4 + 0x2c);
  in_stack_00000008[2] = *(undefined8 *)(lVar4 + 0x3c);
  in_stack_00000008[1] = uVar13;
  *in_stack_00000008 = uVar12;
  *piVar11 = -1;
  *(undefined4 *)(lVar4 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
  *(uint *)(unaff_x19 + 0x24) = uVar2;
  *(ulong *)(unaff_x19 + 0x28) =
       CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
  return 1;
}


