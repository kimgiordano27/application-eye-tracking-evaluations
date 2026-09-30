/*
FUNCTION_NAME: FUN_01cbede8
ENTRY_POINT: 01cbede8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_01cbede8(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long local_58;
  
  if ((DAT_0377ef1f & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_70__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__);
    DAT_0377ef1f = 1;
  }
  puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__;
  if ((param_2 == 0) || (plVar11 = *(long **)(param_2 + 0x38), plVar11 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar1 = *(int *)(param_2 + 0x48) - 2;
  if (uVar1 < *(uint *)(plVar11 + 3)) {
    plVar9 = (long *)plVar11[(long)(int)uVar1 + 4];
    uVar2 = *(int *)(param_2 + 0x48) - 1;
    if (plVar9 == (long *)0x0) {
LAB_01cbef58:
      *(uint *)(param_2 + 0x48) = uVar2;
      return 1;
    }
    if (uVar2 < *(uint *)(plVar11 + 3)) {
      plVar8 = (long *)plVar11[(long)(int)uVar2 + 4];
      lVar10 = 0;
      if (plVar8 != (long *)0x0) {
        if (*(long *)(*plVar9 + 0x40) !=
            *(long *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__ + 0x40)) {
LAB_01cbef84:
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar9);
        }
        puVar5 = (ulong *)thunk_FUN_00d624a0(plVar9);
        if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) {
LAB_01cbef8c:
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar8);
        }
        uVar12 = *puVar5;
        puVar5 = (ulong *)thunk_FUN_00d624a0(plVar8);
        puVar4 = Method_OVRPlugin_<>c_<_cctor>b__796_70__;
        if (~*puVar5 < uVar12) {
          uVar7 = FUN_00da519c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar7,*(undefined8 *)puVar4);
        }
        if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) goto LAB_01cbef84;
        plVar9 = (long *)thunk_FUN_00d624a0(plVar9);
        if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) goto LAB_01cbef8c;
        lVar10 = *plVar9;
        plVar9 = (long *)thunk_FUN_00d624a0(plVar8);
        local_58 = *plVar9 + lVar10;
        lVar10 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_58);
        if ((lVar10 != 0) &&
           (lVar6 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar11 + 0x40)), lVar6 == 0)) {
          uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar7,0);
        }
      }
      if (uVar1 < *(uint *)(plVar11 + 3)) {
        plVar11[(long)(int)uVar1 + 4] = lVar10;
        goto LAB_01cbef58;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


