/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.Fusion.FusionNetworkData$$AddPlayerRpc
ENTRY_POINT: 052fb88c
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionNetworkData__AddPlayerRpc(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long unaff_x19;
  long *plVar5;
  long unaff_x20;
  long *plVar6;
  long lVar7;
  long *unaff_x22;
  
  FUN_02f07e70(PTR_DAT_06d3e0a8);
  FUN_02f07e70(PTR_DAT_06d3e0b0);
  FUN_02f07e70(PTR_DAT_06d3e0b8);
  FUN_02f07e70(PTR_DAT_06d3e0c0);
  FUN_02f07e70(PTR_DAT_06d01e20);
  FUN_02f07e70(PTR_DAT_06d3e0c8);
  FUN_02f07e70(PTR_DAT_06d3e0d0);
  FUN_02f07e70(PTR_DAT_06d3e0d8);
  *(undefined1 *)(unaff_x20 + 0x24f) = 1;
  plVar6 = (long *)(unaff_x19 + 0x70);
  lVar7 = *plVar6;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar4 = FUN_066ca6a0(lVar7,0,0);
  puVar3 = PTR_DAT_06d3e0b8;
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar7 = FUN_03b4e51c(0,*(undefined8 *)puVar3);
    if (lVar7 == 0) goto LAB_052fba80;
    if (*(long *)(lVar7 + 0x18) == 0) {
      FUN_052fb474(*(undefined8 *)PTR_DAT_06d3e0c8);
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
                    /* try { // try from 052fb9ac to 053fba0b has its CatchHandler @ 052fbaf0 */
      lVar7 = FUN_03b4e51c(0,*(undefined8 *)PTR_DAT_06d3e0c0);
      if (lVar7 == 0) goto LAB_052fba80;
      if (*(long *)(lVar7 + 0x18) == 0) goto LAB_052fb9f4;
      if ((int)*(long *)(lVar7 + 0x18) == 0) goto LAB_052fba84;
      *plVar6 = *(long *)(lVar7 + 0x20);
      thunk_FUN_02f411dc(plVar6);
      iVar1 = *(int *)(lVar7 + 0x18);
      puVar2 = (undefined8 *)PTR_DAT_06d3e0d8;
    }
    else {
      if ((int)*(long *)(lVar7 + 0x18) == 0) {
LAB_052fba84:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      *plVar6 = *(long *)(lVar7 + 0x20);
      thunk_FUN_02f411dc(plVar6);
      iVar1 = *(int *)(lVar7 + 0x18);
                    /* try { // try from 052fb96c to 053fb993 has its CatchHandler @ 052fbaec */
      puVar2 = (undefined8 *)PTR_DAT_06d3e0d0;
    }
    if (1 < iVar1) {
      FUN_052fc3fc(*puVar2);
    }
  }
LAB_052fb9f4:
  plVar5 = (long *)(unaff_x19 + 0x10);
  if (*plVar5 == 0) {
    if ((*plVar6 == 0) || (lVar7 = FUN_066c67ec(*plVar6,0), lVar7 == 0)) {
LAB_052fba80:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
                    /* try { // try from 052fba18 to 053fba23 has its CatchHandler @ 052fbae8 */
    lVar7 = FUN_03a8638c(lVar7,*(undefined8 *)PTR_DAT_06d3e0b0);
                    /* try { // try from 052fba24 to 053fbad7 has its CatchHandler @ 052fb868 */
    *plVar5 = lVar7;
    thunk_FUN_02f411dc(plVar5,lVar7);
    if (*plVar5 == 0) {
      if ((*plVar6 == 0) || (lVar7 = FUN_066c67ec(*plVar6,0), lVar7 == 0)) goto LAB_052fba80;
      lVar7 = FUN_03a862a4(lVar7,*(undefined8 *)PTR_DAT_06d3e0a8);
      *plVar5 = lVar7;
      thunk_FUN_02f411dc(plVar5,lVar7);
    }
  }
  return 1;
}


