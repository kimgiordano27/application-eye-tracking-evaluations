/*
FUNCTION_NAME: FUN_077d8218
ENTRY_POINT: 077d8218
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4
*/


void FUN_077d8218(int *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_38;
  
  if ((DAT_08987194 & 1) == 0) {
    FUN_03a8a718(UnityEngine_Pool_CollectionPool<List<Vector4>,_Vector4>_TypeInfo);
    FUN_03a8a718(PTR_DAT_08488b88);
    FUN_03a8a718(UnityEngine_Pool_CollectionPool<List<VisualElement>,_VisualElement>_TypeInfo);
    FUN_03a8a718(
                UnityEngine_Pool_CollectionPool<List<CreationContext_AttributeOverrideRange>,_CreationContext_AttributeOverrideRange>_TypeInfo
                );
    FUN_03a8a718(
                UnityEngine_Pool_CollectionPool<List<CreationContext_SerializedDataOverrideRange>,_CreationContext_SerializedDataOverrideRange>_TypeInfo
                );
    DAT_08987194 = 1;
  }
  puVar1 = PTR_DAT_08488b88;
  lVar5 = *(long *)(param_1 + 8);
  local_38 = 0;
  if (*param_1 == 0) {
    local_38 = *(undefined8 *)(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar4 = *(long *)(param_1 + 10);
    *(undefined4 *)(lVar5 + 0x48) = 1;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar4 = (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28))
    ;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    local_38 = FUN_058b71ec(lVar4,*(undefined8 *)
                                   UnityEngine_Pool_CollectionPool<List<CreationContext_SerializedDataOverrideRange>,_CreationContext_SerializedDataOverrideRange>_TypeInfo
                           );
    uVar2 = FUN_0587c6c4(&local_38,
                         *(undefined8 *)
                          UnityEngine_Pool_CollectionPool<List<CreationContext_AttributeOverrideRange>,_CreationContext_AttributeOverrideRange>_TypeInfo
                        );
    if ((uVar2 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xc) = local_38;
      thunk_FUN_03afed3c(param_1 + 0xc,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_043e3444(param_1 + 2,&local_38,param_1,
                   *(undefined8 *)UnityEngine_Pool_CollectionPool<List<Vector4>,_Vector4>_TypeInfo);
      return;
    }
  }
  uVar3 = FUN_0587c704(&local_38,
                       *(undefined8 *)
                        UnityEngine_Pool_CollectionPool<List<VisualElement>,_VisualElement>_TypeInfo
                      );
  if (lVar5 != 0) {
    FUN_077d7ec4(lVar5);
    lVar5 = *(long *)puVar1;
    *param_1 = -2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_0666d184(param_1 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0(uVar3,uVar3);
}


