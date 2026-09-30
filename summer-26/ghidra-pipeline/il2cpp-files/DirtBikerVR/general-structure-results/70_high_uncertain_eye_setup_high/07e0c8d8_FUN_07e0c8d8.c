/*
FUNCTION_NAME: FUN_07e0c8d8
ENTRY_POINT: 07e0c8d8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_7
*/


/* WARNING: Removing unreachable block (ram,0x07e0dd60) */
/* WARNING: Removing unreachable block (ram,0x07e0dd70) */

void FUN_07e0c8d8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined1 auVar14 [16];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  ulong uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  
  lVar11 = tpidr_el0;
  local_88 = *(long *)(lVar11 + 0x28);
  if ((DAT_0899a420 & 1) == 0) {
    FUN_03a8a718(OVRPlugin_OVRP_1_95_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_97_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_99_0_TypeInfo);
    FUN_03a8a718(PTR_DAT_08492790);
    FUN_03a8a718(OVRPlugin_Quatf_TypeInfo);
    DAT_0899a420 = 1;
  }
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_a0 = 0;
  if (param_1 == 0) {
    lVar11 = *(long *)(lVar11 + 0x28);
LAB_07e0dd50:
    if (lVar11 == local_88) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  }
  else {
    plVar6 = (long *)FUN_07e05b1c(param_1);
    puVar2 = OVRPlugin_OVRP_1_97_0_TypeInfo;
    puVar1 = PTR_DAT_08492790;
    if (param_2 != 0) {
      if (*(long *)(param_2 + 0x10) == 0) {
        lVar11 = *(long *)(lVar11 + 0x28);
        goto LAB_07e0dd50;
      }
      FUN_04e9b100(&local_e0,*(long *)(param_2 + 0x10),*(undefined8 *)OVRPlugin_Quatf_TypeInfo);
      local_a0 = CONCAT44(uStack_cc,local_d0);
      uStack_a8 = uStack_d8;
      local_b0 = local_e0;
      local_98 = uStack_c8;
      local_90 = local_c0;
switchD_07e0cacc_caseD_20008:
      uVar7 = FUN_061dc36c(&local_b0,*(undefined8 *)puVar2);
      uVar12 = local_98;
      if ((uVar7 & 1) != 0) {
        uVar3 = local_98._4_4_;
        uVar4 = (undefined4)local_90;
        uVar5 = local_90._4_4_;
        if ((int)(uint)local_a0 < 0x20021) {
          if ((int)(uint)local_a0 < 0x10001) {
            if ((uint)local_a0 == 0x10000) {
              FUN_07e24150(&local_e0,local_98 & 0xffffffff,local_98._4_4_,(undefined4)local_90,
                           local_90._4_4_,0);
              if (plVar6 == (long *)0x0) {
                if (*(long *)(lVar11 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                goto LAB_07e0e13c;
              }
              lVar10 = *plVar6;
              uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x2d) * 0x10 + 0x138);
                    goto LAB_07e0cd1c;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar1,0x2d);
LAB_07e0cd1c:
              (*(code *)*puVar8)(plVar6,&local_e0,puVar8[1]);
            }
          }
          else {
            switch((uint)local_a0) {
            case 0x20003:
              uVar9 = FUN_07e246f0(local_98 & 0xffffffff,0);
              if (plVar6 == (long *)0x0) {
                if (*(long *)(lVar11 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                goto LAB_07e0e13c;
              }
              lVar10 = *plVar6;
              uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x19) * 0x10 + 0x138);
                    goto LAB_07e0da78;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar1,0x19);
LAB_07e0da78:
              (*(code *)*puVar8)(plVar6,uVar9,puVar8[1]);
              break;
            case 0x20004:
              uVar9 = FUN_07e246f0(local_98 & 0xffffffff,0);
              if (plVar6 == (long *)0x0) {
                if (*(long *)(lVar11 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                goto LAB_07e0e13c;
              }
              lVar10 = *plVar6;
              uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x1d) * 0x10 + 0x138);
                    goto LAB_07e0da9c;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar1,0x1d);
LAB_07e0da9c:
              (*(code *)*puVar8)(plVar6,uVar9,puVar8[1]);
              break;
            case 0x20005:
              uVar9 = FUN_07e246f0(local_98 & 0xffffffff,0);
              if (plVar6 == (long *)0x0) {
                if (*(long *)(lVar11 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                goto LAB_07e0e13c;
              }
              lVar10 = *plVar6;
              uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x21) * 0x10 + 0x138);
                    goto LAB_07e0d9e0;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar1,0x21);
LAB_07e0d9e0:
              (*(code *)*puVar8)(plVar6,uVar9,puVar8[1]);
              break;
            case 0x20006:
              uVar9 = FUN_07e246f0(local_98 & 0xffffffff,0);
              if (plVar6 == (long *)0x0) {
                if (*(long *)(lVar11 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                goto LAB_07e0e13c;
              }
              lVar10 = *plVar6;
              uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x29) * 0x10 + 0x138);
                    goto LAB_07e0da2c;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar1,0x29);
LAB_07e0da2c:
              (*(code *)*puVar8)(plVar6,uVar9,puVar8[1]);
              break;
            case 0x20007:
              auVar14 = FUN_07e25028(local_98 & 0xffffffff,0);
              if (plVar6 == (long *)0x0) {
                if (*(long *)(lVar11 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                goto LAB_07e0e13c;
              }
              lVar10 = *plVar6;
              uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x2b) * 0x10 + 0x138);
                    goto LAB_07e0d968;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar1,0x2b);
