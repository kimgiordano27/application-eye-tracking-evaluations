/*
FUNCTION_NAME: OVRManager$$SetColorScaleAndOffset
ENTRY_POINT: 0636970c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetColorScaleAndOffset(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  FUN_062855bc();
  if (unaff_x20 != 0) {
    uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
    lVar7 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07db5610,1);
    if (lVar7 != 0) {
      if ((unaff_x21 != 0) && (lVar8 = thunk_FUN_037787d0(), lVar8 == 0)) {
        uVar11 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 063698dc to 064698fb has its CatchHandler @ 06369910 */
        FUN_0373b680(uVar11,0);
      }
      puVar6 = PTR_DAT_07db5740;
      puVar5 = PTR_DAT_07db5738;
      puVar4 = PTR_DAT_07db56f8;
      puVar3 = PTR_DAT_07db56f0;
      puVar2 = PTR_DAT_07db56d8;
      puVar1 = PTR_DAT_07db5600;
      if (*(int *)(lVar7 + 0x18) != 0) {
        *(long *)(lVar7 + 0x20) = unaff_x21;
        thunk_FUN_037aeb94();
        uVar11 = FUN_03f7870c(uVar11,lVar7,*(undefined8 *)puVar1);
        uVar11 = FUN_03f781bc(uVar11,*(undefined8 *)puVar6);
        uVar9 = thunk_FUN_037788cc(*(undefined8 *)puVar4);
        FUN_05139308(uVar9,uVar11,*(undefined8 *)puVar3);
        puVar10 = (undefined8 *)(unaff_x19 + 0x18);
        *puVar10 = uVar9;
        thunk_FUN_037aeb94(puVar10,uVar9);
        uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
        uVar11 = thunk_FUN_037788cc(*(undefined8 *)puVar2);
        FUN_05b0ea30(uVar11,uVar9,*(undefined8 *)puVar5);
        *(undefined8 *)(unaff_x19 + 0x20) = uVar11;
        thunk_FUN_037aeb94((undefined8 *)(unaff_x19 + 0x20),uVar11);
        uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
        uVar11 = thunk_FUN_037788cc(*(undefined8 *)puVar2);
        FUN_05b0ea30(uVar11,uVar9,*(undefined8 *)puVar5);
        *(undefined8 *)(unaff_x19 + 0x28) = uVar11;
        thunk_FUN_037aeb94((undefined8 *)(unaff_x19 + 0x28),uVar11);
        uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
        uVar11 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db56e8);
        FUN_049ce7e8(uVar11,uVar9,*(undefined8 *)PTR_DAT_07db5748);
        *(undefined8 *)(unaff_x19 + 0x30) = uVar11;
        thunk_FUN_037aeb94((undefined8 *)(unaff_x19 + 0x30),uVar11);
        *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(unaff_x20 + 0x38);
        thunk_FUN_037aeb94();
        *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x20 + 0x40);
        thunk_FUN_037aeb94();
        uVar11 = FUN_06368ae0(*puVar10);
        *(undefined8 *)(unaff_x19 + 0x10) = uVar11;
        thunk_FUN_037aeb94((undefined8 *)(unaff_x19 + 0x10),uVar11);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


