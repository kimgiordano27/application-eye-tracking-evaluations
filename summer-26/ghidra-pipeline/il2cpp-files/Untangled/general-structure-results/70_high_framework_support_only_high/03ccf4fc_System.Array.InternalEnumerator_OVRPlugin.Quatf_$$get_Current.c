/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Quatf>$$get_Current
ENTRY_POINT: 03ccf4fc
PROGRAM: Untangled-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_InternalEnumerator<OVRPlugin_Quatf>__get_Current(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long in_x10;
  int unaff_w20;
  ulong unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  long *plVar12;
  undefined8 unaff_x25;
  long unaff_x26;
  long unaff_x27;
  ulong unaff_x28;
  int unaff_w29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
code_r0x03ccf4fc:
  plVar12 = *(long **)(unaff_x26 + 0x30);
  if (plVar12 == (long *)0x0) {
LAB_03ccf744:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar7 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x20);
  lVar9 = unaff_x27 + unaff_x21 * in_x10;
  uVar5 = *(undefined8 *)(lVar9 + 0x28);
  uVar6 = *(undefined8 *)(lVar9 + 0x30);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02eea768(lVar7);
  }
  lVar9 = *plVar12;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    /* try { // try from 03ccf53c to 03dcf563 has its CatchHandler @ 03ccf7d0 */
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar7) {
        puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_03ccf57c;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar4 = (undefined8 *)FUN_02eea86c(plVar12,lVar7,0);
LAB_03ccf57c:
  uVar10 = (*(code *)*puVar4)(plVar12,uVar5,uVar6);
                    /* try { // try from 03ccf598 to 03dcf5c3 has its CatchHandler @ 03ccf7cc */
  if ((uVar10 & 1) != 0) {
    return 0;
  }
  in_x10 = 0x18;
LAB_03ccf5ac:
  uVar8 = (uint)*(undefined8 *)(unaff_x27 + 0x18);
  if ((int)uVar8 <= unaff_w29) {
    thunk_FUN_02f239f0(PTR_DAT_06d021a0);
    uVar5 = thunk_FUN_02ef1808();
    uVar6 = thunk_FUN_02f239f0(PTR_DAT_06d39100);
    FUN_05601bec(uVar5,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar5,in_stack_00000008);
  }
  if ((uint)unaff_x28 < uVar8) {
    uVar1 = *(uint *)(unaff_x27 + unaff_x21 * 0x18 + 0x24);
    unaff_x21 = (ulong)uVar1;
    unaff_w29 = unaff_w29 + 1;
    if (-1 < (int)uVar1) {
      if (uVar8 <= uVar1) goto LAB_03ccf704;
      unaff_x22 = in_stack_00000008;
      unaff_x28 = unaff_x21;
      if (*(int *)(unaff_x27 + unaff_x21 * 0x18 + 0x20) == unaff_w20) goto code_r0x03ccf4fc;
      goto LAB_03ccf5ac;
    }
    uVar8 = *(uint *)(unaff_x26 + 0x28);
    if ((int)uVar8 < 0) {
      if (unaff_x27 == 0) goto LAB_03ccf744;
      uVar8 = *(uint *)(unaff_x26 + 0x24);
      if (uVar8 == *(uint *)(unaff_x27 + 0x18)) {
        FUN_03ccf230(unaff_x26,
                     *(undefined8 *)(*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) + 0x1a8))
        ;
        if (*(long *)(unaff_x26 + 0x10) == 0) goto LAB_03ccf744;
        uVar8 = *(uint *)(unaff_x26 + 0x24);
        unaff_x27 = *(long *)(unaff_x26 + 0x18);
        iVar2 = *(int *)(*(long *)(unaff_x26 + 0x10) + 0x18);
        *(uint *)(unaff_x26 + 0x24) = uVar8 + 1;
        if (unaff_x27 == 0) goto LAB_03ccf744;
        iVar3 = 0;
        if (iVar2 != 0) {
          iVar3 = unaff_w20 / iVar2;
        }
        in_stack_00000000._4_4_ = unaff_w20 - iVar3 * iVar2;
      }
      else {
        *(uint *)(unaff_x26 + 0x24) = uVar8 + 1;
      }
    }
    else {
      if (unaff_x27 == 0) goto LAB_03ccf744;
      if (*(uint *)(unaff_x27 + 0x18) <= uVar8) goto LAB_03ccf704;
      *(undefined4 *)(unaff_x26 + 0x28) = *(undefined4 *)(unaff_x27 + (ulong)uVar8 * 0x18 + 0x24);
    }
    if (*(uint *)(unaff_x27 + 0x18) <= uVar8) goto LAB_03ccf704;
    lVar7 = unaff_x27 + (long)(int)uVar8 * 0x18;
    *(int *)(lVar7 + 0x20) = unaff_w20;
    *(undefined8 *)(lVar7 + 0x28) = unaff_x25;
    *(undefined8 *)(lVar7 + 0x30) = unaff_x23;
    lVar7 = *(long *)(unaff_x26 + 0x10);
    if (lVar7 == 0) goto LAB_03ccf744;
    if ((in_stack_00000000._4_4_ < *(uint *)(lVar7 + 0x18)) && (uVar8 < *(uint *)(unaff_x27 + 0x18))
       ) {
      piVar11 = (int *)(lVar7 + (long)(int)in_stack_00000000._4_4_ * 4 + 0x20);
      *(int *)(unaff_x27 + (long)(int)uVar8 * 0x18 + 0x24) = *piVar11 + -1;
      *piVar11 = uVar8 + 1;
      *(int *)(unaff_x26 + 0x20) = *(int *)(unaff_x26 + 0x20) + 1;
      *(int *)(unaff_x26 + 0x38) = *(int *)(unaff_x26 + 0x38) + 1;
      return 1;
    }
  }
LAB_03ccf704:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c8();
}


