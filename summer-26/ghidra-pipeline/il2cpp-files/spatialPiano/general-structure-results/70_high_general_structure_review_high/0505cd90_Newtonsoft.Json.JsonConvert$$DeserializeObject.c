/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject
ENTRY_POINT: 0505cd90
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonConvert__DeserializeObject(void)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  undefined4 uVar11;
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  puVar5 = PTR_DAT_067d7928;
  if (((unaff_x21 == 0) && (unaff_w22 < 0x13)) && ((1 << (ulong)(unaff_w22 & 0x1f) & 0x40003U) != 0)
     ) {
    unaff_x21 = 0;
    goto switchD_0505cdd0_caseD_1;
  }
  plVar3 = (long *)thunk_FUN_02f45174();
  if (plVar3 == (long *)0x0) {
    thunk_FUN_02f6ef30(PTR_DAT_067ca178);
    uVar6 = thunk_FUN_02f45270();
    puVar5 = PTR_DAT_067dbe70;
    goto LAB_0505d51c;
  }
  switch(unaff_w22) {
  case 0:
    thunk_FUN_02f6ef30(PTR_DAT_067ca178);
    uVar6 = thunk_FUN_02f45270();
    puVar5 = PTR_DAT_067dbd78;
    goto LAB_0505d51c;
  case 1:
    goto switchD_0505cdd0_caseD_1;
  case 2:
    thunk_FUN_02f6ef30(PTR_DAT_067ca178);
    uVar6 = thunk_FUN_02f45270();
    puVar5 = PTR_DAT_067dbd70;
LAB_0505d51c:
    uVar7 = thunk_FUN_02f6ef30(puVar5);
    FUN_050d2a74(uVar6,uVar7,0);
LAB_0505d530:
    if (*(long *)(unaff_x23 + 0x28) == in_stack_00000018) {
      uVar7 = thunk_FUN_02f6ef30(PTR_DAT_067dbe78);
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar6,uVar7);
    }
    goto LAB_0505d558;
  case 3:
    lVar8 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar5) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_0505d434;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02f421d0(plVar3,*(long *)puVar5,1);
LAB_0505d434:
    uVar1 = (*(code *)*puVar4)(plVar3);
    in_stack_00000008 = CONCAT71(in_stack_00000008._1_7_,uVar1) & 0xffffffffffffff01;
    uVar6 = *(undefined8 *)(PTR_DAT_067c9338 + 0x28);
    break;
  case 4:
    lVar8 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar5) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_0505d36c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02f421d0(plVar3,*(long *)puVar5,2);
LAB_0505d36c:
    uVar2 = (*(code *)*puVar4)(plVar3);
    uVar6 = *(undefined8 *)(PTR_DAT_067c9338 + 0x88);
    goto LAB_0505d4c0;
  case 5:
    lVar8 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar5) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 3) * 0x10 + 0x138);
          goto LAB_0505d400;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02f421d0(plVar3,*(long *)puVar5,3);
LAB_0505d400:
    uVar1 = (*(code *)*puVar4)(plVar3);
    uVar6 = *(undefined8 *)(PTR_DAT_067c9338 + 0x30);
    goto LAB_0505d41c;
  case 6:
    lVar8 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar5) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 4) * 0x10 + 0x138);
          goto LAB_0505d308;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02f421d0(plVar3,*(long *)puVar5,4);
LAB_0505d308:
    uVar1 = (*(code *)*puVar4)(plVar3);
    uVar6 = *(undefined8 *)(PTR_DAT_067c9338 + 0x18);
LAB_0505d41c:
    in_stack_00000008 = CONCAT71(in_stack_00000008._1_7_,uVar1);
    break;
  case 7:
    lVar8 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar5) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
          goto LAB_0505d4a4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02f421d0(plVar3,*(long *)puVar5,5);
LAB_0505d4a4:
    uVar2 = (*(code *)*puVar4)(plVar3);
    uVar6 = *(undefined8 *)(PTR_DAT_067c9338 + 0x38);
    goto LAB_0505d4c0;
  case 8:
    lVar8 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar5) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 6) * 0x10 + 0x138);
          goto LAB_0505d294;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02f421d0(plVar3,*(long *)puVar5,6);
LAB_0505d294:
    uVar2 = (*(code *)*puVar4)(plVar3);
    uVar6 = *(undefined8 *)(PTR_DAT_067c9338 + 0x40);
