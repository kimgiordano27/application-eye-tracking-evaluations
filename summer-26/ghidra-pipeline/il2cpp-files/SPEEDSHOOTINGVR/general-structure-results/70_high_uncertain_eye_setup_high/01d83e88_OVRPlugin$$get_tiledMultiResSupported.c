/*
FUNCTION_NAME: OVRPlugin$$get_tiledMultiResSupported
ENTRY_POINT: 01d83e88
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__get_tiledMultiResSupported(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  ulong uVar10;
  code *in_x9;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *plVar11;
  long *plVar12;
  
                    /* try { // try from 01d83e88 to 01e83e8f has its CatchHandler @ 01d84348 */
  uVar3 = (*in_x9)();
  if ((uVar3 & 1) == 0) {
    uVar6 = thunk_FUN_010303a8(PTR_DAT_0234bd08);
    uVar6 = FUN_00fdc388(uVar6,1);
    FUN_00e5db80();
    FUN_00e5e2a8(uVar6);
    FUN_00e5e2dc(uVar6,0);
    uVar7 = thunk_FUN_010303a8(PTR_DAT_023591f8);
    uVar6 = FUN_01d7c4d8(uVar7,uVar6);
    thunk_FUN_010303a8(PTR_DAT_0234c170);
    uVar7 = thunk_FUN_010400dc();
    FUN_01d4a564(uVar7,uVar6,0);
  }
  else {
    lVar4 = (**(code **)(*unaff_x19 + 0x448))();
    puVar2 = PTR_DAT_0234bce0;
    puVar1 = PTR_DAT_0234bc58;
    if (lVar4 == 0) goto LAB_01d84158;
    iVar9 = (int)*(ulong *)(lVar4 + 0x18);
    if (iVar9 == *(int *)(unaff_x20 + 0x18)) {
                    /* try { // try from 01d83ec4 to 01e83eef has its CatchHandler @ 01d84374 */
      if (0 < iVar9) {
        uVar3 = 0;
        uVar10 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
        lVar4 = 0x20;
        do {
          if (uVar10 <= uVar3) goto LAB_01d84154;
          plVar11 = *(long **)(unaff_x20 + lVar4);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          uVar10 = FUN_01d603ec(plVar11,0,0);
          if ((uVar10 & 1) != 0) {
            thunk_FUN_010303a8(PTR_DAT_0234bbe8);
            uVar6 = thunk_FUN_010400dc();
            FUN_01c66bb4(uVar6,0);
            goto LAB_01d84184;
          }
          lVar5 = *(long *)puVar2;
          if (plVar11 == (long *)0x0) {
LAB_01d83f28:
            plVar12 = (long *)0x0;
          }
          else {
            if (*(byte *)(*plVar11 + 0x130) < *(byte *)(lVar5 + 0x130)) goto LAB_01d83f28;
            plVar12 = plVar11;
            if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) !=
                lVar5) {
              plVar12 = (long *)0x0;
            }
          }
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          if (plVar12 == (long *)0x0) {
            if (plVar11 == (long *)0x0) goto LAB_01d84158;
            uVar3 = (**(code **)(*plVar11 + 0x5d8))(plVar11,*(undefined8 *)(*plVar11 + 0x5e0));
            if ((uVar3 & 1) != 0) {
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01022c14();
              }
              uVar6 = FUN_01d63258();
              return uVar6;
            }
            plVar11 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_0234c5a8,
                                           *(undefined4 *)(unaff_x20 + 0x18));
            if ((int)*(ulong *)(unaff_x20 + 0x18) < 1) goto LAB_01d840fc;
            uVar3 = 0;
            uVar10 = *(ulong *)(unaff_x20 + 0x18) & 0xffffffff;
            plVar12 = plVar11 + 4;
            goto LAB_01d840a0;
          }
          if (unaff_x21 == (long *)0x0) goto LAB_01d84158;
          lVar5 = thunk_FUN_0103ffe0(plVar12,*(undefined8 *)(*unaff_x21 + 0x40));
          if (lVar5 == 0) goto LAB_01d8415c;
          if (*(uint *)(unaff_x21 + 3) <= uVar3) goto LAB_01d84154;
          *(undefined8 *)((long)unaff_x21 + lVar4) = plVar12;
          thunk_FUN_0106e12c((undefined8 *)((long)unaff_x21 + lVar4),plVar12);
          uVar10 = (ulong)*(uint *)(unaff_x20 + 0x18);
          uVar3 = uVar3 + 1;
          lVar4 = lVar4 + 8;
        } while ((long)uVar3 < (long)(int)*(uint *)(unaff_x20 + 0x18));
      }
      FUN_01d83ce4();
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01022c14(*(long *)puVar2);
      }
      FUN_01d7ecdc();
      uVar6 = FUN_00fcda0c();
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01022c14(*(long *)puVar1);
      }
      uVar3 = FUN_01d603ec(uVar6,0,0);
      if ((uVar3 & 1) == 0) {
        return uVar6;
      }
      thunk_FUN_010303a8(PTR_DAT_02353050);
      uVar6 = thunk_FUN_010400dc();
      FUN_01d842e0();
      goto LAB_01d84184;
    }
    uVar6 = thunk_FUN_010303a8(PTR_DAT_02359200);
    thunk_FUN_010303a8(PTR_DAT_0234bcd0);
    uVar7 = thunk_FUN_010400dc();
    uVar8 = thunk_FUN_010303a8(PTR_DAT_023591f0);
    FUN_01c5e198(uVar7,uVar6,uVar8,0);
  }
  uVar6 = thunk_FUN_010303a8(PTR_DAT_023591e8);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar7,uVar6);
LAB_01d840a0:
  do {
    if (uVar10 <= uVar3) {
LAB_01d84154:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    if (plVar11 == (long *)0x0) goto LAB_01d84158;
    lVar4 = *(long *)(unaff_x20 + 0x20 + uVar3 * 8);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_0103ffe0(lVar4,*(undefined8 *)(*plVar11 + 0x40)), lVar5 == 0)) {
LAB_01d8415c:
      uVar6 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar6,0);
    }
    if (*(uint *)(plVar11 + 3) <= uVar3) goto LAB_01d84154;
    *plVar12 = lVar4;
    thunk_FUN_0106e12c(plVar12,lVar4);
    uVar10 = (ulong)*(uint *)(unaff_x20 + 0x18);
    uVar3 = uVar3 + 1;
    plVar12 = plVar12 + 1;
  } while ((long)uVar3 < (long)(int)*(uint *)(unaff_x20 + 0x18));
LAB_01d840fc:
  uVar3 = FUN_01cbcb8c(0);
  if ((uVar3 & 1) == 0) {
    thunk_FUN_010303a8(PTR_DAT_0234cf18);
    uVar6 = thunk_FUN_010400dc();
    FUN_01d59244(uVar6,0);
LAB_01d84184:
    uVar7 = thunk_FUN_010303a8(PTR_DAT_023591e8);
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar6,uVar7);
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01022c14();
    lVar4 = *(long *)puVar2;
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x30);
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01d84150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40));
    return uVar6;
  }
LAB_01d84158:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


