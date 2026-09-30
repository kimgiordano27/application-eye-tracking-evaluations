/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_FloatParseHandling
ENTRY_POINT: 0170b5b4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_JsonSerializer__get_FloatParseHandling(long *param_1)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  uint in_w8;
  byte in_w9;
  undefined2 *unaff_x19;
  undefined2 *unaff_x20;
  int unaff_w22;
  int unaff_w23;
  int iVar6;
  
  if ((0 < unaff_w23) && (0 < unaff_w22)) {
    if (param_1 == (long *)0x0) goto LAB_0170b690;
    iVar6 = 1;
    do {
      sVar2 = (**(code **)(*param_1 + 0x1c8))(param_1,*unaff_x20,*(undefined8 *)(*param_1 + 0x1d0));
      sVar3 = (**(code **)(*param_1 + 0x1c8))(param_1,*unaff_x19,*(undefined8 *)(*param_1 + 0x1d0));
      if (sVar2 != sVar3) goto LAB_0170b638;
      in_w8 = (uint)(iVar6 < unaff_w22);
      unaff_x20 = unaff_x20 + 1;
      unaff_x19 = unaff_x19 + 1;
      in_w9 = iVar6 < unaff_w23;
    } while ((iVar6 < unaff_w23) && (bVar1 = iVar6 < unaff_w22, iVar6 = iVar6 + 1, bVar1));
  }
  if ((in_w9 & 1) == 0) {
    iVar6 = -(in_w8 & 1);
  }
  else if (in_w8 == 0) {
    iVar6 = 1;
  }
  else {
    if (param_1 == (long *)0x0) {
LAB_0170b690:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
LAB_0170b638:
    uVar4 = (**(code **)(*param_1 + 0x1c8))(param_1,*unaff_x20,*(undefined8 *)(*param_1 + 0x1d0));
    uVar5 = (**(code **)(*param_1 + 0x1c8))(param_1,*unaff_x19,*(undefined8 *)(*param_1 + 0x1d0));
    iVar6 = (uVar4 & 0xffff) - (uVar5 & 0xffff);
  }
  return iVar6;
}


