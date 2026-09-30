/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$DeserializeToken
ENTRY_POINT: 0720bf88
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Meta_WitAi_Json_JsonConvert__DeserializeToken(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70 [2];
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  int local_44;
  
  if ((DAT_0988f468 & 1) == 0) {
    FUN_04077588(PTR_DAT_092a2dd8);
    FUN_04077588(PTR_DAT_092bdda0);
    FUN_04077588(PTR_DAT_092bdda8);
    FUN_04077588(PTR_DAT_092899f8);
    FUN_04077588(PTR_DAT_09289990);
    FUN_04077588(PTR_DAT_092bc2c8);
    FUN_04077588(PTR_DAT_092bddb0);
    FUN_04077588(PTR_DAT_092bddb8);
    FUN_04077588(PTR_DAT_092bddc0);
    FUN_04077588(PTR_DAT_092858e8);
    FUN_04077588(PTR_DAT_092899c0);
    FUN_04077588(PTR_DAT_092899c8);
    FUN_04077588(PTR_DAT_092899d0);
    DAT_0988f468 = 1;
  }
  puVar6 = PTR_DAT_092bddb0;
  puVar5 = PTR_DAT_092899d0;
  puVar4 = PTR_DAT_092899c8;
  puVar3 = PTR_DAT_092899c0;
  puVar2 = PTR_DAT_09289990;
  local_44 = 0;
  lVar12 = *(long *)(param_1 + 10);
  local_48 = 0;
  local_58 = 0;
  local_50 = 0;
  local_60 = 0;
  if (*param_1 == 0) {
    local_50 = *(undefined8 *)(param_1 + 0x14);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *param_1 = -1;
    goto LAB_0720c470;
  }
  if (*param_1 == 1) {
    local_58 = *(undefined8 *)(param_1 + 0x16);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *param_1 = -1;
LAB_0720c0b0:
    FUN_07591f7c(&local_58,0);
    uVar13 = 1;
    goto LAB_0720c2f8;
  }
  uVar8 = FUN_071fb5ac(*(undefined8 *)(param_1 + 8),0);
  if ((uVar8 & 1) == 0) {
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    plVar14 = *(long **)(lVar12 + 0x130);
    uVar13 = 0;
    if (plVar14 == (long *)0x0) goto LAB_0720c2f8;
    lVar9 = *(long *)PTR_DAT_092a2dd8;
    lVar12 = *(long *)(lVar9 + 0x38);
    if (lVar12 == 0) {
      FUN_040b1b28(lVar9);
      lVar12 = *(long *)(lVar9 + 0x38);
    }
    lVar12 = *(long *)(lVar12 + 0x10);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_040b1acc();
    }
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar12 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_040b1acc();
    }
    lVar9 = *plVar14;
    uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
    uVar13 = **(undefined8 **)(lVar12 + 0xb8);
    if (uVar8 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_092bc2c8) {
          puVar10 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0720c284;
        }
        uVar8 = uVar8 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)FUN_040b1e00(plVar14,*(long *)PTR_DAT_092bc2c8,0);
