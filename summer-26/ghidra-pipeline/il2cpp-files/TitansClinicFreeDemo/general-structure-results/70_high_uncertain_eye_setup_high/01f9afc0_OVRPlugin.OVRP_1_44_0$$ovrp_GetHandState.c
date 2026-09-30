/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetHandState
ENTRY_POINT: 01f9afc0
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_44_0__ovrp_GetHandState(void)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar2 = FUN_01e672c0();
  if (iVar2 == 0) {
    plVar3 = (long *)FUN_011f6b80();
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
                    /* WARNING: Could not recover jumptable at 0x01f9b07c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    return;
  }
  iVar2 = FUN_01e672c0();
  if (iVar2 == 0) {
                    /* catch() { ... } // from try @ 01f9b050 with catch @ 01f9b080 */
                    /* try { // try from 01f9b084 to 0209b08f has its CatchHandler @ 01f9b0a4 */
    uVar4 = FUN_011f6b80();
                    /* try { // try from 01f9b090 to 0209b09b has its CatchHandler @ 01f9af90 */
                    /* try { // try from 01f9b09c to 0209b0a3 has its CatchHandler @ 01f9b0a4 */
    if (*(int *)(*(long *)PTR_DAT_027b3ea8 + 0xe0) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01f9b084 with catch @ 01f9b0a4
                       catch(type#2 @ 00000000) { ... } // from try @ 01f9b09c with catch @ 01f9b0a4
                        */
      thunk_FUN_01220628(*(long *)PTR_DAT_027b3ea8);
    }
    FUN_01f97f2c(uVar4);
    return;
  }
  iVar2 = FUN_01e672c0();
                    /* try { // try from 01f9b018 to 0209b023 has its CatchHandler @ 01f9b038 */
  if (iVar2 != 0) {
    uVar4 = thunk_FUN_01279b34(PTR_DAT_027c1da0);
    thunk_FUN_01279b34(PTR_DAT_027b98d8);
    uVar5 = thunk_FUN_0124bba8();
    FUN_01f558a0(uVar5,uVar4,0);
    uVar4 = thunk_FUN_01279b34(PTR_DAT_027c1da8);
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar5,uVar4);
  }
                    /* try { // try from 01f9b024 to 0209b04f has its CatchHandler @ 01f9af90 */
  plVar3 = (long *)thunk_FUN_0122c1cc();
  uVar4 = FUN_011f6b80();
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f9b018 with catch @ 01f9b038
                        */
  if (*(int *)(*(long *)PTR_DAT_027b3ea8 + 0xe0) == 0) {
    thunk_FUN_01220628(*(long *)PTR_DAT_027b3ea8);
  }
  if (plVar3 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_027b3ec0 + 0x130);
    if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_027b3ec0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01230f60(plVar3);
    }
  }
  FUN_01f985b8(plVar3,uVar4);
  return;
}


