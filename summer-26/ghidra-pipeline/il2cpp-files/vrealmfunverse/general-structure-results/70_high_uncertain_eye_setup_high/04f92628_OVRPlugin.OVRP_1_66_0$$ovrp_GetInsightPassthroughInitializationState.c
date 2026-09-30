/*
FUNCTION_NAME: OVRPlugin.OVRP_1_66_0$$ovrp_GetInsightPassthroughInitializationState
ENTRY_POINT: 04f92628
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_66_0__ovrp_GetInsightPassthroughInitializationState
               (undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
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
  
  puVar2 = System_Func<Stream>_TypeInfo;
  if ((DAT_066c9dde & 1) == 0) {
    FUN_02b3c81c(System_Func<Stream>_TypeInfo);
    FUN_02b3c81c(UnityEngine_InputSystem_UI_PointerModel_var);
    FUN_02b3c81c(PTR_DAT_063185a8);
    DAT_066c9dde = 1;
  }
  lVar3 = FUN_04332268(param_1,*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    cVar1 = *(char *)(lVar3 + 0x2c);
    if (cVar1 == '\0') {
      if (*(int *)(*(long *)PTR_DAT_063185a8 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05c9a2f0(&stack0x00000040,0);
      uVar9 = CONCAT44(uStack000000000000004c,uStack0000000000000048);
      uVar10 = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      in_stack_00000000._4_8_ = in_stack_00000040;
      in_stack_00000018 = uStack0000000000000054;
LAB_04f92778:
      param_2[1] = uVar9;
      *param_2 = in_stack_00000000._4_8_;
      *(undefined8 *)((long)param_2 + 0x14) = in_stack_00000018;
      *(undefined8 *)((long)param_2 + 0xc) = uVar10;
      return cVar1 != '\0';
    }
    lVar4 = FUN_04332268(param_1,*(undefined8 *)puVar2);
    if ((lVar4 != 0) && (*(long *)(lVar4 + 0x38) != 0)) {
      in_stack_00000020 = *(undefined8 *)(lVar3 + 0x10);
      plVar8 = *(long **)(*(long *)(lVar4 + 0x38) + 0x10);
      uStack0000000000000034 = *(undefined8 *)(lVar3 + 0x24);
      uStack0000000000000028 = (undefined4)*(undefined8 *)(lVar3 + 0x18);
      uStack000000000000002c = (undefined4)*(undefined8 *)(lVar3 + 0x1c);
      uStack0000000000000030 = (undefined4)((ulong)*(undefined8 *)(lVar3 + 0x1c) >> 0x20);
      if (plVar8 != (long *)0x0) {
        lVar3 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)UnityEngine_InputSystem_UI_PointerModel_var) {
              puVar5 = (undefined8 *)(lVar3 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_04f92748;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_02b7654c(plVar8,*(long *)UnityEngine_InputSystem_UI_PointerModel_var,1);
LAB_04f92748:
        uStack0000000000000048 = uStack0000000000000028;
        in_stack_00000040 = in_stack_00000020;
        uStack0000000000000054 = uStack0000000000000034;
        uStack000000000000004c = uStack000000000000002c;
        uStack0000000000000050 = uStack0000000000000030;
        (*(code *)*puVar5)(&stack0x00000000 + 4,plVar8,&stack0x00000040,puVar5[1]);
        uVar9 = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
        uVar10 = CONCAT44(uStack0000000000000014,uStack0000000000000010);
        goto LAB_04f92778;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


