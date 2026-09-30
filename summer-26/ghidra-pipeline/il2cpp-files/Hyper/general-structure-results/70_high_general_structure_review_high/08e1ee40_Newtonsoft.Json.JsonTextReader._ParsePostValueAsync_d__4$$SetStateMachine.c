/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader.<ParsePostValueAsync>d__4$$SetStateMachine
ENTRY_POINT: 08e1ee40
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonTextReader_<ParsePostValueAsync>d__4__SetStateMachine
               (long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long in_x9;
  ulong uVar10;
  int *piVar11;
  int unaff_w19;
  long unaff_x20;
  long *plVar12;
  long unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined4 *in_stack_00000000;
  
  piVar11 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar11 + -2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_08e1ee7c;
    }
    in_x9 = in_x9 + -1;
    piVar11 = piVar11 + 4;
  } while (in_x9 != 0);
  puVar3 = (undefined8 *)FUN_04980e68();
LAB_08e1ee7c:
  (*(code *)*puVar3)();
  if (unaff_x20 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04948184();
  }
  if ((unaff_w19 == 7) || (unaff_w19 == 0)) {
    if (*(long *)(unaff_x24 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    plVar12 = *(long **)(*(long *)(unaff_x24 + 0x10) + 0x48);
    if (plVar12 != (long *)0x0) {
      lVar8 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0ac6af38) {
            puVar3 = (undefined8 *)(lVar8 + (long)(*piVar11 + 5) * 0x10 + 0x138);
            goto LAB_08e1ef00;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar3 = (undefined8 *)FUN_04980e68(plVar12,*(long *)PTR_DAT_0ac6af38,5);
LAB_08e1ef00:
      plVar12 = (long *)(*(code *)*puVar3)(plVar12,puVar3[1]);
      if ((plVar12 != (long *)0x0) && (lVar8 = *(long *)(unaff_x24 + 0x38), lVar8 != 0)) {
        lVar9 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x27) {
              puVar3 = (undefined8 *)(lVar9 + (long)(*piVar11 + 3) * 0x10 + 0x138);
              goto LAB_08e1ef6c;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar3 = (undefined8 *)FUN_04980e68(plVar12,*unaff_x27,3);
LAB_08e1ef6c:
        uVar4 = (*(code *)*puVar3)(plVar12,puVar3[1]);
        lVar9 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x27) {
              puVar3 = (undefined8 *)(lVar9 + (long)(*piVar11 + 4) * 0x10 + 0x138);
              goto LAB_08e1efcc;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar3 = (undefined8 *)FUN_04980e68(plVar12,*unaff_x27,4);
LAB_08e1efcc:
        uVar5 = (*(code *)*puVar3)(plVar12,puVar3[1]);
        lVar9 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x27) {
              puVar3 = (undefined8 *)(lVar9 + (long)(*piVar11 + 4) * 0x10 + 0x138);
              goto LAB_08e1f02c;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar3 = (undefined8 *)FUN_04980e68(plVar12,*unaff_x27,4);
LAB_08e1f02c:
        uVar6 = (*(code *)*puVar3)(plVar12,puVar3[1]);
        if (*(long *)(unaff_x24 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        plVar12 = *(long **)(*(long *)(unaff_x24 + 0x10) + 0x38);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        lVar9 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x26) {
              puVar3 = (undefined8 *)(lVar9 + (long)(*piVar11 + 10) * 0x10 + 0x138);
              goto LAB_08e1f09c;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar3 = (undefined8 *)FUN_04980e68(plVar12,*unaff_x26,10);
LAB_08e1f09c:
        uVar7 = (*(code *)*puVar3)(plVar12,puVar3[1]);
        uVar2 = thunk_FUN_08bd7c8c(uVar6,uVar7,0);
        uVar6 = thunk_FUN_04983f60(*unaff_x25);
        FUN_08e2e77c(uVar6,uVar4,uVar5,uVar2 & 1,0);
        (**(code **)(lVar8 + 0x18))
                  (*(undefined8 *)(lVar8 + 0x40),uVar6,*(undefined8 *)(lVar8 + 0x28));
      }
    }
    cVar1 = DAT_0b31f1cb;
    *in_stack_00000000 = 0xfffffffe;
    if (cVar1 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac09870);
      DAT_0b31f1cb = '\x01';
    }
    plVar12 = *(long **)(in_stack_00000000 + 2);
    if (plVar12 != (long *)0x0) {
      lVar8 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0ac09870) {
            puVar3 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
            goto LAB_08e1f17c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar3 = (undefined8 *)FUN_04980e68(plVar12,*(long *)PTR_DAT_0ac09870,2);
LAB_08e1f17c:
      (*(code *)*puVar3)(plVar12,puVar3[1]);
    }
  }
  return;
}


