/*
FUNCTION_NAME: FUN_061d0018
ENTRY_POINT: 061d0018
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 123
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_2
*/


long * FUN_061d0018(long param_1,long *param_2,long *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((DAT_076dddbc & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727e5a0);
    thunk_FUN_032e1da0(PTR_DAT_072794f8);
    thunk_FUN_032e1da0(PTR_DAT_07279510);
    thunk_FUN_032e1da0(OVRTask<OVRResult<OVRAnchor_EraseResult>>_TypeInfo);
    thunk_FUN_032e1da0(System_Predicate<AvatarLODManager_ContributingCamera>_TypeInfo);
    thunk_FUN_032e1da0(System_Predicate<DebugUI_Panel>_TypeInfo);
    thunk_FUN_032e1da0(System_Predicate<DebugUI_ValueTuple>_TypeInfo);
    thunk_FUN_032e1da0(System_Predicate<HID_HIDElementDescriptor>_TypeInfo);
    thunk_FUN_032e1da0(System_Predicate<InputEventTrace_DeviceInfo>_TypeInfo);
    thunk_FUN_032e1da0(System_Predicate<LensFlareCommonSRP_LensFlareCompInfo>_TypeInfo);
    thunk_FUN_032e1da0(
                      System_Predicate<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Predicate<OVRPlugin_BoneCapsule>_TypeInfo);
    thunk_FUN_032e1da0(System_Predicate<PostProcessLayer_SerializedBundleRef>_TypeInfo);
    thunk_FUN_032e1da0(System_Predicate<ProbeBrickIndex_VoxelMeta>_TypeInfo);
    thunk_FUN_032e1da0(System_Predicate<TMP_MaterialManager_MaskingMaterial>_TypeInfo);
    thunk_FUN_032e1da0(System_Predicate<Tween_TweenCurve>_TypeInfo);
    thunk_FUN_032e1da0(System_Predicate<VisualTreeAsset_SlotUsageEntry>_TypeInfo);
    thunk_FUN_032e1da0(System_Linq_Expressions_PrimitiveParameterExpression<object[]>_TypeInfo);
    thunk_FUN_032e1da0(System_Linq_Expressions_PrimitiveParameterExpression<bool>_TypeInfo);
    thunk_FUN_032e1da0(System_Linq_Expressions_PrimitiveParameterExpression<byte>_TypeInfo);
    thunk_FUN_032e1da0(System_Linq_Expressions_PrimitiveParameterExpression<char>_TypeInfo);
    thunk_FUN_032e1da0(System_Linq_Expressions_PrimitiveParameterExpression<DateTime>_TypeInfo);
    thunk_FUN_032e1da0(System_Linq_Expressions_PrimitiveParameterExpression<Decimal>_TypeInfo);
    thunk_FUN_032e1da0(System_Linq_Expressions_PrimitiveParameterExpression<double>_TypeInfo);
    thunk_FUN_032e1da0(System_Linq_Expressions_PrimitiveParameterExpression<Exception>_TypeInfo);
    thunk_FUN_032e1da0(System_Linq_Expressions_PrimitiveParameterExpression<short>_TypeInfo);
    thunk_FUN_032e1da0(System_Linq_Expressions_PrimitiveParameterExpression<int>_TypeInfo);
    DAT_076dddbc = 1;
  }
  puVar3 = OVRTask<OVRResult<OVRAnchor_EraseResult>>_TypeInfo;
  puVar1 = PTR_DAT_07279510;
  if (param_2 != (long *)0x0) {
    uVar4 = thunk_FUN_032f70fc(param_2,0);
    lVar8 = *(long *)puVar3;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar8);
      lVar8 = *(long *)puVar3;
    }
    uVar10 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x58);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    puVar2 = PTR_DAT_0727e5a0;
    uVar5 = FUN_0593b434(param_3,uVar10,0);
    if ((uVar5 & 1) != 0) {
      param_3 = *(long **)(param_1 + 0x20);
    }
    lVar8 = thunk_FUN_032a55a4(param_2,*(undefined8 *)puVar2);
    if ((lVar8 == 0) || (uVar5 = FUN_061d4a0c(lVar8,param_3), (uVar5 & 1) == 0)) {
LAB_061d0de4:
      uVar4 = FUN_061d4b9c(param_1,uVar4,param_3);
      uVar10 = thunk_FUN_032e1da0(
                                 System_Linq_Expressions_PrimitiveParameterExpression<long>_TypeInfo
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_032d5dbc(uVar4,uVar10);
    }
    lVar8 = *(long *)puVar3;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar8 = *(long *)puVar3;
    }
    uVar10 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x48);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*(long *)puVar1);
    }
    uVar5 = FUN_0593b434(param_3,uVar10,0);
    lVar8 = *(long *)puVar3;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar8);
      lVar8 = *(long *)puVar3;
    }
    uVar10 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x48);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar6 = FUN_0593b434(uVar4,uVar10,0);
    if ((uVar5 & 1) != 0) {
      if ((uVar6 & 1) != 0) {
        return param_2;
      }
      uVar4 = *(undefined8 *)puVar2;
      lVar8 = thunk_FUN_032a55a4(param_2,uVar4);
      if (lVar8 != 0) {
        plVar7 = (long *)FUN_061d4e34(param_1,lVar8,param_4);
        return plVar7;
      }
                    /* WARNING: Subroutine does not return */
      FUN_032d618c(param_2,uVar4);
    }
    if ((uVar6 & 1) != 0) {
      if (*param_2 != *(long *)PTR_DAT_072794f8) {
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(param_2);
      }
      param_2 = (long *)FUN_061d51ec(uVar6,param_2);
    }
    if (param_3 != (long *)0x0) {
      uVar5 = FUN_0593d0b8(param_3,0);
      if ((uVar5 & 1) == 0) {
        uVar10 = *(undefined8 *)(param_1 + 0x20);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar5 = FUN_0593b434(uVar4,uVar10,0);
        if ((uVar5 & 1) != 0) {
          lVar8 = *(long *)puVar3;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
            lVar8 = *(long *)puVar3;
          }
          uVar10 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x18);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_032cd7c0(*(long *)puVar1);
          }
          uVar5 = FUN_0593c20c(uVar4,uVar10,0);
          if ((uVar5 & 1) != 0) {
            return param_2;
          }
        }
        plVar7 = (long *)FUN_061d5294(param_1,param_2,param_4);
        return plVar7;
      }
      uVar10 = (**(code **)(*param_3 + 0x448))(param_3,*(undefined8 *)(*param_3 + 0x450));
      lVar8 = *(long *)puVar3;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(lVar8);
        lVar8 = *(long *)puVar3;
      }
      uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x58);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar5 = FUN_0593b434(uVar10,uVar11,0);
      puVar9 = (undefined8 *)System_Predicate<TMP_MaterialManager_MaskingMaterial>_TypeInfo;
      if ((uVar5 & 1) == 0) {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar5 = FUN_0593b434(uVar4,param_3,0);
        if ((uVar5 & 1) != 0) {
          return param_2;
        }
        lVar8 = *(long *)puVar3;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar8 = *(long *)puVar3;
        }
        uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0xb8);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(*(long *)puVar1);
        }
        uVar5 = FUN_0593b434(uVar10,uVar11,0);
        if ((uVar5 & 1) != 0) {
          plVar7 = (long *)FUN_03b99704(param_1,param_2,param_4,
                                        *(undefined8 *)
                                         System_Predicate<AvatarLODManager_ContributingCamera>_TypeInfo
                                       );
          return plVar7;
        }
        lVar8 = *(long *)puVar3;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar8 = *(long *)puVar3;
        }
        uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x60);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(*(long *)puVar1);
        }
        uVar5 = FUN_0593b434(uVar10,uVar11,0);
        if ((uVar5 & 1) != 0) {
          plVar7 = (long *)FUN_03b99e1c(param_1,param_2,param_4,
                                        *(undefined8 *)System_Predicate<DebugUI_ValueTuple>_TypeInfo
                                       );
          return plVar7;
        }
        lVar8 = *(long *)puVar3;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar8 = *(long *)puVar3;
        }
        uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0xc0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(*(long *)puVar1);
        }
        uVar5 = FUN_0593b434(uVar10,uVar11,0);
        puVar9 = (undefined8 *)System_Predicate<DebugUI_Panel>_TypeInfo;
        if ((uVar5 & 1) == 0) {
          lVar8 = *(long *)puVar3;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
            lVar8 = *(long *)puVar3;
          }
          uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0xa8);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_032cd7c0(*(long *)puVar1);
          }
          uVar5 = FUN_0593b434(uVar10,uVar11,0);
          if ((uVar5 & 1) != 0) {
            plVar7 = (long *)FUN_03b9a52c(param_1,param_2,param_4,
                                          *(undefined8 *)
                                           System_Predicate<InputEventTrace_DeviceInfo>_TypeInfo);
            return plVar7;
          }
          lVar8 = *(long *)puVar3;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
            lVar8 = *(long *)puVar3;
          }
          uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0xb0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_032cd7c0(*(long *)puVar1);
          }
          uVar5 = FUN_0593b434(uVar10,uVar11,0);
          if ((uVar5 & 1) != 0) {
            plVar7 = (long *)FUN_03b9ac3c(param_1,param_2,param_4,
                                          *(undefined8 *)
                                           System_Predicate<HID_HIDElementDescriptor>_TypeInfo);
            return plVar7;
          }
          lVar8 = *(long *)puVar3;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
            lVar8 = *(long *)puVar3;
          }
          uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x30);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_032cd7c0(*(long *)puVar1);
          }
          uVar5 = FUN_0593b434(uVar10,uVar11,0);
          if ((uVar5 & 1) != 0) {
            plVar7 = (long *)FUN_03b9b34c(param_1,param_2,param_4,
                                          *(undefined8 *)
                                           System_Predicate<LensFlareCommonSRP_LensFlareCompInfo>_TypeInfo
                                         );
            return plVar7;
          }
          lVar8 = *(long *)puVar3;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
            lVar8 = *(long *)puVar3;
          }
          uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x98);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_032cd7c0(*(long *)puVar1);
          }
          uVar5 = FUN_0593b434(uVar10,uVar11,0);
          if ((uVar5 & 1) != 0) {
            plVar7 = (long *)FUN_03b9ba5c(param_1,param_2,param_4,
                                          *(undefined8 *)
                                           System_Predicate<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo
                                         );
            return plVar7;
          }
          lVar8 = *(long *)puVar3;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
            lVar8 = *(long *)puVar3;
          }
          uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x68);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_032cd7c0(*(long *)puVar1);
          }
          uVar5 = FUN_0593b434(uVar10,uVar11,0);
          if ((uVar5 & 1) != 0) {
            plVar7 = (long *)FUN_03b9c16c(param_1,param_2,param_4,
                                          *(undefined8 *)
                                           System_Predicate<OVRPlugin_BoneCapsule>_TypeInfo);
            return plVar7;
          }
          lVar8 = *(long *)puVar3;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
            lVar8 = *(long *)puVar3;
          }
          uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x38);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_032cd7c0(*(long *)puVar1);
          }
          uVar5 = FUN_0593b434(uVar10,uVar11,0);
          if ((uVar5 & 1) != 0) {
            plVar7 = (long *)FUN_03b9c87c(param_1,param_2,param_4,
                                          *(undefined8 *)
                                           System_Predicate<PostProcessLayer_SerializedBundleRef>_TypeInfo
                                         );
            return plVar7;
          }
          lVar8 = *(long *)puVar3;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
            lVar8 = *(long *)puVar3;
          }
          uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x40);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_032cd7c0(*(long *)puVar1);
          }
          uVar5 = FUN_0593b434(uVar10,uVar11,0);
          if ((uVar5 & 1) != 0) {
            plVar7 = (long *)FUN_03b9cf8c(param_1,param_2,param_4,
                                          *(undefined8 *)
                                           System_Predicate<ProbeBrickIndex_VoxelMeta>_TypeInfo);
            return plVar7;
          }
          lVar8 = *(long *)puVar3;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
            lVar8 = *(long *)puVar3;
          }
          uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x70);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_032cd7c0(*(long *)puVar1);
          }
          uVar5 = FUN_0593b434(uVar10,uVar11,0);
          if ((uVar5 & 1) != 0) {
            plVar7 = (long *)FUN_03b9ddb4(param_1,param_2,param_4,
                                          *(undefined8 *)System_Predicate<Tween_TweenCurve>_TypeInfo
                                         );
            return plVar7;
          }
          lVar8 = *(long *)puVar3;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
            lVar8 = *(long *)puVar3;
          }
          uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0xa0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_032cd7c0(*(long *)puVar1);
          }
          uVar5 = FUN_0593b434(uVar10,uVar11,0);
          if ((uVar5 & 1) != 0) {
            plVar7 = (long *)FUN_03b9e4c4(param_1,param_2,param_4,
                                          *(undefined8 *)
                                           System_Predicate<VisualTreeAsset_SlotUsageEntry>_TypeInfo
                                         );
            return plVar7;
          }
          lVar8 = *(long *)puVar3;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
            lVar8 = *(long *)puVar3;
          }
          uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x48);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_032cd7c0(*(long *)puVar1);
          }
          uVar5 = FUN_0593b434(uVar10,uVar11,0);
          puVar9 = (undefined8 *)
                   System_Linq_Expressions_PrimitiveParameterExpression<object[]>_TypeInfo;
          if ((uVar5 & 1) == 0) {
            lVar8 = *(long *)puVar3;
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar8 = *(long *)puVar3;
            }
            uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0xd8);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_032cd7c0(*(long *)puVar1);
            }
            uVar5 = FUN_0593b434(uVar10,uVar11,0);
            if ((uVar5 & 1) != 0) {
              plVar7 = (long *)FUN_03b9ebd4(param_1,param_2,param_4,
                                            *(undefined8 *)
                                             System_Linq_Expressions_PrimitiveParameterExpression<bool>_TypeInfo
                                           );
              return plVar7;
            }
            lVar8 = *(long *)puVar3;
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar8 = *(long *)puVar3;
            }
            uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x78);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_032cd7c0(*(long *)puVar1);
            }
            uVar5 = FUN_0593b434(uVar10,uVar11,0);
            if ((uVar5 & 1) != 0) {
              plVar7 = (long *)FUN_03b9f2e4(param_1,param_2,param_4,
                                            *(undefined8 *)
                                             System_Linq_Expressions_PrimitiveParameterExpression<byte>_TypeInfo
                                           );
              return plVar7;
            }
            lVar8 = *(long *)puVar3;
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar8 = *(long *)puVar3;
            }
            uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x80);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_032cd7c0(*(long *)puVar1);
            }
            uVar5 = FUN_0593b434(uVar10,uVar11,0);
            if ((uVar5 & 1) != 0) {
              plVar7 = (long *)FUN_03b9f9f4(param_1,param_2,param_4,
                                            *(undefined8 *)
                                             System_Linq_Expressions_PrimitiveParameterExpression<char>_TypeInfo
                                           );
              return plVar7;
            }
            lVar8 = *(long *)puVar3;
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar8 = *(long *)puVar3;
            }
            uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x88);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_032cd7c0(*(long *)puVar1);
            }
            uVar5 = FUN_0593b434(uVar10,uVar11,0);
            if ((uVar5 & 1) != 0) {
              plVar7 = (long *)FUN_03ba2f24(param_1,param_2,param_4,
                                            *(undefined8 *)
                                             System_Linq_Expressions_PrimitiveParameterExpression<DateTime>_TypeInfo
                                           );
              return plVar7;
            }
            lVar8 = *(long *)puVar3;
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar8 = *(long *)puVar3;
            }
            uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0xd0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_032cd7c0(*(long *)puVar1);
            }
            uVar5 = FUN_0593b434(uVar10,uVar11,0);
            puVar9 = (undefined8 *)
                     System_Linq_Expressions_PrimitiveParameterExpression<Decimal>_TypeInfo;
            if ((uVar5 & 1) == 0) {
              lVar8 = *(long *)puVar3;
              if (*(int *)(lVar8 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
                lVar8 = *(long *)puVar3;
              }
              uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x50);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_032cd7c0(*(long *)puVar1);
              }
              uVar5 = FUN_0593b434(uVar10,uVar11,0);
              puVar9 = (undefined8 *)
                       System_Linq_Expressions_PrimitiveParameterExpression<short>_TypeInfo;
              if ((uVar5 & 1) == 0) {
                lVar8 = *(long *)puVar3;
                if (*(int *)(lVar8 + 0xe0) == 0) {
                  thunk_FUN_032cd7c0();
                  lVar8 = *(long *)puVar3;
                }
                uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 200);
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_032cd7c0(*(long *)puVar1);
                }
                uVar5 = FUN_0593b434(uVar10,uVar11,0);
                puVar9 = (undefined8 *)
                         System_Linq_Expressions_PrimitiveParameterExpression<int>_TypeInfo;
                if ((uVar5 & 1) == 0) {
                  lVar8 = *(long *)puVar3;
                  if (*(int *)(lVar8 + 0xe0) == 0) {
                    thunk_FUN_032cd7c0();
                    lVar8 = *(long *)puVar3;
                  }
                  uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x90);
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_032cd7c0(*(long *)puVar1);
                  }
                  uVar5 = FUN_0593b434(uVar10,uVar11,0);
                  puVar9 = (undefined8 *)
                           System_Linq_Expressions_PrimitiveParameterExpression<double>_TypeInfo;
                  if ((uVar5 & 1) == 0) {
                    lVar8 = *(long *)puVar3;
                    if (*(int *)(lVar8 + 0xe0) == 0) {
                      thunk_FUN_032cd7c0();
                      lVar8 = *(long *)puVar3;
                    }
                    uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0xe0);
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_032cd7c0(*(long *)puVar1);
                    }
                    uVar5 = FUN_0593b434(uVar10,uVar11,0);
                    puVar9 = (undefined8 *)
                             System_Linq_Expressions_PrimitiveParameterExpression<Exception>_TypeInfo
                    ;
                    if ((uVar5 & 1) == 0) goto LAB_061d0de4;
                  }
                }
              }
            }
          }
        }
      }
      plVar7 = (long *)FUN_03b9d69c(param_1,param_2,param_4,*puVar9);
      return plVar7;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


