/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteTypeProperty
ENTRY_POINT: 06254104
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteTypeProperty(void)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  cVar1 = *(char *)(unaff_x20 + 0x52);
  *(long *)(unaff_x19 + 0x40) = unaff_x19;
  uVar2 = RootMotion_FinalIK_FingerRig__set_initiated();
  if ((uVar2 & 1) == 0) {
    if (cVar1 != '\x01') {
      if (unaff_x21 == 0) {
        uVar4 = thunk_FUN_03784d20(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
        FUN_0373b680(uVar4,0);
      }
      goto LAB_06254168;
    }
    if (*(char *)(unaff_x19 + 0x70) == '\0') {
      pcVar5 = FUN_0366ed24;
    }
    else {
      uVar2 = RootMotion_FinalIK_FingerRig__get_initiated();
      uVar3 = FUN_0373bbac();
      if ((uVar2 & 1) == 0) {
        if ((uVar3 & 1) == 0) {
          pcVar5 = FUN_0366ed5c;
        }
        else {
          pcVar5 = FUN_0366ed8c;
        }
      }
      else if ((uVar3 & 1) == 0) {
        pcVar5 = FUN_0366ee18;
      }
      else {
        pcVar5 = FUN_0366ee64;
      }
    }
  }
  else {
    if (cVar1 != '\x02') {
LAB_06254168:
      *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 0x10);
      *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x20);
      goto LAB_062541b0;
    }
    pcVar5 = FUN_0366ed48;
  }
  *(code **)(unaff_x19 + 0x18) = pcVar5;
LAB_062541b0:
  *(code **)(unaff_x19 + 0x38) = FUN_0366ecc4;
  return;
}


