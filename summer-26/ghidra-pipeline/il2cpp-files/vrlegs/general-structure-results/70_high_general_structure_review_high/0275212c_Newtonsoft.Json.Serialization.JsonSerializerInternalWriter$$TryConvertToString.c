/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$TryConvertToString
ENTRY_POINT: 0275212c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;weak_data_support;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;weak_string_building_near_file_sink_1;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__TryConvertToString(void)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined1 in_CY;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  int iVar15;
  long *unaff_x19;
  undefined8 unaff_x20;
  uint unaff_w22;
  long unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  uint unaff_w28;
  double dVar16;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined2 uStack0000000000000028;
  int iStack000000000000002c;
  int iStack0000000000000030;
  int iStack0000000000000034;
  
  while (!(bool)in_CY) {
    uVar2 = *(ushort *)(unaff_x23 + (long)(int)unaff_w28 * 2);
    if (uVar2 < 0x4c) {
      if (uVar2 < 0x30) {
        if (uVar2 < 0x26) {
          if (uVar2 == 0x22) {
LAB_02752478:
            if (*(int *)(*unaff_x19 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            iStack0000000000000034 = FUN_02751b8c();
            goto LAB_02752f78;
          }
          if (uVar2 == 0x25) {
            if (*(int *)(*unaff_x19 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            iVar6 = FUN_02751d34();
            if ((iVar6 < 0) || (iVar6 == 0x25)) goto LAB_02752fdc;
            uStack0000000000000028 = (undefined2)iVar6;
            if (*(long *)(*(long *)PTR_DAT_03cfa588 + 0x38) == 0) {
              FUN_01a47054(*(long *)PTR_DAT_03cfa588);
            }
            if (*(int *)(*unaff_x19 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
                    /* try { // try from 027521c4 to 028521cb has its CatchHandler @ 02752298 */
                    /* try { // try from 027521cc to 028522af has its CatchHandler @ 02752118 */
            FUN_02751efc(unaff_x20,&stack0x00000028,1);
LAB_02752230:
            iStack0000000000000034 = 2;
            goto LAB_02752f78;
          }
        }
        else {
          if (uVar2 == 0x27) goto LAB_02752478;
          if (uVar2 == 0x2f) {
            FUN_026f47cc();
            goto joined_r0x02752324;
          }
        }
switchD_0275234c_caseD_65:
        if (unaff_x25 == 0) {
LAB_02752fd8:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_025ce640();
      }
      else {
        if (0x46 < uVar2) {
          if (uVar2 == 0x48) {
            if (*(int *)(*unaff_x19 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            iStack0000000000000034 = FUN_027519dc();
            if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbeeb0);
            }
            FUN_02745acc(&stack0x00000038);
            goto LAB_02752b04;
          }
          if (uVar2 == 0x4b) {
            iStack0000000000000034 = 1;
            if (*(int *)(*unaff_x19 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_027533e0(unaff_x20,unaff_x24);
            goto LAB_02752f78;
          }
          goto switchD_0275234c_caseD_65;
        }
        if (uVar2 != 0x3a) {
          if (uVar2 == 0x46) goto switchD_0275234c_caseD_66;
          goto switchD_0275234c_caseD_65;
        }
        System_Threading_Tasks_Task_SetOnCountdownMres___ctor();
joined_r0x02752324:
        if (unaff_x25 == 0) goto LAB_02752fd8;
        FUN_025ce690();
      }
      iStack0000000000000034 = 1;
    }
    else if (uVar2 < 0x6e) {
      if (uVar2 < 0x5d) {
        if (uVar2 != 0x4d) {
          if (uVar2 == 0x5c) {
            if (*(int *)(*unaff_x19 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            iVar6 = FUN_02751d34();
            if (iVar6 < 0) goto LAB_02752fdc;
            if (unaff_x25 == 0) goto LAB_02752fd8;
            FUN_025ce640();
            goto LAB_02752230;
          }
          goto switchD_0275234c_caseD_65;
        }
        if (*(int *)(*unaff_x19 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        iStack0000000000000034 = FUN_027519dc();
        if (unaff_x26 == (long *)0x0) goto LAB_02752fd8;
        uVar8 = (**(code **)(*unaff_x26 + 0x248))();
        if (iStack0000000000000034 < 3) {
          if ((in_stack_00000010 & 0x100000000) == 0) {
            if (*(int *)(*(long *)PTR_DAT_03cf7800 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            if (DAT_04124739 == '\0') {
              FUN_01ab69ac(PTR_DAT_03cf7800);
              DAT_04124739 = '\x01';
            }
            puVar3 = PTR_DAT_03cf7800;
            lVar9 = *(long *)PTR_DAT_03cf7800;
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar9 = *(long *)puVar3;
            }
            if (**(char **)(lVar9 + 0xb8) == '\0') {
LAB_02752f0c:
              unaff_x19 = (long *)PTR_DAT_03cf7b88;
              if (*(int *)(*(long *)PTR_DAT_03cf7b88 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HasFlag();
              goto LAB_02752f78;
            }
          }
          lVar9 = *(long *)PTR_DAT_03cf7b88;
LAB_02752d80:
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          goto LAB_02752e00;
        }
        if ((in_stack_00000010 & 0x100000000) == 0) {
          if (*(int *)(*(long *)PTR_DAT_03cf7800 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (DAT_04124739 == '\0') {
            FUN_01ab69ac(PTR_DAT_03cf7800);
            DAT_04124739 = '\x01';
          }
          puVar3 = PTR_DAT_03cf7800;
          lVar9 = *(long *)PTR_DAT_03cf7800;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar9 = *(long *)puVar3;
          }
          iVar6 = iStack0000000000000034;
          if (**(char **)(lVar9 + 0xb8) == '\0') {
            if (*(int *)(*(long *)PTR_DAT_03cf7b88 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_02751acc(unaff_x20,uVar8,iVar6);
            goto joined_r0x02752f58;
          }
        }
        puVar3 = PTR_DAT_03cf7b88;
        uVar11 = FUN_026f52a0();
        iVar6 = iStack0000000000000034;
        lVar9 = *(long *)puVar3;
        if (((uVar11 & 1) == 0) || (iStack0000000000000034 < 4)) {
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar9);
          }
          FUN_02751a98(uVar8,iVar6);
        }
        else {
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar9);
          }
          FUN_02751da4();
          FUN_026f52e0();
        }
joined_r0x02752f58:
        if (unaff_x25 == 0) goto LAB_02752fd8;
        FUN_025ce690();
        unaff_x19 = (long *)PTR_DAT_03cf7b88;
      }
      else {
        switch(uVar2) {
        case 100:
          if (*(int *)(*unaff_x19 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          iStack0000000000000034 = FUN_027519dc();
          if (unaff_x26 == (long *)0x0) goto LAB_02752fd8;
          if (iStack0000000000000034 < 3) {
            (**(code **)(*unaff_x26 + 0x1e8))();
            if ((in_stack_00000010 & 0x100000000) == 0) {
              if (*(int *)(*(long *)PTR_DAT_03cf7800 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              if (DAT_04124739 == '\0') {
                FUN_01ab69ac(PTR_DAT_03cf7800);
                DAT_04124739 = '\x01';
              }
              puVar3 = PTR_DAT_03cf7800;
              lVar9 = *(long *)PTR_DAT_03cf7800;
              if (*(int *)(lVar9 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar9 = *(long *)puVar3;
              }
              unaff_x19 = (long *)PTR_DAT_03cf7b88;
              if (**(char **)(lVar9 + 0xb8) == '\0') goto LAB_02752f0c;
            }
            lVar9 = *unaff_x19;
            goto LAB_02752d80;
          }
          uVar8 = (**(code **)(*unaff_x26 + 0x1f8))();
          iVar6 = iStack0000000000000034;
          if (*(int *)(*unaff_x19 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*unaff_x19);
          }
          FUN_02751a64(uVar8,iVar6);
          goto joined_r0x02752f58;
        default:
          goto switchD_0275234c_caseD_65;
        case 0x66:
switchD_0275234c_caseD_66:
          if (*(int *)(*unaff_x19 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          iStack0000000000000034 = FUN_027519dc();
          if (7 < iStack0000000000000034) {
LAB_02752fdc:
            if (in_stack_00000000 == 0) {
              FUN_025da2e4();
            }
            thunk_FUN_01a6ca08(PTR_DAT_03cea0a0);
            uVar12 = thunk_FUN_01a89e68();
            uVar13 = thunk_FUN_01a6ca08(PTR_DAT_03cf04f0);
            FUN_0273bfa0(uVar12,uVar13);
            uVar13 = thunk_FUN_01a6ca08(PTR_DAT_03cfa590);
                    /* WARNING: Subroutine does not return */
            FUN_01ab6b14(uVar12,uVar13);
          }
          if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          lVar9 = FUN_0274322c(&stack0x00000038);
          iVar6 = iStack0000000000000034;
          if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdee0);
          }
          dVar16 = (double)thunk_FUN_01ac9a78(0x4024000000000000,(double)(7 - iVar6),0);
          puVar3 = PTR_DAT_03cf7b88;
          lVar10 = -0x8000000000000000;
          if (dVar16 != INFINITY) {
            lVar10 = (long)dVar16;
          }
          lVar14 = 0;
          if (lVar10 != 0) {
            lVar14 = (lVar9 % 10000000) / lVar10;
          }
          iVar6 = (int)lVar14;
          unaff_x20 = in_stack_00000018;
          if (uVar2 == 0x66) {
            lVar9 = *(long *)PTR_DAT_03cf7b88;
            iStack000000000000002c = iVar6;
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar9 = *(long *)puVar3;
            }
            lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x28);
            if (lVar9 == 0) goto LAB_02752fd8;
            if (*(uint *)(lVar9 + 0x18) <= iStack0000000000000034 - 1U) goto LAB_02752fd4;
            lVar9 = lVar9 + (long)(int)(iStack0000000000000034 - 1U) * 8;
            lVar10 = *(long *)PTR_DAT_03cc41f8;
          }
          else {
            iVar7 = iStack0000000000000034;
            if ((0 < iStack0000000000000034) && (iVar15 = iStack0000000000000034, iVar6 % 10 == 0))
            {
              do {
                lVar9 = SUB168(SEXT816(lVar14) * SEXT816(unaff_x27),8);
                lVar14 = (lVar9 >> 2) - (lVar9 >> 0x3f);
                iVar7 = iVar15 + -1;
                if (iVar15 < 2) break;
                lVar9 = SUB168(SEXT816(lVar14) * SEXT816(unaff_x27),8);
                iVar15 = iVar7;
              } while (lVar14 == ((lVar9 >> 2) - (lVar9 >> 0x3f)) * 10);
            }
            if (iVar7 < 1) {
              if (unaff_x25 == 0) goto LAB_02752fd8;
              iVar6 = FUN_025cee48();
              unaff_x19 = (long *)PTR_DAT_03cf7b88;
              if (0 < iVar6) {
                FUN_025cee48();
                sVar5 = FUN_025d60f0();
                if (sVar5 == 0x2e) {
                  FUN_025cee48();
                  FUN_025d7430();
                }
              }
              break;
            }
            iStack000000000000002c = (int)lVar14;
            lVar9 = *(long *)PTR_DAT_03cf7b88;
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar9 = *(long *)puVar3;
            }
            lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x28);
            if (lVar9 == 0) goto LAB_02752fd8;
            if (*(uint *)(lVar9 + 0x18) <= iVar7 - 1U) goto LAB_02752fd4;
            lVar9 = lVar9 + (ulong)(iVar7 - 1U) * 8;
            lVar10 = *(long *)PTR_DAT_03cc41f8;
          }
          uVar12 = *(undefined8 *)(lVar9 + 0x20);
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar13 = FUN_0271c480(0);
          FUN_02767b18((long)&stack0x00000028 + 4,uVar12,uVar13,0);
          if (unaff_x25 == 0) goto LAB_02752fd8;
          FUN_025ce690();
          unaff_x19 = (long *)PTR_DAT_03cf7b88;
          break;
        case 0x67:
          if (*(int *)(*unaff_x19 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          iStack0000000000000034 = FUN_027519dc();
          if (unaff_x26 == (long *)0x0) goto LAB_02752fd8;
          (**(code **)(*unaff_x26 + 0x228))();
          FUN_026f453c();
joined_r0x02752cdc:
          if (unaff_x25 == 0) goto LAB_02752fd8;
          FUN_025ce690();
          break;
        case 0x68:
          if (*(int *)(*unaff_x19 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          iStack0000000000000034 = FUN_027519dc();
          if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbeeb0);
          }
          FUN_02745acc(&stack0x00000038);
          if (*(int *)(*unaff_x19 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_027517f8();
          unaff_x19 = (long *)PTR_DAT_03cf7b88;
          break;
        case 0x6d:
          if (*(int *)(*unaff_x19 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          iStack0000000000000034 = FUN_027519dc();
          if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbeeb0);
          }
          FUN_02745c48(&stack0x00000038);
LAB_02752b04:
          FUN_027517f8();
        }
      }
    }
    else if (uVar2 < 0x75) {
      if (uVar2 == 0x73) {
        if (*(int *)(*unaff_x19 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        iStack0000000000000034 = FUN_027519dc();
        if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbeeb0);
        }
        FUN_02745eac(&stack0x00000038);
        goto LAB_02752b04;
      }
      if (uVar2 != 0x74) goto switchD_0275234c_caseD_65;
      if (*(int *)(*unaff_x19 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      iVar6 = FUN_027519dc();
      iStack0000000000000034 = iVar6;
      if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbeeb0);
      }
      iVar7 = FUN_02745acc(&stack0x00000038);
      unaff_x19 = (long *)PTR_DAT_03cf7b88;
      if (iVar6 != 1) {
        if (iVar7 < 0xc) {
          FUN_026f437c();
        }
        else {
          FUN_026f4a74();
        }
        goto joined_r0x02752cdc;
      }
      if (iVar7 < 0xc) {
        lVar9 = FUN_026f437c();
        if (lVar9 == 0) goto LAB_02752fd8;
        if (0 < *(int *)(lVar9 + 0x10)) {
          lVar9 = FUN_026f437c();
          goto joined_r0x02752cac;
        }
      }
      else {
        lVar9 = FUN_026f4a74();
        if (lVar9 == 0) goto LAB_02752fd8;
        if (0 < *(int *)(lVar9 + 0x10)) {
          lVar9 = FUN_026f4a74();
joined_r0x02752cac:
          if ((lVar9 == 0) || (FUN_025b8a2c(lVar9,0,0), unaff_x25 == 0)) goto LAB_02752fd8;
          FUN_025ce640();
        }
      }
    }
    else if (uVar2 == 0x79) {
      if (unaff_x26 == (long *)0x0) goto LAB_02752fd8;
      iStack0000000000000030 = (**(code **)(*unaff_x26 + 0x268))();
      if (*(int *)(*unaff_x19 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*unaff_x19);
      }
      iStack0000000000000034 = FUN_027519dc();
      if (((((in_stack_00000010 & 1) == 0) &&
           (*(char *)(*(long *)(*(long *)PTR_DAT_03cf1e40 + 0xb8) + 3) == '\0')) &&
          (iStack0000000000000030 == 1)) &&
         (uVar1 = iStack0000000000000034 + unaff_w28, (int)uVar1 < in_stack_00000008._4_4_)) {
        if (unaff_w22 <= uVar1) break;
        if (*(short *)(unaff_x23 + (long)(int)uVar1 * 2) == 0x27) {
          if (unaff_w22 <= uVar1 + 1) break;
          if (*(long *)PTR_DAT_03cf7b20 == 0) goto LAB_02752fd8;
          sVar5 = *(short *)(unaff_x23 + (long)(int)(uVar1 + 1) * 2);
          sVar4 = FUN_025b8a2c(*(long *)PTR_DAT_03cf7b20,0,0);
          unaff_x19 = (long *)PTR_DAT_03cf7b88;
          if (sVar5 == sVar4) {
            if ((*(long *)PTR_DAT_03cf7b18 == 0) ||
               (FUN_025b8a2c(*(long *)PTR_DAT_03cf7b18,0,0), unaff_x25 == 0)) goto LAB_02752fd8;
            FUN_025ce640();
            goto LAB_02752f78;
          }
        }
      }
      uVar11 = FUN_026f69c8();
      if ((uVar11 & 1) == 0) {
        if ((in_stack_00000010 & 0x100000000) == 0) {
          if (*(int *)(*(long *)PTR_DAT_03cf7800 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (DAT_04124739 == '\0') {
            FUN_01ab69ac(PTR_DAT_03cf7800);
            DAT_04124739 = '\x01';
          }
          puVar3 = PTR_DAT_03cf7800;
          lVar9 = *(long *)PTR_DAT_03cf7800;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar9 = *(long *)puVar3;
          }
          if (**(char **)(lVar9 + 0xb8) == '\0') {
            if (*(int *)(*(long *)PTR_DAT_03cf7b88 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HasFlag();
            unaff_x19 = (long *)PTR_DAT_03cf7b88;
            goto LAB_02752f78;
          }
        }
        if (2 < iStack0000000000000034) {
          uVar12 = FUN_0276793c((long)&stack0x00000030 + 4,0);
          uVar12 = FUN_025b1328(*(undefined8 *)PTR_DAT_03cf1130,uVar12,0);
          if (*(int *)(*(long *)PTR_DAT_03cc41f8 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)PTR_DAT_03cc41f8);
          }
          uVar13 = FUN_0271c480(0);
          FUN_02767b18(&stack0x00000030,uVar12,uVar13,0);
          goto joined_r0x02752f58;
        }
        if (*(int *)(*(long *)PTR_DAT_03cf7b88 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
      }
      else if (*(int *)(*unaff_x19 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
LAB_02752e00:
      FUN_027517f8();
      unaff_x19 = (long *)PTR_DAT_03cf7b88;
    }
    else {
      if (uVar2 != 0x7a) goto switchD_0275234c_caseD_65;
      if (*(int *)(*unaff_x19 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      iStack0000000000000034 = FUN_027519dc();
      FUN_02753034(unaff_x20,unaff_x24);
    }
LAB_02752f78:
    unaff_w28 = iStack0000000000000034 + unaff_w28;
    if ((int)unaff_w22 <= (int)unaff_w28) {
      return;
    }
    in_CY = unaff_w22 <= unaff_w28;
  }
LAB_02752fd4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


