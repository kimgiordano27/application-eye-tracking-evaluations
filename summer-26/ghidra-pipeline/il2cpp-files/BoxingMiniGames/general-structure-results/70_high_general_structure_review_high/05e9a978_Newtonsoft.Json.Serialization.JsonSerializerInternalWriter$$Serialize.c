/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$Serialize
ENTRY_POINT: 05e9a978
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


int Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__Serialize(void)

{
  ushort uVar1;
  int iVar2;
  long *plVar3;
  long unaff_x19;
  long unaff_x20;
  ushort *unaff_x21;
  ushort *unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  int unaff_w25;
  long *unaff_x26;
  ushort *in_stack_00000008;
  
  FUN_05c9f144();
  if (unaff_x26 == (long *)0x0) {
    if (unaff_w25 == 0) goto LAB_05e9aa38;
  }
  else {
    iVar2 = (**(code **)(*unaff_x26 + 0x188))();
    if (iVar2 == 1) {
      if (unaff_w25 != 0) {
        unaff_w24 = unaff_w24 + 1;
      }
      return unaff_w24;
    }
    if (unaff_w25 == 0) goto LAB_05e9aa38;
    if (unaff_x19 == 0) goto LAB_05e9aaf0;
  }
  unaff_x23 = (long *)FUN_05e9ab94();
  if (unaff_x23 == (long *)0x0) {
LAB_05e9aaf0:
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  FUN_05c9f144();
  in_stack_00000008 = unaff_x21;
  (**(code **)(*unaff_x23 + 0x1d8))
            (unaff_x23,unaff_w25,&stack0x00000008,*(undefined8 *)(*unaff_x23 + 0x1e0));
  unaff_x21 = in_stack_00000008;
LAB_05e9aa38:
  iVar2 = 0;
LAB_05e9aa3c:
  do {
    if (unaff_x23 == (long *)0x0) {
      uVar1 = 0;
LAB_05e9aa60:
      if (unaff_x22 <= unaff_x21) {
        return iVar2;
      }
    }
    else {
      uVar1 = FUN_05c9f180(unaff_x23,0);
      if (uVar1 == 0) goto LAB_05e9aa60;
    }
    if (uVar1 == 0) {
      uVar1 = *unaff_x21;
      unaff_x21 = unaff_x21 + 1;
    }
    if (uVar1 < 0x80) {
      iVar2 = iVar2 + 1;
      goto LAB_05e9aa3c;
    }
    if (unaff_x23 == (long *)0x0) {
      if (unaff_x19 == 0) {
        plVar3 = *(long **)(unaff_x20 + 0x28);
        if (plVar3 == (long *)0x0) goto LAB_05e9aaf0;
        unaff_x23 = (long *)(**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
      }
      else {
        unaff_x23 = (long *)FUN_05e9ab94();
      }
      if (unaff_x23 == (long *)0x0) goto LAB_05e9aaf0;
      FUN_05c9f144(unaff_x23);
    }
    in_stack_00000008 = unaff_x21;
    (**(code **)(*unaff_x23 + 0x1d8))
              (unaff_x23,uVar1,&stack0x00000008,*(undefined8 *)(*unaff_x23 + 0x1e0));
    unaff_x21 = in_stack_00000008;
  } while( true );
}


