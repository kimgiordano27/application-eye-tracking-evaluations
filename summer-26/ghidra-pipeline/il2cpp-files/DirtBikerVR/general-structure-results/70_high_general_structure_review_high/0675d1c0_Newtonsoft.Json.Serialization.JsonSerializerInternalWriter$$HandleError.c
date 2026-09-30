/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HandleError
ENTRY_POINT: 0675d1c0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HandleError(void)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  ushort *puVar5;
  uint unaff_w19;
  int iVar6;
  long *unaff_x21;
  uint unaff_w23;
  ushort *unaff_x24;
  long unaff_x25;
  ushort *unaff_x26;
  ushort *puVar7;
  int unaff_w27;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  ulong *in_stack_00000000;
  ulong in_stack_00000008;
  undefined8 in_stack_00000018;
  int *in_stack_00000028;
  
  do {
    while( true ) {
      puVar7 = unaff_x26 + 1;
      uVar9 = 0;
      if (puVar7 < unaff_x24) {
        uVar9 = (uint)*puVar7;
      }
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      if (9 < uVar9 - 0x30) break;
      unaff_x26 = puVar7;
      if ((uVar9 == 0x30) && ((unaff_w19 >> 3 & 1) == 0)) {
        uVar10 = unaff_w19 | 4;
        uVar9 = unaff_w19 >> 4;
        unaff_w19 = uVar10;
        if ((uVar9 & 1) != 0) {
          in_stack_00000028[1] = in_stack_00000028[1] + -1;
        }
      }
      else {
        iVar6 = unaff_w27;
        if (unaff_w27 < 0x32) {
          lVar3 = FUN_0675fcc4(in_stack_00000028,0);
          *(short *)(lVar3 + (long)unaff_w27 * 2) = (short)uVar9;
          iVar6 = unaff_w27 + 1;
          if (uVar9 != 0x30 || (in_stack_00000008 & 0x100000000) != 0) {
            in_stack_00000018._4_4_ = unaff_w27 + 1;
          }
        }
        unaff_w27 = iVar6;
        if ((unaff_w19 >> 4 & 1) == 0) {
          in_stack_00000028[1] = in_stack_00000028[1] + 1;
        }
        unaff_w19 = unaff_w19 | 0xc;
      }
    }
    if (((unaff_w23 >> 5 & 1) == 0) || ((unaff_w19 & 0x10) != 0)) {
LAB_0675d15c:
      if ((((unaff_w23 >> 6 & 1) == 0) || ((unaff_w19 >> 2 & 1) == 0)) || ((unaff_w19 & 0x10) != 0))
      {
        *in_stack_00000028 = in_stack_00000018._4_4_;
        lVar3 = FUN_0675fcc4(in_stack_00000028,0);
        *(undefined2 *)(lVar3 + (long)in_stack_00000018._4_4_ * 2) = 0;
        if ((unaff_w19 >> 2 & 1) != 0) goto LAB_0675d214;
        goto LAB_0675d364;
      }
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      lVar3 = FUN_0675d538(puVar7);
      if (lVar3 == 0) {
        if (((unaff_w23 >> 8 & 1) == 0) || ((unaff_w19 >> 5 & 1) != 0)) break;
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        lVar3 = FUN_0675d538(puVar7);
        if (lVar3 == 0) break;
      }
    }
    else {
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      lVar3 = FUN_0675d538(puVar7);
      if (lVar3 == 0) {
        if (((unaff_w23 >> 8 & 1) != 0) && ((unaff_w19 >> 5 & 1) == 0)) {
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          lVar3 = FUN_0675d538(puVar7);
          if (lVar3 != 0) goto LAB_0675d0c8;
        }
        goto LAB_0675d15c;
      }
LAB_0675d0c8:
      unaff_w19 = unaff_w19 | 0x10;
    }
    unaff_x26 = (ushort *)(lVar3 - 2);
  } while( true );
  *in_stack_00000028 = in_stack_00000018._4_4_;
  lVar3 = FUN_0675fcc4(in_stack_00000028,0);
  *(undefined2 *)(lVar3 + (long)in_stack_00000018._4_4_ * 2) = 0;