LAB_0720c284:
    (*(code *)*puVar10)(plVar14,0x16,uVar13,puVar10[1]);
  }
  else {
    local_44 = thunk_FUN_075d72a8(*(undefined8 *)(param_1 + 8),4,0);
    if (local_44 == 2) {
      param_1[0xe] = 0xc;
      uVar13 = FUN_0720b844(*(undefined8 *)(param_1 + 0xc));
      *(undefined8 *)(param_1 + 0x10) = uVar13;
      thunk_FUN_040ec700();
      iVar1 = param_1[0xe];
      while( true ) {
        lVar9 = *(long *)(param_1 + 8);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(int *)(lVar9 + 0x18) <= iVar1) break;
        if (*(int *)(lVar9 + 0x18) < iVar1 + 8) {
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          plVar14 = *(long **)(lVar12 + 0x130);
          uVar13 = 0;
          if (plVar14 == (long *)0x0) goto LAB_0720c2f8;
          lVar9 = *(long *)PTR_DAT_092a2dd8;
          lVar12 = *(long *)(lVar9 + 0x38);
          if (lVar12 == 0) {
            FUN_040b1b28(lVar9);
            lVar12 = *(long *)(lVar9 + 0x38);
          }
          lVar12 = *(long *)(lVar12 + 0x10);
          if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_040b1acc();
          }
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          lVar12 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
          if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_040b1acc();
          }
          lVar9 = *plVar14;
          uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
          uVar13 = **(undefined8 **)(lVar12 + 0xb8);
          if (uVar8 == 0) goto LAB_0720c614;
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_0720c5fc;
        }
        iVar7 = thunk_FUN_075d72a8(lVar9,iVar1,0);
        iVar1 = param_1[0xe];
        param_1[0x12] = iVar7;
        param_1[0xe] = iVar1 + 4;
        local_48 = thunk_FUN_075d72a8(*(undefined8 *)(param_1 + 8),iVar1 + 4,0);
        iVar1 = param_1[0xe] + 4;
        param_1[0xe] = iVar1;
        if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if ((long)*(int *)(*(long *)(param_1 + 8) + 0x18) <
            (long)((ulong)(uint)param_1[0x12] + (long)iVar1)) {
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          plVar14 = *(long **)(lVar12 + 0x130);
          uVar13 = 0;
          if (plVar14 == (long *)0x0) goto LAB_0720c2f8;
          lVar9 = *(long *)PTR_DAT_092a2dd8;
          lVar12 = *(long *)(lVar9 + 0x38);
          if (lVar12 == 0) {
            FUN_040b1b28(lVar9);
            lVar12 = *(long *)(lVar9 + 0x38);
          }
          lVar12 = *(long *)(lVar12 + 0x10);
          if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_040b1acc();
          }
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          lVar12 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
          if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_040b1acc();
          }
          lVar9 = *plVar14;
          uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
          uVar13 = **(undefined8 **)(lVar12 + 0xb8);
          if (uVar8 == 0) goto LAB_0720c6c8;
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_0720c6b0;
        }
        if (local_48 == 0x4e4f534a) {
          plVar14 = (long *)FUN_07504868(0);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          uVar13 = (**(code **)(*plVar14 + 0x408))
                             (plVar14,*(undefined8 *)(param_1 + 8),param_1[0xe],param_1[0x12],
                              *(undefined8 *)(*plVar14 + 0x410));
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830(uVar13,uVar13);
          }
          lVar9 = FUN_071fcc14(lVar12,uVar13,*(undefined8 *)(param_1 + 0x10),0);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          local_50 = FUN_0663cf08(lVar9,*(undefined8 *)puVar5);
          uVar8 = FUN_065f0a10(&local_50,*(undefined8 *)puVar4);
          if ((uVar8 & 1) == 0) {
            *param_1 = 0;
            *(undefined8 *)(param_1 + 0x14) = local_50;
            thunk_FUN_040ec700(param_1 + 0x14,0);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            FUN_04990810(param_1 + 2,&local_50,param_1,*(undefined8 *)PTR_DAT_092bdda0);
            return;
          }
