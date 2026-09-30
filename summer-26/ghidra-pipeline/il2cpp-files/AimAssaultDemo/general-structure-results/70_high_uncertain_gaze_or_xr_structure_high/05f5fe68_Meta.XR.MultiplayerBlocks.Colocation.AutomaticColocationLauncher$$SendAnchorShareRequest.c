/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$SendAnchorShareRequest
ENTRY_POINT: 05f5fe68
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long * Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__SendAnchorShareRequest
                 (void)

{
  byte bVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long *unaff_x24;
  long unaff_x25;
  
  FUN_062519f8();
  uVar3 = FUN_0625ad04();
  if ((uVar3 & 1) != 0) {
    plVar4 = (long *)thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d98318);
    FUN_061efe40(plVar4,0);
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03775678();
    }
    plVar7 = *(long **)(lVar5 + 0xc0);
    goto LAB_05f5ff80;
  }
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03775678();
  }
  uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x28);
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70(*(long *)(unaff_x25 + 0xe0));
  }
  plVar4 = (long *)FUN_062519f8(uVar9,0);
  if (plVar4 == (long *)0x0) {
LAB_05f602c0:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  uVar3 = (**(code **)(*plVar4 + 0x2a8))();
  if ((uVar3 & 1) == 0) {
    if (unaff_x20 == (long *)0x0) goto LAB_05f602c0;
    uVar3 = (**(code **)(*unaff_x20 + 0x3c8))();
    if ((uVar3 & 1) == 0) {
LAB_05f601a4:
                    /* catch() { ... } // from try @ 05f600b8 with catch @ 05f601a4
                       catch() { ... } // from try @ 05f600f4 with catch @ 05f601a4
                       catch() { ... } // from try @ 05f60120 with catch @ 05f601a4
                       catch() { ... } // from try @ 05f60194 with catch @ 05f601a4 */
                    /* try { // try from 05f601a8 to 060601ab has its CatchHandler @ 05f601b4 */
                    /* try { // try from 05f601ac to 060601b7 has its CatchHandler @ 05f5ff54 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05f601a8 with catch @ 05f601b4
                        */
      uVar3 = (**(code **)(*unaff_x20 + 0x5b8))();
                    /* catch() { ... } // from try @ 05f60264 with catch @ 05f601b8
                       catch() { ... } // from try @ 05f602b4 with catch @ 05f601b8
                       catch() { ... } // from try @ 05f602e0 with catch @ 05f601b8
                       catch() { ... } // from try @ 05f60354 with catch @ 05f601b8 */
      if ((uVar3 & 1) == 0) {
switchD_05f6021c_default:
        lVar5 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03775678();
        }
                    /* try { // try from 05f6024c to 06060263 has its CatchHandler @ 05f60284 */
        if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
          FUN_03775678();
        }
        plVar4 = (long *)thunk_FUN_037788cc();
        lVar5 = *(long *)(unaff_x19 + 0x20);
                    /* try { // try from 05f60264 to 0606029b has its CatchHandler @ 05f601b8 */
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03775678(lVar5);
        }
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 05f601f4 with catch @ 05f6027c
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 05f60220 with catch @ 05f60280
                        */
        FUN_04f18a2c(plVar4,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
        return plVar4;
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 05f6024c with catch @ 05f60284
                        */
      }
      if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar9 = FUN_06276e18();
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)(unaff_x25 + 0xe0));
      }
                    /* try { // try from 05f601f4 to 060601f7 has its CatchHandler @ 05f6027c */
      uVar2 = FUN_0625d834(uVar9,0);
      switch(uVar2) {
      case 5:
                    /* try { // try from 05f6029c to 060602b3 has its CatchHandler @ 05f6034c */
        lVar5 = *(long *)(unaff_x25 + 0xe0);
        puVar8 = (undefined8 *)PTR_DAT_07d98338;
        break;
      case 6:
      case 8:
      case 9:
      case 10:
                    /* try { // try from 05f60220 to 0606022f has its CatchHandler @ 05f60280 */
        lVar5 = *(long *)(unaff_x25 + 0xe0);
        puVar8 = (undefined8 *)PTR_DAT_07d98300;
        break;
      case 7:
        lVar5 = *(long *)(unaff_x25 + 0xe0);
        puVar8 = (undefined8 *)PTR_DAT_07d98340;
                    /* try { // try from 05f602b4 to 060602c7 has its CatchHandler @ 05f601b8 */
        break;
      case 0xb:
      case 0xc:
        lVar5 = *(long *)(unaff_x25 + 0xe0);
        puVar8 = (undefined8 *)PTR_DAT_07d98320;
        break;
      default:
        goto switchD_05f6021c_default;
      }
      goto LAB_05f5ff1c;
    }
    uVar9 = (**(code **)(*unaff_x20 + 0x458))();
    uVar10 = *(undefined8 *)PTR_DAT_07d98330;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)(unaff_x25 + 0xe0));
    }
    uVar10 = FUN_062519f8(uVar10,0);
    uVar3 = FUN_0625ad04(uVar9,uVar10,0);
    if ((uVar3 & 1) == 0) goto LAB_05f601a4;
    lVar5 = (**(code **)(*unaff_x20 + 0x478))();
    if (lVar5 == 0) goto LAB_05f602c0;
    if (*(int *)(lVar5 + 0x18) == 0) {
LAB_05f602c4:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    plVar4 = *(long **)(lVar5 + 0x20);
    if (plVar4 != (long *)0x0) {
      bVar1 = *(byte *)(*unaff_x24 + 0x130);
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 05f5ff88 with catch @ 05f60094
                       try { // try from 05f60094 to 060600b7 has its CatchHandler @ 05f5ff54 */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 05f5ffa4 with catch @ 05f600a0
                        */
      if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* try { // try from 05f602c8 to 060602df has its CatchHandler @ 05f6034c */
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54(plVar4);
      }
    }
    uVar9 = *(undefined8 *)PTR_DAT_07d98310;
                    /* try { // try from 05f600b8 to 060600cf has its CatchHandler @ 05f601a4 */
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    plVar7 = (long *)FUN_062519f8(uVar9,0);
                    /* try { // try from 05f600d0 to 060600f3 has its CatchHandler @ 05f5ff54 */
    plVar6 = (long *)RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07d92630,1);
    if (plVar6 == (long *)0x0) goto LAB_05f602c0;
                    /* try { // try from 05f600f4 to 0606010b has its CatchHandler @ 05f601a4 */
    if ((plVar4 != (long *)0x0) &&
       (lVar5 = thunk_FUN_037787d0(plVar4,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0)) {
      uVar9 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar9,0);
    }
                    /* try { // try from 05f6010c to 0606011f has its CatchHandler @ 05f5ff54 */
    if ((int)plVar6[3] == 0) goto LAB_05f602c4;
    plVar6[4] = (long)plVar4;
    thunk_FUN_037aeb94(plVar6 + 4,plVar4);
                    /* try { // try from 05f60120 to 06060137 has its CatchHandler @ 05f601a4 */
                    /* try { // try from 05f60138 to 06060193 has its CatchHandler @ 05f5ff54 */
    if ((plVar7 == (long *)0x0) ||
       (plVar7 = (long *)(**(code **)(*plVar7 + 0x978))
                                   (plVar7,plVar6,*(undefined8 *)(*plVar7 + 0x980)),
       plVar7 == (long *)0x0)) goto LAB_05f602c0;
    uVar3 = (**(code **)(*plVar7 + 0x2a8))(plVar7,plVar4,*(undefined8 *)(*plVar7 + 0x2b0));
    if ((uVar3 & 1) == 0) goto LAB_05f601a4;
    uVar9 = *(undefined8 *)PTR_DAT_07d98328;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar9 = FUN_062519f8(uVar9,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
                    /* try { // try from 05f60194 to 060601a3 has its CatchHandler @ 05f601a4 */
      thunk_FUN_03798b70(*unaff_x24);
    }
  }
  else {
    lVar5 = *(long *)(unaff_x25 + 0xe0);
    puVar8 = (undefined8 *)PTR_DAT_07d98308;
LAB_05f5ff1c:
    uVar9 = *puVar8;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar9 = FUN_062519f8(uVar9,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03798b70(*unaff_x24);
    }
  }
  plVar4 = (long *)FUN_06284508(uVar9);
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
  }
  plVar7 = *(long **)(lVar5 + 0xc0);
LAB_05f5ff80:
  lVar5 = *plVar7;
                    /* try { // try from 05f5ff88 to 0605ff8b has its CatchHandler @ 05f60094 */
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
  }
  if (plVar4 != (long *)0x0) {
                    /* try { // try from 05f5ffa4 to 06060093 has its CatchHandler @ 05f600a0 */
    if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5)) {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(plVar4);
    }
  }
  return plVar4;
}


