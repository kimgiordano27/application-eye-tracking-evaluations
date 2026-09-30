/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$GetRoomOutline
ENTRY_POINT: 0148a490
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__GetRoomOutline(float param_1)

{
  int iVar1;
  uint in_w8;
  long lVar2;
  uint in_w9;
  uint in_w10;
  int in_w11;
  uint *in_x12;
  uint in_w13;
  int in_w14;
  long unaff_x19;
  ulong uVar3;
  uint unaff_w21;
  ulong unaff_x22;
  long unaff_x23;
  int unaff_w24;
  uint uVar4;
  uint unaff_w26;
  ulong uVar5;
  long in_stack_00000008;
  
  do {
    if (param_1 == 0.0) goto LAB_0148a458;
    *in_x12 = in_w8;
    do {
      in_w8 = in_w8 - (in_w10 == 0);
LAB_0148a4b0:
      if (((int)in_w8 < unaff_w24) ||
         (iVar1 = (int)((ulong)((long)(int)(in_w10 - 1) * (long)in_w11) >> 0x20),
         in_w10 = (in_w10 - 1) + (iVar1 - (iVar1 >> 0x1f)) * -3, (int)in_w10 < 0))
      goto LAB_0148a4d8;
      if (in_w9 <= in_w10) goto LAB_0148a7e4;
      in_x12 = (uint *)(unaff_x23 + (long)(int)in_w10 * 4 + 0x20);
      if (*in_x12 != 0xffffffff) goto code_r0x0148a3dc;
      lVar2 = *(long *)(unaff_x19 + 0x158);
      if (lVar2 == 0) goto LAB_0148a7e8;
      if ((*(uint *)(lVar2 + 0x18) <= in_w8 + 1) || (*(uint *)(lVar2 + 0x18) <= in_w8))
      goto LAB_0148a7e4;
      iVar1 = *(int *)(lVar2 + 0x20 + (long)(int)in_w8 * 4);
      in_w14 = *(int *)(lVar2 + 0x20 + (long)(int)(in_w8 + 1) * 4) - iVar1;
      in_w13 = iVar1 * 3 + in_w14 * (in_w10 + 1);
LAB_0148a458:
      in_w14 = in_w14 + -1;
      in_w13 = in_w13 - 1;
    } while (in_w14 < -1);
    lVar2 = *(long *)(unaff_x19 + 0x188);
    if (lVar2 == 0) goto LAB_0148a7e8;
    if (*(uint *)(lVar2 + 0x18) < 2) goto LAB_0148a7e4;
    lVar2 = *(long *)(lVar2 + 0x28);
    if (lVar2 == 0) goto LAB_0148a7e8;
    if (*(uint *)(lVar2 + 0x18) <= in_w13) goto LAB_0148a7e4;
    param_1 = *(float *)(lVar2 + (long)(int)in_w13 * 4 + 0x20);
  } while( true );
code_r0x0148a3dc:
  if (*(int *)(unaff_x23 + 0x20) != -1) {
    if (in_w9 < 2) goto LAB_0148a7e4;
    if (*(int *)(unaff_x23 + 0x24) != -1) {
      if (in_w9 < 3) goto LAB_0148a7e4;
      if (*(int *)(unaff_x23 + 0x28) != -1) {
LAB_0148a4d8:
        lVar2 = *(long *)(unaff_x19 + 0x158);
        if (lVar2 == 0) goto LAB_0148a7e8;
        uVar5 = (long)unaff_w24;
        goto LAB_0148a4e8;
      }
    }
  }
  goto LAB_0148a4b0;
LAB_0148a4e8:
  if (uVar5 == 0xc) {
    if (*(uint *)(lVar2 + 0x18) < 0xe) goto LAB_0148a7e4;
    uVar4 = 0;
    goto LAB_0148a648;
  }
  if (((ulong)*(uint *)(lVar2 + 0x18) <= uVar5 + 1) || (*(uint *)(lVar2 + 0x18) <= (uint)uVar5))
  goto LAB_0148a7e4;
  if (unaff_x23 == 0) goto LAB_0148a7e8;
  uVar3 = 0;
  do {
    if (*(uint *)(unaff_x23 + 0x18) <= uVar3) goto LAB_0148a7e4;
    if ((long)*(int *)(unaff_x23 + 0x20 + uVar3 * 4) < (long)uVar5) {
      lVar2 = *(long *)(unaff_x19 + 0x180);
      if (lVar2 == 0) goto LAB_0148a7e8;
      if (*(uint *)(lVar2 + 0x18) < 2) goto LAB_0148a7e4;
      lVar2 = *(long *)(lVar2 + 0x28);
      if (lVar2 == 0) goto LAB_0148a7e8;
      if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_0148a7e4;
      lVar2 = *(long *)(lVar2 + uVar3 * 8 + 0x20);
      if (lVar2 == 0) goto LAB_0148a7e8;
      if (*(uint *)(lVar2 + 0x18) <= (uint)uVar5) goto LAB_0148a7e4;
      if (*(int *)(lVar2 + uVar5 * 4 + 0x20) == 7) goto LAB_0148a58c;
      if ((unaff_x22 & 1) == 0) {
        FUN_0148b5c4();
      }
      else {
        lVar2 = *(long *)(unaff_x19 + 0xf8);
        if (lVar2 == 0) goto LAB_0148a7e8;
        if (*(uint *)(lVar2 + 0x18) <= unaff_w26) goto LAB_0148a7e4;
        lVar2 = *(long *)(lVar2 + in_stack_00000008 * 8 + 0x20);
        if (lVar2 == 0) goto LAB_0148a7e8;
        if (*(int *)(lVar2 + 0x18) == 0) goto LAB_0148a7e4;
        FUN_0148b418();
      }
    }
    else {
LAB_0148a58c:
      if ((unaff_w21 >> 1 & 1) == 0) {
        FUN_0148b378();
      }
      else {
        FUN_0148b26c();
      }
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != 3);
  lVar2 = *(long *)(unaff_x19 + 0x158);
  uVar5 = uVar5 + 1;
  if (lVar2 == 0) goto LAB_0148a7e8;
  goto LAB_0148a4e8;
LAB_0148a648:
  lVar2 = *(long *)(unaff_x19 + 0x180);
  if (lVar2 == 0) {
LAB_0148a7e8:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(uint *)(lVar2 + 0x18) < 2) {
LAB_0148a7e4:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  lVar2 = *(long *)(lVar2 + 0x28);
  if (lVar2 == 0) goto LAB_0148a7e8;
  if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_0148a7e4;
  lVar2 = *(long *)(lVar2 + (long)(int)uVar4 * 8 + 0x20);
  if (lVar2 == 0) goto LAB_0148a7e8;
  if (*(uint *)(lVar2 + 0x18) < 0xc) goto LAB_0148a7e4;
  if (*(long *)(unaff_x19 + 0x158) == 0) goto LAB_0148a7e8;
  if (*(uint *)(*(long *)(unaff_x19 + 0x158) + 0x18) < 0xc) goto LAB_0148a7e4;
  if (*(int *)(lVar2 + 0x4c) == 7) {
    if ((unaff_w21 >> 1 & 1) == 0) {
      FUN_0148b378();
    }
    else {
      FUN_0148b26c();
    }
  }
  else if ((unaff_x22 & 1) == 0) {
    FUN_0148b5c4();
  }
  else {
    lVar2 = *(long *)(unaff_x19 + 0xf8);
    if (lVar2 == 0) goto LAB_0148a7e8;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w26) goto LAB_0148a7e4;
    lVar2 = *(long *)(lVar2 + in_stack_00000008 * 8 + 0x20);
    if (lVar2 == 0) goto LAB_0148a7e8;
    if (*(int *)(lVar2 + 0x18) == 0) goto LAB_0148a7e4;
    FUN_0148b418();
  }
  uVar4 = uVar4 + 1;
  if (uVar4 == 3) {
    return;
  }
  goto LAB_0148a648;
}


