/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ReadMetadataProperties
ENTRY_POINT: 0624bfd0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


int Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadMetadataProperties(long param_1)

{
  long lVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  char in_NG;
  char in_OV;
  int in_w8;
  ushort *puVar5;
  long in_x9;
  uint in_w10;
  long in_x11;
  int unaff_w19;
  int unaff_w20;
  
  do {
    lVar1 = in_x11;
    if (in_NG == in_OV) {
      lVar1 = in_x9;
    }
    puVar5 = (ushort *)(param_1 + (long)in_w8 * 2);
    do {
      if (lVar1 == in_x11) {
        in_w8 = (int)lVar1;
        goto joined_r0x0624c028;
      }
      uVar2 = *puVar5;
      if (uVar2 == 0) break;
      in_x11 = in_x11 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar2 != in_w10);
    in_w8 = (int)in_x11;
joined_r0x0624c028:
    iVar4 = in_w8;
    if (unaff_w19 <= iVar4) {
      return 0;
    }
    uVar2 = *(ushort *)(param_1 + (long)iVar4 * 2);
    in_w10 = (uint)uVar2;
    in_w8 = iVar4 + 1;
    if (uVar2 < 0x23) {
      if (uVar2 == 0x22) goto LAB_0624bfc8;
      if (uVar2 == 0) {
        return 0;
      }
      goto joined_r0x0624c028;
    }
    if (uVar2 != 0x27) {
      if (uVar2 == 0x5c) {
        if ((in_w8 < unaff_w19) && (*(short *)(param_1 + (long)in_w8 * 2) != 0)) {
          in_w8 = iVar4 + 2;
        }
      }
      else if ((uVar2 == 0x3b) && (unaff_w20 = unaff_w20 + -1, unaff_w20 == 0)) {
        if (unaff_w19 <= in_w8) {
          return 0;
        }
        sVar3 = *(short *)(param_1 + (long)in_w8 * 2);
        if (sVar3 == 0x3b) {
          return 0;
        }
        if (sVar3 == 0) {
          return 0;
        }
        return in_w8;
      }
      goto joined_r0x0624c028;
    }
LAB_0624bfc8:
    in_x11 = (long)in_w8;
    in_OV = SBORROW8(in_x9,(long)in_w8);
    in_NG = in_x9 - in_w8 < 0;
  } while( true );
}


