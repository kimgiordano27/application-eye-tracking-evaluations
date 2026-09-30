/*
FUNCTION_NAME: OVRPlugin$$RegisterOpenXREventHandler
ENTRY_POINT: 0575a628
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__RegisterOpenXREventHandler(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined4 *puVar13;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar14;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong uVar15;
  undefined8 *unaff_x23;
  undefined8 uVar16;
  long lVar17;
  
  FUN_02f07e70();
  FUN_02f07e70(PTR_DAT_06d59798);
  *(undefined1 *)(unaff_x22 + 0xa76) = 1;
  lVar6 = thunk_FUN_02ef1808(*unaff_x23);
  FUN_05645a04(lVar6,0);
  puVar2 = PTR_DAT_06d576a8;
  if (unaff_x21 == 0) {
    if (unaff_x19 == (long *)0x0) goto LAB_0575a9ec;
    UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x19 + 0x658);
    goto LAB_0575a9cc;
  }
  if (unaff_x20 == (long *)0x0) goto LAB_0575a9ec;
  plVar7 = (long *)(**(code **)(*unaff_x20 + 0x3a8))();
  if (plVar7 == (long *)0x0) {
LAB_0575a69c:
    plVar7 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06d555f8 + 0x130);
    if (*(byte *)(*plVar7 + 0x130) < bVar1) goto LAB_0575a69c;
    if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06d555f8) {
      plVar7 = (long *)0x0;
    }
  }
  lVar8 = *(long *)puVar2;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar8 = *(long *)puVar2;
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
  uVar9 = thunk_FUN_02ebbee0();
  if (lVar8 != 0) {
    uVar9 = FUN_046e8380(lVar8,uVar9,*(undefined8 *)PTR_DAT_06d58038);
    if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
       (lVar8 = FUN_046e8380(**(long **)(*(long *)puVar2 + 0xb8),uVar9,
                             *(undefined8 *)PTR_DAT_06d59780), puVar2 = PTR_DAT_06d02bd0, lVar8 != 0
       )) {
      lVar17 = *(long *)(lVar8 + 0x10);
      lVar10 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,1);
      if (lVar10 != 0) {
        lVar11 = thunk_FUN_02ef170c();
        if (lVar11 == 0) {
LAB_0575a9f4:
          uVar9 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
          FUN_02f07f94(uVar9,0);
        }
        if (*(int *)(lVar10 + 0x18) == 0) {
LAB_0575a9f0:
                    /* WARNING: Subroutine does not return */
          FUN_02f080c8();
        }
        *(long *)(lVar10 + 0x20) = unaff_x21;
        thunk_FUN_02f411dc();
        if (((lVar17 != 0) &&
            (plVar12 = (long *)FUN_056e4c2c(lVar17,lVar10,0), puVar5 = PTR_DAT_06d59788,
            puVar4 = PTR_DAT_06d59778, puVar3 = PTR_DAT_06d59770, lVar6 != 0)) &&
           (plVar12 != (long *)0x0)) {
          if (*(long *)(*plVar12 + 0x40) != *(long *)(*(long *)PTR_DAT_06d02bc8 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08440();
          }
          puVar13 = (undefined4 *)thunk_FUN_02ef195c();
          *(undefined4 *)(lVar6 + 0x10) = *puVar13;
          uVar16 = *(undefined8 *)(lVar8 + 0x18);
          uVar9 = thunk_FUN_02ef1808(*(undefined8 *)puVar4);
          FUN_0513bd28(uVar9,lVar6,*(undefined8 *)puVar5,0);
          lVar6 = FUN_03a2c33c(uVar16,uVar9,*(undefined8 *)puVar3);
          puVar3 = PTR_DAT_06d59790;
          if (unaff_x19 != (long *)0x0) {
            (**(code **)(*unaff_x19 + 0x578))();
            if (plVar7 != (long *)0x0) {
              FUN_056fd0d8(plVar7,*(undefined8 *)puVar3,0);
            }
            (**(code **)(*unaff_x19 + 0x5d8))();
            if (lVar6 != 0) {
              (**(code **)(*unaff_x19 + 0x698))();
              if ((*(long *)(lVar6 + 0x20) != 0) && (*(long *)(*(long *)(lVar6 + 0x20) + 0x18) != 0)
                 ) {
                lVar8 = *(long *)(lVar6 + 0x28);
                lVar6 = FUN_02f07f14(*(undefined8 *)puVar2,1);
                if (lVar6 == 0) goto LAB_0575a9ec;
                lVar10 = thunk_FUN_02ef170c();
                if (lVar10 == 0) goto LAB_0575a9f4;
                if (*(int *)(lVar6 + 0x18) == 0) goto LAB_0575a9f0;
                *(long *)(lVar6 + 0x20) = unaff_x21;
                thunk_FUN_02f411dc();
                if (lVar8 == 0) goto LAB_0575a9ec;
                lVar6 = FUN_056e4c2c(lVar8,lVar6,0);
                if (lVar6 == 0) {
                  lVar8 = 0;
                }
                else {
                  uVar9 = *(undefined8 *)puVar2;
                  lVar8 = thunk_FUN_02ef170c(lVar6,uVar9);
                  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f08440(lVar6,uVar9);
                  }
                }
                if (plVar7 != (long *)0x0) {
                  FUN_056fd0d8(plVar7,*(undefined8 *)PTR_DAT_06d59798,0);
                }
                (**(code **)(*unaff_x19 + 0x5d8))();
                (**(code **)(*unaff_x19 + 0x598))();
                if (lVar8 == 0) goto LAB_0575a9ec;
                if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
                  uVar15 = 0;
                  uVar14 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
                  do {
                    if (uVar14 <= uVar15) goto LAB_0575a9f0;
                    FUN_0569d504();
                    uVar14 = (ulong)*(uint *)(lVar8 + 0x18);
                    uVar15 = uVar15 + 1;
                  } while ((long)uVar15 < (long)(int)*(uint *)(lVar8 + 0x18));
                }
                (**(code **)(*unaff_x19 + 0x5a8))();
              }
              UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x19 + 0x588);
LAB_0575a9cc:
                    /* WARNING: Could not recover jumptable at 0x0575a9e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE)();
              return;
            }
          }
        }
      }
    }
  }
LAB_0575a9ec:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


