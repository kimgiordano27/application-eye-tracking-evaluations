/*
FUNCTION_NAME: HdyRpc.RequestHspAdd$$set_Flush
ENTRY_POINT: 088ec990
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x088eccf8) */

uint HdyRpc_RequestHspAdd__set_Flush(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *plVar11;
  long unaff_x20;
  long *plVar12;
  undefined1 auVar13 [16];
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  
  puVar1 = PTR_DAT_0ac48640;
  plVar12 = *(long **)(unaff_x20 + 0x10);
  if (plVar12 != (long *)0x0) {
    lVar8 = *plVar12;
    plVar11 = *(long **)(unaff_x19 + 0x10);
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac48640) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_088ec9f8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_04980e68(plVar12,*(long *)PTR_DAT_0ac48640,0);
LAB_088ec9f8:
    iVar4 = (*(code *)*puVar7)(plVar12,puVar7[1]);
    if (plVar11 != (long *)0x0) {
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_088eca58;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_04980e68(plVar11,*(long *)puVar1,0);
LAB_088eca58:
      iVar5 = (*(code *)*puVar7)(plVar11,puVar7[1]);
      if (iVar4 == iVar5) {
        plVar12 = *(long **)(unaff_x20 + 0x10);
        if (plVar12 == (long *)0x0) goto LAB_088eccf4;
        lVar8 = *plVar12;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac485a8) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_088ecad0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_04980e68(plVar12,*(long *)PTR_DAT_0ac485a8,0);
LAB_088ecad0:
        in_stack_00000018 = (long *)(*(code *)*puVar7)(plVar12,puVar7[1]);
        puVar3 = PTR_DAT_0ac48638;
        puVar2 = PTR_DAT_0ac485b0;
        puVar1 = PTR_DAT_0ac09ba8;
        do {
          plVar12 = in_stack_00000018;
          if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          lVar8 = *in_stack_00000018;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_088ecb54;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_04980e68(in_stack_00000018,*(long *)puVar1,0);
LAB_088ecb54:
          uVar6 = (*(code *)*puVar7)(plVar12,puVar7[1]);
          plVar12 = in_stack_00000018;
          if ((uVar6 & 1) == 0) break;
          if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          lVar8 = *in_stack_00000018;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_088ecbbc;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_04980e68(in_stack_00000018,*(long *)puVar2,0);
LAB_088ecbbc:
          auVar13 = (*(code *)*puVar7)(plVar12,puVar7[1]);
          plVar12 = auVar13._8_8_;
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
                puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 7) * 0x10 + 0x138);
                goto LAB_088ecc20;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_04980e68(plVar11,*(long *)puVar3,7);
LAB_088ecc20:
          uVar9 = (*(code *)*puVar7)(plVar11,auVar13._0_8_ & 0xffffffff,&stack0x00000010,puVar7[1]);
          if ((uVar9 & 1) == 0) break;
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          uVar9 = (**(code **)(*plVar12 + 0x138))
                            (plVar12,in_stack_00000010,*(undefined8 *)(*plVar12 + 0x140));
        } while ((uVar9 & 1) != 0);
        plVar12 = in_stack_00000018;
        uVar6 = uVar6 ^ 1;
        if (in_stack_00000018 != (long *)0x0) {
          lVar8 = *in_stack_00000018;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac09b90) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_088eccbc;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_04980e68(in_stack_00000018,*(long *)PTR_DAT_0ac09b90,0);
LAB_088eccbc:
          (*(code *)*puVar7)(plVar12,puVar7[1]);
        }
      }
      else {
        uVar6 = 0;
      }
      return uVar6 & 1;
    }
  }
LAB_088eccf4:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


