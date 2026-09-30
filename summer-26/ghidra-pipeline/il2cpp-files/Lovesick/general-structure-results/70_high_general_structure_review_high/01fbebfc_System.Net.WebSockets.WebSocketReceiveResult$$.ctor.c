/*
FUNCTION_NAME: System.Net.WebSockets.WebSocketReceiveResult$$.ctor
ENTRY_POINT: 01fbebfc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_5;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


long System_Net_WebSockets_WebSocketReceiveResult___ctor
               (long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  int iVar16;
  long *local_70;
  long *local_68;
  
  if ((DAT_03780698 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Sirenix_Serialization_UnitySerializationUtility_DeserializeUnityObject__
                      );
    thunk_FUN_00d48444(DG_Tweening_ShortcutExtensions_<>c__DisplayClass17_0_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    DAT_03780698 = 1;
  }
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  if (param_2 == (long *)0x0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar5 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar15 = thunk_FUN_00d48444(System_Collections_Generic_List<HashSet<Face>>_TypeInfo);
    FUN_016ec5b8(uVar5,uVar15,0);
    uVar15 = thunk_FUN_00d48444(DG_Tweening_DOTweenModuleUI_<>c__DisplayClass24_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar5,uVar15);
  }
  lVar14 = *param_2;
  lVar13 = *(long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
  *param_5 = 0;
  lVar12 = *param_1;
  if (lVar14 == lVar13) {
    lVar12 = (**(code **)(lVar12 + 0x238))
                       (param_1,param_2,param_3,param_4,param_5,*(undefined8 *)(lVar12 + 0x240));
    return lVar12;
  }
  plVar4 = (long *)(**(code **)(lVar12 + 0x1f8))(param_1,*(undefined8 *)(lVar12 + 0x200));
  uVar5 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x508))
                             (plVar4,param_2,uVar5,param_4,*(undefined8 *)(*plVar4 + 0x510));
  if (plVar4 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)DG_Tweening_ShortcutExtensions_<>c__DisplayClass17_0_TypeInfo + 300);
    if (bVar1 <= *(byte *)(*plVar4 + 300)) {
      plVar11 = plVar4;
      if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)DG_Tweening_ShortcutExtensions_<>c__DisplayClass17_0_TypeInfo) {
        plVar11 = (long *)0x0;
      }
      goto LAB_01fbed54;
    }
  }
  plVar11 = (long *)0x0;
LAB_01fbed54:
  plVar6 = (long *)param_1[7];
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar7 = (**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
  plVar6 = (long *)param_1[7];
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar8 = (**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0));
  plVar6 = (long *)param_1[7];
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  plVar6 = (long *)(**(code **)(*plVar6 + 600))(plVar6,*(undefined8 *)(*plVar6 + 0x260));
  plVar9 = (long *)param_1[7];
  if (plVar9 != (long *)0x0) {
    plVar9 = (long *)(**(code **)(*plVar9 + 0x1f8))(plVar9,*(undefined8 *)(*plVar9 + 0x200));
    puVar2 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    iVar16 = 0;
    do {
      iVar3 = FUN_0178a528(plVar11,0);
      if (iVar3 <= iVar16) {
        uVar7 = (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
        if ((uVar7 & 1) != 0) {
          plVar11 = (long *)(**(code **)(*param_1 + 0x1f8))
                                      (param_1,*(undefined8 *)(*param_1 + 0x200));
          uVar5 = *(undefined8 *)
                   Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
          ;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar5 = FUN_01780344(uVar5,0);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c(uVar5,plVar4);
          }
          plVar11 = (long *)(**(code **)(*plVar11 + 0x508))
                                      (plVar11,plVar4,uVar5,param_4,
                                       *(undefined8 *)(*plVar11 + 0x510));
          puVar2 = Method_Sirenix_Serialization_UnitySerializationUtility_DeserializeUnityObject__;
          if ((plVar11 != (long *)0x0) &&
             (*plVar11 !=
              *(long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
             ) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c();
          }
          lVar12 = *(long *)
                    Method_Sirenix_Serialization_UnitySerializationUtility_DeserializeUnityObject__;
          local_70 = plVar11;
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar12);
            lVar12 = *(long *)puVar2;
          }
          plVar11 = *(long **)(*(long *)(lVar12 + 0xb8) + 0x88);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar12 = (**(code **)(*plVar11 + 0x178))
                             (plVar11,&local_70,param_1,*(undefined8 *)(*plVar11 + 0x180));
          if (lVar12 != 0) {
            return lVar12;
          }
        }
        uVar7 = (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0));
        puVar2 = Method_Sirenix_Serialization_UnitySerializationUtility_DeserializeUnityObject__;
        if ((uVar7 & 1) != 0) {
          lVar12 = *(long *)
                    Method_Sirenix_Serialization_UnitySerializationUtility_DeserializeUnityObject__;
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar12 = *(long *)puVar2;
          }
          plVar11 = *(long **)(*(long *)(lVar12 + 0xb8) + 0x88);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c(0,plVar4);
          }
          lVar12 = (**(code **)(*plVar11 + 0x188))
                             (plVar11,plVar4,param_1,*(undefined8 *)(*plVar11 + 400));
          if (lVar12 != 0) {
            return lVar12;
          }
        }
        *param_5 = (long)plVar4;
        return 0;
      }
      uVar5 = FUN_0178a588(plVar11,iVar16,0);
      if ((uVar7 & 1) != 0) {
        uVar15 = *(undefined8 *)
                  Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
        ;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar15 = FUN_01780344(uVar15,0);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        plVar10 = (long *)(**(code **)(*plVar9 + 0x508))
                                    (plVar9,uVar5,uVar15,param_4,*(undefined8 *)(*plVar9 + 0x510));
        if ((plVar10 != (long *)0x0) &&
           (*plVar10 !=
            *(long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo))
        {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c();
        }
        local_68 = plVar10;
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar12 = (**(code **)(*plVar6 + 0x178))
                           (plVar6,&local_68,param_1[7],*(undefined8 *)(*plVar6 + 0x180));
        if (lVar12 != 0) {
          return lVar12;
        }
      }
      if ((uVar8 & 1) != 0) {
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar12 = (**(code **)(*plVar6 + 0x188))
                           (plVar6,uVar5,param_1[7],*(undefined8 *)(*plVar6 + 400));
        if (lVar12 != 0) {
          return lVar12;
        }
      }
      iVar16 = iVar16 + 1;
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


