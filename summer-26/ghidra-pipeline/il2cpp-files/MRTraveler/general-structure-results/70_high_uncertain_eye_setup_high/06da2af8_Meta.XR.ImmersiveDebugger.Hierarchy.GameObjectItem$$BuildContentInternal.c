/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.GameObjectItem$$BuildContentInternal
ENTRY_POINT: 06da2af8
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


int Meta_XR_ImmersiveDebugger_Hierarchy_GameObjectItem__BuildContentInternal
              (long param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  undefined1 in_CY;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long in_x9;
  ulong uVar9;
  int *piVar10;
  long in_x10;
  long in_x11;
  long *plVar11;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  ulong unaff_x22;
  int iVar12;
  uint unaff_w23;
  undefined8 uVar13;
  long *unaff_x28;
  long lVar14;
  ulong in_stack_00000000;
  uint uStack0000000000000008;
  int iStack000000000000000c;
  
  while (!(bool)in_CY) {
    lVar14 = (long)(int)unaff_w23;
    uVar13 = *(undefined8 *)(param_1 + lVar14 * 8 + 0x20);
    iVar12 = *(int *)(in_x9 + lVar14 * 4 + 0x20);
    cVar1 = *(char *)(in_x10 + lVar14 + 0x20);
    cVar2 = *(char *)(in_x11 + lVar14 + 0x20);
    if ((iVar12 == 2) && (cVar1 != '\0')) {
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
      FUN_06da82a0(param_2,uVar13,uVar6);
    }
    if (*(long *)(unaff_x20 + 0xb8) == 0) {
LAB_06da2c44:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar6 = FUN_06da8430(*(long *)(unaff_x20 + 0xb8),uVar13,unaff_w23,iVar12,
                         cVar1 != '\0' && cVar2 != '\0');
    FUN_06da8538(uVar6,uVar13);
    if (*(long *)(unaff_x20 + 0xa0) == 0) goto LAB_06da2c44;
    if (*(uint *)(*(long *)(unaff_x20 + 0xa0) + 0x18) <= unaff_w23) break;
    param_2 = FUN_06da859c();
    unaff_w23 = unaff_w23 + 1;
    while (iStack000000000000000c < (int)unaff_w23) {
      unaff_x22 = unaff_x22 + 1;
      unaff_w21 = unaff_w21 + 0x240;
      if (unaff_x22 == in_stack_00000000) {
        return unaff_w21;
      }
      lVar7 = *unaff_x19;
      lVar14 = *unaff_x28;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      bVar3 = *(ushort *)(lVar7 + 0x12e) == 0;
      if (0 < *(int *)(unaff_x20 + 200)) {
        iVar12 = 0;
        do {
          if (!bVar3) {
            uVar9 = 0;
            plVar11 = *(long **)(lVar7 + 0xb0);
            do {
              if (*plVar11 == lVar14) {
                puVar5 = (undefined8 *)
                         (lVar7 + (long)((int)(*(long **)(lVar7 + 0xb0))[(uVar9 & 0xffff) * 2 + 1] +
                                        4) * 0x10 + 0x138);
                goto FUN_06da2830;
              }
              uVar9 = uVar9 + 1;
              plVar11 = plVar11 + 2;
            } while (uVar8 != uVar9);
          }
          puVar5 = (undefined8 *)FUN_03cf1348();
FUN_06da2830:
          iVar4 = (*(code *)*puVar5)();
          if (iVar4 == 10) {
            FUN_06da562c();
          }
          else {
            lVar14 = *unaff_x19;
            uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar8 != 0) {
              piVar10 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *unaff_x28) {
                  puVar5 = (undefined8 *)(lVar14 + (long)(*piVar10 + 7) * 0x10 + 0x138);
                  goto LAB_06da28a8;
                }
                uVar8 = uVar8 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da28a8:
            (*(code *)*puVar5)();
            FUN_06da657c();
          }
          FUN_06da6fb8();
          lVar7 = *unaff_x19;
          lVar14 = *unaff_x28;
          iVar12 = iVar12 + 1;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          bVar3 = *(ushort *)(lVar7 + 0x12e) == 0;
        } while (iVar12 < *(int *)(unaff_x20 + 200));
      }
      if (!bVar3) {
        uVar9 = 0;
        plVar11 = *(long **)(lVar7 + 0xb0);
        do {
          if (*plVar11 == lVar14) {
            puVar5 = (undefined8 *)
                     (lVar7 + (long)((int)(*(long **)(lVar7 + 0xb0))[(uVar9 & 0xffff) * 2 + 1] + 6)
                              * 0x10 + 0x138);
            goto LAB_06da2954;
          }
          uVar9 = uVar9 + 1;
          plVar11 = plVar11 + 2;
        } while (uVar8 != uVar9);
      }
      puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da2954:
      (*(code *)*puVar5)();
      lVar14 = *unaff_x19;
      uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x28) {
            puVar5 = (undefined8 *)(lVar14 + (long)(*piVar10 + 7) * 0x10 + 0x138);
            goto LAB_06da29b4;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da29b4:
      (*(code *)*puVar5)();
      lVar14 = *unaff_x19;
      uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x28) {
            puVar5 = (undefined8 *)(lVar14 + (long)(*piVar10 + 4) * 0x10 + 0x138);
            goto LAB_06da2a14;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da2a14:
      (*(code *)*puVar5)();
      param_2 = FUN_06da78b0();
      unaff_w23 = uStack0000000000000008;
    }
    param_1 = *(long *)(unaff_x20 + 0x188);
    if (param_1 == 0) goto LAB_06da2c44;
    if (*(uint *)(param_1 + 0x18) <= unaff_w23) break;
    lVar14 = *(long *)(unaff_x20 + 0x110);
    if (lVar14 == 0) goto LAB_06da2c44;
    if (*(uint *)(lVar14 + 0x18) <= unaff_x22) break;
    in_x9 = *(long *)(lVar14 + unaff_x22 * 8 + 0x20);
    if (in_x9 == 0) goto LAB_06da2c44;
    if (*(uint *)(in_x9 + 0x18) <= unaff_w23) break;
    lVar14 = *(long *)(unaff_x20 + 0x100);
    if (lVar14 == 0) goto LAB_06da2c44;
    if (*(uint *)(lVar14 + 0x18) <= unaff_x22) break;
    in_x10 = *(long *)(lVar14 + unaff_x22 * 8 + 0x20);
    if (in_x10 == 0) goto LAB_06da2c44;
    if (*(uint *)(in_x10 + 0x18) <= unaff_w23) break;
    lVar14 = *(long *)(unaff_x20 + 0x108);
    if (lVar14 == 0) goto LAB_06da2c44;
    if (*(uint *)(lVar14 + 0x18) <= unaff_x22) break;
    in_x11 = *(long *)(lVar14 + unaff_x22 * 8 + 0x20);
    if (in_x11 == 0) goto LAB_06da2c44;
    in_CY = *(uint *)(in_x11 + 0x18) <= unaff_w23;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


