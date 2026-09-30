/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$HasFlag
ENTRY_POINT: 07108220
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonSerializerInternalReader__HasFlag(ulong param_1)

{
  bool bVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  ulong uVar5;
  int in_w9;
  ulong in_x10;
  int unaff_w19;
  long unaff_x20;
  int unaff_w21;
  short *unaff_x22;
  int iVar6;
  int unaff_w23;
  ulong unaff_x24;
  ulong uVar7;
  int unaff_w25;
  ulong unaff_x26;
  long *unaff_x27;
  ulong unaff_x28;
  short unaff_w29;
  
  do {
    uVar5 = param_1 >> 0x23;
    unaff_x22 = unaff_x22 + -1;
    *unaff_x22 = (short)in_x10 + (short)(uint)(param_1 >> 0x23) * unaff_w29 + 0x30;
    iVar6 = in_w9 + -1;
    bVar1 = in_w9 < 0;
    uVar7 = unaff_x24;
    in_w9 = iVar6;
    iVar6 = unaff_w23;
    if ((bVar1) && ((uint)in_x10 < 10)) {
      iVar6 = unaff_w23 + -9;
      unaff_w21 = unaff_w21 + -9;
      iVar4 = *(int *)(*unaff_x27 + 0xe0);
      if (iVar4 == 0) {
        thunk_FUN_03cd7500();
        iVar4 = *(int *)(*unaff_x27 + 0xe0);
      }
      if (unaff_x24 >> 0x20 == 0) {
        if (iVar4 == 0) {
          thunk_FUN_03cd7500();
        }
        if (((int)unaff_x24 != 0) || (-1 < unaff_w23 + -10)) {
          do {
            do {
              uVar2 = (uint)unaff_x24;
              uVar7 = (unaff_x24 & 0xffffffff) / 10;
              unaff_x22 = unaff_x22 + -1;
              *unaff_x22 = (short)unaff_x24 + (short)((unaff_x24 & 0xffffffff) / 10) * -10 + 0x30;
              iVar6 = unaff_w21 + -1;
              bVar1 = -1 < unaff_w21;
              unaff_x24 = uVar7;
              unaff_w21 = iVar6;
            } while (bVar1);
          } while (9 < uVar2);
        }
        iVar6 = *(int *)(unaff_x20 + 0x10);
        if (-1 < iVar6 + -1) {
          do {
            iVar6 = iVar6 + -1;
            sVar3 = FUN_06f6fafc();
            unaff_x22 = unaff_x22 + -1;
            *unaff_x22 = sVar3;
          } while (0 < iVar6);
        }
        return unaff_w25 <= unaff_w19;
      }
      if (iVar4 == 0) {
        thunk_FUN_03cd7500();
      }
      uVar7 = 0;
      if (unaff_x26 != 0) {
        uVar7 = unaff_x24 / unaff_x26;
      }
      uVar5 = (ulong)(uint)((int)unaff_x24 - (int)uVar7 * (int)unaff_x26);
      in_w9 = 7;
    }
    param_1 = uVar5 * (unaff_x28 & 0xffffffff);
    in_x10 = uVar5;
    unaff_x24 = uVar7;
    unaff_w23 = iVar6;
  } while( true );
}


