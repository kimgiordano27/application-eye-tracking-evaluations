/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$AddReference
ENTRY_POINT: 0710822c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonSerializerInternalReader__AddReference(ulong param_1)

{
  bool bVar1;
  uint uVar2;
  short sVar3;
  ulong uVar4;
  int iVar5;
  int in_w9;
  ulong in_x10;
  int in_w11;
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
  int unaff_w29;
  
  do {
    unaff_x22 = unaff_x22 + -1;
    *unaff_x22 = (short)in_w9 + 0x30;
    iVar5 = in_w11 + -1;
    uVar7 = unaff_x24;
    iVar6 = unaff_w23;
    if ((in_w11 < 0) && ((uint)in_x10 < 10)) {
      iVar6 = unaff_w23 + -9;
      unaff_w21 = unaff_w21 + -9;
      iVar5 = *(int *)(*unaff_x27 + 0xe0);
      if (iVar5 == 0) {
        thunk_FUN_03cd7500();
        iVar5 = *(int *)(*unaff_x27 + 0xe0);
      }
      if (unaff_x24 >> 0x20 == 0) {
        if (iVar5 == 0) {
          thunk_FUN_03cd7500();
        }
        if (((int)unaff_x24 != 0) || (-1 < unaff_w23 + -10)) {
          do {
            do {
                    /* try { // try from 0710829c to 07208333 has its CatchHandler @ 0710829c
                       catch() { ... } // from try @ 0710829c with catch @ 0710829c
                       catch() { ... } // from try @ 07108428 with catch @ 0710829c
                       catch() { ... } // from try @ 07108474 with catch @ 0710829c
                       catch() { ... } // from try @ 071084d4 with catch @ 0710829c */
              uVar2 = (uint)unaff_x24;
              uVar7 = (unaff_x24 & 0xffffffff) / 10;
              unaff_x22 = unaff_x22 + -1;
              *unaff_x22 = (short)unaff_x24 + (short)((unaff_x24 & 0xffffffff) / 10) * -10 + 0x30;
              iVar5 = unaff_w21 + -1;
              bVar1 = -1 < unaff_w21;
              unaff_x24 = uVar7;
              unaff_w21 = iVar5;
            } while (bVar1);
          } while (9 < uVar2);
        }
        iVar5 = *(int *)(unaff_x20 + 0x10);
        if (-1 < iVar5 + -1) {
          do {
            iVar5 = iVar5 + -1;
            sVar3 = FUN_06f6fafc();
            unaff_x22 = unaff_x22 + -1;
            *unaff_x22 = sVar3;
          } while (0 < iVar5);
        }
        return unaff_w25 <= unaff_w19;
      }
      if (iVar5 == 0) {
        thunk_FUN_03cd7500();
      }
      uVar7 = 0;
      if (unaff_x26 != 0) {
        uVar7 = unaff_x24 / unaff_x26;
      }
      param_1 = (ulong)(uint)((int)unaff_x24 - (int)uVar7 * (int)unaff_x26);
      iVar5 = 7;
    }
    in_x10 = param_1 & 0xffffffff;
    uVar4 = (param_1 & 0xffffffff) * (unaff_x28 & 0xffffffff);
    in_w9 = (int)param_1 + (uint)(uVar4 >> 0x23) * unaff_w29;
    param_1 = uVar4 >> 0x23;
    unaff_x24 = uVar7;
    in_w11 = iVar5;
    unaff_w23 = iVar6;
  } while( true );
}


