/*
FUNCTION_NAME: OVRPlugin$$GetSystemHeadsetType
ENTRY_POINT: 0513a994
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSystemHeadsetType(void)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long *plVar10;
  long unaff_x20;
  long lVar11;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long *unaff_x29;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  
code_r0x0513a994:
  do {
    plVar10 = unaff_x19;
    unaff_x19 = (long *)plVar10[2];
    if (unaff_x19 == (long *)0x0) {
      FUN_03358a54();
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05093d08();
      return;
    }
    uVar3 = (**(code **)(*unaff_x19 + 0x228))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x230));
    if ((uVar3 & 0xfffffffe) != 2) goto LAB_0513a83c;
  } while (plVar10 == (long *)0x0);
  lVar11 = *unaff_x26;
  lVar5 = thunk_FUN_02d9d438(unaff_x19,lVar11);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60e88(unaff_x19,lVar11);
  }
  lVar5 = *unaff_x26;
  plVar6 = (long *)thunk_FUN_02d9d438(unaff_x19,lVar5);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60e88(unaff_x19,lVar5);
  }
  lVar11 = *plVar6;
  uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar5) {
        puVar7 = (undefined8 *)(lVar11 + (long)(*piVar9 + 2) * 0x10 + 0x138);
        goto LAB_0513a8b4;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar7 = (undefined8 *)FUN_02d9a5d4(plVar6,lVar5,2);
LAB_0513a8b4:
  uVar4 = (*(code *)*puVar7)(plVar6,plVar10,puVar7[1]);
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*unaff_x25);
  }
  FUN_050939c4(&stack0x00000058,2,0);
  uStack000000000000005c = uVar4;
  goto LAB_0513a8f0;
LAB_0513a83c:
  if (uVar3 == 4) {
    bVar1 = *(byte *)(*unaff_x29 + 0x130);
    if ((*(byte *)(*unaff_x19 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x29)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88(unaff_x19);
    }
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_050939c4(&stack0x00000058,1,0);
    in_stack_00000060 = unaff_x19[0xc];
    thunk_FUN_02dd37b4();
LAB_0513a8f0:
    uVar2 = CONCAT44(uStack000000000000005c,uStack0000000000000058);
    if (unaff_x20 != 0) {
      in_stack_00000078 = in_stack_00000060;
      in_stack_00000080 = in_stack_00000068;
      lVar5 = *(long *)(unaff_x20 + 0x10);
      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
      in_stack_00000070 = uVar2;
      if (lVar5 != 0) {
        uVar3 = *(uint *)(unaff_x20 + 0x18);
        if (uVar3 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(unaff_x20 + 0x18) = uVar3 + 1;
          lVar5 = lVar5 + (int)uVar3 * unaff_x27;
          *(undefined8 *)(lVar5 + 0x30) = in_stack_00000068;
          *(long *)(lVar5 + 0x28) = in_stack_00000060;
          *(undefined8 *)(lVar5 + 0x20) = uVar2;
          thunk_FUN_02dd37b4(lVar5 + 0x28,0);
        }
        else {
          FUN_03a78fd4();
        }
        goto code_r0x0513a994;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  goto code_r0x0513a994;
}


