/*
FUNCTION_NAME: FUN_078029bc
ENTRY_POINT: 078029bc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_4
*/


void FUN_078029bc(int *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long *plVar8;
  undefined8 local_38;
  
  if ((DAT_08987310 & 1) == 0) {
    FUN_03a8a718(
                System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_TypeInfo
                );
    FUN_03a8a718(PTR_DAT_08488b88);
    FUN_03a8a718(PTR_DAT_0849aac0);
    FUN_03a8a718(System_Collections_Generic_Dictionary<string,_PlayerProperty>_TypeInfo);
    FUN_03a8a718(
                UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<CompilerContextData>>_TypeInfo
                );
    FUN_03a8a718(
                UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<RenderGraph_CompiledGraph>>_TypeInfo
                );
    DAT_08987310 = 1;
  }
  puVar1 = PTR_DAT_08488b88;
  local_38 = 0;
  if (*param_1 == 0) {
    local_38 = *(undefined8 *)(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  else {
    lVar7 = *(long *)(param_1 + 8);
    lVar2 = thunk_FUN_03ac74bc(*(undefined8 *)
                                UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<RenderGraph_CompiledGraph>>_TypeInfo
                              );
    FUN_0679343c(lVar2,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(param_1 + 8);
    thunk_FUN_03afed3c();
    *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(param_1 + 10);
    thunk_FUN_03afed3c();
    *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_1 + 0xc);
    thunk_FUN_03afed3c();
    *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_1 + 0xe);
    thunk_FUN_03afed3c();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar8 = *(long **)(lVar7 + 0x18);
    uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0849aac0);
    FUN_04957830(uVar3,lVar2,
                 *(undefined8 *)
                  UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<CompilerContextData>>_TypeInfo
                 ,0);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar2 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)System_Collections_Generic_Dictionary<string,_PlayerProperty>_TypeInfo) {
          puVar4 = (undefined8 *)(lVar2 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_07802b50;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_03ac43c4(plVar8,*(long *)
                                  System_Collections_Generic_Dictionary<string,_PlayerProperty>_TypeInfo
                          ,1);
LAB_07802b50:
    lVar2 = (*(code *)*puVar4)(plVar8,uVar3,puVar4[1]);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    local_38 = FUN_067c4bec(lVar2,0);
    uVar5 = FUN_0666e8e0(&local_38,0);
    if ((uVar5 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x10) = local_38;
      thunk_FUN_03afed3c(param_1 + 0x10,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_043e6e64(param_1 + 2,&local_38,param_1,
                   *(undefined8 *)
                    System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_TypeInfo
                  );
      return;
    }
  }
  FUN_0666e9a8(&local_38,0);
  lVar2 = *(long *)puVar1;
  *param_1 = -2;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_0666d184(param_1 + 2,0);
  return;
}


