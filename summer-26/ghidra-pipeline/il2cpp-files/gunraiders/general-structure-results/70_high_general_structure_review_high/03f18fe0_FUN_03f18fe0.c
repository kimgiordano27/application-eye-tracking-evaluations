/*
FUNCTION_NAME: FUN_03f18fe0
ENTRY_POINT: 03f18fe0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_03f18fe0(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  ulong uStack_c8;
  ulong local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  
                    /* try { // try from 03f18fe0 to 04018fe7 has its CatchHandler @ 03f1930c */
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  if ((DAT_04543299 & 1) == 0) {
                    /* try { // try from 03f19028 to 0401904f has its CatchHandler @ 03f19308 */
    FUN_01c5d288(StringLiteral_11206);
    FUN_01c5d288(StringLiteral_11207);
    FUN_01c5d288(StringLiteral_11208);
    FUN_01c5d288(Newtonsoft_Json_JsonSerializerSettings_TypeInfo);
    FUN_01c5d288(StringLiteral_11209);
    DAT_04543299 = 1;
  }
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_a0 = 0;
  if (param_1 != 0) {
    plVar6 = (long *)FUN_03f0d9bc(param_1);
    puVar3 = StringLiteral_11207;
    puVar2 = Newtonsoft_Json_JsonSerializerSettings_TypeInfo;
    if (param_2 != 0) {
      if (*(long *)(param_2 + 0x10) == 0) goto LAB_03f1a360;
      FUN_02db76e4(&local_e0,*(long *)(param_2 + 0x10),*(undefined8 *)StringLiteral_11209);
      local_a0 = CONCAT44(uStack_cc,local_d0);
      uStack_a8 = uStack_d8;
      local_b0 = local_e0;
      local_98 = uStack_c8;
      local_90 = local_c0;
switchD_03f19140_caseD_70001:
      uVar7 = FUN_02a022e8(&local_b0,*(undefined8 *)puVar3);
      if ((uVar7 & 1) != 0) {
        uVar7 = local_98 & 0xffffffff;
        uVar4 = local_98._4_4_;
        uVar13 = local_90 & 0xffffffff;
        uVar5 = local_90._4_4_;
        if ((int)local_a0 < 0x20021) {
          if ((int)local_a0 < 0x10001) {
            if ((int)local_a0 == 0x10000) {
              FUN_03f23c40(&local_e0,uVar7,local_98._4_4_,uVar13,local_90._4_4_,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              lVar10 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0xf) * 0x10 + 0x138);
                    goto FUN_03f193e0;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_01c72498(plVar6,*(long *)puVar2,0xf);
FUN_03f193e0:
              (*(code *)*puVar8)(plVar6,&local_e0,puVar8[1]);
            }
          }
          else {
            switch((int)local_a0) {
            case 0x20003:
              uVar9 = FUN_03f24144(uVar7,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              lVar10 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
                    goto FUN_03f1a174;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_01c72498(plVar6,*(long *)puVar2,5);
FUN_03f1a174:
              (*(code *)*puVar8)(plVar6,uVar9,puVar8[1]);
              break;
            case 0x20004:
              uVar9 = FUN_03f24144(uVar7,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              lVar10 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 7) * 0x10 + 0x138);
                    goto LAB_03f1a198;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_01c72498(plVar6,*(long *)puVar2,7);
LAB_03f1a198:
              (*(code *)*puVar8)(plVar6,uVar9,puVar8[1]);
              break;
            case 0x20005:
              uVar9 = FUN_03f24144(uVar7,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              lVar10 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 9) * 0x10 + 0x138);
                    goto FUN_03f1a0dc;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_01c72498(plVar6,*(long *)puVar2,9);
FUN_03f1a0dc:
              (*(code *)*puVar8)(plVar6,uVar9,puVar8[1]);
              break;
            case 0x20006:
              uVar9 = FUN_03f24144(uVar7,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              lVar10 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0xd) * 0x10 + 0x138);
                    goto LAB_03f1a128;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_01c72498(plVar6,*(long *)puVar2,0xd);
LAB_03f1a128:
              (*(code *)*puVar8)(plVar6,uVar9,puVar8[1]);
              break;
            case 0x20007:
              auVar14 = FUN_03f24884(uVar7,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              lVar10 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0xe) * 0x10 + 0x138);
                    goto LAB_03f1a064;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_01c72498(plVar6,*(long *)puVar2,0xe);
LAB_03f1a064:
              (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              break;
            case 0x20008:
            case 0x20009:
            case 0x2000a:
            case 0x2000d:
            case 0x2000f:
            case 0x20015:
            case 0x20016:
            case 0x20017:
            case 0x20018:
            case 0x2001d:
              break;
            case 0x2000b:
              uVar9 = FUN_03f24144(uVar7,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              lVar10 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x15) * 0x10 + 0x138);
                    goto LAB_03f1a1e4;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_01c72498(plVar6,*(long *)puVar2,0x15);
LAB_03f1a1e4:
              (*(code *)*puVar8)(plVar6,uVar9,puVar8[1]);
              break;
            case 0x2000c:
              uVar9 = FUN_03f24144(uVar7,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              lVar10 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x16) * 0x10 + 0x138);
                    goto LAB_03f1a230;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_01c72498(plVar6,*(long *)puVar2,0x16);
LAB_03f1a230:
              (*(code *)*puVar8)(plVar6,uVar9,puVar8[1]);
              break;
            case 0x2000e:
              auVar14 = FUN_03f24884(uVar7,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              lVar10 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x18) * 0x10 + 0x138);
                    goto LAB_03f1a14c;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_01c72498(plVar6,*(long *)puVar2,0x18);
