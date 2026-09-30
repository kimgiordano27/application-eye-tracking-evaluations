/*
FUNCTION_NAME: OVRPlugin.OVRP_1_2_0$$ovrp_SetSystemVSyncCount
ENTRY_POINT: 05166338
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVRPlugin_OVRP_1_2_0__ovrp_SetSystemVSyncCount(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  byte bVar6;
  long *unaff_x19;
  undefined8 *unaff_x20;
  int iVar7;
  undefined8 *unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *in_stack_00000030;
  
LAB_0516634c:
  do {
    uVar1 = (*(code *)*param_1)(unaff_x19,param_1[1]);
    uVar2 = thunk_FUN_04e8bd3c(uVar1,*unaff_x24,0);
    if ((uVar2 & 1) == 0) {
LAB_051663d4:
      bVar6 = 1;
      iVar7 = 5;
LAB_051663e8:
      FUN_04a7a49c(&stack0x00000020,*unaff_x20);
      return bVar6 & iVar7 == 5;
    }
    lVar4 = *unaff_x19;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 5) * 0x10 + 0x138);
          goto LAB_051663b8;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4(unaff_x19,*unaff_x22,5);
LAB_051663b8:
    uVar1 = (*(code *)*puVar3)(unaff_x19,puVar3[1]);
    uVar2 = thunk_FUN_04e8bd3c(uVar1,*unaff_x23,0);
    if ((uVar2 & 1) == 0) goto LAB_051663d4;
    do {
      uVar2 = FUN_04a7a4a0(&stack0x00000020,*unaff_x21);
      unaff_x19 = in_stack_00000030;
      if ((uVar2 & 1) == 0) {
        bVar6 = 0;
        iVar7 = 6;
        goto LAB_051663e8;
      }
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar4 = *in_stack_00000030;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x22) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 8) * 0x10 + 0x138);
            goto LAB_051662e0;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_02d9a5d4(in_stack_00000030,*unaff_x22,8);
LAB_051662e0:
      uVar1 = (*(code *)*puVar3)(unaff_x19,puVar3[1]);
      uVar2 = thunk_FUN_04e8bd3c(uVar1,*unaff_x23,0);
    } while ((uVar2 & 1) != 0);
    lVar4 = *unaff_x19;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          param_1 = (undefined8 *)(lVar4 + (long)(*piVar5 + 8) * 0x10 + 0x138);
          goto LAB_0516634c;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    param_1 = (undefined8 *)FUN_02d9a5d4(unaff_x19,*unaff_x22,8);
  } while( true );
}


