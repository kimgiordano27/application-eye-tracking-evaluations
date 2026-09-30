/*
FUNCTION_NAME: OVRManager.<>c$$.cctor
ENTRY_POINT: 0573b9ac
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_<>c___cctor(undefined1 param_1 [16])

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 in_x9;
  int *piVar8;
  long *unaff_x19;
  long *plVar9;
  long unaff_x20;
  long lVar10;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long *unaff_x29;
  undefined8 uVar11;
  undefined8 uStack0000000000000020;
  long lStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  
  uVar11 = param_1._0_8_;
  lVar4 = param_1._8_8_;
code_r0x0573b9ac:
  uStack0000000000000020 = uVar11;
  lStack0000000000000028 = lVar4;
  uStack0000000000000030 = in_x9;
  FUN_03f984b0();
LAB_0573b9b8:
  do {
    plVar9 = unaff_x19;
    unaff_x19 = (long *)plVar9[2];
    if (unaff_x19 == (long *)0x0) {
      FUN_037f063c();
      lStack0000000000000028 = 0;
      uStack0000000000000020 = 0;
      uStack0000000000000030 = 0;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      Oculus_Platform_Message__GetAssetFileDownloadCancelResult();
      return;
    }
    uVar2 = (**(code **)(*unaff_x19 + 0x228))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x230));
    if ((uVar2 & 0xfffffffe) != 2) goto LAB_0573b860;
  } while (plVar9 == (long *)0x0);
  lVar10 = *unaff_x26;
  lVar4 = thunk_FUN_02ef170c(unaff_x19,lVar10);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08440(unaff_x19,lVar10);
  }
  lVar4 = *unaff_x26;
  plVar5 = (long *)thunk_FUN_02ef170c(unaff_x19,lVar4);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08440(unaff_x19,lVar4);
  }
  lVar10 = *plVar5;
  uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar4) {
        puVar6 = (undefined8 *)(lVar10 + (long)(*piVar8 + 2) * 0x10 + 0x138);
        goto LAB_0573b8d8;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar6 = (undefined8 *)FUN_02eea86c(plVar5,lVar4,2);
LAB_0573b8d8:
  uVar3 = (*(code *)*puVar6)(plVar5,plVar9,puVar6[1]);
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*unaff_x25);
  }
  FUN_056938e4(&stack0x00000058,2,0);
  uStack000000000000005c = uVar3;
  goto LAB_0573b914;
LAB_0573b860:
  if (uVar2 == 4) {
    bVar1 = *(byte *)(*unaff_x29 + 0x130);
    if ((*(byte *)(*unaff_x19 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x29)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(unaff_x19);
    }
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_056938e4(&stack0x00000058,1,0);
    in_stack_00000060 = unaff_x19[0xc];
    thunk_FUN_02f411dc();
LAB_0573b914:
    uVar11 = CONCAT44(uStack000000000000005c,uStack0000000000000058);
    if (unaff_x20 != 0) {
      in_stack_00000078 = in_stack_00000060;
      in_stack_00000080 = in_stack_00000068;
      lVar10 = *(long *)(unaff_x20 + 0x10);
      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
      in_stack_00000070 = uVar11;
      if (lVar10 != 0) {
        uVar2 = *(uint *)(unaff_x20 + 0x18);
        in_x9 = in_stack_00000068;
        lVar4 = in_stack_00000060;
        if (uVar2 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
          lVar10 = lVar10 + (int)uVar2 * unaff_x27;
          *(undefined8 *)(lVar10 + 0x30) = in_stack_00000068;
          *(long *)(lVar10 + 0x28) = in_stack_00000060;
          *(undefined8 *)(lVar10 + 0x20) = uVar11;
          thunk_FUN_02f411dc(lVar10 + 0x28,0);
          goto LAB_0573b9b8;
        }
        goto code_r0x0573b9ac;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  goto LAB_0573b9b8;
}


