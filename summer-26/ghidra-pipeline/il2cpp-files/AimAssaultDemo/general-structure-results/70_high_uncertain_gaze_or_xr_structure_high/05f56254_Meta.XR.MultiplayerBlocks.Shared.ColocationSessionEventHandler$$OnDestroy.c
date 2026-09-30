/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$OnDestroy
ENTRY_POINT: 05f56254
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


long * Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__OnDestroy(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar6;
  undefined8 unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  
                    /* try { // try from 05f56254 to 060562af has its CatchHandler @ 05f56070 */
  if (param_1 == 0) {
    uVar6 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar6,0);
  }
  if (*(int *)(unaff_x23 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7bc();
  }
  *(undefined8 *)(unaff_x23 + 0x20) = unaff_x21;
  thunk_FUN_037aeb94();
  if ((unaff_x22 == (long *)0x0) ||
     (plVar2 = (long *)(**(code **)(*unaff_x22 + 0x978))(), plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  uVar3 = (**(code **)(*plVar2 + 0x2a8))();
  if ((uVar3 & 1) == 0) {
    uVar3 = (**(code **)(*unaff_x20 + 0x5b8))();
    if ((uVar3 & 1) == 0) {
switchD_05f5636c_default:
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03775678();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_03775678();
      }
      plVar2 = (long *)thunk_FUN_037788cc();
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03775678(lVar5);
      }
      FUN_04f15eac(plVar2,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
      return plVar2;
    }
                    /* try { // try from 05f5630c to 0605630f has its CatchHandler @ 05f56370 */
    if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar6 = FUN_06276e18();
                    /* try { // try from 05f56328 to 06056337 has its CatchHandler @ 05f56374 */
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)(unaff_x25 + 0xe0));
    }
                    /* try { // try from 05f56344 to 0605635b has its CatchHandler @ 05f56378 */
    uVar1 = FUN_0625d834(uVar6,0);
                    /* try { // try from 05f5635c to 0605638f has its CatchHandler @ 05f562d4 */
    switch(uVar1) {
    case 5:
      lVar5 = *(long *)(unaff_x25 + 0xe0);
      puVar4 = (undefined8 *)PTR_DAT_07d98338;
      break;
    case 6:
    case 8:
    case 9:
    case 10:
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 05f5630c with catch @ 05f56370
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 05f56328 with catch @ 05f56374
                        */
      lVar5 = *(long *)(unaff_x25 + 0xe0);
      puVar4 = (undefined8 *)PTR_DAT_07d98300;
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 05f56344 with catch @ 05f56378
                        */
      break;
    case 7:
      lVar5 = *(long *)(unaff_x25 + 0xe0);
      puVar4 = (undefined8 *)PTR_DAT_07d98340;
      break;
    case 0xb:
    case 0xc:
      lVar5 = *(long *)(unaff_x25 + 0xe0);
      puVar4 = (undefined8 *)PTR_DAT_07d98320;
      break;
    default:
      goto switchD_05f5636c_default;
    }
    uVar6 = *puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar6 = FUN_062519f8(uVar6,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03798b70(*unaff_x24);
    }
  }
  else {
                    /* try { // try from 05f562b0 to 060562bf has its CatchHandler @ 05f562c0 */
    uVar6 = *(undefined8 *)PTR_DAT_07d98328;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 05f561d4 with catch @ 05f562c0
                       catch() { ... } // from try @ 05f56210 with catch @ 05f562c0
                       catch() { ... } // from try @ 05f5623c with catch @ 05f562c0
                       catch() { ... } // from try @ 05f562b0 with catch @ 05f562c0 */
      thunk_FUN_03798b70();
    }
                    /* try { // try from 05f562c4 to 060562c7 has its CatchHandler @ 05f562d0 */
                    /* try { // try from 05f562c8 to 060562d3 has its CatchHandler @ 05f56070 */
    uVar6 = FUN_062519f8(uVar6,0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05f562c4 with catch @ 05f562d0
                        */
                    /* catch() { ... } // from try @ 05f5635c with catch @ 05f562d4
                       catch() { ... } // from try @ 05f563a8 with catch @ 05f562d4
                       catch() { ... } // from try @ 05f563d4 with catch @ 05f562d4
                       catch() { ... } // from try @ 05f56448 with catch @ 05f562d4 */
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03798b70(*unaff_x24);
    }
  }
  plVar2 = (long *)FUN_06284508(uVar6);
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
  }
  lVar5 = **(long **)(lVar5 + 0xc0);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
  }
  if (plVar2 != (long *)0x0) {
    if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5)) {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(plVar2);
    }
  }
  return plVar2;
}