LAB_03f1a14c:
              (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              break;
            case 0x20010:
              auVar14 = FUN_03f24884(uVar7,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              lVar10 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x19) * 0x10 + 0x138);
                    goto LAB_03f1a2a4;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_01c72498(plVar6,*(long *)puVar2,0x19);
LAB_03f1a2a4:
              (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              break;
            case 0x20011:
              auVar14 = FUN_03f24884(uVar7,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              lVar10 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x1a) * 0x10 + 0x138);
                    goto LAB_03f1a0b4;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_01c72498(plVar6,*(long *)puVar2,0x1a);
LAB_03f1a0b4:
              (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              break;
            case 0x20012:
              auVar14 = FUN_03f24884(uVar7,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              lVar10 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x1b) * 0x10 + 0x138);
                    goto LAB_03f1a27c;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_01c72498(plVar6,*(long *)puVar2,0x1b);
LAB_03f1a27c:
              (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              break;
            case 0x20013:
              auVar14 = FUN_03f24884(uVar7,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              lVar10 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x1c) * 0x10 + 0x138);
                    goto LAB_03f1a03c;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_01c72498(plVar6,*(long *)puVar2,0x1c);
LAB_03f1a03c:
              (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              break;
            case 0x20014:
              auVar14 = FUN_03f24884(uVar7,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              lVar10 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x1d) * 0x10 + 0x138);
                    goto LAB_03f1a08c;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_01c72498(plVar6,*(long *)puVar2,0x1d);
LAB_03f1a08c:
              (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              break;
            case 0x20019:
              auVar14 = FUN_03f24884(uVar7,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              lVar10 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x23) * 0x10 + 0x138);
                    goto LAB_03f1a208;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_01c72498(plVar6,*(long *)puVar2,0x23);
LAB_03f1a208:
              (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              break;
            case 0x2001a:
              auVar14 = FUN_03f24884(uVar7,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              lVar10 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x24) * 0x10 + 0x138);
                    goto LAB_03f1a014;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_01c72498(plVar6,*(long *)puVar2,0x24);
