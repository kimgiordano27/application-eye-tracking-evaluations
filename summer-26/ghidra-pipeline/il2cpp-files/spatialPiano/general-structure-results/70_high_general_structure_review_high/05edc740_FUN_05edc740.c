/*
FUNCTION_NAME: FUN_05edc740
ENTRY_POINT: 05edc740
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void FUN_05edc740(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_06bc4611 & 1) == 0) {
    FUN_02f08768(Method_System_Xml_XmlElement_SetAttributeNode__);
    FUN_02f08768(Method_System_Xml_XmlEncodedRawTextWriter_EncodeSurrogate__);
    DAT_06bc4611 = 1;
  }
  lVar3 = FUN_060ed7ac(param_1,0);
  if (lVar3 != 0) {
    uVar4 = FUN_06101f44(lVar3,0);
    if ((uVar4 & 1) != 0) {
      lVar3 = FUN_060ed7ac(param_1,0);
      if (lVar3 == 0) goto LAB_05edc898;
      UnityEngine_UIElements_BindingInfo__FromRequest(lVar3,0,0);
      FUN_05edc89c(param_1);
    }
    puVar2 = Method_System_Xml_XmlElement_SetAttributeNode__;
    if (*(long *)(param_1 + 0x40) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = thunk_FUN_02f1863c(*(long *)(param_1 + 0x40),0);
    }
    puVar1 = PTR_DAT_067c9338;
    uVar6 = *(undefined8 *)puVar2;
    if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar6 = FUN_050e4454(uVar6,0);
    uVar4 = FUN_050ed374(uVar5,uVar6,0);
    if ((uVar4 & 1) == 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = thunk_FUN_02f1863c(*(long *)(param_1 + 0x40),0);
      }
      uVar6 = *(undefined8 *)Method_System_Xml_XmlEncodedRawTextWriter_EncodeSurrogate__;
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar6 = FUN_050e4454(uVar6,0);
      uVar4 = FUN_050ed374(uVar5,uVar6,0);
      if ((uVar4 & 1) == 0) {
        return;
      }
    }
    FUN_05edc89c(param_1);
    return;
  }
LAB_05edc898:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05edc898 to 05fdc8a7 has its CatchHandler @ 05edcd64 */
  FUN_02f089c8();
}


