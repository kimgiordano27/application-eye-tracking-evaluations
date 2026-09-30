/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$HandleError
ENTRY_POINT: 0624966c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__HandleError(void)

{
  bool bVar1;
  int iVar2;
  short sVar3;
  int in_w8;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  long unaff_x19;
  int unaff_w21;
  ulong unaff_x22;
  ulong uVar9;
  int unaff_w23;
  short *unaff_x24;
  long *unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  short unaff_w28;
  
  while( true ) {
    if (in_w8 == 0) {
      thunk_FUN_03798b70();
      in_w8 = *(int *)(*unaff_x25 + 0xe4);
    }
    if (unaff_x22 >> 0x20 == 0) break;
    if (in_w8 == 0) {
      thunk_FUN_03798b70();
    }
    uVar9 = 0;
    if (unaff_x26 != 0) {
      uVar9 = unaff_x22 / unaff_x26;
    }
    uVar4 = (ulong)(uint)((int)unaff_x22 - (int)uVar9 * (int)unaff_x26);
    iVar7 = 7;
    do {
      do {
        uVar5 = uVar4 * (unaff_x27 & 0xffffffff);
        uVar6 = uVar5 >> 0x23;
        uVar8 = (uint)uVar4;
        unaff_x24 = unaff_x24 + -1;
        *unaff_x24 = (short)uVar4 + (short)(uint)(uVar5 >> 0x23) * unaff_w28 + 0x30;
        iVar2 = iVar7 + -1;
        bVar1 = -1 < iVar7;
        uVar4 = uVar6;
        iVar7 = iVar2;
      } while (bVar1);
    } while (9 < uVar8);
    unaff_w23 = unaff_w23 + -9;
    unaff_w21 = unaff_w21 + -9;
    in_w8 = *(int *)(*unaff_x25 + 0xe4);
    unaff_x22 = uVar9;
  }
  if (in_w8 == 0) {
    thunk_FUN_03798b70();
  }
  if (((int)unaff_x22 != 0) || (-1 < unaff_w23 + -1)) {
    do {
      do {
        uVar8 = (uint)unaff_x22;
        uVar9 = (unaff_x22 & 0xffffffff) / 10;
        unaff_x24 = unaff_x24 + -1;
        *unaff_x24 = (short)unaff_x22 + (short)((unaff_x22 & 0xffffffff) / 10) * -10 + 0x30;
        iVar7 = unaff_w21 + -1;
        bVar1 = -1 < unaff_w21;
        unaff_x22 = uVar9;
        unaff_w21 = iVar7;
      } while (bVar1);
    } while (9 < uVar8);
  }
  iVar7 = *(int *)(unaff_x19 + 0x10);
  if (-1 < iVar7 + -1) {
    do {
      iVar7 = iVar7 + -1;
      sVar3 = FUN_060bb390();
      unaff_x24 = unaff_x24 + -1;
      *unaff_x24 = sVar3;
    } while (0 < iVar7);
  }
  return;
}


