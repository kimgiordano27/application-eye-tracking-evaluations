/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SharedSpatialAnchorCore$$get_OnSpatialAnchorsShareCompleted
ENTRY_POINT: 06d6ee98
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


undefined8
Meta_XR_BuildingBlocks_SharedSpatialAnchorCore__get_OnSpatialAnchorsShareCompleted(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long in_x9;
  long unaff_x19;
  long *unaff_x20;
  long *plVar8;
  long *unaff_x21;
  ulong unaff_x22;
  long lVar9;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  while (in_x9 != 0) {
    if (*(uint *)(in_x9 + 0x18) <= unaff_x22) goto LAB_06d6f03c;
    lVar9 = *unaff_x20;
    uVar1 = *(undefined4 *)(param_1 + unaff_x22 * 4 + 0x20);
    iVar2 = *(int *)(in_x9 + unaff_x22 * 4 + 0x20);
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
      lVar9 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8df68);
      FUN_069a34ac(lVar9,*(undefined8 *)PTR_DAT_08e8df60);
      plVar8 = (long *)(unaff_x19 + 0x30);
      *plVar8 = lVar9;
      thunk_FUN_03d233cc(plVar8,lVar9);
      puVar5 = PTR_DAT_08e8df80;
      puVar4 = PTR_DAT_08e8df78;
      puVar3 = PTR_DAT_08e8df48;
      lVar9 = 10;
      goto LAB_06d6ef78;
    }
    param_1 = *(long *)(unaff_x19 + 0x10);
    if (param_1 == 0) break;
    if (*(uint *)(param_1 + 0x18) <= unaff_x22) goto LAB_06d6f03c;
    in_x9 = *(long *)(unaff_x19 + 0x18);
  }
LAB_06d6f038:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
LAB_06d6ef78:
  lVar7 = *(long *)(unaff_x19 + 0x20);
  if (lVar7 == 0) goto LAB_06d6f038;
  if ((ulong)*(uint *)(lVar7 + 0x18) <= lVar9 - 8U) {
LAB_06d6f03c:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb38();
  }
  iVar2 = *(int *)(lVar7 + lVar9 * 4);
  if (iVar2 != 0x56) {
    lVar7 = *plVar8;
    uVar6 = thunk_FUN_03cf5234(*(undefined8 *)puVar5);
    FUN_05cc059c(uVar6,lVar9 - 9U & 0xffffffff,iVar2,*(undefined8 *)puVar4);
    if (lVar7 == 0) goto LAB_06d6f038;
    FUN_069a428c(lVar7,lVar9 - 9U & 0xffffffff,uVar6,*(undefined8 *)puVar3);
  }
  lVar9 = lVar9 + 1;
  if (lVar9 == 0x5d) {
    return 1;
  }
  goto LAB_06d6ef78;
}


