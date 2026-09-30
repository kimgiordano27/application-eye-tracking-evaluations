/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakUtils.<>c$$.ctor
ENTRY_POINT: 056203f0
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


undefined8
Meta_XR_ImmersiveDebugger_Manager_TweakUtils_<>c___ctor
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x19;
  long unaff_x20;
  long *plVar7;
  undefined8 uVar8;
  
  lVar1 = FUN_039eedfc(param_2,param_3,*(undefined8 *)(param_1 + 0xa0));
  if (unaff_x20 != 0) {
    plVar7 = (long *)(unaff_x20 + 0x10);
    *plVar7 = lVar1;
    thunk_FUN_0333a630(plVar7,lVar1);
    FUN_0561ff54();
    plVar2 = (long *)FUN_0698cccc();
    if ((plVar2 == (long *)0x0) || (*plVar2 != *(long *)PTR_DAT_0727b958)) {
      lVar1 = FUN_039eedfc();
      if (lVar1 == 0) goto LAB_056206ec;
      lVar3 = FUN_043f81bc(lVar1,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x118));
      if (lVar3 != 0) {
        plVar2 = (long *)FUN_043f81bc(lVar1,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x118));
        if ((*plVar7 == 0) || (plVar2 == (long *)0x0)) goto LAB_056206ec;
        uVar4 = (**(code **)(*plVar2 + 0x138))
                          (plVar2,*(undefined8 *)(*plVar7 + 0x30),*(undefined8 *)(*plVar2 + 0x140));
        if ((uVar4 & 1) != 0) {
          return 1;
        }
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar4 = FUN_06be9890(plVar2,0,0);
      if ((uVar4 & 1) != 0) {
        uVar5 = FUN_039f067c(plVar2,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xa8));
        lVar1 = FUN_039eedfc();
        *plVar7 = lVar1;
        thunk_FUN_0333a630(plVar7,lVar1);
        lVar1 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 200);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_032934b8();
        }
        if (*(int *)(lVar1 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        lVar1 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 200);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_032934b8();
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
        if (lVar1 == 0) {
          lVar1 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 200);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_032934b8();
          }
          if (*(int *)(lVar1 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          lVar3 = *(long *)(*unaff_x19 + 0xc0);
          lVar1 = *(long *)(lVar3 + 200);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_032934b8();
            lVar3 = *(long *)(*unaff_x19 + 0xc0);
          }
          lVar3 = *(long *)(lVar3 + 0xc0);
          uVar8 = **(undefined8 **)(lVar1 + 0xb8);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_032934b8(lVar3);
          }
          lVar1 = thunk_FUN_032a56a0(lVar3);
          FUN_055d2e5c(lVar1,uVar8,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xd0),
                       *(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xd8));
          lVar6 = *(long *)(*unaff_x19 + 0xc0);
          lVar3 = *(long *)(lVar6 + 200);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_032934b8();
            lVar6 = *(long *)(*unaff_x19 + 0xc0);
          }
          *(long *)(*(long *)(lVar3 + 0xb8) + 8) = lVar1;
          lVar3 = *(long *)(lVar6 + 200);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_032934b8();
          }
          thunk_FUN_0333a630(*(long *)(lVar3 + 0xb8) + 8,lVar1);
        }
        uVar5 = FUN_039a8198(uVar5,lVar1,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xe0));
        lVar1 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0xc0);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_032934b8(lVar1);
        }
        uVar8 = thunk_FUN_032a56a0(lVar1);
        FUN_055d2e5c();
        uVar5 = FUN_039782c0(uVar5,uVar8,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xf8));
        return uVar5;
      }
    }
    return 0;
  }
LAB_056206ec:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