LAB_0505d4c0:
    in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,uVar2);
    break;
  case 9:
    lVar8 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar5) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 7) * 0x10 + 0x138);
          goto LAB_0505d39c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02f421d0(plVar3,*(long *)puVar5,7);
LAB_0505d39c:
    uVar11 = (*(code *)*puVar4)(plVar3);
    uVar6 = *(undefined8 *)(PTR_DAT_067c9338 + 0x48);
    goto LAB_0505d3e8;
  case 10:
    lVar8 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar5) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 8) * 0x10 + 0x138);
          goto LAB_0505d3cc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02f421d0(plVar3,*(long *)puVar5,8);
LAB_0505d3cc:
    uVar11 = (*(code *)*puVar4)(plVar3);
    uVar6 = *(undefined8 *)(PTR_DAT_067c9338 + 0x50);
LAB_0505d3e8:
    in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar11);
    break;
  case 0xb:
    lVar8 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar5) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 9) * 0x10 + 0x138);
          goto LAB_0505d230;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02f421d0(plVar3,*(long *)puVar5,9);
LAB_0505d230:
    uVar6 = (*(code *)*puVar4)(plVar3);
    in_stack_00000008 = uVar6;
    uVar6 = *(undefined8 *)(PTR_DAT_067c9338 + 0x68);
    break;
  case 0xc:
    lVar8 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar5) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 10) * 0x10 + 0x138);
          goto LAB_0505d260;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02f421d0(plVar3,*(long *)puVar5,10);
LAB_0505d260:
    uVar6 = (*(code *)*puVar4)(plVar3);
    in_stack_00000008 = uVar6;
    uVar6 = *(undefined8 *)(PTR_DAT_067c9338 + 0x70);
    break;
  case 0xd:
    lVar8 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar5) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0xb) * 0x10 + 0x138);
          goto LAB_0505d46c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02f421d0(plVar3,*(long *)puVar5,0xb);
LAB_0505d46c:
    uVar11 = (*(code *)*puVar4)(plVar3);
    in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar11);
    uVar6 = *(undefined8 *)(PTR_DAT_067c9338 + 0x78);
    break;
  case 0xe:
    lVar8 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar5) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0xc) * 0x10 + 0x138);
          goto LAB_0505d1cc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02f421d0(plVar3,*(long *)puVar5,0xc);
LAB_0505d1cc:
    uVar6 = (*(code *)*puVar4)(plVar3);
    in_stack_00000008 = uVar6;
    uVar6 = *(undefined8 *)(PTR_DAT_067c9338 + 0x80);
    break;
  case 0xf:
    lVar8 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar5) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0xd) * 0x10 + 0x138);
          goto LAB_0505d338;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02f421d0(plVar3,*(long *)puVar5,0xd);
LAB_0505d338:
    _in_stack_00000008 = (*(code *)*puVar4)(plVar3);
    uVar6 = *(undefined8 *)PTR_DAT_067c9990;
    break;
  case 0x10:
    lVar8 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar5) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_0505d200;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02f421d0(plVar3,*(long *)puVar5,0xe);
LAB_0505d200:
    uVar6 = (*(code *)*puVar4)(plVar3);
    in_stack_00000008 = uVar6;
    uVar6 = *(undefined8 *)PTR_DAT_067c9980;
    break;
  default:
    thunk_FUN_02f6ef30(PTR_DAT_067c99e8);
    uVar6 = thunk_FUN_02f45270();
    uVar7 = thunk_FUN_02f6ef30(PTR_DAT_067dbe80);
    FUN_05055664(uVar6,uVar7);
    goto LAB_0505d530;
  case 0x12:
    lVar8 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar5) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0xf) * 0x10 + 0x138);
          goto LAB_0505d2c4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02f421d0(plVar3,*(long *)puVar5,0xf);
LAB_0505d2c4:
    if (*(long *)(unaff_x23 + 0x28) == in_stack_00000018) {
                    /* WARNING: Could not recover jumptable at 0x0505d2f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar8 = (*(code *)*puVar4)(plVar3);
      return lVar8;
    }
    goto LAB_0505d558;
  }
  unaff_x21 = thunk_FUN_02f44ec4(uVar6,&stack0x00000008);
switchD_0505cdd0_caseD_1:
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00000018) {
    return unaff_x21;
  }
LAB_0505d558:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


