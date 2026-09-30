/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakUtils.<>c$$<.cctor>b__4_1
ENTRY_POINT: 056203fc
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


undefined8 Meta_XR_ImmersiveDebugger_Manager_TweakUtils_<>c__<_cctor>b__4_1(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x19;
  long unaff_x20;
  long *plVar7;
  undefined8 uVar8;
  
  plVar7 = (long *)(unaff_x20 + 0x10);
  *plVar7 = param_1;
                    /* try { // try from 05620404 to 05720417 has its CatchHandler @ 05620328 */
  thunk_FUN_0333a630(plVar7,param_1);
                    /* try { // try from 05620418 to 0572042f has its CatchHandler @ 0562049c */
  FUN_0561ff54();
                    /* try { // try from 05620430 to 0572048b has its CatchHandler @ 05620328 */
  plVar1 = (long *)FUN_0698cccc();
  if ((plVar1 == (long *)0x0) || (*plVar1 != *(long *)PTR_DAT_0727b958)) {
    lVar2 = FUN_039eedfc();
    if (lVar2 == 0) {
LAB_056206ec:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar3 = FUN_043f81bc(lVar2,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x118));
    if (lVar3 != 0) {
      plVar1 = (long *)FUN_043f81bc(lVar2,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x118));
      if ((*plVar7 == 0) || (plVar1 == (long *)0x0)) goto LAB_056206ec;
      uVar4 = (**(code **)(*plVar1 + 0x138))
                        (plVar1,*(undefined8 *)(*plVar7 + 0x30),*(undefined8 *)(*plVar1 + 0x140));
      if ((uVar4 & 1) != 0) {
        return 1;
      }
    }
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar4 = FUN_06be9890(plVar1,0,0);
    if ((uVar4 & 1) != 0) {
      uVar5 = FUN_039f067c(plVar1,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xa8));
      lVar2 = FUN_039eedfc();
      *plVar7 = lVar2;
      thunk_FUN_0333a630(plVar7,lVar2);
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
        uVar8 = **(undefined8 **)(lVar2 + 0xb8);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_032934b8(lVar3);
        }
        lVar2 = thunk_FUN_032a56a0(lVar3);
        FUN_055d2e5c(lVar2,uVar8,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xd0),
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
      uVar8 = thunk_FUN_032a56a0(lVar2);
      FUN_055d2e5c();
      uVar5 = FUN_039782c0(uVar5,uVar8,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xf8));
      return uVar5;
    }
  }
  return 0;
}


