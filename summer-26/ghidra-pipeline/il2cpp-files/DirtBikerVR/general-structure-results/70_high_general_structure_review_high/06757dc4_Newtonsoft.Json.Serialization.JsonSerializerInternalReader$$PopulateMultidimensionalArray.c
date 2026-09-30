/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateMultidimensionalArray
ENTRY_POINT: 06757dc4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


bool Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateMultidimensionalArray
               (ulong param_1,ulong param_2,int param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  short *psVar8;
  short *psVar9;
  uint uVar10;
  int iVar11;
  int unaff_w19;
  ulong uVar12;
  int *unaff_x21;
  int iVar13;
  long unaff_x24;
  
  if ((param_1 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08486c60);
    FUN_03a8a718(PTR_DAT_0849fae8);
    FUN_03a8a718(PTR_DAT_084a5b08);
    FUN_03a8a718(PTR_DAT_0849fcb0);
    *(undefined1 *)(unaff_x24 + 0xb28) = 1;
  }
  if (param_3 < 2) {
    param_3 = 1;
  }
  if (param_2 < 10000000) {
    iVar13 = 1;
    uVar12 = param_2;
  }
  else if (param_2 < 100000000000000) {
    iVar13 = 8;
    uVar12 = param_2 / 10000000;
  }
  else {
    iVar13 = 0xf;
    uVar12 = param_2 / 100000000000000;
  }
  uVar10 = (uint)uVar12;
  if (9 < uVar10) {
    if (uVar10 < 100) {
      iVar13 = iVar13 + 1;
    }
    else if (uVar10 < 1000) {
      iVar13 = iVar13 + 2;
    }
    else if (uVar10 >> 4 < 0x271) {
      iVar13 = iVar13 + 3;
    }
    else if (uVar10 >> 5 < 0xc35) {
      iVar13 = iVar13 + 4;
    }
    else if (uVar10 < 1000000) {
      iVar13 = iVar13 + 5;
    }
    else {
      iVar13 = iVar13 + 6;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  puVar4 = PTR_DAT_084a5b08;
  iVar2 = param_3;
  if (param_3 <= iVar13) {
    iVar2 = iVar13;
  }
  if (unaff_w19 < iVar2) {
    *unaff_x21 = 0;
  }
  else {
    *unaff_x21 = iVar2;
    lVar5 = FUN_045e1f34(param_4);
    lVar6 = *(long *)puVar4;
    iVar13 = param_3 + -2;
    psVar8 = (short *)(lVar5 + (ulong)(uint)(iVar2 << 1));
    while( true ) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      lVar6 = *(long *)puVar4;
      iVar11 = (int)param_2;
      if (param_2 >> 0x20 == 0) break;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar6 = *(long *)puVar4;
      }
      param_2 = param_2 / 1000000000;
      uVar12 = (ulong)(uint)(iVar11 + (int)param_2 * -1000000000);
      iVar11 = 7;
      do {
        do {
          uVar7 = uVar12 / 10;
          uVar10 = (uint)uVar12;
          psVar8 = psVar8 + -1;
          *psVar8 = (short)uVar12 + (short)(uVar12 / 10) * -10 + 0x30;
          iVar3 = iVar11 + -1;
          bVar1 = -1 < iVar11;
          uVar12 = uVar7;
          iVar11 = iVar3;
        } while (bVar1);
      } while (9 < uVar10);
      param_3 = param_3 + -9;
      iVar13 = iVar13 + -9;
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    if ((iVar11 != 0) || (-1 < param_3 + -1)) {
      psVar8 = psVar8 + -1;
      do {
        do {
          uVar10 = (uint)param_2;
          iVar11 = iVar13 + -1;
          uVar12 = (param_2 & 0xffffffff) / 10;
          psVar9 = psVar8 + -1;
          *psVar8 = (short)param_2 + (short)((param_2 & 0xffffffff) / 10) * -10 + 0x30;
          bVar1 = -1 < iVar13;
          psVar8 = psVar9;
          param_2 = uVar12;
          iVar13 = iVar11;
        } while (bVar1);
      } while (9 < uVar10);
    }
  }
  return iVar2 <= unaff_w19;
}


