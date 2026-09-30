/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$DeserializeInternal
ENTRY_POINT: 059344e0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__DeserializeInternal(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long *plVar12;
  undefined8 *unaff_x22;
  
  thunk_FUN_032e1da0(PTR_DAT_07279c00);
  *(undefined1 *)(unaff_x21 + 0x413) = 1;
  lVar4 = FUN_032d5d3c(*unaff_x22,0x38);
  plVar12 = (long *)(unaff_x19 + 0x18);
  *plVar12 = lVar4;
  thunk_FUN_0333a630(plVar12,lVar4);
  FUN_059660a0();
  if (unaff_w20 == -0x80000000) {
    iVar7 = -0x765b1379;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_07279c00 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    iVar7 = -unaff_w20;
    if (-1 < unaff_w20) {
      iVar7 = unaff_w20;
    }
    iVar7 = 0x9a4ec86 - iVar7;
  }
  lVar4 = *plVar12;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  uVar6 = *(ulong *)(lVar4 + 0x18);
  uVar5 = (uint)uVar6;
  if (0x37 < uVar5) {
    uVar11 = 0;
    iVar9 = 0x36;
    *(int *)(lVar4 + 0xfc) = iVar7;
    iVar8 = 1;
    while( true ) {
      uVar1 = uVar11 + 0x15;
      uVar2 = uVar11 - 0x22;
      uVar11 = uVar1;
      if (0x36 < (int)uVar1) {
        uVar11 = uVar2;
      }
      if (uVar5 <= uVar11) break;
      iVar3 = iVar7 - iVar8;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0x7fffffff;
      }
      iVar9 = iVar9 + -1;
      *(int *)(lVar4 + (long)(int)uVar11 * 4 + 0x20) = iVar8;
      iVar7 = iVar8;
      iVar8 = iVar3;
      if (iVar9 == 0) {
        iVar7 = 1;
        do {
          lVar10 = 0;
          do {
            if ((uVar6 & 0xffffffff) - 1 == lVar10) goto LAB_05934664;
            iVar9 = 0x1e;
            if (0x18 < lVar10 + 1U) {
              iVar9 = -0x19;
            }
            uVar11 = (int)lVar10 + iVar9 + 2;
            if (uVar5 <= uVar11) goto LAB_05934664;
            iVar9 = *(int *)(lVar4 + 0x24 + lVar10 * 4) -
                    *(int *)(lVar4 + (long)(int)uVar11 * 4 + 0x20);
            if (iVar9 < 0) {
              iVar9 = iVar9 + 0x7fffffff;
            }
            *(int *)(lVar4 + 0x24 + lVar10 * 4) = iVar9;
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0x37);
          iVar7 = iVar7 + 1;
          if (iVar7 == 5) {
            *(undefined8 *)(unaff_x19 + 0x10) = DAT_0139fa48;
            return;
          }
        } while( true );
      }
    }
  }
LAB_05934664:
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


