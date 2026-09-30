/*
FUNCTION_NAME: OVRManager$$set_fixedFoveatedRenderingLevel
ENTRY_POINT: 02c03ab4
PROGRAM: sharks-libil2cpp.so
SCORE: 104
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__set_fixedFoveatedRenderingLevel(void)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar2 = FUN_02a4e824();
                    /* try { // try from 02c03ab8 to 02d03abf has its CatchHandler @ 02c03ebc */
  if (iVar2 == 0) {
    plVar3 = (long *)FUN_017f82a0();
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
                    /* WARNING: Could not recover jumptable at 0x02c03b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    return;
  }
                    /* try { // try from 02c03ac0 to 02d03acb has its CatchHandler @ 02c03ec4 */
                    /* try { // try from 02c03acc to 02d03def has its CatchHandler @ 02c037d0 */
  iVar2 = FUN_02a4e824();
  if (iVar2 == 0) {
    uVar4 = FUN_017f82a0();
    if (*(int *)(*(long *)PTR_DAT_037f4790 + 0xe0) == 0) {
      thunk_FUN_01843fdc(*(long *)PTR_DAT_037f4790);
    }
    FUN_02c003e0(uVar4);
    return;
  }
  iVar2 = FUN_02a4e824();
  if (iVar2 != 0) {
    uVar4 = thunk_FUN_01851c08(PTR_DAT_0380ad50);
    uVar4 = FUN_02c108dc(uVar4,0);
    thunk_FUN_01851c08(PTR_DAT_037feb28);
    uVar5 = thunk_FUN_01861bbc();
    FUN_02bb89a0(uVar5,uVar4,0);
    uVar4 = thunk_FUN_01851c08(PTR_DAT_0380ad70);
                    /* WARNING: Subroutine does not return */
    FUN_017fc474(uVar5,uVar4);
  }
  plVar3 = (long *)thunk_FUN_0187f3ac();
  uVar4 = FUN_017f82a0();
  if (*(int *)(*(long *)PTR_DAT_037f4790 + 0xe0) == 0) {
    thunk_FUN_01843fdc(*(long *)PTR_DAT_037f4790);
  }
  if (plVar3 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_037f87b8 + 0x130);
    if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_037f87b8)) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc944(plVar3);
    }
  }
  FUN_02c00a74(plVar3,uVar4);
  return;
}


