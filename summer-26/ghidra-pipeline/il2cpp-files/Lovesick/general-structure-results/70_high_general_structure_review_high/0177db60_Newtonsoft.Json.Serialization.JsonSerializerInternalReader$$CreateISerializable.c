/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateISerializable
ENTRY_POINT: 0177db60
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateISerializable(void)

{
  long lVar1;
  undefined8 uVar2;
  uint unaff_w19;
  long *unaff_x21;
  uint unaff_w23;
  ushort *unaff_x24;
  long unaff_x25;
  ushort *unaff_x26;
  uint unaff_w28;
  ulong *in_stack_00000008;
  uint in_stack_00000010;
  long in_stack_00000028;
  
  do {
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar1 = FUN_0177de20(unaff_x26);
    if (lVar1 == 0) goto LAB_0177dba8;
    FUN_01780048(in_stack_00000028,1,0);
    do {
      unaff_w19 = unaff_w19 | 1;
      unaff_x26 = (ushort *)(lVar1 - 2);
      while( true ) {
        do {
          unaff_x26 = unaff_x26 + 1;
          unaff_w28 = 0;
          if (unaff_x26 < unaff_x24) {
            unaff_w28 = (uint)*unaff_x26;
          }
          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
        } while (((unaff_w23 >> 1 & 1) != 0) && (unaff_w28 == 0x20 || unaff_w28 - 9 < 5));
        if (((unaff_w23 >> 3 & 1) != 0) && ((unaff_w19 & 1) == 0)) break;
LAB_0177dba8:
        if (((unaff_w28 & 0xffff) == 0x29) && ((unaff_w19 >> 1 & 1) != 0)) {
          unaff_w19 = unaff_w19 & 0xfffffffd;
        }
        else {
          if (unaff_x25 == 0) {
LAB_0177dc08:
            if ((unaff_w19 >> 1 & 1) == 0) {
              if ((unaff_w19 >> 3 & 1) == 0) {
                if ((in_stack_00000010 & 1) == 0) {
                  *(undefined4 *)(in_stack_00000028 + 4) = 0;
                }
                if ((unaff_w19 >> 4 & 1) == 0) {
                  FUN_01780048(in_stack_00000028,0,0);
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
            thunk_FUN_00d32864();
          }
          lVar1 = FUN_0177de20(unaff_x26);
          if (lVar1 == 0) goto LAB_0177dc08;
          unaff_x25 = 0;
          unaff_x26 = (ushort *)(lVar1 - 2);
        }
      }
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar1 = FUN_0177de20(unaff_x26);
    } while (lVar1 != 0);
  } while( true );
}


