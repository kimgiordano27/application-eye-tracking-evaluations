/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector3>$$.ctor
ENTRY_POINT: 065c5fb8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector3>___ctor
          (long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  short *psVar6;
  undefined8 *puVar7;
  long unaff_x19;
  undefined8 *unaff_x20;
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
  
  uVar1 = FUN_0768890c(param_1 + 0x20,0);
  uVar2 = FUN_07691f40(param_2,uVar1,0);
  if ((uVar2 & 1) == 0) {
LAB_065c6034:
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    uVar1 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)(unaff_x22 + 0xe0));
    }
    uVar1 = FUN_0768890c(uVar1,0);
    uVar5 = FUN_0768890c(*(long *)(unaff_x22 + 0x38) + 0x20,0);
    uVar2 = FUN_07691f40(uVar1,uVar5,0);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(unaff_x19 + 0x20);
      in_stack_00000020 = *unaff_x20;
      uStack0000000000000034 = *(undefined8 *)((long)unaff_x20 + 0x14);
      uStack0000000000000028 = (undefined4)unaff_x20[1];
      uStack000000000000002c = (undefined4)*(undefined8 *)((long)unaff_x20 + 0xc);
      uStack0000000000000030 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x20 + 0xc) >> 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_040b1acc();
      }
      plVar4 = (long *)thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),
                                          &stack0x00000020);
      if (plVar4 == (long *)0x0) goto LAB_065c642c;
      if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x38) + 0x40))
      goto LAB_065c6430;
      psVar6 = (short *)thunk_FUN_040b5044();
      if (*psVar6 == 0) goto LAB_065c6318;
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    uVar1 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)(unaff_x22 + 0xe0));
    }
    uVar1 = FUN_0768890c(uVar1,0);
    uVar5 = FUN_0768890c(*(long *)(unaff_x22 + 0x40) + 0x20,0);
    uVar2 = FUN_07691f40(uVar1,uVar5,0);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(unaff_x19 + 0x20);
      in_stack_00000020 = *unaff_x20;
      uStack0000000000000034 = *(undefined8 *)((long)unaff_x20 + 0x14);
      uStack0000000000000028 = (undefined4)unaff_x20[1];
      uStack000000000000002c = (undefined4)*(undefined8 *)((long)unaff_x20 + 0xc);
      uStack0000000000000030 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x20 + 0xc) >> 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_040b1acc();
      }
      plVar4 = (long *)thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),
                                          &stack0x00000020);
      if (plVar4 == (long *)0x0) goto LAB_065c642c;
      if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x40) + 0x40))
      goto LAB_065c6430;
      psVar6 = (short *)thunk_FUN_040b5044();
      if (*psVar6 == 0) goto LAB_065c6318;
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    uVar1 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)(unaff_x22 + 0xe0));
    }
    uVar1 = FUN_0768890c(uVar1,0);
    uVar5 = FUN_0768890c(*(long *)(unaff_x22 + 0x58) + 0x20,0);
    uVar2 = FUN_07691f40(uVar1,uVar5,0);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(unaff_x19 + 0x20);
      in_stack_00000020 = *unaff_x20;
      uStack0000000000000034 = *(undefined8 *)((long)unaff_x20 + 0x14);
      uStack0000000000000028 = (undefined4)unaff_x20[1];
      uStack000000000000002c = (undefined4)*(undefined8 *)((long)unaff_x20 + 0xc);
      uStack0000000000000030 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x20 + 0xc) >> 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_040b1acc();
      }
      plVar4 = (long *)thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),
                                          &stack0x00000020);
      if (plVar4 == (long *)0x0) {
LAB_065c642c:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x58) + 0x40)) {
LAB_065c6430:
                    /* WARNING: Subroutine does not return */
        FUN_04077bb0();
      }
      plVar4 = (long *)thunk_FUN_040b5044();
      if (*plVar4 == 0) goto LAB_065c6318;
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    uVar1 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)(unaff_x22 + 0xe0));
    }
    uVar1 = FUN_0768890c(uVar1,0);
    uVar5 = FUN_0768890c(*(long *)(unaff_x22 + 0x60) + 0x20,0);
    uVar2 = FUN_07691f40(uVar1,uVar5,0);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(unaff_x19 + 0x20);
      in_stack_00000020 = *unaff_x20;
      uStack0000000000000034 = *(undefined8 *)((long)unaff_x20 + 0x14);
      uStack0000000000000028 = (undefined4)unaff_x20[1];
      uStack000000000000002c = (undefined4)*(undefined8 *)((long)unaff_x20 + 0xc);
      uStack0000000000000030 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x20 + 0xc) >> 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_040b1acc();
      }
      uVar1 = thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),&stack0x00000020);
      puVar7 = (undefined8 *)FUN_03b090bc(uVar1,*(undefined8 *)(unaff_x22 + 0x60));
      uVar2 = FUN_076d50e4(0,*puVar7,0);
      if ((uVar2 & 1) != 0) goto LAB_065c6318;
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *unaff_x20;
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
    uVar5 = thunk_FUN_040b4efc();
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc(lVar3);
    }
    uStack0000000000000028 = uStack0000000000000008;
    uStack0000000000000034 = uStack0000000000000014;
    uStack000000000000002c = uStack000000000000000c;
    uStack0000000000000030 = uStack0000000000000010;
    in_stack_00000020 = uVar1;
    FUN_06630e98(uVar5,&stack0x00000020,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x58));
  }
  else {
    lVar3 = *(long *)(unaff_x19 + 0x20);
    in_stack_00000020 = *unaff_x20;
    uStack0000000000000034 = *(undefined8 *)((long)unaff_x20 + 0x14);
    uStack0000000000000028 = (undefined4)unaff_x20[1];
    uStack000000000000002c = (undefined4)*(undefined8 *)((long)unaff_x20 + 0xc);
    uStack0000000000000030 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x20 + 0xc) >> 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    plVar4 = (long *)thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),
                                        &stack0x00000020);
    if (plVar4 == (long *)0x0) goto LAB_065c642c;
    if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x70) + 0x40))
    goto LAB_065c6430;
    plVar4 = (long *)thunk_FUN_040b5044();
    if (*plVar4 != 0) goto LAB_065c6034;
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
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
  }
  return uVar5;
}


