/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorSpawnerBuildingBlock$$.ctor
ENTRY_POINT: 06d6ee88
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_BuildingBlocks_SpatialAnchorSpawnerBuildingBlock___ctor(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  long *unaff_x20;
  long *plVar8;
  long *unaff_x21;
  ulong unaff_x22;
  long lVar9;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  do {
    if (*(uint *)(param_1 + 0x18) <= unaff_x22) goto LAB_06d6f03c;
    lVar7 = *(long *)(unaff_x19 + 0x18);
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06d6f03c;
    lVar9 = *unaff_x20;
    uVar1 = *(undefined4 *)(param_1 + unaff_x22 * 4 + 0x20);
    iVar2 = *(int *)(lVar7 + unaff_x22 * 4 + 0x20);
    uVar6 = thunk_FUN_03cf5234(*unaff_x27);
    FUN_05cc059c(uVar6,unaff_x22 & 0xffffffff,uVar1,*unaff_x28);
    if (lVar9 == 0) break;
    FUN_069a428c(lVar9,unaff_x22 & 0xffffffff,uVar6,*unaff_x29);
    if (iVar2 != 0x56) {
      if (*unaff_x21 == 0) break;
      FUN_069a0cb0(*unaff_x21,iVar2,unaff_x22 & 0xffffffff,*(undefined8 *)PTR_DAT_08e8dd68);
    }
    unaff_x22 = unaff_x22 + 1;
    if (unaff_x22 == 0x37) {
      lVar7 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8df68);
      FUN_069a34ac(lVar7,*(undefined8 *)PTR_DAT_08e8df60);
      plVar8 = (long *)(unaff_x19 + 0x30);
      *plVar8 = lVar7;
      thunk_FUN_03d233cc(plVar8,lVar7);
      puVar5 = PTR_DAT_08e8df80;
      puVar4 = PTR_DAT_08e8df78;
      puVar3 = PTR_DAT_08e8df48;
      lVar7 = 10;
      goto LAB_06d6ef78;
    }
    param_1 = *(long *)(unaff_x19 + 0x10);
  } while (param_1 != 0);
LAB_06d6f038:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
LAB_06d6ef78:
  lVar9 = *(long *)(unaff_x19 + 0x20);
  if (lVar9 == 0) goto LAB_06d6f038;
  if ((ulong)*(uint *)(lVar9 + 0x18) <= lVar7 - 8U) {
LAB_06d6f03c:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb38();
  }
  iVar2 = *(int *)(lVar9 + lVar7 * 4);
  if (iVar2 != 0x56) {
    lVar9 = *plVar8;
    uVar6 = thunk_FUN_03cf5234(*(undefined8 *)puVar5);
    FUN_05cc059c(uVar6,lVar7 - 9U & 0xffffffff,iVar2,*(undefined8 *)puVar4);
    if (lVar9 == 0) goto LAB_06d6f038;
    FUN_069a428c(lVar9,lVar7 - 9U & 0xffffffff,uVar6,*(undefined8 *)puVar3);
  }
  lVar7 = lVar7 + 1;
  if (lVar7 == 0x5d) {
    return 1;
  }
  goto LAB_06d6ef78;
}


