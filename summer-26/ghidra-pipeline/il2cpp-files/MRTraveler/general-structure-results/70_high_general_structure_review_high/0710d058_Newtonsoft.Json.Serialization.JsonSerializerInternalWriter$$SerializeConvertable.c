/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeConvertable
ENTRY_POINT: 0710d058
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0710d098) */
/* WARNING: Removing unreachable block (ram,0x0710d0a0) */
/* WARNING: Removing unreachable block (ram,0x0710d0c0) */
/* WARNING: Removing unreachable block (ram,0x0710d0b8) */
/* WARNING: Removing unreachable block (ram,0x0710d0c4) */
/* WARNING: Removing unreachable block (ram,0x0710d0cc) */
/* WARNING: Removing unreachable block (ram,0x0710d0d8) */
/* WARNING: Removing unreachable block (ram,0x0710d0dc) */
/* WARNING: Removing unreachable block (ram,0x0710d104) */
/* WARNING: Removing unreachable block (ram,0x0710d0ec) */
/* WARNING: Removing unreachable block (ram,0x0710d0fc) */
/* WARNING: Removing unreachable block (ram,0x0710d108) */
/* WARNING: Removing unreachable block (ram,0x0710d114) */
/* WARNING: Removing unreachable block (ram,0x0710d118) */
/* WARNING: Removing unreachable block (ram,0x0710d128) */
/* WARNING: Removing unreachable block (ram,0x0710d130) */

undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeConvertable(void)

{
  long lVar1;
  undefined8 uVar2;
  uint unaff_w19;
  long *unaff_x21;
  uint unaff_w23;
  ushort *unaff_x24;
  long unaff_x25;
  ushort *unaff_x26;
  uint uVar3;
  ulong *in_stack_00000008;
  uint in_stack_00000010;
  long in_stack_00000028;
  
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  if (unaff_x26 < unaff_x24) {
    uVar3 = (uint)*unaff_x26;
  }
  else {
    uVar3 = 0;
  }
  do {
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    if (((unaff_w23 >> 1 & 1) == 0) || (uVar3 != 0x20 && 4 < uVar3 - 9)) {
      if (((unaff_w23 >> 3 & 1) == 0) || ((unaff_w19 & 1) != 0)) {
LAB_0710d210:
        if ((uVar3 == 0x29) && ((unaff_w19 >> 1 & 1) != 0)) {
          unaff_w19 = unaff_w19 & 0xfffffffd;
        }
        else {
          if (unaff_x25 == 0) {
LAB_0710d270:
            if ((unaff_w19 >> 1 & 1) == 0) {
              if ((unaff_w19 >> 3 & 1) == 0) {
                if ((in_stack_00000010 & 1) == 0) {
                  *(undefined4 *)(in_stack_00000028 + 4) = 0;
                }
                if ((unaff_w19 >> 4 & 1) == 0) {
                  FUN_0710f9d4(in_stack_00000028,0,0);
                }
              }
              uVar2 = 1;
            }
            else {
              uVar2 = 0;
            }
            *in_stack_00000008 = (ulong)unaff_x26;
            return uVar2;
          }
          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          lVar1 = FUN_0710d2f4(unaff_x26);
          if (lVar1 == 0) goto LAB_0710d270;
          unaff_x25 = 0;
          unaff_x26 = (ushort *)(lVar1 - 2);
        }
      }
      else {
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        lVar1 = FUN_0710d2f4(unaff_x26);
        if (lVar1 == 0) {
          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          lVar1 = FUN_0710d2f4(unaff_x26);
          if (lVar1 == 0) goto LAB_0710d210;
          FUN_0710f9d4(in_stack_00000028,1,0);
        }
        unaff_w19 = unaff_w19 | 1;
        unaff_x26 = (ushort *)(lVar1 - 2);
      }
    }
    unaff_x26 = unaff_x26 + 1;
    uVar3 = 0;
    if (unaff_x26 < unaff_x24) {
      uVar3 = (uint)*unaff_x26;
    }
  } while( true );
}


