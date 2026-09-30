/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakUtils.<>c$$<.cctor>b__4_2
ENTRY_POINT: 05620434
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Manager_TweakUtils_<>c__<_cctor>b__4_2(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x19;
  long *unaff_x23;
  undefined8 uVar7;
  
  plVar1 = (long *)FUN_0698cccc();
  if ((plVar1 == (long *)0x0) || (*plVar1 != *(long *)PTR_DAT_0727b958)) {
    lVar2 = FUN_039eedfc();
    if (lVar2 == 0) {
LAB_056206ec:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar3 = FUN_043f81bc(lVar2,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x118));
                    /* try { // try from 0562048c to 0572049b has its CatchHandler @ 0562049c */
    if (lVar3 != 0) {
                    /* catch() { ... } // from try @ 056203ec with catch @ 0562049c
                       catch() { ... } // from try @ 05620418 with catch @ 0562049c
                       catch() { ... } // from try @ 0562048c with catch @ 0562049c */
                    /* try { // try from 056204a0 to 057204a3 has its CatchHandler @ 056204ac */
      plVar1 = (long *)FUN_043f81bc(lVar2,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x118));
                    /* try { // try from 056204a4 to 057204af has its CatchHandler @ 05620328 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 056204a0 with catch @ 056204ac
                        */
      if ((*unaff_x23 == 0) || (plVar1 == (long *)0x0)) goto LAB_056206ec;
                    /* catch() { ... } // from try @ 05620534 with catch @ 056204b0
                       catch() { ... } // from try @ 05620574 with catch @ 056204b0
                       catch() { ... } // from try @ 056205ac with catch @ 056204b0
                       catch() { ... } // from try @ 056205d8 with catch @ 056204b0
                       catch() { ... } // from try @ 0562064c with catch @ 056204b0 */
      uVar4 = (**(code **)(*plVar1 + 0x138))
                        (plVar1,*(undefined8 *)(*unaff_x23 + 0x30),*(undefined8 *)(*plVar1 + 0x140))
      ;
      if ((uVar4 & 1) != 0) {
        return 1;
      }
    }
  }
  else {
                    /* try { // try from 056204dc to 05720533 has its CatchHandler @ 05620544 */
    if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar4 = FUN_06be9890(plVar1,0,0);
    if ((uVar4 & 1) != 0) {
      uVar5 = FUN_039f067c(plVar1,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xa8));
      lVar2 = FUN_039eedfc();
      *unaff_x23 = lVar2;
      thunk_FUN_0333a630();
      lVar2 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 200);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_032934b8();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      lVar2 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 200);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_032934b8();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
      if (lVar2 == 0) {
        lVar2 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 200);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_032934b8();
        }
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        lVar3 = *(long *)(*unaff_x19 + 0xc0);
        lVar2 = *(long *)(lVar3 + 200);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_032934b8();
          lVar3 = *(long *)(*unaff_x19 + 0xc0);
        }
        lVar3 = *(long *)(lVar3 + 0xc0);
        uVar7 = **(undefined8 **)(lVar2 + 0xb8);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_032934b8(lVar3);
        }
        lVar2 = thunk_FUN_032a56a0(lVar3);
        FUN_055d2e5c(lVar2,uVar7,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xd0),
                     *(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xd8));
        lVar6 = *(long *)(*unaff_x19 + 0xc0);
        lVar3 = *(long *)(lVar6 + 200);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_032934b8();
          lVar6 = *(long *)(*unaff_x19 + 0xc0);
        }
        *(long *)(*(long *)(lVar3 + 0xb8) + 8) = lVar2;
        lVar3 = *(long *)(lVar6 + 200);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_032934b8();
        }
        thunk_FUN_0333a630(*(long *)(lVar3 + 0xb8) + 8,lVar2);
      }
      uVar5 = FUN_039a8198(uVar5,lVar2,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xe0));
      lVar2 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0xc0);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_032934b8(lVar2);
      }
      uVar7 = thunk_FUN_032a56a0(lVar2);
      FUN_055d2e5c();
      uVar5 = FUN_039782c0(uVar5,uVar7,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xf8));
      return uVar5;
    }
  }
  return 0;
}


