/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.Item$$BuildContent
ENTRY_POINT: 06da280c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


int Meta_XR_ImmersiveDebugger_Hierarchy_Item__BuildContent(void)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  ulong unaff_x22;
  int unaff_w23;
  undefined8 uVar17;
  long *unaff_x28;
  long lVar18;
  ulong in_stack_00000000;
  uint uStack0000000000000008;
  int iStack000000000000000c;
  
code_r0x06da280c:
  puVar6 = (undefined8 *)FUN_03cf1348();
  do {
    iVar5 = (*(code *)*puVar6)();
    if (iVar5 == 10) {
      FUN_06da562c();
    }
    else {
      lVar8 = *unaff_x19;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x28) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar13 + 7) * 0x10 + 0x138);
            goto LAB_06da28a8;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_03cf1348();
LAB_06da28a8:
      (*(code *)*puVar6)();
      FUN_06da657c();
    }
    FUN_06da6fb8();
    lVar10 = *unaff_x19;
    lVar8 = *unaff_x28;
    unaff_w23 = unaff_w23 + 1;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    bVar4 = *(ushort *)(lVar10 + 0x12e) == 0;
    if (*(int *)(unaff_x20 + 200) <= unaff_w23) {
      do {
        if (!bVar4) {
          uVar12 = 0;
          plVar16 = *(long **)(lVar10 + 0xb0);
          do {
            if (*plVar16 == lVar8) {
              puVar6 = (undefined8 *)
                       (lVar10 + (long)((int)(*(long **)(lVar10 + 0xb0))[(uVar12 & 0xffff) * 2 + 1]
                                       + 6) * 0x10 + 0x138);
              goto LAB_06da2954;
            }
            uVar12 = uVar12 + 1;
            plVar16 = plVar16 + 2;
          } while (uVar11 != uVar12);
        }
        puVar6 = (undefined8 *)FUN_03cf1348();
LAB_06da2954:
        (*(code *)*puVar6)();
        lVar8 = *unaff_x19;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *unaff_x28) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar13 + 7) * 0x10 + 0x138);
              goto LAB_06da29b4;
            }
            uVar11 = uVar11 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_03cf1348();
LAB_06da29b4:
        (*(code *)*puVar6)();
        lVar8 = *unaff_x19;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *unaff_x28) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar13 + 4) * 0x10 + 0x138);
              goto LAB_06da2a14;
            }
            uVar11 = uVar11 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_03cf1348();
LAB_06da2a14:
        (*(code *)*puVar6)();
        uVar7 = FUN_06da78b0();
        for (uVar1 = uStack0000000000000008; (int)uVar1 <= iStack000000000000000c; uVar1 = uVar1 + 1
            ) {
          lVar8 = *(long *)(unaff_x20 + 0x188);
          if (lVar8 == 0) goto LAB_06da2c44;
          if (*(uint *)(lVar8 + 0x18) <= uVar1) goto LAB_06da2c48;
          lVar10 = *(long *)(unaff_x20 + 0x110);
          if (lVar10 == 0) goto LAB_06da2c44;
          if (*(uint *)(lVar10 + 0x18) <= unaff_x22) goto LAB_06da2c48;
          lVar10 = *(long *)(lVar10 + unaff_x22 * 8 + 0x20);
          if (lVar10 == 0) goto LAB_06da2c44;
          if (*(uint *)(lVar10 + 0x18) <= uVar1) goto LAB_06da2c48;
          lVar14 = *(long *)(unaff_x20 + 0x100);
          if (lVar14 == 0) goto LAB_06da2c44;
          if (*(uint *)(lVar14 + 0x18) <= unaff_x22) goto LAB_06da2c48;
          lVar14 = *(long *)(lVar14 + unaff_x22 * 8 + 0x20);
          if (lVar14 == 0) goto LAB_06da2c44;
          if (*(uint *)(lVar14 + 0x18) <= uVar1) goto LAB_06da2c48;
          lVar15 = *(long *)(unaff_x20 + 0x108);
          if (lVar15 == 0) goto LAB_06da2c44;
          if (*(uint *)(lVar15 + 0x18) <= unaff_x22) goto LAB_06da2c48;
          lVar15 = *(long *)(lVar15 + unaff_x22 * 8 + 0x20);
          if (lVar15 == 0) goto LAB_06da2c44;
          if (*(uint *)(lVar15 + 0x18) <= uVar1) goto LAB_06da2c48;
          lVar18 = (long)(int)uVar1;
          uVar17 = *(undefined8 *)(lVar8 + lVar18 * 8 + 0x20);
          iVar5 = *(int *)(lVar10 + lVar18 * 4 + 0x20);
          cVar2 = *(char *)(lVar14 + lVar18 + 0x20);
          cVar3 = *(char *)(lVar15 + lVar18 + 0x20);
          if ((iVar5 == 2) && (cVar2 != '\0')) {
            if (cVar3 != '\0') {
              uVar7 = FUN_06da8188();
              uVar9 = 1;
              goto LAB_06da2b54;
            }
            FUN_06da8188();
          }
          else {
            uVar9 = 0;
LAB_06da2b54:
            FUN_06da82a0(uVar7,uVar17,uVar9);
          }
          if (*(long *)(unaff_x20 + 0xb8) == 0) {
LAB_06da2c44:
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          uVar7 = FUN_06da8430(*(long *)(unaff_x20 + 0xb8),uVar17,uVar1,iVar5,
                               cVar2 != '\0' && cVar3 != '\0');
          FUN_06da8538(uVar7,uVar17);
          if (*(long *)(unaff_x20 + 0xa0) == 0) goto LAB_06da2c44;
          if (*(uint *)(*(long *)(unaff_x20 + 0xa0) + 0x18) <= uVar1) {
LAB_06da2c48:
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb38();
          }
          uVar7 = FUN_06da859c();
        }
        unaff_x22 = unaff_x22 + 1;
        unaff_w21 = unaff_w21 + 0x240;
        if (unaff_x22 == in_stack_00000000) {
          return unaff_w21;
        }
        lVar10 = *unaff_x19;
        lVar8 = *unaff_x28;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        bVar4 = *(ushort *)(lVar10 + 0x12e) == 0;
      } while (*(int *)(unaff_x20 + 200) < 1);
      unaff_w23 = 0;
    }
    if (bVar4) goto code_r0x06da280c;
    uVar12 = 0;
    plVar16 = *(long **)(lVar10 + 0xb0);
    while (*plVar16 != lVar8) {
      uVar12 = uVar12 + 1;
      plVar16 = plVar16 + 2;
      if (uVar11 == uVar12) goto code_r0x06da280c;
    }
    puVar6 = (undefined8 *)
             (lVar10 + (long)((int)(*(long **)(lVar10 + 0xb0))[(uVar12 & 0xffff) * 2 + 1] + 4) *
                       0x10 + 0x138);
  } while( true );
}


