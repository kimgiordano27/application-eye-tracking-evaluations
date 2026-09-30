/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.GameObjectItem$$BuildContent
ENTRY_POINT: 06da2a98
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


int Meta_XR_ImmersiveDebugger_Hierarchy_GameObjectItem__BuildContent
              (long param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long in_x9;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  ulong unaff_x22;
  int iVar13;
  uint unaff_w23;
  undefined8 uVar14;
  long *unaff_x28;
  long lVar15;
  ulong in_stack_00000000;
  uint uStack0000000000000008;
  int iStack000000000000000c;
  
  do {
    if (*(uint *)(in_x9 + 0x18) <= unaff_w23) goto LAB_06da2c48;
    lVar10 = *(long *)(unaff_x20 + 0x100);
    if (lVar10 == 0) break;
    if (*(uint *)(lVar10 + 0x18) <= unaff_x22) goto LAB_06da2c48;
    lVar10 = *(long *)(lVar10 + unaff_x22 * 8 + 0x20);
    if (lVar10 == 0) break;
    if (*(uint *)(lVar10 + 0x18) <= unaff_w23) goto LAB_06da2c48;
    lVar11 = *(long *)(unaff_x20 + 0x108);
    if (lVar11 == 0) break;
    if (*(uint *)(lVar11 + 0x18) <= unaff_x22) goto LAB_06da2c48;
    lVar11 = *(long *)(lVar11 + unaff_x22 * 8 + 0x20);
    if (lVar11 == 0) break;
    if (*(uint *)(lVar11 + 0x18) <= unaff_w23) goto LAB_06da2c48;
    lVar15 = (long)(int)unaff_w23;
    uVar14 = *(undefined8 *)(param_1 + lVar15 * 8 + 0x20);
    iVar13 = *(int *)(in_x9 + lVar15 * 4 + 0x20);
    cVar1 = *(char *)(lVar10 + lVar15 + 0x20);
    cVar2 = *(char *)(lVar11 + lVar15 + 0x20);
    if ((iVar13 == 2) && (cVar1 != '\0')) {
      if (cVar2 != '\0') {
        param_2 = FUN_06da8188();
        uVar6 = 1;
        goto LAB_06da2b54;
      }
      FUN_06da8188();
    }
    else {
      uVar6 = 0;
LAB_06da2b54:
      FUN_06da82a0(param_2,uVar14,uVar6);
    }
    if (*(long *)(unaff_x20 + 0xb8) == 0) break;
    uVar6 = FUN_06da8430(*(long *)(unaff_x20 + 0xb8),uVar14,unaff_w23,iVar13,
                         cVar1 != '\0' && cVar2 != '\0');
    FUN_06da8538(uVar6,uVar14);
    if (*(long *)(unaff_x20 + 0xa0) == 0) break;
    if (*(uint *)(*(long *)(unaff_x20 + 0xa0) + 0x18) <= unaff_w23) {
LAB_06da2c48:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    param_2 = FUN_06da859c();
    unaff_w23 = unaff_w23 + 1;
    while (iStack000000000000000c < (int)unaff_w23) {
      unaff_x22 = unaff_x22 + 1;
      unaff_w21 = unaff_w21 + 0x240;
      if (unaff_x22 == in_stack_00000000) {
        return unaff_w21;
      }
      lVar11 = *unaff_x19;
      lVar10 = *unaff_x28;
      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
      bVar3 = *(ushort *)(lVar11 + 0x12e) == 0;
      if (0 < *(int *)(unaff_x20 + 200)) {
        iVar13 = 0;
        do {
          if (!bVar3) {
            uVar8 = 0;
            plVar12 = *(long **)(lVar11 + 0xb0);
            do {
              if (*plVar12 == lVar10) {
                puVar5 = (undefined8 *)
                         (lVar11 + (long)((int)(*(long **)(lVar11 + 0xb0))[(uVar8 & 0xffff) * 2 + 1]
                                         + 4) * 0x10 + 0x138);
                goto FUN_06da2830;
              }
              uVar8 = uVar8 + 1;
              plVar12 = plVar12 + 2;
            } while (uVar7 != uVar8);
          }
          puVar5 = (undefined8 *)FUN_03cf1348();
FUN_06da2830:
          iVar4 = (*(code *)*puVar5)();
          if (iVar4 == 10) {
            FUN_06da562c();
          }
          else {
            lVar10 = *unaff_x19;
            uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar7 != 0) {
              piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *unaff_x28) {
                  puVar5 = (undefined8 *)(lVar10 + (long)(*piVar9 + 7) * 0x10 + 0x138);
                  goto LAB_06da28a8;
                }
                uVar7 = uVar7 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar7 != 0);
            }
            puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da28a8:
            (*(code *)*puVar5)();
            FUN_06da657c();
          }
          FUN_06da6fb8();
          lVar11 = *unaff_x19;
          lVar10 = *unaff_x28;
          iVar13 = iVar13 + 1;
          uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
          bVar3 = *(ushort *)(lVar11 + 0x12e) == 0;
        } while (iVar13 < *(int *)(unaff_x20 + 200));
      }
      if (!bVar3) {
        uVar8 = 0;
        plVar12 = *(long **)(lVar11 + 0xb0);
        do {
          if (*plVar12 == lVar10) {
            puVar5 = (undefined8 *)
                     (lVar11 + (long)((int)(*(long **)(lVar11 + 0xb0))[(uVar8 & 0xffff) * 2 + 1] + 6
                                     ) * 0x10 + 0x138);
            goto LAB_06da2954;
          }
          uVar8 = uVar8 + 1;
          plVar12 = plVar12 + 2;
        } while (uVar7 != uVar8);
      }
      puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da2954:
      (*(code *)*puVar5)();
      lVar10 = *unaff_x19;
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x28) {
            puVar5 = (undefined8 *)(lVar10 + (long)(*piVar9 + 7) * 0x10 + 0x138);
            goto LAB_06da29b4;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da29b4:
      (*(code *)*puVar5)();
      lVar10 = *unaff_x19;
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x28) {
            puVar5 = (undefined8 *)(lVar10 + (long)(*piVar9 + 4) * 0x10 + 0x138);
            goto LAB_06da2a14;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da2a14:
      (*(code *)*puVar5)();
      param_2 = FUN_06da78b0();
      unaff_w23 = uStack0000000000000008;
    }
    param_1 = *(long *)(unaff_x20 + 0x188);
    if (param_1 == 0) break;
    if (*(uint *)(param_1 + 0x18) <= unaff_w23) goto LAB_06da2c48;
    lVar10 = *(long *)(unaff_x20 + 0x110);
    if (lVar10 == 0) break;
    if (*(uint *)(lVar10 + 0x18) <= unaff_x22) goto LAB_06da2c48;
    in_x9 = *(long *)(lVar10 + unaff_x22 * 8 + 0x20);
  } while (in_x9 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


