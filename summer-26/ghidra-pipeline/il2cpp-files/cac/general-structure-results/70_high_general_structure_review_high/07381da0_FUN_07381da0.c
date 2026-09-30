/*
FUNCTION_NAME: FUN_07381da0
ENTRY_POINT: 07381da0
PROGRAM: cac-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;strong_file_logging_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_07381da0(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  if ((DAT_0968d97e & 1) == 0) {
    FUN_03f13384(PTR_DAT_09128758);
    FUN_03f13384(PTR_DAT_0912b0e0);
    FUN_03f13384(PTR_DAT_0912b0e8);
    FUN_03f13384(PTR_DAT_0912b0f0);
    FUN_03f13384(PTR_DAT_0912b0f8);
    FUN_03f13384(PTR_DAT_0912b100);
    DAT_0968d97e = 1;
  }
  puVar5 = PTR_DAT_0912b100;
  puVar4 = PTR_DAT_0912b0f0;
  puVar3 = PTR_DAT_0912b0e8;
  puVar2 = PTR_DAT_0912b0e0;
  puVar1 = PTR_DAT_09128758;
  if (param_2 != (long *)0x0) {
    uVar11 = 0;
    do {
      lVar8 = *param_2;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 4) * 0x10 + 0x138);
            goto LAB_07381ea4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f4b594(param_2,*(long *)puVar1,4);
LAB_07381ea4:
      lVar8 = (*(code *)*puVar6)(param_2,puVar6[1]);
      if (lVar8 == 0) break;
      if ((long)*(int *)(lVar8 + 0x18) <= (long)uVar11) {
        return;
      }
      lVar8 = *param_2;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 4) * 0x10 + 0x138);
            goto LAB_07381f10;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f4b594(param_2,*(long *)puVar1,4);
LAB_07381f10:
      lVar8 = (*(code *)*puVar6)(param_2,puVar6[1]);
      if (lVar8 == 0) break;
      if (*(uint *)(lVar8 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_03f13634();
      }
      uVar12 = *(undefined8 *)(lVar8 + uVar11 * 8 + 0x20);
      uVar9 = thunk_FUN_0732565c(uVar12,*(undefined8 *)puVar5,0);
      if ((uVar9 & 1) == 0) {
        uVar9 = thunk_FUN_0732565c(uVar12,*(undefined8 *)puVar3,0);
        if ((uVar9 & 1) == 0) {
          uVar9 = thunk_FUN_0732565c(uVar12,*(undefined8 *)puVar4,0);
          if ((uVar9 & 1) == 0) {
            uVar9 = thunk_FUN_0732565c(uVar12,*(undefined8 *)PTR_DAT_0912b0f8,0);
            if ((uVar9 & 1) == 0) {
              FUN_039529c4(param_2);
              uVar12 = thunk_FUN_03f786f8(PTR_DAT_09128758);
              uVar12 = FUN_03950e40(4,uVar12,param_2);
              FUN_039529c4();
              uVar12 = FUN_0396a42c(uVar12,uVar11);
              uVar7 = thunk_FUN_03f786f8(PTR_DAT_0912b108);
              uVar12 = FUN_0731ca20(uVar7,uVar12,0);
              thunk_FUN_03f786f8(PTR_DAT_0912adc0);
              uVar7 = thunk_FUN_03f4e68c();
              FUN_0737b0f4(uVar7,uVar12);
              uVar12 = thunk_FUN_03f786f8(PTR_DAT_0912b110);
                    /* WARNING: Subroutine does not return */
              FUN_03f134f0(uVar7,uVar12);
            }
            lVar8 = *param_2;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                  puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                  goto LAB_07382200;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar6 = (undefined8 *)FUN_03f4b594(param_2,*(long *)puVar1,2);
LAB_07382200:
            uVar12 = (*(code *)*puVar6)(param_2,uVar11 & 0xffffffff,puVar6[1]);
            uVar12 = System_IO_BinaryWriter__Dispose(uVar12,uVar12);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_03f6fea8(*(long *)puVar2);
            }
            FUN_0738efec(uVar12,0);
          }
          else {
            lVar8 = *param_2;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                  puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                  goto LAB_07382184;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar6 = (undefined8 *)FUN_03f4b594(param_2,*(long *)puVar1,2);
LAB_07382184:
            uVar12 = (*(code *)*puVar6)(param_2,uVar11 & 0xffffffff,puVar6[1]);
            uVar12 = System_IO_BinaryWriter__Dispose(uVar12,uVar12);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_03f6fea8(*(long *)puVar2);
            }
            if (DAT_0968d9f9 == '\0') {
              FUN_03f13384(puVar2);
              DAT_0968d9f9 = '\x01';
            }
            lVar8 = *(long *)puVar2;
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
              lVar8 = *(long *)puVar2;
            }
            *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10) = uVar12;
          }
        }
        else {
          lVar8 = *param_2;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                goto LAB_07382110;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar6 = (undefined8 *)FUN_03f4b594(param_2,*(long *)puVar1,2);
LAB_07382110:
          uVar12 = (*(code *)*puVar6)(param_2,uVar11 & 0xffffffff,puVar6[1]);
          uVar12 = System_IO_BinaryWriter__Dispose(uVar12,uVar12);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_03f6fea8(*(long *)puVar2);
          }
          if (DAT_0968d9f8 == '\0') {
            FUN_03f13384(puVar2);
            DAT_0968d9f8 = '\x01';
          }
          lVar8 = *(long *)puVar2;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
            lVar8 = *(long *)puVar2;
          }
          *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x18) = uVar12;
        }
      }
      else {
        lVar8 = *param_2;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
              goto LAB_07382040;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_03f4b594(param_2,*(long *)puVar1,2);
LAB_07382040:
        uVar12 = (*(code *)*puVar6)(param_2,uVar11 & 0xffffffff,puVar6[1]);
        uVar12 = System_IO_BinaryWriter__Dispose(uVar12,uVar12);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03f6fea8(*(long *)puVar2);
        }
        if (DAT_0968d9f7 == '\0') {
          FUN_03f13384(puVar2);
          DAT_0968d9f7 = '\x01';
        }
        lVar8 = *(long *)puVar2;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
          lVar8 = *(long *)puVar2;
        }
        *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8) = uVar12;
      }
      uVar11 = uVar11 + 1;
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


