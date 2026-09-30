/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$SetPropertyValue
ENTRY_POINT: 0624e9e8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetPropertyValue(undefined8 *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  ushort *puVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  ulong *unaff_x20;
  long unaff_x22;
  uint unaff_w23;
  ushort *unaff_x24;
  long unaff_x25;
  ushort *puVar11;
  int iVar12;
  int iVar13;
  ushort *puVar14;
  uint uVar15;
  uint in_stack_00000010;
  uint uStack0000000000000014;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  int *in_stack_00000028;
  
  puVar5 = PTR_DAT_07daae20;
  puVar11 = (ushort *)*unaff_x20;
  uStack0000000000000018 = *param_1;
  uStack0000000000000020 = *(undefined8 *)(unaff_x22 + 0x48);
  if (puVar11 < unaff_x24) {
    uVar15 = (uint)*puVar11;
  }
  else {
    uVar15 = 0;
  }
  uVar9 = 0;
  bVar3 = false;
  uStack0000000000000014 = unaff_w23 >> 8 & 1;
LAB_0624ea2c:
  bVar2 = false;
  bVar1 = false;
  bVar4 = false;
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  if ((((unaff_w23 & 1) == 0) || (uVar15 != 0x20 && 4 < uVar15 - 9)) ||
     (((uVar9 & 0x21) == 1 && (*(int *)(unaff_x22 + 0xbc) != 2)))) {
    if (((unaff_w23 >> 2 & 1) == 0) || ((uVar9 & 1) != 0)) {
LAB_0624eaf8:
      if ((((unaff_w23 >> 4 & 1) == 0) || (uVar15 != 0x28)) || ((uVar9 & 1) != 0)) {
        if (unaff_x25 == 0) goto LAB_0624eb70;
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        lVar6 = FUN_0624f078(puVar11);
        if (lVar6 == 0) goto LAB_0624eb70;
        unaff_x25 = 0;
        uVar9 = uVar9 | 0x20;
        puVar11 = (ushort *)(lVar6 - 2);
      }
      else {
        uVar9 = uVar9 | 3;
        bVar3 = true;
        FUN_06251754(in_stack_00000028,1,0);
      }
    }
    else {
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      lVar6 = FUN_0624f078(puVar11);
      if (lVar6 == 0) {
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        lVar6 = FUN_0624f078(puVar11);
        if (lVar6 == 0) goto LAB_0624eaf8;
        FUN_06251754(in_stack_00000028,1,0);
      }
      uVar9 = uVar9 | 1;
      puVar11 = (ushort *)(lVar6 - 2);
    }
  }
  puVar11 = puVar11 + 1;
  uVar15 = 0;
  if (puVar11 < unaff_x24) {
    uVar15 = (uint)*puVar11;
  }
  goto LAB_0624ea2c;
LAB_0624eb70:
  iVar10 = 0;
  iVar12 = 0;
  do {
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    if (uVar15 - 0x30 < 10) {
      if ((uVar15 != 0x30) || (bVar4)) {
        iVar13 = iVar12;
        if (iVar12 < 0x32) {
          lVar6 = FUN_06251760(in_stack_00000028,0);
          iVar13 = iVar12 + 1;
          *(short *)(lVar6 + (long)iVar12 * 2) = (short)uVar15;
          if (uVar15 != 0x30 || (in_stack_00000010 & 1) != 0) {
            iVar10 = iVar12 + 1;
          }
        }
        if (!bVar1) {
          in_stack_00000028[1] = in_stack_00000028[1] + 1;
        }
        bVar2 = true;
        bVar4 = true;
        iVar12 = iVar13;
      }
      else {
        bVar2 = true;
        if (bVar1) {
          in_stack_00000028[1] = in_stack_00000028[1] + -1;
        }
      }
    }
    else {
      if (((unaff_w23 >> 5 & 1) == 0) || (bVar1)) {
LAB_0624ec94:
        if (((bVar1) || ((unaff_w23 >> 6 & 1) == 0)) || (!bVar2)) break;
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        lVar6 = FUN_0624f078(puVar11);
        if (lVar6 == 0) {
          if (((uStack0000000000000014 ^ 1) & 1) != 0 || (uVar9 & 0x20) != 0) break;
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          lVar6 = FUN_0624f078(puVar11);
          if (lVar6 == 0) break;
        }
      }
      else {
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        lVar6 = FUN_0624f078(puVar11);
        if (lVar6 == 0) {
          if (((uStack0000000000000014 ^ 1) & 1) == 0 && (uVar9 & 0x20) == 0) {
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            lVar6 = FUN_0624f078(puVar11);
            if (lVar6 != 0) goto LAB_0624ebf0;
          }
          goto LAB_0624ec94;
        }
LAB_0624ebf0:
        bVar1 = true;
      }
      puVar11 = (ushort *)(lVar6 + -2);
    }
    puVar11 = puVar11 + 1;
    uVar15 = 0;
    if (puVar11 < unaff_x24) {
      uVar15 = (uint)*puVar11;
    }
  } while( true );
  *in_stack_00000028 = iVar10;
  lVar6 = FUN_06251760(in_stack_00000028,0);
  *(undefined2 *)(lVar6 + (long)iVar10 * 2) = 0;
  if (bVar2) {
    if (((uVar15 | 0x20) != 0x65) || ((unaff_w23 >> 7 & 1) == 0)) goto LAB_0624eee4;
    puVar14 = puVar11 + 1;
    if (puVar14 < unaff_x24) {
      uVar15 = (uint)*puVar14;
    }
    else {
      uVar15 = 0;
    }
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    puVar7 = (ushort *)FUN_0624f078(puVar14);
    if (puVar7 == (ushort *)0x0) {
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      puVar7 = (ushort *)FUN_0624f078(puVar14);
      if (puVar7 == (ushort *)0x0) goto LAB_0624edf0;
      if (puVar7 < unaff_x24) {
        uVar15 = (uint)*puVar7;
      }
      else {
        uVar15 = 0;
      }
      bVar2 = true;
    }
    else if (puVar7 < unaff_x24) {
      uVar15 = (uint)*puVar7;
      puVar14 = puVar7;
LAB_0624edf0:
      bVar2 = false;
      puVar7 = puVar14;
    }
    else {
      bVar2 = false;
      uVar15 = 0;
    }
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    if (uVar15 - 0x30 < 10) {
      iVar10 = 0;
      puVar11 = puVar7;
      do {
        puVar11 = puVar11 + 1;
        iVar10 = iVar10 * 10 + uVar15 + -0x30;
        if (puVar11 < unaff_x24) {
          uVar15 = (uint)*puVar11;
        }
        else {
          uVar15 = 0;
        }
        if (1000 < iVar10) {
          while( true ) {
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            if (9 < uVar15 - 0x30) break;
            puVar11 = puVar11 + 1;
            uVar15 = 0;
            if (puVar11 < unaff_x24) {
              uVar15 = (uint)*puVar11;
            }
          }
          iVar10 = 9999;
        }
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
      } while (uVar15 - 0x30 < 10);
      iVar12 = -iVar10;
      if (!bVar2) {
        iVar12 = iVar10;
      }
      in_stack_00000028[1] = in_stack_00000028[1] + iVar12;
    }
    else if (puVar11 < unaff_x24) {
      uVar15 = (uint)*puVar11;
    }
    else {
      uVar15 = 0;
    }
LAB_0624eee4:
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    if (((unaff_w23 >> 1 & 1) == 0) || (uVar15 != 0x20 && 4 < uVar15 - 9)) {
      if (((unaff_w23 >> 3 & 1) == 0) || ((uVar9 & 1) != 0)) {
LAB_0624ef94:
        if ((uVar15 == 0x29) && (bVar3)) {
          uVar9 = uVar9 & 0xfffffffd;
          bVar3 = false;
        }
        else {
          if (unaff_x25 == 0) goto LAB_0624eff4;
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          lVar6 = FUN_0624f078(puVar11);
          if (lVar6 == 0) goto LAB_0624eff4;
          unaff_x25 = 0;
          puVar11 = (ushort *)(lVar6 - 2);
        }
      }
      else {
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        lVar6 = FUN_0624f078(puVar11);
        if (lVar6 == 0) {
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          lVar6 = FUN_0624f078(puVar11);
          if (lVar6 == 0) goto LAB_0624ef94;
          FUN_06251754(in_stack_00000028,1,0);
        }
        uVar9 = uVar9 | 1;
        puVar11 = (ushort *)(lVar6 - 2);
      }
    }
    puVar11 = puVar11 + 1;
    uVar15 = 0;
    if (puVar11 < unaff_x24) {
      uVar15 = (uint)*puVar11;
    }
    goto LAB_0624eee4;
  }
  goto LAB_0624f02c;
LAB_0624eff4:
  if (!bVar3) {
    if (!bVar4) {
      if ((in_stack_00000010 & 1) == 0) {
        in_stack_00000028[1] = 0;
      }
      if (!bVar1) {
        FUN_06251754(in_stack_00000028,0,0);
      }
    }
    uVar8 = 1;
    goto LAB_0624f034;
  }
LAB_0624f02c:
  uVar8 = 0;
LAB_0624f034:
  *unaff_x20 = (ulong)puVar11;
  return uVar8;
}


