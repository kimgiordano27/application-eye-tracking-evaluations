/*
FUNCTION_NAME: FUN_087ca220
ENTRY_POINT: 087ca220
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_21;telemetry_or_network_hits_7
*/


void FUN_087ca220(long param_1,long param_2)

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
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  if ((DAT_0943cf71 & 1) == 0) {
    FUN_03c8f898(
                UnityEngine_Pool_CollectionPool<List<ValueTuple<LocaleIdentifier,_string>>,_ValueTuple<LocaleIdentifier,_string>>_TypeInfo
                );
    FUN_03c8f898(
                UnityEngine_Pool_CollectionPool<List<ArraySizeTrackedProperty>,_ArraySizeTrackedProperty>_TypeInfo
                );
    FUN_03c8f898(
                UnityEngine_Pool_CollectionPool<List<AsyncOperationHandle>,_AsyncOperationHandle>_TypeInfo
                );
    FUN_03c8f898(PTR_DAT_08e816b8);
    FUN_03c8f898(UnityEngine_Pool_CollectionPool<List<Canvas>,_Canvas>_TypeInfo);
    DAT_0943cf71 = 1;
  }
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_a0 = 0;
  if (param_1 != 0) {
    plVar6 = (long *)FUN_087c2e6c(param_1);
    puVar3 = 
    UnityEngine_Pool_CollectionPool<List<ArraySizeTrackedProperty>,_ArraySizeTrackedProperty>_TypeInfo
    ;
    puVar2 = PTR_DAT_08e816b8;
    if (param_2 != 0) {
      if (*(long *)(param_2 + 0x10) == 0) goto LAB_087cb5a0;
      FUN_052ad7fc(&local_e0,*(long *)(param_2 + 0x10),
                   *(undefined8 *)UnityEngine_Pool_CollectionPool<List<Canvas>,_Canvas>_TypeInfo);
      local_a0 = CONCAT44(uStack_cc,local_d0);
      uStack_a8 = uStack_d8;
      local_b0 = local_e0;
      local_98 = uStack_c8;
      local_90 = local_c0;
switchD_087ca380_caseD_70001:
      uVar7 = FUN_049e8244(&local_b0,*(undefined8 *)puVar3);
      if ((uVar7 & 1) != 0) {
        uVar7 = local_98 & 0xffffffff;
        uVar4 = local_98._4_4_;
        uVar13 = local_90 & 0xffffffff;
        uVar5 = local_90._4_4_;
        if ((int)local_a0 < 0x20021) {
          if ((int)local_a0 < 0x10001) {
            if ((int)local_a0 == 0x10000) {
              WebSocketSharp_Server_WebSocketSessionManager_<get_ActiveIDs>d__13__MoveNext
                        (&local_e0,uVar7,local_98._4_4_,uVar13,local_90._4_4_,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              lVar10 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0xf) * 0x10 + 0x138);
                    goto LAB_087ca620;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,0xf);
LAB_087ca620:
              (*(code *)*puVar8)(plVar6,&local_e0,puVar8[1]);
            }
          }
          else {
            switch((int)local_a0) {
            case 0x20003:
              uVar9 = FUN_087d539c(uVar7,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              lVar10 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
                    goto LAB_087cb3b4;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,5);
LAB_087cb3b4:
              (*(code *)*puVar8)(plVar6,uVar9,puVar8[1]);
              break;
            case 0x20004:
              uVar9 = FUN_087d539c(uVar7,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              lVar10 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 7) * 0x10 + 0x138);
                    goto LAB_087cb3d8;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,7);
LAB_087cb3d8:
              (*(code *)*puVar8)(plVar6,uVar9,puVar8[1]);
              break;
            case 0x20005:
              uVar9 = FUN_087d539c(uVar7,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              lVar10 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 9) * 0x10 + 0x138);
                    goto LAB_087cb31c;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,9);
LAB_087cb31c:
              (*(code *)*puVar8)(plVar6,uVar9,puVar8[1]);
              break;
            case 0x20006:
              uVar9 = FUN_087d539c(uVar7,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              lVar10 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0xd) * 0x10 + 0x138);
                    goto LAB_087cb368;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,0xd);
LAB_087cb368:
              (*(code *)*puVar8)(plVar6,uVar9,puVar8[1]);
              break;
            case 0x20007:
              auVar14 = FUN_087d5b58(uVar7,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              lVar10 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0xe) * 0x10 + 0x138);
                    goto LAB_087cb2a4;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,0xe);
LAB_087cb2a4:
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
              uVar9 = FUN_087d539c(uVar7,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              lVar10 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x15) * 0x10 + 0x138);
                    goto LAB_087cb424;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,0x15);
