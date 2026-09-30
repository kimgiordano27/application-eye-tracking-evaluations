/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RoomMeshController.<LoadRoomMesh>d__6$$.ctor
ENTRY_POINT: 04a1e91c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_RoomMeshController_<LoadRoomMesh>d__6___ctor(void)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  
  thunk_FUN_02b9ad44();
  iVar3 = FUN_04d21ca8(unaff_w20 + 1,0);
  if (iVar3 < unaff_w23) {
    uVar1 = *(uint *)(unaff_x21 + 0x24);
    lVar5 = *(long *)(unaff_x21 + 0x18);
    FUN_04a20d98();
    if ((int)uVar1 < 1) {
      iVar3 = 0;
    }
    else {
      if (lVar5 == 0) goto LAB_04a1eafc;
      uVar6 = 0;
      iVar3 = 0;
      lVar4 = lVar5;
      do {
        if (*(uint *)(lVar5 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        if (-1 < *(int *)(lVar4 + 0x20)) {
          FUN_04a213c4();
          iVar3 = iVar3 + 1;
        }
        uVar6 = uVar6 + 1;
        lVar4 = lVar4 + 0x28;
      } while (uVar1 != uVar6);
    }
    *(int *)(unaff_x19 + 0x24) = iVar3;
  }
  else {
    if (*(long *)(unaff_x21 + 0x10) == 0) {
LAB_04a1eafc:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar5 = FUN_04d9e838(*(long *)(unaff_x21 + 0x10),0);
    puVar2 = PTR_DAT_06313588;
    if (lVar5 == 0) {
      lVar4 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
    }
    else {
      lVar7 = *(long *)PTR_DAT_06313588;
      lVar4 = thunk_FUN_02b79548(lVar5,lVar7);
      if (lVar4 == 0) goto LAB_04a1eabc;
      uVar8 = *(undefined8 *)puVar2;
      *(long *)(unaff_x19 + 0x10) = lVar4;
      lVar4 = thunk_FUN_02b79548(lVar5,uVar8);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3ce44(lVar5,uVar8);
      }
    }
    thunk_FUN_02bb0e9c(unaff_x19 + 0x10,lVar4);
    if (*(long *)(unaff_x21 + 0x18) == 0) goto LAB_04a1eafc;
    lVar5 = FUN_04d9e838(*(long *)(unaff_x21 + 0x18),0);
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x80);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02b76218(lVar7);
    }
    if (lVar5 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_02b79548(lVar5,lVar7);
      if (lVar4 == 0) goto LAB_04a1eabc;
    }
    lVar7 = *(long *)(unaff_x22 + 0x20);
    *(long *)(unaff_x19 + 0x18) = lVar4;
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x80);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02b76218(lVar7);
    }
    if (lVar5 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_02b79548(lVar5,lVar7);
      if (lVar4 == 0) {
LAB_04a1eabc:
                    /* WARNING: Subroutine does not return */
        FUN_02b3ce44(lVar5,lVar7);
      }
    }
    thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x18),lVar4);
    *(undefined8 *)(unaff_x19 + 0x24) = *(undefined8 *)(unaff_x21 + 0x24);
  }
  *(int *)(unaff_x19 + 0x20) = unaff_w20;
  return;
}


