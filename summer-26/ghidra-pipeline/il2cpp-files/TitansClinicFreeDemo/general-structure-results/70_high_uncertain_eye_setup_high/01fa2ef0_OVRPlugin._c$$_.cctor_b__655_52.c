/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__655_52
ENTRY_POINT: 01fa2ef0
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_<>c__<_cctor>b__655_52(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x20;
  long *unaff_x21;
  long *plVar7;
  long *plVar8;
  long *unaff_x24;
  long *unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  
  do {
    if ((param_1 & 0xffffffff) <= unaff_x26) goto LAB_01fa3168;
    plVar7 = *(long **)(unaff_x20 + unaff_x27);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar1 = FUN_01f7f404(plVar7,0,0);
    if ((uVar1 & 1) != 0) {
      thunk_FUN_01279b34(PTR_DAT_027b3df8);
      uVar3 = thunk_FUN_0124bba8();
      FUN_01e7e374(uVar3,0);
      goto LAB_01fa3198;
    }
    lVar2 = *unaff_x24;
    if (plVar7 == (long *)0x0) {
LAB_01fa2f3c:
      plVar8 = (long *)0x0;
    }
    else {
      if (*(byte *)(*plVar7 + 0x130) < *(byte *)(lVar2 + 0x130)) goto LAB_01fa2f3c;
                    /* try { // try from 01fa2f4c to 020a2fbf has its CatchHandler @ 01fa2f4c
                       catch() { ... } // from try @ 01fa2f4c with catch @ 01fa2f4c
                       catch() { ... } // from try @ 01fa31dc with catch @ 01fa2f4c
                       catch() { ... } // from try @ 01fa3258 with catch @ 01fa2f4c
                       catch() { ... } // from try @ 01fa3288 with catch @ 01fa2f4c
                       catch() { ... } // from try @ 01fa32d8 with catch @ 01fa2f4c
                       catch() { ... } // from try @ 01fa331c with catch @ 01fa2f4c
                       catch() { ... } // from try @ 01fa3354 with catch @ 01fa2f4c */
      plVar8 = plVar7;
      if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) != lVar2) {
        plVar8 = (long *)0x0;
      }
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    if (plVar8 == (long *)0x0) {
      if (plVar7 == (long *)0x0) goto LAB_01fa316c;
      uVar1 = (**(code **)(*plVar7 + 0x5d8))(plVar7,*(undefined8 *)(*plVar7 + 0x5e0));
      if ((uVar1 & 1) != 0) {
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar3 = FUN_01f82278();
        return uVar3;
      }
      plVar7 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b46c8,
                                    *(undefined4 *)(unaff_x20 + 0x18));
      if ((int)*(ulong *)(unaff_x20 + 0x18) < 1) goto LAB_01fa3110;
      uVar1 = 0;
      uVar6 = *(ulong *)(unaff_x20 + 0x18) & 0xffffffff;
      plVar8 = plVar7 + 4;
      goto LAB_01fa30b4;
    }
    if (unaff_x21 == (long *)0x0) goto LAB_01fa316c;
    lVar2 = thunk_FUN_0124baac(plVar8,*(undefined8 *)(*unaff_x21 + 0x40));
    if (lVar2 == 0) goto LAB_01fa3170;
    if (*(uint *)(unaff_x21 + 3) <= unaff_x26) goto LAB_01fa3168;
    *(undefined8 *)((long)unaff_x21 + unaff_x27) = plVar8;
    thunk_FUN_01286abc((undefined8 *)((long)unaff_x21 + unaff_x27),plVar8);
    param_1 = (ulong)*(uint *)(unaff_x20 + 0x18);
    unaff_x26 = unaff_x26 + 1;
    unaff_x27 = unaff_x27 + 8;
  } while ((long)unaff_x26 < (long)(int)*(uint *)(unaff_x20 + 0x18));
  FUN_01fa2cf8();
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01220628(*unaff_x24);
  }
  FUN_01f9dd74();
  uVar3 = FUN_01247d40();
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01220628(*unaff_x25);
  }
  uVar1 = FUN_01f7f404(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    return uVar3;
  }
  thunk_FUN_01279b34(PTR_DAT_027bc068);
  uVar3 = thunk_FUN_0124bba8();
  FUN_01fa32f4();
  goto LAB_01fa3198;
LAB_01fa30b4:
  do {
    if (uVar6 <= uVar1) {
LAB_01fa3168:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca8();
    }
    if (plVar7 == (long *)0x0) goto LAB_01fa316c;
    lVar2 = *(long *)(unaff_x20 + 0x20 + uVar1 * 8);
    if ((lVar2 != 0) &&
       (lVar4 = thunk_FUN_0124baac(lVar2,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0)) {
LAB_01fa3170:
      uVar3 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar3,0);
    }
    if (*(uint *)(plVar7 + 3) <= uVar1) goto LAB_01fa3168;
    *plVar8 = lVar2;
    thunk_FUN_01286abc(plVar8,lVar2);
    uVar6 = (ulong)*(uint *)(unaff_x20 + 0x18);
    uVar1 = uVar1 + 1;
    plVar8 = plVar8 + 1;
  } while ((long)uVar1 < (long)(int)*(uint *)(unaff_x20 + 0x18));
LAB_01fa3110:
  uVar1 = FUN_01ed9ae4(0);
  if ((uVar1 & 1) != 0) {
    lVar2 = *unaff_x24;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01220628();
      lVar2 = *unaff_x24;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x30);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01fa3164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40));
      return uVar3;
    }
LAB_01fa316c:
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  thunk_FUN_01279b34(PTR_DAT_027b5050);
  uVar3 = thunk_FUN_0124bba8();
  FUN_01f78278(uVar3,0);
LAB_01fa3198:
  uVar5 = thunk_FUN_01279b34(PTR_DAT_027c2078);
                    /* WARNING: Subroutine does not return */
  FUN_01230b78(uVar3,uVar5);
}


