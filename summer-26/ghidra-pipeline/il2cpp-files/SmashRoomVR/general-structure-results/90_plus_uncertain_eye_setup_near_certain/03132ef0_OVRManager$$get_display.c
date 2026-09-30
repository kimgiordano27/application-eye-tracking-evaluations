/*
FUNCTION_NAME: OVRManager$$get_display
ENTRY_POINT: 03132ef0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager__get_display(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined4 *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar8;
  undefined4 uVar9;
  
  thunk_FUN_01ad9084(*(undefined8 *)(param_1 + 0x6f0));
  *(undefined1 *)(unaff_x22 + 0xea2) = 1;
  switch(unaff_x19[1]) {
  case 0:
    lVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d7f6f0);
    FUN_03134fec();
    uVar8 = *(undefined8 *)(unaff_x20 + 0x38);
    uVar3 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_356);
    FUN_03b25f1c(uVar3,uVar8,0);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x10) = uVar3;
      thunk_FUN_01b4f09c((undefined8 *)(lVar2 + 0x10),uVar3);
      uVar9 = unaff_x19[4];
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(unaff_x19 + 2);
      *(undefined4 *)(lVar2 + 0x30) = uVar9;
      if (*(long *)(unaff_x20 + 0x78) != 0) {
        FUN_0255ad40(*(long *)(unaff_x20 + 0x78),*unaff_x19,lVar2,*(undefined8 *)PTR_DAT_03d7f6e8);
        return;
      }
    }
    break;
  case 1:
    if (*(long *)(unaff_x20 + 0x78) == 0) break;
    lVar2 = FUN_0255aca0(*(long *)(unaff_x20 + 0x78),*unaff_x19,*(undefined8 *)PTR_DAT_03d7f6c0);
    if (*(long *)(unaff_x20 + 0x78) == 0) break;
    FUN_0255c1c8(*(long *)(unaff_x20 + 0x78),*unaff_x19,*(undefined8 *)PTR_DAT_03d7f6b0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_01b48178();
    }
    goto OVRManager__get_runtimeSettings;
  case 2:
    if (*(long *)(unaff_x20 + 0x78) != 0) {
      FUN_03b4bd0c(&PTR_DAT_03d7f000,*(long *)(unaff_x20 + 0x78),*unaff_x19);
      return;
    }
    break;
  case 3:
    if ((*(long *)(unaff_x20 + 0x78) != 0) &&
       (lVar2 = FUN_0255aca0(*(long *)(unaff_x20 + 0x78),*unaff_x19,*(undefined8 *)PTR_DAT_03d7f6c0)
       , lVar2 != 0)) {
      uVar9 = unaff_x19[4];
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(unaff_x19 + 2);
      *(undefined4 *)(lVar2 + 0x30) = uVar9;
      FUN_0313503c(lVar2,0);
      return;
    }
    break;
  case 4:
    if ((*(long *)(unaff_x20 + 0x78) != 0) &&
       (lVar2 = FUN_0255aca0(*(long *)(unaff_x20 + 0x78),*unaff_x19,*(undefined8 *)PTR_DAT_03d7f6c0)
       , lVar2 != 0)) {
      uVar9 = unaff_x19[4];
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(unaff_x19 + 2);
      *(undefined4 *)(lVar2 + 0x30) = uVar9;
      return;
    }
    break;
  case 5:
    if (*(long *)(unaff_x20 + 0x78) == 0) break;
    lVar2 = FUN_0255aca0(*(long *)(unaff_x20 + 0x78),*unaff_x19,*(undefined8 *)PTR_DAT_03d7f6c0);
    if ((*(long *)(unaff_x20 + 0x78) == 0) ||
       (uVar3 = FUN_0255c1c8(*(long *)(unaff_x20 + 0x78),*unaff_x19,*(undefined8 *)PTR_DAT_03d7f6b0)
       , lVar2 == 0)) break;
    FUN_03132da8(uVar3,*(undefined8 *)(lVar2 + 0x10));
OVRManager__get_runtimeSettings:
    FUN_0313506c(lVar2,0);
    lVar4 = *(long *)(unaff_x20 + 0x88);
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar4 + 0x10);
      lVar7 = *(long *)PTR_DAT_03d7f6e0;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar5 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
          *plVar6 = lVar2;
          thunk_FUN_01b4f09c(plVar6,lVar2);
          return;
        }
        FUN_02b599e4(lVar4,lVar2,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
    break;
  default:
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


