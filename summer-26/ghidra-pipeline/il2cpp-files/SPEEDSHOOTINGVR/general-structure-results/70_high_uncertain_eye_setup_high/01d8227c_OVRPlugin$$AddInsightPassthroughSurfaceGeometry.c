/*
FUNCTION_NAME: OVRPlugin$$AddInsightPassthroughSurfaceGeometry
ENTRY_POINT: 01d8227c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin__AddInsightPassthroughSurfaceGeometry
                 (ulong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long unaff_x20;
  uint unaff_w21;
  long *plVar11;
  long unaff_x22;
  uint uVar12;
  uint uVar13;
  undefined1 uStack0000000000000004;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000008 = param_3;
  if ((param_1 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234bce0);
    *(undefined1 *)(unaff_x22 + 0x7e5) = 1;
  }
  uStack0000000000000004 = 0;
  if (unaff_x20 == 0) {
    thunk_FUN_010303a8(PTR_DAT_0234bbe8);
                    /* try { // try from 01d8250c to 01e82513 has its CatchHandler @ 01d82658 */
    uVar8 = thunk_FUN_010400dc();
                    /* try { // try from 01d82518 to 01e8252b has its CatchHandler @ 01d8266c */
    FUN_01c66bb4(uVar8,0);
    uVar9 = thunk_FUN_010303a8(PTR_DAT_02359188);
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar8,uVar9);
  }
  if (*(int *)(*(long *)PTR_DAT_0234bce0 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  FUN_01d7f198(unaff_w21,&stack0x00000008,&stack0x00000004);
  lVar3 = FUN_01d80e70();
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if ((int)uVar1 < 1) {
      plVar10 = (long *)0x0;
    }
    else {
      uVar13 = 0;
      uVar12 = 0;
      plVar10 = (long *)0x0;
      do {
        if (uVar1 <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        plVar11 = *(long **)(lVar3 + (long)(int)uVar13 * 8 + 0x20);
        if (plVar11 == (long *)0x0) goto LAB_01d824b0;
        uVar1 = FUN_01cd31bc(plVar11,0);
        uVar2 = FUN_01cd31bc(plVar11,0);
        if ((uVar1 & (unaff_w21 ^ 2)) == uVar2) {
          uVar4 = FUN_01cc6c94(plVar10,0,0);
          if ((uVar4 & 1) != 0) {
            lVar5 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
            if (plVar10 == (long *)0x0) goto LAB_01d824b0;
            lVar6 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
            if (lVar5 == lVar6) goto LAB_01d824b8;
            lVar5 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
            if (lVar5 == 0) goto LAB_01d824b0;
            uVar4 = FUN_01d615a0(lVar5,0);
            if ((uVar4 & 1) != 0) {
              lVar5 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
              if (lVar5 == 0) goto LAB_01d824b0;
              uVar1 = FUN_01d615a0(lVar5,0);
              uVar12 = uVar12 | uVar1;
            }
          }
          uVar4 = System_Text_EncoderReplacementFallbackBuffer__Fallback(plVar10,0,0);
          if ((uVar4 & 1) == 0) {
            plVar7 = (long *)(**(code **)(*plVar11 + 0x1b8))
                                       (plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
            if ((plVar10 == (long *)0x0) ||
               (uVar8 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0)),
               plVar7 == (long *)0x0)) goto LAB_01d824b0;
            uVar4 = (**(code **)(*plVar7 + 0x278))(plVar7,uVar8,*(undefined8 *)(*plVar7 + 0x280));
            if ((uVar4 & 1) == 0) {
              lVar5 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
              if (lVar5 == 0) goto LAB_01d824b0;
              uVar4 = FUN_01d615a0(lVar5,0);
              if ((uVar4 & 1) == 0) goto LAB_01d8244c;
            }
          }
          plVar10 = plVar11;
        }
LAB_01d8244c:
        uVar1 = *(uint *)(lVar3 + 0x18);
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < (int)uVar1);
      if ((uVar12 & 1) != 0) {
        if ((plVar10 == (long *)0x0) ||
           (lVar3 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0)),
           lVar3 == 0)) goto LAB_01d824b0;
        uVar4 = FUN_01d615a0(lVar3,0);
        if ((uVar4 & 1) != 0) {
LAB_01d824b8:
          uVar8 = thunk_FUN_010303a8(PTR_DAT_023538c8);
          thunk_FUN_010303a8(PTR_DAT_02353420);
          uVar9 = thunk_FUN_010400dc();
          FUN_01cc6268(uVar9,uVar8,0);
          uVar8 = thunk_FUN_010303a8(PTR_DAT_02359188);
                    /* WARNING: Subroutine does not return */
          FUN_00fdc400(uVar9,uVar8);
        }
      }
    }
    return plVar10;
  }
LAB_01d824b0:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


