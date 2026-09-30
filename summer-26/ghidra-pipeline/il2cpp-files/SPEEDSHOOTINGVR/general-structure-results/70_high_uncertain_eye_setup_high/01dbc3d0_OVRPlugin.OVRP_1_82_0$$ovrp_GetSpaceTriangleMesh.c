/*
FUNCTION_NAME: OVRPlugin.OVRP_1_82_0$$ovrp_GetSpaceTriangleMesh
ENTRY_POINT: 01dbc3d0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_82_0__ovrp_GetSpaceTriangleMesh(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_00fdc2e4();
  FUN_00fdc2e4(PTR_DAT_0234c680);
  FUN_00fdc2e4(PTR_DAT_0234bca8);
  FUN_00fdc2e4(PTR_DAT_0235a838);
  FUN_00fdc2e4(PTR_DAT_0235a840);
  *(undefined1 *)(unaff_x21 + 0xa59) = 1;
  if (unaff_x20 == 0) {
    thunk_FUN_010303a8(PTR_DAT_0234bbe8);
    uVar4 = thunk_FUN_010400dc();
    uVar6 = thunk_FUN_010303a8(PTR_DAT_0234d710);
    FUN_01c5e120(uVar4,uVar6,0);
    uVar6 = thunk_FUN_010303a8(PTR_DAT_0235a848);
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar4,uVar6);
  }
  if (*(int *)(*(long *)PTR_DAT_0234c670 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  puVar2 = PTR_DAT_0234bca8;
  if ((unaff_x19 != 0) && (iVar1 = *(int *)(unaff_x19 + 0x20), thunk_FUN_00ffe618(), 1 < iVar1)) {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar4 = FUN_01dbc264();
    return uVar4;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  if (DAT_0247bc6c == '\0') {
    FUN_00fdc2e4(PTR_DAT_0234bca8);
    DAT_0247bc6c = '\x01';
  }
  puVar3 = PTR_DAT_0234c680;
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01022c14();
    lVar5 = *(long *)puVar2;
  }
  lVar7 = *(long *)puVar3;
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x28);
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01022c14(lVar7);
  }
  if (DAT_0247b102 == '\0') {
    FUN_00fdc2e4(PTR_DAT_0234c680);
    DAT_0247b102 = '\x01';
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  puVar3 = PTR_DAT_0235a840;
  puVar2 = PTR_DAT_0235a838;
  if (lVar5 != 0) {
    uVar4 = FUN_011edb04(lVar5);
    uVar6 = thunk_FUN_010400dc(*(undefined8 *)puVar3);
    FUN_01aeade8(uVar6,uVar4,1,*(undefined8 *)puVar2);
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


