/*
FUNCTION_NAME: FUN_00fe1eac
ENTRY_POINT: 00fe1eac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x00fe2178) */

void FUN_00fe1eac(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar1 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__;
  if ((DAT_03775c21 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(StringLiteral_435);
    thunk_FUN_00d48444(UnityEngine_UI_Button_<OnFinishSubmit>d__9_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_IEnumerator<XAttribute>_TypeInfo);
    thunk_FUN_00d48444(Sirenix_Utilities_TypeExtensions_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraph_<>c_<BeginProfilingSampler>b__61_0__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<InstanceHandle,_Inspector>_GetEnumerator__
                      );
    thunk_FUN_00d48444(StringLiteral_12519);
    thunk_FUN_00d48444(StringLiteral_5707);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Playables_ScriptPlayable<TimeNotificationBehaviour>_op_Implicit__
                      );
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_41_0_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033eb350);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__);
    thunk_FUN_00d48444(StringLiteral_7093);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqneg_s32__);
    DAT_03775c21 = 1;
  }
  uStack_78 = 0;
  local_70 = 0;
  local_80 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_a0 = 0;
  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar2 = StringLiteral_7093;
  if (lVar8 != 0) {
    FUN_016f27fc(lVar8,param_1,*(undefined8 *)OVRPlugin_OVRP_1_41_0_TypeInfo,0);
    FUN_00fe0700(*(undefined8 *)puVar2,lVar8);
    lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqneg_s32__;
    if (lVar8 != 0) {
      FUN_016f27fc(lVar8,param_1,
                   *(undefined8 *)
                    Method_UnityEngine_Playables_ScriptPlayable<TimeNotificationBehaviour>_op_Implicit__
                   ,0);
      FUN_00fe0700(*(undefined8 *)puVar1,lVar8);
      puVar7 = StringLiteral_5707;
      puVar6 = 
      Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraph_<>c_<BeginProfilingSampler>b__61_0__
      ;
      puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__;
      puVar4 = 
      Method_System_Collections_Generic_Dictionary<InstanceHandle,_Inspector>_GetEnumerator__;
      puVar3 = Sirenix_Utilities_TypeExtensions_TypeInfo;
      puVar2 = System_Collections_Generic_IEnumerator<XAttribute>_TypeInfo;
      puVar1 = PTR_DAT_033eb350;
      if (*(long *)(param_1 + 0x60) != 0) {
        FUN_01323390(*(long *)(param_1 + 0x60),&local_b8,*(undefined8 *)StringLiteral_12519);
        uStack_78 = uStack_b0;
        local_80 = local_b8;
        local_70 = local_a8;
        do {
          uVar9 = FUN_012b894c(&local_80,*(undefined8 *)puVar3);
          if ((uVar9 & 1) == 0) {
            FUN_012b8948(&local_80,*(undefined8 *)StringLiteral_435);
            return;
          }
          lVar8 = FUN_00ad5fb4(&local_80,*(undefined8 *)puVar4);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(long *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01323390(*(long *)(lVar8 + 0x18),&local_b8,*(undefined8 *)puVar7);
          uStack_98 = uStack_b0;
          local_a0 = local_b8;
          local_90 = local_a8;
          while (uVar9 = FUN_012b894c(&local_a0,*(undefined8 *)puVar2), (uVar9 & 1) != 0) {
            lVar10 = FUN_00ac4a70(&local_a0,*(undefined8 *)puVar6);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            uVar13 = *(undefined8 *)(lVar10 + 0x50);
            lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_026c8404(lVar11,lVar8,*(undefined8 *)puVar1,0);
            plVar12 = (long *)FUN_017b76bc(uVar13,lVar11,0);
            if (plVar12 == (long *)0x0) {
              *(undefined8 *)(lVar10 + 0x50) = 0;
            }
            else {
              lVar11 = *(long *)puVar5;
              if (*plVar12 != lVar11) {
                    /* WARNING: Subroutine does not return */
                FUN_00da544c();
              }
              *(long **)(lVar10 + 0x50) = plVar12;
              if (*plVar12 != lVar11) {
                    /* WARNING: Subroutine does not return */
                FUN_00da544c();
              }
            }
          }
          FUN_012b8948(&local_a0,*(undefined8 *)UnityEngine_UI_Button_<OnFinishSubmit>d__9_TypeInfo)
          ;
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


