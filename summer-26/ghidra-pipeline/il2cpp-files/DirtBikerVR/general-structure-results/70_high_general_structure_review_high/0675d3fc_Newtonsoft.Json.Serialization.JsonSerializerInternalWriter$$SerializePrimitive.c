/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializePrimitive
ENTRY_POINT: 0675d3fc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_20;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializePrimitive(void)

{
  int iVar1;
  undefined8 uVar2;
  ushort *puVar3;
  long lVar4;
  int in_w8;
  uint unaff_w19;
  int unaff_w20;
  int iVar5;
  long *unaff_x21;
  uint unaff_w23;
  ushort *unaff_x24;
  long unaff_x25;
  ushort *unaff_x26;
  uint unaff_w28;
  uint uVar6;
  ushort *unaff_x29;
  ulong *in_stack_00000000;
  ulong in_stack_00000008;
  long in_stack_00000028;
  
  if (in_w8 == 0) {
    thunk_FUN_03ae8be4();
  }
  puVar3 = (ushort *)FUN_0675d538();
  if (puVar3 == (ushort *)0x0) {
    unaff_w20 = 0;
  }
  else {
    unaff_x29 = puVar3;
    if (puVar3 < unaff_x24) {
      unaff_w28 = (uint)*puVar3;
    }
    else {
      unaff_w28 = 0;
      unaff_w20 = 1;
    }
  }
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  if (unaff_w28 - 0x30 < 10) {
    iVar5 = 0;
    unaff_x26 = unaff_x29;
    do {
      unaff_x26 = unaff_x26 + 1;
      if (unaff_x26 < unaff_x24) {
        uVar6 = (uint)*unaff_x26;
      }
      else {
        uVar6 = 0;
      }
      lVar4 = *unaff_x21;
      iVar5 = unaff_w28 + iVar5 * 10 + -0x30;
      unaff_w28 = uVar6;
      if (1000 < iVar5) {
        while( true ) {
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
            lVar4 = *unaff_x21;
          }
          if (9 < uVar6 - 0x30) break;
          unaff_x26 = unaff_x26 + 1;
          uVar6 = 0;
          if (unaff_x26 < unaff_x24) {
            uVar6 = (uint)*unaff_x26;
          }
        }
        iVar5 = 9999;
        unaff_w28 = uVar6;
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
    } while (unaff_w28 - 0x30 < 10);
    iVar1 = -iVar5;
    if (unaff_w20 == 0) {
      iVar1 = iVar5;
    }
    *(int *)(in_stack_00000028 + 4) = *(int *)(in_stack_00000028 + 4) + iVar1;
  }
  else if (unaff_x26 < unaff_x24) {
    unaff_w28 = (uint)*unaff_x26;
  }
  else {
    unaff_w28 = 0;
  }
  do {
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    if (((unaff_w23 >> 1 & 1) == 0) || (unaff_w28 != 0x20 && unaff_w28 - 0xe < 0xfffffffb)) {
      if (((unaff_w23 >> 3 & 1) == 0) || ((unaff_w19 & 1) != 0)) {
LAB_0675d2d0:
        if ((unaff_w28 == 0x29) && ((unaff_w19 >> 1 & 1) != 0)) {
          unaff_w19 = unaff_w19 & 0xfffffffd;
        }
        else {
          if (unaff_x25 == 0) {
LAB_0675d32c:
            if ((unaff_w19 >> 1 & 1) == 0) {
              if ((unaff_w19 >> 3 & 1) == 0) {
                if ((in_stack_00000008 & 0x100000000) == 0) {
                  *(undefined4 *)(in_stack_00000028 + 4) = 0;
                }
                if ((unaff_w19 >> 4 & 1) == 0) {
                  FUN_0675fcb8(in_stack_00000028,0,0);
                }
              }
              uVar2 = 1;
            }
            else {
              uVar2 = 0;
            }
            *in_stack_00000000 = (ulong)unaff_x26;
            return uVar2;
          }
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          lVar4 = FUN_0675d538(unaff_x26);
          if (lVar4 == 0) goto LAB_0675d32c;
          unaff_x25 = 0;
          unaff_x26 = (ushort *)(lVar4 - 2);
        }
      }
      else {
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        lVar4 = FUN_0675d538(unaff_x26);
        if (lVar4 == 0) {
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          lVar4 = FUN_0675d538(unaff_x26);
          if (lVar4 == 0) goto LAB_0675d2d0;
          FUN_0675fcb8(in_stack_00000028,1,0);
        }
        unaff_w19 = unaff_w19 | 1;
        unaff_x26 = (ushort *)(lVar4 - 2);
      }
    }
    unaff_x26 = unaff_x26 + 1;
    unaff_w28 = 0;
    if (unaff_x26 < unaff_x24) {
      unaff_w28 = (uint)*unaff_x26;
    }
  } while( true );
}


