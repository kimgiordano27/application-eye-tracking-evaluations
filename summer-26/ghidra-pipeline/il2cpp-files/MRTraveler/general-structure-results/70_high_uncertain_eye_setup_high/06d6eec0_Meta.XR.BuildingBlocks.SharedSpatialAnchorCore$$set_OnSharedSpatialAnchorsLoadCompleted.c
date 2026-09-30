/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SharedSpatialAnchorCore$$set_OnSharedSpatialAnchorsLoadCompleted
ENTRY_POINT: 06d6eec0
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
Meta_XR_BuildingBlocks_SharedSpatialAnchorCore__set_OnSharedSpatialAnchorsLoadCompleted
          (undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long *unaff_x20;
  long *plVar8;
  long *unaff_x21;
  ulong unaff_x22;
  int unaff_w23;
  long unaff_x24;
  undefined4 unaff_w26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  while( true ) {
    uVar5 = thunk_FUN_03cf5234(param_1);
    FUN_05cc059c(uVar5,unaff_x22 & 0xffffffff,unaff_w26,*unaff_x28);
    if (unaff_x24 == 0) break;
    FUN_069a428c(unaff_x24,unaff_x22 & 0xffffffff,uVar5,*unaff_x29);
    if (unaff_w23 != 0x56) {
      if (*unaff_x21 == 0) break;
      FUN_069a0cb0(*unaff_x21,unaff_w23,unaff_x22 & 0xffffffff,*(undefined8 *)PTR_DAT_08e8dd68);
    }
    unaff_x22 = unaff_x22 + 1;
    if (unaff_x22 == 0x37) {
      lVar6 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8df68);
      FUN_069a34ac(lVar6,*(undefined8 *)PTR_DAT_08e8df60);
      plVar8 = (long *)(unaff_x19 + 0x30);
      *plVar8 = lVar6;
      thunk_FUN_03d233cc(plVar8,lVar6);
      puVar4 = PTR_DAT_08e8df80;
      puVar3 = PTR_DAT_08e8df78;
      puVar2 = PTR_DAT_08e8df48;
      lVar6 = 10;
      goto LAB_06d6ef78;
    }
    lVar6 = *(long *)(unaff_x19 + 0x10);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_06d6f03c;
    lVar7 = *(long *)(unaff_x19 + 0x18);
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06d6f03c;
    param_1 = *unaff_x27;
    unaff_x24 = *unaff_x20;
    unaff_w26 = *(undefined4 *)(lVar6 + unaff_x22 * 4 + 0x20);
    unaff_w23 = *(int *)(lVar7 + unaff_x22 * 4 + 0x20);
  }
LAB_06d6f038:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
LAB_06d6ef78:
  lVar7 = *(long *)(unaff_x19 + 0x20);
  if (lVar7 == 0) goto LAB_06d6f038;
  if ((ulong)*(uint *)(lVar7 + 0x18) <= lVar6 - 8U) {
LAB_06d6f03c:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb38();
  }
  iVar1 = *(int *)(lVar7 + lVar6 * 4);
  if (iVar1 != 0x56) {
    lVar7 = *plVar8;
    uVar5 = thunk_FUN_03cf5234(*(undefined8 *)puVar4);
    FUN_05cc059c(uVar5,lVar6 - 9U & 0xffffffff,iVar1,*(undefined8 *)puVar3);
    if (lVar7 == 0) goto LAB_06d6f038;
    FUN_069a428c(lVar7,lVar6 - 9U & 0xffffffff,uVar5,*(undefined8 *)puVar2);
  }
  lVar6 = lVar6 + 1;
  if (lVar6 == 0x5d) {
    return 1;
  }
  goto LAB_06d6ef78;
}