LAB_087cb424:
              (*(code *)*puVar8)(plVar6,uVar9,puVar8[1]);
              break;
            case 0x2000c:
              uVar9 = FUN_087d539c(uVar7,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              lVar10 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x16) * 0x10 + 0x138);
                    goto LAB_087cb470;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,0x16);
LAB_087cb470:
              (*(code *)*puVar8)(plVar6,uVar9,puVar8[1]);
              break;
            case 0x2000e:
              auVar14 = FUN_087d5b58(uVar7,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              lVar10 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x18) * 0x10 + 0x138);
                    goto LAB_087cb38c;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,0x18);
LAB_087cb38c:
              (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              break;
            case 0x20010:
              auVar14 = FUN_087d5b58(uVar7,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              lVar10 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x19) * 0x10 + 0x138);
                    goto LAB_087cb4e4;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,0x19);
LAB_087cb4e4:
              (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              break;
            case 0x20011:
              auVar14 = FUN_087d5b58(uVar7,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              lVar10 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x1a) * 0x10 + 0x138);
                    goto LAB_087cb2f4;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,0x1a);
LAB_087cb2f4:
              (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              break;
            case 0x20012:
              auVar14 = FUN_087d5b58(uVar7,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              lVar10 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x1b) * 0x10 + 0x138);
                    goto LAB_087cb4bc;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,0x1b);
LAB_087cb4bc:
              (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              break;
            case 0x20013:
              auVar14 = FUN_087d5b58(uVar7,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              lVar10 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x1c) * 0x10 + 0x138);
                    goto LAB_087cb27c;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,0x1c);
LAB_087cb27c:
              (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              break;
            case 0x20014:
              auVar14 = FUN_087d5b58(uVar7,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              lVar10 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x1d) * 0x10 + 0x138);
                    goto LAB_087cb2cc;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,0x1d);
LAB_087cb2cc:
              (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              break;
            case 0x20019:
              auVar14 = FUN_087d5b58(uVar7,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              lVar10 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x23) * 0x10 + 0x138);
                    goto LAB_087cb448;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,0x23);
LAB_087cb448:
              (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              break;
            case 0x2001a:
              auVar14 = FUN_087d5b58(uVar7,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              lVar10 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x24) * 0x10 + 0x138);
                    goto LAB_087cb254;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,0x24);
LAB_087cb254:
              (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              break;
            case 0x2001b:
              auVar14 = FUN_087d5b58(uVar7,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              lVar10 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x25) * 0x10 + 0x138);
                    goto LAB_087cb340;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,0x25);
LAB_087cb340:
              (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              break;
            case 0x2001c:
              auVar14 = FUN_087d5b58(uVar7,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              lVar10 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x27) * 0x10 + 0x138);
                    goto LAB_087cb22c;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,0x27);
LAB_087cb22c:
              (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              break;
            case 0x2001e:
              auVar14 = FUN_087d5b58(uVar7,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              lVar10 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x29) * 0x10 + 0x138);
                    goto LAB_087cb3fc;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,0x29);
LAB_087cb3fc:
              (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              break;
            case 0x2001f:
              auVar14 = FUN_087d5b58(uVar7,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              lVar10 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x2d) * 0x10 + 0x138);
                    goto LAB_087cb494;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,0x2d);
LAB_087cb494:
              (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              break;
            case 0x20020:
              auVar14 = FUN_087d5b58(uVar7,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              lVar10 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x36) * 0x10 + 0x138);
                    goto LAB_087cb50c;
                  }
                  uVar7 = uVar7 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,0x36);
LAB_087cb50c:
              (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              break;
            default:
              if ((int)local_a0 == 0x10001) {
                auVar14 = FUN_087d5b58(uVar7,0);
                if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb30();
                }
                lVar10 = *plVar6;
                uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar7 != 0) {
                  piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                      puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x17) * 0x10 + 0x138);
                      goto LAB_087cb534;
                    }
                    uVar7 = uVar7 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar7 != 0);
                }
                puVar8 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,0x17);
LAB_087cb534:
                (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
              }
            }
          }
        }
        else if ((int)local_a0 < 0x40003) {
          if ((int)local_a0 == 0x30002) {
            WebSocketSharp_Server_WebSocketSessionManager_<get_ActiveIDs>d__13__MoveNext
                      (&local_e0,uVar7,local_98._4_4_,uVar13,local_90._4_4_,0);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            lVar10 = *plVar6;
            uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar7 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x31) * 0x10 + 0x138);
                  goto LAB_087ca8ac;
                }
                uVar7 = uVar7 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 != 0);
            }
            puVar8 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,0x31);
