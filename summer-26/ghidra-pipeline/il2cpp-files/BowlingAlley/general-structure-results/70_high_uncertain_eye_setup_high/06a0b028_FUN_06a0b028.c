/*
FUNCTION_NAME: FUN_06a0b028
ENTRY_POINT: 06a0b028
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_06a0b028(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_DAT_072794f0;
  if ((DAT_076e28cf & 1) == 0) {
    thunk_FUN_032e1da0(Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_AreaNode>_Get__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_AreaNode>_Release__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>__ctor__);
    thunk_FUN_032e1da0(Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Get__);
    thunk_FUN_032e1da0(Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__);
    thunk_FUN_032e1da0(Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>__ctor__);
    thunk_FUN_032e1da0(Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_Add__);
    thunk_FUN_032e1da0(Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_Add__);
    thunk_FUN_032e1da0(Method_OVRTaskBuilder<bool>_get_Task__);
    thunk_FUN_032e1da0(Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_Remove__);
    thunk_FUN_032e1da0(Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_Remove__);
    thunk_FUN_032e1da0(PTR_DAT_07279ca8);
    thunk_FUN_032e1da0(PTR_DAT_0727b958);
    thunk_FUN_032e1da0(Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_add_ItemAdded__);
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    thunk_FUN_032e1da0(Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_add_ItemRemoved__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_get_Count__);
    thunk_FUN_032e1da0(PTR_DAT_0727a6b0);
    thunk_FUN_032e1da0(PTR_DAT_0727a6b8);
    thunk_FUN_032e1da0(Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_get_Item__);
    thunk_FUN_032e1da0(
                      Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>__ctor__
                      );
    DAT_076e28cf = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x90);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar2 = FUN_06becf70(uVar5,0);
  if ((uVar2 & 1) != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar2 = FUN_06becf70(uVar5,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x90) == 0) goto LAB_06a0b75c;
      FUN_06e0380c(*(long *)(param_1 + 0x90),1,0);
      if (*(long *)(param_1 + 0x90) == 0) goto LAB_06a0b75c;
      lVar6 = *(long *)(*(long *)(param_1 + 0x90) + 0x128);
      uVar5 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727a6b0);
      FUN_04af4724(uVar5,param_1,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Get__,0);
      if (lVar6 == 0) goto LAB_06a0b75c;
      FUN_04af9040(lVar6,uVar5,*(undefined8 *)PTR_DAT_0727a6b8);
    }
  }
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_06a0b75c;
  lVar6 = FUN_03958adc(*(long *)(param_1 + 0xf8),
                       *(undefined8 *)
                        Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_Remove__);
  uVar5 = *(undefined8 *)(param_1 + 0x98);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar1);
  }
  uVar2 = FUN_06becf70(uVar5,0);
  if ((uVar2 & 1) != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar2 = FUN_06becf70(uVar5,0);
    if ((uVar2 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar2 = FUN_06becf70(lVar6,0);
      if ((uVar2 & 1) != 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x118);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        plVar7 = (long *)(param_1 + 0x118);
        uVar2 = FUN_06bece64(uVar5,0,0);
        if ((uVar2 & 1) != 0) {
          lVar3 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727b958);
          FUN_06be9c64(lVar3,*(undefined8 *)
                              Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>__ctor__
                       ,0);
          *plVar7 = lVar3;
          thunk_FUN_0333a630(plVar7,lVar3);
        }
        if (*plVar7 == 0) goto LAB_06a0b75c;
        FUN_06be9a98(*plVar7,0,0);
        if (*(long *)(param_1 + 0x98) == 0) goto LAB_06a0b75c;
        FUN_06e0380c(*(long *)(param_1 + 0x98),1,0);
        if (*(long *)(param_1 + 0x98) == 0) goto LAB_06a0b75c;
        lVar3 = *(long *)(*(long *)(param_1 + 0x98) + 0x128);
        uVar5 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727a6b0);
        FUN_04af4724(uVar5,param_1,
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__,0);
        if (lVar3 == 0) goto LAB_06a0b75c;
        FUN_04af9040(lVar3,uVar5,*(undefined8 *)PTR_DAT_0727a6b8);
        uVar5 = thunk_FUN_032a56a0(*(undefined8 *)
                                    Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_Add__
                                  );
        FUN_0501aca0(uVar5,param_1,
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_AreaNode>_Release__
                     ,0);
        if (lVar6 == 0) goto LAB_06a0b75c;
        FUN_06a204a8(lVar6,uVar5,0);
      }
    }
  }
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_06a0b75c;
  lVar6 = FUN_03958adc(*(long *)(param_1 + 0xf8),
                       *(undefined8 *)
                        Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_GetEnumerator__)
  ;
  uVar5 = *(undefined8 *)(param_1 + 0xa0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar1);
  }
  uVar2 = FUN_06becf70(uVar5,0);
  if ((uVar2 & 1) != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar2 = FUN_06becf70(uVar5,0);
    if ((uVar2 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar2 = FUN_06becf70(lVar6,0);
      if ((uVar2 & 1) != 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x128);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        plVar7 = (long *)(param_1 + 0x128);
        uVar2 = FUN_06bece64(uVar5,0,0);
        if ((uVar2 & 1) != 0) {
          lVar3 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727b958);
          FUN_06be9c64(lVar3,*(undefined8 *)
                              Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_get_Item__
                       ,0);
          *plVar7 = lVar3;
          thunk_FUN_0333a630(plVar7,lVar3);
        }
        if (*plVar7 == 0) goto LAB_06a0b75c;
        FUN_06be9a98(*plVar7,0,0);
        if (*(long *)(param_1 + 0xa0) == 0) goto LAB_06a0b75c;
        FUN_06e0380c(*(long *)(param_1 + 0xa0),1,0);
        if (*(long *)(param_1 + 0xa0) == 0) goto LAB_06a0b75c;
        lVar3 = *(long *)(*(long *)(param_1 + 0xa0) + 0x128);
        uVar5 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727a6b0);
        FUN_04af4724(uVar5,param_1,
                     *(undefined8 *)
                      Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>__ctor__,0);
        if (lVar3 == 0) goto LAB_06a0b75c;
        FUN_04af9040(lVar3,uVar5,*(undefined8 *)PTR_DAT_0727a6b8);
        uVar5 = thunk_FUN_032a56a0(*(undefined8 *)Method_OVRTaskBuilder<bool>_get_Task__);
        FUN_0501a2e8(uVar5,param_1,
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_AreaNode>_Get__,0);
        if (lVar6 == 0) goto LAB_06a0b75c;
        FUN_06a02ef0(lVar6,uVar5);
      }
    }
  }
  if (*(long *)(param_1 + 0xf8) != 0) {
    lVar6 = FUN_03958adc(*(long *)(param_1 + 0xf8),
                         *(undefined8 *)
                          Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_Remove__);
    uVar5 = *(undefined8 *)(param_1 + 0xa8);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*(long *)puVar1);
    }
    uVar2 = FUN_06becf70(uVar5,0);
    if ((uVar2 & 1) != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar2 = FUN_06becf70(uVar5,0);
      if ((uVar2 & 1) != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar2 = FUN_06becf70(lVar6,0);
        if ((uVar2 & 1) != 0) {
          lVar3 = thunk_FUN_032a56a0(*(undefined8 *)
                                      Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_get_Count__
                                    );
          FUN_059660a0(lVar3,0);
          if (lVar3 != 0) {
            *(long *)(lVar3 + 0x18) = param_1;
            thunk_FUN_0333a630((long *)(lVar3 + 0x18),param_1);
            if (*(long *)(param_1 + 0xf8) != 0) {
              uVar5 = *(undefined8 *)(param_1 + 0x28);
              uVar8 = *(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x28);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
              }
              uVar5 = FUN_03afd8a0(uVar5,uVar8,
                                   *(undefined8 *)
                                    Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_add_ItemAdded__
                                  );
              *(undefined8 *)(param_1 + 0x120) = uVar5;
              thunk_FUN_0333a630(param_1 + 0x120);
              if (*(long *)(param_1 + 0x120) != 0) {
                lVar4 = FUN_03958adc(*(long *)(param_1 + 0x120),*(undefined8 *)PTR_DAT_07279ca8);
                plVar7 = (long *)(lVar3 + 0x10);
                *plVar7 = lVar4;
                thunk_FUN_0333a630(plVar7,lVar4);
                if (*plVar7 != 0) {
                  FUN_06bc1cdc(*plVar7,0,0);
                  uVar5 = thunk_FUN_032a56a0(*(undefined8 *)
                                              Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_Add__
                                            );
                  FUN_0501ad7c(uVar5,param_1,
                               *(undefined8 *)
                                Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>__ctor__
                               ,0);
                  if (lVar6 != 0) {
                    FUN_06a23930(lVar6,uVar5,0);
                    if (*(long *)(param_1 + 0xa8) != 0) {
                      FUN_06e0380c(*(long *)(param_1 + 0xa8),1,0);
                      if (*(long *)(param_1 + 0xa8) != 0) {
                        lVar6 = *(long *)(*(long *)(param_1 + 0xa8) + 0x128);
                        uVar5 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727a6b0);
                        FUN_04af4724(uVar5,lVar3,
                                     *(undefined8 *)
                                      Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_add_ItemRemoved__
                                     ,0);
                        if (lVar6 != 0) {
                          FUN_04af9040(lVar6,uVar5,*(undefined8 *)PTR_DAT_0727a6b8);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_06a0b75c;
        }
      }
    }
    return;
  }
LAB_06a0b75c:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


