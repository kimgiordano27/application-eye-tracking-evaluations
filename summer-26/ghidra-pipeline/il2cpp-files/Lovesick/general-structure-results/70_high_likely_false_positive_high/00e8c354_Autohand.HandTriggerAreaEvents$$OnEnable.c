/*
FUNCTION_NAME: Autohand.HandTriggerAreaEvents$$OnEnable
ENTRY_POINT: 00e8c354
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_15;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Autohand_HandTriggerAreaEvents__OnEnable(ulong param_1,long param_2)

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
  long unaff_x20;
  undefined8 uVar12;
  long lVar13;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  if ((param_1 & 1) == 0) {
                    /* try { // try from 00e8c364 to 00f8c38f has its CatchHandler @ 00e8c444 */
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
                    /* try { // try from 00e8c3e8 to 00f8c3ef has its CatchHandler @ 00e8c3f0 */
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<TunnelingVignetteController_ProviderRecord>_Add__
                      );
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e8c3e8 with catch @ 00e8c3f0
                       try { // try from 00e8c3f0 to 00f8c437 has its CatchHandler @ 00e8c288 */
    thunk_FUN_00d48444(Oculus_Platform_Request<AppDownloadResult>_TypeInfo);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e8c344 with catch @ 00e8c400
                        */
    thunk_FUN_00d48444(
                      DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI_TypeInfo
                      );
    thunk_FUN_00d48444(PTR_DAT_033f4d00);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e8c330 with catch @ 00e8c410
                        */
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_RemoveAll__
                      );
    *(undefined1 *)(unaff_x20 + 0xfd6) = 1;
  }
  puVar4 = 
  DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI_TypeInfo;
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  in_stack_00000040 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  in_stack_00000020 = 0;
  lVar13 = *(long *)(param_2 + 0x78);
                    /* try { // try from 00e8c438 to 00f8c43b has its CatchHandler @ 00e8c444 */
  if (lVar13 != 0) {
                    /* try { // try from 00e8c43c to 00f8c457 has its CatchHandler @ 00e8c288 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e8c364 with catch @ 00e8c444
                       catch(type#1 @ 00000000) { ... } // from try @ 00e8c438 with catch @ 00e8c444
                        */
    uVar12 = *(undefined8 *)(lVar13 + 0x40);
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                                DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI_TypeInfo
                              );
    if (lVar9 != 0) {
      FUN_013df2bc(lVar9,param_2,*(undefined8 *)System_Func<byte[],_int,_sbyte>_TypeInfo,0);
      lVar9 = FUN_017b78c8(uVar12,lVar9,0);
      if (lVar9 == 0) {
        *(undefined8 *)(lVar13 + 0x40) = 0;
      }
      else {
        uVar12 = *(undefined8 *)puVar4;
        lVar10 = thunk_FUN_00d6225c(lVar9,uVar12);
        if (lVar10 == 0) {
LAB_00e8c4b0:
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(lVar9,uVar12);
        }
        *(long *)(lVar13 + 0x40) = lVar10;
        uVar12 = *(undefined8 *)puVar4;
        lVar13 = thunk_FUN_00d6225c(lVar9,uVar12);
        if (lVar13 == 0) goto LAB_00e8c4b0;
      }
      uVar12 = *(undefined8 *)(param_2 + 0xe8);
      lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                   Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
      if (lVar13 != 0) {
        FUN_016f27fc(lVar13,param_2,
                     *(undefined8 *)
                      Method_System_Collections_Generic_List<TunnelingVignetteController_ProviderRecord>_Add__
                     ,0);
        FUN_00fe0764(uVar12,lVar13,0);
        puVar8 = StringLiteral_4569;
        puVar7 = StringLiteral_4180;
        puVar6 = StringLiteral_3687;
        puVar5 = 
        Method_System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_RemoveAll__
        ;
        puVar3 = Oculus_Platform_Request<AppDownloadResult>_TypeInfo;
        puVar2 = System_Collections_Generic_IEnumerator<XAttribute>_TypeInfo;
        puVar1 = PTR_DAT_033f4d00;
        if (*(long *)(param_2 + 0x90) != 0) {
          FUN_01323390(*(long *)(param_2 + 0x90),&stack0x00000008,
                       *(undefined8 *)
                        Method_Oculus_Interaction_Interactor<DistanceGrabInteractor,_DistanceGrabInteractable>_set_Selector__
                      );
          in_stack_00000048 = in_stack_00000010;
          in_stack_00000040 = in_stack_00000008;
          in_stack_00000050 = in_stack_00000018;
          while (uVar11 = FUN_012b894c(&stack0x00000040,*(undefined8 *)puVar6), (uVar11 & 1) != 0) {
            lVar13 = FUN_00ac69b8(&stack0x00000040,*(undefined8 *)puVar7);
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
            FUN_013df2bc(lVar13,param_2,*(undefined8 *)puVar3,0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_013df7e0(lVar9,lVar13,*(undefined8 *)puVar5);
          }
          FUN_012b8948(&stack0x00000040,
                       *(undefined8 *)System_Runtime_Remoting_Services_TrackingServices_TypeInfo);
          puVar1 = 
          Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraph_<>c_<BeginProfilingSampler>b__61_0__
          ;
          if (*(long *)(param_2 + 0x98) != 0) {
            FUN_01323390(*(long *)(param_2 + 0x98),&stack0x00000008,
                         *(undefined8 *)StringLiteral_5707);
            in_stack_00000028 = in_stack_00000010;
            in_stack_00000020 = in_stack_00000008;
            in_stack_00000030 = in_stack_00000018;
            do {
              while( true ) {
                uVar11 = FUN_012b894c(&stack0x00000020,*(undefined8 *)puVar2);
                if ((uVar11 & 1) == 0) {
                  FUN_012b8948(&stack0x00000020,
                               *(undefined8 *)UnityEngine_UI_Button_<OnFinishSubmit>d__9_TypeInfo);
                  return;
                }
                lVar13 = FUN_00ac4a70(&stack0x00000020,*(undefined8 *)puVar1);
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                uVar12 = *(undefined8 *)(lVar13 + 0x40);
                lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_013df2bc(lVar9,param_2,*(undefined8 *)puVar8,0);
                lVar9 = FUN_017b78c8(uVar12,lVar9,0);
                if (lVar9 != 0) break;
                *(undefined8 *)(lVar13 + 0x40) = 0;
              }
              uVar12 = *(undefined8 *)puVar4;
              lVar10 = thunk_FUN_00d6225c(lVar9,uVar12);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da544c(lVar9,uVar12);
              }
              *(long *)(lVar13 + 0x40) = lVar10;
              uVar12 = *(undefined8 *)puVar4;
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


