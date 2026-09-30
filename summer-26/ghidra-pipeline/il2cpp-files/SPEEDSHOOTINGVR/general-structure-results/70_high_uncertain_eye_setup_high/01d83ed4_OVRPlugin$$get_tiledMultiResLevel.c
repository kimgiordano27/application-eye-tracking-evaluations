/*
FUNCTION_NAME: OVRPlugin$$get_tiledMultiResLevel
ENTRY_POINT: 01d83ed4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__get_tiledMultiResLevel(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  long *unaff_x21;
  long *plVar6;
  long *plVar7;
  long *unaff_x24;
  long *unaff_x25;
  ulong unaff_x26;
  long lVar8;
  
  param_1 = param_1 & 0xffffffff;
  lVar8 = 0x20;
  do {
    if (param_1 <= unaff_x26) goto LAB_01d84154;
    plVar6 = *(long **)(unaff_x20 + lVar8);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar1 = FUN_01d603ec(plVar6,0,0);
    if ((uVar1 & 1) != 0) {
      thunk_FUN_010303a8(PTR_DAT_0234bbe8);
      uVar3 = thunk_FUN_010400dc();
      FUN_01c66bb4(uVar3,0);
      goto LAB_01d84184;
    }
    lVar2 = *unaff_x24;
    if (plVar6 == (long *)0x0) {
LAB_01d83f28:
      plVar7 = (long *)0x0;
    }
    else {
      if (*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar2 + 0x130)) goto LAB_01d83f28;
      plVar7 = plVar6;
      if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) != lVar2) {
        plVar7 = (long *)0x0;
      }
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    if (plVar7 == (long *)0x0) {
      if (plVar6 == (long *)0x0) goto LAB_01d84158;
      uVar1 = (**(code **)(*plVar6 + 0x5d8))(plVar6,*(undefined8 *)(*plVar6 + 0x5e0));
      if ((uVar1 & 1) != 0) {
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        uVar3 = FUN_01d63258();
        return uVar3;
      }
      plVar6 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_0234c5a8,
                                    *(undefined4 *)(unaff_x20 + 0x18));
      if ((int)*(ulong *)(unaff_x20 + 0x18) < 1) goto LAB_01d840fc;
      uVar1 = 0;
      uVar5 = *(ulong *)(unaff_x20 + 0x18) & 0xffffffff;
      plVar7 = plVar6 + 4;
      goto LAB_01d840a0;
    }
    if (unaff_x21 == (long *)0x0) goto LAB_01d84158;
    lVar2 = thunk_FUN_0103ffe0(plVar7,*(undefined8 *)(*unaff_x21 + 0x40));
    if (lVar2 == 0) goto LAB_01d8415c;
    if (*(uint *)(unaff_x21 + 3) <= unaff_x26) goto LAB_01d84154;
    *(undefined8 *)((long)unaff_x21 + lVar8) = plVar7;
    thunk_FUN_0106e12c((undefined8 *)((long)unaff_x21 + lVar8),plVar7);
    param_1 = (ulong)*(uint *)(unaff_x20 + 0x18);
    unaff_x26 = unaff_x26 + 1;
    lVar8 = lVar8 + 8;
  } while ((long)unaff_x26 < (long)(int)*(uint *)(unaff_x20 + 0x18));
  FUN_01d83ce4();
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01022c14(*unaff_x24);
  }
  FUN_01d7ecdc();
  uVar3 = FUN_00fcda0c();
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01022c14(*unaff_x25);
  }
  uVar1 = FUN_01d603ec(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    return uVar3;
  }
  thunk_FUN_010303a8(PTR_DAT_02353050);
  uVar3 = thunk_FUN_010400dc();
  FUN_01d842e0();
  goto LAB_01d84184;
LAB_01d840a0:
  do {
    if (uVar5 <= uVar1) {
LAB_01d84154:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    if (plVar6 == (long *)0x0) goto LAB_01d84158;
    lVar8 = *(long *)(unaff_x20 + 0x20 + uVar1 * 8);
    if ((lVar8 != 0) &&
       (lVar2 = thunk_FUN_0103ffe0(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar2 == 0)) {
LAB_01d8415c:
      uVar3 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar3,0);
    }
    if (*(uint *)(plVar6 + 3) <= uVar1) goto LAB_01d84154;
    *plVar7 = lVar8;
    thunk_FUN_0106e12c(plVar7,lVar8);
    uVar5 = (ulong)*(uint *)(unaff_x20 + 0x18);
    uVar1 = uVar1 + 1;
    plVar7 = plVar7 + 1;
  } while ((long)uVar1 < (long)(int)*(uint *)(unaff_x20 + 0x18));
LAB_01d840fc:
  uVar1 = FUN_01cbcb8c(0);
  if ((uVar1 & 1) != 0) {
    lVar8 = *unaff_x24;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01022c14();
      lVar8 = *unaff_x24;
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x30);
    if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01d84150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40));
      return uVar3;
    }
LAB_01d84158:
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  thunk_FUN_010303a8(PTR_DAT_0234cf18);
  uVar3 = thunk_FUN_010400dc();
  FUN_01d59244(uVar3,0);
LAB_01d84184:
  uVar4 = thunk_FUN_010303a8(PTR_DAT_023591e8);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar3,uVar4);
}


