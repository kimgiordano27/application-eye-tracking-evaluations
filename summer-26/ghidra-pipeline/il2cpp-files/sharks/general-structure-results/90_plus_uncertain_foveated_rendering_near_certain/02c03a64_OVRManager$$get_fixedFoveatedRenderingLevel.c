/*
FUNCTION_NAME: OVRManager$$get_fixedFoveatedRenderingLevel
ENTRY_POINT: 02c03a64
PROGRAM: sharks-libil2cpp.so
SCORE: 107
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_fixedFoveatedRenderingLevel(void)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x19;
  long unaff_x20;
  
  if ((unaff_x20 == 0) || (*(int *)(unaff_x20 + 0x10) == 0)) {
    lVar6 = *(long *)PTR_DAT_037fa818;
    unaff_x20 = lVar6;
  }
  else {
    lVar6 = *(long *)PTR_DAT_037fa818;
  }
  iVar2 = FUN_02a4e824(unaff_x20,lVar6,5,0);
  if (iVar2 == 0) {
    lVar6 = *unaff_x19;
  }
  else {
    iVar2 = FUN_02a4e824(unaff_x20,*(undefined8 *)PTR_DAT_037f2e48,5,0);
    if (iVar2 != 0) {
      iVar2 = FUN_02a4e824(unaff_x20,*(undefined8 *)PTR_DAT_03801140,5,0);
      if (iVar2 == 0) {
        uVar4 = FUN_017f82a0();
        if (*(int *)(*(long *)PTR_DAT_037f4790 + 0xe0) == 0) {
          thunk_FUN_01843fdc(*(long *)PTR_DAT_037f4790);
        }
        FUN_02c003e0(uVar4);
        return;
      }
      iVar2 = FUN_02a4e824(unaff_x20,*(undefined8 *)PTR_DAT_0380ad68,5,0);
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
           (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_037f87b8
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc944(plVar3);
        }
      }
      FUN_02c00a74(plVar3,uVar4);
      return;
    }
    plVar3 = (long *)FUN_017f82a0();
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    lVar6 = *plVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x02c03b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 0x168))();
  return;
}


