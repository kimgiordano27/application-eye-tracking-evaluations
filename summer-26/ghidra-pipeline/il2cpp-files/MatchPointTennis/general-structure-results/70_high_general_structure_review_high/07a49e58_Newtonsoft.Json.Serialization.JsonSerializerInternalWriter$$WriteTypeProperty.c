/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteTypeProperty
ENTRY_POINT: 07a49e58
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteTypeProperty(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  ushort *puVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  long unaff_x21;
  long *plVar10;
  long unaff_x22;
  uint unaff_w23;
  ushort *unaff_x24;
  long unaff_x25;
  ushort *unaff_x26;
  int iVar11;
  int iVar12;
  ushort *puVar13;
  uint unaff_w28;
  ulong *in_stack_00000008;
  uint in_stack_00000010;
  uint uStack0000000000000014;
  int *in_stack_00000028;
  
  plVar10 = *(long **)(unaff_x21 + 0xbf0);
  uVar8 = 0;
  bVar3 = false;
  uStack0000000000000014 = unaff_w23 >> 8 & 1;
LAB_07a49e6c:
  bVar2 = false;
  bVar1 = false;
  bVar4 = false;
  if (*(int *)(*plVar10 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  if ((((unaff_w23 & 1) == 0) || ((unaff_w28 & 0xffff) != 0x20 && 4 < (unaff_w28 & 0xffff) - 9)) ||
     (((uVar8 & 0x21) == 1 && (*(int *)(unaff_x22 + 0xbc) != 2)))) {
    if (((unaff_w23 >> 2 & 1) == 0) || ((uVar8 & 1) != 0)) {
LAB_07a49f38:
      if ((((unaff_w23 >> 4 & 1) == 0) || ((unaff_w28 & 0xffff) != 0x28)) || ((uVar8 & 1) != 0)) {
        if (unaff_x25 == 0) goto LAB_07a49fb0;
        if (*(int *)(*plVar10 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        lVar5 = FUN_07a4a4b8(unaff_x26);
        if (lVar5 == 0) goto LAB_07a49fb0;
        unaff_x25 = 0;
        uVar8 = uVar8 | 0x20;
        unaff_x26 = (ushort *)(lVar5 - 2);
      }
      else {
        uVar8 = uVar8 | 3;
        bVar3 = true;
        FUN_07a4cb94(in_stack_00000028,1,0);
      }
    }
    else {
      if (*(int *)(*plVar10 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      lVar5 = FUN_07a4a4b8(unaff_x26);
      if (lVar5 == 0) {
        if (*(int *)(*plVar10 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        lVar5 = FUN_07a4a4b8(unaff_x26);
        if (lVar5 == 0) goto LAB_07a49f38;
        FUN_07a4cb94(in_stack_00000028,1,0);
      }
      uVar8 = uVar8 | 1;
      unaff_x26 = (ushort *)(lVar5 - 2);
    }
  }
  unaff_x26 = unaff_x26 + 1;
  unaff_w28 = 0;
  if (unaff_x26 < unaff_x24) {
    unaff_w28 = (uint)*unaff_x26;
  }
  goto LAB_07a49e6c;
LAB_07a49fb0:
  iVar9 = 0;
  iVar11 = 0;
  do {
    if (*(int *)(*plVar10 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    if ((unaff_w28 & 0xffff) - 0x30 < 10) {
      if (((unaff_w28 & 0xffff) != 0x30) || (bVar4)) {
        iVar12 = iVar11;
        if (iVar11 < 0x32) {
          lVar5 = FUN_07a4cba0(in_stack_00000028,0);
          iVar12 = iVar11 + 1;
          *(short *)(lVar5 + (long)iVar11 * 2) = (short)unaff_w28;
          if ((unaff_w28 & 0xffff) != 0x30 || (in_stack_00000010 & 1) != 0) {
            iVar9 = iVar11 + 1;
          }
        }
        if (!bVar1) {
          in_stack_00000028[1] = in_stack_00000028[1] + 1;
        }
        bVar2 = true;
        bVar4 = true;
        iVar11 = iVar12;
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
LAB_07a4a0d4:
        if (((bVar1) || ((unaff_w23 >> 6 & 1) == 0)) || (!bVar2)) break;
        if (*(int *)(*plVar10 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        lVar5 = FUN_07a4a4b8(unaff_x26);
        if (lVar5 == 0) {
          if (((uStack0000000000000014 ^ 1) & 1) != 0 || (uVar8 & 0x20) != 0) break;
          if (*(int *)(*plVar10 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          lVar5 = FUN_07a4a4b8(unaff_x26);
          if (lVar5 == 0) break;
        }
      }
      else {
        if (*(int *)(*plVar10 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        lVar5 = FUN_07a4a4b8(unaff_x26);
        if (lVar5 == 0) {
          if (((uStack0000000000000014 ^ 1) & 1) == 0 && (uVar8 & 0x20) == 0) {
            if (*(int *)(*plVar10 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            lVar5 = FUN_07a4a4b8(unaff_x26);
            if (lVar5 != 0) goto LAB_07a4a030;
          }
          goto LAB_07a4a0d4;
        }
LAB_07a4a030:
        bVar1 = true;
      }
      unaff_x26 = (ushort *)(lVar5 + -2);
    }
    unaff_x26 = unaff_x26 + 1;
    unaff_w28 = 0;
    if (unaff_x26 < unaff_x24) {
      unaff_w28 = (uint)*unaff_x26;
    }
  } while( true );
  *in_stack_00000028 = iVar9;
  lVar5 = FUN_07a4cba0(in_stack_00000028,0);
  *(undefined2 *)(lVar5 + (long)iVar9 * 2) = 0;
  if (bVar2) {
    if (((unaff_w28 & 0xffff | 0x20) != 0x65) || ((unaff_w23 >> 7 & 1) == 0)) goto LAB_07a4a324;
    puVar13 = unaff_x26 + 1;
    if (puVar13 < unaff_x24) {
      unaff_w28 = (uint)*puVar13;
    }
    else {
      unaff_w28 = 0;
    }
    if (*(int *)(*plVar10 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    puVar6 = (ushort *)FUN_07a4a4b8(puVar13);
    if (puVar6 == (ushort *)0x0) {
      if (*(int *)(*plVar10 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      puVar6 = (ushort *)FUN_07a4a4b8(puVar13);
      if (puVar6 == (ushort *)0x0) goto LAB_07a4a230;
      if (puVar6 < unaff_x24) {
        unaff_w28 = (uint)*puVar6;
      }
      else {
        unaff_w28 = 0;
      }
      bVar2 = true;
    }
    else if (puVar6 < unaff_x24) {
      unaff_w28 = (uint)*puVar6;
      puVar13 = puVar6;
LAB_07a4a230:
      bVar2 = false;
      puVar6 = puVar13;
    }
    else {
      bVar2 = false;
      unaff_w28 = 0;
    }
    if (*(int *)(*plVar10 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    if (unaff_w28 - 0x30 < 10) {
      iVar9 = 0;
      unaff_x26 = puVar6;
      do {
        unaff_x26 = unaff_x26 + 1;
        iVar9 = iVar9 * 10 + unaff_w28 + -0x30;
        if (unaff_x26 < unaff_x24) {
          unaff_w28 = (uint)*unaff_x26;
        }
        else {
          unaff_w28 = 0;
        }
        if (1000 < iVar9) {
          while( true ) {
            if (*(int *)(*plVar10 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            if (9 < unaff_w28 - 0x30) break;
            unaff_x26 = unaff_x26 + 1;
            unaff_w28 = 0;
            if (unaff_x26 < unaff_x24) {
              unaff_w28 = (uint)*unaff_x26;
            }
          }
          iVar9 = 9999;
        }
        if (*(int *)(*plVar10 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
      } while (unaff_w28 - 0x30 < 10);
      iVar11 = -iVar9;
      if (!bVar2) {
        iVar11 = iVar9;
      }
      in_stack_00000028[1] = in_stack_00000028[1] + iVar11;
    }
    else if (unaff_x26 < unaff_x24) {
      unaff_w28 = (uint)*unaff_x26;
    }
    else {
      unaff_w28 = 0;
    }
LAB_07a4a324:
    if (*(int *)(*plVar10 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    if (((unaff_w23 >> 1 & 1) == 0) ||
       ((unaff_w28 & 0xffff) != 0x20 && 4 < (unaff_w28 & 0xffff) - 9)) {
      if (((unaff_w23 >> 3 & 1) == 0) || ((uVar8 & 1) != 0)) {
LAB_07a4a3d4:
        if (((unaff_w28 & 0xffff) == 0x29) && (bVar3)) {
          uVar8 = uVar8 & 0xfffffffd;
          bVar3 = false;
        }
        else {
          if (unaff_x25 == 0) goto LAB_07a4a434;
          if (*(int *)(*plVar10 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          lVar5 = FUN_07a4a4b8(unaff_x26);
          if (lVar5 == 0) goto LAB_07a4a434;
          unaff_x25 = 0;
          unaff_x26 = (ushort *)(lVar5 - 2);
        }
      }
      else {
        if (*(int *)(*plVar10 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        lVar5 = FUN_07a4a4b8(unaff_x26);
        if (lVar5 == 0) {
          if (*(int *)(*plVar10 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          lVar5 = FUN_07a4a4b8(unaff_x26);
          if (lVar5 == 0) goto LAB_07a4a3d4;
          FUN_07a4cb94(in_stack_00000028,1,0);
        }
        uVar8 = uVar8 | 1;
        unaff_x26 = (ushort *)(lVar5 - 2);
      }
    }
    unaff_x26 = unaff_x26 + 1;
    unaff_w28 = 0;
    if (unaff_x26 < unaff_x24) {
      unaff_w28 = (uint)*unaff_x26;
    }
    goto LAB_07a4a324;
  }
  goto LAB_07a4a46c;
LAB_07a4a434:
  if (!bVar3) {
    if (!bVar4) {
      if ((in_stack_00000010 & 1) == 0) {
        in_stack_00000028[1] = 0;
      }
      if (!bVar1) {
        FUN_07a4cb94(in_stack_00000028,0,0);
      }
    }
    uVar7 = 1;
    goto LAB_07a4a474;
  }
LAB_07a4a46c:
  uVar7 = 0;
LAB_07a4a474:
  *in_stack_00000008 = (ulong)unaff_x26;
  return uVar7;
}


