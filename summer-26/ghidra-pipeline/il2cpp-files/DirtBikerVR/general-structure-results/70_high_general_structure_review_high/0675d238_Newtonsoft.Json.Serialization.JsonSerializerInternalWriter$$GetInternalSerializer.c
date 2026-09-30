/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetInternalSerializer
ENTRY_POINT: 0675d238
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetInternalSerializer(void)

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
  ulong *in_stack_00000000;
  ulong in_stack_00000008;
  long in_stack_00000028;
  
  do {
    thunk_FUN_03ae8be4();
    do {
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
            lVar1 = FUN_0675d538(unaff_x26);
            if (lVar1 == 0) goto LAB_0675d32c;
            unaff_x25 = 0;
            unaff_x26 = (ushort *)(lVar1 - 2);
          }
        }
        else {
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          lVar1 = FUN_0675d538(unaff_x26);
          if (lVar1 == 0) {
            if (*(int *)(*unaff_x21 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            lVar1 = FUN_0675d538(unaff_x26);
            if (lVar1 == 0) goto LAB_0675d2d0;
            FUN_0675fcb8(in_stack_00000028,1,0);
          }
          unaff_w19 = unaff_w19 | 1;
          unaff_x26 = (ushort *)(lVar1 - 2);
        }
      }
      unaff_x26 = unaff_x26 + 1;
      unaff_w28 = 0;
      if (unaff_x26 < unaff_x24) {
        unaff_w28 = (uint)*unaff_x26;
      }
    } while (*(int *)(*unaff_x21 + 0xe4) != 0);
  } while( true );
}


