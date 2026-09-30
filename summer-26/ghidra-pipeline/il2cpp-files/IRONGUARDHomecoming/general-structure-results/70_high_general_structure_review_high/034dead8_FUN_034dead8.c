/*
FUNCTION_NAME: FUN_034dead8
ENTRY_POINT: 034dead8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_9;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_034dead8(long *param_1,long param_2,int param_3,uint param_4,uint param_5,int param_6,
                 byte param_7,undefined4 param_8)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte bVar11;
  long *plVar12;
  int local_6c;
  uint local_68;
  undefined4 local_64;
  
  puVar1 = Method_UnityEngine_Vector2_set_Item__;
  puVar8 = Method_UnityEngine_Rendering_ProfilingSampler_Get<RenderGraphProfileId>__;
                    /* try { // try from 034deadc to 035debf3 has its CatchHandler @ 034deadc
                       catch() { ... } // from try @ 034deadc with catch @ 034deadc
                       catch() { ... } // from try @ 034dec20 with catch @ 034deadc
                       catch() { ... } // from try @ 034dec58 with catch @ 034deadc
                       catch() { ... } // from try @ 034decac with catch @ 034deadc */
  if ((DAT_04832dab & 1) == 0) {
    thunk_FUN_01efb3a4(Method_OVRTask_FromGuid<bool>__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Vector3_get_Item__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_ProfilingSampler_Get<RenderGraphProfileId>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Vector2_set_Item__);
    DAT_04832dab = 1;
  }
  local_64 = 0;
  plVar12 = param_1 + 6;
  *plVar12 = *(long *)puVar1;
  thunk_FUN_01f51358(plVar12);
  if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_035aedf8(param_1,0);
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar10 = thunk_FUN_01f117cc();
    uVar7 = thunk_FUN_01efb3a4(Method_System_Globalization_CompareInfo_GetHashCode__);
    FUN_034efd20(uVar10,uVar7,0);
    goto LAB_034df1d4;
  }
  if (*(int *)(param_2 + 0x10) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar10 = thunk_FUN_01f117cc();
    puVar8 = Method_System_Version__ctor__;
LAB_034df028:
    uVar7 = thunk_FUN_01efb3a4(puVar8);
    FUN_034f6754(uVar10,uVar7,0);
  }
  else {
    *(byte *)((long)param_1 + 0x57) = param_7 & 1;
    puVar8 = 
    Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__;
    if (param_6 < 1) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar10 = thunk_FUN_01f117cc();
      uVar7 = thunk_FUN_01efb3a4(
                                Method_System_Linq_Expressions_ExpressionVisitor_VisitAndConvert<ParameterExpression>__
                                );
      puVar8 = Method_Sirenix_Serialization_UnitySerializationUtility_GetCachedUnityReader__;
    }
    else {
      if (param_3 - 1U < 6) {
        if (param_4 - 1 < 3) {
          if ((param_5 & 0xffffffef) < 8) {
            lVar4 = *(long *)
                     Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
            ;
                    /* try { // try from 034debf4 to 035debfb has its CatchHandler @ 034dec2c */
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
                    /* try { // try from 034dec00 to 035dec07 has its CatchHandler @ 034dec24 */
              lVar4 = *(long *)puVar8;
            }
            iVar3 = FUN_03413064(param_2,**(undefined8 **)(lVar4 + 0xb8),0);
                    /* try { // try from 034dec1c to 035dec1f has its CatchHandler @ 034dec28 */
            if (iVar3 == -1) {
                    /* try { // try from 034dec20 to 035dec43 has its CatchHandler @ 034deadc */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 034dec00 with catch @ 034dec24
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 034dec1c with catch @ 034dec28
                        */
              if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 034debf4 with catch @ 034dec2c
                        */
                thunk_FUN_01ee6d7c();
              }
              lVar4 = FUN_034df2e4(param_2);
              uVar5 = FUN_034d1720();
              if ((uVar5 & 1) != 0) {
                uVar7 = thunk_FUN_01efb3a4(Method_UnityEngine_Bindings_NativeHeaderAttribute__ctor__
                                          );
                uVar7 = FUN_033f1a84(uVar7,0);
                uVar10 = FUN_034df964(param_1,lVar4,0);
                uVar7 = FUN_03406290(uVar7,uVar10,0);
                thunk_FUN_01efb3a4(
                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<AttachmentDescriptor>__
                                  );
                uVar10 = thunk_FUN_01f117cc();
                FUN_03588d2c(uVar10,uVar7,0);
LAB_034df178:
                uVar7 = thunk_FUN_01efb3a4(Method_UnityEngine_UI_VertexHelper_FillMesh__);
                    /* WARNING: Subroutine does not return */
                FUN_01f08910(uVar10,uVar7);
              }
                    /* try { // try from 034dec44 to 035dec57 has its CatchHandler @ 034deca4 */
              if (((param_4 & 1) == 0) || (param_3 != 6)) {
                    /* try { // try from 034dec58 to 035dec8f has its CatchHandler @ 034deadc */
                if ((param_3 - 3U < 2) || ((param_4 >> 1 & 1) != 0)) {
                  FUN_03430228(0);
                  if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  lVar6 = FUN_034d30b4(lVar4);
                  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                    /* try { // try from 034dec90 to 035dec9f has its CatchHandler @ 034deca0 */
                  if (0 < *(int *)(lVar6 + 0x10)) {
                    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 034dec90 with catch @ 034deca0 */
                      thunk_FUN_01ee6d7c();
                    }
                    /* catch() { ... } // from try @ 034dec44 with catch @ 034deca4 */
                    /* try { // try from 034deca8 to 035decab has its CatchHandler @ 034decb4 */
                    FUN_034d1098(lVar6);
                    /* try { // try from 034decac to 035decb7 has its CatchHandler @ 034deadc */
                    uVar5 = FUN_034d1720();
                    if ((uVar5 & 1) == 0) {
                      uVar7 = thunk_FUN_01efb3a4(Method_System_Version_op_LessThanOrEqual__);
                      uVar7 = FUN_033f1a84(uVar7,0);
                      if ((param_7 & 1) == 0) {
                        lVar6 = thunk_FUN_01efb3a4(
                                                  Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                                                  );
                        if (*(int *)(lVar6 + 0xe0) == 0) {
                          thunk_FUN_01ee6d7c();
                        }
                        lVar6 = FUN_034d1098(lVar4);
                      }
                      uVar7 = FUN_03406290(uVar7,lVar6,0);
                      thunk_FUN_01efb3a4(
                                        Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector3>__
                                        );
                      uVar10 = thunk_FUN_01f117cc();
                      FUN_034c6a34(uVar10,uVar7,0);
                      goto LAB_034df178;
                    }
                  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034deca8 with catch @ 034decb4
                        */
                  puVar8 = Method_OVRTask_FromGuid<bool>__;
                  if ((param_7 & 1) == 0) {
                    *plVar12 = lVar4;
                    thunk_FUN_01f51358(plVar12,lVar4);
                  }
                  puVar1 = Method_UnityEngine_Rendering_ProfilingSampler_Get<RenderGraphProfileId>__
                  ;
                  if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  uVar7 = FUN_034dfa0c(lVar4,param_3,param_4,param_5 & 0xffffffef,param_8,&local_64)
                  ;
                  uVar5 = FUN_035ad140(uVar7,**(undefined8 **)(*(long *)puVar8 + 0xb8),0);
                  if ((uVar5 & 1) == 0) {
                    lVar4 = thunk_FUN_01f117cc(*(undefined8 *)Method_UnityEngine_Vector3_get_Item__)
                    ;
                    FUN_0340c4f0(lVar4,uVar7,0,0);
                    plVar12 = param_1 + 7;
                    *plVar12 = lVar4;
                    thunk_FUN_01f51358(plVar12,lVar4);
                    *(uint *)(param_1 + 10) = param_4;
                    *(undefined1 *)((long)param_1 + 0x54) = 1;
                    lVar4 = *plVar12;
                    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    iVar3 = FUN_034e0264(lVar4,&local_64);
                    if (iVar3 == 1) {
                      *(undefined1 *)((long)param_1 + 0x56) = 1;
                      bVar11 = (byte)((uint)param_8 >> 0x1e) & 1;
                    }
                    else {
                      bVar11 = 0;
                      *(undefined1 *)((long)param_1 + 0x56) = 0;
                    }
                    *(byte *)((long)param_1 + 0x55) = bVar11;
                    if (((param_4 == 1) && (param_6 == 0x1000)) && (iVar3 == 1)) {
                      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                        thunk_FUN_01ee6d7c();
                      }
                      lVar4 = (**(code **)(*param_1 + 0x1e8))
                                        (param_1,*(undefined8 *)(*param_1 + 0x1f0));
                      if (lVar4 < 0x1000) {
                        param_6 = (int)lVar4;
                        if (lVar4 < 0x3e9) {
                          param_6 = 1000;
                        }
                      }
                      else {
                        param_6 = 0x1000;
                      }
                    }
                    FUN_034e039c(param_1,param_6,0);
                    if (param_3 == 6) {
                      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                        thunk_FUN_01ee6d7c();
                      }
                      (**(code **)(*param_1 + 0x308))(param_1,0,2,*(undefined8 *)(*param_1 + 0x310))
                      ;
                      lVar4 = (**(code **)(*param_1 + 0x1f8))
                                        (param_1,*(undefined8 *)(*param_1 + 0x200));
                    }
                    else {
                      lVar4 = 0;
                    }
                    param_1[9] = lVar4;
                    return;
                  }
                  uVar7 = System_Threading_Tasks_DebuggerSupport__RemoveFromActiveTasksNonInlined
                                    (param_1,lVar4);
                  uVar2 = local_64;
                  thunk_FUN_01efb3a4(Method_OVRTask_FromGuid<bool>__);
                  FUN_01bc4c70();
                  uVar10 = FUN_034dfb20(uVar7,uVar2);
                  goto LAB_034df1d4;
                }
                uVar7 = thunk_FUN_01efb3a4(Method_System_Version_ToCachedStringBuilder__);
                uVar7 = FUN_033f1a84(uVar7,0);
                local_68 = param_4;
                uVar10 = thunk_FUN_01efb3a4(Method_System_Version_TryParseComponent__);
                uVar10 = thunk_FUN_01f113fc(uVar10,&local_68);
                local_6c = param_3;
                uVar9 = thunk_FUN_01efb3a4(Method_System_Version_op_LessThan__);
                uVar9 = thunk_FUN_01f113fc(uVar9,&local_6c);
                uVar7 = FUN_0340f2f0(uVar7,uVar10,uVar9,0);
                thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
                uVar10 = thunk_FUN_01f117cc();
                FUN_034f6754(uVar10,uVar7,0);
                goto LAB_034df178;
              }
              thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
              uVar10 = thunk_FUN_01f117cc();
              puVar8 = Method_System_Version_ParseVersion__;
            }
            else {
              thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
              uVar10 = thunk_FUN_01f117cc();
              puVar8 = Method_System_Version_Parse__;
            }
            goto LAB_034df028;
          }
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
          uVar10 = thunk_FUN_01f117cc();
          puVar8 = Method_System_Version_CompareTo__;
        }
        else {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
          uVar10 = thunk_FUN_01f117cc();
          puVar8 = 
          Method_Unity_VisualScripting_UnityOnScrollbarValueChangedMessageListener_<Start>b__0_0__;
        }
      }
      else {
        if ((param_7 & 1) != 0) {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
          uVar10 = thunk_FUN_01f117cc();
          uVar7 = thunk_FUN_01efb3a4(
                                    Method_UnityEngine_Rendering_ScriptableRenderContext_ExecuteCommandBufferAsync__
                                    );
          uVar9 = thunk_FUN_01efb3a4(
                                    Method_Unity_VisualScripting_UnityOnSliderValueChangedMessageListener_<Start>b__0_0__
                                    );
          FUN_034efd98(uVar10,uVar7,uVar9,0);
          goto LAB_034df1d4;
        }
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
        uVar10 = thunk_FUN_01f117cc();
        puVar8 = Method_UnityEngine_Rendering_ScriptableRenderContext_ExecuteCommandBufferAsync__;
      }
      uVar7 = thunk_FUN_01efb3a4(puVar8);
      puVar8 = Method_Unity_VisualScripting_UnityOnSliderValueChangedMessageListener_<Start>b__0_0__
      ;
    }
    uVar9 = thunk_FUN_01efb3a4(puVar8);
    FUN_034f3578(uVar10,uVar7,uVar9,0);
  }
LAB_034df1d4:
  uVar7 = thunk_FUN_01efb3a4(Method_UnityEngine_UI_VertexHelper_FillMesh__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar10,uVar7);
}


