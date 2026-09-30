/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<float>$$.ctor
ENTRY_POINT: 065c5d14
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<float>___ctor(long param_1)

{
  long *plVar1;
  char *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  short *psVar6;
  undefined8 *puVar7;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  long unaff_x22;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  
  plVar1 = (long *)thunk_FUN_040b4b34(*(undefined8 *)(param_1 + 0x28));
  if (plVar1 == (long *)0x0) goto LAB_065c642c;
  if (*(long *)(*plVar1 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x18) + 0x40)) goto LAB_065c6430;
  pcVar2 = (char *)thunk_FUN_040b5044();
  if (*pcVar2 == '\0') {
LAB_065c6318:
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
  }
  else {
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    uVar8 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)(unaff_x22 + 0xe0));
    }
    uVar8 = FUN_0768890c(uVar8,0);
    uVar4 = FUN_0768890c(*(long *)(unaff_x22 + 0x30) + 0x20,0);
    uVar5 = FUN_07691f40(uVar8,uVar4,0);
    if ((uVar5 & 1) != 0) {
      lVar3 = *(long *)(unaff_x19 + 0x20);
      in_stack_00000020 = *unaff_x20;
      uStack0000000000000034 = *(undefined8 *)((long)unaff_x20 + 0x14);
      uStack0000000000000028 = (undefined4)unaff_x20[1];
      uStack000000000000002c = (undefined4)*(undefined8 *)((long)unaff_x20 + 0xc);
      uStack0000000000000030 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x20 + 0xc) >> 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_040b1acc();
      }
      plVar1 = (long *)thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),
                                          &stack0x00000020);
      if (plVar1 == (long *)0x0) goto LAB_065c642c;
      if (*(long *)(*plVar1 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x30) + 0x40))
      goto LAB_065c6430;
      pcVar2 = (char *)thunk_FUN_040b5044();
      if (*pcVar2 == '\0') goto LAB_065c6318;
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    uVar8 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)(unaff_x22 + 0xe0));
    }
    uVar8 = FUN_0768890c(uVar8,0);
    uVar4 = FUN_0768890c(*(long *)(unaff_x22 + 0x88) + 0x20,0);
    uVar5 = FUN_07691f40(uVar8,uVar4,0);
    if ((uVar5 & 1) != 0) {
      lVar3 = *(long *)(unaff_x19 + 0x20);
      in_stack_00000020 = *unaff_x20;
      uStack0000000000000034 = *(undefined8 *)((long)unaff_x20 + 0x14);
      uStack0000000000000028 = (undefined4)unaff_x20[1];
      uStack000000000000002c = (undefined4)*(undefined8 *)((long)unaff_x20 + 0xc);
      uStack0000000000000030 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x20 + 0xc) >> 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_040b1acc();
      }
      plVar1 = (long *)thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),
                                          &stack0x00000020);
      if (plVar1 == (long *)0x0) goto LAB_065c642c;
      if (*(long *)(*plVar1 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x88) + 0x40))
      goto LAB_065c6430;
      psVar6 = (short *)thunk_FUN_040b5044();
      if (*psVar6 == 0) goto LAB_065c6318;
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    uVar8 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)(unaff_x22 + 0xe0));
    }
    uVar8 = FUN_0768890c(uVar8,0);
    uVar4 = FUN_0768890c(*(long *)(unaff_x22 + 0x68) + 0x20,0);
    uVar5 = FUN_07691f40(uVar8,uVar4,0);
    if ((uVar5 & 1) != 0) {
      lVar3 = *(long *)(unaff_x19 + 0x20);
      in_stack_00000020 = *unaff_x20;
      uStack0000000000000034 = *(undefined8 *)((long)unaff_x20 + 0x14);
      uStack0000000000000028 = (undefined4)unaff_x20[1];
      uStack000000000000002c = (undefined4)*(undefined8 *)((long)unaff_x20 + 0xc);
      uStack0000000000000030 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x20 + 0xc) >> 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_040b1acc();
      }
      plVar1 = (long *)thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),
                                          &stack0x00000020);
      if (plVar1 == (long *)0x0) goto LAB_065c642c;
      if (*(long *)(*plVar1 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x68) + 0x40))
      goto LAB_065c6430;
      plVar1 = (long *)thunk_FUN_040b5044();
      if (*plVar1 == 0) goto LAB_065c6318;
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    uVar8 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)(unaff_x22 + 0xe0));
    }
    uVar8 = FUN_0768890c(uVar8,0);
    uVar4 = FUN_0768890c(*(long *)(unaff_x22 + 0x70) + 0x20,0);
    uVar5 = FUN_07691f40(uVar8,uVar4,0);
    if ((uVar5 & 1) != 0) {
      lVar3 = *(long *)(unaff_x19 + 0x20);
      in_stack_00000020 = *unaff_x20;
      uStack0000000000000034 = *(undefined8 *)((long)unaff_x20 + 0x14);
      uStack0000000000000028 = (undefined4)unaff_x20[1];
      uStack000000000000002c = (undefined4)*(undefined8 *)((long)unaff_x20 + 0xc);
      uStack0000000000000030 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x20 + 0xc) >> 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_040b1acc();
      }
      plVar1 = (long *)thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),
                                          &stack0x00000020);
      if (plVar1 == (long *)0x0) goto LAB_065c642c;
      if (*(long *)(*plVar1 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x70) + 0x40))
      goto LAB_065c6430;
      plVar1 = (long *)thunk_FUN_040b5044();
      if (*plVar1 == 0) goto LAB_065c6318;
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    uVar8 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)(unaff_x22 + 0xe0));
    }
    uVar8 = FUN_0768890c(uVar8,0);
    uVar4 = FUN_0768890c(*(long *)(unaff_x22 + 0x38) + 0x20,0);
    uVar5 = FUN_07691f40(uVar8,uVar4,0);
    if ((uVar5 & 1) != 0) {
      lVar3 = *(long *)(unaff_x19 + 0x20);
      in_stack_00000020 = *unaff_x20;
      uStack0000000000000034 = *(undefined8 *)((long)unaff_x20 + 0x14);
      uStack0000000000000028 = (undefined4)unaff_x20[1];
      uStack000000000000002c = (undefined4)*(undefined8 *)((long)unaff_x20 + 0xc);
      uStack0000000000000030 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x20 + 0xc) >> 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_040b1acc();
      }
      plVar1 = (long *)thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),
                                          &stack0x00000020);
      if (plVar1 == (long *)0x0) goto LAB_065c642c;
      if (*(long *)(*plVar1 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x38) + 0x40))
      goto LAB_065c6430;
      psVar6 = (short *)thunk_FUN_040b5044();
      if (*psVar6 == 0) goto LAB_065c6318;
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    uVar8 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)(unaff_x22 + 0xe0));
    }
    uVar8 = FUN_0768890c(uVar8,0);
    uVar4 = FUN_0768890c(*(long *)(unaff_x22 + 0x40) + 0x20,0);
    uVar5 = FUN_07691f40(uVar8,uVar4,0);
    if ((uVar5 & 1) != 0) {
      lVar3 = *(long *)(unaff_x19 + 0x20);
      in_stack_00000020 = *unaff_x20;
      uStack0000000000000034 = *(undefined8 *)((long)unaff_x20 + 0x14);
      uStack0000000000000028 = (undefined4)unaff_x20[1];
      uStack000000000000002c = (undefined4)*(undefined8 *)((long)unaff_x20 + 0xc);
      uStack0000000000000030 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x20 + 0xc) >> 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_040b1acc();
      }
      plVar1 = (long *)thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),
                                          &stack0x00000020);
      if (plVar1 == (long *)0x0) goto LAB_065c642c;
      if (*(long *)(*plVar1 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x40) + 0x40))
      goto LAB_065c6430;
      psVar6 = (short *)thunk_FUN_040b5044();
      if (*psVar6 == 0) goto LAB_065c6318;
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    uVar8 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)(unaff_x22 + 0xe0));
    }
    uVar8 = FUN_0768890c(uVar8,0);
    uVar4 = FUN_0768890c(*(long *)(unaff_x22 + 0x58) + 0x20,0);
    uVar5 = FUN_07691f40(uVar8,uVar4,0);
    if ((uVar5 & 1) != 0) {
      lVar3 = *(long *)(unaff_x19 + 0x20);
      in_stack_00000020 = *unaff_x20;
      uStack0000000000000034 = *(undefined8 *)((long)unaff_x20 + 0x14);
      uStack0000000000000028 = (undefined4)unaff_x20[1];
      uStack000000000000002c = (undefined4)*(undefined8 *)((long)unaff_x20 + 0xc);
      uStack0000000000000030 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x20 + 0xc) >> 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_040b1acc();
      }
      plVar1 = (long *)thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),
                                          &stack0x00000020);
      if (plVar1 == (long *)0x0) {
LAB_065c642c:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(long *)(*plVar1 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x58) + 0x40)) {
LAB_065c6430:
                    /* WARNING: Subroutine does not return */
        FUN_04077bb0();
      }
      plVar1 = (long *)thunk_FUN_040b5044();
      if (*plVar1 == 0) goto LAB_065c6318;
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    uVar8 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)(unaff_x22 + 0xe0));
    }
    uVar8 = FUN_0768890c(uVar8,0);
    uVar4 = FUN_0768890c(*(long *)(unaff_x22 + 0x60) + 0x20,0);
    uVar5 = FUN_07691f40(uVar8,uVar4,0);
    if ((uVar5 & 1) != 0) {
      lVar3 = *(long *)(unaff_x19 + 0x20);
      in_stack_00000020 = *unaff_x20;
      uStack0000000000000034 = *(undefined8 *)((long)unaff_x20 + 0x14);
      uStack0000000000000028 = (undefined4)unaff_x20[1];
      uStack000000000000002c = (undefined4)*(undefined8 *)((long)unaff_x20 + 0xc);
      uStack0000000000000030 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x20 + 0xc) >> 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_040b1acc();
      }
      uVar8 = thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),&stack0x00000020);
      puVar7 = (undefined8 *)FUN_03b090bc(uVar8,*(undefined8 *)(unaff_x22 + 0x60));
      uVar5 = FUN_076d50e4(0,*puVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_065c6318;
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    uVar8 = *unaff_x20;
    uStack0000000000000014 = *(undefined8 *)((long)unaff_x20 + 0x14);
    uStack0000000000000008 = (undefined4)unaff_x20[1];
    uStack000000000000000c = (undefined4)*(undefined8 *)((long)unaff_x20 + 0xc);
    uStack0000000000000010 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x20 + 0xc) >> 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    if ((*(ushort *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x18) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    uVar4 = thunk_FUN_040b4efc();
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc(lVar3);
    }
    uStack0000000000000028 = uStack0000000000000008;
    uStack0000000000000034 = uStack0000000000000014;
    uStack000000000000002c = uStack000000000000000c;
    uStack0000000000000030 = uStack0000000000000010;
    in_stack_00000020 = uVar8;
    FUN_06630e98(uVar4,&stack0x00000020,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x58));
  }
  return uVar4;
}


