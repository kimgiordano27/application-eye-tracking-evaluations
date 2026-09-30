/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_MetadataPropertyHandling
ENTRY_POINT: 032a6970
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_MetadataPropertyHandling
               (long param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  long lVar1;
  int iVar2;
  uint in_w8;
  uint in_w9;
  ulong in_x10;
  ulong in_x11;
  ulong in_x12;
  uint *puVar3;
  long in_x13;
  long in_x14;
  long in_x15;
  ulong in_x16;
  uint uVar4;
  long unaff_x19;
  long unaff_x20;
  
  while( true ) {
    lVar1 = in_x11 + 4;
    in_x10 = in_x10 + 1;
    *(uint *)(in_x13 + in_x11) =
         param_4 & 0xff | (param_5 & 0xff) << 8 | (param_2 & 0xff) << 0x10 | param_3 << 0x18;
    in_x11 = in_x16 + 1;
    if (in_x14 == lVar1) break;
    if ((((in_x12 <= in_x11) || (in_x12 <= in_x16 + 2)) || (in_x12 <= in_x16 + 3)) ||
       (in_x16 = in_x16 + 4, in_x12 <= in_x16)) goto LAB_032a6a80;
    if (param_1 == 0) goto LAB_032a6a84;
    if (*(uint *)(param_1 + 0x18) <= in_x10) goto LAB_032a6a80;
    param_4 = (uint)*(byte *)(in_x15 + in_x11 + -3);
    param_5 = (uint)*(byte *)(in_x15 + in_x11 + -2);
    param_2 = (uint)*(byte *)(in_x15 + in_x11 + -1);
    param_3 = (uint)*(byte *)(in_x15 + in_x11);
  }
  uVar4 = (uint)lVar1;
  iVar2 = in_w8 - uVar4;
  if (iVar2 == 1) {
    if (param_1 == 0) {
LAB_032a6a84:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
  }
  else {
    if (iVar2 == 2) {
      if (param_1 == 0) goto LAB_032a6a84;
    }
    else {
      if (iVar2 != 3) goto LAB_032a6a6c;
      if (in_w8 <= (uint)((long)(int)uVar4 | 2U)) goto LAB_032a6a80;
      if (param_1 == 0) goto LAB_032a6a84;
      if (*(uint *)(param_1 + 0x18) <= in_w9) goto LAB_032a6a80;
      *(uint *)(param_1 + (ulong)in_w9 * 4 + 0x20) =
           (uint)*(byte *)(unaff_x20 + ((long)(int)uVar4 | 2U) + 0x20) << 0x10;
    }
    if ((*(uint *)(param_1 + 0x18) <= in_w9) || (in_w8 <= (uint)((long)(int)uVar4 | 1U)))
    goto LAB_032a6a80;
    puVar3 = (uint *)(param_1 + (ulong)in_w9 * 4 + 0x20);
    *puVar3 = *puVar3 | (uint)*(byte *)(unaff_x20 + ((long)(int)uVar4 | 1U) + 0x20) << 8;
  }
  if ((in_w9 < *(uint *)(param_1 + 0x18)) && (uVar4 < in_w8)) {
    puVar3 = (uint *)(param_1 + (ulong)in_w9 * 4 + 0x20);
    *puVar3 = *puVar3 | (uint)*(byte *)(unaff_x20 + (int)uVar4 + 0x20);
LAB_032a6a6c:
    *(undefined4 *)(unaff_x19 + 0x1c) = 0;
    return;
  }
LAB_032a6a80:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


