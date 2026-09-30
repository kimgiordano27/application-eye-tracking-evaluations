/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StartDiscoveringColocationSessions>d__19$$MoveNext
ENTRY_POINT: 05f5d3c4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


long * Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StartDiscoveringColocationSessions>d__19__MoveNext
                 (long param_1)

{
  byte bVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  int in_w9;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long *unaff_x24;
  long unaff_x25;
  
  if (in_w9 == 0) {
    thunk_FUN_03798b70();
  }
  FUN_062519f8(param_1 + 0x20,0);
  uVar3 = FUN_0625ad04();
  if ((uVar3 & 1) != 0) {
                    /* try { // try from 05f5d3f0 to 0605d3ff has its CatchHandler @ 05f5d400 */
    plVar4 = (long *)thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d98318);
                    /* catch() { ... } // from try @ 05f5d314 with catch @ 05f5d400
                       catch() { ... } // from try @ 05f5d350 with catch @ 05f5d400
                       catch() { ... } // from try @ 05f5d37c with catch @ 05f5d400
                       catch() { ... } // from try @ 05f5d3f0 with catch @ 05f5d400 */
                    /* try { // try from 05f5d404 to 0605d407 has its CatchHandler @ 05f5d410 */
                    /* try { // try from 05f5d408 to 0605d413 has its CatchHandler @ 05f5d1b0 */
    FUN_061efe40(plVar4,0);
    lVar5 = *(long *)(unaff_x19 + 0x20);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05f5d404 with catch @ 05f5d410
                        */
                    /* catch() { ... } // from try @ 05f5d4a4 with catch @ 05f5d414
                       catch() { ... } // from try @ 05f5d4f0 with catch @ 05f5d414
                       catch() { ... } // from try @ 05f5d51c with catch @ 05f5d414
                       catch() { ... } // from try @ 05f5d590 with catch @ 05f5d414 */
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03775678();
    }
    plVar7 = *(long **)(lVar5 + 0xc0);
    goto LAB_05f5d4e8;
  }
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03775678();
  }
  uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x28);
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70(*(long *)(unaff_x25 + 0xe0));
  }
                    /* try { // try from 05f5d450 to 0605d453 has its CatchHandler @ 05f5d4b8 */
  plVar4 = (long *)FUN_062519f8(uVar9,0);
  if (plVar4 == (long *)0x0) {
LAB_05f5d828:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
                    /* try { // try from 05f5d46c to 0605d47b has its CatchHandler @ 05f5d4bc */
  uVar3 = (**(code **)(*plVar4 + 0x2a8))();
  if ((uVar3 & 1) == 0) {
    if (unaff_x20 == (long *)0x0) goto LAB_05f5d828;
    uVar3 = (**(code **)(*unaff_x20 + 0x3c8))();
    if ((uVar3 & 1) == 0) {
LAB_05f5d70c:
      uVar3 = (**(code **)(*unaff_x20 + 0x5b8))();
                    /* try { // try from 05f5d720 to 0605d72f has its CatchHandler @ 05f5d730 */
      if ((uVar3 & 1) == 0) {
Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StopAdvertisingColocationSession>d__18__MoveNext:
        lVar5 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03775678();
        }
        if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
          FUN_03775678();
        }
        plVar4 = (long *)thunk_FUN_037788cc();
        lVar5 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03775678(lVar5);
        }
        FUN_04f17d54(plVar4,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
        return plVar4;
      }
      if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 05f5d648 with catch @ 05f5d730
                       catch() { ... } // from try @ 05f5d680 with catch @ 05f5d730
                       catch() { ... } // from try @ 05f5d6ac with catch @ 05f5d730
                       catch() { ... } // from try @ 05f5d720 with catch @ 05f5d730 */
        thunk_FUN_03798b70();
      }
                    /* try { // try from 05f5d734 to 0605d737 has its CatchHandler @ 05f5d740 */
                    /* try { // try from 05f5d738 to 0605d743 has its CatchHandler @ 05f5d59c */
      uVar9 = FUN_06276e18();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05f5d734 with catch @ 05f5d740
                        */
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)(unaff_x25 + 0xe0));
      }
      uVar2 = FUN_0625d834(uVar9,0);
      switch(uVar2) {
      case 5:
        lVar5 = *(long *)(unaff_x25 + 0xe0);
        puVar8 = (undefined8 *)PTR_DAT_07d98338;
        break;
      case 6:
      case 8:
      case 9:
      case 10:
        lVar5 = *(long *)(unaff_x25 + 0xe0);
        puVar8 = (undefined8 *)PTR_DAT_07d98300;
        break;
      case 7:
        lVar5 = *(long *)(unaff_x25 + 0xe0);
        puVar8 = (undefined8 *)PTR_DAT_07d98340;
        break;
      case 0xb:
      case 0xc:
        lVar5 = *(long *)(unaff_x25 + 0xe0);
        puVar8 = (undefined8 *)PTR_DAT_07d98320;
        break;
      default:
        goto 
        Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StopAdvertisingColocationSession>d__18__MoveNext
        ;
      }
      goto LAB_05f5d484;
    }
    uVar9 = (**(code **)(*unaff_x20 + 0x458))();
                    /* try { // try from 05f5d578 to 0605d587 has its CatchHandler @ 05f5d588 */
                    /* catch() { ... } // from try @ 05f5d4d8 with catch @ 05f5d588
                       catch() { ... } // from try @ 05f5d504 with catch @ 05f5d588
                       catch() { ... } // from try @ 05f5d578 with catch @ 05f5d588 */
    uVar10 = *(undefined8 *)PTR_DAT_07d98330;
                    /* try { // try from 05f5d58c to 0605d58f has its CatchHandler @ 05f5d598 */
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
                    /* try { // try from 05f5d590 to 0605d59b has its CatchHandler @ 05f5d414 */
      thunk_FUN_03798b70(*(long *)(unaff_x25 + 0xe0));
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05f5d58c with catch @ 05f5d598
                        */
                    /* catch() { ... } // from try @ 05f5d620 with catch @ 05f5d59c
                       catch() { ... } // from try @ 05f5d660 with catch @ 05f5d59c
                       catch() { ... } // from try @ 05f5d698 with catch @ 05f5d59c
                       catch() { ... } // from try @ 05f5d6c4 with catch @ 05f5d59c
                       catch() { ... } // from try @ 05f5d738 with catch @ 05f5d59c */
    uVar10 = FUN_062519f8(uVar10,0);
    uVar3 = FUN_0625ad04(uVar9,uVar10,0);
    if ((uVar3 & 1) == 0) goto LAB_05f5d70c;
                    /* try { // try from 05f5d5c8 to 0605d61f has its CatchHandler @ 05f5d630 */
    lVar5 = (**(code **)(*unaff_x20 + 0x478))();
    if (lVar5 == 0) goto LAB_05f5d828;
    if (*(int *)(lVar5 + 0x18) == 0) {
LAB_05f5d82c:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    plVar4 = *(long **)(lVar5 + 0x20);
    if (plVar4 != (long *)0x0) {
      bVar1 = *(byte *)(*unaff_x24 + 0x130);
      if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54(plVar4);
      }
    }
    uVar9 = *(undefined8 *)PTR_DAT_07d98310;
                    /* try { // try from 05f5d620 to 0605d647 has its CatchHandler @ 05f5d59c */
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 05f5d5c8 with catch @ 05f5d630
                        */
    plVar7 = (long *)FUN_062519f8(uVar9,0);
                    /* try { // try from 05f5d648 to 0605d65f has its CatchHandler @ 05f5d730 */
    plVar6 = (long *)RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07d92630,1);
    if (plVar6 == (long *)0x0) goto LAB_05f5d828;
                    /* try { // try from 05f5d660 to 0605d67f has its CatchHandler @ 05f5d59c */
    if ((plVar4 != (long *)0x0) &&
       (lVar5 = thunk_FUN_037787d0(plVar4,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0)) {
      uVar9 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar9,0);
    }
    if ((int)plVar6[3] == 0) goto LAB_05f5d82c;
    plVar6[4] = (long)plVar4;
                    /* try { // try from 05f5d680 to 0605d697 has its CatchHandler @ 05f5d730 */
    thunk_FUN_037aeb94(plVar6 + 4,plVar4);
                    /* try { // try from 05f5d698 to 0605d6ab has its CatchHandler @ 05f5d59c */
    if ((plVar7 == (long *)0x0) ||
       (plVar7 = (long *)(**(code **)(*plVar7 + 0x978))
                                   (plVar7,plVar6,*(undefined8 *)(*plVar7 + 0x980)),
       plVar7 == (long *)0x0)) goto LAB_05f5d828;
                    /* try { // try from 05f5d6ac to 0605d6c3 has its CatchHandler @ 05f5d730 */
    uVar3 = (**(code **)(*plVar7 + 0x2a8))(plVar7,plVar4,*(undefined8 *)(*plVar7 + 0x2b0));
    if ((uVar3 & 1) == 0) goto LAB_05f5d70c;
                    /* try { // try from 05f5d6c4 to 0605d71f has its CatchHandler @ 05f5d59c */
    uVar9 = *(undefined8 *)PTR_DAT_07d98328;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar9 = FUN_062519f8(uVar9,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03798b70(*unaff_x24);
    }
  }
  else {
    lVar5 = *(long *)(unaff_x25 + 0xe0);
    puVar8 = (undefined8 *)PTR_DAT_07d98308;
LAB_05f5d484:
                    /* try { // try from 05f5d488 to 0605d4a3 has its CatchHandler @ 05f5d4c0 */
    uVar9 = *puVar8;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar9 = FUN_062519f8(uVar9,0);
                    /* try { // try from 05f5d4a4 to 0605d4d7 has its CatchHandler @ 05f5d414 */
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03798b70(*unaff_x24);
    }
  }
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 05f5d488 with catch @ 05f5d4c0
                        */
  plVar4 = (long *)FUN_06284508(uVar9);
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                    /* try { // try from 05f5d4d8 to 0605d4ef has its CatchHandler @ 05f5d588 */
    lVar5 = FUN_03775678(lVar5);
  }
  plVar7 = *(long **)(lVar5 + 0xc0);
LAB_05f5d4e8:
  lVar5 = *plVar7;
                    /* try { // try from 05f5d4f0 to 0605d503 has its CatchHandler @ 05f5d414 */
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
  }
  if (plVar4 != (long *)0x0) {
                    /* try { // try from 05f5d504 to 0605d51b has its CatchHandler @ 05f5d588 */
                    /* try { // try from 05f5d51c to 0605d577 has its CatchHandler @ 05f5d414 */
    if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5)) {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(plVar4);
    }
  }
  return plVar4;
}


