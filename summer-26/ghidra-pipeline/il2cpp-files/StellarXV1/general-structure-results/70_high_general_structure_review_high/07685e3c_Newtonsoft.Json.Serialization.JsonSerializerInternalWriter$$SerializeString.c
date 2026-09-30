/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeString
ENTRY_POINT: 07685e3c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeString(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int in_w8;
  uint unaff_w19;
  int iVar4;
  long *unaff_x21;
  uint unaff_w23;
  ushort *unaff_x24;
  long unaff_x25;
  int unaff_w26;
  ushort *unaff_x27;
  uint uVar5;
  uint unaff_w29;
  ulong *in_stack_00000000;
  ulong in_stack_00000008;
  int in_stack_00000020;
  long in_stack_00000028;
  
  while( true ) {
    iVar4 = in_w8 + -0x30;
    uVar5 = unaff_w29;
    if (1000 < iVar4) {
      while( true ) {
        if (*(int *)(param_1 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          param_1 = *unaff_x21;
        }
        if (9 < unaff_w29 - 0x30) break;
        unaff_x27 = unaff_x27 + 1;
        unaff_w29 = 0;
        if (unaff_x27 < unaff_x24) {
          unaff_w29 = (uint)*unaff_x27;
        }
      }
      iVar4 = 9999;
      uVar5 = unaff_w29;
    }
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if (9 < uVar5 - 0x30) break;
    unaff_x27 = unaff_x27 + 1;
    if (unaff_x27 < unaff_x24) {
      unaff_w29 = (uint)*unaff_x27;
    }
    else {
      unaff_w29 = 0;
    }
    in_w8 = uVar5 + iVar4 * unaff_w26;
    param_1 = *unaff_x21;
  }
  iVar1 = -iVar4;
  if (in_stack_00000020 == 0) {
    iVar1 = iVar4;
  }
  *(int *)(in_stack_00000028 + 4) = *(int *)(in_stack_00000028 + 4) + iVar1;
  do {
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if (((unaff_w23 >> 1 & 1) == 0) || (uVar5 != 0x20 && uVar5 - 0xe < 0xfffffffb)) {
      if (((unaff_w23 >> 3 & 1) == 0) || ((unaff_w19 & 1) != 0)) {
LAB_07685c84:
        if ((uVar5 == 0x29) && ((unaff_w19 >> 1 & 1) != 0)) {
          unaff_w19 = unaff_w19 & 0xfffffffd;
        }
        else {
          if (unaff_x25 == 0) {
LAB_07685ce0:
            if ((unaff_w19 >> 1 & 1) == 0) {
              if ((unaff_w19 >> 3 & 1) == 0) {
                if ((in_stack_00000008 & 0x100000000) == 0) {
                  *(undefined4 *)(in_stack_00000028 + 4) = 0;
                }
                if ((unaff_w19 >> 4 & 1) == 0) {
                  FUN_0768866c(in_stack_00000028,0,0);
                }
              }
              uVar3 = 1;
            }
            else {
              uVar3 = 0;
            }
            *in_stack_00000000 = (ulong)unaff_x27;
            return uVar3;
          }
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          lVar2 = FUN_07685eec(unaff_x27);
          if (lVar2 == 0) goto LAB_07685ce0;
          unaff_x25 = 0;
          unaff_x27 = (ushort *)(lVar2 - 2);
        }
      }
      else {
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        lVar2 = FUN_07685eec(unaff_x27);
        if (lVar2 == 0) {
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          lVar2 = FUN_07685eec(unaff_x27);
          if (lVar2 == 0) goto LAB_07685c84;
          FUN_0768866c(in_stack_00000028,1,0);
        }
        unaff_w19 = unaff_w19 | 1;
        unaff_x27 = (ushort *)(lVar2 - 2);
      }
    }
    unaff_x27 = unaff_x27 + 1;
    uVar5 = 0;
    if (unaff_x27 < unaff_x24) {
      uVar5 = (uint)*unaff_x27;
    }
  } while( true );
}


