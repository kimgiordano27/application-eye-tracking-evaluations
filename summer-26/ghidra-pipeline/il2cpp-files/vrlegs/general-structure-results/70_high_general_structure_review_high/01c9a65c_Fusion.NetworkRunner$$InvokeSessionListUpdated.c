/*
FUNCTION_NAME: Fusion.NetworkRunner$$InvokeSessionListUpdated
ENTRY_POINT: 01c9a65c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Fusion_NetworkRunner__InvokeSessionListUpdated
               (undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  long lVar6;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  uStack0000000000000020 = param_1;
  uStack0000000000000028 = param_2;
  FUN_02241190(param_3,&stack0x00000020);
                    /* try { // try from 01c9a678 to 01d9a67b has its CatchHandler @ 01c9a67c */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 01c9a678 with catch @ 01c9a67c
                       try { // try from 01c9a67c to 01d9a69b has its CatchHandler @ 01c998f8 */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 01c9a60c with catch @ 01c9a680
                        */
  FUN_01c940bc();
  FUN_036cbbbc();
                    /* try { // try from 01c9a7b0 to 01d9aa57 has its CatchHandler @ 01c9a7b0
                       catch() { ... } // from try @ 01c9a7b0 with catch @ 01c9a7b0
                       catch() { ... } // from try @ 01c9aa74 with catch @ 01c9a7b0
                       catch() { ... } // from try @ 01c9abfc with catch @ 01c9a7b0
                       catch() { ... } // from try @ 01c9ac64 with catch @ 01c9a7b0
                       catch() { ... } // from try @ 01c9b0ac with catch @ 01c9a7b0 */
  FUN_01ffa6b0();
  uVar3 = FUN_01ff9eec(*(undefined4 *)(unaff_x19 + 0x70));
  uVar3 = FUN_01ffa578(uVar3,*(undefined4 *)(unaff_x19 + 0x88),*(undefined4 *)(unaff_x19 + 0x98),
                       *(undefined8 *)PTR_DAT_03cc6550);
  uVar3 = FUN_01ff9ec8(uVar3,*(undefined1 *)(unaff_x19 + 0xb9),*(undefined8 *)PTR_DAT_03cc6528);
  uVar3 = FUN_01ffa89c(uVar3,*(undefined4 *)(unaff_x19 + 0x20),*(undefined8 *)PTR_DAT_03cc6560);
  puVar2 = PTR_DAT_03cc5fa8;
  uVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc5fa8);
  FUN_01c7fa78();
  FUN_01ff9948(uVar3,uVar4,*(undefined8 *)PTR_DAT_03cc64f8);
  if (*(char *)(unaff_x19 + 0x24) != '\0') {
    FUN_01ffa668();
  }
  if (*(int *)(unaff_x19 + 0x78) == 0x25) {
    FUN_01ffa034();
  }
  else {
    FUN_01ffa0fc();
  }
  uVar5 = FUN_025be440(*(undefined8 *)(unaff_x19 + 0x90),0);
  if ((uVar5 & 1) == 0) {
    FUN_01ffa2d8();
  }
  plVar1 = (long *)(unaff_x19 + 0x30);
  if (*(char *)(unaff_x19 + 0x25) == '\0') {
    *plVar1 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1,0);
  }
  else {
    lVar6 = *plVar1;
    if (lVar6 != 0) {
      uVar3 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
      FUN_01c7fa78(uVar3,lVar6,*(undefined8 *)PTR_DAT_03cc6568,0);
      FUN_01ff99f8();
    }
  }
  plVar1 = (long *)(unaff_x19 + 0x38);
  if (*(char *)(unaff_x19 + 0x26) == '\0') {
    *plVar1 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1,0);
  }
  else {
    lVar6 = *plVar1;
    if (lVar6 != 0) {
      uVar3 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
      FUN_01c7fa78(uVar3,lVar6,*(undefined8 *)PTR_DAT_03cc6568,0);
      FUN_01ff99a0();
    }
  }
  plVar1 = (long *)(unaff_x19 + 0x40);
  if (*(char *)(unaff_x19 + 0x27) == '\0') {
    *plVar1 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1,0);
  }
  else {
    lVar6 = *plVar1;
    if (lVar6 != 0) {
      uVar3 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
      FUN_01c7fa78(uVar3,lVar6,*(undefined8 *)PTR_DAT_03cc6568,0);
      FUN_01ff9a50();
    }
  }
  plVar1 = (long *)(unaff_x19 + 0x48);
  if (*(char *)(unaff_x19 + 0x28) == '\0') {
    *plVar1 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1,0);
  }
  else {
    lVar6 = *plVar1;
    if (lVar6 != 0) {
      uVar3 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
      FUN_01c7fa78(uVar3,lVar6,*(undefined8 *)PTR_DAT_03cc6568,0);
      FUN_01ff9a24();
    }
  }
  plVar1 = (long *)(unaff_x19 + 0x50);
  if (*(char *)(unaff_x19 + 0x29) == '\0') {
    *plVar1 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1,0);
  }
  else {
    lVar6 = *plVar1;
    if (lVar6 != 0) {
      uVar3 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
      FUN_01c7fa78(uVar3,lVar6,*(undefined8 *)PTR_DAT_03cc6568,0);
      FUN_01ff991c();
    }
  }
  plVar1 = (long *)(unaff_x19 + 0x60);
  if (*(char *)(unaff_x19 + 0x2b) == '\0') {
    *plVar1 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1,0);
  }
  else {
    lVar6 = *plVar1;
    if (lVar6 != 0) {
      uVar3 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
      FUN_01c7fa78(uVar3,lVar6,*(undefined8 *)PTR_DAT_03cc6568,0);
      FUN_01ff99cc();
    }
  }
  if (*(char *)(unaff_x19 + 0xb8) == '\0') {
    FUN_01ff8ebc();
  }
  else {
    FUN_01ff9014();
  }
  *(undefined8 *)(unaff_x19 + 0x68) = unaff_x20;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x19 + 0x68));
  if ((*(char *)(unaff_x19 + 0x2a) != '\0') && (*(long *)(unaff_x19 + 0x58) != 0)) {
    FUN_036e83d0(*(long *)(unaff_x19 + 0x58),0);
  }
  return;
}


