/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$GetFloorAnchor
ENTRY_POINT: 0148a3a8
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


void Meta_XR_MRUtilityKit_MRUKRoom__GetFloorAnchor(void)

{
  uint uVar1;
  int iVar2;
  uint in_w8;
  long lVar3;
  int in_w9;
  int in_w10;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  long unaff_x19;
  ulong uVar8;
  uint unaff_w21;
  ulong unaff_x22;
  long unaff_x23;
  int unaff_w24;
  uint unaff_w26;
  ulong uVar9;
  long in_stack_00000008;
  
  uVar4 = in_w9 + in_w10 * -3;
  if ((int)uVar4 < 0) {
LAB_0148a4d8:
    lVar3 = *(long *)(unaff_x19 + 0x158);
    if (lVar3 != 0) {
      uVar9 = (long)unaff_w24;
      while( true ) {
        if (uVar9 == 0xc) {
          if (*(uint *)(lVar3 + 0x18) < 0xe) goto LAB_0148a7e4;
          uVar4 = 0;
          goto LAB_0148a648;
        }
        if (((ulong)*(uint *)(lVar3 + 0x18) <= uVar9 + 1) ||
           (*(uint *)(lVar3 + 0x18) <= (uint)uVar9)) goto LAB_0148a7e4;
        if (unaff_x23 == 0) break;
        uVar8 = 0;
        do {
          if (*(uint *)(unaff_x23 + 0x18) <= uVar8) goto LAB_0148a7e4;
          if ((long)*(int *)(unaff_x23 + 0x20 + uVar8 * 4) < (long)uVar9) {
            lVar3 = *(long *)(unaff_x19 + 0x180);
            if (lVar3 == 0) goto LAB_0148a7e8;
            if (*(uint *)(lVar3 + 0x18) < 2) goto LAB_0148a7e4;
            lVar3 = *(long *)(lVar3 + 0x28);
            if (lVar3 == 0) goto LAB_0148a7e8;
            if (*(uint *)(lVar3 + 0x18) <= uVar8) goto LAB_0148a7e4;
            lVar3 = *(long *)(lVar3 + uVar8 * 8 + 0x20);
            if (lVar3 == 0) goto LAB_0148a7e8;
            if (*(uint *)(lVar3 + 0x18) <= (uint)uVar9) goto LAB_0148a7e4;
            if (*(int *)(lVar3 + uVar9 * 4 + 0x20) == 7) goto LAB_0148a58c;
            if ((unaff_x22 & 1) == 0) {
              FUN_0148b5c4();
            }
            else {
              lVar3 = *(long *)(unaff_x19 + 0xf8);
              if (lVar3 == 0) goto LAB_0148a7e8;
              if (*(uint *)(lVar3 + 0x18) <= unaff_w26) goto LAB_0148a7e4;
              lVar3 = *(long *)(lVar3 + in_stack_00000008 * 8 + 0x20);
              if (lVar3 == 0) goto LAB_0148a7e8;
              if (*(int *)(lVar3 + 0x18) == 0) goto LAB_0148a7e4;
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
          uVar8 = uVar8 + 1;
        } while (uVar8 != 3);
        lVar3 = *(long *)(unaff_x19 + 0x158);
        uVar9 = uVar9 + 1;
        if (lVar3 == 0) break;
      }
    }
  }
  else if (unaff_x23 != 0) {
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    do {
      if (uVar1 <= uVar4) goto LAB_0148a7e4;
      puVar5 = (uint *)(unaff_x23 + (long)(int)uVar4 * 4 + 0x20);
      if (*puVar5 == 0xffffffff) {
        lVar3 = *(long *)(unaff_x19 + 0x158);
        if (lVar3 == 0) break;
        if ((*(uint *)(lVar3 + 0x18) <= in_w8 + 1) || (*(uint *)(lVar3 + 0x18) <= in_w8))
        goto LAB_0148a7e4;
        iVar2 = *(int *)(lVar3 + 0x20 + (long)(int)in_w8 * 4);
        iVar7 = *(int *)(lVar3 + 0x20 + (long)(int)(in_w8 + 1) * 4) - iVar2;
        uVar6 = iVar2 * 3 + iVar7 * (uVar4 + 1);
        do {
          iVar7 = iVar7 + -1;
          uVar6 = uVar6 - 1;
          if (iVar7 < -1) goto LAB_0148a4a4;
          lVar3 = *(long *)(unaff_x19 + 0x188);
          if (lVar3 == 0) goto LAB_0148a7e8;
          if (*(uint *)(lVar3 + 0x18) < 2) goto LAB_0148a7e4;
          lVar3 = *(long *)(lVar3 + 0x28);
          if (lVar3 == 0) goto LAB_0148a7e8;
          if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_0148a7e4;
        } while (*(float *)(lVar3 + (long)(int)uVar6 * 4 + 0x20) == 0.0);
        *puVar5 = in_w8;
LAB_0148a4a4:
        in_w8 = in_w8 - (uVar4 == 0);
      }
      else if (*(int *)(unaff_x23 + 0x20) != -1) {
        if (uVar1 < 2) goto LAB_0148a7e4;
        if (*(int *)(unaff_x23 + 0x24) != -1) {
          if (uVar1 < 3) goto LAB_0148a7e4;
          if (*(int *)(unaff_x23 + 0x28) != -1) goto LAB_0148a4d8;
        }
      }
      if (((int)in_w8 < unaff_w24) || (uVar4 = (int)(uVar4 - 1) % 3, (int)uVar4 < 0))
      goto LAB_0148a4d8;
    } while( true );
  }
LAB_0148a7e8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
LAB_0148a648:
  lVar3 = *(long *)(unaff_x19 + 0x180);
  if (lVar3 == 0) goto LAB_0148a7e8;
  if (*(uint *)(lVar3 + 0x18) < 2) {
LAB_0148a7e4:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  lVar3 = *(long *)(lVar3 + 0x28);
  if (lVar3 == 0) goto LAB_0148a7e8;
  if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_0148a7e4;
  lVar3 = *(long *)(lVar3 + (long)(int)uVar4 * 8 + 0x20);
  if (lVar3 == 0) goto LAB_0148a7e8;
  if (*(uint *)(lVar3 + 0x18) < 0xc) goto LAB_0148a7e4;
  if (*(long *)(unaff_x19 + 0x158) == 0) goto LAB_0148a7e8;
  if (*(uint *)(*(long *)(unaff_x19 + 0x158) + 0x18) < 0xc) goto LAB_0148a7e4;
  if (*(int *)(lVar3 + 0x4c) == 7) {
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
    lVar3 = *(long *)(unaff_x19 + 0xf8);
    if (lVar3 == 0) goto LAB_0148a7e8;
    if (*(uint *)(lVar3 + 0x18) <= unaff_w26) goto LAB_0148a7e4;
    lVar3 = *(long *)(lVar3 + in_stack_00000008 * 8 + 0x20);
    if (lVar3 == 0) goto LAB_0148a7e8;
    if (*(int *)(lVar3 + 0x18) == 0) goto LAB_0148a7e4;
    FUN_0148b418();
  }
  uVar4 = uVar4 + 1;
  if (uVar4 == 3) {
    return;
  }
  goto LAB_0148a648;
}