LAB_0720c470:
          uVar8 = FUN_065f0a50(&local_50,*(undefined8 *)puVar3);
          if ((uVar8 & 1) == 0) goto LAB_0720c2f4;
        }
        else {
          if (local_48 != 0x4e4942) {
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            plVar14 = *(long **)(lVar12 + 0x130);
            uVar13 = 0;
            if (plVar14 == (long *)0x0) goto LAB_0720c2f8;
            lVar12 = FUN_04077674(*(undefined8 *)PTR_DAT_092858e8,1);
            uVar13 = FUN_0769683c(&local_48,0);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (*(int *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            *(undefined8 *)(lVar12 + 0x20) = uVar13;
            thunk_FUN_040ec700();
            lVar9 = *plVar14;
            uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar8 == 0) goto LAB_0720c75c;
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            goto LAB_0720c744;
          }
          local_70[0] = 0;
          FUN_071f77e0(local_70,iVar1,(ulong)(uint)param_1[0x12],0);
          local_78 = 0;
          local_80 = 0;
          FUN_060129ac(&local_80,local_70[0],*(undefined8 *)puVar6);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          *(undefined8 *)(lVar12 + 200) = local_80;
          *(undefined4 *)(lVar12 + 0xd0) = local_78;
        }
        iVar1 = param_1[0x12] + param_1[0xe];
        param_1[0xe] = iVar1;
      }
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(long *)(lVar12 + 0xe8) != 0) {
        if ((*(char *)(lVar12 + 200) != '\0') && (lVar9 = *(long *)(lVar12 + 0x48), lVar9 != 0)) {
          uVar13 = FUN_060129c4((char *)(lVar12 + 200),*(undefined8 *)PTR_DAT_092bddc0);
          if (*(int *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          *(undefined8 *)(lVar9 + 0x20) = uVar13;
          if (*(long *)(lVar12 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          FUN_03b08cc0(*(long *)(lVar12 + 0x30),0,*(undefined8 *)(param_1 + 8));
        }
        lVar12 = FUN_071fd568(lVar12,*(undefined8 *)(param_1 + 0x10),0);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        local_58 = FUN_076f1ee4(lVar12,0);
        uVar8 = FUN_07591eb4(&local_58,0);
        if ((uVar8 & 1) == 0) {
          *param_1 = 1;
          *(undefined8 *)(param_1 + 0x16) = local_58;
          thunk_FUN_040ec700(param_1 + 0x16,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          FUN_04995cc0(param_1 + 2,&local_58,param_1,*(undefined8 *)PTR_DAT_092bdda8);
          return;
        }
        goto LAB_0720c0b0;
      }
      plVar14 = *(long **)(lVar12 + 0x130);
      uVar13 = 0;
      if (plVar14 == (long *)0x0) goto LAB_0720c2f8;
      lVar9 = *(long *)PTR_DAT_092a2dd8;
      lVar12 = *(long *)(lVar9 + 0x38);
      if (lVar12 == 0) {
        FUN_040b1b28(lVar9);
        lVar12 = *(long *)(lVar9 + 0x38);
      }
      lVar12 = *(long *)(lVar12 + 0x10);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_040b1acc();
      }
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      lVar12 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_040b1acc();
      }
      lVar9 = *plVar14;
      uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
      uVar13 = **(undefined8 **)(lVar12 + 0xb8);
      if (uVar8 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_092bc2c8) {
            puVar10 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0720c8dc;
          }
          uVar8 = uVar8 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)FUN_040b1e00(plVar14,*(long *)PTR_DAT_092bc2c8,0);
LAB_0720c8dc:
      (*(code *)*puVar10)(plVar14,10,uVar13,puVar10[1]);
    }
    else {
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      plVar14 = *(long **)(lVar12 + 0x130);
      uVar13 = 0;
      if (plVar14 == (long *)0x0) goto LAB_0720c2f8;
      lVar12 = FUN_04077674(*(undefined8 *)PTR_DAT_092858e8,1);
      uVar13 = FUN_0769683c(&local_44,0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(int *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      *(undefined8 *)(lVar12 + 0x20) = uVar13;
      thunk_FUN_040ec700();
      lVar9 = *plVar14;
      uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar8 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_092bc2c8) {
            puVar10 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0720c2a8;
          }
          uVar8 = uVar8 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)FUN_040b1e00(plVar14,*(long *)PTR_DAT_092bc2c8,0);
LAB_0720c2a8:
      (*(code *)*puVar10)(plVar14,0x17,lVar12,puVar10[1]);
    }
  }
  goto LAB_0720c2f4;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar11 = piVar11 + 4;
    if (uVar8 == 0) break;
LAB_0720c5fc:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_092bc2c8) {
      puVar10 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0720c870;
    }
  }
LAB_0720c614:
  puVar10 = (undefined8 *)FUN_040b1e00(plVar14,*(long *)PTR_DAT_092bc2c8,0);
LAB_0720c870:
  (*(code *)*puVar10)(plVar14,0xb,uVar13,puVar10[1]);
  goto LAB_0720c2f4;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar11 = piVar11 + 4;
    if (uVar8 == 0) break;
LAB_0720c6b0:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_092bc2c8) {
      puVar10 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0720c894;
    }
  }
LAB_0720c6c8:
  puVar10 = (undefined8 *)FUN_040b1e00(plVar14,*(long *)PTR_DAT_092bc2c8,0);
LAB_0720c894:
  (*(code *)*puVar10)(plVar14,0xb,uVar13,puVar10[1]);
  goto LAB_0720c2f4;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar11 = piVar11 + 4;
    if (uVar8 == 0) break;
LAB_0720c744:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_092bc2c8) {
      puVar10 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0720c8b8;
    }
  }
LAB_0720c75c:
  puVar10 = (undefined8 *)FUN_040b1e00(plVar14,*(long *)PTR_DAT_092bc2c8,0);
LAB_0720c8b8:
  (*(code *)*puVar10)(plVar14,0xc,lVar12,puVar10[1]);
LAB_0720c2f4:
  uVar13 = 0;
LAB_0720c2f8:
  puVar3 = PTR_DAT_092899f8;
  piVar11 = param_1 + 0x10;
  piVar11[0] = 0;
  piVar11[1] = 0;
  *param_1 = -2;
  thunk_FUN_040ec700(piVar11,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_065d0838(param_1 + 2,uVar13,*(undefined8 *)puVar3);
  return;
}


