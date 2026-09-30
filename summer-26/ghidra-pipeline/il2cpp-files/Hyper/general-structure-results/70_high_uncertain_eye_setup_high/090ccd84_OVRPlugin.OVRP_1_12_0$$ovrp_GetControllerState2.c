/*
FUNCTION_NAME: OVRPlugin.OVRP_1_12_0$$ovrp_GetControllerState2
ENTRY_POINT: 090ccd84
PROGRAM: Hyper-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_12_0__ovrp_GetControllerState2
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
               undefined4 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 uStack0000000000000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  uStack0000000000000054 = param_2._8_8_;
  uVar6 = param_2._0_8_;
  uStack0000000000000048 = param_1._8_4_;
  uStack0000000000000040 = param_1._0_8_;
  while( true ) {
    uStack000000000000004c = (undefined4)uVar6;
    uStack0000000000000050 = (undefined4)((ulong)uVar6 >> 0x20);
    uVar6 = FUN_0a17834c();
    FUN_0904d4ec(&stack0x00000000 + 4,uVar6,&stack0x00000040,0);
    uStack0000000000000054 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
    uVar4 = CONCAT44(uStack0000000000000014,uStack0000000000000010);
    uStack0000000000000040 = in_stack_00000000._4_8_;
    uStack000000000000004c = uStack0000000000000010;
    if ((*(long *)(unaff_x19 + 0x48) == 0) ||
       (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38), lVar9 == 0)) break;
    if (*(uint *)(lVar9 + 0x18) <= unaff_x20) {
LAB_090ccf04:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
                    /* try { // try from 090ccddc to 091cce3b has its CatchHandler @ 090ccf4c */
    puVar1 = (undefined8 *)(lVar9 + unaff_x28);
    *(undefined4 *)(puVar1 + 3) = uStack000000000000001c;
    puVar1[2] = CONCAT44(uStack0000000000000018,uStack0000000000000014);
    puVar1[1] = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
    *puVar1 = in_stack_00000000._4_8_;
    while( true ) {
      uVar11 = (undefined4)uVar4;
      unaff_x27 = unaff_x27 + 0x10;
      unaff_x20 = unaff_x20 + 1;
      unaff_x28 = unaff_x28 + 0x1c;
      if (unaff_x27 == 0) {
        return;
      }
      if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_090ccf00;
      lVar9 = FUN_06b7fba4(*(long *)(unaff_x19 + 0x60),unaff_x20 & 0xffffffff,*unaff_x25);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_049a583c(*unaff_x26);
      }
      uVar4 = FUN_0a17cd28(lVar9,0,0);
      lVar7 = *(long *)(unaff_x19 + 0x48);
      if ((uVar4 & 1) == 0) break;
      if (lVar7 == 0) goto LAB_090ccf00;
      lVar9 = *(long *)(lVar7 + 0x48);
      if (*(char *)(unaff_x22 + 0x57b) == '\0') {
        FUN_04947ee4(unaff_x21);
        *(undefined1 *)(unaff_x22 + 0x57b) = 1;
      }
      if (lVar9 == 0) goto LAB_090ccf00;
      if (*(uint *)(lVar9 + 0x18) <= unaff_x20) goto LAB_090ccf04;
      uVar6 = **(undefined8 **)(*unaff_x21 + 0xb8);
      *(undefined8 *)(lVar9 + unaff_x27 + 0x1c8) = (*(undefined8 **)(*unaff_x21 + 0xb8))[1];
      *(undefined8 *)(lVar9 + unaff_x27 + 0x1c0) = uVar6;
      puVar3 = PTR_DAT_0ac0def8;
      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_090ccf00;
      lVar9 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38);
      if (*(char *)(unaff_x29 + 999) == '\0') {
        FUN_04947ee4(PTR_DAT_0ac0def8);
        cVar2 = *(char *)(unaff_x22 + 0x57b);
        puVar8 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
        uVar11 = *puVar8;
        uVar12 = puVar8[1];
        param_3 = puVar8[2];
        *(undefined1 *)(unaff_x29 + 999) = 1;
        unaff_x26 = (long *)PTR_DAT_0ac09788;
        if (cVar2 == '\0') {
          FUN_04947ee4(unaff_x21);
          *(undefined1 *)(unaff_x22 + 0x57b) = 1;
          unaff_x26 = (long *)PTR_DAT_0ac09788;
        }
      }
      else {
        puVar8 = *(undefined4 **)(*(long *)PTR_DAT_0ac0def8 + 0xb8);
        uVar11 = *puVar8;
        uVar12 = puVar8[1];
        param_3 = puVar8[2];
      }
      uVar4 = (ulong)uVar12;
      param_4 = **(undefined4 **)(*unaff_x21 + 0xb8);
      in_stack_00000020 = 0;
      uStack0000000000000028 = 0;
      uStack000000000000002c = 0;
      in_stack_00000038 = 0;
      uStack0000000000000030 = 0;
      uStack0000000000000034 = 0;
      FUN_0a188128(uVar11,&stack0x00000020,0);
      if (lVar9 == 0) goto LAB_090ccf00;
      if (*(uint *)(lVar9 + 0x18) <= unaff_x20) goto LAB_090ccf04;
      puVar1 = (undefined8 *)(lVar9 + unaff_x28);
      *(undefined4 *)(puVar1 + 3) = in_stack_00000038;
      puVar1[2] = CONCAT44(uStack0000000000000034,uStack0000000000000030);
      puVar1[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      *puVar1 = in_stack_00000020;
    }
    if ((lVar7 == 0) || (lVar9 == 0)) break;
    lVar7 = *(long *)(lVar7 + 0x48);
    lVar5 = FUN_0a17834c(lVar9,0);
    if ((lVar5 == 0) || (uVar10 = FUN_0a18a4e0(lVar5,0), lVar7 == 0)) break;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x20) goto LAB_090ccf04;
    lVar7 = lVar7 + unaff_x27;
    *(undefined4 *)(lVar7 + 0x1c0) = uVar10;
    *(undefined4 *)(lVar7 + 0x1c4) = uVar11;
    *(undefined4 *)(lVar7 + 0x1c8) = param_3;
    *(undefined4 *)(lVar7 + 0x1cc) = param_4;
    uVar6 = FUN_0a17834c(lVar9,0);
    FUN_09038efc(&stack0x00000020,uVar6,0,0);
    uStack0000000000000054 = CONCAT44(in_stack_00000038,uStack0000000000000034);
    uVar6 = CONCAT44(uStack0000000000000030,uStack000000000000002c);
    uStack0000000000000040 = in_stack_00000020;
    uStack0000000000000048 = uStack0000000000000028;
  }
LAB_090ccf00:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


