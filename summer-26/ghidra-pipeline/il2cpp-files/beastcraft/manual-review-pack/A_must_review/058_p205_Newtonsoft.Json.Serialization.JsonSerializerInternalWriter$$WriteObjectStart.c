/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteObjectStart
ENTRY_POINT: 055ddfb4
PROGRAM: beastcraft-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteObjectStart(void)

{
  long lVar1;
  undefined *puVar2;
  short sVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  byte unaff_w22;
  long *plVar7;
  long *unaff_x25;
  int unaff_w26;
  long unaff_x27;
  undefined8 *puVar8;
  long unaff_x28;
  undefined8 *puVar9;
  long unaff_x29;
  
  puVar8 = *(undefined8 **)(unaff_x27 + 0xbb0);
  puVar9 = *(undefined8 **)(unaff_x28 + 0x848);
  plVar7 = unaff_x25;
  do {
    uVar6 = unaff_x29 + 2;
    uVar4 = FUN_0564c4a0(0);
    if ((uVar4 & 1) != 0) {
      if (*(uint *)(unaff_x20 + 0x18) <= uVar6) goto LAB_055de1ec;
      if (*plVar7 == 0) goto LAB_055de1f0;
      lVar5 = FUN_0549222c(*plVar7,0);
      if (*(uint *)(unaff_x20 + 0x18) <= uVar6) goto LAB_055de1ec;
      *plVar7 = lVar5;
      thunk_FUN_02ee2be8(plVar7,lVar5);
    }
    if ((unaff_w22 & unaff_x29 == 0) == 0) {
      if (*(uint *)(unaff_x20 + 0x18) <= uVar6) goto LAB_055de1ec;
      uVar4 = thunk_FUN_0548b788(*plVar7,*puVar9,0);
      if ((uVar4 & 1) == 0) {
        if (unaff_x29 != -2) goto LAB_055de018;
        uVar4 = (ulong)*(uint *)(unaff_x20 + 0x18);
        goto LAB_055de064;
      }
    }
    else {
LAB_055de018:
      uVar4 = (ulong)*(uint *)(unaff_x20 + 0x18);
      if (uVar4 <= uVar6) goto LAB_055de1ec;
      if (*plVar7 == 0) goto LAB_055de1f0;
                    /* try { // try from 055de02c to 056de053 has its CatchHandler @ 055de734 */
      if (*(int *)(*plVar7 + 0x10) != 0) {
LAB_055de064:
        if (uVar4 <= uVar6) goto LAB_055de1ec;
        uVar4 = thunk_FUN_0548b788(*plVar7,*puVar8,0);
        if ((uVar4 & 1) == 0) {
                    /* try { // try from 055de090 to 056de0db has its CatchHandler @ 055de73c */
          if ((*(uint *)(unaff_x20 + 0x18) <= uVar6) || (*(uint *)(unaff_x20 + 0x18) <= unaff_w21))
          goto LAB_055de1ec;
          lVar5 = (long)(int)unaff_w21;
          lVar1 = (long)(int)unaff_w21;
          unaff_w21 = unaff_w21 + 1;
          *(long *)(unaff_x20 + lVar5 * 8 + 0x20) = *plVar7;
          thunk_FUN_02ee2be8(unaff_x25 + lVar1);
        }
        else {
          unaff_w21 = unaff_w21 - (unaff_w26 < (int)unaff_w21);
        }
      }
    }
    lVar5 = unaff_x29 + 3;
    unaff_x29 = unaff_x29 + 1;
    plVar7 = plVar7 + 1;
  } while (lVar5 < *(int *)(unaff_x20 + 0x18));
  if (unaff_w21 != 0) {
    if (unaff_w21 == 1) {
      if (*(int *)(unaff_x20 + 0x18) == 0) {
LAB_055de1ec:
                    /* WARNING: Subroutine does not return */
        FUN_02e3cccc();
      }
      uVar6 = thunk_FUN_0548b788(*unaff_x25,*(undefined8 *)PTR_DAT_06a30cc8,0);
      if ((uVar6 & 1) != 0) {
        return unaff_x19;
      }
    }
    puVar2 = PTR_DAT_06a368c0;
    lVar5 = *(long *)PTR_DAT_06a368c0;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      lVar5 = *(long *)puVar2;
    }
    unaff_x19 = FUN_0548e384(*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10));
    uVar6 = FUN_0564c4a0(0);
    if (((uVar6 & 1) == 0) && (uVar6 = FUN_0548ba80(), (uVar6 & 1) != 0)) {
      if (unaff_x19 == 0) {
LAB_055de1f0:
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      if ((0 < *(int *)(unaff_x19 + 0x10)) && (sVar3 = FUN_05487524(unaff_x19,0,0), sVar3 != 0x2f))
      {
        lVar5 = FUN_05482ce0();
        return lVar5;
      }
    }
  }
  return unaff_x19;
}


