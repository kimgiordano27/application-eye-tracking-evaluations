/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContainerContract$$get_ItemTypeNameHandling
ENTRY_POINT: 04f25744
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


/* WARNING: Removing unreachable block (ram,0x04f25d84) */

undefined8 Newtonsoft_Json_Serialization_JsonContainerContract__get_ItemTypeNameHandling(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  bool in_ZR;
  bool in_CY;
  short sVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar10;
  long *unaff_x22;
  int iVar11;
  long unaff_x23;
  ushort unaff_w24;
  long *unaff_x28;
  undefined2 uStack0000000000000004;
  undefined8 in_stack_00000008;
  double in_stack_00000020;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000048;
  
  if (!in_CY || in_ZR) {
    if (unaff_w24 < 0x26) {
      if (unaff_w24 == 0x20) {
        if (*(char *)(unaff_x21 + 0x12) != '\0') {
          return 1;
        }
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar7 = FUN_04f28180();
        if ((uVar7 & 1) != 0) {
          return 1;
        }
        if (*(char *)(unaff_x21 + 0x13) == '\0') goto LAB_04f26108;
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar7 = FUN_04f27338();
        if ((uVar7 & 1) == 0) goto LAB_04f26108;
        if (*(int *)(*(long *)PTR_DAT_065f8488 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar7 = FUN_04f25648();
        goto joined_r0x04f25fe8;
      }
      if (unaff_w24 != 0x22) {
        if (unaff_w24 == 0x25) {
          if ((int)unaff_x22[2] < (int)(*(uint *)(unaff_x22 + 1) - 1)) {
            uVar9 = (int)unaff_x22[2] + 1;
            if (*(uint *)(unaff_x22 + 1) <= uVar9) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c84();
            }
            if (*(short *)(*unaff_x22 + (long)(int)uVar9 * 2) != 0x25) {
              return 1;
            }
          }
          FUN_04f29028();
          return 0;
        }
        goto switchD_04f25a00_caseD_65;
      }
    }
    else if (unaff_w24 != 0x27) {
      if (unaff_w24 == 0x2e) {
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar7 = FUN_04f28180();
        if ((uVar7 & 1) != 0) {
          return 1;
        }
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar7 = FUN_04f27338();
        if ((uVar7 & 1) != 0) {
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          uVar7 = FUN_04f28180();
          if ((uVar7 & 1) != 0) {
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
            }
            Newtonsoft_Json_Serialization_JsonProperty__set_Readable();
            return 1;
          }
        }
        goto LAB_04f26108;
      }
      goto switchD_04f25a00_caseD_65;
    }
    uVar6 = FUN_04dc9be0(0x10,0);
    lVar8 = *unaff_x22;
    lVar1 = unaff_x22[1];
    lVar2 = unaff_x22[2];
    if (*(int *)(*(long *)PTR_DAT_065f8488 + 0xe0) == 0) {
      thunk_FUN_02cd038c(*(long *)PTR_DAT_065f8488);
    }
    uVar7 = FUN_04f26788(lVar8,lVar1,(int)lVar2,uVar6,(long)&stack0x00000048 + 4);
    if ((uVar7 & 1) == 0) {
      thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065c9808,&stack0x00000004);
      FUN_04f290e8();
      FUN_04dc9cac(uVar6,0);
      return 0;
    }
    *(int *)(unaff_x22 + 2) = (int)unaff_x22[2] + in_stack_00000048._4_4_ + -1;
    lVar8 = FUN_04dc9d2c(uVar6,0);
    if (lVar8 == 0) {
LAB_04f26780:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if (0 < *(int *)(lVar8 + 0x10)) {
      iVar11 = 0;
      do {
        sVar5 = FUN_04db48b0(lVar8,iVar11,0);
        if ((sVar5 == 0x20) && (*(char *)(unaff_x21 + 0x12) != '\0')) {
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          Newtonsoft_Json_Serialization_JsonProperty__get_ShouldDeserialize();
        }
        else {
          FUN_04db48b0(lVar8,iVar11,0);
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_02cd038c(*unaff_x28);
          }
          uVar7 = FUN_04f28180();
          if ((uVar7 & 1) == 0) goto LAB_04f26108;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(lVar8 + 0x10));
    }
    uVar9 = *(uint *)(unaff_x19 + 0x24);
    if ((uVar9 >> 0xb & 1) == 0) {
      return 1;
    }
    if ((uVar9 >> 0xd & 1) != 0) {
      uVar7 = thunk_FUN_04db8ae0(lVar8,*(undefined8 *)PTR_DAT_065f8368,0);
      uVar9 = *(uint *)(unaff_x19 + 0x24);
      if ((uVar7 & 1) != 0) goto LAB_04f25cf0;
    }
    if ((uVar9 >> 0xe & 1) == 0) {
      return 1;
    }
    uVar7 = thunk_FUN_04db8ae0(lVar8,*(undefined8 *)PTR_DAT_065cff90,0);
    if ((uVar7 & 1) == 0) {
      return 1;
    }
    uVar9 = *(uint *)(unaff_x19 + 0x24);
LAB_04f25cf0:
    *(uint *)(unaff_x19 + 0x24) = uVar9 | 0x100;
    puVar3 = PTR_DAT_065c98d0;
    lVar8 = *(long *)PTR_DAT_065c98d0;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar8 = *(long *)puVar3;
    }
    *(undefined8 *)(unaff_x19 + 0x28) = **(undefined8 **)(lVar8 + 0xb8);
    return 1;
  }
  if (unaff_w24 < 0x3b) {
    if (unaff_w24 == 0x2f) {
      if ((unaff_x23 == 0) || (lVar8 = FUN_04ed2630(), lVar8 == 0)) goto LAB_04f26780;
      if (*(int *)(lVar8 + 0x10) < 2) {
LAB_04f25e4c:
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar7 = FUN_04f28180();
        if ((uVar7 & 1) != 0) {
          return 1;
        }
      }
      else {
        lVar8 = FUN_04ed2630();
        if (lVar8 == 0) goto LAB_04f26780;
        sVar5 = FUN_04db48b0(lVar8,0,0);
        if (sVar5 != 0x2f) goto LAB_04f25e4c;
      }
      FUN_04ed2630();
    }
    else {
      if (unaff_w24 != 0x3a) goto switchD_04f25a00_caseD_65;
      if ((unaff_x23 == 0) || (lVar8 = FUN_04ed2c6c(), lVar8 == 0)) goto LAB_04f26780;
      if (*(int *)(lVar8 + 0x10) < 2) {
LAB_04f2587c:
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar7 = FUN_04f28180();
        if ((uVar7 & 1) != 0) {
          return 1;
        }
      }
      else {
        lVar8 = FUN_04ed2c6c();
        if (lVar8 == 0) goto LAB_04f26780;
        sVar5 = FUN_04db48b0(lVar8,0,0);
        if (sVar5 != 0x3a) goto LAB_04f2587c;
      }
      FUN_04ed2c6c();
    }
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_02cd038c(*unaff_x28);
    }
