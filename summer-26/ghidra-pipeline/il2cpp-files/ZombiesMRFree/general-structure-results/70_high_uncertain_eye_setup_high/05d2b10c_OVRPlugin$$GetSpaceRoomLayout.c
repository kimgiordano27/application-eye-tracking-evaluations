/*
FUNCTION_NAME: OVRPlugin$$GetSpaceRoomLayout
ENTRY_POINT: 05d2b10c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceRoomLayout(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 *unaff_x23;
  
  FUN_02fe925c(PTR_DAT_06fb52e0);
  FUN_02fe925c(PTR_DAT_06fb8cb0);
  FUN_02fe925c(PTR_DAT_06fb8cc8);
  FUN_02fe925c(PTR_DAT_06fb8ca8);
  FUN_02fe925c(PTR_DAT_06fb8c98);
  FUN_02fe925c(PTR_DAT_06fb8cd0);
  FUN_02fe925c(PTR_DAT_06fb8cd8);
  *(undefined1 *)(unaff_x22 + 0x94a) = 1;
  lVar5 = thunk_FUN_0301080c(*unaff_x23);
  FUN_0442fab4(lVar5,*unaff_x20);
  lVar6 = thunk_FUN_0301080c(*unaff_x21);
  uVar10 = DAT_0136a9b0;
  *(undefined4 *)(lVar6 + 0x10) = 7;
  *(undefined8 *)(lVar6 + 0x14) = uVar10;
  FUN_05b32c00(lVar6,0);
  if (lVar5 != 0) {
    lVar8 = *(long *)(lVar5 + 0x10);
    lVar9 = *(long *)PTR_DAT_06fb8cc8;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    puVar4 = PTR_DAT_06fb8cd8;
    if (lVar8 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        plVar7 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
        *plVar7 = lVar6;
        thunk_FUN_03048534(plVar7,lVar6);
      }
      else {
        FUN_044302e8(lVar5,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      *(long *)(unaff_x19 + 0x40) = lVar5;
      thunk_FUN_03048534((long *)(unaff_x19 + 0x40),lVar5);
      *(undefined4 *)(unaff_x19 + 0x48) = 0x3d4ccccd;
      lVar5 = *(long *)puVar4;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar5 = *(long *)puVar4;
      }
      puVar3 = PTR_DAT_06fb8cc0;
      puVar2 = PTR_DAT_06fb8cb8;
      lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar6 == 0) {
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
          lVar5 = *(long *)puVar4;
        }
        uVar10 = **(undefined8 **)(lVar5 + 0xb8);
        lVar6 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fb52e0);
        FUN_057f1be4(lVar6,uVar10,*(undefined8 *)PTR_DAT_06fb8cd0,0);
        plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
        *plVar7 = lVar6;
        thunk_FUN_03048534(plVar7,lVar6);
      }
      *(long *)(unaff_x19 + 0x50) = lVar6;
      thunk_FUN_03048534((long *)(unaff_x19 + 0x50),lVar6);
      uVar10 = thunk_FUN_0301080c(*(undefined8 *)puVar3);
      FUN_052def30(uVar10,*(undefined8 *)puVar2);
      *(undefined8 *)(unaff_x19 + 0x58) = uVar10;
      thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0x58),uVar10);
      thunk_FUN_068f530c();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


