/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeISerializable
ENTRY_POINT: 05012eb4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeISerializable(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  ushort *puVar6;
  undefined8 uVar7;
  uint unaff_w19;
  int unaff_w20;
  int iVar8;
  long *unaff_x21;
  uint unaff_w23;
  ushort *unaff_x24;
  long unaff_x25;
  ushort *unaff_x26;
  int unaff_w27;
  ushort *puVar9;
  uint unaff_w28;
  ulong *in_stack_00000008;
  ulong in_stack_00000010;
  int *in_stack_00000028;
  
  do {
    lVar5 = FUN_050132ac(unaff_x26);
    if (lVar5 != 0) goto LAB_05012e24;
LAB_05012ec8:
    do {
      if ((((unaff_w19 >> 4 & 1) != 0) || ((unaff_w23 >> 6 & 1) == 0)) ||
         ((unaff_w19 >> 2 & 1) == 0)) {
LAB_05012f50:
        *in_stack_00000028 = unaff_w20;
        lVar5 = FUN_05015994(in_stack_00000028,0);
        *(undefined2 *)(lVar5 + (long)unaff_w20 * 2) = 0;
        if ((unaff_w19 >> 2 & 1) == 0) goto LAB_05013260;
        if (((unaff_w28 & 0xffff | 0x20) == 0x65) && ((unaff_w23 >> 7 & 1) != 0)) {
          puVar9 = unaff_x26 + 1;
          if (puVar9 < unaff_x24) {
            unaff_w28 = (uint)*puVar9;
          }
          else {
            unaff_w28 = 0;
          }
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          puVar6 = (ushort *)FUN_050132ac(puVar9);
          if (puVar6 == (ushort *)0x0) {
            if (*(int *)(*unaff_x21 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            puVar6 = (ushort *)FUN_050132ac(puVar9);
            if (puVar6 == (ushort *)0x0) goto LAB_05013024;
            if (puVar6 < unaff_x24) {
              unaff_w28 = (uint)*puVar6;
            }
            else {
              unaff_w28 = 0;
            }
            bVar4 = true;
          }
          else if (puVar6 < unaff_x24) {
            unaff_w28 = (uint)*puVar6;
            puVar9 = puVar6;
LAB_05013024:
            bVar4 = false;
            puVar6 = puVar9;
          }
          else {
            bVar4 = false;
            unaff_w28 = 0;
          }
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          if (unaff_w28 - 0x30 < 10) {
            iVar8 = 0;
            unaff_x26 = puVar6;
            do {
              unaff_x26 = unaff_x26 + 1;
              iVar8 = iVar8 * 10 + unaff_w28 + -0x30;
              if (unaff_x26 < unaff_x24) {
                unaff_w28 = (uint)*unaff_x26;
              }
              else {
                unaff_w28 = 0;
              }
              if (1000 < iVar8) {
                while( true ) {
                  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  if (9 < unaff_w28 - 0x30) break;
                  unaff_x26 = unaff_x26 + 1;
                  unaff_w28 = 0;
                  if (unaff_x26 < unaff_x24) {
                    unaff_w28 = (uint)*unaff_x26;
                  }
                }
                iVar8 = 9999;
              }
              if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
            } while (unaff_w28 - 0x30 < 10);
            iVar2 = -iVar8;
            if (!bVar4) {
              iVar2 = iVar8;
            }
            in_stack_00000028[1] = in_stack_00000028[1] + iVar2;
          }
          else if (unaff_x26 < unaff_x24) {
            unaff_w28 = (uint)*unaff_x26;
          }
          else {
            unaff_w28 = 0;
          }
        }
        goto LAB_05013118;
      }
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      lVar5 = FUN_050132ac(unaff_x26);
      if (lVar5 == 0) {
        if (((in_stack_00000010._4_4_ ^ 1) & 1) == 0 && (unaff_w19 & 0x20) == 0) {
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          lVar5 = FUN_050132ac(unaff_x26);
          if (lVar5 != 0) goto LAB_05012f34;
        }
        goto LAB_05012f50;
      }
LAB_05012f34:
      while( true ) {
        unaff_x26 = (ushort *)(lVar5 - 2);
        while( true ) {
          unaff_x26 = unaff_x26 + 1;
          unaff_w28 = 0;
          if (unaff_x26 < unaff_x24) {
            unaff_w28 = (uint)*unaff_x26;
          }
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          if (9 < unaff_w28 - 0x30) break;
          if ((unaff_w28 == 0x30) && ((unaff_w19 >> 3 & 1) == 0)) {
            uVar3 = unaff_w19 | 4;
            uVar1 = unaff_w19 >> 4;
            unaff_w19 = uVar3;
            if ((uVar1 & 1) != 0) {
              in_stack_00000028[1] = in_stack_00000028[1] + -1;
            }
          }
          else {
            iVar8 = unaff_w27;
            if (unaff_w27 < 0x32) {
              lVar5 = FUN_05015994(in_stack_00000028,0);
              *(short *)(lVar5 + (long)unaff_w27 * 2) = (short)unaff_w28;
              iVar8 = unaff_w27 + 1;
              if (unaff_w28 != 0x30 || (in_stack_00000010 & 1) != 0) {
                unaff_w20 = unaff_w27 + 1;
              }
            }
            unaff_w27 = iVar8;
            if ((unaff_w19 >> 4 & 1) == 0) {
              in_stack_00000028[1] = in_stack_00000028[1] + 1;
            }
            unaff_w19 = unaff_w19 | 0xc;
          }
        }
        if (((unaff_w23 >> 5 & 1) == 0) || ((unaff_w19 >> 4 & 1) != 0)) goto LAB_05012ec8;
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        lVar5 = FUN_050132ac(unaff_x26);
        if (lVar5 == 0) break;
LAB_05012e24:
        unaff_w19 = unaff_w19 | 0x10;
      }
    } while (((in_stack_00000010._4_4_ ^ 1) & 1) != 0 || (unaff_w19 & 0x20) != 0);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
  } while( true );
LAB_05013118:
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  if (((unaff_w23 >> 1 & 1) == 0) || ((unaff_w28 & 0xffff) != 0x20 && 4 < (unaff_w28 & 0xffff) - 9))
  {
    if (((unaff_w23 >> 3 & 1) == 0) || ((unaff_w19 & 1) != 0)) {
LAB_050131c8:
      if (((unaff_w28 & 0xffff) == 0x29) && ((unaff_w19 >> 1 & 1) != 0)) {
        unaff_w19 = unaff_w19 & 0xfffffffd;
      }
      else {
        if (unaff_x25 == 0) {
LAB_05013228:
          if ((unaff_w19 >> 1 & 1) == 0) {
            if ((unaff_w19 >> 3 & 1) == 0) {
              if ((in_stack_00000010 & 1) == 0) {
                in_stack_00000028[1] = 0;
              }
              if ((unaff_w19 >> 4 & 1) == 0) {
                FUN_05015988(in_stack_00000028,0,0);
              }
            }
            uVar7 = 1;
          }
          else {
LAB_05013260:
            uVar7 = 0;
          }
          *in_stack_00000008 = (ulong)unaff_x26;
          return uVar7;
        }
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        lVar5 = FUN_050132ac(unaff_x26);
        if (lVar5 == 0) goto LAB_05013228;
        unaff_x25 = 0;
        unaff_x26 = (ushort *)(lVar5 - 2);
      }
    }
    else {
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      lVar5 = FUN_050132ac(unaff_x26);
      if (lVar5 == 0) {
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        lVar5 = FUN_050132ac(unaff_x26);
        if (lVar5 == 0) goto LAB_050131c8;
        FUN_05015988(in_stack_00000028,1,0);
      }
      unaff_w19 = unaff_w19 | 1;
      unaff_x26 = (ushort *)(lVar5 - 2);
    }
  }
  unaff_x26 = unaff_x26 + 1;
  unaff_w28 = 0;
  if (unaff_x26 < unaff_x24) {
    unaff_w28 = (uint)*unaff_x26;
  }
  goto LAB_05013118;
}


