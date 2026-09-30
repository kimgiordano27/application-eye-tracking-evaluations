/*
FUNCTION_NAME: FUN_065de840
ENTRY_POINT: 065de840
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


undefined8 FUN_065de840(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar2 = UnityEngine_ParticleSystem_TriggerModule_var;
  puVar1 = UnityEngine_ParticleSystem_TrailModule_var;
  if ((DAT_073a0803 & 1) == 0) {
    FUN_02fe925c(UnityEngine_ParticleSystem_VelocityOverLifetimeModule_var);
    FUN_02fe925c(PTR_DAT_06f99928);
    FUN_02fe925c(PTR_DAT_06f6d620);
    FUN_02fe925c(Pathfinding_Path_OpenCandidateConnectionBurst_00000565_PostfixBurstDelegate_var);
    FUN_02fe925c(UnityEngine_ParticleSystem_TrailModule_var);
    FUN_02fe925c(Pathfinding_Util_PathInterpolator_Cursor_var);
    FUN_02fe925c(PTR_DAT_06fdad28);
    FUN_02fe925c(UnityEngine_ParticleSystem_TriggerModule_var);
    FUN_02fe925c(Pathfinding_PathProcessor_GraphUpdateLock_var);
    FUN_02fe925c(Pathfinding_PathTracer_ContainsAndProject_000009FB_PostfixBurstDelegate_var);
    FUN_02fe925c(Pathfinding_PathTracer_EstimateRemainingPath_00000A0E_PostfixBurstDelegate_var);
    DAT_073a0803 = 1;
  }
  lVar3 = thunk_FUN_0301080c(*(undefined8 *)puVar1);
  FUN_05b32c00(lVar3,0);
  uVar4 = System_Convert__ToUInt64(*param_1,*(undefined8 *)puVar2,0);
  if (((uVar4 & 1) != 0) &&
     (uVar4 = System_Convert__ToUInt64
                        (*param_1,*(undefined8 *)Pathfinding_PathProcessor_GraphUpdateLock_var,0),
     (uVar4 & 1) != 0)) {
    return 0;
  }
  uVar4 = System_Convert__ToDouble(param_1[6],0);
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  lVar5 = FUN_065dcb60(param_1[6]);
  if (lVar5 == 0) {
    return 0;
  }
  uVar4 = System_Convert__ToDouble(param_2,0);
  uVar8 = param_2;
  if ((uVar4 & 1) != 0) {
    if ((*(uint *)(lVar5 + 0x28) & 1) == 0) {
      uVar8 = *(undefined8 *)
               Pathfinding_PathTracer_EstimateRemainingPath_00000A0E_PostfixBurstDelegate_var;
      if (((*(uint *)(lVar5 + 0x28) ^ 0xffffffff) & 0x44) != 0) {
        uVar8 = param_2;
      }
    }
    else {
      uVar8 = *(undefined8 *)
               Pathfinding_PathTracer_ContainsAndProject_000009FB_PostfixBurstDelegate_var;
    }
  }
  uVar4 = System_Convert__ToDouble(param_1[2],0);
  if ((uVar4 & 1) == 0) {
    lVar7 = FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6d620,5);
    uVar9 = *param_1;
    if (*(int *)(*(long *)Pathfinding_Util_PathInterpolator_Cursor_var + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*(long *)Pathfinding_Util_PathInterpolator_Cursor_var);
    }
    uVar9 = FUN_065de6e4(uVar9,0);
    if (lVar7 == 0) goto LAB_065debf0;
    if (*(int *)(lVar7 + 0x18) == 0) {
UnityEngine_Rendering_Universal_UTess_DelaEdgeCompare__Compare:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    *(undefined8 *)(lVar7 + 0x20) = uVar9;
    thunk_FUN_03048534((undefined8 *)(lVar7 + 0x20),uVar9);
    puVar1 = PTR_DAT_06fdad28;
    if (*(uint *)(lVar7 + 0x18) < 2)
    goto UnityEngine_Rendering_Universal_UTess_DelaEdgeCompare__Compare;
    *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)PTR_DAT_06fdad28;
    thunk_FUN_03048534((undefined8 *)(lVar7 + 0x28));
    uVar9 = FUN_065de6e4(param_1[2],0);
    if (*(uint *)(lVar7 + 0x18) < 3)
    goto UnityEngine_Rendering_Universal_UTess_DelaEdgeCompare__Compare;
    *(undefined8 *)(lVar7 + 0x30) = uVar9;
    thunk_FUN_03048534((undefined8 *)(lVar7 + 0x30),uVar9);
    if (*(uint *)(lVar7 + 0x18) < 4)
    goto UnityEngine_Rendering_Universal_UTess_DelaEdgeCompare__Compare;
    *(undefined8 *)(lVar7 + 0x38) = *(undefined8 *)puVar1;
    thunk_FUN_03048534((undefined8 *)(lVar7 + 0x38));
    uVar9 = FUN_065de6e4(param_1[3],0);
    if (*(uint *)(lVar7 + 0x18) < 5)
    goto UnityEngine_Rendering_Universal_UTess_DelaEdgeCompare__Compare;
    *(undefined8 *)(lVar7 + 0x40) = uVar9;
    thunk_FUN_03048534();
    uVar9 = FUN_059722f0(lVar7,0);
  }
  else {
    uVar9 = *param_1;
    if (*(int *)(*(long *)Pathfinding_Util_PathInterpolator_Cursor_var + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar9 = FUN_065de6e4(uVar9,0);
    uVar6 = FUN_065de6e4(param_1[3],0);
    uVar9 = FUN_05971ec8(uVar9,*(undefined8 *)PTR_DAT_06fdad28,uVar6,0);
  }
  lVar7 = thunk_FUN_0301080c(*(undefined8 *)Pathfinding_Util_PathInterpolator_Cursor_var);
  FUN_05b32c00(lVar7,0);
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x20) = lVar5;
    thunk_FUN_03048534((long *)(lVar7 + 0x20),lVar5);
    *(undefined8 *)(lVar7 + 0x10) = uVar8;
    thunk_FUN_03048534((undefined8 *)(lVar7 + 0x10),uVar8);
    *(undefined8 *)(lVar7 + 0x18) = *param_1;
    thunk_FUN_03048534();
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x10) = lVar7;
      thunk_FUN_03048534((long *)(lVar3 + 0x10),lVar7);
      uVar6 = thunk_FUN_0301080c(*(undefined8 *)
                                  UnityEngine_ParticleSystem_VelocityOverLifetimeModule_var);
      FUN_057f17c4(uVar6,lVar3,
                   *(undefined8 *)
                    Pathfinding_Path_OpenCandidateConnectionBurst_00000565_PostfixBurstDelegate_var,
                   0);
      if (*(int *)(*(long *)PTR_DAT_06f99928 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      FUN_06562544(uVar6,uVar9,uVar8,0,0,0);
      return uVar9;
    }
  }
LAB_065debf0:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


