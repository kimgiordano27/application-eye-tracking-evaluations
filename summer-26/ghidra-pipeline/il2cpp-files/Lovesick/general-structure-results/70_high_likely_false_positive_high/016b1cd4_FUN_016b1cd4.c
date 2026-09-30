/*
FUNCTION_NAME: FUN_016b1cd4
ENTRY_POINT: 016b1cd4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;ui_interaction;telemetry
EVIDENCE: strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_016b1cd4(undefined8 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  if ((DAT_03778637 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<LightUtility_LightMeshVertex>_Copy__);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_ToList<TriangulationPoint>__);
    thunk_FUN_00d48444(Method_IntroCreditSceneManager_SkipButtonUnpressed__);
    thunk_FUN_00d48444(Method_SoccerBlocker_HideCrowd__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_TaskAwaiter<VRequestResponse<string>>_GetResult__
                      );
    DAT_03778637 = 1;
  }
  local_40 = 0;
  uStack_38 = 0;
  uVar7 = param_1[4];
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar3 = FUN_01789ac0(uVar7,0,0);
  if ((uVar3 & 1) == 0) {
    uVar7 = param_1[5];
    thunk_FUN_00d8e500();
    uVar3 = FUN_0169aa20(uVar7,0,0);
    if ((uVar3 & 1) == 0) {
      plVar8 = (long *)param_1[5];
      if (*(char *)(param_1 + 2) == '\0') {
        thunk_FUN_00d8e500();
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar5 = *(long *)Method_IntroCreditSceneManager_SkipButtonUnpressed__;
        if ((*(byte *)(*plVar8 + 300) < *(byte *)(lVar5 + 300)) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar5 + 300) * 8 + -8) != lVar5))
        {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar8);
        }
        lVar6 = *plVar8;
        if ((*(byte *)(lVar6 + 300) < *(byte *)(lVar5 + 300)) ||
           (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar5 + 300) * 8 + -8) != lVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar8);
        }
        uVar7 = (**(code **)(lVar6 + 600))(plVar8,*(undefined8 *)(lVar6 + 0x260));
      }
      else {
        thunk_FUN_00d8e500();
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar5 = *(long *)Method_System_Linq_Enumerable_ToList<TriangulationPoint>__;
        if ((*(byte *)(*plVar8 + 300) < *(byte *)(lVar5 + 300)) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar5 + 300) * 8 + -8) != lVar5))
        {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar8);
        }
        lVar6 = *plVar8;
        if ((*(byte *)(lVar6 + 300) < *(byte *)(lVar5 + 300)) ||
           (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar5 + 300) * 8 + -8) != lVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar8);
        }
        uVar7 = (**(code **)(lVar6 + 0x268))(plVar8,*(undefined8 *)(lVar6 + 0x270));
      }
      uVar4 = *(undefined8 *)Method_SoccerBlocker_HideCrowd__;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar4 = FUN_01780344(uVar4,0);
      uVar2 = FUN_0178a8c4(uVar7,uVar4,0);
    }
    else {
      uVar2 = 1;
    }
    if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar7 = FUN_017319b4(0);
    uStack_38 = param_1[1];
    local_40 = *param_1;
    uVar9 = param_1[3];
    uVar4 = FUN_016b2064(&local_40,uVar2 & 1);
    FUN_01600ce8(uVar7,*(undefined8 *)
                        Method_System_Runtime_CompilerServices_TaskAwaiter<VRequestResponse<string>>_GetResult__
                 ,uVar9,uVar4,0);
  }
  else {
    uStack_58 = param_1[3];
    local_60 = param_1[2];
    uStack_48 = param_1[5];
    uStack_50 = param_1[4];
    uStack_68 = param_1[1];
    local_70 = *param_1;
    uVar7 = thunk_FUN_00d61fa0(*(undefined8 *)
                                Method_Unity_Collections_NativeArray<LightUtility_LightMeshVertex>_Copy__
                               ,&local_70);
    FUN_017cc6f4(uVar7,0);
  }
  return;
}


