/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_StringEscapeHandling
ENTRY_POINT: 050dd0c8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_StringEscapeHandling(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  short *psVar5;
  short *psVar6;
  undefined4 in_w8;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *unaff_x19;
  ulong unaff_x20;
  ulong uVar10;
  short *psVar11;
  long *unaff_x23;
  
  *unaff_x19 = in_w8;
  FUN_050e41d4(param_1,0,0);
  lVar3 = FUN_050e41e0();
  lVar4 = *unaff_x23;
  psVar11 = (short *)(lVar3 + 0x28);
  while( true ) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar4 = *unaff_x23;
    iVar8 = (int)unaff_x20;
    if (unaff_x20 >> 0x20 == 0) break;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar4 = *unaff_x23;
    }
    unaff_x20 = unaff_x20 / 1000000000;
    psVar6 = psVar11 + -1;
    uVar10 = (ulong)(uint)(iVar8 + (int)unaff_x20 * -1000000000);
    iVar8 = 7;
    do {
      do {
        psVar11 = psVar6;
        uVar7 = uVar10 / 10;
        uVar9 = (uint)uVar10;
        *psVar11 = (short)uVar10 + (short)(uVar10 / 10) * -10 + 0x30;
        iVar2 = iVar8 + -1;
        bVar1 = -1 < iVar8;
        psVar6 = psVar11 + -1;
        uVar10 = uVar7;
        iVar8 = iVar2;
      } while (bVar1);
    } while (9 < uVar9);
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  if (iVar8 != 0) {
    psVar6 = psVar11 + -1;
    iVar8 = -2;
    do {
      do {
        psVar11 = psVar6;
        uVar9 = (uint)unaff_x20;
        uVar10 = (unaff_x20 & 0xffffffff) / 10;
        *psVar11 = (short)unaff_x20 + (short)((unaff_x20 & 0xffffffff) / 10) * -10 + 0x30;
        iVar2 = iVar8 + -1;
        bVar1 = -1 < iVar8;
        psVar6 = psVar11 + -1;
        unaff_x20 = uVar10;
        iVar8 = iVar2;
      } while (bVar1);
    } while (9 < uVar9);
  }
  uVar10 = (lVar3 + 0x28) - (long)psVar11;
  if ((long)uVar10 < 0) {
    uVar10 = uVar10 + 1;
  }
  uVar10 = uVar10 >> 1;
  unaff_x19[1] = (int)uVar10;
  psVar5 = (short *)FUN_050e41e0();
  psVar6 = psVar5;
  if (-1 < (int)uVar10 + -1) {
    do {
      uVar9 = (int)uVar10 - 1;
      uVar10 = (ulong)uVar9;
      psVar5 = psVar6 + 1;
      *psVar6 = *psVar11;
      psVar6 = psVar5;
      psVar11 = psVar11 + 1;
    } while (uVar9 != 0);
  }
  *psVar5 = 0;
  return;
}


