/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeMultidimensionalArray
ENTRY_POINT: 04d4e24c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray
               (long param_1)

{
  bool bVar1;
  undefined *puVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  long in_stack_00000008;
  
  puVar2 = PTR_DAT_06313aa0;
  if (param_1 == 0) goto LAB_04d4e798;
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar8 = thunk_FUN_02ba3594(PTR_DAT_063328c8);
    uVar8 = FUN_04bec328(uVar8,0);
    thunk_FUN_02ba3594(PTR_DAT_0631cbd8);
    uVar9 = thunk_FUN_02b79644();
    FUN_04cf4a4c(uVar9,uVar8,0);
    uVar8 = thunk_FUN_02ba3594(PTR_DAT_063328c0);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar9,uVar8);
  }
  uVar4 = FUN_04c045f0();
  if (*(int *)(unaff_x19 + 0x10) < 2) {
LAB_04d4e390:
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar7 = FUN_04d52cdc();
    if ((uVar7 & 1) != 0) {
      lVar10 = *(long *)puVar2;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar10 = *(long *)puVar2;
      }
      if ((*(short *)(*(long *)(lVar10 + 0xb8) + 10) == 0x5c) && (1 < *(int *)(unaff_x19 + 0x10))) {
        uVar5 = FUN_04c045f0();
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)puVar2);
        }
        uVar7 = FUN_04d53918(uVar5);
        if ((uVar7 & 1) != 0) {
          uVar5 = FUN_04c045f0();
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02b9ad44(*(long *)puVar2);
          }
          uVar7 = FUN_04d53918(uVar5);
          if ((uVar7 & 1) == 0) {
            lVar10 = FUN_04d3e684(0);
            if (lVar10 == 0) goto LAB_04d4e798;
            sVar3 = FUN_04c045f0(lVar10,1,0);
            lVar11 = *(long *)puVar2;
            if (*(int *)(lVar11 + 0xe4) == 0) {
              thunk_FUN_02b9ad44(lVar11);
              lVar11 = *(long *)puVar2;
            }
            if (*(short *)(*(long *)(lVar11 + 0xb8) + 0x18) == sVar3) {
              FUN_04c0c288(lVar10,0,2,0);
              unaff_x19 = FUN_04bffdac();
            }
            else {
              iVar6 = FUN_04c0fce0(lVar10,*(undefined8 *)PTR_DAT_0631d628,0,
                                   *(undefined4 *)(lVar10 + 0x10),0);
              uVar5 = FUN_04c0ecb4(lVar10,0x5c,iVar6 + 1,0);
              unaff_x19 = FUN_04c0c288(lVar10,0,uVar5,0);
            }
          }
        }
      }
      goto LAB_04d4e63c;
    }
    uVar7 = FUN_04dc1d34(0);
    if ((uVar7 & 1) == 0) {
      do {
        iVar6 = FUN_04c0ecb4();
        if (iVar6 == -1) {
          iVar6 = -1;
          break;
        }
        iVar6 = iVar6 + 1;
        if (iVar6 == *(int *)(unaff_x19 + 0x10)) break;
        sVar3 = FUN_04c045f0();
        lVar10 = *(long *)puVar2;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(lVar10);
          lVar10 = *(long *)puVar2;
        }
        if (*(short *)(*(long *)(lVar10 + 0xb8) + 10) == sVar3) break;
        sVar3 = FUN_04c045f0();
        lVar10 = *(long *)puVar2;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(lVar10);
          lVar10 = *(long *)puVar2;
        }
      } while (*(short *)(*(long *)(lVar10 + 0xb8) + 8) != sVar3);
      bVar1 = 0 < iVar6;
    }
    else {
      bVar1 = true;
    }
    lVar10 = FUN_04d3e684(0);
    if (lVar10 == 0) goto LAB_04d4e798;
    sVar3 = FUN_04c045f0(lVar10,*(int *)(lVar10 + 0x10) + -1,0);
    lVar11 = *(long *)puVar2;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(lVar11);
      lVar11 = *(long *)puVar2;
    }
    if (*(short *)(*(long *)(lVar11 + 0xb8) + 10) == sVar3) {
      unaff_x19 = FUN_04bffdac(lVar10);
    }
    else {
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(lVar11);
      }
      if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar8 = FUN_04cea618(*(long *)(*(long *)puVar2 + 0xb8) + 10,0);
      unaff_x19 = FUN_04c0a5c4(lVar10,uVar8);
    }
    if (bVar1) goto LAB_04d4e63c;
  }
  else {
    uVar5 = FUN_04c045f0();
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)puVar2);
    }
    uVar7 = FUN_04d53918(uVar5);
    if ((uVar7 & 1) == 0) goto LAB_04d4e390;
    uVar5 = FUN_04c045f0();
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)puVar2);
    }
    uVar7 = FUN_04d53918(uVar5);
    if ((uVar7 & 1) == 0) goto LAB_04d4e390;
    if (*(int *)(unaff_x19 + 0x10) == 2) {
LAB_04d4e7cc:
      thunk_FUN_02ba3594(PTR_DAT_0631cbd8);
      uVar9 = thunk_FUN_02b79644();
      uVar8 = thunk_FUN_02ba3594(PTR_DAT_063328d0);
      FUN_04cf4a4c(uVar9,uVar8,0);
      uVar8 = thunk_FUN_02ba3594(PTR_DAT_063328c0);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar9,uVar8);
    }
    FUN_04c045f0();
    iVar6 = FUN_04c0ecb4();
    if (iVar6 < 0) goto LAB_04d4e7cc;
    sVar3 = FUN_04c045f0();
    lVar10 = *(long *)puVar2;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(lVar10);
      lVar10 = *(long *)puVar2;
    }
    if (*(short *)(*(long *)(lVar10 + 0xb8) + 10) != sVar3) {
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(lVar10);
      }
      unaff_x19 = FUN_04c0c3d8();
    }
LAB_04d4e63c:
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    unaff_x19 = FUN_04d539a8(unaff_x19);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar7 = FUN_04d53918(uVar4);
  if ((uVar7 & 1) != 0) {
    if (unaff_x19 == 0) {
LAB_04d4e798:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    sVar3 = FUN_04c045f0(unaff_x19,*(int *)(unaff_x19 + 0x10) + -1,0);
    lVar10 = *(long *)puVar2;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(lVar10);
      lVar10 = *(long *)puVar2;
    }
    if (*(short *)(*(long *)(lVar10 + 0xb8) + 10) != sVar3) {
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(lVar10);
      }
      if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar8 = FUN_04cea618(*(long *)(*(long *)puVar2 + 0xb8) + 10,0);
      unaff_x19 = FUN_04bffdac(unaff_x19,uVar8,0);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_06329c90 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar7 = FUN_02b4526c(unaff_x19,&stack0x00000008);
  if ((uVar7 & 1) == 0) {
    in_stack_00000008 = unaff_x19;
  }
  return in_stack_00000008;
}


