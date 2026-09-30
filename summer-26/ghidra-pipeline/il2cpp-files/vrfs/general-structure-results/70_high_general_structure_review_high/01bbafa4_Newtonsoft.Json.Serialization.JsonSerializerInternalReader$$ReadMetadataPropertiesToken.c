/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ReadMetadataPropertiesToken
ENTRY_POINT: 01bbafa4
PROGRAM: vrfs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadMetadataPropertiesToken(void)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  char in_NG;
  char in_OV;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  ulong uVar10;
  int *piVar11;
  
  if (in_NG == in_OV) {
    if (unaff_x20 == 0) {
LAB_01bbb0e4:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar2 = *(uint *)(unaff_x20 + 0x18);
    iVar5 = 0;
    uVar6 = 0xf;
    lVar7 = 8;
    do {
      if ((ulong)uVar2 <= lVar7 - 8U) goto LAB_01bbb0e0;
      *(int *)(unaff_x20 + lVar7 * 4) = iVar5;
      lVar8 = *(long *)(unaff_x19 + 0x30);
      if (lVar8 == 0) goto LAB_01bbb0e4;
      if ((ulong)*(uint *)(lVar8 + 0x18) <= lVar7 - 8U) goto LAB_01bbb0e0;
      lVar1 = lVar7 * 4;
      lVar9 = lVar7 + -7;
      lVar7 = lVar7 + 1;
      iVar5 = (*(int *)(lVar8 + lVar1) << (ulong)(uVar6 & 0x1f)) + iVar5;
      uVar6 = uVar6 - 1;
    } while (lVar9 < *(int *)(unaff_x19 + 0x38));
  }
  iVar5 = *(int *)(unaff_x19 + 0x24);
  if (0 < iVar5) {
    uVar10 = 0;
    do {
      lVar7 = *(long *)(unaff_x19 + 0x18);
      if (lVar7 == 0) goto LAB_01bbb0e4;
      if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_01bbb0e0;
      bVar3 = *(byte *)(lVar7 + uVar10 + 0x20);
      if (bVar3 != 0) {
        if (unaff_x20 == 0) goto LAB_01bbb0e4;
        uVar2 = bVar3 - 1;
        if (*(uint *)(unaff_x20 + 0x18) <= uVar2) {
LAB_01bbb0e0:
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
        lVar7 = *unaff_x21;
        piVar11 = (int *)(unaff_x20 + (long)(int)uVar2 * 4 + 0x20);
        iVar5 = *piVar11;
        if (*(int *)(*(long *)PTR_DAT_06e62878 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar4 = FUN_01bbab78(iVar5);
        if (lVar7 == 0) goto LAB_01bbb0e4;
        if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_01bbb0e0;
        *(undefined2 *)(lVar7 + uVar10 * 2 + 0x20) = uVar4;
        if (*(uint *)(unaff_x20 + 0x18) <= uVar2) goto LAB_01bbb0e0;
        *piVar11 = *piVar11 + (1 << (ulong)(0x10 - bVar3 & 0x1f));
        iVar5 = *(int *)(unaff_x19 + 0x24);
      }
      uVar10 = uVar10 + 1;
    } while ((long)uVar10 < (long)iVar5);
  }
  return;
}


