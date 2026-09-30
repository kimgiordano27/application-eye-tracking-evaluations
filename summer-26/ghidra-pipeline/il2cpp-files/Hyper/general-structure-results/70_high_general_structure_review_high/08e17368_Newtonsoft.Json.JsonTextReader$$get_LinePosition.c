/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$get_LinePosition
ENTRY_POINT: 08e17368
PROGRAM: Hyper-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void Newtonsoft_Json_JsonTextReader__get_LinePosition(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 uStack0000000000000024;
  long *in_stack_00000030;
  ulong in_stack_00000038;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000068;
  
  FUN_08de2a38(param_1,0);
  uStack0000000000000024 = FUN_08e140b0();
  FUN_09bdc368(&stack0x00000024,0);
  if (unaff_x19[0x10] != 1) {
LAB_08e178b8:
    *(undefined8 *)(unaff_x19 + 0xe) = 0;
    thunk_FUN_049ee3d8(unaff_x19 + 0xe,0);
    *unaff_x19 = 0xfffffffe;
    puVar5 = (undefined8 *)(unaff_x19 + 0xc);
    uVar4 = *puVar5;
    *puVar5 = 0;
    thunk_FUN_049ee3d8(puVar5,0);
    plVar11 = *(long **)(unaff_x19 + 2);
    if (plVar11 == (long *)0x0) {
      *(undefined8 *)(unaff_x19 + 6) = uVar4;
      thunk_FUN_049ee3d8(unaff_x19 + 6,uVar4);
    }
    else {
      lVar6 = *(long *)(*(long *)PTR_DAT_0ac6b160 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_04980b34();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_04980b34(lVar6);
      }
      lVar13 = *plVar11;
      uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar13 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_08e179c8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_04980e68(plVar11,lVar6,2);
LAB_08e179c8:
      (*(code *)*puVar5)(plVar11,uVar4,puVar5[1]);
    }
    return;
  }
  plVar11 = *(long **)(unaff_x19 + 0xe);
  if (plVar11 == (long *)0x0) {
    if (unaff_x20 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
  }
  else {
    lVar6 = *plVar11;
    bVar1 = *(byte *)(*(long *)PTR_DAT_0ac21900 + 0x130);
    if ((*(byte *)(lVar6 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0ac21900)) {
                    /* WARNING: Subroutine does not return */
      FUN_0494850c(plVar11);
    }
    if (unaff_x20 != 0) {
      uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
      uVar4 = (**(code **)(lVar6 + 0x188))(plVar11,*(undefined8 *)(lVar6 + 400));
      uVar4 = FUN_08bda628(*(undefined8 *)PTR_DAT_0ac6b1b8,plVar11,uVar4,0);
      lVar13 = *(long *)PTR_DAT_0ac099d0;
      lVar6 = *(long *)(lVar13 + 0x38);
      if (lVar6 == 0) {
        FUN_04980b90(lVar13);
        lVar6 = *(long *)(lVar13 + 0x38);
      }
      lVar6 = *(long *)(lVar6 + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_04980b34();
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      lVar6 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_04980b34();
      }
      FUN_094d5764(uVar9,uVar4,**(undefined8 **)(lVar6 + 0xb8),0);
      if (*(long *)(unaff_x20 + 0x38) != 0) {
        auVar14 = FUN_08e13f50();
        puVar2 = PTR_DAT_0ac09878;
        if (*(int *)(*(long *)PTR_DAT_0ac09878 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        _in_stack_00000050 = auVar14;
        thunk_FUN_049ee3d8(&stack0x00000050,0);
        _in_stack_00000030 = _in_stack_00000050;
        if (DAT_0b31f1c7 == '\0') {
          FUN_04947ee4(PTR_DAT_0ac09878);
          DAT_0b31f1c7 = '\x01';
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        if (DAT_0b31f1c8 == '\0') {
          FUN_04947ee4(PTR_DAT_0ac098c0);
          DAT_0b31f1c8 = '\x01';
        }
        plVar11 = in_stack_00000030;
        if (in_stack_00000030 != (long *)0x0) {
          lVar6 = *in_stack_00000030;
          uVar12 = in_stack_00000038 & 0xffff;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0ac098c0) {
                puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_08e176d4;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar5 = (undefined8 *)FUN_04980e68(in_stack_00000030,*(long *)PTR_DAT_0ac098c0,0);
LAB_08e176d4:
          iVar3 = (*(code *)*puVar5)(plVar11,uVar12,puVar5[1]);
          if (iVar3 == 0) {
            *unaff_x19 = 4;
            *(undefined1 (*) [16])(unaff_x19 + 0x12) = _in_stack_00000030;
            thunk_FUN_049ee3d8(unaff_x19 + 0x12,0);
            FUN_053cbf80(unaff_x19 + 2,&stack0x00000030);
            return;
          }
        }
        if (DAT_0b31f1c9 == '\0') {
          FUN_04947ee4(PTR_DAT_0ac098c0);
          DAT_0b31f1c9 = '\x01';
        }
        plVar11 = in_stack_00000030;
        if (in_stack_00000030 != (long *)0x0) {
          lVar6 = *in_stack_00000030;
          uVar12 = in_stack_00000038 & 0xffff;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0ac098c0) {
                puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
                goto LAB_08e1776c;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar5 = (undefined8 *)FUN_04980e68(in_stack_00000030,*(long *)PTR_DAT_0ac098c0,2);
LAB_08e1776c:
          (*(code *)*puVar5)(plVar11,uVar12,puVar5[1]);
        }
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        plVar11 = *(long **)(unaff_x19 + 8);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        lVar6 = *plVar11;
        plVar10 = *(long **)(unaff_x20 + 0x40);
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0ac41e10) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_08e177e0;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_04980e68(plVar11,*(long *)PTR_DAT_0ac41e10,0);
LAB_08e177e0:
        uVar4 = (*(code *)*puVar5)(plVar11,puVar5[1]);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        lVar6 = *plVar10;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0ac6b0e0) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x37) * 0x10 + 0x138);
              goto LAB_08e1784c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_04980e68(plVar10,*(long *)PTR_DAT_0ac6b0e0,0x37);
LAB_08e1784c:
        lVar6 = (*(code *)*puVar5)(plVar10,uVar4,0,puVar5[1]);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        in_stack_00000068 = FUN_07764808(lVar6,*(undefined8 *)PTR_DAT_0ac6b1b0);
        uVar7 = FUN_076844c8(&stack0x00000068,*(undefined8 *)PTR_DAT_0ac6b1a0);
        if ((uVar7 & 1) == 0) {
          *unaff_x19 = 5;
          *(undefined8 *)(unaff_x19 + 0x16) = in_stack_00000068;
          thunk_FUN_049ee3d8(unaff_x19 + 0x16,0);
          FUN_053cb044(unaff_x19 + 2,&stack0x00000068);
          return;
        }
        uVar4 = FUN_07684508(&stack0x00000068,*(undefined8 *)PTR_DAT_0ac6b190);
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        *(undefined8 *)(unaff_x20 + 0x48) = uVar4;
        thunk_FUN_049ee3d8((undefined8 *)(unaff_x20 + 0x48));
      }
      goto LAB_08e178b8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


