/*
FUNCTION_NAME: OVRPlugin.OVRP_1_12_0$$ovrp_GetAppFramerate
ENTRY_POINT: 090ccc8c
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_12_0__ovrp_GetAppFramerate
               (undefined1 param_1 [16],ulong param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined8 *puVar1;
  char cVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 *puVar8;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
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
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  do {
    uVar10 = (undefined4)param_2;
    uVar4 = FUN_0a17cd28(param_5,0,0);
    lVar7 = *(long *)(unaff_x19 + 0x48);
    if ((uVar4 & 1) == 0) {
      if ((lVar7 == 0) || (unaff_x23 == 0)) goto LAB_090ccf00;
      lVar7 = *(long *)(lVar7 + 0x48);
      lVar5 = FUN_0a17834c(unaff_x23,0);
      if ((lVar5 == 0) || (uVar9 = FUN_0a18a4e0(lVar5,0), lVar7 == 0)) goto LAB_090ccf00;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x20) goto LAB_090ccf04;
      lVar7 = lVar7 + unaff_x27;
      *(undefined4 *)(lVar7 + 0x1c0) = uVar9;
      *(undefined4 *)(lVar7 + 0x1c4) = uVar10;
      *(undefined4 *)(lVar7 + 0x1c8) = param_3;
      *(undefined4 *)(lVar7 + 0x1cc) = param_4;
      uVar6 = FUN_0a17834c(unaff_x23,0);
      FUN_09038efc(&stack0x00000020,uVar6,0,0);
      uStack0000000000000054 = CONCAT44(in_stack_00000038,uStack0000000000000034);
      uStack0000000000000048 = uStack0000000000000028;
      in_stack_00000040 = in_stack_00000020;
      uStack000000000000004c = uStack000000000000002c;
      uStack0000000000000050 = uStack0000000000000030;
      uVar6 = FUN_0a17834c();
      FUN_0904d4ec(&stack0x00000000 + 4,uVar6,&stack0x00000040,0);
      uStack0000000000000054 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
      param_2 = CONCAT44(uStack0000000000000014,uStack0000000000000010);
      uStack0000000000000048 = in_stack_00000000._12_4_;
      in_stack_00000040 = in_stack_00000000._4_8_;
      uStack000000000000004c = uStack0000000000000010;
      uStack0000000000000050 = uStack0000000000000014;
      if ((*(long *)(unaff_x19 + 0x48) == 0) ||
         (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38), lVar7 == 0)) goto LAB_090ccf00;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x20) goto LAB_090ccf04;
      puVar1 = (undefined8 *)(lVar7 + unaff_x28);
      *(undefined4 *)(puVar1 + 3) = uStack000000000000001c;
      puVar1[2] = CONCAT44(uStack0000000000000018,uStack0000000000000014);
      puVar1[1] = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
      *puVar1 = in_stack_00000000._4_8_;
    }
    else {
      if (lVar7 == 0) {
LAB_090ccf00:
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar7 = *(long *)(lVar7 + 0x48);
      if (*(char *)(unaff_x22 + 0x57b) == '\0') {
        FUN_04947ee4(unaff_x21);
        *(undefined1 *)(unaff_x22 + 0x57b) = 1;
      }
      if (lVar7 == 0) goto LAB_090ccf00;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x20) {
LAB_090ccf04:
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      uVar6 = **(undefined8 **)(*unaff_x21 + 0xb8);
      *(undefined8 *)(lVar7 + unaff_x27 + 0x1c8) = (*(undefined8 **)(*unaff_x21 + 0xb8))[1];
      *(undefined8 *)(lVar7 + unaff_x27 + 0x1c0) = uVar6;
      puVar3 = PTR_DAT_0ac0def8;
      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_090ccf00;
      lVar7 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38);
      if (*(char *)(unaff_x29 + 999) == '\0') {
        FUN_04947ee4(PTR_DAT_0ac0def8);
        cVar2 = *(char *)(unaff_x22 + 0x57b);
        puVar8 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
        uVar10 = *puVar8;
        uVar11 = puVar8[1];
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
        uVar10 = *puVar8;
        uVar11 = puVar8[1];
        param_3 = puVar8[2];
      }
      param_2 = (ulong)uVar11;
      param_4 = **(undefined4 **)(*unaff_x21 + 0xb8);
      in_stack_00000020 = 0;
      uStack0000000000000028 = 0;
      uStack000000000000002c = 0;
      in_stack_00000038 = 0;
      uStack0000000000000030 = 0;
      uStack0000000000000034 = 0;
      FUN_0a188128(uVar10,&stack0x00000020,0);
      if (lVar7 == 0) goto LAB_090ccf00;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x20) goto LAB_090ccf04;
      puVar1 = (undefined8 *)(lVar7 + unaff_x28);
      *(undefined4 *)(puVar1 + 3) = in_stack_00000038;
      puVar1[2] = CONCAT44(uStack0000000000000034,uStack0000000000000030);
      puVar1[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      *puVar1 = in_stack_00000020;
    }
    unaff_x27 = unaff_x27 + 0x10;
    unaff_x20 = unaff_x20 + 1;
    unaff_x28 = unaff_x28 + 0x1c;
    if (unaff_x27 == 0) {
      return;
    }
    if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_090ccf00;
    param_5 = FUN_06b7fba4(*(long *)(unaff_x19 + 0x60),unaff_x20 & 0xffffffff,*unaff_x25);
    unaff_x23 = param_5;
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_049a583c(*unaff_x26);
    }
  } while( true );
}


