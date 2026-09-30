/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RoomMeshController.<UpdateVolume>d__5$$MoveNext
ENTRY_POINT: 04a1f540
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5__MoveNext(ushort *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  long unaff_x23;
  ulong uVar8;
  long unaff_x26;
  
  if ((*param_1 & 1) == 0) {
    FUN_02b76218();
  }
  if (unaff_x23 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = thunk_FUN_02b79548();
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44();
    }
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  *(long *)(unaff_x20 + 0x30) = lVar2;
  lVar2 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    FUN_02b76218(lVar2);
  }
  if (unaff_x23 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = thunk_FUN_02b79548();
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44();
    }
  }
  thunk_FUN_02bb0e9c((long *)(unaff_x20 + 0x30),lVar2);
  *(undefined4 *)(unaff_x20 + 0x28) = 0xffffffff;
  if (unaff_w22 == 0) {
    *(undefined8 *)(unaff_x20 + 0x10) = 0;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x20 + 0x10),0);
  }
  else {
    uVar3 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313588,unaff_w22);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
    thunk_FUN_02bb0e9c();
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x118);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218();
    }
    uVar3 = FUN_02b3c908(lVar2,unaff_w22);
    *(undefined8 *)(unaff_x20 + 0x18) = uVar3;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x20 + 0x18),uVar3);
    lVar2 = *(long *)(unaff_x20 + 0x40);
    uVar3 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x108);
    if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar3 = FUN_04d8a7b0(uVar3,0);
    if (lVar2 == 0) goto LAB_04a1f798;
    lVar2 = FUN_04c8ae78(lVar2,*(undefined8 *)PTR_DAT_06322b98,uVar3,0);
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02b76218(lVar6);
    }
    if (lVar2 == 0) {
      thunk_FUN_02ba3594(PTR_DAT_06320988);
      uVar3 = thunk_FUN_02b79644();
      uVar5 = thunk_FUN_02ba3594(PTR_DAT_06322ba8);
      FUN_04c82410(uVar3,uVar5,0);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar3);
    }
    lVar4 = thunk_FUN_02b79548(lVar2,lVar6);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44(lVar2,lVar6);
    }
    if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
      uVar8 = 0;
      uVar7 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      do {
        if (uVar7 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        FUN_04a21074();
        uVar7 = (ulong)*(uint *)(lVar4 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar4 + 0x18));
    }
  }
  if (*unaff_x21 != 0) {
    uVar1 = FUN_04c8d044(*unaff_x21,*(undefined8 *)PTR_DAT_06320978,0);
    *(undefined8 *)(unaff_x20 + 0x40) = 0;
    *(undefined4 *)(unaff_x20 + 0x38) = uVar1;
    thunk_FUN_02bb0e9c();
    return;
  }
LAB_04a1f798:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


