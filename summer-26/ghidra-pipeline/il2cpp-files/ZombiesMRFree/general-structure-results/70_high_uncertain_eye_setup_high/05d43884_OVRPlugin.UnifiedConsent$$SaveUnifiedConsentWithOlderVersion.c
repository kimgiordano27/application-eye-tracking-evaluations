/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$SaveUnifiedConsentWithOlderVersion
ENTRY_POINT: 05d43884
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


void OVRPlugin_UnifiedConsent__SaveUnifiedConsentWithOlderVersion
               (undefined4 *param_1,ulong param_2,ulong param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  char cVar6;
  undefined8 *puVar7;
  uint *puVar8;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long lVar9;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  ulong unaff_d10;
  undefined8 uStack0000000000000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 uStack0000000000000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
  while( true ) {
    uVar14 = *param_1;
    uStack0000000000000070 = 0;
    uStack0000000000000078 = 0;
    uStack000000000000007c = 0;
    uStack0000000000000088 = 0;
    uStack0000000000000080 = 0;
    uStack0000000000000084 = 0;
    FUN_06902890(param_2,param_3,unaff_d10,uVar14,param_1[1],param_1[2],param_1[3],param_4,0);
    if (unaff_x23 == 0) break;
    uVar5 = CONCAT44(uStack0000000000000088,uStack0000000000000084);
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_x20) {
LAB_05d43918:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    uVar12 = CONCAT44(uStack0000000000000080,uStack000000000000007c);
    uVar13 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
    puVar7 = (undefined8 *)(unaff_x23 + unaff_x28);
    while( true ) {
      unaff_x29 = unaff_x29 + 0x10;
      unaff_x20 = unaff_x20 + 1;
      unaff_x28 = unaff_x28 + 0x1c;
      *(undefined8 *)((long)puVar7 + 0x14) = uVar5;
      *(undefined8 *)((long)puVar7 + 0xc) = uVar12;
      puVar7[1] = uVar13;
      *puVar7 = uStack0000000000000070;
      if (unaff_x29 == 0x1cc) {
        return;
      }
      if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_05d43914;
      uVar5 = uStack0000000000000070;
      lVar2 = FUN_04430018(*(long *)(unaff_x19 + 0x60),unaff_x20 & 0xffffffff,
                           *(undefined8 *)PTR_DAT_06f6dae8);
      uVar11 = (undefined4)uVar5;
      if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d618);
      }
      uVar3 = FUN_068f9b78(lVar2,0,0);
      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_05d43914;
      lVar9 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x48);
      if ((uVar3 & 1) != 0) break;
      if (((lVar2 == 0) || (lVar4 = FUN_068f5d7c(lVar2,0), lVar4 == 0)) ||
         (uVar10 = FUN_0690459c(lVar4,0), lVar9 == 0)) goto LAB_05d43914;
      if (*(uint *)(lVar9 + 0x18) <= unaff_x20) goto LAB_05d43918;
      puVar1 = (undefined4 *)(lVar9 + unaff_x29);
      puVar1[-3] = uVar10;
      puVar1[-2] = uVar11;
      puVar1[-1] = (int)unaff_d10;
      *puVar1 = uVar14;
      uVar5 = FUN_068f5d7c(lVar2,0);
      FUN_05caf184(&stack0x00000070,uVar5,0,0);
      in_stack_00000098 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
      in_stack_00000090 = uStack0000000000000070;
      *(ulong *)(unaff_x25 + 0x14) = CONCAT44(uStack0000000000000088,uStack0000000000000084);
      *(ulong *)(unaff_x25 + 0xc) = CONCAT44(uStack0000000000000080,uStack000000000000007c);
      uVar5 = FUN_068f5d7c();
      FUN_05cc37e4(&stack0x00000070,uVar5,&stack0x00000090,0);
      in_stack_00000098 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
      in_stack_00000090 = uStack0000000000000070;
      *(ulong *)(unaff_x25 + 0x14) = CONCAT44(uStack0000000000000088,uStack0000000000000084);
      *(ulong *)(unaff_x25 + 0xc) = CONCAT44(uStack0000000000000080,uStack000000000000007c);
      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_05d43914;
      lVar2 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38);
      uVar5 = *(undefined8 *)(unaff_x25 + 0x14);
      uVar12 = *(undefined8 *)(unaff_x25 + 0xc);
      uStack0000000000000084 = (undefined4)uVar5;
      uStack0000000000000088 = (undefined4)((ulong)uVar5 >> 0x20);
      uStack000000000000007c = (undefined4)uVar12;
      uStack0000000000000080 = (undefined4)((ulong)uVar12 >> 0x20);
      if (lVar2 == 0) goto LAB_05d43914;
      if (*(uint *)(lVar2 + 0x18) <= unaff_x20) goto LAB_05d43918;
      uVar13 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
      puVar7 = (undefined8 *)(lVar2 + unaff_x28);
    }
    if (*(char *)(unaff_x24 + 0x663) == '\0') {
      FUN_02fe925c();
      *(undefined1 *)(unaff_x24 + 0x663) = 1;
    }
    if (lVar9 == 0) break;
    if (*(uint *)(lVar9 + 0x18) <= unaff_x20) goto LAB_05d43918;
    uVar5 = **(undefined8 **)(*unaff_x21 + 0xb8);
    *(undefined8 *)(lVar9 + unaff_x29 + -4) = (*(undefined8 **)(*unaff_x21 + 0xb8))[1];
    *(undefined8 *)(lVar9 + unaff_x29 + -0xc) = uVar5;
    if (*(long *)(unaff_x19 + 0x48) == 0) break;
    unaff_x23 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38);
    if (*(char *)(unaff_x22 + 0x669) == '\0') {
      FUN_02fe925c();
      cVar6 = *(char *)(unaff_x24 + 0x663);
      *(undefined1 *)(unaff_x22 + 0x669) = 1;
    }
    else {
      cVar6 = '\x01';
    }
    puVar8 = *(uint **)(*unaff_x27 + 0xb8);
    param_2 = (ulong)*puVar8;
    param_3 = (ulong)puVar8[1];
    unaff_d10 = (ulong)puVar8[2];
    if (cVar6 == '\0') {
      FUN_02fe925c();
      *(undefined1 *)(unaff_x24 + 0x663) = 1;
    }
    param_4 = (undefined1 *)&stack0x00000070;
    param_1 = *(undefined4 **)(*unaff_x21 + 0xb8);
  }
LAB_05d43914:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