LAB_04f260d4:
    uVar7 = FUN_04f28030();
  }
  else {
    if (unaff_w24 == 0x46) {
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      in_stack_00000048._4_4_ = Newtonsoft_Json_Serialization_JsonProperty__set_Readable();
      if (7 < in_stack_00000048._4_4_) goto LAB_04f26108;
      if (*(int *)(*(long *)PTR_DAT_065f8488 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_04f240dc();
      if (*(double *)(unaff_x19 + 0x18) < 0.0) {
        *(double *)(unaff_x19 + 0x18) = in_stack_00000020;
        return 1;
      }
      if (in_stack_00000020 == *(double *)(unaff_x19 + 0x18)) {
        return 1;
      }
      uVar6 = *(undefined8 *)PTR_DAT_065c9808;
      uStack0000000000000004 = 0x46;
      goto LAB_04f26510;
    }
    if (unaff_w24 == 0x48) {
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      in_stack_00000048._4_4_ = Newtonsoft_Json_Serialization_JsonProperty__set_Readable();
      puVar3 = PTR_DAT_065f8488;
      if (*(int *)(*(long *)PTR_DAT_065f8488 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar7 = FUN_04f23da0();
      uVar4 = in_stack_00000030;
      if ((uVar7 & 1) != 0) {
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar7 = FUN_04f2511c(unaff_x19 + 0xc,uVar4,0x48);
        if ((uVar7 & 1) != 0) {
          return 1;
        }
        return 0;
      }
      goto LAB_04f26108;
    }
    if (unaff_w24 == 0x4b) {
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar7 = FUN_04f28180();
      puVar3 = PTR_DAT_065c98d0;
      if ((uVar7 & 1) == 0) {
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar7 = FUN_04f28180();
        if ((uVar7 & 1) == 0) {
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          uVar7 = FUN_04f28180();
          if ((uVar7 & 1) == 0) {
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
        uVar7 = FUN_04f243fc();
        uVar6 = in_stack_00000008;
        if ((uVar7 & 1) == 0) goto LAB_04f26108;
        uVar9 = *(uint *)(unaff_x19 + 0x24);
        if ((uVar9 >> 8 & 1) != 0) {
          uVar10 = *(undefined8 *)(unaff_x19 + 0x28);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          uVar7 = FUN_04f485b0(uVar6,uVar10,0);
          if ((uVar7 & 1) != 0) goto LAB_04f264fc;
          uVar9 = *(uint *)(unaff_x19 + 0x24);
        }
        uVar9 = uVar9 | 0x100;
        *(undefined8 *)(unaff_x19 + 0x28) = in_stack_00000008;
      }
      else {
        uVar9 = *(uint *)(unaff_x19 + 0x24);
        if ((uVar9 >> 8 & 1) != 0) {
          uVar6 = *(undefined8 *)(unaff_x19 + 0x28);
          lVar8 = *(long *)PTR_DAT_065c98d0;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
            lVar8 = *(long *)puVar3;
          }
          uVar7 = FUN_04f485b0(uVar6,**(undefined8 **)(lVar8 + 0xb8),0);
          if ((uVar7 & 1) != 0) {
LAB_04f264fc:
            uVar6 = *(undefined8 *)PTR_DAT_065c9808;
            uStack0000000000000004 = 0x4b;
LAB_04f26510:
            thunk_FUN_02cea4e8(uVar6,&stack0x00000004);
            FUN_04f290e8();
            return 0;
          }
          uVar9 = *(uint *)(unaff_x19 + 0x24);
        }
        uVar9 = uVar9 | 0x300;
        *(undefined8 *)(unaff_x19 + 0x28) = 0;
      }
      *(uint *)(unaff_x19 + 0x24) = uVar9;
      return 1;
    }
switchD_04f25a00_caseD_65:
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    puVar3 = PTR_DAT_065f8368;
    uVar7 = FUN_04f26e0c();
    if ((uVar7 & 1) != 0) {
      if (*(long *)puVar3 == 0) goto LAB_04f26780;
      *(int *)(unaff_x22 + 2) = (int)unaff_x22[2] + *(int *)(*(long *)puVar3 + 0x10) + -1;
      *(uint *)(unaff_x19 + 0x24) = *(uint *)(unaff_x19 + 0x24) | 0x100;
      puVar3 = PTR_DAT_065c98d0;
      lVar8 = *(long *)PTR_DAT_065c98d0;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar8 = *(long *)puVar3;
      }
      *(undefined8 *)(unaff_x19 + 0x28) = **(undefined8 **)(lVar8 + 0xb8);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      goto LAB_04f260d4;
    }
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar7 = FUN_04f28180();
  }
joined_r0x04f25fe8:
  if ((uVar7 & 1) != 0) {
    return 1;
  }
LAB_04f26108:
  FUN_04f2908c();
  return 0;
}


