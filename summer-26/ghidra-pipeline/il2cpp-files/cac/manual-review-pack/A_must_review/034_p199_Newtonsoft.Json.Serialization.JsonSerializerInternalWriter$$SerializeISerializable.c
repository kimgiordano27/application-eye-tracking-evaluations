/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeISerializable
ENTRY_POINT: 074c1cd4
PROGRAM: cac-libil2cpp.so
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
  int iVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  ushort *puVar5;
  int in_w8;
  uint unaff_w19;
  int iVar6;
  long *unaff_x21;
  uint unaff_w23;
  ushort *unaff_x24;
  long unaff_x25;
  ushort *unaff_x26;
  ushort *puVar7;
  uint unaff_w28;
  uint uVar8;
  ulong *in_stack_00000000;
  ulong in_stack_00000008;
  long in_stack_00000028;
  
  if ((in_w8 != 0x65) || ((unaff_w23 >> 7 & 1) == 0)) goto LAB_074c1ce8;
  puVar7 = unaff_x26 + 1;
  if (puVar7 < unaff_x24) {
    unaff_w28 = (uint)*puVar7;
  }
  else {
    unaff_w28 = 0;
  }
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
  }
  puVar5 = (ushort *)FUN_074c1ff4(puVar7);
  bVar2 = puVar5 == (ushort *)0x0;
  if (puVar5 == (ushort *)0x0) {
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    puVar5 = (ushort *)FUN_074c1ff4(puVar7);
    if (puVar5 == (ushort *)0x0) {
      bVar2 = false;
    }
    else {
      if (puVar5 < unaff_x24) goto LAB_074c1ee0;
      unaff_w28 = 0;
      bVar2 = true;
      puVar7 = puVar5;
    }
  }
  else if (puVar5 < unaff_x24) {
LAB_074c1ee0:
    unaff_w28 = (uint)*puVar5;
    puVar7 = puVar5;
  }
  else {
    bVar2 = false;
    unaff_w28 = 0;
    puVar7 = puVar5;
  }
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
  }
                    /* try { // try from 074c1f10 to 075c1f23 has its CatchHandler @ 074c20c8 */
  if (unaff_w28 - 0x30 < 10) {
    iVar6 = 0;
    unaff_x26 = puVar7;
    do {
                    /* try { // try from 074c1f24 to 075c1f2b has its CatchHandler @ 074c20c4 */
      unaff_x26 = unaff_x26 + 1;
                    /* try { // try from 074c1f2c to 075c1f67 has its CatchHandler @ 074c1e40 */
      if (unaff_x26 < unaff_x24) {
        uVar8 = (uint)*unaff_x26;
      }
      else {
        uVar8 = 0;
      }
      lVar3 = *unaff_x21;
      iVar6 = unaff_w28 + iVar6 * 10 + -0x30;
      unaff_w28 = uVar8;
      if (1000 < iVar6) {
        while( true ) {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
            lVar3 = *unaff_x21;
          }
                    /* try { // try from 074c1f68 to 075c1f73 has its CatchHandler @ 074c2054 */
          if (9 < uVar8 - 0x30) break;
          unaff_x26 = unaff_x26 + 1;
          uVar8 = 0;
                    /* try { // try from 074c1f74 to 075c206b has its CatchHandler @ 074c1e40 */
          if (unaff_x26 < unaff_x24) {
            uVar8 = (uint)*unaff_x26;
          }
        }
        iVar6 = 9999;
        unaff_w28 = uVar8;
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
    } while (unaff_w28 - 0x30 < 10);
    iVar1 = -iVar6;
    if (!bVar2) {
      iVar1 = iVar6;
    }
    *(int *)(in_stack_00000028 + 4) = *(int *)(in_stack_00000028 + 4) + iVar1;
  }
  else if (unaff_x26 < unaff_x24) {
    unaff_w28 = (uint)*unaff_x26;
  }
  else {
    unaff_w28 = 0;
  }
LAB_074c1ce8:
  do {
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    if (((unaff_w23 >> 1 & 1) == 0) || (unaff_w28 != 0x20 && unaff_w28 - 0xe < 0xfffffffb)) {
      if (((unaff_w23 >> 3 & 1) == 0) || ((unaff_w19 & 1) != 0)) {
LAB_074c1d8c:
        if ((unaff_w28 == 0x29) && ((unaff_w19 >> 1 & 1) != 0)) {
          unaff_w19 = unaff_w19 & 0xfffffffd;
        }
        else {
          if (unaff_x25 == 0) {
LAB_074c1de8:
            if ((unaff_w19 >> 1 & 1) == 0) {
              if ((unaff_w19 >> 3 & 1) == 0) {
                if ((in_stack_00000008 & 0x100000000) == 0) {
                  *(undefined4 *)(in_stack_00000028 + 4) = 0;
                }
                if ((unaff_w19 >> 4 & 1) == 0) {
                  FUN_074c4774(in_stack_00000028,0,0);
                }
              }
              uVar4 = 1;
            }
            else {
              uVar4 = 0;
            }
            *in_stack_00000000 = (ulong)unaff_x26;
                    /* try { // try from 074c1e40 to 075c1f0f has its CatchHandler @ 074c1e40
                       catch() { ... } // from try @ 074c1e40 with catch @ 074c1e40
                       catch() { ... } // from try @ 074c1f2c with catch @ 074c1e40
                       catch() { ... } // from try @ 074c1f74 with catch @ 074c1e40
                       catch() { ... } // from try @ 074c2084 with catch @ 074c1e40
                       catch() { ... } // from try @ 074c20c0 with catch @ 074c1e40
                       catch() { ... } // from try @ 074c20f8 with catch @ 074c1e40
                       catch() { ... } // from try @ 074c2130 with catch @ 074c1e40 */
            return uVar4;
          }
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          lVar3 = FUN_074c1ff4(unaff_x26);
          if (lVar3 == 0) goto LAB_074c1de8;
          unaff_x25 = 0;
          unaff_x26 = (ushort *)(lVar3 - 2);
        }
      }
      else {
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        lVar3 = FUN_074c1ff4(unaff_x26);
        if (lVar3 == 0) {
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          lVar3 = FUN_074c1ff4(unaff_x26);
          if (lVar3 == 0) goto LAB_074c1d8c;
          FUN_074c4774(in_stack_00000028,1,0);
        }
        unaff_w19 = unaff_w19 | 1;
        unaff_x26 = (ushort *)(lVar3 - 2);
      }
    }
    unaff_x26 = unaff_x26 + 1;
    unaff_w28 = 0;
    if (unaff_x26 < unaff_x24) {
      unaff_w28 = (uint)*unaff_x26;
    }
  } while( true );
}


