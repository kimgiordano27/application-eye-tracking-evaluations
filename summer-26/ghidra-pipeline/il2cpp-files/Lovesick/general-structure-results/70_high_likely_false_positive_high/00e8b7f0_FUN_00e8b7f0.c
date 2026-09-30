/*
FUNCTION_NAME: FUN_00e8b7f0
ENTRY_POINT: 00e8b7f0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_15;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_2
*/


void FUN_00e8b7f0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
                    /* try { // try from 00e8b7f0 to 00f8b843 has its CatchHandler @ 00e8b6f8 */
  if ((DAT_03774fd5 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(System_Runtime_Remoting_Services_TrackingServices_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_UI_Button_<OnFinishSubmit>d__9_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_IEnumerator<XAttribute>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_3687);
    thunk_FUN_00d48444(StringLiteral_4180);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraph_<>c_<BeginProfilingSampler>b__61_0__
                      );
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Interactor<DistanceGrabInteractor,_DistanceGrabInteractable>_set_Selector__
                      );
    thunk_FUN_00d48444(StringLiteral_5707);
    thunk_FUN_00d48444(StringLiteral_4569);
    thunk_FUN_00d48444(System_Func<byte[],_int,_sbyte>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<TunnelingVignetteController_ProviderRecord>_Add__
                      );
    thunk_FUN_00d48444(Oculus_Platform_Request<AppDownloadResult>_TypeInfo);
    thunk_FUN_00d48444(
                      DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI_TypeInfo
                      );
    thunk_FUN_00d48444(PTR_DAT_033f4d00);
    thunk_FUN_00d48444(Oculus_Interaction_ArcTubeVisual_TypeInfo);
    DAT_03774fd5 = 1;
  }
  puVar5 = 
  DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI_TypeInfo;
  uStack_78 = 0;
  local_70 = 0;
  local_80 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_a0 = 0;
  lVar13 = *(long *)(param_1 + 0x78);
  if (lVar13 != 0) {
    uVar12 = *(undefined8 *)(lVar13 + 0x40);
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                                DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI_TypeInfo
                              );
    if (lVar9 != 0) {
      FUN_013df2bc(lVar9,param_1,*(undefined8 *)System_Func<byte[],_int,_sbyte>_TypeInfo,0);
      lVar9 = FUN_017b76bc(uVar12,lVar9,0);
      if (lVar9 == 0) {
        *(undefined8 *)(lVar13 + 0x40) = 0;
      }
      else {
        uVar12 = *(undefined8 *)puVar5;
        lVar10 = thunk_FUN_00d6225c(lVar9,uVar12);
        if (lVar10 == 0) {
LAB_00e8b970:
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(lVar9,uVar12);
        }
        *(long *)(lVar13 + 0x40) = lVar10;
        uVar12 = *(undefined8 *)puVar5;
        lVar13 = thunk_FUN_00d6225c(lVar9,uVar12);
        if (lVar13 == 0) goto LAB_00e8b970;
      }
      uVar12 = *(undefined8 *)(param_1 + 0xe8);
      lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                   Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
      if (lVar13 != 0) {
        FUN_016f27fc(lVar13,param_1,
                     *(undefined8 *)
                      Method_System_Collections_Generic_List<TunnelingVignetteController_ProviderRecord>_Add__
                     ,0);
        FUN_00fe0700(uVar12,lVar13,0);
        puVar8 = StringLiteral_4569;
        puVar7 = StringLiteral_4180;
        puVar6 = StringLiteral_3687;
        puVar4 = Oculus_Interaction_ArcTubeVisual_TypeInfo;
        puVar3 = Oculus_Platform_Request<AppDownloadResult>_TypeInfo;
        puVar2 = System_Collections_Generic_IEnumerator<XAttribute>_TypeInfo;
        puVar1 = PTR_DAT_033f4d00;
        if (*(long *)(param_1 + 0x90) != 0) {
          FUN_01323390(*(long *)(param_1 + 0x90),&local_b8,
                       *(undefined8 *)
                        Method_Oculus_Interaction_Interactor<DistanceGrabInteractor,_DistanceGrabInteractable>_set_Selector__
                      );
          uStack_78 = uStack_b0;
          local_80 = local_b8;
          local_70 = local_a8;
          while (uVar11 = FUN_012b894c(&local_80,*(undefined8 *)puVar6), (uVar11 & 1) != 0) {
            lVar13 = FUN_00ac69b8(&local_80,*(undefined8 *)puVar7);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            lVar9 = *(long *)(lVar13 + 0x20);
            lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_013df2bc(lVar13,param_1,*(undefined8 *)puVar3,0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_013df780(lVar9,lVar13,*(undefined8 *)puVar4);
          }
          FUN_012b8948(&local_80,
                       *(undefined8 *)System_Runtime_Remoting_Services_TrackingServices_TypeInfo);
          puVar1 = 
          Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraph_<>c_<BeginProfilingSampler>b__61_0__
          ;
          if (*(long *)(param_1 + 0x98) != 0) {
            FUN_01323390(*(long *)(param_1 + 0x98),&local_b8,*(undefined8 *)StringLiteral_5707);
            uStack_98 = uStack_b0;
            local_a0 = local_b8;
            local_90 = local_a8;
            do {
              while( true ) {
                uVar11 = FUN_012b894c(&local_a0,*(undefined8 *)puVar2);
                if ((uVar11 & 1) == 0) {
                  FUN_012b8948(&local_a0,
                               *(undefined8 *)UnityEngine_UI_Button_<OnFinishSubmit>d__9_TypeInfo);
                  return;
                }
                lVar13 = FUN_00ac4a70(&local_a0,*(undefined8 *)puVar1);
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                uVar12 = *(undefined8 *)(lVar13 + 0x40);
                lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_013df2bc(lVar9,param_1,*(undefined8 *)puVar8,0);
                lVar9 = FUN_017b76bc(uVar12,lVar9,0);
                if (lVar9 != 0) break;
                *(undefined8 *)(lVar13 + 0x40) = 0;
              }
              uVar12 = *(undefined8 *)puVar5;
              lVar10 = thunk_FUN_00d6225c(lVar9,uVar12);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da544c(lVar9,uVar12);
              }
              *(long *)(lVar13 + 0x40) = lVar10;
              uVar12 = *(undefined8 *)puVar5;
              lVar13 = thunk_FUN_00d6225c(lVar9,uVar12);
            } while (lVar13 != 0);
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(lVar9,uVar12);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