LAB_07e0d968:
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
              uVar9 = FUN_07e246f0(local_98 & 0xffffffff,0);
              if (plVar6 == (long *)0x0) {
                if (*(long *)(lVar11 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                goto LAB_07e0e13c;
              }
              lVar10 = *plVar6;
              uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x37) * 0x10 + 0x138);
                    goto LAB_07e0dae8;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar1,0x37);
LAB_07e0dae8:
              (*(code *)*puVar8)(plVar6,uVar9,puVar8[1]);
              break;
            case 0x2000c:
              uVar9 = FUN_07e246f0(local_98 & 0xffffffff,0);
              if (plVar6 == (long *)0x0) {
                if (*(long *)(lVar11 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                goto LAB_07e0e13c;
              }
              lVar10 = *plVar6;
              uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x39) * 0x10 + 0x138);
                    goto LAB_07e0db34;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar1,0x39);
LAB_07e0db34:
              (*(code *)*puVar8)(plVar6,uVar9,puVar8[1]);
              break;
            case 0x2000e:
              auVar14 = FUN_07e25028(local_98 & 0xffffffff,0);
              if (plVar6 == (long *)0x0) {
                if (*(long *)(lVar11 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                goto LAB_07e0e13c;
              }
              lVar10 = *plVar6;
              uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x3f) * 0x10 + 0x138);
                    goto LAB_07e0da50;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar1,0x3f);
LAB_07e0da50:
              (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              break;
            case 0x20010:
              auVar14 = FUN_07e25028(local_98 & 0xffffffff,0);
              if (plVar6 == (long *)0x0) {
                if (*(long *)(lVar11 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                goto LAB_07e0e13c;
              }
              lVar10 = *plVar6;
              uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x43) * 0x10 + 0x138);
                    goto LAB_07e0dba8;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar1,0x43);
LAB_07e0dba8:
              (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              break;
            case 0x20011:
              auVar14 = FUN_07e25028(local_98 & 0xffffffff,0);
              if (plVar6 == (long *)0x0) {
                if (*(long *)(lVar11 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                goto LAB_07e0e13c;
              }
              lVar10 = *plVar6;
              uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x47) * 0x10 + 0x138);
                    goto LAB_07e0d9b8;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar1,0x47);
LAB_07e0d9b8:
              (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              break;
            case 0x20012:
              auVar14 = FUN_07e25028(local_98 & 0xffffffff,0);
              if (plVar6 == (long *)0x0) {
                if (*(long *)(lVar11 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                goto LAB_07e0e13c;
              }
              lVar10 = *plVar6;
              uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x49) * 0x10 + 0x138);
                    goto LAB_07e0db80;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar1,0x49);
LAB_07e0db80:
              (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              break;
            case 0x20013:
              auVar14 = FUN_07e25028(local_98 & 0xffffffff,0);
              if (plVar6 == (long *)0x0) {
                if (*(long *)(lVar11 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                goto LAB_07e0e13c;
              }
              lVar10 = *plVar6;
              uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x4b) * 0x10 + 0x138);
                    goto LAB_07e0d940;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar1,0x4b);
LAB_07e0d940:
              (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              break;
            case 0x20014:
              auVar14 = FUN_07e25028(local_98 & 0xffffffff,0);
              if (plVar6 == (long *)0x0) {
                if (*(long *)(lVar11 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                goto LAB_07e0e13c;
              }
              lVar10 = *plVar6;
              uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x4d) * 0x10 + 0x138);
                    goto LAB_07e0d990;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar1,0x4d);
LAB_07e0d990:
              (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              break;
            case 0x20019:
              auVar14 = FUN_07e25028(local_98 & 0xffffffff,0);
              if (plVar6 == (long *)0x0) {
                if (*(long *)(lVar11 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                goto LAB_07e0e13c;
              }
              lVar10 = *plVar6;
              uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x5b) * 0x10 + 0x138);
                    goto LAB_07e0db0c;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar1,0x5b);
