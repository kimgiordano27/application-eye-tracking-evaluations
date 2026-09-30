/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetReference
ENTRY_POINT: 01bc6db8
PROGRAM: vrfs-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetReference(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int in_w9;
  long unaff_x19;
  int *unaff_x20;
  int unaff_w21;
  long *unaff_x23;
  long *unaff_x24;
  
  do {
    if (in_w9 <= unaff_w21) {
      if (*(long *)(unaff_x19 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (in_w9 == *(int *)(*(long *)(unaff_x19 + 200) + 0x18)) {
        uVar2 = 1;
      }
      else {
        puVar3 = (undefined8 *)PTR_DAT_06dd1fd8;
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          puVar3 = (undefined8 *)PTR_DAT_06dd1fd8;
        }
LAB_01bc6df4:
                    /* try { // try from 01bc6df8 to 01cc6feb has its CatchHandler @ 01bc6df8
                       catch() { ... } // from try @ 01bc6df8 with catch @ 01bc6df8
                       catch() { ... } // from try @ 01bc7008 with catch @ 01bc6df8
                       catch() { ... } // from try @ 01bc7040 with catch @ 01bc6df8
                       catch() { ... } // from try @ 01bc7068 with catch @ 01bc6df8
                       catch() { ... } // from try @ 01bc7098 with catch @ 01bc6df8 */
        FUN_0486672c(*puVar3,0);
        uVar2 = 0;
      }
      return uVar2;
    }
    uVar2 = thunk_FUN_02ec4de8();
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_016466fc(*unaff_x23);
    }
    uVar1 = FUN_051d94d4(uVar2,0,0);
    if ((uVar1 & 1) != 0) {
      puVar3 = (undefined8 *)PTR_DAT_06e5b450;
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        puVar3 = (undefined8 *)PTR_DAT_06e5b450;
      }
      goto LAB_01bc6df4;
    }
    in_w9 = *unaff_x20;
    unaff_w21 = unaff_w21 + 1;
  } while( true );
}


