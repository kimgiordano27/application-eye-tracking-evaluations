/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_DateFormatString
ENTRY_POINT: 066e9610
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__set_DateFormatString(long *param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  ulong unaff_x22;
  undefined1 unaff_w24;
  undefined8 *unaff_x25;
  
  do {
    FUN_066e90ec(param_1,param_2,param_3);
    param_2 = (ulong)((int)unaff_x22 + 1);
    if (param_1 == (long *)0x0) {
      *(undefined1 *)(unaff_x19 + 0x20) = unaff_w24;
LAB_066e9630:
      uVar4 = FUN_04dea100();
      *(undefined8 *)(unaff_x19 + 0x10) = uVar4;
      thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x10),uVar4);
      return;
    }
    uVar4 = (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
    uVar2 = FUN_0667dc48(uVar4,0,0);
    if ((uVar2 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x20) = unaff_w24;
      if (unaff_x21 == 0) {
LAB_066e9668:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_066e9630;
    }
    if (unaff_x21 == 0) goto LAB_066e9668;
    lVar5 = *(long *)(unaff_x21 + 0x10);
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_066e9668;
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
      plVar3 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
      *plVar3 = (long)param_1;
      thunk_FUN_03afed3c(plVar3,param_1);
    }
    else {
      FUN_04de85b0();
    }
    param_1 = (long *)thunk_FUN_03ac74bc(*unaff_x25);
    param_3 = (ulong)(unaff_w20 & 1);
    unaff_x22 = param_2;
  } while( true );
}


