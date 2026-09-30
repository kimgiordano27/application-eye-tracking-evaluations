/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetReference
ENTRY_POINT: 02751f40
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetReference(void)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long unaff_x19;
  long *plVar19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  undefined8 unaff_x24;
  long *plVar20;
  uint uVar21;
  double dVar22;
  undefined8 in_stack_00000018;
  undefined2 in_stack_00000028;
  int iStack000000000000002c;
  int iStack0000000000000030;
  int iStack0000000000000034;
  
  FUN_01ab69ac(PTR_DAT_03cf1e40);
  FUN_01ab69ac(PTR_DAT_03cc41f8);
  FUN_01ab69ac(PTR_DAT_03cf7b88);
  FUN_01ab69ac(PTR_DAT_03cbeeb0);
  FUN_01ab69ac(PTR_DAT_03cf7800);
  FUN_01ab69ac(PTR_DAT_03cbdee0);
  FUN_01ab69ac(PTR_DAT_03cfa588);
  FUN_01ab69ac(PTR_DAT_03cef9c0);
  FUN_01ab69ac(PTR_DAT_03cf1130);
  FUN_01ab69ac(PTR_DAT_03cf7b18);
  FUN_01ab69ac(PTR_DAT_03cf7b20);
  *(undefined1 *)(unaff_x19 + 0xa97) = 1;
  puVar3 = PTR_DAT_03cf7800;
  iStack0000000000000030 = 0;
  iStack0000000000000034 = 0;
  iStack000000000000002c = 0;
  in_stack_00000028 = 0;
  if (unaff_x21 == 0) {
LAB_02752fd8:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar20 = *(long **)(unaff_x21 + 0x78);
  lVar12 = unaff_x20;
  if (unaff_x20 == 0) {
    lVar12 = FUN_025da210(0x10,0);
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  if (DAT_04124739 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cf7800);
    DAT_04124739 = '\x01';
  }
  lVar13 = *(long *)puVar3;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar13 = *(long *)puVar3;
  }
  if (**(char **)(lVar13 + 0xb8) == '\0') {
    if (plVar20 == (long *)0x0) goto LAB_02752fd8;
    sVar7 = (**(code **)(*plVar20 + 0x1a8))(plVar20,*(undefined8 *)(*plVar20 + 0x1b0));
    lVar13 = *(long *)puVar3;
    bVar4 = sVar7 != 8;
  }
  else {
    bVar4 = true;
  }
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  if (DAT_04124739 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cf7800);
    DAT_04124739 = '\x01';
  }
  lVar13 = *(long *)puVar3;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar13 = *(long *)puVar3;
  }
  if (**(char **)(lVar13 + 0xb8) == '\0') {
    if (plVar20 == (long *)0x0) goto LAB_02752fd8;
    sVar7 = (**(code **)(*plVar20 + 0x1a8))(plVar20,*(undefined8 *)(*plVar20 + 0x1b0));
    bVar5 = sVar7 != 3;
  }
  else {
    bVar5 = true;
  }
  if (0 < (int)unaff_w22) {
                    /* try { // try from 02752118 to 028521c3 has its CatchHandler @ 02752118
                       catch() { ... } // from try @ 02752118 with catch @ 02752118
                       catch() { ... } // from try @ 027521cc with catch @ 02752118
                       catch() { ... } // from try @ 027522c8 with catch @ 02752118
                       catch() { ... } // from try @ 02752388 with catch @ 02752118 */
    uVar21 = 0;
    plVar19 = (long *)PTR_DAT_03cf7b88;
    do {
      if (unaff_w22 <= uVar21) goto LAB_02752fd4;
      uVar2 = *(ushort *)(unaff_x23 + (long)(int)uVar21 * 2);
      if (uVar2 < 0x4c) {
        if (uVar2 < 0x30) {
          if (uVar2 < 0x26) {
            if (uVar2 == 0x22) {
LAB_02752478:
              if (*(int *)(*plVar19 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              iStack0000000000000034 = FUN_02751b8c();
              goto LAB_02752f78;
            }
            if (uVar2 == 0x25) {
              if (*(int *)(*plVar19 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              iVar8 = FUN_02751d34();
              if ((iVar8 < 0) || (iVar8 == 0x25)) goto LAB_02752fdc;
              in_stack_00000028 = (undefined2)iVar8;
              if (*(long *)(*(long *)PTR_DAT_03cfa588 + 0x38) == 0) {
                FUN_01a47054(*(long *)PTR_DAT_03cfa588);
              }
              if (*(int *)(*plVar19 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_02751efc(in_stack_00000018,&stack0x00000028,1);
LAB_02752230:
              iStack0000000000000034 = 2;
              goto LAB_02752f78;
            }
          }
          else {
            if (uVar2 == 0x27) goto LAB_02752478;
            if (uVar2 == 0x2f) {
              uVar16 = FUN_026f47cc();
              if (lVar12 != 0) goto LAB_02752728;
              goto LAB_02752fd8;
            }
          }
switchD_0275234c_caseD_65:
          if (lVar12 == 0) goto LAB_02752fd8;
          FUN_025ce640(lVar12,uVar2,0);
        }
        else {
          if (0x46 < uVar2) {
            if (uVar2 == 0x48) {
              if (*(int *)(*plVar19 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              iStack0000000000000034 = FUN_027519dc();
              if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbeeb0);
              }
              uVar10 = FUN_02745acc(&stack0x00000038);
              goto LAB_02752b04;
            }
            if (uVar2 == 0x4b) {
              iStack0000000000000034 = 1;
              if (*(int *)(*plVar19 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_027533e0(in_stack_00000018,unaff_x24,lVar12);
              goto LAB_02752f78;
            }
            goto switchD_0275234c_caseD_65;
          }
          if (uVar2 != 0x3a) {
            if (uVar2 == 0x46) goto switchD_0275234c_caseD_66;
            goto switchD_0275234c_caseD_65;
          }
          uVar16 = System_Threading_Tasks_Task_SetOnCountdownMres___ctor();
          if (lVar12 == 0) goto LAB_02752fd8;
LAB_02752728:
          FUN_025ce690(lVar12,uVar16,0);
        }
        iStack0000000000000034 = 1;
      }
      else if (uVar2 < 0x6e) {
        if (uVar2 < 0x5d) {
          if (uVar2 != 0x4d) {
            if (uVar2 != 0x5c) goto switchD_0275234c_caseD_65;
            if (*(int *)(*plVar19 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            iVar8 = FUN_02751d34();
            if (iVar8 < 0) goto LAB_02752fdc;
            if (lVar12 != 0) {
              FUN_025ce640(lVar12,iVar8,0);
              goto LAB_02752230;
            }
            goto LAB_02752fd8;
          }
          if (*(int *)(*plVar19 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          iStack0000000000000034 = FUN_027519dc();
          if (plVar20 == (long *)0x0) goto LAB_02752fd8;
          iVar8 = (**(code **)(*plVar20 + 0x248))
                            (plVar20,in_stack_00000018,*(undefined8 *)(*plVar20 + 0x250));
          if (iStack0000000000000034 < 3) {
            if (!bVar4) {
              if (*(int *)(*(long *)PTR_DAT_03cf7800 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              if (DAT_04124739 == '\0') {
                FUN_01ab69ac(PTR_DAT_03cf7800);
                DAT_04124739 = '\x01';
              }
              puVar3 = PTR_DAT_03cf7800;
              lVar13 = *(long *)PTR_DAT_03cf7800;
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar13 = *(long *)puVar3;
              }
              if (**(char **)(lVar13 + 0xb8) == '\0') {
LAB_02752f0c:
                plVar19 = (long *)PTR_DAT_03cf7b88;
                if (*(int *)(*(long *)PTR_DAT_03cf7b88 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HasFlag(lVar12,iVar8);
                goto LAB_02752f78;
              }
            }
            lVar13 = *(long *)PTR_DAT_03cf7b88;
LAB_02752d80:
            iVar9 = iStack0000000000000034;
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            goto LAB_02752e00;
          }
          if (!bVar4) {
            if (*(int *)(*(long *)PTR_DAT_03cf7800 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            if (DAT_04124739 == '\0') {
              FUN_01ab69ac(PTR_DAT_03cf7800);
              DAT_04124739 = '\x01';
            }
            puVar3 = PTR_DAT_03cf7800;
            lVar13 = *(long *)PTR_DAT_03cf7800;
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar13 = *(long *)puVar3;
            }
            iVar9 = iStack0000000000000034;
            if (**(char **)(lVar13 + 0xb8) == '\0') {
              if (*(int *)(*(long *)PTR_DAT_03cf7b88 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar16 = FUN_02751acc(in_stack_00000018,iVar8,iVar9);
              goto joined_r0x027523c4;
            }
          }
          puVar3 = PTR_DAT_03cf7b88;
          uVar15 = FUN_026f52a0();
          iVar9 = iStack0000000000000034;
          lVar13 = *(long *)puVar3;
          if (((uVar15 & 1) == 0) || (iStack0000000000000034 < 4)) {
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_01a58e78(lVar13);
            }
            uVar16 = FUN_02751a98(iVar8,iVar9);
          }
          else {
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_01a58e78(lVar13);
            }
            FUN_02751da4();
            uVar16 = FUN_026f52e0();
          }
          if (lVar12 == 0) goto LAB_02752fd8;
LAB_02752f5c:
          FUN_025ce690(lVar12,uVar16,0);
          plVar19 = (long *)PTR_DAT_03cf7b88;
        }
        else {
          switch(uVar2) {
          case 100:
            if (*(int *)(*plVar19 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            iStack0000000000000034 = FUN_027519dc();
            if (plVar20 != (long *)0x0) {
              lVar13 = *plVar20;
              if (iStack0000000000000034 < 3) {
                iVar8 = (**(code **)(lVar13 + 0x1e8))
                                  (plVar20,in_stack_00000018,*(undefined8 *)(lVar13 + 0x1f0));
                if (!bVar4) {
                  if (*(int *)(*(long *)PTR_DAT_03cf7800 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  if (DAT_04124739 == '\0') {
                    FUN_01ab69ac(PTR_DAT_03cf7800);
                    DAT_04124739 = '\x01';
                  }
                  puVar3 = PTR_DAT_03cf7800;
                  lVar13 = *(long *)PTR_DAT_03cf7800;
                  if (*(int *)(lVar13 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar13 = *(long *)puVar3;
                  }
                  plVar19 = (long *)PTR_DAT_03cf7b88;
                  if (**(char **)(lVar13 + 0xb8) == '\0') goto LAB_02752f0c;
                }
                lVar13 = *plVar19;
                goto LAB_02752d80;
              }
              uVar10 = (**(code **)(lVar13 + 0x1f8))
                                 (plVar20,in_stack_00000018,*(undefined8 *)(lVar13 + 0x200));
              iVar8 = iStack0000000000000034;
              if (*(int *)(*plVar19 + 0xe0) == 0) {
                thunk_FUN_01a58e78(*plVar19);
              }
              uVar16 = FUN_02751a64(uVar10,iVar8);
joined_r0x027523c4:
              if (lVar12 != 0) goto LAB_02752f5c;
            }
            goto LAB_02752fd8;
          default:
            goto switchD_0275234c_caseD_65;
          case 0x66:
switchD_0275234c_caseD_66:
            if (*(int *)(*plVar19 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            iStack0000000000000034 = FUN_027519dc();
            if (7 < iStack0000000000000034) {
LAB_02752fdc:
              if (unaff_x20 == 0) {
                FUN_025da2e4(lVar12,0);
              }
              thunk_FUN_01a6ca08(PTR_DAT_03cea0a0);
              uVar16 = thunk_FUN_01a89e68();
              uVar17 = thunk_FUN_01a6ca08(PTR_DAT_03cf04f0);
              FUN_0273bfa0(uVar16,uVar17);
              uVar17 = thunk_FUN_01a6ca08(PTR_DAT_03cfa590);
                    /* WARNING: Subroutine does not return */
              FUN_01ab6b14(uVar16,uVar17);
            }
            if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            lVar13 = FUN_0274322c(&stack0x00000038);
            iVar8 = iStack0000000000000034;
            if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdee0);
            }
            dVar22 = (double)thunk_FUN_01ac9a78(0x4024000000000000,(double)(7 - iVar8),0);
            puVar3 = PTR_DAT_03cf7b88;
            lVar14 = -0x8000000000000000;
            if (dVar22 != INFINITY) {
              lVar14 = (long)dVar22;
            }
            lVar18 = 0;
            if (lVar14 != 0) {
              lVar18 = (lVar13 % 10000000) / lVar14;
            }
            iVar8 = (int)lVar18;
            if (uVar2 == 0x66) {
              lVar13 = *(long *)PTR_DAT_03cf7b88;
              iStack000000000000002c = iVar8;
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar13 = *(long *)puVar3;
              }
              lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x28);
              if (lVar13 == 0) goto LAB_02752fd8;
              if (*(uint *)(lVar13 + 0x18) <= iStack0000000000000034 - 1U) {
LAB_02752fd4:
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c44();
              }
              lVar13 = lVar13 + (long)(int)(iStack0000000000000034 - 1U) * 8;
              lVar14 = *(long *)PTR_DAT_03cc41f8;
            }
            else {
              iVar9 = iStack0000000000000034;
              if ((0 < iStack0000000000000034) && (iVar11 = iStack0000000000000034, iVar8 % 10 == 0)
                 ) {
                do {
                  lVar18 = lVar18 / 10;
                  iVar9 = iVar11 + -1;
                  if (iVar11 < 2) break;
                  iVar11 = iVar9;
                } while (lVar18 == (lVar18 / 10) * 10);
              }
              if (iVar9 < 1) {
                if (lVar12 != 0) {
                  iVar8 = FUN_025cee48(lVar12,0);
                  plVar19 = (long *)PTR_DAT_03cf7b88;
                  if (0 < iVar8) {
                    iVar8 = FUN_025cee48(lVar12,0);
                    sVar7 = FUN_025d60f0(lVar12,iVar8 + -1,0);
                    if (sVar7 == 0x2e) {
                      iVar8 = FUN_025cee48(lVar12,0);
                      FUN_025d7430(lVar12,iVar8 + -1,1,0);
                    }
                  }
                  break;
                }
                goto LAB_02752fd8;
              }
              iStack000000000000002c = (int)lVar18;
              lVar13 = *(long *)PTR_DAT_03cf7b88;
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar13 = *(long *)puVar3;
              }
              lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x28);
              if (lVar13 == 0) goto LAB_02752fd8;
              if (*(uint *)(lVar13 + 0x18) <= iVar9 - 1U) goto LAB_02752fd4;
              lVar13 = lVar13 + (ulong)(iVar9 - 1U) * 8;
              lVar14 = *(long *)PTR_DAT_03cc41f8;
            }
            uVar16 = *(undefined8 *)(lVar13 + 0x20);
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar17 = FUN_0271c480(0);
            uVar16 = FUN_02767b18(&stack0x0000002c,uVar16,uVar17,0);
            if (lVar12 == 0) goto LAB_02752fd8;
            FUN_025ce690(lVar12,uVar16,0);
            plVar19 = (long *)PTR_DAT_03cf7b88;
            break;
          case 0x67:
            if (*(int *)(*plVar19 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            iStack0000000000000034 = FUN_027519dc();
            if (plVar20 == (long *)0x0) goto LAB_02752fd8;
            (**(code **)(*plVar20 + 0x228))
                      (plVar20,in_stack_00000018,*(undefined8 *)(*plVar20 + 0x230));
            uVar16 = FUN_026f453c();
joined_r0x02752cdc:
            if (lVar12 == 0) goto LAB_02752fd8;
            FUN_025ce690(lVar12,uVar16,0);
            break;
          case 0x68:
            if (*(int *)(*plVar19 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            iStack0000000000000034 = FUN_027519dc();
            if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbeeb0);
            }
            iVar11 = FUN_02745acc(&stack0x00000038);
            iVar9 = iStack0000000000000034;
            iVar8 = 0xc;
            if (iVar11 % 0xc != 0) {
              iVar8 = iVar11 % 0xc;
            }
            if (*(int *)(*plVar19 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_027517f8(lVar12,iVar8,iVar9);
            plVar19 = (long *)PTR_DAT_03cf7b88;
            break;
          case 0x6d:
            if (*(int *)(*plVar19 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            iStack0000000000000034 = FUN_027519dc();
            if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbeeb0);
            }
            uVar10 = FUN_02745c48(&stack0x00000038);
            goto LAB_02752b04;
          }
        }
      }
      else if (uVar2 < 0x75) {
        if (uVar2 == 0x73) {
          if (*(int *)(*plVar19 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          iStack0000000000000034 = FUN_027519dc();
          if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbeeb0);
          }
          uVar10 = FUN_02745eac(&stack0x00000038);
LAB_02752b04:
          FUN_027517f8(lVar12,uVar10,iStack0000000000000034);
        }
        else {
          if (uVar2 != 0x74) goto switchD_0275234c_caseD_65;
          if (*(int *)(*plVar19 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          iVar8 = FUN_027519dc();
          iStack0000000000000034 = iVar8;
          if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbeeb0);
          }
          iVar9 = FUN_02745acc(&stack0x00000038);
          plVar19 = (long *)PTR_DAT_03cf7b88;
          if (iVar8 != 1) {
            if (iVar9 < 0xc) {
              uVar16 = FUN_026f437c();
            }
            else {
              uVar16 = FUN_026f4a74();
            }
            goto joined_r0x02752cdc;
          }
          if (iVar9 < 0xc) {
            lVar13 = FUN_026f437c();
            if (lVar13 == 0) goto LAB_02752fd8;
            if (0 < *(int *)(lVar13 + 0x10)) {
              lVar13 = FUN_026f437c();
              if (lVar13 != 0) goto LAB_02752cb0;
              goto LAB_02752fd8;
            }
          }
          else {
            lVar13 = FUN_026f4a74();
            if (lVar13 == 0) goto LAB_02752fd8;
            if (0 < *(int *)(lVar13 + 0x10)) {
              lVar13 = FUN_026f4a74();
              if (lVar13 == 0) goto LAB_02752fd8;
LAB_02752cb0:
              uVar10 = FUN_025b8a2c(lVar13,0,0);
              if (lVar12 == 0) goto LAB_02752fd8;
              FUN_025ce640(lVar12,uVar10,0);
            }
          }
        }
      }
      else {
        if (uVar2 != 0x79) {
          if (uVar2 == 0x7a) {
            if (*(int *)(*plVar19 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            iStack0000000000000034 = FUN_027519dc();
            FUN_02753034(in_stack_00000018,unaff_x24);
            goto LAB_02752f78;
          }
          goto switchD_0275234c_caseD_65;
        }
        if (plVar20 == (long *)0x0) goto LAB_02752fd8;
        uVar10 = (**(code **)(*plVar20 + 0x268))
                           (plVar20,in_stack_00000018,*(undefined8 *)(*plVar20 + 0x270));
        _iStack0000000000000030 = CONCAT44(iStack0000000000000034,uVar10);
        if (*(int *)(*plVar19 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*plVar19);
        }
        iVar8 = FUN_027519dc();
        iStack0000000000000034 = iVar8;
        if ((((!bVar5) && (*(char *)(*(long *)(*(long *)PTR_DAT_03cf1e40 + 0xb8) + 3) == '\0')) &&
            (iStack0000000000000030 == 1)) &&
           (uVar1 = iVar8 + uVar21, (int)uVar1 < (int)(unaff_w22 - 1))) {
          if (unaff_w22 <= uVar1) goto LAB_02752fd4;
          if (*(short *)(unaff_x23 + (long)(int)uVar1 * 2) == 0x27) {
            if (unaff_w22 <= uVar1 + 1) goto LAB_02752fd4;
            if (*(long *)PTR_DAT_03cf7b20 == 0) goto LAB_02752fd8;
            sVar7 = *(short *)(unaff_x23 + (long)(int)(uVar1 + 1) * 2);
            sVar6 = FUN_025b8a2c(*(long *)PTR_DAT_03cf7b20,0,0);
            plVar19 = (long *)PTR_DAT_03cf7b88;
            if (sVar7 == sVar6) {
              if ((*(long *)PTR_DAT_03cf7b18 != 0) &&
                 (uVar10 = FUN_025b8a2c(*(long *)PTR_DAT_03cf7b18,0,0), lVar12 != 0)) {
                FUN_025ce640(lVar12,uVar10,0);
                goto LAB_02752f78;
              }
              goto LAB_02752fd8;
            }
          }
        }
        uVar15 = FUN_026f69c8();
        iVar8 = iStack0000000000000030;
        if ((uVar15 & 1) == 0) {
          if (!bVar4) {
            if (*(int *)(*(long *)PTR_DAT_03cf7800 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            if (DAT_04124739 == '\0') {
              FUN_01ab69ac(PTR_DAT_03cf7800);
              DAT_04124739 = '\x01';
            }
            puVar3 = PTR_DAT_03cf7800;
            lVar13 = *(long *)PTR_DAT_03cf7800;
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar13 = *(long *)puVar3;
            }
            iVar8 = iStack0000000000000030;
            if (**(char **)(lVar13 + 0xb8) == '\0') {
              if (*(int *)(*(long *)PTR_DAT_03cf7b88 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HasFlag(lVar12,iVar8);
              plVar19 = (long *)PTR_DAT_03cf7b88;
              goto LAB_02752f78;
            }
          }
          iVar9 = iStack0000000000000034;
          iVar8 = iStack0000000000000030;
          if (2 < iStack0000000000000034) {
            uVar16 = FUN_0276793c((long)&stack0x00000030 + 4,0);
            uVar16 = FUN_025b1328(*(undefined8 *)PTR_DAT_03cf1130,uVar16,0);
            if (*(int *)(*(long *)PTR_DAT_03cc41f8 + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)PTR_DAT_03cc41f8);
            }
            uVar17 = FUN_0271c480(0);
            uVar16 = FUN_02767b18(&stack0x00000030,uVar16,uVar17,0);
            goto joined_r0x027523c4;
          }
          if (*(int *)(*(long *)PTR_DAT_03cf7b88 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          iVar8 = iVar8 % 100;
        }
        else {
          iVar9 = iStack0000000000000034;
          if (1 < iStack0000000000000034) {
            iVar9 = 2;
          }
          if (*(int *)(*plVar19 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
        }
LAB_02752e00:
        FUN_027517f8(lVar12,iVar8,iVar9);
        plVar19 = (long *)PTR_DAT_03cf7b88;
      }
LAB_02752f78:
      uVar21 = iStack0000000000000034 + uVar21;
    } while ((int)uVar21 < (int)unaff_w22);
  }
  return lVar12;
}


