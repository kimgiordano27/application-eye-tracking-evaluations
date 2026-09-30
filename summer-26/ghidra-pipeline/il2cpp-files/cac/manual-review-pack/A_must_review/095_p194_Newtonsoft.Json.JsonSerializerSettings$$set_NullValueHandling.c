/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_NullValueHandling
ENTRY_POINT: 0744d804
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_NullValueHandling(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long unaff_x19;
  byte unaff_w20;
  long unaff_x21;
  int unaff_w22;
  int iVar13;
  
  FUN_03f13384();
  FUN_03f13384(PTR_DAT_09131248);
  FUN_03f13384(PTR_DAT_09131250);
  FUN_03f13384(PTR_DAT_09131258);
  FUN_03f13384(PTR_DAT_09131260);
  *(undefined1 *)(unaff_x21 + 0x41) = 1;
  puVar3 = PTR_DAT_09131260;
  puVar2 = PTR_DAT_09131250;
  if (unaff_w22 < 0) {
    thunk_FUN_03f786f8(PTR_DAT_0910bbd0);
    uVar6 = thunk_FUN_03f4e68c();
    uVar9 = thunk_FUN_03f786f8(PTR_DAT_091281c8);
    uVar10 = thunk_FUN_03f786f8(PTR_DAT_09131268);
    FUN_07416834(uVar6,uVar9,uVar10,0);
    uVar9 = thunk_FUN_03f786f8(PTR_DAT_09131270);
                    /* WARNING: Subroutine does not return */
    FUN_03f134f0(uVar6,uVar9);
  }
  lVar4 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_09131258);
  FUN_056b0068(lVar4,*(undefined8 *)puVar2);
  plVar5 = (long *)thunk_FUN_03f4e68c(*(undefined8 *)puVar3);
  FUN_0744d37c(plVar5,unaff_w22 + 2,unaff_w20 & 1);
  puVar2 = PTR_DAT_09131240;
  if (plVar5 == (long *)0x0) {
LAB_0744d944:
    *(byte *)(unaff_x19 + 0x20) = unaff_w20 & 1;
    if (lVar4 == 0) {
LAB_0744d984:
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
  }
  else {
    iVar13 = unaff_w22 + 3;
    do {
      uVar6 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      uVar7 = FUN_073dfe84(uVar6,0,0);
      if ((uVar7 & 1) == 0) goto LAB_0744d944;
      if (lVar4 == 0) goto LAB_0744d984;
      lVar11 = *(long *)(lVar4 + 0x10);
      lVar12 = *(long *)puVar2;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar11 == 0) goto LAB_0744d984;
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        plVar8 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
        *plVar8 = (long)plVar5;
        thunk_FUN_03f86000(plVar8,plVar5);
      }
      else {
        FUN_056b08d0(lVar4,plVar5,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70)
                    );
      }
      plVar5 = (long *)thunk_FUN_03f4e68c(*(undefined8 *)puVar3);
      FUN_0744d37c(plVar5,iVar13,unaff_w20 & 1);
      iVar13 = iVar13 + 1;
    } while (plVar5 != (long *)0x0);
    *(byte *)(unaff_x19 + 0x20) = unaff_w20 & 1;
  }
  uVar6 = FUN_056b23bc(lVar4,*(undefined8 *)PTR_DAT_09131248);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar6;
  thunk_FUN_03f86000((undefined8 *)(unaff_x19 + 0x10),uVar6);
  return;
}


