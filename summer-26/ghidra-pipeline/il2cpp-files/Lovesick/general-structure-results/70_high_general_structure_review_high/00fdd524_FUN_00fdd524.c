/*
FUNCTION_NAME: FUN_00fdd524
ENTRY_POINT: 00fdd524
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior
*/


undefined8 FUN_00fdd524(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_58;
  
  if ((DAT_03775bf3 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JToken>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<JArray>,_JToken_<ReadFromAsync>d__3>__
                      );
    thunk_FUN_00d48444(OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo);
    thunk_FUN_00d48444(Method_Oculus_Interaction_HandRayInteractorCursorVisual_UpdateVisual__);
    thunk_FUN_00d48444(PTR_DAT_033ebb48);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<BaseInputModule>_MoveNext__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_Universal_LibTessDotNet_PriorityQueue<MeshUtils_Vertex>_Insert__
                      );
    thunk_FUN_00d48444(
                      Method_Unity_XR_CoreUtils_Datums_DatumProperty<Vector3AffordanceTheme,_Vector3AffordanceThemeDatum>__ctor__
                      );
    thunk_FUN_00d48444(
                      Method_RhythmGameStarter_CountDown_<CountDownCoroutine>d__4_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<GraphicsFormat,_Dictionary<FormatUsage,_bool>>_TypeInfo
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<TextureBlender>_ToArray__);
    thunk_FUN_00d48444(Method_TMPro_KerningTable_<>c_<SortKerningPairs>b__7_0__);
    DAT_03775bf3 = 1;
  }
  puVar3 = StringLiteral_302;
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    puVar4 = OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo;
    if (*(long *)(param_1 + 0x30) != 0) {
      local_58 = FUN_0289755c(*(long *)(param_1 + 0x30),0);
      uVar6 = thunk_FUN_00d61fa0(*(undefined8 *)puVar4,&local_58);
      if ((*(long *)(param_1 + 0x30) != 0) &&
         (lVar5 = FUN_02896f34(*(long *)(param_1 + 0x30),0),
         puVar4 = Method_TMPro_KerningTable_<>c_<SortKerningPairs>b__7_0__, lVar5 != 0)) {
        uVar9 = FUN_02898704(lVar5,0);
        uVar6 = FUN_01600b5c(*(undefined8 *)puVar4,uVar6,uVar9,0);
        lVar5 = *(long *)puVar3;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar5);
        }
        FUN_02660dac(uVar6,0);
        lVar5 = *(long *)(param_1 + 0x28);
        if (lVar5 == 0) {
          return 0;
        }
        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
        return 0;
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    lVar11 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar5 = FUN_00ed56f0(0);
    if ((lVar5 != 0) &&
       (uVar6 = FUN_00edf178(lVar5,0,0),
       puVar1 = (undefined8 *)Method_System_Collections_Generic_List<TextureBlender>_ToArray__,
       lVar11 != 0)) {
      uVar9 = *(undefined8 *)(lVar11 + 0x18);
      uVar2 = *(undefined8 *)(lVar11 + 0x20);
      uVar7 = FUN_015ff8a0(*(undefined8 *)(lVar11 + 0x40),0);
      if ((uVar7 & 1) == 0) {
        puVar1 = (undefined8 *)(lVar11 + 0x40);
      }
      uVar12 = *puVar1;
      lVar5 = FUN_00ed56f0(0);
      if ((lVar5 != 0) && (*(long *)(lVar5 + 0x40) != 0)) {
        uVar13 = *(undefined8 *)(*(long *)(lVar5 + 0x40) + 0x90);
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_Oculus_Interaction_HandRayInteractorCursorVisual_UpdateVisual__
                                  );
        if (lVar5 != 0) {
          FUN_017b46ec(lVar5,0);
          *(undefined8 *)(lVar5 + 0x10) = uVar9;
          *(undefined8 *)(lVar5 + 0x18) = uVar2;
          *(undefined8 *)(lVar5 + 0x20) = uVar12;
          *(undefined8 *)(lVar5 + 0x28) = uVar13;
          *(undefined8 *)(lVar5 + 0x30) = uVar6;
          uVar6 = FUN_026ea144(lVar5,0);
          lVar10 = *(long *)puVar3;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar10);
          }
          FUN_02660dac(uVar6,0);
          plVar8 = (long *)FUN_0161b700(0);
          uVar6 = FUN_026ea144(lVar5,0);
          puVar4 = 
          Method_Unity_XR_CoreUtils_Datums_DatumProperty<Vector3AffordanceTheme,_Vector3AffordanceThemeDatum>__ctor__
          ;
          puVar3 = PTR_DAT_033ebb48;
          if (plVar8 != (long *)0x0) {
            uVar6 = (**(code **)(*plVar8 + 600))(plVar8,uVar6,*(undefined8 *)(*plVar8 + 0x260));
            uVar9 = FUN_015f5b28(*(undefined8 *)(lVar11 + 0x28),*(undefined8 *)puVar4,0);
            lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
            puVar3 = Method_System_Collections_Generic_List_Enumerator<BaseInputModule>_MoveNext__;
            if (lVar5 != 0) {
              FUN_0289671c(lVar5,uVar9,
                           *(undefined8 *)
                            Method_UnityEngine_Rendering_Universal_LibTessDotNet_PriorityQueue<MeshUtils_Vertex>_Insert__
                           ,0);
              *(long *)(param_1 + 0x30) = lVar5;
              lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
              puVar3 = 
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JToken>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<JArray>,_JToken_<ReadFromAsync>d__3>__
              ;
              if (lVar11 != 0) {
                FUN_02897dbc(lVar11,uVar6,0);
                FUN_02896cc0(lVar5,lVar11,0);
                lVar11 = *(long *)(param_1 + 0x30);
                lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                if ((lVar5 != 0) && (FUN_02897c90(lVar5,0), lVar11 != 0)) {
                  FUN_02896bb0(lVar11,lVar5,0);
                  if (*(long *)(param_1 + 0x30) != 0) {
                    FUN_02897784(*(long *)(param_1 + 0x30),
                                 *(undefined8 *)
                                  Method_RhythmGameStarter_CountDown_<CountDownCoroutine>d__4_System_Collections_IEnumerator_Reset__
                                 ,*(undefined8 *)
                                   System_Collections_Generic_Dictionary<GraphicsFormat,_Dictionary<FormatUsage,_bool>>_TypeInfo
                                 ,0);
                    if (*(long *)(param_1 + 0x30) != 0) {
                      uVar6 = FUN_0289701c(*(long *)(param_1 + 0x30),0);
                      *(undefined8 *)(param_1 + 0x18) = uVar6;
                      *(undefined4 *)(param_1 + 0x10) = 1;
                      return 1;
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


