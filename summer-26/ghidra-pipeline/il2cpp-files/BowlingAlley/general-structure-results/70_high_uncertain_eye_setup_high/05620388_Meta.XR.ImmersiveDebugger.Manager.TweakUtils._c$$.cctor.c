/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakUtils.<>c$$.cctor
ENTRY_POINT: 05620388
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Manager_TweakUtils_<>c___cctor(ulong param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long *plVar8;
  long unaff_x20;
  long unaff_x22;
  long *plVar9;
  undefined8 uVar10;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727b958);
                    /* try { // try from 0562039c to 057203b7 has its CatchHandler @ 056203d4 */
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    *(undefined1 *)(unaff_x20 + 0x8bb) = 1;
  }
  plVar8 = (long *)(unaff_x19 + 0x20);
                    /* try { // try from 056203b8 to 057203eb has its CatchHandler @ 05620328 */
  if ((*(byte *)(*(long *)(*(long *)(*plVar8 + 0xc0) + 0x90) + 0x135) & 1) == 0) {
    FUN_032934b8();
  }
  lVar1 = thunk_FUN_032a56a0();
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 05620364 with catch @ 056203cc
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 05620380 with catch @ 056203d0
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 0562039c with catch @ 056203d4
                        */
  FUN_03c4d8d0(lVar1,*(undefined8 *)(*(long *)(*plVar8 + 0xc0) + 0x98));
                    /* try { // try from 056203ec to 05720403 has its CatchHandler @ 0562049c */
  if ((unaff_x22 != 0) && (lVar2 = FUN_039eedfc(), lVar1 != 0)) {
    plVar9 = (long *)(lVar1 + 0x10);
    *plVar9 = lVar2;
    thunk_FUN_0333a630(plVar9,lVar2);
    FUN_0561ff54();
    plVar3 = (long *)FUN_0698cccc();
    if ((plVar3 == (long *)0x0) || (*plVar3 != *(long *)PTR_DAT_0727b958)) {
      lVar1 = FUN_039eedfc();
      if (lVar1 == 0) goto LAB_056206ec;
      lVar2 = FUN_043f81bc(lVar1,*(undefined8 *)(*(long *)(*plVar8 + 0xc0) + 0x118));
      if (lVar2 != 0) {
        plVar8 = (long *)FUN_043f81bc(lVar1,*(undefined8 *)(*(long *)(*plVar8 + 0xc0) + 0x118));
        if ((*plVar9 == 0) || (plVar8 == (long *)0x0)) goto LAB_056206ec;
        uVar4 = (**(code **)(*plVar8 + 0x138))
                          (plVar8,*(undefined8 *)(*plVar9 + 0x30),*(undefined8 *)(*plVar8 + 0x140));
        if ((uVar4 & 1) != 0) {
          return 1;
        }
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar4 = FUN_06be9890(plVar3,0,0);
      if ((uVar4 & 1) != 0) {
        uVar5 = FUN_039f067c(plVar3,*(undefined8 *)(*(long *)(*plVar8 + 0xc0) + 0xa8));
        lVar2 = FUN_039eedfc();
        *plVar9 = lVar2;
        thunk_FUN_0333a630(plVar9,lVar2);
        lVar2 = *(long *)(*(long *)(*plVar8 + 0xc0) + 200);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_032934b8();
        }
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        lVar2 = *(long *)(*(long *)(*plVar8 + 0xc0) + 200);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_032934b8();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
        if (lVar2 == 0) {
          lVar2 = *(long *)(*(long *)(*plVar8 + 0xc0) + 200);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_032934b8();
          }
          if (*(int *)(lVar2 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          lVar6 = *(long *)(*plVar8 + 0xc0);
          lVar2 = *(long *)(lVar6 + 200);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_032934b8();
            lVar6 = *(long *)(*plVar8 + 0xc0);
          }
          lVar6 = *(long *)(lVar6 + 0xc0);
          uVar10 = **(undefined8 **)(lVar2 + 0xb8);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_032934b8(lVar6);
          }
          lVar2 = thunk_FUN_032a56a0(lVar6);
          FUN_055d2e5c(lVar2,uVar10,*(undefined8 *)(*(long *)(*plVar8 + 0xc0) + 0xd0),
                       *(undefined8 *)(*(long *)(*plVar8 + 0xc0) + 0xd8));
          lVar7 = *(long *)(*plVar8 + 0xc0);
          lVar6 = *(long *)(lVar7 + 200);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_032934b8();
            lVar7 = *(long *)(*plVar8 + 0xc0);
          }
          *(long *)(*(long *)(lVar6 + 0xb8) + 8) = lVar2;
          lVar6 = *(long *)(lVar7 + 200);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_032934b8();
          }
          thunk_FUN_0333a630(*(long *)(lVar6 + 0xb8) + 8,lVar2);
        }
        uVar5 = FUN_039a8198(uVar5,lVar2,*(undefined8 *)(*(long *)(*plVar8 + 0xc0) + 0xe0));
        lVar2 = *(long *)(*(long *)(*plVar8 + 0xc0) + 0xc0);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_032934b8(lVar2);
        }
        uVar10 = thunk_FUN_032a56a0(lVar2);
        FUN_055d2e5c(uVar10,lVar1,*(undefined8 *)(*(long *)(*plVar8 + 0xc0) + 0xf0),
                     *(undefined8 *)(*(long *)(*plVar8 + 0xc0) + 0xd8));
        uVar5 = FUN_039782c0(uVar5,uVar10,*(undefined8 *)(*(long *)(*plVar8 + 0xc0) + 0xf8));
        return uVar5;
      }
    }
    return 0;
  }
LAB_056206ec:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


