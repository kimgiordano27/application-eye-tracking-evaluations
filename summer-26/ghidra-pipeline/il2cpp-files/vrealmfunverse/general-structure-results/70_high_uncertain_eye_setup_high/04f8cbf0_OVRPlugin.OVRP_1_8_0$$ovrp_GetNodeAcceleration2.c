/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetNodeAcceleration2
ENTRY_POINT: 04f8cbf0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_8_0__ovrp_GetNodeAcceleration2(void)

{
  undefined8 *puVar1;
  char cVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 *puVar9;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  undefined **unaff_x26;
  long *plVar10;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 unaff_s8;
  uint unaff_s9;
  undefined4 unaff_s10;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  do {
    plVar10 = (long *)unaff_x26[0xa4];
LAB_04f8cbf8:
    do {
      uVar5 = (ulong)unaff_s9;
      uVar13 = **(undefined4 **)(*unaff_x22 + 0xb8);
      uStack0000000000000020 = 0;
      uStack0000000000000028 = 0;
      uStack000000000000002c = 0;
      uStack0000000000000038 = 0;
      uStack0000000000000030 = 0;
      uStack0000000000000034 = 0;
      FUN_05c99d80(unaff_s8,&stack0x00000020,0);
      if (unaff_x23 == 0) goto LAB_04f8cc94;
      if (*(uint *)(unaff_x23 + 0x18) <= unaff_x20) {
LAB_04f8cc98:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      puVar1 = (undefined8 *)(unaff_x23 + unaff_x28);
      *(undefined4 *)(puVar1 + 3) = uStack0000000000000038;
      puVar1[2] = CONCAT44(uStack0000000000000034,uStack0000000000000030);
      puVar1[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      *puVar1 = uStack0000000000000020;
      while( true ) {
        uVar12 = (undefined4)uVar5;
        unaff_x27 = unaff_x27 + 0x10;
        unaff_x20 = unaff_x20 + 1;
        unaff_x28 = unaff_x28 + 0x1c;
        if (unaff_x27 == 0) {
          return;
        }
        if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_04f8cc94;
        lVar4 = FUN_037a6268(*(long *)(unaff_x19 + 0x60),unaff_x20 & 0xffffffff,*unaff_x25);
        if (*(int *)(*plVar10 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*plVar10);
        }
        uVar5 = FUN_05c8e378(lVar4,0,0);
        lVar8 = *(long *)(unaff_x19 + 0x48);
        if ((uVar5 & 1) != 0) break;
        if ((lVar8 == 0) || (lVar4 == 0)) goto LAB_04f8cc94;
        lVar8 = *(long *)(lVar8 + 0x48);
        lVar6 = FUN_05c89340(lVar4,0);
        if ((lVar6 == 0) || (uVar11 = FUN_05c9c2ec(lVar6,0), lVar8 == 0)) goto LAB_04f8cc94;
        if (*(uint *)(lVar8 + 0x18) <= unaff_x20) goto LAB_04f8cc98;
        lVar8 = lVar8 + unaff_x27;
        *(undefined4 *)(lVar8 + 0x1c0) = uVar11;
        *(undefined4 *)(lVar8 + 0x1c4) = uVar12;
        *(undefined4 *)(lVar8 + 0x1c8) = unaff_s10;
        *(undefined4 *)(lVar8 + 0x1cc) = uVar13;
        uVar7 = FUN_05c89340(lVar4,0);
        FUN_04ef8cd4(&stack0x00000020,uVar7,0,0);
        uStack0000000000000054 = CONCAT44(uStack0000000000000038,uStack0000000000000034);
        uStack0000000000000048 = uStack0000000000000028;
        in_stack_00000040 = uStack0000000000000020;
        uStack000000000000004c = uStack000000000000002c;
        uStack0000000000000050 = uStack0000000000000030;
        uVar7 = FUN_05c89340();
        FUN_04f0d2c4(&stack0x00000000 + 4,uVar7,&stack0x00000040,0);
        uStack0000000000000054 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
        uVar5 = CONCAT44(uStack0000000000000014,uStack0000000000000010);
        uStack0000000000000048 = in_stack_00000000._12_4_;
        in_stack_00000040 = in_stack_00000000._4_8_;
        uStack000000000000004c = uStack0000000000000010;
        uStack0000000000000050 = uStack0000000000000014;
        if ((*(long *)(unaff_x19 + 0x48) == 0) ||
           (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38), lVar4 == 0)) goto LAB_04f8cc94;
        if (*(uint *)(lVar4 + 0x18) <= unaff_x20) goto LAB_04f8cc98;
        puVar1 = (undefined8 *)(lVar4 + unaff_x28);
        *(undefined4 *)(puVar1 + 3) = uStack000000000000001c;
        puVar1[2] = CONCAT44(uStack0000000000000018,uStack0000000000000014);
        puVar1[1] = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
        *puVar1 = in_stack_00000000._4_8_;
      }
      if (lVar8 == 0) {
LAB_04f8cc94:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar4 = *(long *)(lVar8 + 0x48);
      if (*(char *)(unaff_x24 + 0xd9a) == '\0') {
        FUN_02b3c81c(unaff_x22);
        *(undefined1 *)(unaff_x24 + 0xd9a) = 1;
      }
      if (lVar4 == 0) goto LAB_04f8cc94;
      if (*(uint *)(lVar4 + 0x18) <= unaff_x20) goto LAB_04f8cc98;
      uVar7 = **(undefined8 **)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar4 + unaff_x27 + 0x1c8) = (*(undefined8 **)(*unaff_x22 + 0xb8))[1];
      *(undefined8 *)(lVar4 + unaff_x27 + 0x1c0) = uVar7;
      puVar3 = PTR_DAT_06312438;
      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_04f8cc94;
      unaff_x23 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38);
      if (*(char *)(unaff_x29 + 0xd97) != '\0') {
        puVar9 = *(undefined4 **)(*(long *)PTR_DAT_06312438 + 0xb8);
        unaff_s8 = *puVar9;
        unaff_s9 = puVar9[1];
        unaff_s10 = puVar9[2];
        goto LAB_04f8cbf8;
      }
      FUN_02b3c81c(PTR_DAT_06312438);
      cVar2 = *(char *)(unaff_x24 + 0xd9a);
      puVar9 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
      unaff_s8 = *puVar9;
      unaff_s9 = puVar9[1];
      unaff_s10 = puVar9[2];
      *(undefined1 *)(unaff_x29 + 0xd97) = 1;
      plVar10 = (long *)PTR_DAT_06312520;
    } while (cVar2 != '\0');
    FUN_02b3c81c(unaff_x22);
    *(undefined1 *)(unaff_x24 + 0xd9a) = 1;
    unaff_x26 = &PTR_FUN_06312000;
  } while( true );
}


