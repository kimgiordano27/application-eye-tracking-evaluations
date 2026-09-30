/*
FUNCTION_NAME: OVRManager$$get_fixedFoveatedRenderingSupported
ENTRY_POINT: 06368d64
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 103
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_fixedFoveatedRenderingSupported(void)

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
  undefined8 *puVar10;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  FUN_0373b518(PTR_DAT_07db56d8);
  FUN_0373b518(PTR_DAT_07db5610);
  FUN_0373b518(PTR_DAT_07db56e0);
  FUN_0373b518(PTR_DAT_07db56e8);
  FUN_0373b518(PTR_DAT_07db56f0);
  FUN_0373b518(PTR_DAT_07db56f8);
  *(undefined1 *)(unaff_x22 + 0x43c) = 1;
  FUN_062855bc();
  lVar7 = RootMotion_FinalIK_Finger___ctor(*unaff_x21,1);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if ((unaff_x20 != 0) && (lVar8 = thunk_FUN_037787d0(), lVar8 == 0)) {
    uVar9 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar9,0);
  }
  puVar6 = PTR_DAT_07db56f8;
  puVar5 = PTR_DAT_07db56f0;
  puVar4 = PTR_DAT_07db56e8;
  puVar3 = PTR_DAT_07db56e0;
  puVar2 = PTR_DAT_07db56d8;
  puVar1 = PTR_DAT_07db56d0;
  if (*(int *)(lVar7 + 0x18) != 0) {
    *(long *)(lVar7 + 0x20) = unaff_x20;
    thunk_FUN_037aeb94();
    uVar9 = thunk_FUN_037788cc(*(undefined8 *)puVar6);
    FUN_05139308(uVar9,lVar7,*(undefined8 *)puVar5);
    puVar10 = (undefined8 *)(unaff_x19 + 0x18);
    *puVar10 = uVar9;
    thunk_FUN_037aeb94(puVar10,uVar9);
    uVar9 = thunk_FUN_037788cc(*(undefined8 *)puVar2);
    FUN_05b0e950(uVar9,*(undefined8 *)puVar1);
    *(undefined8 *)(unaff_x19 + 0x20) = uVar9;
    thunk_FUN_037aeb94((undefined8 *)(unaff_x19 + 0x20),uVar9);
    uVar9 = thunk_FUN_037788cc(*(undefined8 *)puVar2);
    FUN_05b0e950(uVar9,*(undefined8 *)puVar1);
    *(undefined8 *)(unaff_x19 + 0x28) = uVar9;
    thunk_FUN_037aeb94((undefined8 *)(unaff_x19 + 0x28),uVar9);
    uVar9 = thunk_FUN_037788cc(*(undefined8 *)puVar4);
    FUN_049ce6c0(uVar9,*(undefined8 *)puVar3);
    *(undefined8 *)(unaff_x19 + 0x30) = uVar9;
    thunk_FUN_037aeb94((undefined8 *)(unaff_x19 + 0x30),uVar9);
    uVar9 = FUN_06368ae0(*puVar10);
    *(undefined8 *)(unaff_x19 + 0x10) = uVar9;
    thunk_FUN_037aeb94((undefined8 *)(unaff_x19 + 0x10),uVar9);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7bc();
}


