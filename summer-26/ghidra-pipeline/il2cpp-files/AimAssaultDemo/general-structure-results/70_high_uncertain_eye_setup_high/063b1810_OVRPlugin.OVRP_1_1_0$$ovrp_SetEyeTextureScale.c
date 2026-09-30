/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetEyeTextureScale
ENTRY_POINT: 063b1810
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_1_0__ovrp_SetEyeTextureScale(long param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long *plVar9;
  int iVar10;
  int iVar11;
  
                    /* catch() { ... } // from try @ 063b15cc with catch @ 063b1810 */
                    /* catch() { ... } // from try @ 063b14b8 with catch @ 063b1814 */
  FUN_0373b518(*(undefined8 *)(param_1 + 0x838));
                    /* catch() { ... } // from try @ 063b15b4 with catch @ 063b1818 */
                    /* catch() { ... } // from try @ 063b14a0 with catch @ 063b181c */
  *(undefined1 *)(unaff_x21 + 0x6cd) = 1;
  puVar2 = PTR_DAT_07d8c838;
  if (unaff_w20 == 0) {
    return **(undefined8 **)(*(long *)(PTR_DAT_07d86548 + 0x90) + 0xb8);
  }
  FUN_063b1684();
  iVar10 = 0;
                    /* try { // try from 063b1838 to 064b183b has its CatchHandler @ 063b1848 */
  iVar11 = 0;
  plVar9 = (long *)0x0;
  do {
    plVar6 = *(long **)(unaff_x19 + 0x78);
                    /* catch() { ... } // from try @ 063b1838 with catch @ 063b1848 */
    if (plVar6 == (long *)0x0) {
LAB_063b19f4:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
                    /* try { // try from 063b1860 to 064b187f has its CatchHandler @ 063b190c */
    iVar3 = 0x80 - iVar10;
    if (unaff_w20 - iVar11 <= 0x80 - iVar10) {
      iVar3 = unaff_w20 - iVar11;
    }
    iVar3 = (**(code **)(*plVar6 + 0x2b8))
                      (plVar6,*(undefined8 *)(unaff_x19 + 0x88),iVar10,iVar3,
                       *(undefined8 *)(*plVar6 + 0x2c0));
    if (iVar3 == 0) {
      thunk_FUN_037a15ac(PTR_DAT_07d8ef30);
      uVar7 = thunk_FUN_037788cc();
      uVar8 = thunk_FUN_037a15ac(PTR_DAT_07dad548);
      FUN_061f127c(uVar7,uVar8,0);
      uVar8 = thunk_FUN_037a15ac(PTR_DAT_07db70b0);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar7,uVar8);
    }
    iVar1 = iVar3 + iVar10;
                    /* catch() { ... } // from try @ 063b16b4 with catch @ 063b1880
                       try { // try from 063b1880 to 064b18bb has its CatchHandler @ 063b141c */
                    /* catch() { ... } // from try @ 063b1700 with catch @ 063b1884
                       catch() { ... } // from try @ 063b17c8 with catch @ 063b1884 */
    if (iVar1 == unaff_w20) {
      plVar9 = (long *)FUN_060dca3c(0);
      if (plVar9 != (long *)0x0) {
        uVar5 = (**(code **)(*plVar9 + 0x2e8))
                          (plVar9,*(undefined8 *)(unaff_x19 + 0x88),0,unaff_w20,
                           *(undefined8 *)(unaff_x19 + 0x90),0,*(undefined8 *)(*plVar9 + 0x2f0));
        uVar7 = FUN_060c7254(0,*(undefined8 *)(unaff_x19 + 0x90),0,uVar5,0);
        return uVar7;
      }
      goto LAB_063b19f4;
    }
                    /* catch() { ... } // from try @ 063b1718 with catch @ 063b1888
                       catch() { ... } // from try @ 063b17cc with catch @ 063b1888 */
    uVar4 = FUN_063b1754();
    if (plVar9 == (long *)0x0) {
      plVar9 = (long *)thunk_FUN_037788cc(*(undefined8 *)puVar2);
      FUN_060cc794(plVar9,unaff_w20,0);
    }
    plVar6 = (long *)FUN_060dca3c(0);
    if (plVar6 == (long *)0x0) goto LAB_063b19f4;
    uVar5 = (**(code **)(*plVar6 + 0x2e8))
                      (plVar6,*(undefined8 *)(unaff_x19 + 0x88),0,uVar4 + 1,
                       *(undefined8 *)(unaff_x19 + 0x90),0,*(undefined8 *)(*plVar6 + 0x2f0));
    if (plVar9 == (long *)0x0) goto LAB_063b19f4;
    FUN_060cde14(plVar9,*(undefined8 *)(unaff_x19 + 0x90),0,uVar5,0);
    iVar10 = 0;
    if ((int)uVar4 < iVar1 + -1) {
      iVar10 = iVar1 + ~uVar4;
      FUN_06265b84(*(undefined8 *)(unaff_x19 + 0x88),uVar4 + 1,*(undefined8 *)(unaff_x19 + 0x88),0,
                   iVar10,0);
    }
    iVar11 = iVar3 + iVar11;
    if (unaff_w20 <= iVar11) {
                    /* WARNING: Could not recover jumptable at 0x063b1964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
      return uVar7;
    }
  } while( true );
}


