/*
FUNCTION_NAME: OVRPlugin.OVRP_1_64_0$$ovrp_LocateSpace
ENTRY_POINT: 01f9d31c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_64_0__ovrp_LocateSpace(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *unaff_x22;
  long *unaff_x25;
  undefined8 uVar5;
  undefined8 *unaff_x27;
  undefined4 uStack000000000000001c;
  
  if (param_1 == 0) {
    lVar3 = (**(code **)(*unaff_x22 + 0x1d8))();
    unaff_x22[0xd] = lVar3;
    thunk_FUN_01286abc();
  }
  puVar2 = PTR_DAT_027c1df0;
  puVar1 = PTR_DAT_027bb1e0;
                    /* try { // try from 01f9d350 to 0209d353 has its CatchHandler @ 01f9d364 */
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f9d318 with catch @ 01f9d354
                       try { // try from 01f9d354 to 0209d37b has its CatchHandler @ 01f9d254 */
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f9d2e4 with catch @ 01f9d358
                        */
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f9d278 with catch @ 01f9d35c
                        */
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f9d26c with catch @ 01f9d360
                        */
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f9d2a4 with catch @ 01f9d364
                       catch(type#1 @ 026574d8) { ... } // from try @ 01f9d350 with catch @ 01f9d364
                        */
  FUN_01f9cb74();
  uVar5 = *unaff_x27;
                    /* try { // try from 01f9d37c to 0209d37f has its CatchHandler @ 01f9d390 */
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01220628(*unaff_x25);
  }
                    /* catch() { ... } // from try @ 01f9d37c with catch @ 01f9d390 */
  FUN_01f7d8a0(uVar5,0);
                    /* try { // try from 01f9d39c to 0209d3a7 has its CatchHandler @ 01f9d3bc */
                    /* try { // try from 01f9d3a8 to 0209d3b3 has its CatchHandler @ 01f9d254 */
  FUN_01ebcbe8();
  FUN_01f7d8a0(*unaff_x27,0);
  FUN_01ebcbe8();
  FUN_01f7d8a0(*(undefined8 *)puVar1,0);
  FUN_01ebcbe8();
  FUN_01f7d8a0(*(undefined8 *)puVar2,0);
  FUN_01ebcbe8();
  FUN_01f7d8a0(*unaff_x27,0);
  FUN_01ebcbe8();
  FUN_01f7d8a0(*unaff_x27,0);
  FUN_01ebcbe8();
  FUN_01f7d8a0(*unaff_x27,0);
  FUN_01ebcbe8();
  uStack000000000000001c = (undefined4)unaff_x22[10];
  thunk_FUN_0124b7d8(*(undefined8 *)PTR_DAT_027b1ab0,&stack0x0000001c);
  FUN_01f7d8a0(*(undefined8 *)PTR_DAT_027b3f20,0);
  FUN_01ebcbe8();
  FUN_01eb0bd8();
  FUN_01eb1cf0();
  FUN_01f7d8a0(*unaff_x27,0);
  FUN_01ebcbe8();
  if ((unaff_x22[0xe] != 0) && (uVar4 = FUN_01ebca50(unaff_x22[0xe],0), (uVar4 & 1) != 0)) {
    uVar5 = *(undefined8 *)PTR_DAT_027bbb00;
    if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    FUN_01f7d8a0(uVar5,0);
    FUN_01ebcbe8();
    if (unaff_x22[0xe] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    FUN_01ebca60();
  }
  return;
}


