/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$HandleError
ENTRY_POINT: 05e918b0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__HandleError(void)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 unaff_x19;
  long *unaff_x20;
  uint unaff_w21;
  int iVar13;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x26;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  
  puVar4 = PTR_DAT_07a17be8;
  uVar1 = (unaff_w21 >> 6 ^ 0xffffffff) & 1;
  if (*unaff_x20 == *unaff_x22) {
    lVar10 = *unaff_x26;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar10 = *unaff_x26;
    }
    FUN_0364297c(lVar10);
    FUN_05e93678();
  }
  else {
    plVar6 = (long *)thunk_FUN_0367fd24();
    if (plVar6 == (long *)0x0) {
      lVar10 = *unaff_x20;
      bVar3 = *(byte *)(*(long *)PTR_DAT_07a17c08 + 0x130);
      if ((*(byte *)(lVar10 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_07a17c08))
      {
        if (lVar10 == *(long *)PTR_DAT_07a17b18) {
          in_stack_00000018 = (long)&stack0x00000028 + 4;
          in_stack_00000010 = 0;
          in_stack_00000020 = &stack0x00000030;
          in_stack_00000028._4_1_ = 0;
          in_stack_00000030 = unaff_x20;
          FUN_05e7c56c();
          FUN_0315402c(&stack0x00000010);
          puVar5 = PTR_DAT_07a17c00;
          iVar2 = (int)unaff_x20[3];
          if (0 < iVar2) {
            iVar13 = 0;
            do {
              plVar6 = (long *)FUN_047e11e8();
              if (plVar6 != (long *)0x0) {
                bVar3 = *(byte *)(*(long *)puVar5 + 0x130);
                if (((bVar3 <= *(byte *)(*plVar6 + 0x130)) &&
                    (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar3 * 8 + -8) == *(long *)puVar5)
                    ) && ((*(byte *)((long)plVar6 + 0x1a) >> 3 & 1) == 0)) {
                  FUN_047e1258();
                  (**(code **)(*plVar6 + 0x178))
                            (plVar6,unaff_x19,uVar1,*(undefined8 *)(*plVar6 + 0x180));
                }
              }
              iVar13 = iVar13 + 1;
            } while (iVar2 != iVar13);
            if (0 < iVar2) {
              iVar13 = 0;
              plVar6 = (long *)PTR_DAT_079f5050;
              do {
                plVar8 = (long *)FUN_047e11e8();
                if (plVar8 != (long *)0x0) {
                  FUN_047e1258();
                  lVar10 = *plVar8;
                  if (lVar10 == *plVar6) {
                    lVar10 = *unaff_x26;
                    if (*(int *)(lVar10 + 0xe4) == 0) {
                      thunk_FUN_036a1978();
                      lVar10 = *unaff_x26;
                    }
                    uVar9 = FUN_0364297c(lVar10);
                    FUN_05e93678(plVar8,uVar1,uVar9);
                  }
                  else {
                    bVar3 = *(byte *)(*(long *)PTR_DAT_07a17c08 + 0x130);
                    if ((*(byte *)(lVar10 + 0x130) < bVar3) ||
                       (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar3 * 8 + -8) !=
                        *(long *)PTR_DAT_07a17c08)) {
                      uVar9 = *(undefined8 *)puVar4;
                      lVar10 = thunk_FUN_0367fd24(plVar8,uVar9);
                      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03643084(plVar8,uVar9);
                      }
                      if ((uVar1 == 0) &&
                         (uVar11 = FUN_03156cec(1,*(undefined8 *)puVar4,lVar10), (uVar11 & 1) != 0))
                      {
                        uVar9 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a17be0);
                        FUN_05e93810(uVar9,lVar10,unaff_x19);
                        FUN_05e888b4(uVar9,0);
                        plVar6 = (long *)PTR_DAT_079f5050;
                      }
                      else {
                        FUN_0315f2c4(0,*(undefined8 *)puVar4,lVar10,unaff_x19);
                        plVar6 = (long *)PTR_DAT_079f5050;
                      }
                    }
                    else {
                      (**(code **)(lVar10 + 0x178))
                                (plVar8,unaff_x19,uVar1,*(undefined8 *)(lVar10 + 0x180));
                    }
                  }
                }
                iVar13 = iVar13 + 1;
              } while (iVar2 != iVar13);
            }
          }
        }
        FUN_05e9eafc();
        return;
      }
      (**(code **)(lVar10 + 0x178))();
    }
    else {
      if (uVar1 == 0) {
        lVar10 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
              puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_05e91c1c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_0367cd30(plVar6,*(long *)puVar4,1);
LAB_05e91c1c:
        uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar11 & 1) != 0) {
          uVar9 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a17be0);
          FUN_05e93810(uVar9,plVar6);
          FUN_05e888b4(uVar9,0);
          goto LAB_05e91cb8;
        }
      }
      lVar10 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_05e91ca8;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_0367cd30(plVar6,*(long *)puVar4,0);
LAB_05e91ca8:
      (*(code *)*puVar7)(plVar6);
    }
  }
LAB_05e91cb8:
  if (DAT_07edf1f0 == '\0') {
    FUN_03642964(PTR_DAT_079fd3d0);
    DAT_07edf1f0 = '\x01';
  }
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  return;
}


