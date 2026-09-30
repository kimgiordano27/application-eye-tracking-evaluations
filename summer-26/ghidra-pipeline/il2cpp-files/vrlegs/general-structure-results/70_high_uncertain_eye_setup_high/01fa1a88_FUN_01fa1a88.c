/*
FUNCTION_NAME: FUN_01fa1a88
ENTRY_POINT: 01fa1a88
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01fa1cb0) */

void FUN_01fa1a88(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined1 local_40 [4];
  char local_3c [4];
  long local_38;
  
  local_38 = param_1;
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc9c40);
    FUN_01ab69ac(PTR_DAT_03cc9c30);
                    /* try { // try from 01fa1ac8 to 020a1aff has its CatchHandler @ 01fa1b30 */
    FUN_01ab69ac(PTR_DAT_03cc0af8);
    FUN_01ab69ac(PTR_DAT_03cbe5e8);
    if (*(long *)(param_3 + 0x38) == 0) {
      FUN_01a47054(param_3);
    }
  }
  puVar1 = PTR_DAT_03cc0af8;
  local_40[0] = 0;
  lVar2 = *(long *)PTR_DAT_03cc0af8;
                    /* try { // try from 01fa1b00 to 020a1b47 has its CatchHandler @ 01fa19c0 */
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar2 = *(long *)puVar1;
  }
  plVar6 = (long *)**(undefined8 **)(lVar2 + 0xb8);
  if (plVar6 != (long *)0x0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 01fa1ac8 with catch @ 01fa1b30
                        */
    uVar5 = *(undefined8 *)PTR_DAT_03cc9c30;
    if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
                    /* try { // try from 01fa1b48 to 020a1b4b has its CatchHandler @ 01fa1b6c */
      thunk_FUN_01a58e78();
    }
                    /* try { // try from 01fa1b4c to 020a1b6f has its CatchHandler @ 01fa19c0 */
    uVar5 = FUN_0277b678(uVar5,0);
    local_3c[0] = '\0';
    FUN_027e0bd8(uVar5,local_3c,0);
                    /* catch() { ... } // from try @ 01fa1b48 with catch @ 01fa1b6c */
    if (param_1 == 0) {
      lVar2 = *plVar6;
      lVar7 = *(long *)(*(long *)(param_3 + 0x38) + 8);
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *(long *)(lVar7 + 0x20)) {
            lVar2 = lVar2 + (long)(int)(*piVar4 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 + 0x138;
            goto LAB_01fa1c58;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      lVar2 = FUN_01a472ec(plVar6);
LAB_01fa1c58:
      lVar2 = thunk_FUN_01a41d84(*(undefined8 *)(lVar2 + 8),lVar7);
      (**(code **)(lVar2 + 8))(plVar6,0,&local_38,param_2,lVar2);
    }
    else {
                    /* try { // try from 01fa1b70 to 020a1b7b has its CatchHandler @ 01fa1b90 */
      local_40[0] = 0;
                    /* try { // try from 01fa1b7c to 020a1b87 has its CatchHandler @ 01fa19c0 */
      lVar7 = *(long *)PTR_DAT_03cc9c40;
      lVar2 = *plVar6;
                    /* try { // try from 01fa1b88 to 020a1b8f has its CatchHandler @ 01fa1b90 */
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01fa1b70 with catch @ 01fa1b90
                       catch(type#2 @ 00000000) { ... } // from try @ 01fa1b88 with catch @ 01fa1b90
                        */
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *(long *)(lVar7 + 0x20)) {
            lVar2 = lVar2 + (long)(int)(*piVar4 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 + 0x138;
            goto LAB_01fa1c18;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      lVar2 = FUN_01a472ec(plVar6);
LAB_01fa1c18:
      lVar2 = thunk_FUN_01a41d84(*(undefined8 *)(lVar2 + 8),lVar7);
      (**(code **)(lVar2 + 8))(plVar6,0,local_40,param_2,lVar2);
    }
    if (local_3c[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar5,0);
    }
  }
  return;
}


