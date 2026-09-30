/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RoomMeshController.<Start>d__4$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 04a1f534
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


void Meta_XR_BuildingBlocks_RoomMeshController_<Start>d__4__System_Collections_IEnumerator_get_Current
               (long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  long unaff_x23;
  ulong uVar7;
  long lVar8;
  long unaff_x26;
  
  lVar8 = *(long *)(*(long *)(param_1 + 0xc0) + 0x20);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    FUN_02b76218(lVar8);
  }
  if (unaff_x23 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = thunk_FUN_02b79548();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44();
    }
  }
  lVar5 = *(long *)(unaff_x19 + 0x20);
  *(long *)(unaff_x20 + 0x30) = lVar8;
  lVar8 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    FUN_02b76218(lVar8);
  }
  if (unaff_x23 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = thunk_FUN_02b79548();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44();
    }
  }
  thunk_FUN_02bb0e9c((long *)(unaff_x20 + 0x30),lVar8);
  *(undefined4 *)(unaff_x20 + 0x28) = 0xffffffff;
  if (unaff_w22 == 0) {
    *(undefined8 *)(unaff_x20 + 0x10) = 0;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x20 + 0x10),0);
  }
  else {
    uVar2 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313588,unaff_w22);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
    thunk_FUN_02bb0e9c();
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x118);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02b76218();
    }
    uVar2 = FUN_02b3c908(lVar8,unaff_w22);
    *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x20 + 0x18),uVar2);
    lVar8 = *(long *)(unaff_x20 + 0x40);
    uVar2 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x108);
    if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar2 = FUN_04d8a7b0(uVar2,0);
    if (lVar8 == 0) goto LAB_04a1f798;
    lVar8 = FUN_04c8ae78(lVar8,*(undefined8 *)PTR_DAT_06322b98,uVar2,0);
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02b76218(lVar5);
    }
    if (lVar8 == 0) {
      thunk_FUN_02ba3594(PTR_DAT_06320988);
      uVar2 = thunk_FUN_02b79644();
      uVar4 = thunk_FUN_02ba3594(PTR_DAT_06322ba8);
      FUN_04c82410(uVar2,uVar4,0);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar2);
    }
    lVar3 = thunk_FUN_02b79548(lVar8,lVar5);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44(lVar8,lVar5);
    }
    if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
      uVar7 = 0;
      uVar6 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
      do {
        if (uVar6 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        FUN_04a21074();
        uVar6 = (ulong)*(uint *)(lVar3 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)(int)*(uint *)(lVar3 + 0x18));
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


