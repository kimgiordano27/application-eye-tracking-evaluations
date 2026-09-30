/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector3>$$Invoke
ENTRY_POINT: 065c6058
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 149
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


undefined8
Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector3>__Invoke
          (undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  short *psVar6;
  undefined8 *puVar7;
  int in_w10;
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
  
  if (in_w10 == 0) {
    thunk_FUN_040d65a8(param_1);
  }
  uVar1 = FUN_0768890c();
  uVar2 = FUN_0768890c(*(long *)(unaff_x22 + 0x38) + 0x20,0);
  uVar3 = FUN_07691f40(uVar1,uVar2,0);
  if ((uVar3 & 1) == 0) {
LAB_065c60f0:
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    uVar1 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)(unaff_x22 + 0xe0));
    }
    uVar1 = FUN_0768890c(uVar1,0);
    uVar2 = FUN_0768890c(*(long *)(unaff_x22 + 0x40) + 0x20,0);
    uVar3 = FUN_07691f40(uVar1,uVar2,0);
    if ((uVar3 & 1) != 0) {
      lVar4 = *(long *)(unaff_x19 + 0x20);
      in_stack_00000020 = *unaff_x20;
      uStack0000000000000034 = *(undefined8 *)((long)unaff_x20 + 0x14);
      uStack0000000000000028 = (undefined4)unaff_x20[1];
      uStack000000000000002c = (undefined4)*(undefined8 *)((long)unaff_x20 + 0xc);
      uStack0000000000000030 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x20 + 0xc) >> 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_040b1acc();
      }
      plVar5 = (long *)thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x28),
                                          &stack0x00000020);
      if (plVar5 == (long *)0x0) goto LAB_065c642c;
      if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x40) + 0x40))
      goto LAB_065c6430;
      psVar6 = (short *)thunk_FUN_040b5044();
      if (*psVar6 == 0) goto LAB_065c6318;
    }
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    uVar1 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)(unaff_x22 + 0xe0));
    }
    uVar1 = FUN_0768890c(uVar1,0);
    uVar2 = FUN_0768890c(*(long *)(unaff_x22 + 0x58) + 0x20,0);
    uVar3 = FUN_07691f40(uVar1,uVar2,0);
    if ((uVar3 & 1) != 0) {
      lVar4 = *(long *)(unaff_x19 + 0x20);
      in_stack_00000020 = *unaff_x20;
      uStack0000000000000034 = *(undefined8 *)((long)unaff_x20 + 0x14);
      uStack0000000000000028 = (undefined4)unaff_x20[1];
      uStack000000000000002c = (undefined4)*(undefined8 *)((long)unaff_x20 + 0xc);
      uStack0000000000000030 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x20 + 0xc) >> 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_040b1acc();
      }
      plVar5 = (long *)thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x28),
                                          &stack0x00000020);
      if (plVar5 == (long *)0x0) {
LAB_065c642c:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x58) + 0x40)) {
LAB_065c6430:
                    /* WARNING: Subroutine does not return */
        FUN_04077bb0();
      }
      plVar5 = (long *)thunk_FUN_040b5044();
      if (*plVar5 == 0) goto LAB_065c6318;
    }
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    uVar1 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)(unaff_x22 + 0xe0));
    }
    uVar1 = FUN_0768890c(uVar1,0);
    uVar2 = FUN_0768890c(*(long *)(unaff_x22 + 0x60) + 0x20,0);
    uVar3 = FUN_07691f40(uVar1,uVar2,0);
    if ((uVar3 & 1) != 0) {
      lVar4 = *(long *)(unaff_x19 + 0x20);
      in_stack_00000020 = *unaff_x20;
      uStack0000000000000034 = *(undefined8 *)((long)unaff_x20 + 0x14);
      uStack0000000000000028 = (undefined4)unaff_x20[1];
      uStack000000000000002c = (undefined4)*(undefined8 *)((long)unaff_x20 + 0xc);
      uStack0000000000000030 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x20 + 0xc) >> 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_040b1acc();
      }
      uVar1 = thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x28),&stack0x00000020);
      puVar7 = (undefined8 *)FUN_03b090bc(uVar1,*(undefined8 *)(unaff_x22 + 0x60));
      uVar3 = FUN_076d50e4(0,*puVar7,0);
      if ((uVar3 & 1) != 0) goto LAB_065c6318;
    }
    lVar4 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *unaff_x20;
    uStack0000000000000014 = *(undefined8 *)((long)unaff_x20 + 0x14);
    uStack0000000000000008 = (undefined4)unaff_x20[1];
    uStack000000000000000c = (undefined4)*(undefined8 *)((long)unaff_x20 + 0xc);
    uStack0000000000000010 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x20 + 0xc) >> 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    if ((*(ushort *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x18) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    uVar2 = thunk_FUN_040b4efc();
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc(lVar4);
    }
    uStack0000000000000028 = uStack0000000000000008;
    uStack0000000000000034 = uStack0000000000000014;
    uStack000000000000002c = uStack000000000000000c;
    uStack0000000000000030 = uStack0000000000000010;
    in_stack_00000020 = uVar1;
    FUN_06630e98(uVar2,&stack0x00000020,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x58));
  }
  else {
    lVar4 = *(long *)(unaff_x19 + 0x20);
    in_stack_00000020 = *unaff_x20;
    uStack0000000000000034 = *(undefined8 *)((long)unaff_x20 + 0x14);
    uStack0000000000000028 = (undefined4)unaff_x20[1];
    uStack000000000000002c = (undefined4)*(undefined8 *)((long)unaff_x20 + 0xc);
    uStack0000000000000030 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x20 + 0xc) >> 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    plVar5 = (long *)thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x28),
                                        &stack0x00000020);
    if (plVar5 == (long *)0x0) goto LAB_065c642c;
    if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x38) + 0x40))
    goto LAB_065c6430;
    psVar6 = (short *)thunk_FUN_040b5044();
    if (*psVar6 != 0) goto LAB_065c60f0;
LAB_065c6318:
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    uVar2 = **(undefined8 **)(lVar4 + 0xb8);
  }
  return uVar2;
}