LAB_0675d214:
  if (((uVar9 | 0x20) != 0x65) || ((unaff_w23 >> 7 & 1) == 0)) goto LAB_0675d22c;
  puVar8 = unaff_x26 + 2;
  if (puVar8 < unaff_x24) {
    uVar9 = (uint)*puVar8;
  }
  else {
    uVar9 = 0;
  }
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  puVar5 = (ushort *)FUN_0675d538(puVar8);
  bVar2 = puVar5 == (ushort *)0x0;
  if (puVar5 == (ushort *)0x0) {
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    puVar5 = (ushort *)FUN_0675d538(puVar8);
    if (puVar5 == (ushort *)0x0) {
      bVar2 = false;
    }
    else {
      if (puVar5 < unaff_x24) goto LAB_0675d424;
      uVar9 = 0;
      bVar2 = true;
      puVar8 = puVar5;
    }
  }
  else if (puVar5 < unaff_x24) {
LAB_0675d424:
    uVar9 = (uint)*puVar5;
    puVar8 = puVar5;
  }
  else {
    bVar2 = false;
    uVar9 = 0;
    puVar8 = puVar5;
  }
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  if (uVar9 - 0x30 < 10) {
    iVar6 = 0;
    puVar7 = puVar8;
    do {
      puVar7 = puVar7 + 1;
      if (puVar7 < unaff_x24) {
        uVar10 = (uint)*puVar7;
      }
      else {
        uVar10 = 0;
      }
      lVar3 = *unaff_x21;
      iVar6 = uVar9 + iVar6 * 10 + -0x30;
      uVar9 = uVar10;
      if (1000 < iVar6) {
        while( true ) {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
            lVar3 = *unaff_x21;
          }
          if (9 < uVar10 - 0x30) break;
          puVar7 = puVar7 + 1;
          uVar10 = 0;
          if (puVar7 < unaff_x24) {
            uVar10 = (uint)*puVar7;
          }
        }
        iVar6 = 9999;
        uVar9 = uVar10;
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
    } while (uVar9 - 0x30 < 10);
    iVar1 = -iVar6;
    if (!bVar2) {
      iVar1 = iVar6;
    }
    in_stack_00000028[1] = in_stack_00000028[1] + iVar1;
  }
  else if (puVar7 < unaff_x24) {
    uVar9 = (uint)*puVar7;
  }
  else {
    uVar9 = 0;
  }
LAB_0675d22c:
  do {
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    if (((unaff_w23 >> 1 & 1) == 0) || (uVar9 != 0x20 && uVar9 - 0xe < 0xfffffffb)) {
      if (((unaff_w23 >> 3 & 1) == 0) || ((unaff_w19 & 1) != 0)) {
LAB_0675d2d0:
        if ((uVar9 == 0x29) && ((unaff_w19 >> 1 & 1) != 0)) {
          unaff_w19 = unaff_w19 & 0xfffffffd;
        }
        else {
          if (unaff_x25 == 0) {
LAB_0675d32c:
            if ((unaff_w19 >> 1 & 1) == 0) {
              if ((unaff_w19 >> 3 & 1) == 0) {
                if ((in_stack_00000008 & 0x100000000) == 0) {
                  in_stack_00000028[1] = 0;
                }
                if ((unaff_w19 >> 4 & 1) == 0) {
                  FUN_0675fcb8(in_stack_00000028,0,0);
                }
              }
              uVar4 = 1;
            }
            else {
LAB_0675d364:
              uVar4 = 0;
            }
            *in_stack_00000000 = (ulong)puVar7;
            return uVar4;
          }
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          lVar3 = FUN_0675d538(puVar7);
          if (lVar3 == 0) goto LAB_0675d32c;
          unaff_x25 = 0;
          puVar7 = (ushort *)(lVar3 - 2);
        }
      }
      else {
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        lVar3 = FUN_0675d538(puVar7);
        if (lVar3 == 0) {
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          lVar3 = FUN_0675d538(puVar7);
          if (lVar3 == 0) goto LAB_0675d2d0;
          FUN_0675fcb8(in_stack_00000028,1,0);
        }
        unaff_w19 = unaff_w19 | 1;
        puVar7 = (ushort *)(lVar3 - 2);
      }
    }
    puVar7 = puVar7 + 1;
    uVar9 = 0;
    if (puVar7 < unaff_x24) {
      uVar9 = (uint)*puVar7;
    }
  } while( true );
}


