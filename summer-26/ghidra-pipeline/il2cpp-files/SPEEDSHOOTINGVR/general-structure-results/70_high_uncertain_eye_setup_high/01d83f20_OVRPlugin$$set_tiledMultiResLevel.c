/*
FUNCTION_NAME: OVRPlugin$$set_tiledMultiResLevel
ENTRY_POINT: 01d83f20
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__set_tiledMultiResLevel(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong in_x9;
  uint in_w10;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *plVar8;
  long *unaff_x24;
  long *unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  
  do {
                    /* try { // try from 01d83f24 to 01e83f4f has its CatchHandler @ 01d84368 */
    if ((uint)in_x9 <= in_w10) {
      plVar4 = unaff_x22;
      if (*(long *)(*(long *)(param_1 + 200) + in_x9 * 8 + -8) == param_2) goto LAB_01d83f44;
      plVar4 = (long *)0x0;
      goto LAB_01d83f44;
    }
    do {
      plVar4 = (long *)0x0;
LAB_01d83f44:
      if (*(int *)(param_2 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      if (plVar4 == (long *)0x0) {
        if (unaff_x22 == (long *)0x0) goto LAB_01d84158;
        uVar3 = (**(code **)(*unaff_x22 + 0x5d8))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x5e0));
        if ((uVar3 & 1) != 0) {
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          uVar2 = FUN_01d63258();
          return uVar2;
        }
        plVar4 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_0234c5a8,
                                      *(undefined4 *)(unaff_x20 + 0x18));
        if ((int)*(ulong *)(unaff_x20 + 0x18) < 1) goto LAB_01d840fc;
        uVar3 = 0;
        uVar7 = *(ulong *)(unaff_x20 + 0x18) & 0xffffffff;
        plVar8 = plVar4 + 4;
        goto LAB_01d840a0;
      }
      if (unaff_x21 == (long *)0x0) goto LAB_01d84158;
      lVar1 = thunk_FUN_0103ffe0(plVar4,*(undefined8 *)(*unaff_x21 + 0x40));
      if (lVar1 == 0) goto LAB_01d8415c;
      if (*(uint *)(unaff_x21 + 3) <= unaff_x26) goto LAB_01d84154;
      *(undefined8 *)((long)unaff_x21 + unaff_x27) = plVar4;
      thunk_FUN_0106e12c((undefined8 *)((long)unaff_x21 + unaff_x27),plVar4);
      unaff_x26 = unaff_x26 + 1;
      unaff_x27 = unaff_x27 + 8;
      if ((long)(int)*(uint *)(unaff_x20 + 0x18) <= (long)unaff_x26) {
        FUN_01d83ce4();
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01022c14(*unaff_x24);
        }
        FUN_01d7ecdc();
        uVar2 = FUN_00fcda0c();
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01022c14(*unaff_x25);
        }
        uVar3 = FUN_01d603ec(uVar2,0,0);
        if ((uVar3 & 1) == 0) {
          return uVar2;
        }
        thunk_FUN_010303a8(PTR_DAT_02353050);
        uVar2 = thunk_FUN_010400dc();
        FUN_01d842e0();
        goto LAB_01d84184;
      }
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_x26) goto LAB_01d84154;
      unaff_x22 = *(long **)(unaff_x20 + unaff_x27);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      uVar3 = FUN_01d603ec(unaff_x22,0,0);
      if ((uVar3 & 1) != 0) {
        thunk_FUN_010303a8(PTR_DAT_0234bbe8);
        uVar2 = thunk_FUN_010400dc();
        FUN_01c66bb4(uVar2,0);
        goto LAB_01d84184;
      }
      param_2 = *unaff_x24;
    } while (unaff_x22 == (long *)0x0);
    param_1 = *unaff_x22;
    in_x9 = (ulong)*(byte *)(param_2 + 0x130);
    in_w10 = (uint)*(byte *)(param_1 + 0x130);
  } while( true );
LAB_01d840a0:
  do {
    if (uVar7 <= uVar3) {
LAB_01d84154:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    if (plVar4 == (long *)0x0) goto LAB_01d84158;
    lVar1 = *(long *)(unaff_x20 + 0x20 + uVar3 * 8);
    if ((lVar1 != 0) &&
       (lVar5 = thunk_FUN_0103ffe0(lVar1,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
LAB_01d8415c:
      uVar2 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar2,0);
    }
    if (*(uint *)(plVar4 + 3) <= uVar3) goto LAB_01d84154;
    *plVar8 = lVar1;
    thunk_FUN_0106e12c(plVar8,lVar1);
    uVar7 = (ulong)*(uint *)(unaff_x20 + 0x18);
    uVar3 = uVar3 + 1;
    plVar8 = plVar8 + 1;
  } while ((long)uVar3 < (long)(int)*(uint *)(unaff_x20 + 0x18));
LAB_01d840fc:
  uVar3 = FUN_01cbcb8c(0);
  if ((uVar3 & 1) == 0) {
    thunk_FUN_010303a8(PTR_DAT_0234cf18);
    uVar2 = thunk_FUN_010400dc();
    FUN_01d59244(uVar2,0);
LAB_01d84184:
    uVar6 = thunk_FUN_010303a8(PTR_DAT_023591e8);
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar2,uVar6);
  }
  lVar1 = *unaff_x24;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01022c14();
    lVar1 = *unaff_x24;
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x30);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01d84150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40));
    return uVar2;
  }
LAB_01d84158:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


