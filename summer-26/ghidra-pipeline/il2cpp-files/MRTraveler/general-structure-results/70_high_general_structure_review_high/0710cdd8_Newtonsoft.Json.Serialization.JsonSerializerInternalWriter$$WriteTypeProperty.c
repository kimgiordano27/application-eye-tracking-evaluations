/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteTypeProperty
ENTRY_POINT: 0710cdd8
PROGRAM: MRTraveler-libil2cpp.so
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
  uint uVar1;
  bool bVar2;
  long lVar3;
  ushort *puVar4;
  undefined8 uVar5;
  uint unaff_w19;
  int iVar6;
  long *unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  ushort *unaff_x24;
  long unaff_x25;
  ushort *unaff_x26;
  uint unaff_w27;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  uint uVar10;
  ulong *in_stack_00000008;
  ulong in_stack_00000010;
  int *in_stack_00000028;
  
  do {
    uVar10 = 0;
    if (unaff_x26 < unaff_x24) {
      uVar10 = (uint)*unaff_x26;
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    if ((((unaff_w23 & 1) == 0) || (uVar10 != 0x20 && 4 < uVar10 - 9)) ||
       (((unaff_w19 & unaff_w27) == 1 && (*(int *)(unaff_x22 + 0xbc) != 2)))) {
      if (((unaff_w23 >> 2 & 1) == 0) || ((unaff_w19 & 1) != 0)) {
LAB_0710cd74:
        if ((((unaff_w23 >> 4 & 1) == 0) || (uVar10 != 0x28)) || ((unaff_w19 & 1) != 0)) {
          if (unaff_x25 == 0) break;
          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          lVar3 = FUN_0710d2f4(unaff_x26);
          if (lVar3 == 0) break;
          unaff_x25 = 0;
          unaff_w19 = unaff_w19 | 0x20;
          unaff_x26 = (ushort *)(lVar3 + -2);
        }
        else {
          unaff_w19 = unaff_w19 | 3;
          FUN_0710f9d4(in_stack_00000028,1,0);
        }
      }
      else {
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        lVar3 = FUN_0710d2f4(unaff_x26);
        if (lVar3 == 0) {
          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          lVar3 = FUN_0710d2f4(unaff_x26);
          if (lVar3 == 0) goto LAB_0710cd74;
          FUN_0710f9d4(in_stack_00000028,1,0);
        }
        unaff_w19 = unaff_w19 | 1;
        unaff_x26 = (ushort *)(lVar3 + -2);
      }
    }
    unaff_x26 = unaff_x26 + 1;
  } while( true );
  iVar6 = 0;
  iVar7 = 0;
  do {
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    if (uVar10 - 0x30 < 10) {
      if ((uVar10 == 0x30) && ((unaff_w19 >> 3 & 1) == 0)) {
        uVar1 = unaff_w19 | 4;
        uVar10 = unaff_w19 >> 4;
        unaff_w19 = uVar1;
        if ((uVar10 & 1) != 0) {
          in_stack_00000028[1] = in_stack_00000028[1] + -1;
        }
      }
      else {
        iVar8 = iVar7;
        if (iVar7 < 0x32) {
          lVar3 = FUN_0710f9e0(in_stack_00000028,0);
          iVar8 = iVar7 + 1;
          *(short *)(lVar3 + (long)iVar7 * 2) = (short)uVar10;
          if (uVar10 != 0x30 || (in_stack_00000010 & 1) != 0) {
            iVar6 = iVar7 + 1;
          }
        }
        if ((unaff_w19 >> 4 & 1) == 0) {
          in_stack_00000028[1] = in_stack_00000028[1] + 1;
        }
        unaff_w19 = unaff_w19 | 0xc;
        iVar7 = iVar8;
      }
    }
    else {
      if (((unaff_w23 >> 5 & 1) == 0) || ((unaff_w19 >> 4 & 1) != 0)) {
LAB_0710cf10:
        if ((((unaff_w19 >> 4 & 1) != 0) || ((unaff_w23 >> 6 & 1) == 0)) ||
           ((unaff_w19 >> 2 & 1) == 0)) break;
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        lVar3 = FUN_0710d2f4(unaff_x26);
        if (lVar3 == 0) {
          if (((in_stack_00000010._4_4_ ^ 1) & 1) != 0 || (unaff_w19 & 0x20) != 0) break;
          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          lVar3 = FUN_0710d2f4(unaff_x26);
          if (lVar3 == 0) break;
        }
      }
      else {
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        lVar3 = FUN_0710d2f4(unaff_x26);
        if (lVar3 == 0) {
          if (((in_stack_00000010._4_4_ ^ 1) & 1) == 0 && (unaff_w19 & 0x20) == 0) {
            if (*(int *)(*unaff_x21 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            lVar3 = FUN_0710d2f4(unaff_x26);
            if (lVar3 != 0) goto LAB_0710ce6c;
          }
          goto LAB_0710cf10;
        }
LAB_0710ce6c:
        unaff_w19 = unaff_w19 | 0x10;
      }
      unaff_x26 = (ushort *)(lVar3 + -2);
    }
    unaff_x26 = unaff_x26 + 1;
    uVar10 = 0;
    if (unaff_x26 < unaff_x24) {
      uVar10 = (uint)*unaff_x26;
    }
  } while( true );
  *in_stack_00000028 = iVar6;
  lVar3 = FUN_0710f9e0(in_stack_00000028,0);
  *(undefined2 *)(lVar3 + (long)iVar6 * 2) = 0;
  if ((unaff_w19 >> 2 & 1) != 0) {
    if (((uVar10 | 0x20) != 0x65) || ((unaff_w23 >> 7 & 1) == 0)) goto LAB_0710d160;
    puVar9 = unaff_x26 + 1;
    if (puVar9 < unaff_x24) {
      uVar10 = (uint)*puVar9;
    }
    else {
      uVar10 = 0;
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    puVar4 = (ushort *)FUN_0710d2f4(puVar9);
    if (puVar4 == (ushort *)0x0) {
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      puVar4 = (ushort *)FUN_0710d2f4(puVar9);
      if (puVar4 == (ushort *)0x0) goto LAB_0710d06c;
      if (puVar4 < unaff_x24) {
        uVar10 = (uint)*puVar4;
      }
      else {
        uVar10 = 0;
      }
      bVar2 = true;
    }
    else if (puVar4 < unaff_x24) {
      uVar10 = (uint)*puVar4;
      puVar9 = puVar4;
LAB_0710d06c:
      bVar2 = false;
      puVar4 = puVar9;
    }
    else {
      bVar2 = false;
      uVar10 = 0;
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    if (uVar10 - 0x30 < 10) {
      iVar6 = 0;
      unaff_x26 = puVar4;
      do {
        unaff_x26 = unaff_x26 + 1;
        iVar6 = iVar6 * 10 + uVar10 + -0x30;
        if (unaff_x26 < unaff_x24) {
          uVar10 = (uint)*unaff_x26;
        }
        else {
          uVar10 = 0;
        }
        if (1000 < iVar6) {
          while( true ) {
            if (*(int *)(*unaff_x21 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            if (9 < uVar10 - 0x30) break;
            unaff_x26 = unaff_x26 + 1;
            uVar10 = 0;
            if (unaff_x26 < unaff_x24) {
              uVar10 = (uint)*unaff_x26;
            }
          }
          iVar6 = 9999;
        }
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
      } while (uVar10 - 0x30 < 10);
      iVar7 = -iVar6;
      if (!bVar2) {
        iVar7 = iVar6;
      }
      in_stack_00000028[1] = in_stack_00000028[1] + iVar7;
    }
    else if (unaff_x26 < unaff_x24) {
      uVar10 = (uint)*unaff_x26;
    }
    else {
      uVar10 = 0;
    }
LAB_0710d160:
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    if (((unaff_w23 >> 1 & 1) == 0) || (uVar10 != 0x20 && 4 < uVar10 - 9)) {
      if (((unaff_w23 >> 3 & 1) == 0) || ((unaff_w19 & 1) != 0)) {
LAB_0710d210:
        if ((uVar10 == 0x29) && ((unaff_w19 >> 1 & 1) != 0)) {
          unaff_w19 = unaff_w19 & 0xfffffffd;
        }
        else {
          if (unaff_x25 == 0) goto LAB_0710d270;
          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          lVar3 = FUN_0710d2f4(unaff_x26);
          if (lVar3 == 0) goto LAB_0710d270;
          unaff_x25 = 0;
          unaff_x26 = (ushort *)(lVar3 - 2);
        }
      }
      else {
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        lVar3 = FUN_0710d2f4(unaff_x26);
        if (lVar3 == 0) {
          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          lVar3 = FUN_0710d2f4(unaff_x26);
          if (lVar3 == 0) goto LAB_0710d210;
          FUN_0710f9d4(in_stack_00000028,1,0);
        }
        unaff_w19 = unaff_w19 | 1;
        unaff_x26 = (ushort *)(lVar3 - 2);
      }
    }
    unaff_x26 = unaff_x26 + 1;
    uVar10 = 0;
    if (unaff_x26 < unaff_x24) {
      uVar10 = (uint)*unaff_x26;
    }
    goto LAB_0710d160;
  }
  goto LAB_0710d2a8;
LAB_0710d270:
  if ((unaff_w19 >> 1 & 1) == 0) {
    if ((unaff_w19 >> 3 & 1) == 0) {
      if ((in_stack_00000010 & 1) == 0) {
        in_stack_00000028[1] = 0;
      }
      if ((unaff_w19 >> 4 & 1) == 0) {
        FUN_0710f9d4(in_stack_00000028,0,0);
      }
    }
    uVar5 = 1;
    goto LAB_0710d2b0;
  }
LAB_0710d2a8:
  uVar5 = 0;
LAB_0710d2b0:
  *in_stack_00000008 = (ulong)unaff_x26;
  return uVar5;
}


