/*
FUNCTION_NAME: OVRPlugin$$set_useDynamicFixedFoveatedRendering
ENTRY_POINT: 01d83e34
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 107
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8 OVRPlugin__set_useDynamicFixedFoveatedRendering(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  ulong uVar11;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar12;
  long *plVar13;
  
  FUN_00fdc2e4(*(undefined8 *)(param_1 + 0xce0));
  FUN_00fdc2e4(PTR_DAT_0234c5a8);
  FUN_00fdc2e4(PTR_DAT_0234bc58);
  *(undefined1 *)(unaff_x21 + 0x7f4) = 1;
                    /* try { // try from 01d83e5c to 01e83e83 has its CatchHandler @ 01d8434c */
  if (unaff_x20 != 0) {
    plVar3 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_02352780,*(undefined4 *)(unaff_x20 + 0x18))
    ;
    uVar4 = (**(code **)(*unaff_x19 + 0x3b8))();
    if ((uVar4 & 1) == 0) {
      uVar7 = thunk_FUN_010303a8(PTR_DAT_0234bd08);
      uVar7 = FUN_00fdc388(uVar7,1);
      FUN_00e5db80();
      FUN_00e5e2a8(uVar7);
      FUN_00e5e2dc(uVar7,0);
      uVar8 = thunk_FUN_010303a8(PTR_DAT_023591f8);
      uVar7 = FUN_01d7c4d8(uVar8,uVar7);
      thunk_FUN_010303a8(PTR_DAT_0234c170);
      uVar8 = thunk_FUN_010400dc();
      FUN_01d4a564(uVar8,uVar7,0);
    }
    else {
      lVar5 = (**(code **)(*unaff_x19 + 0x448))();
      puVar2 = PTR_DAT_0234bce0;
      puVar1 = PTR_DAT_0234bc58;
      if (lVar5 == 0) goto LAB_01d84158;
      iVar10 = (int)*(ulong *)(lVar5 + 0x18);
      if (iVar10 == *(int *)(unaff_x20 + 0x18)) {
        if (0 < iVar10) {
          uVar4 = 0;
          uVar11 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
          lVar5 = 0x20;
          do {
            if (uVar11 <= uVar4) goto LAB_01d84154;
            plVar12 = *(long **)(unaff_x20 + lVar5);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01022c14();
            }
            uVar11 = FUN_01d603ec(plVar12,0,0);
            if ((uVar11 & 1) != 0) {
              thunk_FUN_010303a8(PTR_DAT_0234bbe8);
              uVar7 = thunk_FUN_010400dc();
              FUN_01c66bb4(uVar7,0);
              goto LAB_01d84184;
            }
            lVar6 = *(long *)puVar2;
            if (plVar12 == (long *)0x0) {
LAB_01d83f28:
              plVar13 = (long *)0x0;
            }
            else {
              if (*(byte *)(*plVar12 + 0x130) < *(byte *)(lVar6 + 0x130)) goto LAB_01d83f28;
              plVar13 = plVar12;
              if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) !=
                  lVar6) {
                plVar13 = (long *)0x0;
              }
            }
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_01022c14();
            }
            if (plVar13 == (long *)0x0) {
              if (plVar12 == (long *)0x0) goto LAB_01d84158;
              uVar4 = (**(code **)(*plVar12 + 0x5d8))(plVar12,*(undefined8 *)(*plVar12 + 0x5e0));
              if ((uVar4 & 1) != 0) {
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_01022c14();
                }
                uVar7 = FUN_01d63258();
                return uVar7;
              }
              plVar3 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_0234c5a8,
                                            *(undefined4 *)(unaff_x20 + 0x18));
              if ((int)*(ulong *)(unaff_x20 + 0x18) < 1) goto LAB_01d840fc;
              uVar4 = 0;
              uVar11 = *(ulong *)(unaff_x20 + 0x18) & 0xffffffff;
              plVar12 = plVar3 + 4;
              goto LAB_01d840a0;
            }
            if (plVar3 == (long *)0x0) goto LAB_01d84158;
            lVar6 = thunk_FUN_0103ffe0(plVar13,*(undefined8 *)(*plVar3 + 0x40));
            if (lVar6 == 0) goto LAB_01d8415c;
            if (*(uint *)(plVar3 + 3) <= uVar4) goto LAB_01d84154;
            *(undefined8 *)((long)plVar3 + lVar5) = plVar13;
            thunk_FUN_0106e12c((undefined8 *)((long)plVar3 + lVar5),plVar13);
            uVar11 = (ulong)*(uint *)(unaff_x20 + 0x18);
            uVar4 = uVar4 + 1;
            lVar5 = lVar5 + 8;
          } while ((long)uVar4 < (long)(int)*(uint *)(unaff_x20 + 0x18));
        }
        uVar7 = FUN_01d83ce4();
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01022c14(*(long *)puVar2);
        }
        FUN_01d7ecdc(plVar3,uVar7);
        uVar7 = FUN_00fcda0c();
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01022c14(*(long *)puVar1);
        }
        uVar4 = FUN_01d603ec(uVar7,0,0);
        if ((uVar4 & 1) == 0) {
          return uVar7;
        }
        thunk_FUN_010303a8(PTR_DAT_02353050);
        uVar7 = thunk_FUN_010400dc();
        FUN_01d842e0();
        goto LAB_01d84184;
      }
      uVar7 = thunk_FUN_010303a8(PTR_DAT_02359200);
      thunk_FUN_010303a8(PTR_DAT_0234bcd0);
      uVar8 = thunk_FUN_010400dc();
      uVar9 = thunk_FUN_010303a8(PTR_DAT_023591f0);
      FUN_01c5e198(uVar8,uVar7,uVar9,0);
    }
    uVar7 = thunk_FUN_010303a8(PTR_DAT_023591e8);
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar8,uVar7);
  }
  thunk_FUN_010303a8(PTR_DAT_0234bbe8);
  uVar7 = thunk_FUN_010400dc();
  uVar8 = thunk_FUN_010303a8(PTR_DAT_023591f0);
  FUN_01c5e120(uVar7,uVar8,0);
  goto LAB_01d84184;
LAB_01d840a0:
  do {
    if (uVar11 <= uVar4) {
LAB_01d84154:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    if (plVar3 == (long *)0x0) goto LAB_01d84158;
    lVar5 = *(long *)(unaff_x20 + 0x20 + uVar4 * 8);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_0103ffe0(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0)) {
LAB_01d8415c:
      uVar7 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar7,0);
    }
    if (*(uint *)(plVar3 + 3) <= uVar4) goto LAB_01d84154;
    *plVar12 = lVar5;
    thunk_FUN_0106e12c(plVar12,lVar5);
    uVar11 = (ulong)*(uint *)(unaff_x20 + 0x18);
    uVar4 = uVar4 + 1;
    plVar12 = plVar12 + 1;
  } while ((long)uVar4 < (long)(int)*(uint *)(unaff_x20 + 0x18));
LAB_01d840fc:
  uVar4 = FUN_01cbcb8c(0);
  if ((uVar4 & 1) != 0) {
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01022c14();
      lVar5 = *(long *)puVar2;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
    if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01d84150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40));
      return uVar7;
    }
LAB_01d84158:
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  thunk_FUN_010303a8(PTR_DAT_0234cf18);
  uVar7 = thunk_FUN_010400dc();
  FUN_01d59244(uVar7,0);
LAB_01d84184:
  uVar8 = thunk_FUN_010303a8(PTR_DAT_023591e8);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar7,uVar8);
}


