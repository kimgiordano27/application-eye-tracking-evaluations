/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$GetAnchorCenter
ENTRY_POINT: 01487b40
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKAnchor__GetAnchorCenter(void)

{
  ulong uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  long in_x10;
  int *piVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  
  if (1 < *(uint *)(in_x10 + 0x18)) {
    lVar9 = *(long *)(unaff_x19 + 0x158);
    if (lVar9 == 0) {
LAB_01487d00:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (1 < *(uint *)(lVar9 + 0x18)) {
      uVar8 = *(uint *)(in_x10 + 0x24);
      iVar6 = 0;
      iVar5 = 0;
      uVar11 = *(int *)(lVar9 + 0x24) * 3;
      lVar9 = 0x20;
      do {
        uVar12 = lVar9 - 0x20;
        if (uVar12 == uVar8) {
          lVar10 = *(long *)(unaff_x19 + 0x150);
          if (lVar10 == 0) goto LAB_01487d00;
          if (*(uint *)(lVar10 + 0x18) <= iVar6 + 2U) goto LAB_01487d04;
          uVar8 = *(uint *)(lVar10 + (long)(int)(iVar6 + 2U) * 4 + 0x20);
          iVar6 = iVar6 + 1;
        }
        if (uVar12 == uVar11) {
          lVar10 = *(long *)(unaff_x19 + 0x158);
          if (lVar10 == 0) goto LAB_01487d00;
          uVar11 = iVar5 + 2;
          if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_01487d04;
          iVar5 = iVar5 + 1;
          uVar11 = *(int *)(lVar10 + (long)(int)uVar11 * 4 + 0x20) * 3;
        }
        lVar10 = *(long *)(unaff_x19 + 0x160);
        if (lVar10 == 0) goto LAB_01487d00;
        if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_01487d04;
        *(char *)(lVar10 + lVar9) = (char)iVar6;
        lVar10 = *(long *)(unaff_x19 + 0x168);
        if (lVar10 == 0) goto LAB_01487d00;
        if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_01487d04;
        *(char *)(lVar10 + lVar9) = (char)iVar5;
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0x260);
      uVar8 = 0;
      uVar12 = 0;
      do {
        lVar9 = *(long *)(unaff_x19 + 0x158);
        if (lVar9 == 0) goto LAB_01487d00;
        uVar1 = uVar12 + 1;
        if (*(uint *)(lVar9 + 0x18) <= uVar1) goto LAB_01487d04;
        iVar6 = 0;
        iVar5 = *(int *)(lVar9 + 0x20 + uVar1 * 4) - *(int *)(lVar9 + 0x20 + uVar12 * 4);
        do {
          iVar2 = iVar5;
          if (0 < iVar5) {
            do {
              lVar9 = *(long *)(unaff_x19 + 0x170);
              if (lVar9 == 0) goto LAB_01487d00;
              if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_01487d04;
              lVar10 = (long)(int)uVar8;
              iVar2 = iVar2 + -1;
              uVar8 = uVar8 + 1;
              *(char *)(lVar9 + lVar10 + 0x20) = (char)iVar6;
            } while (iVar2 != 0);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 != 3);
        uVar12 = uVar1;
      } while (uVar1 != 0xc);
      lVar9 = *unaff_x20;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar12 != 0) {
        piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_01487ce0;
          }
          uVar12 = uVar12 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar12 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724();
LAB_01487ce0:
      uVar3 = (*(code *)*puVar4)();
      *(undefined4 *)(unaff_x19 + 0x178) = uVar3;
      return;
    }
  }
LAB_01487d04:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