LAB_07e0db0c:
              (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              break;
            case 0x2001a:
              auVar14 = FUN_07e25028(local_98 & 0xffffffff,0);
              if (plVar6 == (long *)0x0) {
                if (*(long *)(lVar11 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                goto LAB_07e0e13c;
              }
              lVar10 = *plVar6;
              uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x5d) * 0x10 + 0x138);
                    goto LAB_07e0d918;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar1,0x5d);
LAB_07e0d918:
              (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              break;
            case 0x2001b:
              auVar14 = FUN_07e25028(local_98 & 0xffffffff,0);
              if (plVar6 == (long *)0x0) {
                if (*(long *)(lVar11 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                goto LAB_07e0e13c;
              }
              lVar10 = *plVar6;
              uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x5f) * 0x10 + 0x138);
                    goto LAB_07e0da04;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar1,0x5f);
LAB_07e0da04:
              (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              break;
            case 0x2001c:
              auVar14 = FUN_07e25028(local_98 & 0xffffffff,0);
              if (plVar6 == (long *)0x0) {
                if (*(long *)(lVar11 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                goto LAB_07e0e13c;
              }
              lVar10 = *plVar6;
              uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x61) * 0x10 + 0x138);
                    goto LAB_07e0d8f0;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar1,0x61);
LAB_07e0d8f0:
              (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              break;
            case 0x2001e:
              auVar14 = FUN_07e25028(local_98 & 0xffffffff,0);
              if (plVar6 == (long *)0x0) {
                if (*(long *)(lVar11 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                goto LAB_07e0e13c;
              }
              lVar10 = *plVar6;
              uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x65) * 0x10 + 0x138);
                    goto LAB_07e0dac0;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar1,0x65);
LAB_07e0dac0:
              (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              break;
            case 0x2001f:
              auVar14 = FUN_07e25028(local_98 & 0xffffffff,0);
              if (plVar6 == (long *)0x0) {
                if (*(long *)(lVar11 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                goto LAB_07e0e13c;
              }
              lVar10 = *plVar6;
              uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x6f) * 0x10 + 0x138);
                    goto LAB_07e0db58;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar1,0x6f);
LAB_07e0db58:
              (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              break;
            case 0x20020:
              auVar14 = FUN_07e25028(local_98 & 0xffffffff,0);
              if (plVar6 == (long *)0x0) {
                if (*(long *)(lVar11 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                goto LAB_07e0e13c;
              }
              lVar10 = *plVar6;
              uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0xa7) * 0x10 + 0x138);
                    goto LAB_07e0dbd0;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar1,0xa7);
LAB_07e0dbd0:
              (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              break;
            default:
              if ((uint)local_a0 == 0x10001) {
                auVar14 = FUN_07e25028(local_98 & 0xffffffff,0);
                if (plVar6 == (long *)0x0) {
                  if (*(long *)(lVar11 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                    FUN_03a8a9c0();
                  }
                  goto LAB_07e0e13c;
                }
                lVar10 = *plVar6;
                uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar12 != 0) {
                  piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                      puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x3d) * 0x10 + 0x138);
                      goto LAB_07e0dbf8;
                    }
                    uVar12 = uVar12 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar12 != 0);
                }
                puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar1,0x3d);
LAB_07e0dbf8:
                (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              }
            }
          }
        }
        else if ((uint)local_a0 < 0x40003) {
          if ((uint)local_a0 == 0x30002) {
            FUN_07e24150(&local_e0,local_98 & 0xffffffff,local_98._4_4_,(undefined4)local_90,
                         local_90._4_4_,0);
            if (plVar6 == (long *)0x0) {
              if (*(long *)(lVar11 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_07e0e13c;
            }
            lVar10 = *plVar6;
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x7d) * 0x10 + 0x138);
                  goto LAB_07e0cf6c;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar1,0x7d);
LAB_07e0cf6c:
            (*(code *)*puVar8)(plVar6,&local_e0,puVar8[1]);
          }
          else if ((uint)local_a0 == 0x40002) {
            FUN_07e24150(&local_e0,local_98 & 0xffffffff,local_98._4_4_,(undefined4)local_90,
                         local_90._4_4_,0);
            if (plVar6 == (long *)0x0) {
              if (*(long *)(lVar11 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_07e0e13c;
            }
            lVar10 = *plVar6;
            uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar7 != 0) {
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x1b) * 0x10 + 0x138);
                  goto LAB_07e0cecc;
                }
                uVar7 = uVar7 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar7 != 0);
            }
            puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar1,0x1b);
