/*
FUNCTION_NAME: FUN_03ee8408
ENTRY_POINT: 03ee8408
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_03ee8408(long param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  puVar1 = PTR_DAT_0675e6d8;
  if ((DAT_06b75292 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0675e6d8);
    DAT_06b75292 = 1;
  }
  FUN_0504920c(param_1,0);
  uVar2 = thunk_FUN_02d934b8(0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)puVar1);
  }
  uVar2 = FUN_050081d4(uVar2,0x40,0);
  lVar4 = **(long **)(*(long *)(param_2 + 0x20) + 0xc0);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d9a2e0(lVar4);
  }
  lVar4 = FUN_02d60934(lVar4,uVar2);
  if (lVar4 != 0) {
    if (0 < *(int *)(lVar4 + 0x18)) {
      lVar5 = 0;
      uVar6 = 0;
      do {
        if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 8) + 0x135) & 1) == 0
           ) {
          FUN_02d9a2e0();
        }
        uVar3 = thunk_FUN_02d9d534();
        Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Copy
                  (uVar3,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10));
        if (*(uint *)(lVar4 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        *(undefined8 *)(lVar4 + 0x20 + uVar6 * 8) = uVar3;
        thunk_FUN_02dd37b4(lVar4 + 0x20 + lVar5,uVar3);
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 8;
      } while ((long)uVar6 < (long)*(int *)(lVar4 + 0x18));
    }
    *(long *)(param_1 + 0x10) = lVar4;
    thunk_FUN_02dd37b4((long *)(param_1 + 0x10),lVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


