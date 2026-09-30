/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorSpawnerBuildingBlock$$SpawnSpatialAnchor
ENTRY_POINT: 06d6edc0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_BuildingBlocks_SpatialAnchorSpawnerBuildingBlock__SpawnSpatialAnchor(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 in_w8;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  
  *(undefined1 *)(unaff_x20 + 0x981) = in_w8;
  puVar3 = PTR_DAT_08e8f0d0;
  if ((((*(long *)(unaff_x19 + 0x10) == 0) || (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x18) == 0))
      || (*(long *)(unaff_x19 + 0x18) == 0)) ||
     (((*(long *)(*(long *)(unaff_x19 + 0x18) + 0x18) == 0 || (*(long *)(unaff_x19 + 0x20) == 0)) ||
      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0x18) == 0)))) {
    if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_085a48e4(*(undefined8 *)puVar3,0);
    uVar7 = 0;
  }
  else {
    lVar6 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8df20);
    FUN_069a34ac(lVar6,*(undefined8 *)PTR_DAT_08e8df28);
    plVar9 = (long *)(unaff_x19 + 0x28);
    *plVar9 = lVar6;
    thunk_FUN_03d233cc(plVar9,lVar6);
    lVar6 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8df10);
    System_Collections_Generic_Dictionary<object,_StyleComplexSelector_PseudoStateData>__Add
              (lVar6,*(undefined8 *)PTR_DAT_08e8df18);
    plVar10 = (long *)(unaff_x19 + 0x38);
    *plVar10 = lVar6;
    thunk_FUN_03d233cc(plVar10,lVar6);
    puVar5 = PTR_DAT_08e8df50;
    puVar4 = PTR_DAT_08e8df38;
    puVar3 = PTR_DAT_08e8df30;
    uVar11 = 0;
    do {
      lVar6 = *(long *)(unaff_x19 + 0x10);
      if (lVar6 == 0) goto LAB_06d6f038;
      if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_06d6f03c;
      lVar8 = *(long *)(unaff_x19 + 0x18);
      if (lVar8 == 0) goto LAB_06d6f038;
      if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_06d6f03c;
      lVar12 = *plVar9;
      uVar1 = *(undefined4 *)(lVar6 + uVar11 * 4 + 0x20);
      iVar2 = *(int *)(lVar8 + uVar11 * 4 + 0x20);
      uVar7 = thunk_FUN_03cf5234(*(undefined8 *)puVar3);
      FUN_05cc059c(uVar7,uVar11 & 0xffffffff,uVar1,*(undefined8 *)puVar4);
      if (lVar12 == 0) goto LAB_06d6f038;
      FUN_069a428c(lVar12,uVar11 & 0xffffffff,uVar7,*(undefined8 *)puVar5);
      if (iVar2 != 0x56) {
        if (*plVar10 == 0) goto LAB_06d6f038;
        FUN_069a0cb0(*plVar10,iVar2,uVar11 & 0xffffffff,*(undefined8 *)PTR_DAT_08e8dd68);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != 0x37);
    lVar6 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8df68);
    FUN_069a34ac(lVar6,*(undefined8 *)PTR_DAT_08e8df60);
    plVar9 = (long *)(unaff_x19 + 0x30);
    *plVar9 = lVar6;
    thunk_FUN_03d233cc(plVar9,lVar6);
    puVar5 = PTR_DAT_08e8df80;
    puVar4 = PTR_DAT_08e8df78;
    puVar3 = PTR_DAT_08e8df48;
    lVar6 = 10;
    do {
      lVar8 = *(long *)(unaff_x19 + 0x20);
      if (lVar8 == 0) {
LAB_06d6f038:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if ((ulong)*(uint *)(lVar8 + 0x18) <= lVar6 - 8U) {
LAB_06d6f03c:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      iVar2 = *(int *)(lVar8 + lVar6 * 4);
      if (iVar2 != 0x56) {
        lVar8 = *plVar9;
        uVar7 = thunk_FUN_03cf5234(*(undefined8 *)puVar5);
        FUN_05cc059c(uVar7,lVar6 - 9U & 0xffffffff,iVar2,*(undefined8 *)puVar4);
        if (lVar8 == 0) goto LAB_06d6f038;
        FUN_069a428c(lVar8,lVar6 - 9U & 0xffffffff,uVar7,*(undefined8 *)puVar3);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x5d);
    uVar7 = 1;
  }
  return uVar7;
}


