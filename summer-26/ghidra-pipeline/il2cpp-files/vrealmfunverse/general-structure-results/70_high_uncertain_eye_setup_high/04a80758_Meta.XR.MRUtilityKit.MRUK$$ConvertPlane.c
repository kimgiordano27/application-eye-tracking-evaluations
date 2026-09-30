/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$ConvertPlane
ENTRY_POINT: 04a80758
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUK__ConvertPlane(void)

{
  uint uVar1;
  int iVar2;
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
  int in_w9;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long *plVar12;
  size_t unaff_x23;
  undefined8 *unaff_x24;
  long lVar13;
  long unaff_x26;
  int unaff_w27;
  ulong uVar14;
  long unaff_x29;
  
  if (in_w9 == 0) {
    thunk_FUN_02b9ad44();
  }
  iVar4 = FUN_04d21ca8(unaff_w27 + 1,0);
  if (iVar4 < unaff_w20) {
    lVar10 = *(long *)(unaff_x21 + 0x20);
    uVar1 = *(uint *)(unaff_x22 + 0x24);
    plVar12 = *(long **)(unaff_x22 + 0x18);
    *(long *)(unaff_x29 + -0x30) = unaff_x26;
    (*(code *)**(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x70))();
    *(int *)(unaff_x29 + -0x34) = unaff_w27;
    if ((int)uVar1 < 1) {
      iVar4 = 0;
    }
    else {
      if (plVar12 == (long *)0x0) {
        lVar10 = *(long *)(*(long *)(unaff_x29 + -0x30) + 0x28);
        goto LAB_04a80a28;
      }
      uVar14 = 0;
      iVar4 = 0;
      do {
        if (*(uint *)(plVar12 + 3) <= uVar14) {
LAB_04a80a0c:
          if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          goto LAB_04a80a60;
        }
        piVar5 = (int *)thunk_FUN_02b9b29c((long)plVar12 +
                                           uVar14 * *(uint *)(*plVar12 + 0x104) + 0x20,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0)
                                                      + 0x90) + 0x80));
        iVar2 = *piVar5;
        if (-1 < iVar2) {
          if (*(uint *)(plVar12 + 3) <= uVar14) goto LAB_04a80a0c;
          __src = (void *)thunk_FUN_02b9b29c((long)plVar12 +
                                             uVar14 * *(uint *)(*plVar12 + 0x104) + 0x20,
                                             *(long *)(*(long *)(*(long *)(*(long *)(unaff_x21 +
                                                                                    0x20) + 0xc0) +
                                                                0x90) + 0x80) + 0x40);
          memcpy(unaff_x24,__src,unaff_x23);
          lVar10 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
          puVar9 = unaff_x24;
          if (-1 < *(int *)(*(long *)(lVar10 + 0x98) + 0x28)) {
            puVar9 = (undefined8 *)*unaff_x24;
          }
          puVar8 = *(undefined8 **)(lVar10 + 0xa0);
          *(int *)(unaff_x29 + -0x10) = iVar2;
          *(int *)(unaff_x29 + -0xc) = iVar4;
          uVar6 = *puVar8;
          *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
          pcVar11 = (code *)puVar8[2];
          *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0xc;
          *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0x10;
          (*pcVar11)(uVar6);
          iVar4 = iVar4 + 1;
        }
        uVar14 = uVar14 + 1;
      } while (uVar1 != uVar14);
    }
    *(int *)(unaff_x19 + 0x24) = iVar4;
    unaff_x26 = *(long *)(unaff_x29 + -0x30);
    unaff_w27 = *(int *)(unaff_x29 + -0x34);
  }
  else {
    if (*(long *)(unaff_x22 + 0x10) == 0) {
LAB_04a80a24:
      lVar10 = *(long *)(unaff_x26 + 0x28);
LAB_04a80a28:
      if (lVar10 == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_04a80a60;
    }
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
  *(int *)(unaff_x19 + 0x20) = unaff_w27;
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_04a80a60:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