LAB_03f1a014:
              (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              break;
            case 0x2001b:
              auVar14 = FUN_03f24884(uVar7,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              lVar10 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x25) * 0x10 + 0x138);
                    goto LAB_03f1a100;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_01c72498(plVar6,*(long *)puVar2,0x25);
LAB_03f1a100:
              (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              break;
            case 0x2001c:
              auVar14 = FUN_03f24884(uVar7,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              lVar10 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x27) * 0x10 + 0x138);
                    goto LAB_03f19fec;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_01c72498(plVar6,*(long *)puVar2,0x27);
LAB_03f19fec:
              (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              break;
            case 0x2001e:
              auVar14 = FUN_03f24884(uVar7,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              lVar10 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x29) * 0x10 + 0x138);
                    goto LAB_03f1a1bc;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_01c72498(plVar6,*(long *)puVar2,0x29);
LAB_03f1a1bc:
              (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              break;
            case 0x2001f:
              auVar14 = FUN_03f24884(uVar7,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              lVar10 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x2d) * 0x10 + 0x138);
                    goto LAB_03f1a254;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_01c72498(plVar6,*(long *)puVar2,0x2d);
LAB_03f1a254:
              (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              break;
            case 0x20020:
              auVar14 = FUN_03f24884(uVar7,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              lVar10 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x36) * 0x10 + 0x138);
                    goto LAB_03f1a2cc;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_01c72498(plVar6,*(long *)puVar2,0x36);
LAB_03f1a2cc:
              (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              break;
            default:
              if ((int)local_a0 == 0x10001) {
                auVar14 = FUN_03f24884(uVar7,0);
                if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
                lVar10 = *plVar6;
                uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar7 != 0) {
                  piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                      puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x17) * 0x10 + 0x138);
                      goto LAB_03f1a2f4;
                    }
                    uVar7 = uVar7 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar7 != 0);
                }
                puVar8 = (undefined8 *)FUN_01c72498(plVar6,*(long *)puVar2,0x17);
LAB_03f1a2f4:
                (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              }
            }
          }
        }
        else if ((int)local_a0 < 0x40003) {
          if ((int)local_a0 == 0x30002) {
            FUN_03f23c40(&local_e0,uVar7,local_98._4_4_,uVar13,local_90._4_4_,0);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar10 = *plVar6;
            uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar7 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x31) * 0x10 + 0x138);
                  goto LAB_03f1966c;
                }
                uVar7 = uVar7 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 != 0);
            }
            puVar8 = (undefined8 *)FUN_01c72498(plVar6,*(long *)puVar2,0x31);
LAB_03f1966c:
            (*(code *)*puVar8)(plVar6,&local_e0,puVar8[1]);
          }
          else if ((int)local_a0 == 0x40002) {
            FUN_03f23c40(&local_e0,uVar7,local_98._4_4_,uVar13,local_90._4_4_,0);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar10 = *plVar6;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 6) * 0x10 + 0x138);
                  goto LAB_03f195cc;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar8 = (undefined8 *)FUN_01c72498(plVar6,*(long *)puVar2,6);
LAB_03f195cc:
            (*(code *)*puVar8)(plVar6,&local_e0,puVar8[1]);
            FUN_03f23c40(&local_e0,uVar7,uVar4,uVar13,uVar5,0);
            lVar10 = *plVar6;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 10) * 0x10 + 0x138);
                  goto VoxelBusters_EssentialKit_NativeUICore_UnityUIDatePickerInterface__SetKind;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar8 = (undefined8 *)FUN_01c72498(plVar6,*(long *)puVar2,10);
VoxelBusters_EssentialKit_NativeUICore_UnityUIDatePickerInterface__SetKind:
            (*(code *)*puVar8)(plVar6,&local_e0,puVar8[1]);
            FUN_03f23c40(&local_e0,uVar7,uVar4,uVar13,uVar5,0);
            lVar10 = *plVar6;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 8) * 0x10 + 0x138);
                  goto LAB_03f19744;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar8 = (undefined8 *)FUN_01c72498(plVar6,*(long *)puVar2,8);
