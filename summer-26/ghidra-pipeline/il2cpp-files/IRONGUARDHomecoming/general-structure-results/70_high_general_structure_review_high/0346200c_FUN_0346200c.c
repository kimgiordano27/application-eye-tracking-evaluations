/*
FUNCTION_NAME: FUN_0346200c
ENTRY_POINT: 0346200c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_5
*/


long FUN_0346200c(long param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  if ((DAT_0483295e & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_Serializer_Get<Delegate[]>__);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_Serializer_Get<GradientAlphaKey[]>__);
    thunk_FUN_01efb3a4(Method_System_RuntimeType_GetCachedName__);
    thunk_FUN_01efb3a4(Method_System_RuntimeType_GetEnumUnderlyingType__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_0483295e = 1;
  }
  plVar5 = (long *)(param_1 + 0x38);
  if (*plVar5 != 0) {
    FUN_03452f40(*plVar5,0);
LAB_034621ac:
    return *plVar5;
  }
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar2 = FUN_03582560(param_2,0,0);
  if ((uVar2 & 1) != 0) {
    param_2 = *(undefined8 *)(param_1 + 0x48);
  }
  lVar3 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_RuntimeType_GetCachedName__);
  FUN_03452f24(lVar3,0);
  *plVar5 = lVar3;
  thunk_FUN_01f51358(plVar5,lVar3);
  plVar7 = (long *)*plVar5;
  uVar4 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_RuntimeType_GetEnumUnderlyingType__);
  FUN_034621c4(uVar4,param_2);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x1d8))(plVar7,uVar4,*(undefined8 *)(*plVar7 + 0x1e0));
    plVar7 = (long *)*plVar5;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x1f8))
                (plVar7,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(*plVar7 + 0x200));
      plVar7 = *(long **)(param_1 + 0x20);
      if (plVar7 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)Method_Sirenix_Serialization_Serializer_Get<GradientAlphaKey[]>__
                         + 0x130);
        if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)Method_Sirenix_Serialization_Serializer_Get<GradientAlphaKey[]>__)) {
          plVar6 = (long *)*plVar5;
          uVar4 = thunk_FUN_01f117cc(*(undefined8 *)
                                      Method_Sirenix_Serialization_Serializer_Get<Delegate[]>__);
          FUN_03452520(uVar4,plVar7,0);
          if (plVar6 == (long *)0x0) goto LAB_034621c0;
          (**(code **)(*plVar6 + 0x1b8))(plVar6,uVar4,*(undefined8 *)(*plVar6 + 0x1c0));
        }
      }
      goto LAB_034621ac;
    }
  }
LAB_034621c0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


