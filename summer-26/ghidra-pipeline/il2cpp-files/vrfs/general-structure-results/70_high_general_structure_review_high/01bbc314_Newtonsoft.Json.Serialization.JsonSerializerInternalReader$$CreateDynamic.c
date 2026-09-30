/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateDynamic
ENTRY_POINT: 01bbc314
PROGRAM: vrfs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateDynamic(void)

{
  uint uVar1;
  uint uVar2;
  uint in_w8;
  int iVar3;
  long in_x10;
  uint in_w11;
  long lVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  
  do {
    if (in_x10 == 0) {
LAB_01bbc31c:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar2 = in_w8 - 1;
    if (*(uint *)(in_x10 + 0x18) <= uVar2) {
LAB_01bbc334:
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    iVar3 = *(int *)(in_x10 + (long)(int)uVar2 * 4 + 0x20);
    uVar5 = in_w11;
    while (0 < iVar3) {
      uVar6 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
      if (uVar6 <= uVar5) goto LAB_01bbc334;
      uVar1 = *(int *)(unaff_x19 + (long)(int)uVar5 * 4 + 0x20) << 1;
      uVar7 = (long)(int)uVar1 | 1;
      if (uVar6 <= (uint)uVar7) goto LAB_01bbc334;
      uVar5 = uVar5 + 1;
      if (*(int *)(unaff_x19 + uVar7 * 4 + 0x20) == -1) {
        if (uVar6 <= uVar1) goto LAB_01bbc334;
        lVar4 = *unaff_x21;
        if (lVar4 == 0) goto LAB_01bbc31c;
        uVar6 = *(uint *)(unaff_x19 + (long)(int)uVar1 * 4 + 0x20);
        if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_01bbc334;
        *(char *)(lVar4 + (int)uVar6 + 0x20) = (char)in_w8;
        iVar3 = iVar3 + -1;
        in_w11 = uVar5;
      }
    }
    if (uVar2 == 0) {
      return;
    }
    in_x10 = *(long *)(unaff_x20 + 0x30);
    in_w8 = uVar2;
  } while( true );
}


