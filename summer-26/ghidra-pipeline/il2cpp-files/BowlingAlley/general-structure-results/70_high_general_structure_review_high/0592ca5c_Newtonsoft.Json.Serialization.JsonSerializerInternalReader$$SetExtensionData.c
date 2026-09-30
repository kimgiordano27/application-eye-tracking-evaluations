/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$SetExtensionData
ENTRY_POINT: 0592ca5c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


int Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetExtensionData
              (ushort *param_1,long param_2)

{
  int iVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  long in_x9;
  uint in_w10;
  long in_x11;
  long in_x12;
  int unaff_w19;
  int unaff_w20;
  
code_r0x0592ca5c:
  if (in_x12 != in_x11) {
    uVar2 = *param_1;
    if (uVar2 != 0) goto code_r0x0592ca6c;
    goto LAB_0592ca7c;
  }
  iVar1 = (int)in_x12;
  goto joined_r0x0592caac;
code_r0x0592ca6c:
  in_x11 = in_x11 + 1;
  param_1 = param_1 + 1;
  if (uVar2 == in_w10) {
LAB_0592ca7c:
    iVar1 = (int)in_x11;
joined_r0x0592caac:
    while( true ) {
      while( true ) {
        iVar4 = iVar1;
        if (unaff_w19 <= iVar4) {
          return 0;
        }
        uVar2 = *(ushort *)(param_2 + (long)iVar4 * 2);
        in_w10 = (uint)uVar2;
        iVar1 = iVar4 + 1;
        if (0x22 < uVar2) break;
        if (uVar2 == 0x22) goto LAB_0592ca4c;
        if (uVar2 == 0) {
          return 0;
        }
      }
      if (uVar2 == 0x27) break;
      if (uVar2 == 0x5c) {
        if ((iVar1 < unaff_w19) && (*(short *)(param_2 + (long)iVar1 * 2) != 0)) {
          iVar1 = iVar4 + 2;
        }
      }
      else if ((uVar2 == 0x3b) && (unaff_w20 = unaff_w20 + -1, unaff_w20 == 0)) {
        if (unaff_w19 <= iVar1) {
          return 0;
        }
        sVar3 = *(short *)(param_2 + (long)iVar1 * 2);
        if (sVar3 == 0x3b) {
          return 0;
        }
        if (sVar3 == 0) {
          return 0;
        }
        return iVar1;
      }
    }
LAB_0592ca4c:
    in_x11 = (long)iVar1;
    in_x12 = in_x11;
    if (iVar1 <= in_x9) {
      in_x12 = in_x9;
    }
    param_1 = (ushort *)(param_2 + (long)iVar1 * 2);
  }
  goto code_r0x0592ca5c;
}


