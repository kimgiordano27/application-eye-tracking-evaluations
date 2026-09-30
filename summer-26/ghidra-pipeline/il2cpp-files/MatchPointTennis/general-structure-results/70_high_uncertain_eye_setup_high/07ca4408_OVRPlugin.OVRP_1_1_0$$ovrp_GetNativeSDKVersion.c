/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetNativeSDKVersion
ENTRY_POINT: 07ca4408
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_1_0__ovrp_GetNativeSDKVersion(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined8 uStack0000000000000074;
  
  puVar2 = PTR_DAT_09f50f08;
  if ((DAT_0a526a1d & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f50f08);
    FUN_04447ba8(PTR_DAT_09f4d938);
    FUN_04447ba8(PTR_DAT_09f25358);
    DAT_0a526a1d = 1;
  }
  lVar5 = FUN_071b94f8(param_1,*(undefined8 *)puVar2);
  if (lVar5 != 0) {
    cVar1 = *(char *)(lVar5 + 0x2c);
    if (cVar1 == '\0') {
      if (*(int *)(*(long *)PTR_DAT_09f25358 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_095381c0(&stack0x00000040,0);
      uStack0000000000000034 = uStack0000000000000054;
      in_stack_00000020 = in_stack_00000040;
      uStack0000000000000030 = uStack0000000000000050;
      uStack0000000000000028 = uStack0000000000000048;
      uStack000000000000002c = uStack000000000000004c;
LAB_07ca456c:
      param_2[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      *param_2 = in_stack_00000020;
      *(undefined8 *)((long)param_2 + 0x14) = uStack0000000000000034;
      *(ulong *)((long)param_2 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      return cVar1 != '\0';
    }
    lVar6 = FUN_071b94f8(param_1,*(undefined8 *)puVar2);
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x38) != 0)) {
      plVar10 = *(long **)(*(long *)(lVar6 + 0x38) + 0x10);
      uStack0000000000000014 = *(undefined8 *)(lVar5 + 0x24);
      uVar11 = *(undefined8 *)(lVar5 + 0x10);
      uStack0000000000000050 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x1c) >> 0x20);
      uVar4 = uStack0000000000000050;
      uStack0000000000000048 = (undefined4)*(undefined8 *)(lVar5 + 0x18);
      uVar3 = uStack0000000000000048;
      uStack000000000000004c = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x18) >> 0x20);
      in_stack_00000040 = uVar11;
      uStack0000000000000054 = uStack0000000000000014;
      if (plVar10 != (long *)0x0) {
        uStack000000000000000c = uStack000000000000004c;
        lVar5 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09f4d938) {
              puVar7 = (undefined8 *)(lVar5 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_07ca453c;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)FUN_044822ac(plVar10,*(long *)PTR_DAT_09f4d938,1);
LAB_07ca453c:
        in_stack_00000068 = uVar3;
        uStack0000000000000074 = uStack0000000000000014;
        uStack000000000000006c = uStack000000000000000c;
        in_stack_00000070 = uVar4;
        in_stack_00000060 = uVar11;
        (*(code *)*puVar7)(&stack0x00000020,plVar10,&stack0x00000060,puVar7[1]);
        goto LAB_07ca456c;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


