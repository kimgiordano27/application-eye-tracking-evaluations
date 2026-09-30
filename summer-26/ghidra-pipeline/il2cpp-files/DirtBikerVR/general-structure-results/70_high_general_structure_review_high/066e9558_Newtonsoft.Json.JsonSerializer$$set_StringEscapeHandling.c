/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_StringEscapeHandling
ENTRY_POINT: 066e9558
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


void Newtonsoft_Json_JsonSerializer__set_StringEscapeHandling(void)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  int unaff_w22;
  int iVar7;
  undefined1 unaff_w24;
  undefined8 *unaff_x25;
  
  plVar2 = (long *)thunk_FUN_03ac74bc(*unaff_x25);
  FUN_066e90ec(plVar2,unaff_w22 + 2,unaff_w20 & 1);
  if (plVar2 == (long *)0x0) {
LAB_066e9628:
    *(undefined1 *)(unaff_x19 + 0x20) = unaff_w24;
    if (unaff_x21 == 0) {
LAB_066e9668:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  }
  else {
    iVar7 = unaff_w22 + 3;
    do {
      uVar3 = (**(code **)(*plVar2 + 0x1a8))(plVar2,*(undefined8 *)(*plVar2 + 0x1b0));
      uVar4 = FUN_0667dc48(uVar3,0,0);
      if ((uVar4 & 1) == 0) goto LAB_066e9628;
      if (unaff_x21 == 0) goto LAB_066e9668;
      lVar6 = *(long *)(unaff_x21 + 0x10);
      *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
      if (lVar6 == 0) goto LAB_066e9668;
      uVar1 = *(uint *)(unaff_x21 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
        plVar5 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
        *plVar5 = (long)plVar2;
        thunk_FUN_03afed3c(plVar5,plVar2);
      }
      else {
        FUN_04de85b0();
      }
      plVar2 = (long *)thunk_FUN_03ac74bc(*unaff_x25);
      FUN_066e90ec(plVar2,iVar7,unaff_w20 & 1);
      iVar7 = iVar7 + 1;
    } while (plVar2 != (long *)0x0);
    *(undefined1 *)(unaff_x19 + 0x20) = unaff_w24;
  }
  uVar3 = FUN_04dea100();
  *(undefined8 *)(unaff_x19 + 0x10) = uVar3;
  thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x10),uVar3);
  return;
}


