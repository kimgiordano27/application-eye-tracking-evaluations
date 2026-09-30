/*
FUNCTION_NAME: FUN_03132e8c
ENTRY_POINT: 03132e8c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_03132e8c(long param_1,undefined8 param_2,undefined4 *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  
  if ((DAT_03ff1ea2 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d7f6e8);
    thunk_FUN_01ad9084(PTR_DAT_03d7f6b0);
    thunk_FUN_01ad9084(PTR_DAT_03d7f6c0);
    thunk_FUN_01ad9084(PTR_DAT_03d7f6e0);
    thunk_FUN_01ad9084(StringLiteral_356);
    thunk_FUN_01ad9084(PTR_DAT_03d7f6f0);
    DAT_03ff1ea2 = 1;
  }
  switch(param_3[1]) {
  case 0:
    lVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d7f6f0);
    FUN_03134fec(lVar2,param_2,0);
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_356);
    FUN_03b25f1c(uVar3,uVar8,0);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x10) = uVar3;
      thunk_FUN_01b4f09c((undefined8 *)(lVar2 + 0x10),uVar3);
      uVar9 = param_3[4];
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_3 + 2);
      *(undefined4 *)(lVar2 + 0x30) = uVar9;
      if (*(long *)(param_1 + 0x78) != 0) {
        FUN_0255ad40(*(long *)(param_1 + 0x78),*param_3,lVar2,*(undefined8 *)PTR_DAT_03d7f6e8);
        return;
      }
    }
    break;
  case 1:
    if (*(long *)(param_1 + 0x78) == 0) break;
    lVar2 = FUN_0255aca0(*(long *)(param_1 + 0x78),*param_3,*(undefined8 *)PTR_DAT_03d7f6c0);
    if (*(long *)(param_1 + 0x78) == 0) break;
    FUN_0255c1c8(*(long *)(param_1 + 0x78),*param_3,*(undefined8 *)PTR_DAT_03d7f6b0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_01b48178();
    }
    goto OVRManager__get_runtimeSettings;
  case 2:
    if (*(long *)(param_1 + 0x78) != 0) {
      FUN_03b4bd0c(&PTR_DAT_03d7f000,*(long *)(param_1 + 0x78),*param_3);
      return;
    }
    break;
  case 3:
    if ((*(long *)(param_1 + 0x78) != 0) &&
       (lVar2 = FUN_0255aca0(*(long *)(param_1 + 0x78),*param_3,*(undefined8 *)PTR_DAT_03d7f6c0),
       lVar2 != 0)) {
      uVar9 = param_3[4];
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_3 + 2);
      *(undefined4 *)(lVar2 + 0x30) = uVar9;
      FUN_0313503c(lVar2,0);
      return;
    }
    break;
  case 4:
    if ((*(long *)(param_1 + 0x78) != 0) &&
       (lVar2 = FUN_0255aca0(*(long *)(param_1 + 0x78),*param_3,*(undefined8 *)PTR_DAT_03d7f6c0),
       lVar2 != 0)) {
      uVar9 = param_3[4];
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_3 + 2);
      *(undefined4 *)(lVar2 + 0x30) = uVar9;
      return;
    }
    break;
  case 5:
    if (*(long *)(param_1 + 0x78) == 0) break;
    lVar2 = FUN_0255aca0(*(long *)(param_1 + 0x78),*param_3,*(undefined8 *)PTR_DAT_03d7f6c0);
    if ((*(long *)(param_1 + 0x78) == 0) ||
       (uVar3 = FUN_0255c1c8(*(long *)(param_1 + 0x78),*param_3,*(undefined8 *)PTR_DAT_03d7f6b0),
       lVar2 == 0)) break;
    FUN_03132da8(uVar3,*(undefined8 *)(lVar2 + 0x10));
OVRManager__get_runtimeSettings:
    FUN_0313506c(lVar2,0);
    lVar4 = *(long *)(param_1 + 0x88);
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


