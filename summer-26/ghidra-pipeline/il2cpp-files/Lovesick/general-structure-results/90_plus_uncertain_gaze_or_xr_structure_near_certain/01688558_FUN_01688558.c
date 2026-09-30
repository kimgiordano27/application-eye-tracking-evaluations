/*
FUNCTION_NAME: FUN_01688558
ENTRY_POINT: 01688558
PROGRAM: Lovesick-libil2cpp.so
SCORE: 90
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_01688558(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  undefined8 *puVar14;
  undefined1 local_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((DAT_03778542 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_9958);
    thunk_FUN_00d48444(UnityEngine_Texture2D___TypeInfo);
    thunk_FUN_00d48444(Newtonsoft_Json_JsonReader_State_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_2672);
    thunk_FUN_00d48444(System_Collections_Generic_IList<ProBuilderMesh>_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f2f78);
    thunk_FUN_00d48444(Method_System_Data_Common_UInt32Storage_Aggregate__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_7239);
    thunk_FUN_00d48444(System_Runtime_InteropServices_InAttribute_TypeInfo);
    thunk_FUN_00d48444(Newtonsoft_Json_Linq_JToken_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
                      );
    thunk_FUN_00d48444(Method_TMPro_SetPropertyUtility_SetStruct<char>__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__);
    DAT_03778542 = 1;
  }
  puVar6 = StringLiteral_9958;
  puVar5 = StringLiteral_2672;
  puVar4 = System_Runtime_InteropServices_InAttribute_TypeInfo;
  puVar3 = System_Collections_Generic_IList<ProBuilderMesh>_TypeInfo;
  puVar2 = PTR_DAT_033f2f78;
  switch(param_2) {
  case 1:
    plVar10 = *(long **)(param_1 + 0x68);
    if (plVar10 == (long *)0x0) {
LAB_01688974:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar7 = (**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
    uVar11 = *(undefined8 *)puVar6;
    local_48._0_8_ = CONCAT71(local_48._1_7_,uVar7) & 0xffffffffffffff01;
    break;
  case 2:
    plVar10 = *(long **)(param_1 + 0x68);
    if (plVar10 == (long *)0x0) goto LAB_01688974;
    pcVar13 = *(code **)(*plVar10 + 0x1d8);
    uVar11 = *(undefined8 *)(*plVar10 + 0x1e0);
    puVar14 = (undefined8 *)UnityEngine_Texture2D___TypeInfo;
    goto LAB_01688830;
  case 3:
    plVar10 = *(long **)(param_1 + 0x68);
    if (plVar10 == (long *)0x0) goto LAB_01688974;
    pcVar13 = *(code **)(*plVar10 + 0x1f8);
    uVar11 = *(undefined8 *)(*plVar10 + 0x200);
    puVar14 = (undefined8 *)Newtonsoft_Json_JsonReader_State_TypeInfo;
    goto LAB_01688780;
  default:
    uVar11 = thunk_FUN_00d48444(StringLiteral_3033);
    uVar11 = FUN_00da4fb8(uVar11,1);
    local_48._0_4_ = param_2;
    uVar12 = thunk_FUN_00d48444(
                               RCG_Lovesick_Powers_Wavelength_WavelengthPower_<>c__DisplayClass53_0_TypeInfo
                               );
    uVar12 = thunk_FUN_00d61fa0(uVar12,local_48);
    uVar12 = FUN_017a7f78(uVar12,0);
    FUN_00ac2be8(uVar11);
    FUN_00acb0b4(uVar11,uVar12);
    FUN_00adb25c(uVar11,0,uVar12);
    uVar12 = thunk_FUN_00d48444(Method_OVRResult<OVRPlugin_Result>_From__);
    uVar11 = FUN_017b63dc(uVar12,uVar11,0);
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                      );
    uVar12 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    FUN_01679968(uVar12,uVar11,0);
    uVar11 = thunk_FUN_00d48444(
                               Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<int,_float>_MoveNext__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar12,uVar11);
  case 5:
    local_48 = FUN_016987fc(param_1);
    uVar11 = *(undefined8 *)puVar3;
    break;
  case 6:
    plVar10 = *(long **)(param_1 + 0x68);
    if (plVar10 == (long *)0x0) goto LAB_01688974;
    uVar11 = (**(code **)(*plVar10 + 0x278))(plVar10,*(undefined8 *)(*plVar10 + 0x280));
    local_48._0_8_ = uVar11;
    uVar11 = *(undefined8 *)puVar2;
    break;
  case 7:
    plVar10 = *(long **)(param_1 + 0x68);
    if (plVar10 == (long *)0x0) goto LAB_01688974;
    pcVar13 = *(code **)(*plVar10 + 0x208);
    uVar11 = *(undefined8 *)(*plVar10 + 0x210);
    puVar14 = (undefined8 *)Method_System_Data_Common_UInt32Storage_Aggregate__;
    goto LAB_01688780;
  case 8:
    plVar10 = *(long **)(param_1 + 0x68);
    if (plVar10 == (long *)0x0) goto LAB_01688974;
    pcVar13 = *(code **)(*plVar10 + 0x228);
    uVar11 = *(undefined8 *)(*plVar10 + 0x230);
    puVar14 = (undefined8 *)
              Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
    goto LAB_01688808;
  case 9:
    plVar10 = *(long **)(param_1 + 0x68);
    if (plVar10 == (long *)0x0) goto LAB_01688974;
    pcVar13 = *(code **)(*plVar10 + 0x248);
    uVar11 = *(undefined8 *)(*plVar10 + 0x250);
    puVar14 = (undefined8 *)OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo;
    goto LAB_01688878;
  case 10:
    plVar10 = *(long **)(param_1 + 0x68);
    if (plVar10 == (long *)0x0) goto LAB_01688974;
    pcVar13 = *(code **)(*plVar10 + 0x1d8);
    uVar11 = *(undefined8 *)(*plVar10 + 0x1e0);
    puVar14 = (undefined8 *)StringLiteral_7239;
LAB_01688830:
    uVar7 = (*pcVar13)(plVar10,uVar11);
    uVar11 = *puVar14;
    local_48[0] = uVar7;
    break;
  case 0xb:
    plVar10 = *(long **)(param_1 + 0x68);
    if (plVar10 == (long *)0x0) goto LAB_01688974;
    uVar9 = (**(code **)(*plVar10 + 0x268))(plVar10,*(undefined8 *)(*plVar10 + 0x270));
    uVar11 = *(undefined8 *)puVar4;
    local_48._0_4_ = uVar9;
    break;
  case 0xc:
    plVar10 = *(long **)(param_1 + 0x68);
    if (plVar10 == (long *)0x0) goto LAB_01688974;
    pcVar13 = *(code **)(*plVar10 + 0x248);
    uVar11 = *(undefined8 *)(*plVar10 + 0x250);
    puVar14 = (undefined8 *)Newtonsoft_Json_Linq_JToken_TypeInfo;
    goto LAB_01688878;
  case 0xd:
    uVar11 = FUN_01698984(param_1);
    local_48._0_8_ = uVar11;
    uVar11 = *(undefined8 *)puVar5;
    break;
  case 0xe:
    plVar10 = *(long **)(param_1 + 0x68);
    if (plVar10 == (long *)0x0) goto LAB_01688974;
    pcVar13 = *(code **)(*plVar10 + 0x218);
    uVar11 = *(undefined8 *)(*plVar10 + 0x220);
    puVar14 = (undefined8 *)
              Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
    ;
LAB_01688780:
    uVar8 = (*pcVar13)(plVar10,uVar11);
    uVar11 = *puVar14;
    local_48._0_2_ = uVar8;
    break;
  case 0xf:
    plVar10 = *(long **)(param_1 + 0x68);
    if (plVar10 == (long *)0x0) goto LAB_01688974;
    pcVar13 = *(code **)(*plVar10 + 0x238);
    uVar11 = *(undefined8 *)(*plVar10 + 0x240);
    puVar14 = (undefined8 *)Method_TMPro_SetPropertyUtility_SetStruct<char>__;
LAB_01688808:
    uVar9 = (*pcVar13)(plVar10,uVar11);
    uVar11 = *puVar14;
    local_48._0_4_ = uVar9;
    break;
  case 0x10:
    plVar10 = *(long **)(param_1 + 0x68);
    if (plVar10 == (long *)0x0) goto LAB_01688974;
    pcVar13 = *(code **)(*plVar10 + 600);
    uVar11 = *(undefined8 *)(*plVar10 + 0x260);
    puVar14 = (undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__;
LAB_01688878:
    uVar11 = (*pcVar13)(plVar10,uVar11);
    local_48._0_8_ = uVar11;
    uVar11 = *puVar14;
  }
  thunk_FUN_00d61fa0(uVar11,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


