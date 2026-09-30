/*
FUNCTION_NAME: OVRManager$$LateUpdate
ENTRY_POINT: 05125218
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__LateUpdate(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar1 = PTR_DAT_06780de8;
  if ((DAT_06b79bfe & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06780ea8);
    FUN_02d6084c(PTR_DAT_06780eb0);
    FUN_02d6084c(PTR_DAT_06780de8);
    FUN_02d6084c(PTR_DAT_06780eb8);
    FUN_02d6084c(PTR_DAT_06780ec0);
    FUN_02d6084c(PTR_DAT_06780ec8);
    FUN_02d6084c(PTR_DAT_06780ed0);
    DAT_06b79bfe = 1;
  }
  FUN_0504920c(param_1,0);
  plVar7 = (long *)FUN_02d60934(*(undefined8 *)puVar1,1);
  if (plVar7 != (long *)0x0) {
    if ((param_2 != 0) &&
       (lVar8 = thunk_FUN_02d9d438(param_2,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
      uVar9 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar9,0);
    }
    puVar6 = PTR_DAT_06780ed0;
    puVar5 = PTR_DAT_06780ec8;
    puVar4 = PTR_DAT_06780ec0;
    puVar3 = PTR_DAT_06780eb8;
    puVar2 = PTR_DAT_06780eb0;
    puVar1 = PTR_DAT_06780ea8;
    if ((int)plVar7[3] != 0) {
      plVar7[4] = param_2;
      thunk_FUN_02dd37b4(plVar7 + 4,param_2);
      uVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar6);
      FUN_04038c70(uVar9,plVar7,*(undefined8 *)puVar5);
      puVar10 = (undefined8 *)(param_1 + 0x18);
      *puVar10 = uVar9;
      thunk_FUN_02dd37b4(puVar10,uVar9);
      uVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
      FUN_04894d4c(uVar9,*(undefined8 *)puVar1);
      *(undefined8 *)(param_1 + 0x20) = uVar9;
      thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x20),uVar9);
      uVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
      FUN_04894d4c(uVar9,*(undefined8 *)puVar1);
      *(undefined8 *)(param_1 + 0x28) = uVar9;
      thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x28),uVar9);
      uVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar4);
      FUN_03aabc60(uVar9,*(undefined8 *)puVar3);
      *(undefined8 *)(param_1 + 0x30) = uVar9;
      thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x30),uVar9);
      uVar9 = FUN_05124fbc(*puVar10);
      *(undefined8 *)(param_1 + 0x10) = uVar9;
      thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x10),uVar9);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d60af0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


