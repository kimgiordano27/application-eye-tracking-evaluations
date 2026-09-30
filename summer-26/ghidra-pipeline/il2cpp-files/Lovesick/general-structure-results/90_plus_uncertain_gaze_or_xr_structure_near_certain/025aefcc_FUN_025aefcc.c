/*
FUNCTION_NAME: FUN_025aefcc
ENTRY_POINT: 025aefcc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 138
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_12;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_025aefcc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  long *plVar12;
  
  if ((DAT_03783057 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpWebResponse>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<WebRequestStream>,_HttpWebRequest_<MyGetResponseAsync>d__243>__
                      );
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(PTR_DAT_033f3868);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<AnimationOutputWeightProcessor_WeightInfo>_Add__
                      );
    thunk_FUN_00d48444(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmin_s8__);
    thunk_FUN_00d48444(Method_OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Dispose__);
    thunk_FUN_00d48444(StringLiteral_7919);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcopy_laneq_u32__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<RectInt>_set_Capacity__);
    thunk_FUN_00d48444(Method_Oculus_Interaction_Locomotion_TeleportInteractor_<Start>b__35_0__);
    DAT_03783057 = 1;
  }
  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmin_s8__;
  puVar1 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  if (*(char *)(param_1 + 0x1a) != '\0') {
    return;
  }
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = thunk_FUN_00d6225c(uVar11,*(undefined8 *)
                                     Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                            );
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  thunk_FUN_00d6225c(uVar11,*(undefined8 *)puVar1);
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = thunk_FUN_00d6225c(uVar11,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  thunk_FUN_00d6225c(uVar11,*(undefined8 *)puVar2);
  puVar2 = Method_OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Dispose__;
  plVar12 = *(long **)(param_1 + 0x20);
  if ((plVar12 == (long *)0x0) || (*(long *)(param_1 + 0x28) == 0)) {
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02661754(*(undefined8 *)puVar2,0);
    return;
  }
  lVar8 = *plVar12;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
        puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_025af188;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar1,0);
LAB_025af188:
  uVar5 = (*(code *)*puVar6)(plVar12,puVar6[1]);
  plVar12 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  if (plVar12 != (long *)0x0) {
    lVar8 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_025af1f0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar1,1);
LAB_025af1f0:
    uVar5 = (*(code *)*puVar6)(plVar12,puVar6[1]);
    plVar12 = *(long **)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x50) = uVar5;
    if (plVar12 != (long *)0x0) {
      lVar8 = *plVar12;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)
               Method_System_Collections_Generic_List<AnimationOutputWeightProcessor_WeightInfo>_Add__
             ) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
            goto LAB_025af260;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_00d59724(plVar12,*(long *)
                                     Method_System_Collections_Generic_List<AnimationOutputWeightProcessor_WeightInfo>_Add__
                            ,5);
LAB_025af260:
      lVar8 = (*(code *)*puVar6)(plVar12,puVar6[1]);
      if ((lVar8 != 0) &&
         (lVar7 = FUN_0268fd4c(lVar8,0),
         puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcopy_laneq_u32__,
         puVar2 = Method_Oculus_Interaction_Locomotion_TeleportInteractor_<Start>b__35_0__,
         puVar1 = PTR_DAT_033f3868, lVar7 != 0)) {
        uVar5 = FUN_0268b6ac(lVar7,0);
        uVar11 = FUN_01600424(*(undefined8 *)puVar3,uVar5,*(undefined8 *)puVar2,0);
        lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        puVar2 = Method_System_Collections_Generic_List<RectInt>_set_Capacity__;
        if (lVar7 != 0) {
          FUN_0268afbc(lVar7,uVar11,0);
          uVar11 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                             (lVar7,0);
          *(undefined8 *)(param_1 + 0x68) = uVar11;
          uVar11 = FUN_01600424(*(undefined8 *)puVar3,uVar5,*(undefined8 *)puVar2,0);
          lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
          if (lVar7 != 0) {
            FUN_0268afbc(lVar7,uVar11,0);
            uVar11 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                               (lVar7,0);
            *(undefined8 *)(param_1 + 0x70) = uVar11;
            if (*(long *)(param_1 + 0x48) != 0) {
              lVar7 = *(long *)(param_1 + 0x68);
              uVar11 = FUN_0269fe30(*(long *)(param_1 + 0x48),0);
              if (lVar7 != 0) {
                FUN_0269fea8(lVar7,uVar11,0);
                puVar2 = 
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpWebResponse>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<WebRequestStream>,_HttpWebRequest_<MyGetResponseAsync>d__243>__
                ;
                if (*(long *)(param_1 + 0x70) != 0) {
                  FUN_0269fea8(*(long *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x68),0);
                  bVar4 = FUN_010c3738(lVar8,param_1 + 0x38,*(undefined8 *)puVar2);
                  *(byte *)(param_1 + 0x40) = bVar4 & 1;
                  if ((bVar4 & 1) == 0) {
LAB_025af420:
                    *(undefined1 *)(param_1 + 0x1a) = 1;
                    return;
                  }
                  uVar5 = FUN_01600424(*(undefined8 *)puVar3,uVar5,*(undefined8 *)StringLiteral_7919
                                       ,0);
                  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                  if (lVar8 != 0) {
                    FUN_0268afbc(lVar8,uVar5,0);
                    lVar8 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                      (lVar8,0);
                    *(long *)(param_1 + 0x78) = lVar8;
                    if ((*(long *)(param_1 + 0x68) != 0) &&
                       (uVar5 = FUN_0269fe30(*(long *)(param_1 + 0x68),0), lVar8 != 0)) {
                      FUN_0269fea8(lVar8,uVar5,0);
                      goto LAB_025af420;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


