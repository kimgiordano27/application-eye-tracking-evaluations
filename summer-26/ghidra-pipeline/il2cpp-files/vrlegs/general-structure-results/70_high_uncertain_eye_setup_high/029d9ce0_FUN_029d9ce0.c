/*
FUNCTION_NAME: FUN_029d9ce0
ENTRY_POINT: 029d9ce0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029d9f5c) */
/* WARNING: Removing unreachable block (ram,0x029d9f6c) */

undefined8 FUN_029d9ce0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  char local_64 [4];
  
                    /* try { // try from 029d9d00 to 02ad9d03 has its CatchHandler @ 029da12c */
  if ((DAT_04127e85 & 1) == 0) {
                    /* try { // try from 029d9d10 to 02ad9d33 has its CatchHandler @ 029da0e0 */
    FUN_01ab69ac(PTR_DAT_03d08c00);
    FUN_01ab69ac(PTR_DAT_03d08e08);
    FUN_01ab69ac(PTR_DAT_03d08e10);
    FUN_01ab69ac(PTR_DAT_03d08e18);
    FUN_01ab69ac(PTR_DAT_03d08c08);
                    /* try { // try from 029d9d48 to 02ad9d4f has its CatchHandler @ 029da088 */
    FUN_01ab69ac(PTR_DAT_03d08c10);
    FUN_01ab69ac(PTR_DAT_03d08e20);
                    /* try { // try from 029d9d60 to 02ad9d63 has its CatchHandler @ 029da020 */
                    /* try { // try from 029d9d64 to 02ad9d6f has its CatchHandler @ 029da084 */
    FUN_01ab69ac(PTR_DAT_03d08c20);
    FUN_01ab69ac(PTR_DAT_03d08e28);
    FUN_01ab69ac(PTR_DAT_03d08c40);
                    /* try { // try from 029d9d84 to 02ad9d87 has its CatchHandler @ 029da12c */
                    /* try { // try from 029d9d88 to 02ad9d93 has its CatchHandler @ 029da054 */
    DAT_04127e85 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if ((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 0x18) == 0)) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined8 *)(param_1 + 0x28);
    local_64[0] = '\0';
                    /* try { // try from 029d9dac to 02ad9ddb has its CatchHandler @ 029da12c */
    FUN_027e0bd8(uVar12,local_64,0);
    lVar13 = *(long *)(param_1 + 0x28);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar11 = *(long *)PTR_DAT_03d08c10;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                    /* try { // try from 029d9ddc to 02ad9def has its CatchHandler @ 029da074 */
    uVar9 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 200));
    if ((uVar9 & 1) == 0) {
      *(undefined4 *)(lVar13 + 0x18) = 0;
    }
    else {
      iVar1 = *(int *)(lVar13 + 0x18);
      *(undefined4 *)(lVar13 + 0x18) = 0;
                    /* try { // try from 029d9dfc to 02ad9e0b has its CatchHandler @ 029da050 */
      if (0 < iVar1) {
        FUN_02793a34(*(undefined8 *)(lVar13 + 0x10),0,iVar1,0);
      }
    }
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    Animancer_FadeGroup__get_TargetWeight
              (*(long *)(param_1 + 0x10),&local_98,*(undefined8 *)PTR_DAT_03d08e20);
    puVar7 = PTR_DAT_03d08e28;
    puVar6 = PTR_DAT_03d08e18;
    puVar5 = PTR_DAT_03d08e10;
    puVar4 = PTR_DAT_03d08c40;
    puVar3 = PTR_DAT_03d08c08;
    puVar2 = PTR_DAT_03d08c00;
    uStack_78 = uStack_90;
    local_80 = local_98;
    local_70 = local_88;
    while (uVar9 = FUN_021b51c8(&local_80,*(undefined8 *)puVar5), (uVar9 & 1) != 0) {
      FUN_01b7a454(&local_80,&local_98,*(undefined8 *)puVar6);
      uVar8 = local_98;
      uVar10 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
      FUN_02060754(uVar10,param_1,*(undefined8 *)puVar7,0);
      lVar13 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
      FUN_029da054(lVar13,uVar8,uVar10);
      if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_01b5f01c(*(long *)(param_1 + 0x28),lVar13,*(undefined8 *)puVar3);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_029da100(lVar13);
    }
    FUN_021b51c4(&local_80,*(undefined8 *)PTR_DAT_03d08e08);
    if (local_64[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar12,0);
    }
    uVar12 = 1;
  }
  return uVar12;
}