LAB_087ca8ac:
            (*(code *)*puVar8)(plVar6,&local_e0,puVar8[1]);
          }
          else if ((int)local_a0 == 0x40002) {
            WebSocketSharp_Server_WebSocketSessionManager_<get_ActiveIDs>d__13__MoveNext
                      (&local_e0,uVar7,local_98._4_4_,uVar13,local_90._4_4_,0);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            lVar10 = *plVar6;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 6) * 0x10 + 0x138);
                  goto LAB_087ca80c;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar8 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,6);
LAB_087ca80c:
            (*(code *)*puVar8)(plVar6,&local_e0,puVar8[1]);
            WebSocketSharp_Server_WebSocketSessionManager_<get_ActiveIDs>d__13__MoveNext
                      (&local_e0,uVar7,uVar4,uVar13,uVar5,0);
            lVar10 = *plVar6;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 10) * 0x10 + 0x138);
                  goto LAB_087ca8e4;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar8 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,10);
LAB_087ca8e4:
            (*(code *)*puVar8)(plVar6,&local_e0,puVar8[1]);
            WebSocketSharp_Server_WebSocketSessionManager_<get_ActiveIDs>d__13__MoveNext
                      (&local_e0,uVar7,uVar4,uVar13,uVar5,0);
            lVar10 = *plVar6;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 8) * 0x10 + 0x138);
                  goto LAB_087ca984;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar8 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,8);
LAB_087ca984:
            (*(code *)*puVar8)(plVar6,&local_e0,puVar8[1]);
            WebSocketSharp_Server_WebSocketSessionManager_<get_ActiveIDs>d__13__MoveNext
                      (&local_e0,uVar7,uVar4,uVar13,uVar5,0);
            lVar10 = *plVar6;
            uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar7 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                  goto LAB_087caa24;
                }
                uVar7 = uVar7 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 != 0);
            }
            puVar8 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,2);
LAB_087caa24:
            (*(code *)*puVar8)(plVar6,&local_e0,puVar8[1]);
          }
        }
        else {
          switch((int)local_a0) {
          case 0x70000:
            WebSocketSharp_Server_WebSocketSessionManager_<get_ActiveIDs>d__13__MoveNext
                      (&local_e0,uVar7,local_98._4_4_,uVar13,local_90._4_4_,0);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            lVar10 = *plVar6;
            uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar7 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                  puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_087cb1a8;
                }
                uVar7 = uVar7 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 != 0);
            }
            puVar8 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,0);
LAB_087cb1a8:
            (*(code *)*puVar8)(plVar6,&local_e0,puVar8[1]);
            break;
          case 0x70007:
            auVar14 = FUN_087d5b58(uVar7,0);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            lVar10 = *plVar6;
            uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar7 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 3) * 0x10 + 0x138);
                  goto LAB_087cb1e0;
                }
                uVar7 = uVar7 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 != 0);
            }
            puVar8 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,3);
LAB_087cb1e0:
            (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
            break;
          case 0x70008:
            auVar14 = FUN_087d5b58(uVar7,0);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            lVar10 = *plVar6;
            uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar7 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 4) * 0x10 + 0x138);
                  goto LAB_087cb15c;
                }
                uVar7 = uVar7 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 != 0);
            }
            puVar8 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,4);
LAB_087cb15c:
            (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
            break;
          case 0x7000c:
            auVar14 = FUN_087d5b58(uVar7,0);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            lVar10 = *plVar6;
            uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar7 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0xb) * 0x10 + 0x138);
                  goto LAB_087cb184;
                }
                uVar7 = uVar7 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 != 0);
            }
            puVar8 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,0xb);
LAB_087cb184:
            (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
            break;
          case 0x7000d:
            auVar14 = FUN_087d5b58(uVar7,0);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            lVar10 = *plVar6;
            uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar7 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0xc) * 0x10 + 0x138);
                  goto LAB_087cb134;
                }
                uVar7 = uVar7 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 != 0);
            }
            puVar8 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,0xc);
LAB_087cb134:
            (*(code *)*puVar8)(plVar6,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar8[1]);
            break;
          case 0x7000e:
            uVar9 = FUN_087d539c(uVar7,0);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            lVar10 = *plVar6;
            uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar7 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x21) * 0x10 + 0x138);
                  goto LAB_087cb208;
                }
                uVar7 = uVar7 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 != 0);
            }
            puVar8 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,0x21);
LAB_087cb208:
            (*(code *)*puVar8)(plVar6,uVar9,puVar8[1]);
          }
        }
        goto switchD_087ca380_caseD_70001;
      }
      FUN_049e8240(&local_b0,
                   *(undefined8 *)
                    UnityEngine_Pool_CollectionPool<List<ValueTuple<LocaleIdentifier,_string>>,_ValueTuple<LocaleIdentifier,_string>>_TypeInfo
                  );
    }
    if (*(long *)(lVar1 + 0x28) == local_88) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_087cb5a0:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


