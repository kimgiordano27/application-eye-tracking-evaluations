/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_SaveSpace
ENTRY_POINT: 033f61ec
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033f64e4) */
/* WARNING: Removing unreachable block (ram,0x033f6514) */
/* WARNING: Removing unreachable block (ram,0x033f651c) */

void OVRPlugin_OVRP_1_72_0__ovrp_SaveSpace(void)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  long unaff_x19;
  long unaff_x20;
  long lVar13;
  long *plVar14;
  long lVar15;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  
  FUN_01d7d918(StringLiteral_9373);
  *(undefined1 *)(unaff_x20 + 0xbbb) = 1;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  lVar15 = *(long *)(unaff_x19 + 0x18);
  thunk_FUN_01da0934();
  puVar5 = StringLiteral_9401;
  puVar4 = StringLiteral_9399;
  puVar3 = StringLiteral_9373;
  puVar2 = StringLiteral_1988;
  if (lVar15 == 0) {
    thunk_FUN_01da0934();
    thunk_FUN_01d9987c(unaff_x19 + 0x20,3,0);
  }
  else {
    if (0 < (int)*(ulong *)(lVar15 + 0x18)) {
      uVar12 = 0;
      uVar11 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
      plVar1 = (long *)(unaff_x19 + 0x30);
      do {
        if (uVar11 <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        lVar13 = *(long *)(lVar15 + uVar12 * 8 + 0x20);
        thunk_FUN_01da0934();
        if (lVar13 != 0) {
          for (lVar13 = FUN_02679fe4(lVar13,*(undefined8 *)StringLiteral_9404); lVar13 != 0;
              lVar13 = FUN_02679edc(lVar13,*(undefined8 *)StringLiteral_9403)) {
            iVar6 = FUN_02679ec0(lVar13,*(undefined8 *)StringLiteral_9402);
            while (iVar6 = iVar6 + -1, -1 < iVar6) {
              lVar8 = FUN_02679e88(lVar13,iVar6,*(undefined8 *)puVar5);
              thunk_FUN_01da0934();
              *plVar1 = lVar8;
              thunk_FUN_01e10808(plVar1,lVar8);
              lVar8 = *plVar1;
              thunk_FUN_01da0934();
              if (lVar8 != 0) {
                in_stack_00000030 = lVar13;
                thunk_FUN_01e10808(&stack0x00000030,lVar13);
                in_stack_00000038 = CONCAT44(in_stack_00000038._4_4_,iVar6);
                plVar14 = (long *)*plVar1;
                thunk_FUN_01da0934();
                if ((plVar14 == (long *)0x0) || (*plVar14 != *(long *)puVar3)) {
                  FUN_033f666c();
                }
                else {
                  plVar14 = (long *)plVar14[6];
                  uVar9 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
                  FUN_033f31e8();
                  in_stack_00000028 = in_stack_00000038;
                  in_stack_00000020 = in_stack_00000030;
                  uVar10 = thunk_FUN_01de23e8(*(undefined8 *)puVar4,&stack0x00000020);
                  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01d7db70();
                  }
                  (**(code **)(*plVar14 + 0x178))
                            (plVar14,uVar9,uVar10,*(undefined8 *)(*plVar14 + 0x180));
                  uVar7 = FUN_033d7044(0);
                  thunk_FUN_01da0934();
                  *(undefined4 *)(unaff_x19 + 0x24) = uVar7;
                }
              }
            }
          }
        }
        uVar11 = (ulong)*(uint *)(lVar15 + 0x18);
        uVar12 = uVar12 + 1;
      } while ((long)uVar12 < (long)(int)*(uint *)(lVar15 + 0x18));
    }
    thunk_FUN_01da0934();
    *(undefined4 *)(unaff_x19 + 0x20) = 3;
    thunk_FUN_01da0934();
    *(undefined8 *)(unaff_x19 + 0x30) = 0;
    thunk_FUN_01e10808((undefined8 *)(unaff_x19 + 0x30),0);
    FUN_034015d0(0);
  }
  return;
}


