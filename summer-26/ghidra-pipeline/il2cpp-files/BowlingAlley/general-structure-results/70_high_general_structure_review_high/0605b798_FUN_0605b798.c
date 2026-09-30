/*
FUNCTION_NAME: FUN_0605b798
ENTRY_POINT: 0605b798
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_4
*/


void FUN_0605b798(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar3 = UnityEngine_UIElements_EventBase<WheelEvent>_TypeInfo;
  puVar2 = PTR_DAT_07282378;
  puVar1 = PTR_DAT_07279510;
  if ((DAT_076dd35b & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727fd28);
    thunk_FUN_032e1da0(PTR_DAT_0729e670);
    thunk_FUN_032e1da0(PTR_DAT_072898c0);
    thunk_FUN_032e1da0(Newtonsoft_Json_Utilities_DynamicProxy<JToken>_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventBase<WheelEvent>_TypeInfo);
    thunk_FUN_032e1da0(
                      System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_TypeInfo
                      );
    thunk_FUN_032e1da0(PTR_DAT_072804e0);
    thunk_FUN_032e1da0(PTR_DAT_07282378);
    thunk_FUN_032e1da0(PTR_DAT_072813d0);
    thunk_FUN_032e1da0(PTR_DAT_07279510);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventCallback<ChangeEvent<IEnumerable<int>>>_TypeInfo)
    ;
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventCallback<ChangeEvent<bool>>_TypeInfo);
    thunk_FUN_032e1da0(Oculus_Interaction_RandomSampleConsensus_EvaluateModelScore<Vector3>_TypeInfo
                      );
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventCallback<ChangeEvent<CheckboxState>>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07283300);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventCallback<ChangeEvent<Color>>_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventCallback<ChangeEvent<int>>_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventCallback<ChangeEvent<float>>_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventCallback<ChangeEvent<string>>_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventCallback<ChangeEvent<Vector3>>_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventCallback<ChangeEvent<Vector3Int>>_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventCallback<ChangingEvent<int>>_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventCallback<ChangingEvent<float>>_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventCallback<ChangingEvent<Vector2>>_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventBase<TransitionEndEvent>_TypeInfo);
    thunk_FUN_032e1da0(
                      UnityEngine_UIElements_EventCallback<ContextChangedEvent<AvatarVariantContext>>_TypeInfo
                      );
    DAT_076dd35b = 1;
  }
  puVar4 = UnityEngine_UIElements_EventCallback<ChangingEvent<int>>_TypeInfo;
  puVar5 = 
  System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_TypeInfo;
  lVar7 = FUN_032d5d3c(*(undefined8 *)puVar3,0x10);
  uVar12 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar1);
  }
  uVar12 = FUN_059324dc(uVar12,0);
  uVar8 = FUN_059324dc(*(undefined8 *)puVar2,0);
  uVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar5);
  FUN_0605c1a8(uVar9,*(undefined8 *)puVar4,0x1a,uVar12,1,0,1,uVar8,0,0);
  puVar1 = UnityEngine_UIElements_EventCallback<ChangeEvent<Color>>_TypeInfo;
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x18) != 0) {
      *(undefined8 *)(lVar7 + 0x20) = uVar9;
      thunk_FUN_0333a630((undefined8 *)(lVar7 + 0x20),uVar9);
      uVar12 = FUN_059324dc(*(undefined8 *)puVar2,0);
      uVar8 = FUN_059324dc(*(undefined8 *)puVar2,0);
      uVar9 = FUN_059324dc(*(undefined8 *)puVar2,0);
      uVar10 = FUN_059324dc(*(undefined8 *)puVar2,0);
      uVar11 = thunk_FUN_032a56a0(*(undefined8 *)puVar5);
      FUN_0605c1a8(uVar11,*(undefined8 *)puVar1,0x13,uVar12,0,0,3,uVar8,uVar9,uVar10);
      puVar3 = Oculus_Interaction_RandomSampleConsensus_EvaluateModelScore<Vector3>_TypeInfo;
      puVar1 = PTR_DAT_0727fd28;
      if (1 < *(uint *)(lVar7 + 0x18)) {
        *(undefined8 *)(lVar7 + 0x28) = uVar11;
        thunk_FUN_0333a630((undefined8 *)(lVar7 + 0x28),uVar11);
        uVar12 = FUN_059324dc(*(undefined8 *)puVar1,0);
        uVar8 = thunk_FUN_032a56a0(*(undefined8 *)puVar5);
        FUN_0605c1a8(uVar8,*(undefined8 *)puVar3,0x1c,uVar12,0,1,1,0,0,0);
        puVar1 = UnityEngine_UIElements_EventCallback<ChangeEvent<string>>_TypeInfo;
        if (2 < *(uint *)(lVar7 + 0x18)) {
          *(undefined8 *)(lVar7 + 0x30) = uVar8;
          thunk_FUN_0333a630((undefined8 *)(lVar7 + 0x30),uVar8);
          uVar12 = FUN_059324dc(*(undefined8 *)puVar2,0);
          uVar8 = FUN_059324dc(*(undefined8 *)puVar2,0);
          uVar9 = FUN_059324dc(*(undefined8 *)puVar2,0);
          uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar5);
          FUN_0605c1a8(uVar10,*(undefined8 *)puVar1,0x12,uVar12,0,0,2,uVar8,uVar9,0);
          puVar3 = UnityEngine_UIElements_EventCallback<ChangeEvent<bool>>_TypeInfo;
          puVar2 = PTR_DAT_072813d0;
          puVar1 = PTR_DAT_072804e0;
          if (3 < *(uint *)(lVar7 + 0x18)) {
            *(undefined8 *)(lVar7 + 0x38) = uVar10;
            thunk_FUN_0333a630((undefined8 *)(lVar7 + 0x38),uVar10);
            uVar12 = FUN_059324dc(*(undefined8 *)puVar1,0);
            uVar8 = FUN_059324dc(*(undefined8 *)puVar2,0);
            uVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar5);
            FUN_0605c1a8(uVar9,*(undefined8 *)puVar3,4,uVar12,1,0,1,uVar8,0,0);
            puVar3 = UnityEngine_UIElements_EventBase<TransitionEndEvent>_TypeInfo;
            if (4 < *(uint *)(lVar7 + 0x18)) {
              *(undefined8 *)(lVar7 + 0x40) = uVar9;
              thunk_FUN_0333a630((undefined8 *)(lVar7 + 0x40),uVar9);
              uVar12 = FUN_059324dc(*(undefined8 *)puVar2,0);
              uVar8 = FUN_059324dc(*(undefined8 *)puVar2,0);
              uVar9 = FUN_059324dc(*(undefined8 *)puVar1,0);
              uVar10 = FUN_059324dc(*(undefined8 *)puVar1,0);
              uVar11 = thunk_FUN_032a56a0(*(undefined8 *)puVar5);
              FUN_0605c1a8(uVar11,*(undefined8 *)puVar3,0x10,uVar12,1,0,3,uVar8,uVar9,uVar10);
              puVar3 = UnityEngine_UIElements_EventCallback<ChangeEvent<Vector3>>_TypeInfo;
              if (5 < *(uint *)(lVar7 + 0x18)) {
                *(undefined8 *)(lVar7 + 0x48) = uVar11;
                thunk_FUN_0333a630((undefined8 *)(lVar7 + 0x48),uVar11);
                uVar12 = FUN_059324dc(*(undefined8 *)puVar2,0);
                uVar8 = FUN_059324dc(*(undefined8 *)puVar2,0);
                uVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar5);
                FUN_0605c1a8(uVar9,*(undefined8 *)puVar3,0x1d,uVar12,1,0,1,uVar8,0,0);
                puVar2 = 
                UnityEngine_UIElements_EventCallback<ContextChangedEvent<AvatarVariantContext>>_TypeInfo
                ;
                if (6 < *(uint *)(lVar7 + 0x18)) {
                  *(undefined8 *)(lVar7 + 0x50) = uVar9;
                  thunk_FUN_0333a630((undefined8 *)(lVar7 + 0x50),uVar9);
                  puVar3 = PTR_DAT_07282378;
                  uVar12 = FUN_059324dc(*(undefined8 *)PTR_DAT_07282378,0);
                  uVar8 = FUN_059324dc(*(undefined8 *)puVar3,0);
                  uVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar5);
                  FUN_0605c1a8(uVar9,*(undefined8 *)puVar2,0x14,uVar12,0,1,1,uVar8,0,0);
                  puVar6 = 
                  UnityEngine_UIElements_EventCallback<ChangeEvent<IEnumerable<int>>>_TypeInfo;
                  puVar4 = PTR_DAT_0729e670;
                  puVar2 = PTR_DAT_072898c0;
                  if (7 < *(uint *)(lVar7 + 0x18)) {
                    *(undefined8 *)(lVar7 + 0x58) = uVar9;
                    thunk_FUN_0333a630((undefined8 *)(lVar7 + 0x58),uVar9);
                    uVar12 = FUN_059324dc(*(undefined8 *)puVar4,0);
                    uVar8 = FUN_059324dc(*(undefined8 *)puVar2,0);
                    uVar9 = FUN_059324dc(*(undefined8 *)puVar1,0);
                    uVar10 = FUN_059324dc(*(undefined8 *)puVar1,0);
                    uVar11 = thunk_FUN_032a56a0(*(undefined8 *)puVar5);
                    FUN_0605c1a8(uVar11,*(undefined8 *)puVar6,0x26,uVar12,0,1,3,uVar8,uVar9,uVar10);
                    puVar1 = UnityEngine_UIElements_EventCallback<ChangeEvent<int>>_TypeInfo;
                    if (8 < *(uint *)(lVar7 + 0x18)) {
                      *(undefined8 *)(lVar7 + 0x60) = uVar11;
                      thunk_FUN_0333a630((undefined8 *)(lVar7 + 0x60),uVar11);
                      uVar12 = FUN_059324dc(*(undefined8 *)puVar3,0);
                      uVar8 = thunk_FUN_032a56a0(*(undefined8 *)puVar5);
                      FUN_0605c1a8(uVar8,*(undefined8 *)puVar1,0x21,uVar12,0,0,1,0,0,0);
                      puVar1 = 
                      UnityEngine_UIElements_EventCallback<ChangeEvent<Vector3Int>>_TypeInfo;
                      if (9 < *(uint *)(lVar7 + 0x18)) {
                        *(undefined8 *)(lVar7 + 0x68) = uVar8;
                        thunk_FUN_0333a630((undefined8 *)(lVar7 + 0x68),uVar8);
                        uVar12 = FUN_059324dc(*(undefined8 *)puVar3,0);
                        uVar8 = thunk_FUN_032a56a0(*(undefined8 *)puVar5);
                        FUN_0605c1a8(uVar8,*(undefined8 *)puVar1,0x20,uVar12,0,0,1,0,0,0);
                        puVar1 = UnityEngine_UIElements_EventCallback<ChangeEvent<float>>_TypeInfo;
                        if (10 < *(uint *)(lVar7 + 0x18)) {
                          *(undefined8 *)(lVar7 + 0x70) = uVar8;
                          thunk_FUN_0333a630((undefined8 *)(lVar7 + 0x70),uVar8);
                          uVar12 = FUN_059324dc(*(undefined8 *)puVar3,0);
                          uVar8 = thunk_FUN_032a56a0(*(undefined8 *)puVar5);
                          FUN_0605c1a8(uVar8,*(undefined8 *)puVar1,0x1e,uVar12,0,0,1,0,0,0);
                          puVar1 = PTR_DAT_07283300;
                          if (0xb < *(uint *)(lVar7 + 0x18)) {
                            *(undefined8 *)(lVar7 + 0x78) = uVar8;
                            thunk_FUN_0333a630((undefined8 *)(lVar7 + 0x78),uVar8);
                            uVar12 = FUN_059324dc(*(undefined8 *)puVar3,0);
                            uVar8 = thunk_FUN_032a56a0(*(undefined8 *)puVar5);
                            FUN_0605c1a8(uVar8,*(undefined8 *)puVar1,0x22,uVar12,0,0,1,0,0,0);
                            puVar1 = 
                            UnityEngine_UIElements_EventCallback<ChangingEvent<Vector2>>_TypeInfo;
                            if (0xc < *(uint *)(lVar7 + 0x18)) {
                              *(undefined8 *)(lVar7 + 0x80) = uVar8;
                              thunk_FUN_0333a630((undefined8 *)(lVar7 + 0x80),uVar8);
                              uVar12 = FUN_059324dc(*(undefined8 *)puVar3,0);
                              uVar8 = thunk_FUN_032a56a0(*(undefined8 *)puVar5);
                              FUN_0605c1a8(uVar8,*(undefined8 *)puVar1,0x25,uVar12,0,0,1,0,0,0);
                              puVar1 = 
                              UnityEngine_UIElements_EventCallback<ChangingEvent<float>>_TypeInfo;
                              if (0xd < *(uint *)(lVar7 + 0x18)) {
                                *(undefined8 *)(lVar7 + 0x88) = uVar8;
                                thunk_FUN_0333a630((undefined8 *)(lVar7 + 0x88),uVar8);
                                uVar12 = FUN_059324dc(*(undefined8 *)puVar3,0);
                                uVar8 = thunk_FUN_032a56a0(*(undefined8 *)puVar5);
                                FUN_0605c1a8(uVar8,*(undefined8 *)puVar1,0x23,uVar12,0,0,1,0,0,0);
                                puVar1 = 
                                UnityEngine_UIElements_EventCallback<ChangeEvent<CheckboxState>>_TypeInfo
                                ;
                                if (0xe < *(uint *)(lVar7 + 0x18)) {
                                  *(undefined8 *)(lVar7 + 0x90) = uVar8;
                                  thunk_FUN_0333a630((undefined8 *)(lVar7 + 0x90),uVar8);
                                  uVar12 = FUN_059324dc(*(undefined8 *)puVar3,0);
                                  uVar8 = thunk_FUN_032a56a0(*(undefined8 *)puVar5);
                                  FUN_0605c1a8(uVar8,*(undefined8 *)puVar1,0x1f,uVar12,0,0,1,0,0,0);
                                  puVar1 = Newtonsoft_Json_Utilities_DynamicProxy<JToken>_TypeInfo;
                                  if (0xf < *(uint *)(lVar7 + 0x18)) {
                                    *(undefined8 *)(lVar7 + 0x98) = uVar8;
                                    thunk_FUN_0333a630((undefined8 *)(lVar7 + 0x98),uVar8);
                                    **(long **)(*(long *)puVar1 + 0xb8) = lVar7;
                                    thunk_FUN_0333a630(*(undefined8 *)(*(long *)puVar1 + 0xb8),lVar7
                                                      );
                                    return;
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
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


