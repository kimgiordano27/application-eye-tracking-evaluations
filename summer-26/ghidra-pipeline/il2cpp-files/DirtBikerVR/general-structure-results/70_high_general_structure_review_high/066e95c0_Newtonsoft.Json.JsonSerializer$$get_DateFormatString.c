/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_DateFormatString
ENTRY_POINT: 066e95c0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__get_DateFormatString(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long in_x10;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  int unaff_w22;
  long *unaff_x23;
  undefined1 unaff_w24;
  undefined8 *unaff_x25;
  
  do {
    if ((uint)in_x10 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x21 + 0x18) = (uint)in_x10 + 1;
      plVar2 = (long *)(param_1 + in_x10 * 8 + 0x20);
      *plVar2 = (long)unaff_x23;
      thunk_FUN_03afed3c(plVar2,unaff_x23);
    }
    else {
      FUN_04de85b0();
    }
    unaff_x23 = (long *)thunk_FUN_03ac74bc(*unaff_x25);
    FUN_066e90ec(unaff_x23,unaff_w22,unaff_w20 & 1);
    unaff_w22 = unaff_w22 + 1;
    if (unaff_x23 == (long *)0x0) {
      *(undefined1 *)(unaff_x19 + 0x20) = unaff_w24;
LAB_066e9630:
      uVar3 = FUN_04dea100();
      *(undefined8 *)(unaff_x19 + 0x10) = uVar3;
      thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x10),uVar3);
      return;
    }
    uVar3 = (**(code **)(*unaff_x23 + 0x1a8))(unaff_x23,*(undefined8 *)(*unaff_x23 + 0x1b0));
    uVar1 = FUN_0667dc48(uVar3,0,0);
    if ((uVar1 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x20) = unaff_w24;
      if (unaff_x21 != 0) goto LAB_066e9630;
LAB_066e9668:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (unaff_x21 == 0) goto LAB_066e9668;
    param_1 = *(long *)(unaff_x21 + 0x10);
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    if (param_1 == 0) goto LAB_066e9668;
    in_x10 = (long)*(int *)(unaff_x21 + 0x18);
  } while( true );
}