LAB_03f19744:
            (*(code *)*puVar8)(plVar6,&local_e0,puVar8[1]);
            FUN_03f23c40(&local_e0,uVar7,uVar4,uVar13,uVar5,0);
            lVar10 = *plVar6;
            uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar7 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                  goto LAB_03f197e4;
                }
                uVar7 = uVar7 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 != 0);
            }
            puVar8 = (undefined8 *)FUN_01c72498(plVar6,*(long *)puVar2,2);
LAB_03f197e4:
            (*(code *)*puVar8)(plVar6,&local_e0,puVar8[1]);
          }
        }
        else {
          switch((int)local_a0) {
          case 0x70000:
            FUN_03f23c40(&local_e0,uVar7,local_98._4_4_,uVar13,local_90._4_4_,0);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar10 = *plVar6;
            uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar7 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                  puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_03f19f68;
                }
                uVar7 = uVar7 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 != 0);
            }
            puVar8 = (undefined8 *)FUN_01c72498(plVar6,*(long *)puVar2,0);
LAB_03f19f68:
            (*(code *)*puVar8)(plVar6,&local_e0,puVar8[1]);
            break;
          case 0x70007:
            auVar14 = FUN_03f24884(uVar7,0);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar10 = *plVar6;
            uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar7 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 3) * 0x10 + 0x138);
                  goto 
                  VoxelBusters_EssentialKit_MediaServicesCore_RequestGalleryAccessInternalCallback__EndInvoke
                  ;
                }
                uVar7 = uVar7 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 != 0);
            }
            puVar8 = (undefined8 *)FUN_01c72498(plVar6,*(long *)puVar2,3);
VoxelBusters_EssentialKit_MediaServicesCore_RequestGalleryAccessInternalCallback__EndInvoke:
            (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
            break;
          case 0x70008:
            auVar14 = FUN_03f24884(uVar7,0);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar10 = *plVar6;
            uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar7 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 4) * 0x10 + 0x138);
                  goto LAB_03f19f1c;
                }
                uVar7 = uVar7 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 != 0);
            }
            puVar8 = (undefined8 *)FUN_01c72498(plVar6,*(long *)puVar2,4);
LAB_03f19f1c:
            (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
            break;
          case 0x7000c:
            auVar14 = FUN_03f24884(uVar7,0);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar10 = *plVar6;
            uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar7 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0xb) * 0x10 + 0x138);
                  goto LAB_03f19f44;
                }
                uVar7 = uVar7 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 != 0);
            }
            puVar8 = (undefined8 *)FUN_01c72498(plVar6,*(long *)puVar2,0xb);
LAB_03f19f44:
            (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
            break;
          case 0x7000d:
            auVar14 = FUN_03f24884(uVar7,0);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar10 = *plVar6;
            uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar7 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0xc) * 0x10 + 0x138);
                  goto LAB_03f19ef4;
                }
                uVar7 = uVar7 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 != 0);
            }
            puVar8 = (undefined8 *)FUN_01c72498(plVar6,*(long *)puVar2,0xc);
LAB_03f19ef4:
            (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
            break;
          case 0x7000e:
            uVar9 = FUN_03f24144(uVar7,0);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar10 = *plVar6;
            uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar7 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x21) * 0x10 + 0x138);
                  goto LAB_03f19fc8;
                }
                uVar7 = uVar7 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 != 0);
            }
            puVar8 = (undefined8 *)FUN_01c72498(plVar6,*(long *)puVar2,0x21);
LAB_03f19fc8:
            (*(code *)*puVar8)(plVar6,uVar9,puVar8[1]);
          }
        }
        goto switchD_03f19140_caseD_70001;
      }
      FUN_02a022e4(&local_b0,*(undefined8 *)StringLiteral_11206);
    }
    if (*(long *)(lVar1 + 0x28) == local_88) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_03f1a360:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


