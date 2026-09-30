/*
FUNCTION_NAME: FUN_07e0e144
ENTRY_POINT: 07e0e144
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


void FUN_07e0e144(ulong param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  ulong local_c0;
  long local_b8;
  long *plStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((DAT_0899a421 & 1) == 0) {
    FUN_03a8a718(OVRPlugin_OVRP_1_95_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_97_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_99_0_TypeInfo);
    FUN_03a8a718(PTR_DAT_08492788);
    param_1 = FUN_03a8a718(OVRPlugin_Quatf_TypeInfo);
    DAT_0899a421 = 1;
  }
  local_c0 = 0;
  local_70 = 0;
  plStack_88 = (long *)0x0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  if (param_2 == 0) {
LAB_07e0f020:
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  }
  else {
    plVar4 = (long *)FUN_07dff1b0(param_2);
    puVar3 = OVRPlugin_OVRP_1_97_0_TypeInfo;
    puVar2 = PTR_DAT_08492788;
    if (param_3 != 0) {
      param_1 = 0;
      if (*(long *)(param_3 + 0x10) == 0) goto LAB_07e0f020;
      FUN_04e9b100(&local_b8,*(long *)(param_3 + 0x10),*(undefined8 *)OVRPlugin_Quatf_TypeInfo);
      plStack_88 = plStack_b0;
      local_90 = local_b8;
      uStack_78 = uStack_a0;
      local_80 = local_a8;
      local_70 = local_98;
      local_b8 = 0;
      plStack_b0 = &local_90;
switchD_07e0e310_caseD_20008:
      param_1 = FUN_061dc36c(&local_90,*(undefined8 *)puVar3);
      lVar6 = local_b8;
      if ((param_1 & 1) != 0) {
        if ((int)(uint)local_80 < 0x20021) {
          switch((uint)local_80) {
          case 0x20003:
            if (plVar4 == (long *)0x0) {
              if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_07e0f3d4;
            }
            lVar6 = *plVar4;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xc) * 0x10 + 0x138);
                  goto LAB_07e0edec;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar5 = (undefined8 *)FUN_03ac43c4(plVar4,*(long *)puVar2,0xc);
LAB_07e0edec:
            (*(code *)*puVar5)(plVar4,puVar5[1]);
            FUN_07ebc048(&local_c0,0);
            break;
          case 0x20004:
            if (plVar4 == (long *)0x0) {
              if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_07e0f3d4;
            }
            lVar6 = *plVar4;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
                  goto LAB_07e0ee18;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar5 = (undefined8 *)FUN_03ac43c4(plVar4,*(long *)puVar2,0xe);
LAB_07e0ee18:
            (*(code *)*puVar5)(plVar4,puVar5[1]);
            FUN_07ebc024(&local_c0,0);
            break;
          case 0x20005:
            if (plVar4 == (long *)0x0) {
              if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_07e0f3d4;
            }
            lVar6 = *plVar4;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x10) * 0x10 + 0x138);
                  goto LAB_07e0ed3c;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar5 = (undefined8 *)FUN_03ac43c4(plVar4,*(long *)puVar2,0x10);
LAB_07e0ed3c:
            (*(code *)*puVar5)(plVar4,puVar5[1]);
            FUN_07ebc030(&local_c0,0);
            break;
          case 0x20006:
            if (plVar4 == (long *)0x0) {
              if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_07e0f3d4;
            }
            lVar6 = *plVar4;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x14) * 0x10 + 0x138);
                  goto LAB_07e0ed94;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar5 = (undefined8 *)FUN_03ac43c4(plVar4,*(long *)puVar2,0x14);
LAB_07e0ed94:
            (*(code *)*puVar5)(plVar4,puVar5[1]);
            FUN_07ebc03c(&local_c0,0);
            break;
          case 0x20007:
            if (plVar4 == (long *)0x0) {
              if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_07e0f3d4;
            }
            lVar6 = *plVar4;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x15) * 0x10 + 0x138);
                  goto LAB_07e0ecb8;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar5 = (undefined8 *)FUN_03ac43c4(plVar4,*(long *)puVar2,0x15);
LAB_07e0ecb8:
            (*(code *)*puVar5)(plVar4,puVar5[1]);
            FUN_07ebbe54(&local_c0,0);
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
            if (plVar4 == (long *)0x0) {
              if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_07e0f3d4;
            }
            lVar6 = *plVar4;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x1a) * 0x10 + 0x138);
                  goto LAB_07e0ee70;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar5 = (undefined8 *)FUN_03ac43c4(plVar4,*(long *)puVar2,0x1a);
LAB_07e0ee70:
            (*(code *)*puVar5)(plVar4,puVar5[1]);
            FUN_07ebc08c(&local_c0,0);
            break;
          case 0x2000c:
            if (plVar4 == (long *)0x0) {
              if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_07e0f3d4;
            }
            lVar6 = *plVar4;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x1b) * 0x10 + 0x138);
                  goto LAB_07e0eec8;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar5 = (undefined8 *)FUN_03ac43c4(plVar4,*(long *)puVar2,0x1b);
LAB_07e0eec8:
            (*(code *)*puVar5)(plVar4,puVar5[1]);
            FUN_07ebc098(&local_c0,0);
            break;
          case 0x2000e:
            if (plVar4 == (long *)0x0) {
              if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_07e0f3d4;
            }
            lVar6 = *plVar4;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x1e) * 0x10 + 0x138);
                  goto LAB_07e0edc0;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar5 = (undefined8 *)FUN_03ac43c4(plVar4,*(long *)puVar2,0x1e);
LAB_07e0edc0:
            (*(code *)*puVar5)(plVar4,puVar5[1]);
            FUN_07ebbe3c(&local_c0,0);
            break;
          case 0x20010:
            if (plVar4 == (long *)0x0) {
              if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_07e0f3d4;
            }
            lVar6 = *plVar4;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x20) * 0x10 + 0x138);
                  goto LAB_07e0ef4c;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar5 = (undefined8 *)FUN_03ac43c4(plVar4,*(long *)puVar2,0x20);
LAB_07e0ef4c:
            (*(code *)*puVar5)(plVar4,puVar5[1]);
            FUN_07ebbe24(&local_c0,0);
            break;
          case 0x20011:
            if (plVar4 == (long *)0x0) {
              if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_07e0f3d4;
            }
            lVar6 = *plVar4;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x22) * 0x10 + 0x138);
                  goto LAB_07e0ed10;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar5 = (undefined8 *)FUN_03ac43c4(plVar4,*(long *)puVar2,0x22);
LAB_07e0ed10:
            (*(code *)*puVar5)(plVar4,puVar5[1]);
            FUN_07ebbf40(&local_c0,0);
            break;
          case 0x20012:
            if (plVar4 == (long *)0x0) {
              if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_07e0f3d4;
            }
            lVar6 = *plVar4;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x23) * 0x10 + 0x138);
                  goto LAB_07e0ef20;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar5 = (undefined8 *)FUN_03ac43c4(plVar4,*(long *)puVar2,0x23);
LAB_07e0ef20:
            (*(code *)*puVar5)(plVar4,puVar5[1]);
            FUN_07ebbf1c(&local_c0,0);
            break;
          case 0x20013:
            if (plVar4 == (long *)0x0) {
              if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_07e0f3d4;
            }
            lVar6 = *plVar4;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x24) * 0x10 + 0x138);
                  goto LAB_07e0ec8c;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar5 = (undefined8 *)FUN_03ac43c4(plVar4,*(long *)puVar2,0x24);
LAB_07e0ec8c:
            (*(code *)*puVar5)(plVar4,puVar5[1]);
            FUN_07ebbf34(&local_c0,0);
            break;
          case 0x20014:
            if (plVar4 == (long *)0x0) {
              if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_07e0f3d4;
            }
            lVar6 = *plVar4;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x25) * 0x10 + 0x138);
                  goto LAB_07e0ece4;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar5 = (undefined8 *)FUN_03ac43c4(plVar4,*(long *)puVar2,0x25);
LAB_07e0ece4:
            (*(code *)*puVar5)(plVar4,puVar5[1]);
            FUN_07ebbf28(&local_c0,0);
            break;
          case 0x20019:
            if (plVar4 == (long *)0x0) {
              if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_07e0f3d4;
            }
            lVar6 = *plVar4;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x2b) * 0x10 + 0x138);
                  goto LAB_07e0ee9c;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar5 = (undefined8 *)FUN_03ac43c4(plVar4,*(long *)puVar2,0x2b);
LAB_07e0ee9c:
            (*(code *)*puVar5)(plVar4,puVar5[1]);
            FUN_07ebc018(&local_c0,0);
            break;
          case 0x2001a:
            if (plVar4 == (long *)0x0) {
              if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_07e0f3d4;
            }
            lVar6 = *plVar4;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x2c) * 0x10 + 0x138);
                  goto LAB_07e0ec60;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar5 = (undefined8 *)FUN_03ac43c4(plVar4,*(long *)puVar2,0x2c);
LAB_07e0ec60:
            (*(code *)*puVar5)(plVar4,puVar5[1]);
            FUN_07ebbf4c(&local_c0,0);
            break;
          case 0x2001b:
            if (plVar4 == (long *)0x0) {
              if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_07e0f3d4;
            }
            lVar6 = *plVar4;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x2d) * 0x10 + 0x138);
                  goto LAB_07e0ed68;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar5 = (undefined8 *)FUN_03ac43c4(plVar4,*(long *)puVar2,0x2d);
LAB_07e0ed68:
            (*(code *)*puVar5)(plVar4,puVar5[1]);
            FUN_07ebc00c(&local_c0,0);
            break;
          case 0x2001c:
            if (plVar4 == (long *)0x0) {
              if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_07e0f3d4;
            }
            lVar6 = *plVar4;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x2e) * 0x10 + 0x138);
                  goto LAB_07e0ec34;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar5 = (undefined8 *)FUN_03ac43c4(plVar4,*(long *)puVar2,0x2e);
LAB_07e0ec34:
            (*(code *)*puVar5)(plVar4,puVar5[1]);
            FUN_07ebc000(&local_c0,0);
            break;
          case 0x2001e:
            if (plVar4 == (long *)0x0) {
              if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_07e0f3d4;
            }
            lVar6 = *plVar4;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x30) * 0x10 + 0x138);
                  goto LAB_07e0ee44;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar5 = (undefined8 *)FUN_03ac43c4(plVar4,*(long *)puVar2,0x30);
LAB_07e0ee44:
            (*(code *)*puVar5)(plVar4,puVar5[1]);
            FUN_07ebbe48(&local_c0,0);
            break;
          case 0x2001f:
            if (plVar4 == (long *)0x0) {
              if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_07e0f3d4;
            }
            lVar6 = *plVar4;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x34) * 0x10 + 0x138);
                  goto LAB_07e0eef4;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar5 = (undefined8 *)FUN_03ac43c4(plVar4,*(long *)puVar2,0x34);
LAB_07e0eef4:
            (*(code *)*puVar5)(plVar4,puVar5[1]);
            FUN_07ebbd94(&local_c0,0);
            break;
          case 0x20020:
            if (plVar4 == (long *)0x0) {
              if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_07e0f3d4;
            }
            lVar6 = *plVar4;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x4e) * 0x10 + 0x138);
                  goto LAB_07e0ef78;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar5 = (undefined8 *)FUN_03ac43c4(plVar4,*(long *)puVar2,0x4e);
LAB_07e0ef78:
            (*(code *)*puVar5)(plVar4,puVar5[1]);
            UnityEngine_EventSystems_StandaloneInputModule__DeactivateModule(&local_c0,0);
            break;
          default:
            if ((uint)local_80 == 0x10000) {
              if (plVar4 == (long *)0x0) {
                if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                goto LAB_07e0f3d4;
              }
              lVar6 = *plVar4;
              uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                    puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x16) * 0x10 + 0x138);
                    goto LAB_07e0efa4;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar5 = (undefined8 *)FUN_03ac43c4(plVar4,*(long *)puVar2,0x16);
LAB_07e0efa4:
              (*(code *)*puVar5)(plVar4,puVar5[1]);
              FUN_07ebbe60(&local_c0,0);
            }
          }
        }
        else if ((uint)local_80 < 0x40003) {
          if ((uint)local_80 == 0x30002) {
            if (plVar4 == (long *)0x0) {
              if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_07e0f3d4;
            }
            lVar6 = *plVar4;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x3b) * 0x10 + 0x138);
                  goto LAB_07e0e5f4;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar5 = (undefined8 *)FUN_03ac43c4(plVar4,*(long *)puVar2,0x3b);
LAB_07e0e5f4:
            (*(code *)*puVar5)(plVar4,puVar5[1]);
            FUN_07ebbf04(&local_c0,0);
          }
          else if ((uint)local_80 == 0x40002) {
            if (plVar4 == (long *)0x0) {
              if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_07e0f3d4;
            }
            lVar6 = *plVar4;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xd) * 0x10 + 0x138);
                  goto LAB_07e0e5c8;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar5 = (undefined8 *)FUN_03ac43c4(plVar4,*(long *)puVar2,0xd);
LAB_07e0e5c8:
            (*(code *)*puVar5)(plVar4,puVar5[1]);
            FUN_07ebbf10(&local_c0,0);
          }
        }
        else if ((int)(uint)local_80 < 0x7000c) {
          if ((uint)local_80 == 0x70000) {
            if (plVar4 == (long *)0x0) {
              if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_07e0f3d4;
            }
            lVar6 = *plVar4;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 3) * 0x10 + 0x138);
                  goto LAB_07e0eb2c;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar5 = (undefined8 *)FUN_03ac43c4(plVar4,*(long *)puVar2,3);
LAB_07e0eb2c:
            (*(code *)*puVar5)(plVar4,puVar5[1]);
            FUN_07ebbefc(&local_c0,0);
          }
          else if ((uint)local_80 == 0x70007) {
            if (plVar4 == (long *)0x0) {
              if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_07e0f3d4;
            }
            lVar6 = *plVar4;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 10) * 0x10 + 0x138);
                  goto LAB_07e0ebdc;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar5 = (undefined8 *)FUN_03ac43c4(plVar4,*(long *)puVar2,10);
LAB_07e0ebdc:
            (*(code *)*puVar5)(plVar4,puVar5[1]);
            FUN_07ebc06c(&local_c0,0);
          }
          else if ((uint)local_80 == 0x70008) {
            if (plVar4 == (long *)0x0) {
              if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_07e0f3d4;
            }
            lVar6 = *plVar4;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xb) * 0x10 + 0x138);
                  goto LAB_07e0eb84;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar5 = (undefined8 *)FUN_03ac43c4(plVar4,*(long *)puVar2,0xb);
LAB_07e0eb84:
            (*(code *)*puVar5)(plVar4,puVar5[1]);
            FUN_07ebc074(&local_c0,0);
          }
        }
        else if ((uint)local_80 == 0x7000c) {
          if (plVar4 == (long *)0x0) {
            if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_07e0f3d4;
          }
          lVar6 = *plVar4;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x12) * 0x10 + 0x138);
                goto LAB_07e0eb58;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar5 = (undefined8 *)FUN_03ac43c4(plVar4,*(long *)puVar2,0x12);
LAB_07e0eb58:
          (*(code *)*puVar5)(plVar4,puVar5[1]);
          FUN_07ebc054(&local_c0,0);
        }
        else if ((uint)local_80 == 0x7000d) {
          if (plVar4 == (long *)0x0) {
            if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_07e0f3d4;
          }
          lVar6 = *plVar4;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x13) * 0x10 + 0x138);
                goto LAB_07e0ec08;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar5 = (undefined8 *)FUN_03ac43c4(plVar4,*(long *)puVar2,0x13);
LAB_07e0ec08:
          (*(code *)*puVar5)(plVar4,puVar5[1]);
          FUN_07ebc060(&local_c0,0);
        }
        else if ((uint)local_80 == 0x7000e) {
          if (plVar4 == (long *)0x0) {
            if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_07e0f3d4;
          }
          lVar6 = *plVar4;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x2a) * 0x10 + 0x138);
                goto LAB_07e0ebb0;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar5 = (undefined8 *)FUN_03ac43c4(plVar4,*(long *)puVar2,0x2a);
LAB_07e0ebb0:
          (*(code *)*puVar5)(plVar4,puVar5[1]);
          FUN_07ebc080(&local_c0,0);
        }
        goto switchD_07e0e310_caseD_20008;
      }
      param_1 = FUN_061dc368(plStack_b0,*(undefined8 *)OVRPlugin_OVRP_1_95_0_TypeInfo);
      if (lVar6 != 0) {
        if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9b8(lVar6);
        }
        goto LAB_07e0f3d4;
      }
    }
    param_1 = local_c0;
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
  }
LAB_07e0f3d4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


