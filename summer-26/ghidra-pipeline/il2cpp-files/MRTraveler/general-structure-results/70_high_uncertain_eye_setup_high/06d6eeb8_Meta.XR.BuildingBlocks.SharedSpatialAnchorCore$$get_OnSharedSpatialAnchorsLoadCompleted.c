/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SharedSpatialAnchorCore$$get_OnSharedSpatialAnchorsLoadCompleted
ENTRY_POINT: 06d6eeb8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_BuildingBlocks_SharedSpatialAnchorCore__get_OnSharedSpatialAnchorsLoadCompleted
          (long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long in_x9;
  long unaff_x19;
  long *unaff_x20;
  long *plVar9;
  long *unaff_x21;
  ulong unaff_x22;
  long unaff_x24;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  while( true ) {
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    iVar2 = *(int *)(in_x9 + 0x20);
    uVar6 = thunk_FUN_03cf5234(param_2);
    FUN_05cc059c(uVar6,unaff_x22 & 0xffffffff,uVar1,*unaff_x28);
    if (unaff_x24 == 0) break;
    FUN_069a428c(unaff_x24,unaff_x22 & 0xffffffff,uVar6,*unaff_x29);
    if (iVar2 != 0x56) {
      if (*unaff_x21 == 0) break;
      FUN_069a0cb0(*unaff_x21,iVar2,unaff_x22 & 0xffffffff,*(undefined8 *)PTR_DAT_08e8dd68);
    }
    unaff_x22 = unaff_x22 + 1;
    if (unaff_x22 == 0x37) {
      lVar7 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8df68);
      FUN_069a34ac(lVar7,*(undefined8 *)PTR_DAT_08e8df60);
      plVar9 = (long *)(unaff_x19 + 0x30);
      *plVar9 = lVar7;
      thunk_FUN_03d233cc(plVar9,lVar7);
      puVar5 = PTR_DAT_08e8df80;
      puVar4 = PTR_DAT_08e8df78;
      puVar3 = PTR_DAT_08e8df48;
      lVar7 = 10;
      goto LAB_06d6ef78;
    }
    param_1 = *(long *)(unaff_x19 + 0x10);
    if (param_1 == 0) break;
    if (*(uint *)(param_1 + 0x18) <= unaff_x22) goto LAB_06d6f03c;
    lVar7 = *(long *)(unaff_x19 + 0x18);
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06d6f03c;
    param_1 = param_1 + unaff_x22 * 4;
    in_x9 = lVar7 + unaff_x22 * 4;
    param_2 = *unaff_x27;
    unaff_x24 = *unaff_x20;
  }
LAB_06d6f038:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
LAB_06d6ef78:
  lVar8 = *(long *)(unaff_x19 + 0x20);
  if (lVar8 == 0) goto LAB_06d6f038;
  if ((ulong)*(uint *)(lVar8 + 0x18) <= lVar7 - 8U) {
LAB_06d6f03c:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb38();
  }
  iVar2 = *(int *)(lVar8 + lVar7 * 4);
  if (iVar2 != 0x56) {
    lVar8 = *plVar9;
    uVar6 = thunk_FUN_03cf5234(*(undefined8 *)puVar5);
    FUN_05cc059c(uVar6,lVar7 - 9U & 0xffffffff,iVar2,*(undefined8 *)puVar4);
    if (lVar8 == 0) goto LAB_06d6f038;
    FUN_069a428c(lVar8,lVar7 - 9U & 0xffffffff,uVar6,*(undefined8 *)puVar3);
  }
  lVar7 = lVar7 + 1;
  if (lVar7 == 0x5d) {
    return 1;
  }
  goto LAB_06d6ef78;
}


