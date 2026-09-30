/*
FUNCTION_NAME: FUN_07185f2c
ENTRY_POINT: 07185f2c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4
*/


undefined8 FUN_07185f2c(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_DAT_07d86398;
  if ((DAT_08268106 & 1) == 0) {
    FUN_0373b518(
                System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_TypeInfo
                );
    FUN_0373b518(
                UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<CompilerContextData>>_TypeInfo
                );
    FUN_0373b518(PTR_DAT_07d86398);
    DAT_08268106 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x3f0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  puVar1 = (undefined8 *)(param_1 + 0x3f0);
  uVar3 = FUN_075ac5e0(uVar5,0,0);
  if ((uVar3 & 1) != 0) {
    uVar5 = FUN_03f0da94(param_1,*(undefined8 *)
                                  System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_TypeInfo
                        );
    *(undefined8 *)(param_1 + 0x3f0) = uVar5;
    thunk_FUN_037aeb94(puVar1,uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x3f0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar3 = FUN_075ac5e0(uVar5,0,0);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_075a7484(param_1,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      uVar5 = FUN_03fe21f8(lVar4,*(undefined8 *)
                                  UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<CompilerContextData>>_TypeInfo
                          );
      *puVar1 = uVar5;
      thunk_FUN_037aeb94(puVar1,uVar5);
    }
  }
  return *puVar1;
}


