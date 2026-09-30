/*
FUNCTION_NAME: OVRPlugin$$ResetAppPerfStats
ENTRY_POINT: 05bc0f54
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin__ResetAppPerfStats(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 *unaff_x19;
  long *plVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  
  if ((*(byte *)(unaff_x22 + 0xab9) & 1) == 0) {
    FUN_03188a78(PTR_DAT_07113d28);
    FUN_03188a78(PTR_DAT_07113d48);
    *(undefined1 *)(unaff_x22 + 0xab9) = 1;
  }
  plVar6 = *(long **)(param_1 + 0x120);
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07113d28) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_05bc0fe0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_031c0d08(plVar6,*(long *)PTR_DAT_07113d28,0);
LAB_05bc0fe0:
    plVar6 = (long *)(*(code *)*puVar2)(plVar6,puVar2[1]);
    puVar1 = PTR_DAT_07113d48;
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar7 = *param_2;
      uStack0000000000000034 = *(undefined8 *)((long)param_2 + 0x14);
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      uStack0000000000000028 = (undefined4)param_2[1];
      uStack000000000000002c = (undefined4)*(undefined8 *)((long)param_2 + 0xc);
      uStack0000000000000030 = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0xc) >> 0x20);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07113d48) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
            goto LAB_05bc105c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_031c0d08(plVar6,*(long *)PTR_DAT_07113d48,4);
LAB_05bc105c:
      in_stack_00000048 = uStack0000000000000028;
      uStack0000000000000054 = uStack0000000000000034;
      uStack000000000000004c = uStack000000000000002c;
      in_stack_00000050 = uStack0000000000000030;
      in_stack_00000040 = uVar7;
      (*(code *)*puVar2)(plVar6,&stack0x00000040,puVar2[1]);
      lVar3 = *plVar6;
      uVar7 = *unaff_x19;
      uStack0000000000000014 = *(undefined8 *)((long)unaff_x19 + 0x14);
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      uStack0000000000000008 = (undefined4)unaff_x19[1];
      uStack000000000000000c = (undefined4)*(undefined8 *)((long)unaff_x19 + 0xc);
      uStack0000000000000010 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x19 + 0xc) >> 0x20);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
            goto LAB_05bc10e0;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_031c0d08(plVar6,*(long *)puVar1,2);
LAB_05bc10e0:
      in_stack_00000048 = uStack0000000000000008;
      uStack0000000000000054 = uStack0000000000000014;
      uStack000000000000004c = uStack000000000000000c;
      in_stack_00000050 = uStack0000000000000010;
      in_stack_00000040 = uVar7;
      (*(code *)*puVar2)(plVar6,&stack0x00000040,puVar2[1]);
      return plVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


