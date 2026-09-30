/*
FUNCTION_NAME: OVRPlugin.OVRP_1_3_0$$ovrp_GetEyeOcclusionMeshEnabled
ENTRY_POINT: 01f96ca0
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_3_0__ovrp_GetEyeOcclusionMeshEnabled
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar6;
  uint unaff_w26;
  uint unaff_w27;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  
  do {
    uVar4 = FUN_01ee5550(param_1,param_2,param_3);
    if ((uVar4 & 1) != 0) {
      uVar3 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
      thunk_FUN_01279b34(PTR_DAT_027bc458);
      uVar6 = thunk_FUN_0124bba8();
      FUN_01ee31d4(uVar6,uVar3,0);
      uVar3 = thunk_FUN_01279b34(PTR_DAT_027c1c70);
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar6,uVar3);
    }
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w27) {
LAB_01f96cf8:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca8();
    }
    param_1 = *unaff_x29;
LAB_01f96cb8:
    do {
      unaff_w27 = unaff_w27 + 1;
      if ((int)*(uint *)(unaff_x21 + 0x18) <= (int)unaff_w27) {
        return param_1;
      }
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w27) goto LAB_01f96cf8;
      unaff_x29 = (long *)(unaff_x21 + (long)(int)unaff_w27 * 8 + 0x20);
      plVar1 = (long *)*unaff_x29;
      if (plVar1 == (long *)0x0) {
LAB_01f96cf4:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      lVar2 = (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
      if (0 < (int)unaff_w26) {
        if (lVar2 == 0) goto LAB_01f96cf4;
        uVar5 = 0;
        do {
          if (*(uint *)(lVar2 + 0x18) <= uVar5) goto LAB_01f96cf8;
          plVar1 = *(long **)(lVar2 + (long)(int)uVar5 * 8 + 0x20);
          if (plVar1 == (long *)0x0) goto LAB_01f96cf4;
          uVar3 = (**(code **)(*plVar1 + 0x1d8))(plVar1,*(undefined8 *)(*plVar1 + 0x1e0));
          if (unaff_x19 == 0) goto LAB_01f96cf4;
          if (*(uint *)(unaff_x19 + 0x18) <= uVar5) goto LAB_01f96cf8;
          uVar6 = *(undefined8 *)(unaff_x19 + (long)(int)uVar5 * 8 + 0x20);
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar4 = FUN_01f801dc(uVar3,uVar6,0);
          if ((uVar4 & 1) != 0) goto LAB_01f96cb8;
          uVar5 = uVar5 + 1;
        } while (unaff_w26 != uVar5);
      }
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar4 = FUN_01f801dc(in_stack_00000008,0,0);
      if ((uVar4 & 1) == 0) break;
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w27) goto LAB_01f96cf8;
      plVar1 = (long *)*unaff_x29;
      if (plVar1 == (long *)0x0) goto LAB_01f96cf4;
      uVar3 = (**(code **)(*plVar1 + 0x228))(plVar1,*(undefined8 *)(*plVar1 + 0x230));
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01220628(*unaff_x28);
      }
      uVar4 = FUN_01f801dc(in_stack_00000008,uVar3,0);
    } while ((uVar4 & 1) != 0);
    param_2 = 0;
    param_3 = 0;
  } while( true );
}


