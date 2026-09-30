/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$HasAllLabels
ENTRY_POINT: 08a5cb58
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__HasAllLabels(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 in_stack_00000008;
  
  FUN_04947ee4();
  FUN_04947ee4(PTR_DAT_0ac09b30);
  FUN_04947ee4(PTR_DAT_0ac442a0);
  FUN_04947ee4(PTR_DAT_0ac53b08);
  FUN_04947ee4(PTR_DAT_0ac17170);
                    /* try { // try from 08a5cb8c to 08b5cbb3 has its CatchHandler @ 08a5ce5c */
  *(undefined1 *)(unaff_x19 + 0x51c) = 1;
  plVar2 = (long *)FUN_04947fd0(*unaff_x21,4);
  puVar1 = PTR_DAT_0ac17170;
  if (plVar2 == (long *)0x0) {
LAB_08a5cce8:
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  if ((*(long *)PTR_DAT_0ac17170 != 0) &&
     (lVar3 = thunk_FUN_04983e64(*(long *)PTR_DAT_0ac17170,*(undefined8 *)(*plVar2 + 0x40)),
     lVar3 == 0)) {
LAB_08a5ccdc:
    uVar5 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
    FUN_04948050(uVar5,0);
  }
  if ((int)plVar2[3] != 0) {
    plVar2[4] = *(long *)puVar1;
    thunk_FUN_049ee3d8();
    lVar3 = *(long *)(unaff_x20 + 0x10);
                    /* try { // try from 08a5cbf0 to 08b5cc17 has its CatchHandler @ 08a5ce58 */
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_04983e64(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
    goto LAB_08a5ccdc;
    puVar1 = PTR_DAT_0ac442a0;
    if ((*(uint *)(plVar2 + 3) & 0xfffffffe) != 0) {
      plVar2[5] = lVar3;
      thunk_FUN_049ee3d8(plVar2 + 5,lVar3);
      lVar3 = *(long *)puVar1;
      if ((lVar3 != 0) &&
         (lVar3 = thunk_FUN_04983e64(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
      goto LAB_08a5ccdc;
      if (2 < *(uint *)(plVar2 + 3)) {
        plVar2[6] = *(long *)puVar1;
                    /* try { // try from 08a5cc50 to 08b5cc77 has its CatchHandler @ 08a5ce54 */
        thunk_FUN_049ee3d8();
        if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_08a5cce8;
        in_stack_00000008._4_4_ = *(undefined4 *)(*(long *)(unaff_x20 + 0x18) + 0x18);
        lVar3 = thunk_FUN_04983b98(*(undefined8 *)(PTR_DAT_0ac09758 + 0x48),
                                   (long)&stack0x00000008 + 4);
                    /* try { // try from 08a5cc78 to 08b5cd83 has its CatchHandler @ 08a5ca18 */
        if ((lVar3 != 0) &&
           (lVar4 = thunk_FUN_04983e64(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
        goto LAB_08a5ccdc;
        puVar1 = PTR_DAT_0ac53b08;
        if ((*(uint *)(plVar2 + 3) & 0xfffffffc) != 0) {
          plVar2[7] = lVar3;
          thunk_FUN_049ee3d8(plVar2 + 7,lVar3);
          FUN_08bda6b0(*(undefined8 *)puVar1,plVar2,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


