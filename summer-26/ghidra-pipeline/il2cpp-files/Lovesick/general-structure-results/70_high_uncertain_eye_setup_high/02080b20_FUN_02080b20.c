/*
FUNCTION_NAME: FUN_02080b20
ENTRY_POINT: 02080b20
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_02080b20(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  
  if ((DAT_03780c9e & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcvtq_s32_f32__);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    DAT_03780c9e = 1;
  }
  plVar10 = *(long **)(param_1 + 0x20);
  if (plVar10 != (long *)0x0) {
    iVar3 = (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0));
    if (0 < iVar3) {
      uVar4 = (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0));
      plVar5 = (long *)FUN_00da4fb8(*(undefined8 *)
                                     Method_Unity_Burst_Intrinsics_Arm_Neon_vcvtq_s32_f32__,uVar4);
      puVar2 = Method_OVRPlugin_<>c_<_cctor>b__796_105__;
      puVar1 = System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
      uVar11 = 0;
      while( true ) {
        iVar3 = (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0));
        if ((long)iVar3 <= (long)uVar11) break;
        plVar6 = (long *)(**(code **)(*plVar10 + 0x2e8))
                                   (plVar10,uVar11 & 0xffffffff,*(undefined8 *)(*plVar10 + 0x2f0));
        lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (plVar6 != (long *)0x0) {
          if (*plVar6 != *(long *)puVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(plVar6);
          }
        }
        FUN_02021868(lVar7,plVar6,0x201,0);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar8 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar5 + 0x40));
        if (lVar8 == 0) {
          uVar9 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar9,0);
        }
        if (*(uint *)(plVar5 + 3) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar5[uVar11 + 4] = lVar7;
        uVar11 = uVar11 + 1;
      }
      goto LAB_02080cfc;
    }
  }
  plVar5 = (long *)0x0;
LAB_02080cfc:
  *(long **)(param_1 + 0x30) = plVar5;
  return;
}


