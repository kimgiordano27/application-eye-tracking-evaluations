/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$GetGlobalMeshAnchor
ENTRY_POINT: 0148a3b8
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


void Meta_XR_MRUtilityKit_MRUKRoom__GetGlobalMeshAnchor(void)

{
  int iVar1;
  uint in_w8;
  long lVar2;
  uint in_w10;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  long unaff_x19;
  ulong uVar6;
  uint unaff_w21;
  ulong unaff_x22;
  long unaff_x23;
  int unaff_w24;
  uint uVar7;
  uint unaff_w26;
  ulong uVar8;
  long in_stack_00000008;
  
  uVar7 = *(uint *)(unaff_x23 + 0x18);
  do {
    if (uVar7 <= in_w10) goto LAB_0148a7e4;
    puVar3 = (uint *)(unaff_x23 + (long)(int)in_w10 * 4 + 0x20);
    if (*puVar3 == 0xffffffff) {
      lVar2 = *(long *)(unaff_x19 + 0x158);
      if (lVar2 == 0) goto LAB_0148a7e8;
      if ((*(uint *)(lVar2 + 0x18) <= in_w8 + 1) || (*(uint *)(lVar2 + 0x18) <= in_w8))
      goto LAB_0148a7e4;
      iVar1 = *(int *)(lVar2 + 0x20 + (long)(int)in_w8 * 4);
      iVar5 = *(int *)(lVar2 + 0x20 + (long)(int)(in_w8 + 1) * 4) - iVar1;
      uVar4 = iVar1 * 3 + iVar5 * (in_w10 + 1);
      do {
        iVar5 = iVar5 + -1;
        uVar4 = uVar4 - 1;
        if (iVar5 < -1) goto LAB_0148a4a4;
        lVar2 = *(long *)(unaff_x19 + 0x188);
        if (lVar2 == 0) goto LAB_0148a7e8;
        if (*(uint *)(lVar2 + 0x18) < 2) goto LAB_0148a7e4;
        lVar2 = *(long *)(lVar2 + 0x28);
        if (lVar2 == 0) goto LAB_0148a7e8;
        if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_0148a7e4;
      } while (*(float *)(lVar2 + (long)(int)uVar4 * 4 + 0x20) == 0.0);
      *puVar3 = in_w8;
LAB_0148a4a4:
      in_w8 = in_w8 - (in_w10 == 0);
    }
    else if (*(int *)(unaff_x23 + 0x20) != -1) {
      if (uVar7 < 2) goto LAB_0148a7e4;
      if (*(int *)(unaff_x23 + 0x24) != -1) {
        if (uVar7 < 3) goto LAB_0148a7e4;
        if (*(int *)(unaff_x23 + 0x28) != -1) goto LAB_0148a4d8;
      }
    }
    if (((int)in_w8 < unaff_w24) || (in_w10 = (int)(in_w10 - 1) % 3, (int)in_w10 < 0))
    goto LAB_0148a4d8;
  } while( true );
LAB_0148a648:
  lVar2 = *(long *)(unaff_x19 + 0x180);
  if (lVar2 == 0) goto LAB_0148a7e8;
  if (*(uint *)(lVar2 + 0x18) < 2) {
LAB_0148a7e4:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  lVar2 = *(long *)(lVar2 + 0x28);
  if (lVar2 == 0) goto LAB_0148a7e8;
  if (*(uint *)(lVar2 + 0x18) <= uVar7) goto LAB_0148a7e4;
  lVar2 = *(long *)(lVar2 + (long)(int)uVar7 * 8 + 0x20);
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
  uVar7 = uVar7 + 1;
  if (uVar7 == 3) {
    return;
  }
  goto LAB_0148a648;
LAB_0148a4d8:
  lVar2 = *(long *)(unaff_x19 + 0x158);
  if (lVar2 != 0) {
    uVar8 = (long)unaff_w24;
    while( true ) {
      if (uVar8 == 0xc) {
        if (*(uint *)(lVar2 + 0x18) < 0xe) goto LAB_0148a7e4;
        uVar7 = 0;
        goto LAB_0148a648;
      }
      if (((ulong)*(uint *)(lVar2 + 0x18) <= uVar8 + 1) || (*(uint *)(lVar2 + 0x18) <= (uint)uVar8))
      goto LAB_0148a7e4;
      if (unaff_x23 == 0) break;
      uVar6 = 0;
      do {
        if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_0148a7e4;
        if ((long)*(int *)(unaff_x23 + 0x20 + uVar6 * 4) < (long)uVar8) {
          lVar2 = *(long *)(unaff_x19 + 0x180);
          if (lVar2 == 0) goto LAB_0148a7e8;
          if (*(uint *)(lVar2 + 0x18) < 2) goto LAB_0148a7e4;
          lVar2 = *(long *)(lVar2 + 0x28);
          if (lVar2 == 0) goto LAB_0148a7e8;
          if (*(uint *)(lVar2 + 0x18) <= uVar6) goto LAB_0148a7e4;
          lVar2 = *(long *)(lVar2 + uVar6 * 8 + 0x20);
          if (lVar2 == 0) goto LAB_0148a7e8;
          if (*(uint *)(lVar2 + 0x18) <= (uint)uVar8) goto LAB_0148a7e4;
          if (*(int *)(lVar2 + uVar8 * 4 + 0x20) == 7) goto LAB_0148a58c;
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
        uVar6 = uVar6 + 1;
      } while (uVar6 != 3);
      lVar2 = *(long *)(unaff_x19 + 0x158);
      uVar8 = uVar8 + 1;
      if (lVar2 == 0) break;
    }
  }
LAB_0148a7e8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


