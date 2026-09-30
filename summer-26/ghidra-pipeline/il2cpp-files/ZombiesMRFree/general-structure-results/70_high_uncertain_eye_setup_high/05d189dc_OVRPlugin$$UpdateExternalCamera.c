/*
FUNCTION_NAME: OVRPlugin$$UpdateExternalCamera
ENTRY_POINT: 05d189dc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__UpdateExternalCamera
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined4 param_4,
               long param_5)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x23;
  long *unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  ulong unaff_x28;
  long unaff_x29;
  undefined4 uVar7;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_00000080;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000094;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  
  while (param_5 != 0) {
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    if (*(uint *)(param_5 + 0x18) <= unaff_x28) {
LAB_05d18c08:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    uVar7 = FUN_05d45198(param_5 + unaff_x29 + 0x20,0);
    if (unaff_x23 == 0) break;
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_x28) goto LAB_05d18c08;
    lVar1 = unaff_x23 + unaff_x29;
    unaff_x28 = unaff_x28 + 1;
    unaff_x29 = unaff_x29 + 0x10;
    *(undefined4 *)(lVar1 + 0x20) = uVar7;
    *(int *)(lVar1 + 0x24) = (int)param_2;
    *(int *)(lVar1 + 0x28) = (int)param_3;
    *(undefined4 *)(lVar1 + 0x2c) = param_4;
    lVar1 = FUN_05d18ce8();
    if (lVar1 == 0) break;
    if ((long)*(int *)(lVar1 + 0x18) <= (long)unaff_x28) {
      lVar1 = FUN_05d179c0();
      if (lVar1 == 0) {
        uStack0000000000000094 = *(undefined8 *)(unaff_x26 + 0x14);
        uStack0000000000000088 = (undefined4)in_stack_000000a8;
        in_stack_00000080 = in_stack_000000a0;
        uStack000000000000008c = (undefined4)*(undefined8 *)(unaff_x26 + 0xc);
        uStack0000000000000090 = (undefined4)((ulong)*(undefined8 *)(unaff_x26 + 0xc) >> 0x20);
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uStack0000000000000048 = uStack0000000000000088;
        in_stack_00000040 = in_stack_00000080;
        uStack0000000000000054 = uStack0000000000000094;
        uStack000000000000004c = uStack000000000000008c;
        uStack0000000000000050 = uStack0000000000000090;
        FUN_05d450ac(&stack0x00000060,&stack0x00000040,0);
        in_stack_000000a8 = CONCAT44(uStack000000000000006c,uStack0000000000000068);
        uVar4 = CONCAT44(uStack0000000000000070,uStack000000000000006c);
        in_stack_000000a0 = in_stack_00000060;
        goto LAB_05d18b20;
      }
      plVar2 = (long *)FUN_05d179c0();
      if (plVar2 != (long *)0x0) {
        lVar1 = *plVar2;
        uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
        if (uVar5 == 0) goto LAB_05d18a94;
        piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        goto LAB_05d18a7c;
      }
      break;
    }
    unaff_x23 = FUN_05d18ce8();
    param_5 = FUN_05d18ce8();
  }
LAB_05d18c04:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_05d18a7c:
    if (*(long *)(piVar6 + -2) == *unaff_x25) {
      puVar3 = (undefined8 *)(lVar1 + (long)(*piVar6 + 3) * 0x10 + 0x138);
      goto LAB_05d18b00;
    }
  }
LAB_05d18a94:
  puVar3 = (undefined8 *)FUN_02feb5b8(plVar2,*unaff_x25,3);
LAB_05d18b00:
  (*(code *)*puVar3)(&stack0x00000080,plVar2,&stack0x000000a0);
  in_stack_000000a8 = CONCAT44(uStack000000000000008c,uStack0000000000000088);
  uVar4 = CONCAT44(uStack0000000000000090,uStack000000000000008c);
  in_stack_000000a0 = in_stack_00000080;
  uStack0000000000000074 = uStack0000000000000094;
LAB_05d18b20:
  *(undefined8 *)(unaff_x26 + 0x14) = uStack0000000000000074;
  *(undefined8 *)(unaff_x26 + 0xc) = uVar4;
  FUN_05d18d90();
  lVar1 = FUN_05d179c0();
  if (lVar1 != 0) {
    plVar2 = (long *)FUN_05d179c0();
    if ((unaff_x19 == 0) || (uVar4 = FUN_068f5db8(), plVar2 == (long *)0x0)) goto LAB_05d18c04;
    lVar1 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar1 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto LAB_05d18bc8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_02feb5b8(plVar2,*unaff_x25,4);
LAB_05d18bc8:
    (*(code *)*puVar3)(plVar2,uVar4,puVar3[1]);
    FUN_05d1813c();
  }
  return;
}


