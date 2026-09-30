/*
FUNCTION_NAME: OVRPlugin$$GetMixedRealityCameraInfo
ENTRY_POINT: 05d18ab0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetMixedRealityCameraInfo(undefined8 param_1,undefined1 param_2 [16],long param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x25;
  long unaff_x26;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  undefined8 uStack0000000000000080;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000094;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  
  uStack0000000000000094 = param_2._8_8_;
  uStack000000000000008c = param_2._0_4_;
  uStack0000000000000090 = param_2._4_4_;
  uStack0000000000000080 = param_1;
  if (*(int *)(param_3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  in_stack_00000040 = uStack0000000000000080;
  uStack0000000000000054 = uStack0000000000000094;
  uStack000000000000004c = uStack000000000000008c;
  in_stack_00000050 = uStack0000000000000090;
  FUN_05d450ac(&stack0x00000060,&stack0x00000040,0);
  in_stack_000000a8 = CONCAT44(uStack000000000000006c,uStack0000000000000068);
  in_stack_000000a0 = in_stack_00000060;
  *(undefined8 *)(unaff_x26 + 0x14) = uStack0000000000000074;
  *(ulong *)(unaff_x26 + 0xc) = CONCAT44(uStack0000000000000070,uStack000000000000006c);
  FUN_05d18d90();
  lVar1 = FUN_05d179c0();
  if (lVar1 != 0) {
    plVar2 = (long *)FUN_05d179c0();
    if ((unaff_x19 == 0) || (uVar3 = FUN_068f5db8(), plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    lVar1 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar4 = (undefined8 *)(lVar1 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto LAB_05d18bc8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_02feb5b8(plVar2,*unaff_x25,4);
LAB_05d18bc8:
    (*(code *)*puVar4)(plVar2,uVar3,puVar4[1]);
    FUN_05d1813c();
  }
  return;
}


