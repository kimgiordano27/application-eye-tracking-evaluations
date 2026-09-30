/*
FUNCTION_NAME: FUN_00fe758c
ENTRY_POINT: 00fe758c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_00fe758c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar1 = StringLiteral_302;
  if ((DAT_03775c46 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsl_laneq_u16__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Stack<HashSet<ParameterExpression>>_Push__)
    ;
    thunk_FUN_00d48444(Method_OVRTask<List<OVRPlugin_Result>>_GetAwaiter__);
    thunk_FUN_00d48444(StringLiteral_11386);
    thunk_FUN_00d48444(int_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_13673);
    thunk_FUN_00d48444(StringLiteral_12305);
    thunk_FUN_00d48444(
                      Method_Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager_<>c__DisplayClass24_0_<ShareAnchorsWithUser>b__0__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_OnPrimary2DAxisClickPerformed__
                      );
    thunk_FUN_00d48444(UnityEngine_XR_Interaction_Toolkit_XRInteractorEvent_TypeInfo);
    DAT_03775c46 = 1;
  }
  puVar2 = UnityEngine_XR_Interaction_Toolkit_XRInteractorEvent_TypeInfo;
  uStack_78 = 0;
  local_70 = 0;
  local_88 = 0;
  local_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_02660dac(*(undefined8 *)puVar2,0);
  FUN_00e77060(param_1,0);
  puVar8 = StringLiteral_13673;
  puVar7 = StringLiteral_12305;
  puVar6 = StringLiteral_11386;
  puVar5 = 
  Method_Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager_<>c__DisplayClass24_0_<ShareAnchorsWithUser>b__0__
  ;
  puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsl_laneq_u16__;
  puVar3 = Method_System_Collections_Generic_Stack<HashSet<ParameterExpression>>_Push__;
  puVar2 = Method_OVRTask<List<OVRPlugin_Result>>_GetAwaiter__;
  puVar1 = int_TypeInfo;
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_01323390(*(long *)(param_1 + 0x78),&local_b0,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_OnPrimary2DAxisClickPerformed__
                );
    uStack_78 = uStack_a8;
    local_80 = local_b0;
    local_70 = local_a0;
    while (uVar9 = FUN_012b894c(&local_80,*(undefined8 *)puVar6), (uVar9 & 1) != 0) {
      plVar10 = (long *)FUN_00ad60bc(&local_80,*(undefined8 *)puVar1);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar12 = *plVar10;
      uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar9 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar7) {
            puVar11 = (undefined8 *)(lVar12 + (long)(*piVar13 + 4) * 0x10 + 0x138);
            goto LAB_00fe7768;
          }
          uVar9 = uVar9 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar9 != 0);
      }
      puVar11 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar7,4);
LAB_00fe7768:
      (*(code *)*puVar11)(plVar10,puVar11[1]);
    }
    FUN_012b8948(&local_80,*(undefined8 *)puVar4);
    if (*(long *)(param_1 + 0x98) != 0) {
      FUN_01323390(*(long *)(param_1 + 0x98),&local_98,*(undefined8 *)puVar5);
      while( true ) {
        uVar9 = FUN_012b894c(&local_98,*(undefined8 *)puVar2);
        if ((uVar9 & 1) == 0) {
          FUN_012b8948(&local_98,*(undefined8 *)puVar3);
          uVar9 = FUN_015ff8a0(*(undefined8 *)(param_1 + 0x90),0);
          if ((uVar9 & 1) == 0) {
            FUN_00fdf628(*(undefined8 *)(param_1 + 0x90));
          }
          return;
        }
        lVar12 = FUN_00ac2e08(&local_98,*(undefined8 *)puVar8);
        if (lVar12 == 0) break;
        FUN_00fe9864(lVar12,0,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


