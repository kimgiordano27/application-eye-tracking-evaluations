/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContainerContract$$set_ItemConverter
ENTRY_POINT: 04f2571c
PROGRAM: hellodot-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


undefined8 Newtonsoft_Json_Serialization_JsonContainerContract__set_ItemConverter(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  int in_w8;
  uint uVar10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar11;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x28;
  ushort uStack0000000000000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  double in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 uStack0000000000000048;
  int iStack000000000000004c;
  
  if (in_w8 == 0) {
    thunk_FUN_02cd038c();
  }
  uVar4 = FUN_04f28504();
  puVar3 = PTR_DAT_065c98d0;
  uStack0000000000000004 = uVar4;
  if (uVar4 < 0x4c) {
    if (uVar4 < 0x2f) {
      if (uVar4 < 0x26) {
        if (uVar4 == 0x20) {
          if (*(char *)(unaff_x21 + 0x12) != '\0') {
            return 1;
          }
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          uVar8 = FUN_04f28180();
          if ((uVar8 & 1) != 0) {
            return 1;
          }
          if (*(char *)(unaff_x21 + 0x13) == '\0') goto LAB_04f26108;
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          uVar8 = FUN_04f27338();
          if ((uVar8 & 1) == 0) goto LAB_04f26108;
          if (*(int *)(*(long *)PTR_DAT_065f8488 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          uVar8 = FUN_04f25648();
          goto joined_r0x04f260dc;
        }
        if (uVar4 == 0x22) goto LAB_04f25b88;
        if (uVar4 == 0x25) {
          if ((int)unaff_x22[2] < (int)(*(uint *)(unaff_x22 + 1) - 1)) {
            uVar10 = (int)unaff_x22[2] + 1;
            if (*(uint *)(unaff_x22 + 1) <= uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c84();
            }
            if (*(short *)(*unaff_x22 + (long)(int)uVar10 * 2) != 0x25) {
              return 1;
            }
          }
          goto LAB_04f262b4;
        }
      }
      else {
        if (uVar4 == 0x27) {
LAB_04f25b88:
          uVar7 = FUN_04dc9be0(0x10,0);
          lVar9 = *unaff_x22;
          lVar1 = unaff_x22[1];
          lVar2 = unaff_x22[2];
          if (*(int *)(*(long *)PTR_DAT_065f8488 + 0xe0) == 0) {
            thunk_FUN_02cd038c(*(long *)PTR_DAT_065f8488);
          }
          uVar8 = FUN_04f26788(lVar9,lVar1,(int)lVar2,uVar7,(long)&stack0x00000048 + 4);
          if ((uVar8 & 1) == 0) {
            thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065c9808,&stack0x00000004);
            FUN_04f290e8();
            FUN_04dc9cac(uVar7,0);
            return 0;
          }
          *(int *)(unaff_x22 + 2) = (int)unaff_x22[2] + iStack000000000000004c + -1;
          lVar9 = FUN_04dc9d2c(uVar7,0);
          if (lVar9 != 0) {
            if (0 < *(int *)(lVar9 + 0x10)) {
              iVar6 = 0;
              do {
                sVar5 = FUN_04db48b0(lVar9,iVar6,0);
                if ((sVar5 == 0x20) && (*(char *)(unaff_x21 + 0x12) != '\0')) {
                  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                    thunk_FUN_02cd038c();
                  }
                  Newtonsoft_Json_Serialization_JsonProperty__get_ShouldDeserialize();
                }
                else {
                  FUN_04db48b0(lVar9,iVar6,0);
                  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                    thunk_FUN_02cd038c(*unaff_x28);
                  }
                  uVar8 = FUN_04f28180();
                  if ((uVar8 & 1) == 0) goto LAB_04f26108;
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 < *(int *)(lVar9 + 0x10));
            }
            uVar10 = *(uint *)(unaff_x19 + 0x24);
            if ((uVar10 >> 0xb & 1) == 0) {
              return 1;
            }
            if ((uVar10 >> 0xd & 1) != 0) {
              uVar8 = thunk_FUN_04db8ae0(lVar9,*(undefined8 *)PTR_DAT_065f8368,0);
              uVar10 = *(uint *)(unaff_x19 + 0x24);
              if ((uVar8 & 1) != 0) goto LAB_04f25cf0;
            }
            if ((uVar10 >> 0xe & 1) == 0) {
              return 1;
            }
            uVar8 = thunk_FUN_04db8ae0(lVar9,*(undefined8 *)PTR_DAT_065cff90,0);
            if ((uVar8 & 1) == 0) {
              return 1;
            }
            uVar10 = *(uint *)(unaff_x19 + 0x24);
LAB_04f25cf0:
            *(uint *)(unaff_x19 + 0x24) = uVar10 | 0x100;
            puVar3 = PTR_DAT_065c98d0;
            lVar9 = *(long *)PTR_DAT_065c98d0;
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
              lVar9 = *(long *)puVar3;
            }
            *(undefined8 *)(unaff_x19 + 0x28) = **(undefined8 **)(lVar9 + 0xb8);
            return 1;
          }
          goto LAB_04f26780;
        }
        if (uVar4 == 0x2e) {
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          uVar8 = FUN_04f28180();
          if ((uVar8 & 1) != 0) {
            return 1;
          }
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          uVar8 = FUN_04f27338();
          if ((uVar8 & 1) != 0) {
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
            }
            uVar8 = FUN_04f28180();
            if ((uVar8 & 1) != 0) {
              if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                thunk_FUN_02cd038c();
              }
              Newtonsoft_Json_Serialization_JsonProperty__set_Readable();
              return 1;
            }
          }
          goto LAB_04f26108;
        }
      }
      goto switchD_04f25a00_caseD_65;
    }
    if (0x3a < uVar4) {
      if (uVar4 == 0x46) goto switchD_04f25a00_caseD_66;
      if (uVar4 == 0x48) {
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        iStack000000000000004c = Newtonsoft_Json_Serialization_JsonProperty__set_Readable();
        puVar3 = PTR_DAT_065f8488;
        if (*(int *)(*(long *)PTR_DAT_065f8488 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar8 = FUN_04f23da0();
        if ((uVar8 & 1) != 0) {
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          goto LAB_04f26728;
        }
        goto LAB_04f26108;
      }
      if (uVar4 == 0x4b) {
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar8 = FUN_04f28180();
        puVar3 = PTR_DAT_065c98d0;
        if ((uVar8 & 1) == 0) {
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          uVar8 = FUN_04f28180();
          if ((uVar8 & 1) == 0) {
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
            }
            uVar8 = FUN_04f28180();
            if ((uVar8 & 1) == 0) {
              return 1;
            }
          }
          *(int *)(unaff_x20 + 0x10) = *(int *)(unaff_x20 + 0x10) + -1;
          puVar3 = PTR_DAT_065c98d0;
          if (*(int *)(*(long *)PTR_DAT_065c98d0 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          in_stack_00000008 = 0;
          if (*(int *)(*(long *)PTR_DAT_065f8488 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          uVar8 = FUN_04f243fc();
          uVar7 = in_stack_00000008;
          if ((uVar8 & 1) == 0) goto LAB_04f26108;
          uVar10 = *(uint *)(unaff_x19 + 0x24);
          if ((uVar10 >> 8 & 1) != 0) {
            uVar11 = *(undefined8 *)(unaff_x19 + 0x28);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
            }
            uVar8 = FUN_04f485b0(uVar7,uVar11,0);
            if ((uVar8 & 1) != 0) goto LAB_04f264fc;
            uVar10 = *(uint *)(unaff_x19 + 0x24);
            uVar7 = in_stack_00000008;
          }
LAB_04f26750:
          uVar10 = uVar10 | 0x100;
          *(undefined8 *)(unaff_x19 + 0x28) = uVar7;
        }
        else {
          uVar10 = *(uint *)(unaff_x19 + 0x24);
          if ((uVar10 >> 8 & 1) != 0) {
            uVar7 = *(undefined8 *)(unaff_x19 + 0x28);
            lVar9 = *(long *)PTR_DAT_065c98d0;
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
              lVar9 = *(long *)puVar3;
            }
            uVar8 = FUN_04f485b0(uVar7,**(undefined8 **)(lVar9 + 0xb8),0);
            if ((uVar8 & 1) != 0) {
LAB_04f264fc:
              uVar7 = *(undefined8 *)PTR_DAT_065c9808;
              uStack0000000000000004 = 0x4b;
LAB_04f26510:
              thunk_FUN_02cea4e8(uVar7,&stack0x00000004);
              FUN_04f290e8();
              return 0;
            }
            uVar10 = *(uint *)(unaff_x19 + 0x24);
          }
          uVar10 = uVar10 | 0x300;
          *(undefined8 *)(unaff_x19 + 0x28) = 0;
        }
        *(uint *)(unaff_x19 + 0x24) = uVar10;
        return 1;
      }
      goto switchD_04f25a00_caseD_65;
    }
    if (uVar4 == 0x2f) {
      if ((unaff_x23 == 0) || (lVar9 = FUN_04ed2630(), lVar9 == 0)) goto LAB_04f26780;
      if (*(int *)(lVar9 + 0x10) < 2) {
LAB_04f25e4c:
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar8 = FUN_04f28180();
        if ((uVar8 & 1) != 0) {
          return 1;
        }
      }
      else {
        lVar9 = FUN_04ed2630();
        if (lVar9 == 0) goto LAB_04f26780;
        sVar5 = FUN_04db48b0(lVar9,0,0);
        if (sVar5 != 0x2f) goto LAB_04f25e4c;
      }
      FUN_04ed2630();
    }
    else {
      if (uVar4 != 0x3a) goto switchD_04f25a00_caseD_65;
      if ((unaff_x23 == 0) || (lVar9 = FUN_04ed2c6c(), lVar9 == 0)) goto LAB_04f26780;
      if (*(int *)(lVar9 + 0x10) < 2) {
LAB_04f2587c:
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar8 = FUN_04f28180();
        if ((uVar8 & 1) != 0) {
          return 1;
        }
      }
      else {
        lVar9 = FUN_04ed2c6c();
        if (lVar9 == 0) goto LAB_04f26780;
        sVar5 = FUN_04db48b0(lVar9,0,0);
        if (sVar5 != 0x3a) goto LAB_04f2587c;
      }
      FUN_04ed2c6c();
    }
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_02cd038c(*unaff_x28);
    }
LAB_04f260d4:
    uVar8 = FUN_04f28030();
  }
  else if (uVar4 < 0x69) {
    if (uVar4 < 0x5b) {
      if (uVar4 == 0x4d) {
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        iVar6 = Newtonsoft_Json_Serialization_JsonProperty__set_Readable();
        iStack000000000000004c = iVar6;
        if (iVar6 < 3) {
          if (*(int *)(*(long *)PTR_DAT_065f8488 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          uVar8 = FUN_04f23da0();
          if ((uVar8 & 1) == 0) {
            if (*(char *)(unaff_x21 + 0x14) == '\0') goto LAB_04f26108;
            lVar9 = *(long *)(unaff_x21 + 0x18);
            if (lVar9 == 0) goto LAB_04f26780;
            uVar8 = (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40));
            if ((uVar8 & 1) == 0) goto LAB_04f26108;
          }
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_065f8488 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          if (iVar6 == 3) {
            uVar8 = FUN_04f245c4();
          }
          else {
            uVar8 = FUN_04f247a0();
          }
          if ((uVar8 & 1) == 0) goto LAB_04f26108;
          *(uint *)(unaff_x19 + 0x24) = *(uint *)(unaff_x19 + 0x24) | 0x400;
        }
        if (*(int *)(*(long *)PTR_DAT_065f8488 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        goto LAB_04f26728;
      }
      if (uVar4 == 0x5a) {
        uVar10 = *(uint *)(unaff_x19 + 0x24);
        if ((uVar10 >> 8 & 1) != 0) {
          uVar7 = *(undefined8 *)(unaff_x19 + 0x28);
          lVar9 = *(long *)PTR_DAT_065c98d0;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
            lVar9 = *(long *)puVar3;
          }
          uVar8 = FUN_04f485b0(uVar7,**(undefined8 **)(lVar9 + 0xb8),0);
          if ((uVar8 & 1) != 0) {
            uVar7 = *(undefined8 *)PTR_DAT_065c9808;
            uStack0000000000000004 = 0x5a;
            goto LAB_04f26510;
          }
          uVar10 = *(uint *)(unaff_x19 + 0x24);
        }
        *(undefined8 *)(unaff_x19 + 0x28) = 0;
        *(uint *)(unaff_x19 + 0x24) = uVar10 | 0x300;
        *(int *)(unaff_x20 + 0x10) = *(int *)(unaff_x20 + 0x10) + 1;
        if (*(int *)(*(long *)PTR_DAT_065f8488 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar8 = FUN_04f1e40c();
        if ((uVar8 & 1) != 0) {
          *(int *)(unaff_x20 + 0x10) = *(int *)(unaff_x20 + 0x10) + -1;
          return 1;
        }
        goto LAB_04f26108;
      }
      goto switchD_04f25a00_caseD_65;
    }
    switch(uVar4) {
    case 100:
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      iVar6 = Newtonsoft_Json_Serialization_JsonProperty__set_Readable();
      puVar3 = PTR_DAT_065f8488;
      iStack000000000000004c = iVar6;
      if (iVar6 < 3) {
        if (*(int *)(*(long *)PTR_DAT_065f8488 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar8 = FUN_04f23da0();
        if ((uVar8 & 1) == 0) {
          if (*(char *)(unaff_x21 + 0x14) == '\0') goto LAB_04f26108;
          lVar9 = *(long *)(unaff_x21 + 0x18);
          if (lVar9 == 0) goto LAB_04f26780;
          uVar8 = (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40));
          if ((uVar8 & 1) == 0) goto LAB_04f26108;
        }
        lVar9 = *(long *)puVar3;
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_065f8488 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        if (iVar6 == 3) {
          uVar8 = FUN_04f249d0();
        }
        else {
          uVar8 = FUN_04f24b34();
        }
        if ((uVar8 & 1) == 0) goto LAB_04f26108;
        lVar9 = *(long *)puVar3;
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
LAB_04f26728:
      uVar8 = FUN_04f2511c();
      if ((uVar8 & 1) == 0) {
        return 0;
      }
      return 1;
    case 0x65:
      goto switchD_04f25a00_caseD_65;
    case 0x66:
switchD_04f25a00_caseD_66:
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      iStack000000000000004c = Newtonsoft_Json_Serialization_JsonProperty__set_Readable();
      if (iStack000000000000004c < 8) {
        if (*(int *)(*(long *)PTR_DAT_065f8488 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar8 = FUN_04f240dc();
        if ((uVar4 == 0x66) && ((uVar8 & 1) == 0)) goto LAB_04f26108;
        if (*(double *)(unaff_x19 + 0x18) < 0.0) {
          *(double *)(unaff_x19 + 0x18) = in_stack_00000020;
          return 1;
        }
        if (in_stack_00000020 == *(double *)(unaff_x19 + 0x18)) {
          return 1;
        }
        uVar7 = *(undefined8 *)PTR_DAT_065c9808;
        goto LAB_04f26510;
      }
      goto LAB_04f26108;
    case 0x67:
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      iStack000000000000004c = Newtonsoft_Json_Serialization_JsonProperty__set_Readable();
      if (*(int *)(*(long *)PTR_DAT_065f8488 + 0xe0) == 0) {
        thunk_FUN_02cd038c(*(long *)PTR_DAT_065f8488);
      }
      uVar8 = FUN_04f24c98();
      break;
    case 0x68:
      *(undefined1 *)(unaff_x21 + 0x10) = 1;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      iStack000000000000004c = Newtonsoft_Json_Serialization_JsonProperty__set_Readable();
      puVar3 = PTR_DAT_065f8488;
      if (*(int *)(*(long *)PTR_DAT_065f8488 + 0xe0) == 0) {
        thunk_FUN_02cd038c(*(long *)PTR_DAT_065f8488);
      }
      uVar8 = FUN_04f23da0();
      if ((uVar8 & 1) != 0) {
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        goto LAB_04f26728;
      }
      goto LAB_04f26108;
    default:
      if (uVar4 != 0x5c) goto switchD_04f25a00_caseD_65;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar8 = FUN_04f27338();
      if ((uVar8 & 1) == 0) {
LAB_04f262b4:
        FUN_04f29028();
        return 0;
      }
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_04f28504();
      goto LAB_04f260fc;
    }
  }
  else {
    if (uVar4 < 0x74) {
      if (uVar4 == 0x6d) {
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        iStack000000000000004c = Newtonsoft_Json_Serialization_JsonProperty__set_Readable();
        puVar3 = PTR_DAT_065f8488;
        if (*(int *)(*(long *)PTR_DAT_065f8488 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar8 = FUN_04f23da0();
        if ((uVar8 & 1) != 0) {
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          goto LAB_04f26728;
        }
        goto LAB_04f26108;
      }
      if (uVar4 == 0x73) {
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        iStack000000000000004c = Newtonsoft_Json_Serialization_JsonProperty__set_Readable();
        puVar3 = PTR_DAT_065f8488;
        if (*(int *)(*(long *)PTR_DAT_065f8488 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar8 = FUN_04f23da0();
        if ((uVar8 & 1) != 0) {
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          goto LAB_04f26728;
        }
        goto LAB_04f26108;
      }
    }
    else {
      if (uVar4 == 0x74) {
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        iVar6 = Newtonsoft_Json_Serialization_JsonProperty__set_Readable();
        iStack000000000000004c = iVar6;
        if (*(int *)(*(long *)PTR_DAT_065f8488 + 0xe0) == 0) {
          thunk_FUN_02cd038c(*(long *)PTR_DAT_065f8488);
        }
        if (iVar6 == 1) {
          uVar8 = FUN_04f24fcc();
        }
        else {
          uVar8 = FUN_04f24e34();
        }
        if ((uVar8 & 1) == 0) goto LAB_04f26108;
        if (*(int *)(unaff_x21 + 0xc) == -1) {
          *(int *)(unaff_x21 + 0xc) = in_stack_00000018._4_4_;
          return 1;
        }
        if (*(int *)(unaff_x21 + 0xc) == in_stack_00000018._4_4_) {
          return 1;
        }
        uVar7 = *(undefined8 *)PTR_DAT_065c9808;
        uStack0000000000000004 = 0x74;
        goto LAB_04f26510;
      }
      if (uVar4 == 0x7a) {
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        iStack000000000000004c = Newtonsoft_Json_Serialization_JsonProperty__set_Readable();
        puVar3 = PTR_DAT_065c98d0;
        if (*(int *)(*(long *)PTR_DAT_065c98d0 + 0xe0) == 0) {
          thunk_FUN_02cd038c(*(long *)PTR_DAT_065c98d0);
        }
        in_stack_00000010 = 0;
        if (*(int *)(*(long *)PTR_DAT_065f8488 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar8 = FUN_04f243fc();
        uVar7 = in_stack_00000010;
        if ((uVar8 & 1) == 0) goto LAB_04f26108;
        uVar10 = *(uint *)(unaff_x19 + 0x24);
        if ((uVar10 >> 8 & 1) != 0) {
          uVar11 = *(undefined8 *)(unaff_x19 + 0x28);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          uVar8 = FUN_04f485b0(uVar7,uVar11,0);
          if ((uVar8 & 1) != 0) {
            uVar7 = *(undefined8 *)PTR_DAT_065c9808;
            uStack0000000000000004 = 0x7a;
            goto LAB_04f26510;
          }
          uVar10 = *(uint *)(unaff_x19 + 0x24);
          uVar7 = in_stack_00000010;
        }
        goto LAB_04f26750;
      }
      if (uVar4 == 0x79) {
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        iVar6 = Newtonsoft_Json_Serialization_JsonProperty__set_Readable();
        puVar3 = PTR_DAT_065f8488;
        iStack000000000000004c = iVar6;
        if (*(int *)(*(long *)PTR_DAT_065f8488 + 0xe0) == 0) {
          thunk_FUN_02cd038c(*(long *)PTR_DAT_065f8488);
        }
        uVar8 = FUN_04f26f1c();
        if ((uVar8 & 1) == 0) {
          if (unaff_x23 == 0) goto LAB_04f26780;
          uVar8 = FUN_04ed4444();
          if ((uVar8 & 1) == 0) {
            if (iVar6 < 3) {
              *(undefined1 *)(unaff_x21 + 0x11) = 1;
            }
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
            }
            uVar8 = FUN_04f23da0();
          }
          else {
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
            }
            uVar8 = FUN_04f23f38();
          }
          if ((uVar8 & 1) == 0) {
            if (*(char *)(unaff_x21 + 0x14) == '\0') goto LAB_04f26108;
            lVar9 = *(long *)(unaff_x21 + 0x18);
            if (lVar9 == 0) goto LAB_04f26780;
            uVar8 = (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40));
            if ((uVar8 & 1) == 0) goto LAB_04f26108;
          }
        }
        else {
          uStack0000000000000048 = 1;
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        goto LAB_04f26728;
      }
    }
switchD_04f25a00_caseD_65:
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    puVar3 = PTR_DAT_065f8368;
    uVar8 = FUN_04f26e0c();
    if ((uVar8 & 1) != 0) {
      if (*(long *)puVar3 == 0) {
LAB_04f26780:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      *(int *)(unaff_x22 + 2) = (int)unaff_x22[2] + *(int *)(*(long *)puVar3 + 0x10) + -1;
      *(uint *)(unaff_x19 + 0x24) = *(uint *)(unaff_x19 + 0x24) | 0x100;
      puVar3 = PTR_DAT_065c98d0;
      lVar9 = *(long *)PTR_DAT_065c98d0;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar9 = *(long *)puVar3;
      }
      *(undefined8 *)(unaff_x19 + 0x28) = **(undefined8 **)(lVar9 + 0xb8);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      goto LAB_04f260d4;
    }
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
LAB_04f260fc:
    uVar8 = FUN_04f28180();
  }
joined_r0x04f260dc:
  if ((uVar8 & 1) != 0) {
    return 1;
  }
LAB_04f26108:
  FUN_04f2908c();
  return 0;
}


