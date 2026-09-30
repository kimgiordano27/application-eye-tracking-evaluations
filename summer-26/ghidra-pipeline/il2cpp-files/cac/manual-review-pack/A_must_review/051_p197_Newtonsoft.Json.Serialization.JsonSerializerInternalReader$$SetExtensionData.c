/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$SetExtensionData
ENTRY_POINT: 074bdaf0
PROGRAM: cac-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetExtensionData(void)

{
  int iVar1;
  ulong uVar2;
  char in_NG;
  char in_OV;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  short *psVar6;
  short *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  
  uVar3 = 0;
  psVar6 = unaff_x19;
  if (in_NG == in_OV) {
    do {
      if (*psVar6 == 0) goto LAB_074bdb1c;
      uVar3 = uVar3 + 1;
      psVar6 = psVar6 + 1;
      uVar4 = unaff_w21;
    } while (unaff_w21 != uVar3);
LAB_074bdb24:
    uVar3 = uVar4;
    if (0x34 < (ushort)unaff_x19[(int)unaff_w21]) {
      psVar6 = unaff_x19 + unaff_w21;
      uVar2 = (ulong)unaff_w21;
      do {
        uVar5 = uVar2;
        psVar6 = psVar6 + -1;
        if ((int)uVar5 < 1) {
          iVar1 = *(int *)(unaff_x20 + 4);
          *unaff_x19 = 0x31;
          *(int *)(unaff_x20 + 4) = iVar1 + 1;
          uVar5 = 1;
          goto LAB_074bdbcc;
        }
        uVar2 = uVar5 - 1;
      } while (*psVar6 == 0x39);
      *psVar6 = *psVar6 + 1;
      goto LAB_074bdbcc;
    }
  }
  else {
LAB_074bdb1c:
    uVar4 = uVar3;
    if (uVar3 == unaff_w21) goto LAB_074bdb24;
  }
  psVar6 = unaff_x19 + uVar3;
  uVar2 = (ulong)uVar3;
  do {
    uVar5 = uVar2;
    psVar6 = psVar6 + -1;
    if ((int)uVar5 < 1) {
      if ((int)uVar5 == 0) {
        *(undefined4 *)(unaff_x20 + 4) = 0;
        FUN_074c4774();
        uVar5 = 0;
      }
      break;
    }
    uVar2 = uVar5 - 1;
  } while (*psVar6 == 0x30);
LAB_074bdbcc:
  *(undefined2 *)
   ((-(uVar5 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar5 & 0xffffffff) << 1) + (long)unaff_x19) = 0;
  return;
}


