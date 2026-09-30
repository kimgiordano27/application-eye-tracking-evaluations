/*
FUNCTION_NAME: FUN_031f5f14
ENTRY_POINT: 031f5f14
PROGRAM: gunraiders-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * FUN_031f5f14(long param_1,undefined8 *param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  char local_24 [4];
  
  if ((DAT_045326de & 1) == 0) {
    FUN_01c5d288(ONSPPropagationMaterial_Point_TypeInfo);
    DAT_045326de = 1;
  }
  local_24[0] = '\0';
  plVar2 = *(long **)(param_1 + 0x10);
  if (plVar2 != (long *)0x0) {
    iVar1 = (**(code **)(*plVar2 + 0x1d8))(plVar2,*(undefined8 *)(*plVar2 + 0x1e0));
    if (iVar1 == 0) {
                    /* try { // try from 031f5fa8 to 032f5faf has its CatchHandler @ 031f5fec */
      *param_2 = 0;
                    /* try { // try from 031f5fe0 to 032f6003 has its CatchHandler @ 031f5eb0 */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 031f5fc0 with catch @ 031f5fe4
                        */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 031f5fdc with catch @ 031f5fe8
                        */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 031f5fa8 with catch @ 031f5fec
                        */
      return (long *)0x0;
    }
    plVar2 = *(long **)(param_1 + 0x10);
    if (plVar2 != (long *)0x0) {
      plVar2 = (long *)(**(code **)(*plVar2 + 0x248))(plVar2,*(undefined8 *)(*plVar2 + 0x250));
      if (plVar2 == (long *)0x0) {
        plVar6 = (long *)0x0;
      }
      else {
        plVar6 = plVar2;
        if (*plVar2 == *(long *)ONSPPropagationMaterial_Point_TypeInfo) {
          plVar6 = (long *)plVar2[3];
        }
      }
      plVar3 = *(long **)(param_1 + 0x18);
      if (plVar3 != (long *)0x0) {
                    /* try { // try from 031f5fc0 to 032f5fc7 has its CatchHandler @ 031f5fe4 */
        uVar4 = (**(code **)(*plVar3 + 0x188))
                          (plVar3,plVar6,local_24,*(undefined8 *)(*plVar3 + 400));
        *param_2 = uVar4;
                    /* try { // try from 031f5fdc to 032f5fdf has its CatchHandler @ 031f5fe8 */
        if (local_24[0] == '\0') {
          return plVar2;
        }
        uVar4 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
                    /* try { // try from 031f6004 to 032f6017 has its CatchHandler @ 031f6064 */
        uVar4 = FUN_01c5d2fc(uVar4,1);
        FUN_019b2708();
                    /* try { // try from 031f6018 to 032f604f has its CatchHandler @ 031f5eb0 */
        FUN_019b8dd4(uVar4,plVar6);
        FUN_019b8e08(uVar4,0,plVar6);
        uVar5 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_12_0_TypeInfo);
        uVar4 = FUN_03315920(uVar5,uVar4,0);
                    /* try { // try from 031f6050 to 032f605f has its CatchHandler @ 031f6060 */
        thunk_FUN_01c273e8(ExitGames_Client_Photon_Protocol16_TypeInfo);
        uVar5 = thunk_FUN_01c496e0();
                    /* catch() { ... } // from try @ 031f6050 with catch @ 031f6060 */
                    /* catch() { ... } // from try @ 031f6004 with catch @ 031f6064 */
                    /* try { // try from 031f6068 to 032f606b has its CatchHandler @ 031f6074 */
        FUN_031dce5c(uVar5,uVar4,0);
                    /* try { // try from 031f606c to 032f6077 has its CatchHandler @ 031f5eb0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031f6068 with catch @ 031f6074
                        */
        uVar4 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_15_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar5,uVar4);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


