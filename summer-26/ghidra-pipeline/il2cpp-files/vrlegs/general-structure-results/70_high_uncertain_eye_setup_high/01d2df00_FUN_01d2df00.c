/*
FUNCTION_NAME: FUN_01d2df00
ENTRY_POINT: 01d2df00
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


/* WARNING: Removing unreachable block (ram,0x01d2e17c) */
/* WARNING: Removing unreachable block (ram,0x01d2e18c) */

undefined8 FUN_01d2df00(long param_1)

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
  
  if ((DAT_04120dfd & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03ccab28);
                    /* try { // try from 01d2df38 to 01e2df47 has its CatchHandler @ 01d2df4c */
    FUN_01ab69ac(PTR_DAT_03cca890);
                    /* try { // try from 01d2df48 to 01e2df4f has its CatchHandler @ 01d2db80 */
                    /* catch() { ... } // from try @ 01d2dec4 with catch @ 01d2df4c
                       catch() { ... } // from try @ 01d2df38 with catch @ 01d2df4c */
    FUN_01ab69ac(PTR_DAT_03cca898);
                    /* try { // try from 01d2df50 to 01e2df53 has its CatchHandler @ 01d2df5c */
                    /* try { // try from 01d2df54 to 01e2df5f has its CatchHandler @ 01d2db80 */
    FUN_01ab69ac(PTR_DAT_03cca8a0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01d2df50 with catch @ 01d2df5c
                        */
    FUN_01ab69ac(PTR_DAT_03ccab30);
    FUN_01ab69ac(PTR_DAT_03ccab38);
    FUN_01ab69ac(PTR_DAT_03cca8a8);
    FUN_01ab69ac(PTR_DAT_03ccab48);
    FUN_01ab69ac(PTR_DAT_03ccab88);
    FUN_01ab69ac(PTR_DAT_03ccaae0);
    DAT_04120dfd = 1;
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
    FUN_027e0bd8(uVar12,local_64,0);
    lVar13 = *(long *)(param_1 + 0x28);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar11 = *(long *)PTR_DAT_03ccab38;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    uVar9 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 200));
    if ((uVar9 & 1) == 0) {
      *(undefined4 *)(lVar13 + 0x18) = 0;
    }
    else {
      iVar1 = *(int *)(lVar13 + 0x18);
      *(undefined4 *)(lVar13 + 0x18) = 0;
      if (0 < iVar1) {
        FUN_02793a34(*(undefined8 *)(lVar13 + 0x10),0,iVar1,0);
      }
    }
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    Animancer_FadeGroup__get_TargetWeight
              (*(long *)(param_1 + 0x10),&local_98,*(undefined8 *)PTR_DAT_03cca8a8);
    puVar7 = PTR_DAT_03ccab88;
    puVar6 = PTR_DAT_03ccab30;
    puVar5 = PTR_DAT_03ccab28;
    puVar4 = PTR_DAT_03ccaae0;
    puVar3 = PTR_DAT_03cca8a0;
    puVar2 = PTR_DAT_03cca898;
    uStack_78 = uStack_90;
    local_80 = local_98;
    local_70 = local_88;
    while (uVar9 = FUN_021b51c8(&local_80,*(undefined8 *)puVar2), (uVar9 & 1) != 0) {
      FUN_01b7a454(&local_80,&local_98,*(undefined8 *)puVar3);
      uVar8 = local_98;
      uVar10 = thunk_FUN_01a89e68(*(undefined8 *)puVar5);
      FUN_02060754(uVar10,param_1,*(undefined8 *)puVar7,0);
      lVar13 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
      FUN_01d2e274(lVar13,uVar8,uVar10);
      if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_01b5f01c(*(long *)(param_1 + 0x28),lVar13,*(undefined8 *)puVar6);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_01d2e324(lVar13);
    }
    FUN_021b51c4(&local_80,*(undefined8 *)PTR_DAT_03cca890);
    if (local_64[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar12,0);
    }
    uVar12 = 1;
  }
  return uVar12;
}


