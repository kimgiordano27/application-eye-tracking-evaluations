/*
FUNCTION_NAME: OVRManager$$add_HMDMounted
ENTRY_POINT: 02bff1a0
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRManager__add_HMDMounted(void)

{
  undefined *puVar1;
  char in_NG;
  char in_OV;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint in_w8;
  uint uVar6;
  long unaff_x19;
  long unaff_x21;
  long lVar7;
  undefined8 uVar8;
  uint unaff_w26;
  uint uVar9;
  long *plVar10;
  undefined8 in_stack_00000008;
  
  puVar1 = PTR_DAT_037f2c78;
  if (in_NG == in_OV) {
    lVar7 = 0;
    uVar9 = 0;
    do {
      if (in_w8 <= uVar9) goto LAB_02bff338;
      plVar10 = (long *)(unaff_x21 + (long)(int)uVar9 * 8 + 0x20);
      plVar2 = (long *)*plVar10;
      if (plVar2 == (long *)0x0) {
LAB_02bff334:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      lVar3 = (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
      if (0 < (int)unaff_w26) {
        if (lVar3 == 0) goto LAB_02bff334;
                    /* try { // try from 02bff1e8 to 02cff1ef has its CatchHandler @ 02bff250 */
        uVar6 = 0;
        do {
                    /* try { // try from 02bff1f0 to 02cff267 has its CatchHandler @ 02bff194 */
          if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_02bff338;
          plVar2 = *(long **)(lVar3 + (long)(int)uVar6 * 8 + 0x20);
          if ((plVar2 == (long *)0x0) ||
             (uVar4 = (**(code **)(*plVar2 + 0x1d8))(plVar2,*(undefined8 *)(*plVar2 + 0x1e0)),
             unaff_x19 == 0)) goto LAB_02bff334;
          if (*(uint *)(unaff_x19 + 0x18) <= uVar6) goto LAB_02bff338;
          uVar8 = *(undefined8 *)(unaff_x19 + (long)(int)uVar6 * 8 + 0x20);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          uVar5 = FUN_02be74a8(uVar4,uVar8,0);
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 02bff1e8 with catch @ 02bff250
                        */
          if ((uVar5 & 1) != 0) goto LAB_02bff2f8;
          uVar6 = uVar6 + 1;
        } while (unaff_w26 != uVar6);
      }
                    /* try { // try from 02bff268 to 02cff26b has its CatchHandler @ 02bff2a0 */
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* try { // try from 02bff26c to 02cff2a3 has its CatchHandler @ 02bff194 */
        thunk_FUN_01843fdc();
      }
      uVar5 = FUN_02be74a8(in_stack_00000008,0,0);
      if ((uVar5 & 1) == 0) {
LAB_02bff2d4:
        uVar5 = FUN_02b0f268(lVar7,0,0);
        if ((uVar5 & 1) != 0) {
          uVar4 = thunk_FUN_01851c08(PTR_DAT_038045f0);
          uVar4 = FUN_02c108dc(uVar4,0);
          thunk_FUN_01851c08(PTR_DAT_03803f28);
          uVar8 = thunk_FUN_01861bbc();
          FUN_02b0d074(uVar8,uVar4,0);
          uVar4 = thunk_FUN_01851c08(PTR_DAT_0380ac40);
                    /* WARNING: Subroutine does not return */
          FUN_017fc474(uVar8,uVar4);
        }
        if (*(uint *)(unaff_x21 + 0x18) <= uVar9) {
LAB_02bff338:
                    /* WARNING: Subroutine does not return */
          FUN_017fc5b0();
        }
        lVar7 = *plVar10;
      }
      else {
        if (*(uint *)(unaff_x21 + 0x18) <= uVar9) goto LAB_02bff338;
        plVar2 = (long *)*plVar10;
        if (plVar2 == (long *)0x0) goto LAB_02bff334;
        uVar4 = (**(code **)(*plVar2 + 0x228))(plVar2,*(undefined8 *)(*plVar2 + 0x230));
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01843fdc(*(long *)puVar1);
        }
        uVar5 = FUN_02be74a8(in_stack_00000008,uVar4,0);
        if ((uVar5 & 1) == 0) goto LAB_02bff2d4;
      }
LAB_02bff2f8:
      in_w8 = *(uint *)(unaff_x21 + 0x18);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)in_w8);
  }
  else {
    lVar7 = 0;
  }
  return lVar7;
}


