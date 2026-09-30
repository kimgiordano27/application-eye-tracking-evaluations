/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$FlipZRotateY180
ENTRY_POINT: 04a80710
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUK__FlipZRotateY180(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  int *piVar5;
  void *__src;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  code *pcVar11;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long *plVar12;
  ulong __n;
  undefined8 *__dest;
  long lVar13;
  long unaff_x26;
  int iVar14;
  ulong uVar15;
  long unaff_x29;
  
  __n = (ulong)*(uint *)(*(long *)(*(long *)(param_1 + 0xc0) + 0x98) + 0xfc);
  __dest = (undefined8 *)(&stack0x00000000 + -(__n + 0xf & 0x1fffffff0));
  if (unaff_x22 == 0) {
LAB_04a80a24:
    lVar10 = *(long *)(unaff_x26 + 0x28);
LAB_04a80a28:
    if (lVar10 == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    goto LAB_04a80a60;
  }
  iVar14 = *(int *)(unaff_x22 + 0x20);
  if (iVar14 != 0) {
    if (*(long *)(unaff_x22 + 0x10) == 0) goto LAB_04a80a24;
    iVar1 = *(int *)(*(long *)(unaff_x22 + 0x10) + 0x18);
    if (*(int *)(*(long *)PTR_DAT_06322378 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    iVar4 = FUN_04d21ca8(iVar14 + 1,0);
    if (iVar4 < iVar1) {
      lVar10 = *(long *)(unaff_x21 + 0x20);
      uVar2 = *(uint *)(unaff_x22 + 0x24);
      plVar12 = *(long **)(unaff_x22 + 0x18);
      *(long *)(unaff_x29 + -0x30) = unaff_x26;
      (*(code *)**(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x70))();
      *(int *)(unaff_x29 + -0x34) = iVar14;
      if ((int)uVar2 < 1) {
        iVar14 = 0;
      }
      else {
        if (plVar12 == (long *)0x0) {
          lVar10 = *(long *)(*(long *)(unaff_x29 + -0x30) + 0x28);
          goto LAB_04a80a28;
        }
        uVar15 = 0;
        iVar14 = 0;
        do {
          if (*(uint *)(plVar12 + 3) <= uVar15) {
LAB_04a80a0c:
            if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cacc();
            }
            goto LAB_04a80a60;
          }
          piVar5 = (int *)thunk_FUN_02b9b29c((long)plVar12 +
                                             uVar15 * *(uint *)(*plVar12 + 0x104) + 0x20,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) +
                                                                  0xc0) + 0x90) + 0x80));
          iVar1 = *piVar5;
          if (-1 < iVar1) {
            if (*(uint *)(plVar12 + 3) <= uVar15) goto LAB_04a80a0c;
            __src = (void *)thunk_FUN_02b9b29c((long)plVar12 +
                                               uVar15 * *(uint *)(*plVar12 + 0x104) + 0x20,
                                               *(long *)(*(long *)(*(long *)(*(long *)(unaff_x21 +
                                                                                      0x20) + 0xc0)
                                                                  + 0x90) + 0x80) + 0x40);
            memcpy(__dest,__src,__n);
            lVar10 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
            puVar9 = __dest;
            if (-1 < *(int *)(*(long *)(lVar10 + 0x98) + 0x28)) {
              puVar9 = (undefined8 *)*__dest;
            }
            puVar8 = *(undefined8 **)(lVar10 + 0xa0);
            *(int *)(unaff_x29 + -0x10) = iVar1;
            *(int *)(unaff_x29 + -0xc) = iVar14;
            uVar6 = *puVar8;
            *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
            pcVar11 = (code *)puVar8[2];
            *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0xc;
            *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0x10;
            (*pcVar11)(uVar6);
            iVar14 = iVar14 + 1;
          }
          uVar15 = uVar15 + 1;
        } while (uVar2 != uVar15);
      }
      *(int *)(unaff_x19 + 0x24) = iVar14;
      unaff_x26 = *(long *)(unaff_x29 + -0x30);
      iVar14 = *(int *)(unaff_x29 + -0x34);
    }
    else {
      if (*(long *)(unaff_x22 + 0x10) == 0) goto LAB_04a80a24;
      lVar10 = FUN_04d9e838(*(long *)(unaff_x22 + 0x10),0);
      puVar3 = PTR_DAT_06313588;
      if (lVar10 != 0) {
        lVar13 = *(long *)PTR_DAT_06313588;
        lVar7 = thunk_FUN_02b79548(lVar10,lVar13);
        if (lVar7 != 0) {
          uVar6 = *(undefined8 *)puVar3;
          *(long *)(unaff_x19 + 0x10) = lVar7;
          lVar7 = thunk_FUN_02b79548(lVar10,uVar6);
          if (lVar7 == 0) {
            if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3ce44(lVar10,uVar6);
            }
            goto LAB_04a80a60;
          }
          goto LAB_04a80908;
        }
LAB_04a809a8:
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3ce44(lVar10,lVar13);
        }
        goto LAB_04a80a60;
      }
      lVar7 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
LAB_04a80908:
      thunk_FUN_02bb0e9c(unaff_x19 + 0x10,lVar7);
      if (*(long *)(unaff_x22 + 0x18) == 0) goto LAB_04a80a24;
      lVar10 = FUN_04d9e838(*(long *)(unaff_x22 + 0x18),0);
      lVar13 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x80);
      if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_02b76218(lVar13);
      }
      if (lVar10 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = thunk_FUN_02b79548(lVar10,lVar13);
        if (lVar7 == 0) goto LAB_04a809a8;
      }
      lVar13 = *(long *)(unaff_x21 + 0x20);
      *(long *)(unaff_x19 + 0x18) = lVar7;
      lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x80);
      if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_02b76218(lVar13);
      }
      if (lVar10 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = thunk_FUN_02b79548(lVar10,lVar13);
        if (lVar7 == 0) goto LAB_04a809a8;
      }
      thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x18),lVar7);
      *(undefined8 *)(unaff_x19 + 0x24) = *(undefined8 *)(unaff_x22 + 0x24);
    }
    *(int *)(unaff_x19 + 0x20) = iVar14;
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_04a80a60:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