LAB_07e0cecc:
            (*(code *)*puVar8)(plVar6,&local_e0,puVar8[1]);
            FUN_07e24150(&local_e0,uVar12 & 0xffffffff,uVar3,uVar4,uVar5,0);
            lVar10 = *plVar6;
            uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar7 != 0) {
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x23) * 0x10 + 0x138);
                  goto LAB_07e0cfa4;
                }
                uVar7 = uVar7 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar7 != 0);
            }
            puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar1,0x23);
LAB_07e0cfa4:
            (*(code *)*puVar8)(plVar6,&local_e0,puVar8[1]);
            FUN_07e24150(&local_e0,uVar12 & 0xffffffff,uVar3,uVar4,uVar5,0);
            lVar10 = *plVar6;
            uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar7 != 0) {
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x1f) * 0x10 + 0x138);
                  goto LAB_07e0d044;
                }
                uVar7 = uVar7 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar7 != 0);
            }
            puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar1,0x1f);
LAB_07e0d044:
            (*(code *)*puVar8)(plVar6,&local_e0,puVar8[1]);
            FUN_07e24150(&local_e0,uVar12 & 0xffffffff,uVar3,uVar4,uVar5,0);
            lVar10 = *plVar6;
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x13) * 0x10 + 0x138);
                  goto LAB_07e0d0e4;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar1,0x13);
LAB_07e0d0e4:
            (*(code *)*puVar8)(plVar6,&local_e0,puVar8[1]);
          }
        }
        else if ((int)(uint)local_a0 < 0x7000c) {
          if ((uint)local_a0 == 0x70000) {
            FUN_07e24150(&local_e0,local_98 & 0xffffffff,local_98._4_4_,(undefined4)local_90,
                         local_90._4_4_,0);
            if (plVar6 == (long *)0x0) {
              if (*(long *)(lVar11 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_07e0e13c;
            }
            lVar10 = *plVar6;
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 7) * 0x10 + 0x138);
                  goto LAB_07e0d7f4;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar1,7);
LAB_07e0d7f4:
            (*(code *)*puVar8)(plVar6,&local_e0,puVar8[1]);
          }
          else if ((uint)local_a0 == 0x70007) {
            auVar14 = FUN_07e25028(local_98 & 0xffffffff,0);
            if (plVar6 == (long *)0x0) {
              if (*(long *)(lVar11 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_07e0e13c;
            }
            lVar10 = *plVar6;
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x15) * 0x10 + 0x138);
                  goto LAB_07e0d8a0;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar1,0x15);
LAB_07e0d8a0:
            (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
          }
          else if ((uint)local_a0 == 0x70008) {
            auVar14 = FUN_07e25028(local_98 & 0xffffffff,0);
            if (plVar6 == (long *)0x0) {
              if (*(long *)(lVar11 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_07e0e13c;
            }
            lVar10 = *plVar6;
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x17) * 0x10 + 0x138);
                  goto LAB_07e0d854;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar1,0x17);
LAB_07e0d854:
            (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
          }
        }
        else if ((uint)local_a0 == 0x7000c) {
          auVar14 = FUN_07e25028(local_98 & 0xffffffff,0);
          if (plVar6 == (long *)0x0) {
            if (*(long *)(lVar11 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_07e0e13c;
          }
          lVar10 = *plVar6;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x25) * 0x10 + 0x138);
                goto LAB_07e0d82c;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar1,0x25);
LAB_07e0d82c:
          (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
        }
        else if ((uint)local_a0 == 0x7000d) {
          auVar14 = FUN_07e25028(local_98 & 0xffffffff,0);
          if (plVar6 == (long *)0x0) {
            if (*(long *)(lVar11 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_07e0e13c;
          }
          lVar10 = *plVar6;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x27) * 0x10 + 0x138);
                goto LAB_07e0d8c8;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar1,0x27);
LAB_07e0d8c8:
          (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
        }
        else if ((uint)local_a0 == 0x7000e) {
          uVar9 = FUN_07e246f0(local_98 & 0xffffffff,0);
          if (plVar6 == (long *)0x0) {
            if (*(long *)(lVar11 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_07e0e13c;
          }
          lVar10 = *plVar6;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x57) * 0x10 + 0x138);
                goto LAB_07e0d87c;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar1,0x57);
LAB_07e0d87c:
          (*(code *)*puVar8)(plVar6,uVar9,puVar8[1]);
        }
        goto switchD_07e0cacc_caseD_20008;
      }
      FUN_061dc368(&local_b0,*(undefined8 *)OVRPlugin_OVRP_1_95_0_TypeInfo);
    }
    if (*(long *)(lVar11 + 0x28) == local_88) {
      return;
    }
  }
LAB_07e0e13c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


