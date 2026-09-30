/*
FUNCTION_NAME: FUN_05b3c404
ENTRY_POINT: 05b3c404
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long * FUN_05b3c404(long param_1,long *param_2,long *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if ((DAT_06dc2131 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069ff8a8);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_DataApiClient_<DeletePublicItemsAsync>d__16>__
                );
    FUN_02d965b8(Method_Unity_Properties_ContainerPropertyBag<Background>_AddProperty<Texture2D>__);
    FUN_02d965b8(Method_Unity_Properties_ContainerPropertyBag<Background>_AddProperty<VectorImage>__
                );
    FUN_02d965b8(Method_Unity_Properties_ContainerPropertyBag<Background>__ctor__);
    FUN_02d965b8(
                Method_Unity_Properties_ContainerPropertyBag<BackgroundPosition>_AddProperty<BackgroundPositionKeyword>__
                );
    FUN_02d965b8(
                Method_Unity_Properties_ContainerPropertyBag<BackgroundPosition>_AddProperty<Length>__
                );
    FUN_02d965b8(Method_Unity_Properties_ContainerPropertyBag<BackgroundPosition>__ctor__);
    FUN_02d965b8(
                Method_Unity_Properties_ContainerPropertyBag<BackgroundRepeat>_AddProperty<Repeat>__
                );
    FUN_02d965b8(Method_Unity_Properties_ContainerPropertyBag<BackgroundRepeat>__ctor__);
    FUN_02d965b8(
                Method_Unity_Properties_ContainerPropertyBag<BackgroundSize>_AddProperty<BackgroundSizeType>__
                );
    FUN_02d965b8(Method_Unity_Properties_ContainerPropertyBag<BackgroundSize>_AddProperty<Length>__)
    ;
    FUN_02d965b8(Method_Unity_Properties_ContainerPropertyBag<BackgroundSize>__ctor__);
    FUN_02d965b8(Method_Unity_Properties_ContainerPropertyBag<Bounds>_AddProperty<Vector3>__);
    FUN_02d965b8(Method_Unity_Properties_ContainerPropertyBag<Bounds>__ctor__);
    FUN_02d965b8(Method_Unity_Properties_ContainerPropertyBag<BoundsInt>_AddProperty<Vector3Int>__);
    FUN_02d965b8(Method_Unity_Properties_ContainerPropertyBag<BoundsInt>__ctor__);
    FUN_02d965b8(Method_Unity_Properties_ContainerPropertyBag<Color>_AddProperty<float>__);
    FUN_02d965b8(Method_Unity_Properties_ContainerPropertyBag<Color>__ctor__);
    FUN_02d965b8(Method_Unity_Properties_ContainerPropertyBag<Cursor>_AddProperty<int>__);
    FUN_02d965b8(Method_Unity_Properties_ContainerPropertyBag<Cursor>_AddProperty<Texture2D>__);
    FUN_02d965b8(Method_Unity_Properties_ContainerPropertyBag<Cursor>_AddProperty<Vector2>__);
    FUN_02d965b8(Method_Unity_Properties_ContainerPropertyBag<Cursor>__ctor__);
    FUN_02d965b8(
                Method_Unity_Properties_ContainerPropertyBag<EasingFunction>_AddProperty<EasingMode>__
                );
    FUN_02d965b8(Method_Unity_Properties_ContainerPropertyBag<EasingFunction>__ctor__);
    DAT_06dc2131 = 1;
  }
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_DataApiClient_<DeletePublicItemsAsync>d__16>__
  ;
  if (param_2 != (long *)0x0) {
    uVar4 = thunk_FUN_02da6564(param_2,0);
    lVar7 = *(long *)puVar3;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar7);
      lVar7 = *(long *)puVar3;
    }
    puVar1 = PTR_DAT_069fb9c0;
    uVar9 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x58);
    if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    puVar2 = PTR_DAT_069ff8a8;
    uVar5 = FUN_055006dc(param_3,uVar9,0);
    if ((uVar5 & 1) != 0) {
      param_3 = *(long **)(param_1 + 0x20);
    }
    lVar7 = thunk_FUN_02dd3048(param_2,*(undefined8 *)puVar2);
    if ((lVar7 == 0) || (uVar5 = FUN_05b40c1c(lVar7,param_3), (uVar5 & 1) == 0)) {
LAB_05b3d198:
      uVar4 = FUN_05b40da0(param_1,uVar4,param_3);
      uVar9 = thunk_FUN_02dfd288(
                                Method_Unity_Properties_ContainerPropertyBag<FontDefinition>_AddProperty<Font>__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar4,uVar9);
    }
    lVar7 = *(long *)puVar3;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar7 = *(long *)puVar3;
    }
    uVar9 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x48);
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)(puVar1 + 0xe0));
    }
    uVar5 = FUN_055006dc(param_3,uVar9,0);
    lVar7 = *(long *)puVar3;
    if ((uVar5 & 1) != 0) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar7 = *(long *)puVar3;
      }
      uVar9 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x48);
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)(puVar1 + 0xe0));
      }
      uVar5 = FUN_055006dc(uVar4,uVar9,0);
      if ((uVar5 & 1) != 0) {
        return param_2;
      }
      uVar4 = *(undefined8 *)puVar2;
      lVar7 = thunk_FUN_02dd3048(param_2,uVar4);
      if (lVar7 != 0) {
        plVar6 = (long *)FUN_05b41040(param_1,lVar7,param_4);
        return plVar6;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(param_2,uVar4);
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar7 = *(long *)puVar3;
    }
    uVar9 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x48);
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)(puVar1 + 0xe0));
    }
    uVar5 = FUN_055006dc(uVar4,uVar9,0);
    if ((uVar5 & 1) != 0) {
      if (*param_2 != *(long *)(puVar1 + 0x90)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(param_2);
      }
      param_2 = (long *)FUN_05b413bc(uVar5,param_2);
    }
    if (param_3 != (long *)0x0) {
      uVar5 = FUN_05502120(param_3,0);
      if ((uVar5 & 1) == 0) {
        uVar9 = *(undefined8 *)(param_1 + 0x20);
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar5 = FUN_055006dc(uVar4,uVar9,0);
        if ((uVar5 & 1) != 0) {
          lVar7 = *(long *)puVar3;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar7 = *(long *)puVar3;
          }
          uVar9 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x18);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02df485c(*(long *)(puVar1 + 0xe0));
          }
          uVar5 = FUN_05501380(uVar4,uVar9,0);
          if ((uVar5 & 1) != 0) {
            return param_2;
          }
        }
        plVar6 = (long *)FUN_05b41464(param_1,param_2,param_4);
        return plVar6;
      }
      uVar9 = (**(code **)(*param_3 + 0x4a8))(param_3,*(undefined8 *)(*param_3 + 0x4b0));
      lVar7 = *(long *)puVar3;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02df485c(lVar7);
        lVar7 = *(long *)puVar3;
      }
      uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x58);
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar5 = FUN_055006dc(uVar9,uVar10,0);
      puVar8 = (undefined8 *)Method_Unity_Properties_ContainerPropertyBag<BackgroundSize>__ctor__;
      if ((uVar5 & 1) == 0) {
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar5 = FUN_055006dc(uVar4,param_3,0);
        if ((uVar5 & 1) != 0) {
          return param_2;
        }
        lVar7 = *(long *)puVar3;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar7 = *(long *)puVar3;
        }
        uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0xb8);
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)(puVar1 + 0xe0));
        }
        uVar5 = FUN_055006dc(uVar9,uVar10,0);
        if ((uVar5 & 1) != 0) {
          plVar6 = (long *)FUN_038bcdc8(param_1,param_2,param_4,
                                        *(undefined8 *)
                                         Method_Unity_Properties_ContainerPropertyBag<Background>_AddProperty<Texture2D>__
                                       );
          return plVar6;
        }
        lVar7 = *(long *)puVar3;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar7 = *(long *)puVar3;
        }
        uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x60);
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)(puVar1 + 0xe0));
        }
        uVar5 = FUN_055006dc(uVar9,uVar10,0);
        if ((uVar5 & 1) != 0) {
          plVar6 = (long *)FUN_038bd490(param_1,param_2,param_4,
                                        *(undefined8 *)
                                         Method_Unity_Properties_ContainerPropertyBag<Background>__ctor__
                                       );
          return plVar6;
        }
        lVar7 = *(long *)puVar3;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar7 = *(long *)puVar3;
        }
        uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0xc0);
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)(puVar1 + 0xe0));
        }
        uVar5 = FUN_055006dc(uVar9,uVar10,0);
        puVar8 = (undefined8 *)
                 Method_Unity_Properties_ContainerPropertyBag<Background>_AddProperty<VectorImage>__
        ;
        if ((uVar5 & 1) == 0) {
          lVar7 = *(long *)puVar3;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar7 = *(long *)puVar3;
          }
          uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0xa8);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02df485c(*(long *)(puVar1 + 0xe0));
          }
          uVar5 = FUN_055006dc(uVar9,uVar10,0);
          if ((uVar5 & 1) != 0) {
            plVar6 = (long *)FUN_038bdb50(param_1,param_2,param_4,
                                          *(undefined8 *)
                                           Method_Unity_Properties_ContainerPropertyBag<BackgroundPosition>_AddProperty<Length>__
                                         );
            return plVar6;
          }
          lVar7 = *(long *)puVar3;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar7 = *(long *)puVar3;
          }
          uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0xb0);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02df485c(*(long *)(puVar1 + 0xe0));
          }
          uVar5 = FUN_055006dc(uVar9,uVar10,0);
          if ((uVar5 & 1) != 0) {
            plVar6 = (long *)FUN_038be210(param_1,param_2,param_4,
                                          *(undefined8 *)
                                           Method_Unity_Properties_ContainerPropertyBag<BackgroundPosition>_AddProperty<BackgroundPositionKeyword>__
                                         );
            return plVar6;
          }
          lVar7 = *(long *)puVar3;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar7 = *(long *)puVar3;
          }
          uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x30);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02df485c(*(long *)(puVar1 + 0xe0));
          }
          uVar5 = FUN_055006dc(uVar9,uVar10,0);
          if ((uVar5 & 1) != 0) {
            plVar6 = (long *)FUN_038be8d0(param_1,param_2,param_4,
                                          *(undefined8 *)
                                           Method_Unity_Properties_ContainerPropertyBag<BackgroundPosition>__ctor__
                                         );
            return plVar6;
          }
          lVar7 = *(long *)puVar3;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar7 = *(long *)puVar3;
          }
          uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x98);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02df485c(*(long *)(puVar1 + 0xe0));
          }
          uVar5 = FUN_055006dc(uVar9,uVar10,0);
          if ((uVar5 & 1) != 0) {
            plVar6 = (long *)FUN_038bef90(param_1,param_2,param_4,
                                          *(undefined8 *)
                                           Method_Unity_Properties_ContainerPropertyBag<BackgroundRepeat>_AddProperty<Repeat>__
                                         );
            return plVar6;
          }
          lVar7 = *(long *)puVar3;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar7 = *(long *)puVar3;
          }
          uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x68);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02df485c(*(long *)(puVar1 + 0xe0));
          }
          uVar5 = FUN_055006dc(uVar9,uVar10,0);
          if ((uVar5 & 1) != 0) {
            plVar6 = (long *)FUN_038bf650(param_1,param_2,param_4,
                                          *(undefined8 *)
                                           Method_Unity_Properties_ContainerPropertyBag<BackgroundRepeat>__ctor__
                                         );
            return plVar6;
          }
          lVar7 = *(long *)puVar3;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar7 = *(long *)puVar3;
          }
          uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x38);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02df485c(*(long *)(puVar1 + 0xe0));
          }
          uVar5 = FUN_055006dc(uVar9,uVar10,0);
          if ((uVar5 & 1) != 0) {
            plVar6 = (long *)FUN_038bfd10(param_1,param_2,param_4,
                                          *(undefined8 *)
                                           Method_Unity_Properties_ContainerPropertyBag<BackgroundSize>_AddProperty<BackgroundSizeType>__
                                         );
            return plVar6;
          }
          lVar7 = *(long *)puVar3;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar7 = *(long *)puVar3;
          }
          uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x40);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02df485c(*(long *)(puVar1 + 0xe0));
          }
          uVar5 = FUN_055006dc(uVar9,uVar10,0);
          if ((uVar5 & 1) != 0) {
            plVar6 = (long *)FUN_038c03d0(param_1,param_2,param_4,
                                          *(undefined8 *)
                                           Method_Unity_Properties_ContainerPropertyBag<BackgroundSize>_AddProperty<Length>__
                                         );
            return plVar6;
          }
          lVar7 = *(long *)puVar3;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar7 = *(long *)puVar3;
          }
          uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x70);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02df485c(*(long *)(puVar1 + 0xe0));
          }
          uVar5 = FUN_055006dc(uVar9,uVar10,0);
          if ((uVar5 & 1) != 0) {
            plVar6 = (long *)System_Collections_Generic_EqualityComparer<OVRTask_CallbackWithState<OVRResult<object,_Int32Enum>,_OVRTask_CombinedTaskDataWithCompletedTaskId<OVRResult<object,_Int32Enum>>>>__IndexOf
                                       (param_1,param_2,param_4,
                                        *(undefined8 *)
                                         Method_Unity_Properties_ContainerPropertyBag<Bounds>_AddProperty<Vector3>__
                                       );
            return plVar6;
          }
          lVar7 = *(long *)puVar3;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar7 = *(long *)puVar3;
          }
          uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0xa0);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02df485c(*(long *)(puVar1 + 0xe0));
          }
          uVar5 = FUN_055006dc(uVar9,uVar10,0);
          if ((uVar5 & 1) != 0) {
            plVar6 = (long *)FUN_038c182c(param_1,param_2,param_4,
                                          *(undefined8 *)
                                           Method_Unity_Properties_ContainerPropertyBag<Bounds>__ctor__
                                         );
            return plVar6;
          }
          lVar7 = *(long *)puVar3;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar7 = *(long *)puVar3;
          }
          uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x48);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02df485c(*(long *)(puVar1 + 0xe0));
          }
          uVar5 = FUN_055006dc(uVar9,uVar10,0);
          puVar8 = (undefined8 *)
                   Method_Unity_Properties_ContainerPropertyBag<BoundsInt>_AddProperty<Vector3Int>__
          ;
          if ((uVar5 & 1) == 0) {
            lVar7 = *(long *)puVar3;
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar7 = *(long *)puVar3;
            }
            uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0xd8);
            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02df485c(*(long *)(puVar1 + 0xe0));
            }
            uVar5 = FUN_055006dc(uVar9,uVar10,0);
            if ((uVar5 & 1) != 0) {
              plVar6 = (long *)FUN_038c1eec(param_1,param_2,param_4,
                                            *(undefined8 *)
                                             Method_Unity_Properties_ContainerPropertyBag<BoundsInt>__ctor__
                                           );
              return plVar6;
            }
            lVar7 = *(long *)puVar3;
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar7 = *(long *)puVar3;
            }
            uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x78);
            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02df485c(*(long *)(puVar1 + 0xe0));
            }
            uVar5 = FUN_055006dc(uVar9,uVar10,0);
            if ((uVar5 & 1) != 0) {
              plVar6 = (long *)FUN_038c25ac(param_1,param_2,param_4,
                                            *(undefined8 *)
                                             Method_Unity_Properties_ContainerPropertyBag<Color>_AddProperty<float>__
                                           );
              return plVar6;
            }
            lVar7 = *(long *)puVar3;
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar7 = *(long *)puVar3;
            }
            uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x80);
            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02df485c(*(long *)(puVar1 + 0xe0));
            }
            uVar5 = FUN_055006dc(uVar9,uVar10,0);
            if ((uVar5 & 1) != 0) {
              plVar6 = (long *)FUN_038c2c6c(param_1,param_2,param_4,
                                            *(undefined8 *)
                                             Method_Unity_Properties_ContainerPropertyBag<Color>__ctor__
                                           );
              return plVar6;
            }
            lVar7 = *(long *)puVar3;
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar7 = *(long *)puVar3;
            }
            uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x88);
            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02df485c(*(long *)(puVar1 + 0xe0));
            }
            uVar5 = FUN_055006dc(uVar9,uVar10,0);
            if ((uVar5 & 1) != 0) {
              plVar6 = (long *)FUN_038c332c(param_1,param_2,param_4,
                                            *(undefined8 *)
                                             Method_Unity_Properties_ContainerPropertyBag<Cursor>_AddProperty<int>__
                                           );
              return plVar6;
            }
            lVar7 = *(long *)puVar3;
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar7 = *(long *)puVar3;
            }
            uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0xd0);
            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02df485c(*(long *)(puVar1 + 0xe0));
            }
            uVar5 = FUN_055006dc(uVar9,uVar10,0);
            puVar8 = (undefined8 *)
                     Method_Unity_Properties_ContainerPropertyBag<Cursor>_AddProperty<Texture2D>__;
            if ((uVar5 & 1) == 0) {
              lVar7 = *(long *)puVar3;
              if (*(int *)(lVar7 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                lVar7 = *(long *)puVar3;
              }
              uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x50);
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02df485c(*(long *)(puVar1 + 0xe0));
              }
              uVar5 = FUN_055006dc(uVar9,uVar10,0);
              puVar8 = (undefined8 *)
                       Method_Unity_Properties_ContainerPropertyBag<EasingFunction>_AddProperty<EasingMode>__
              ;
              if ((uVar5 & 1) == 0) {
                lVar7 = *(long *)puVar3;
                if (*(int *)(lVar7 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                  lVar7 = *(long *)puVar3;
                }
                uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 200);
                if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_02df485c(*(long *)(puVar1 + 0xe0));
                }
                uVar5 = FUN_055006dc(uVar9,uVar10,0);
                puVar8 = (undefined8 *)
                         Method_Unity_Properties_ContainerPropertyBag<EasingFunction>__ctor__;
                if ((uVar5 & 1) == 0) {
                  lVar7 = *(long *)puVar3;
                  if (*(int *)(lVar7 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                    lVar7 = *(long *)puVar3;
                  }
                  uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x90);
                  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_02df485c(*(long *)(puVar1 + 0xe0));
                  }
                  uVar5 = FUN_055006dc(uVar9,uVar10,0);
                  puVar8 = (undefined8 *)
                           Method_Unity_Properties_ContainerPropertyBag<Cursor>_AddProperty<Vector2>__
                  ;
                  if ((uVar5 & 1) == 0) {
                    lVar7 = *(long *)puVar3;
                    if (*(int *)(lVar7 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                      lVar7 = *(long *)puVar3;
                    }
                    uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0xe0);
                    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                      thunk_FUN_02df485c(*(long *)(puVar1 + 0xe0));
                    }
                    uVar5 = FUN_055006dc(uVar9,uVar10,0);
                    puVar8 = (undefined8 *)
                             Method_Unity_Properties_ContainerPropertyBag<Cursor>__ctor__;
                    if ((uVar5 & 1) == 0) goto LAB_05b3d198;
                  }
                }
              }
            }
          }
        }
      }
      plVar6 = (long *)FUN_038c0a90(param_1,param_2,param_4,*puVar8);
      return plVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


