/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContainerContract$$set_ItemTypeNameHandling
ENTRY_POINT: 04f2574c
PROGRAM: hellodot-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


undefined8 Newtonsoft_Json_Serialization_JsonContainerContract__set_ItemTypeNameHandling(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  short sVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  uint in_w8;
  uint uVar8;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  int iVar9;
  long *unaff_x28;
  undefined8 in_stack_00000048;
  
  if (in_w8 < 0x26) {
    if (in_w8 != 0x20) {
      if (in_w8 == 0x22) goto LAB_04f25b88;
      if (in_w8 == 0x25) {
        if ((int)unaff_x22[2] < (int)(*(uint *)(unaff_x22 + 1) - 1)) {
          uVar8 = (int)unaff_x22[2] + 1;
          if (*(uint *)(unaff_x22 + 1) <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c84();
          }
          if (*(short *)(*unaff_x22 + (long)(int)uVar8 * 2) != 0x25) {
            return 1;
          }
        }
        FUN_04f29028();
        return 0;
      }
      goto switchD_04f25a00_caseD_65;
    }
    if (*(char *)(unaff_x21 + 0x12) != '\0') {
      return 1;
    }
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar6 = FUN_04f28180();
    if ((uVar6 & 1) != 0) {
      return 1;
    }
    if (*(char *)(unaff_x21 + 0x13) == '\0') goto LAB_04f26108;
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar6 = FUN_04f27338();
    if ((uVar6 & 1) == 0) goto LAB_04f26108;
    if (*(int *)(*(long *)PTR_DAT_065f8488 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar6 = FUN_04f25648();
  }
  else {
    if (in_w8 == 0x27) {
LAB_04f25b88:
      uVar5 = FUN_04dc9be0(0x10,0);
      lVar7 = *unaff_x22;
      lVar1 = unaff_x22[1];
      lVar2 = unaff_x22[2];
      if (*(int *)(*(long *)PTR_DAT_065f8488 + 0xe0) == 0) {
        thunk_FUN_02cd038c(*(long *)PTR_DAT_065f8488);
      }
      uVar6 = FUN_04f26788(lVar7,lVar1,(int)lVar2,uVar5,(long)&stack0x00000048 + 4);
      if ((uVar6 & 1) == 0) {
        thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065c9808,&stack0x00000004);
        FUN_04f290e8();
        FUN_04dc9cac(uVar5,0);
        return 0;
      }
      *(int *)(unaff_x22 + 2) = (int)unaff_x22[2] + in_stack_00000048._4_4_ + -1;
      lVar7 = FUN_04dc9d2c(uVar5,0);
      if (lVar7 != 0) {
        if (0 < *(int *)(lVar7 + 0x10)) {
          iVar9 = 0;
          do {
            sVar4 = FUN_04db48b0(lVar7,iVar9,0);
            if ((sVar4 == 0x20) && (*(char *)(unaff_x21 + 0x12) != '\0')) {
              if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                thunk_FUN_02cd038c();
              }
              Newtonsoft_Json_Serialization_JsonProperty__get_ShouldDeserialize();
            }
            else {
              FUN_04db48b0(lVar7,iVar9,0);
              if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                thunk_FUN_02cd038c(*unaff_x28);
              }
              uVar6 = FUN_04f28180();
              if ((uVar6 & 1) == 0) goto LAB_04f26108;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < *(int *)(lVar7 + 0x10));
        }
        uVar8 = *(uint *)(unaff_x19 + 0x24);
        if ((uVar8 >> 0xb & 1) == 0) {
          return 1;
        }
        if ((uVar8 >> 0xd & 1) != 0) {
          uVar6 = thunk_FUN_04db8ae0(lVar7,*(undefined8 *)PTR_DAT_065f8368,0);
          uVar8 = *(uint *)(unaff_x19 + 0x24);
          if ((uVar6 & 1) != 0) goto LAB_04f25cf0;
        }
        if ((uVar8 >> 0xe & 1) == 0) {
          return 1;
        }
        uVar6 = thunk_FUN_04db8ae0(lVar7,*(undefined8 *)PTR_DAT_065cff90,0);
        if ((uVar6 & 1) == 0) {
          return 1;
        }
        uVar8 = *(uint *)(unaff_x19 + 0x24);
LAB_04f25cf0:
        *(uint *)(unaff_x19 + 0x24) = uVar8 | 0x100;
        puVar3 = PTR_DAT_065c98d0;
        lVar7 = *(long *)PTR_DAT_065c98d0;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
          lVar7 = *(long *)puVar3;
        }
        *(undefined8 *)(unaff_x19 + 0x28) = **(undefined8 **)(lVar7 + 0xb8);
        return 1;
      }
      goto LAB_04f26780;
    }
    if (in_w8 == 0x2e) {
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar6 = FUN_04f28180();
      if ((uVar6 & 1) != 0) {
        return 1;
      }
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar6 = FUN_04f27338();
      if ((uVar6 & 1) != 0) {
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar6 = FUN_04f28180();
        if ((uVar6 & 1) != 0) {
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          Newtonsoft_Json_Serialization_JsonProperty__set_Readable();
          return 1;
        }
      }
      goto LAB_04f26108;
    }
switchD_04f25a00_caseD_65:
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    puVar3 = PTR_DAT_065f8368;
    uVar6 = FUN_04f26e0c();
    if ((uVar6 & 1) == 0) {
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar6 = FUN_04f28180();
    }
    else {
      if (*(long *)puVar3 == 0) {
LAB_04f26780:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      *(int *)(unaff_x22 + 2) = (int)unaff_x22[2] + *(int *)(*(long *)puVar3 + 0x10) + -1;
      *(uint *)(unaff_x19 + 0x24) = *(uint *)(unaff_x19 + 0x24) | 0x100;
      puVar3 = PTR_DAT_065c98d0;
      lVar7 = *(long *)PTR_DAT_065c98d0;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar7 = *(long *)puVar3;
      }
      *(undefined8 *)(unaff_x19 + 0x28) = **(undefined8 **)(lVar7 + 0xb8);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar6 = FUN_04f28030();
    }
  }
  if ((uVar6 & 1) != 0) {
    return 1;
  }
LAB_04f26108:
  FUN_04f2908c();
  return 0;
}


