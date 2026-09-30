/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.GameObjectItem$$FetchExpectedChildren
ENTRY_POINT: 06da29a0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


int Meta_XR_ImmersiveDebugger_Hierarchy_GameObjectItem__FetchExpectedChildren(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
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
  int iVar17;
  undefined8 uVar18;
  long *unaff_x28;
  long lVar19;
  ulong in_stack_00000000;
  uint uStack0000000000000008;
  int iStack000000000000000c;
  
LAB_06da29b4:
  do {
    (*(code *)*param_1)();
    lVar10 = *unaff_x19;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x28) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar13 + 4) * 0x10 + 0x138);
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
    for (uVar1 = uStack0000000000000008; (int)uVar1 <= iStack000000000000000c; uVar1 = uVar1 + 1) {
      lVar10 = *(long *)(unaff_x20 + 0x188);
      if (lVar10 == 0) goto LAB_06da2c44;
      if (*(uint *)(lVar10 + 0x18) <= uVar1) goto LAB_06da2c48;
      lVar9 = *(long *)(unaff_x20 + 0x110);
      if (lVar9 == 0) goto LAB_06da2c44;
      if (*(uint *)(lVar9 + 0x18) <= unaff_x22) goto LAB_06da2c48;
      lVar9 = *(long *)(lVar9 + unaff_x22 * 8 + 0x20);
      if (lVar9 == 0) goto LAB_06da2c44;
      if (*(uint *)(lVar9 + 0x18) <= uVar1) goto LAB_06da2c48;
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
      lVar19 = (long)(int)uVar1;
      uVar18 = *(undefined8 *)(lVar10 + lVar19 * 8 + 0x20);
      iVar17 = *(int *)(lVar9 + lVar19 * 4 + 0x20);
      cVar2 = *(char *)(lVar14 + lVar19 + 0x20);
      cVar3 = *(char *)(lVar15 + lVar19 + 0x20);
      if ((iVar17 == 2) && (cVar2 != '\0')) {
        if (cVar3 != '\0') {
          uVar7 = FUN_06da8188();
          uVar8 = 1;
          goto LAB_06da2b54;
        }
        FUN_06da8188();
      }
      else {
        uVar8 = 0;
LAB_06da2b54:
        FUN_06da82a0(uVar7,uVar18,uVar8);
      }
      if (*(long *)(unaff_x20 + 0xb8) == 0) {
LAB_06da2c44:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar7 = FUN_06da8430(*(long *)(unaff_x20 + 0xb8),uVar18,uVar1,iVar17,
                           cVar2 != '\0' && cVar3 != '\0');
      FUN_06da8538(uVar7,uVar18);
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
    lVar9 = *unaff_x19;
    lVar10 = *unaff_x28;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    bVar4 = *(ushort *)(lVar9 + 0x12e) == 0;
    if (0 < *(int *)(unaff_x20 + 200)) {
      iVar17 = 0;
      do {
        if (!bVar4) {
          uVar12 = 0;
          plVar16 = *(long **)(lVar9 + 0xb0);
          do {
            if (*plVar16 == lVar10) {
              puVar6 = (undefined8 *)
                       (lVar9 + (long)((int)(*(long **)(lVar9 + 0xb0))[(uVar12 & 0xffff) * 2 + 1] +
                                      4) * 0x10 + 0x138);
              goto FUN_06da2830;
            }
            uVar12 = uVar12 + 1;
            plVar16 = plVar16 + 2;
          } while (uVar11 != uVar12);
        }
        puVar6 = (undefined8 *)FUN_03cf1348();
FUN_06da2830:
        iVar5 = (*(code *)*puVar6)();
        if (iVar5 == 10) {
          FUN_06da562c();
        }
        else {
          lVar10 = *unaff_x19;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *unaff_x28) {
                puVar6 = (undefined8 *)(lVar10 + (long)(*piVar13 + 7) * 0x10 + 0x138);
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
        lVar9 = *unaff_x19;
        lVar10 = *unaff_x28;
        iVar17 = iVar17 + 1;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        bVar4 = *(ushort *)(lVar9 + 0x12e) == 0;
      } while (iVar17 < *(int *)(unaff_x20 + 200));
    }
    if (!bVar4) {
      uVar12 = 0;
      plVar16 = *(long **)(lVar9 + 0xb0);
      do {
        if (*plVar16 == lVar10) {
          puVar6 = (undefined8 *)
                   (lVar9 + (long)((int)(*(long **)(lVar9 + 0xb0))[(uVar12 & 0xffff) * 2 + 1] + 6) *
                            0x10 + 0x138);
          goto LAB_06da2954;
        }
        uVar12 = uVar12 + 1;
        plVar16 = plVar16 + 2;
      } while (uVar11 != uVar12);
    }
    puVar6 = (undefined8 *)FUN_03cf1348();
LAB_06da2954:
    (*(code *)*puVar6)();
    lVar10 = *unaff_x19;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x28) {
          param_1 = (undefined8 *)(lVar10 + (long)(*piVar13 + 7) * 0x10 + 0x138);
          goto LAB_06da29b4;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    param_1 = (undefined8 *)FUN_03cf1348();
  } while( true );
}


