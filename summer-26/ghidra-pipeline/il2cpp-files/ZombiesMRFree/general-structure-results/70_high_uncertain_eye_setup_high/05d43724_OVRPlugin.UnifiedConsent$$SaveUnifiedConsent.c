/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$SaveUnifiedConsent
ENTRY_POINT: 05d43724
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnifiedConsent__SaveUnifiedConsent(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long lVar7;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
  do {
    uVar3 = **(undefined8 **)(*unaff_x21 + 0xb8);
    *(undefined8 *)(unaff_x22 + unaff_x29 + -4) = (*(undefined8 **)(*unaff_x21 + 0xb8))[1];
    *(undefined8 *)(unaff_x22 + unaff_x29 + -0xc) = uVar3;
    if (*(long *)(unaff_x19 + 0x48) == 0) {
LAB_05d43914:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    lVar7 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38);
    if (*(char *)(unaff_x26 + 0x669) == '\0') {
      FUN_02fe925c();
      cVar4 = *(char *)(unaff_x24 + 0x663);
      *(undefined1 *)(unaff_x26 + 0x669) = 1;
    }
    else {
      cVar4 = '\x01';
    }
    puVar6 = *(undefined4 **)(*unaff_x27 + 0xb8);
    uVar12 = *puVar6;
    uVar13 = puVar6[1];
    uVar10 = (ulong)(uint)puVar6[2];
    if (cVar4 == '\0') {
      FUN_02fe925c();
      *(undefined1 *)(unaff_x24 + 0x663) = 1;
    }
    puVar6 = *(undefined4 **)(*unaff_x21 + 0xb8);
    uVar11 = *puVar6;
    in_stack_00000070 = 0;
    uStack0000000000000078 = 0;
    uStack000000000000007c = 0;
    in_stack_00000088 = 0;
    uStack0000000000000080 = 0;
    uStack0000000000000084 = 0;
    FUN_06902890(uVar12,uVar13,uVar10,uVar11,puVar6[1],puVar6[2],puVar6[3],&stack0x00000070,0);
    if (lVar7 == 0) goto LAB_05d43914;
    uVar3 = CONCAT44(in_stack_00000088,uStack0000000000000084);
    if (*(uint *)(lVar7 + 0x18) <= unaff_x20) break;
    uVar8 = CONCAT44(uStack0000000000000080,uStack000000000000007c);
    uVar9 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
    puVar5 = (undefined8 *)(lVar7 + unaff_x28);
    while( true ) {
      unaff_x29 = unaff_x29 + 0x10;
      unaff_x20 = unaff_x20 + 1;
      unaff_x28 = unaff_x28 + 0x1c;
      *(undefined8 *)((long)puVar5 + 0x14) = uVar3;
      *(undefined8 *)((long)puVar5 + 0xc) = uVar8;
      puVar5[1] = uVar9;
      *puVar5 = in_stack_00000070;
      if (unaff_x29 == 0x1cc) {
        return;
      }
      if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_05d43914;
      uVar3 = in_stack_00000070;
      lVar7 = FUN_04430018(*(long *)(unaff_x19 + 0x60),unaff_x20 & 0xffffffff,
                           *(undefined8 *)PTR_DAT_06f6dae8);
      uVar12 = (undefined4)uVar3;
      if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d618);
      }
      uVar1 = FUN_068f9b78(lVar7,0,0);
      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_05d43914;
      unaff_x22 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x48);
      if ((uVar1 & 1) != 0) break;
      if (((lVar7 == 0) || (lVar2 = FUN_068f5d7c(lVar7,0), lVar2 == 0)) ||
         (uVar13 = FUN_0690459c(lVar2,0), unaff_x22 == 0)) goto LAB_05d43914;
      if (*(uint *)(unaff_x22 + 0x18) <= unaff_x20) goto LAB_05d43918;
      puVar6 = (undefined4 *)(unaff_x22 + unaff_x29);
      puVar6[-3] = uVar13;
      puVar6[-2] = uVar12;
      puVar6[-1] = (int)uVar10;
      *puVar6 = uVar11;
      uVar3 = FUN_068f5d7c(lVar7,0);
      FUN_05caf184(&stack0x00000070,uVar3,0,0);
      in_stack_00000098 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
      in_stack_00000090 = in_stack_00000070;
      *(ulong *)(unaff_x25 + 0x14) = CONCAT44(in_stack_00000088,uStack0000000000000084);
      *(ulong *)(unaff_x25 + 0xc) = CONCAT44(uStack0000000000000080,uStack000000000000007c);
      uVar3 = FUN_068f5d7c();
      FUN_05cc37e4(&stack0x00000070,uVar3,&stack0x00000090,0);
      in_stack_00000098 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
      in_stack_00000090 = in_stack_00000070;
      *(ulong *)(unaff_x25 + 0x14) = CONCAT44(in_stack_00000088,uStack0000000000000084);
      *(ulong *)(unaff_x25 + 0xc) = CONCAT44(uStack0000000000000080,uStack000000000000007c);
      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_05d43914;
      lVar7 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38);
      uVar3 = *(undefined8 *)(unaff_x25 + 0x14);
      uVar8 = *(undefined8 *)(unaff_x25 + 0xc);
      uStack0000000000000084 = (undefined4)uVar3;
      in_stack_00000088 = (undefined4)((ulong)uVar3 >> 0x20);
      uStack000000000000007c = (undefined4)uVar8;
      uStack0000000000000080 = (undefined4)((ulong)uVar8 >> 0x20);
      if (lVar7 == 0) goto LAB_05d43914;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x20) goto LAB_05d43918;
      uVar9 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
      puVar5 = (undefined8 *)(lVar7 + unaff_x28);
    }
    if (*(char *)(unaff_x24 + 0x663) == '\0') {
      FUN_02fe925c();
      *(undefined1 *)(unaff_x24 + 0x663) = 1;
    }
    if (unaff_x22 == 0) goto LAB_05d43914;
  } while (unaff_x20 < *(uint *)(unaff_x22 + 0x18));
LAB_05d43918:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


