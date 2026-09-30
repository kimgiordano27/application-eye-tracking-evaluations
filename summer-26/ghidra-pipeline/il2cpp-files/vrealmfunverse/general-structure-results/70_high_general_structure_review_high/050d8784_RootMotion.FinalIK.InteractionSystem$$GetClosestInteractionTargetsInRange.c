/*
FUNCTION_NAME: RootMotion.FinalIK.InteractionSystem$$GetClosestInteractionTargetsInRange
ENTRY_POINT: 050d8784
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_21;strong_file_logging_hits_2
*/


void RootMotion_FinalIK_InteractionSystem__GetClosestInteractionTargetsInRange
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long unaff_x19;
  long unaff_x20;
  long *plVar12;
  int iVar13;
  long lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined1 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined1 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined1 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  byte bStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined8 uStack0000000000000084;
  undefined4 uStack0000000000000098;
  byte bStack000000000000009c;
  byte bStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined4 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined4 in_stack_000000e8;
  
  FUN_02b3c81c();
  FUN_02b3c81c(UnityEngine_Rendering_CameraCaptureBridge_TypeInfo);
  FUN_02b3c81c(UnityEngine_Rendering_CameraHistoryItem_TypeInfo);
  FUN_02b3c81c(System_Linq_Expressions_Block4_TypeInfo);
  FUN_02b3c81c(UnityEngine_Rendering_CameraProperties_TypeInfo);
  FUN_02b3c81c(System_Linq_Expressions_Block5_TypeInfo);
  FUN_02b3c81c(Oculus_Platform_Models_BlockedUser_TypeInfo);
  FUN_02b3c81c(UnityEngine_Rendering_Universal_CameraRenderType_TypeInfo);
  FUN_02b3c81c(UnityEngine_UIElements_CameraScreenRaycaster_TypeInfo);
  FUN_02b3c81c(UnityEngine_Rendering_Universal_CameraTypeUtility_TypeInfo);
  FUN_02b3c81c(OVR_OpenVR_CameraVideoStreamFrameHeader_t_TypeInfo);
  FUN_02b3c81c(System_Threading_CancellationCallbackCoreWorkArguments_TypeInfo);
  FUN_02b3c81c(System_Threading_CancellationCallbackInfo_TypeInfo);
  FUN_02b3c81c(System_Threading_CancellationToken_TypeInfo);
  FUN_02b3c81c(Oculus_Platform_Models_BlockedUserList_TypeInfo);
  FUN_02b3c81c(System_Threading_CancellationTokenRegistration_TypeInfo);
  FUN_02b3c81c(System_Threading_CancellationTokenSource_TypeInfo);
  FUN_02b3c81c(UnityEngine_Canvas_TypeInfo);
  FUN_02b3c81c(Oculus_Interaction_Body_Input_BodyJointsCache_TypeInfo);
  FUN_02b3c81c(Oculus_Interaction_UnityCanvas_CanvasCylinder_TypeInfo);
  FUN_02b3c81c(UnityEngine_CanvasGroup_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x873) = 1;
  puVar1 = PTR_DAT_06323680;
  plVar12 = (long *)(unaff_x19 + 0x30);
  if (*plVar12 != 0) {
    FUN_04c15a00(*plVar12,0,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (DAT_066c771a == '\0') {
      FUN_02b3c81c(PTR_DAT_06323680);
      DAT_066c771a = '\x01';
    }
    puVar2 = System_ParameterizedStrings_FormatParam___TypeInfo;
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar5 = *(long *)puVar1;
    }
    in_stack_000000d8 = *(undefined8 *)puVar2;
    uVar15 = *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 0x10);
    in_stack_000000e0 = 0xffffffffffffffff;
    in_stack_000000e8 = uVar15;
    uVar6 = FUN_04db1580(&stack0x000000d8,0);
    if (*plVar12 != 0) {
      FUN_04c17600(*plVar12,*(undefined8 *)Oculus_Platform_Models_BlockedUserList_TypeInfo,uVar6,0);
      if (DAT_066c93af == '\0') {
        FUN_02b3c81c(PTR_DAT_06323680);
        DAT_066c93af = '\x01';
      }
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar5 = *(long *)puVar1;
      }
      in_stack_000000c0 = *(undefined8 *)puVar2;
      in_stack_000000d0 = *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 0x14);
      in_stack_000000c8 = 0xffffffffffffffff;
      uVar6 = FUN_04db1580(&stack0x000000c0,0);
      puVar1 = System_Runtime_Remoting_Messaging_CallContextRemotingData_TypeInfo;
      if (*plVar12 != 0) {
        FUN_04c17600(*plVar12,*(undefined8 *)System_Linq_Expressions_Block5_TypeInfo,uVar6,0);
        lVar5 = *plVar12;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if ((lVar5 != 0) &&
           (FUN_04c17600(lVar5,*(undefined8 *)Oculus_Interaction_Body_Input_BodyJointsCache_TypeInfo
                         ,**(undefined8 **)(*(long *)puVar1 + 0xb8),0),
           *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) != 0)) {
          FUN_050d9274();
          lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
          if (lVar5 != 0) {
            FUN_050d9304(lVar5,plVar12);
            **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar6;
            thunk_FUN_02bb0e9c(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar6);
            uStack00000000000000bc = FUN_050384ac(uVar15,0);
            puVar1 = PTR_DAT_06312310;
            lVar5 = *plVar12;
            uVar17 = param_3;
            uVar16 = param_2;
            uVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                              (*(undefined8 *)(PTR_DAT_06312310 + 0x78),(long)&stack0x000000b8 + 4);
            uStack00000000000000b8 = param_2;
            uVar7 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                              (*(undefined8 *)(puVar1 + 0x78),&stack0x000000b8);
            uStack00000000000000b4 = param_3;
            uVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                              (*(undefined8 *)(puVar1 + 0x78),(long)&stack0x000000b0 + 4);
            puVar2 = PTR_DAT_06313048;
            if (lVar5 != 0) {
              FUN_04c1813c(lVar5,*(undefined8 *)Oculus_Platform_Models_BlockedUser_TypeInfo,uVar6,
                           uVar7,uVar8,0);
              uVar15 = FUN_05038f6c(uVar15,0);
              lVar14 = *plVar12;
              plVar9 = (long *)FUN_02b3c908(*(undefined8 *)puVar2,4);
              uStack00000000000000b0 = uVar15;
              lVar5 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                (*(undefined8 *)(puVar1 + 0x78),&stack0x000000b0);
              if (plVar9 != (long *)0x0) {
                if ((lVar5 != 0) &&
                   (lVar10 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0)
                   ) {
LAB_050d9268:
                  uVar6 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
                  FUN_02b3c988(uVar6,0);
                }
                if ((int)plVar9[3] != 0) {
                  plVar9[4] = lVar5;
                  thunk_FUN_02bb0e9c(plVar9 + 4,lVar5);
                  uStack00000000000000ac = uVar16;
                  lVar5 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                    (*(undefined8 *)(puVar1 + 0x78),(long)&stack0x000000a8 + 4);
                  if ((lVar5 != 0) &&
                     (lVar10 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar9 + 0x40)),
                     lVar10 == 0)) goto LAB_050d9268;
                  if ((*(uint *)(plVar9 + 3) & 0xfffffffe) != 0) {
                    plVar9[5] = lVar5;
                    thunk_FUN_02bb0e9c(plVar9 + 5,lVar5);
                    uStack00000000000000a8 = uVar17;
                    lVar5 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                      (*(undefined8 *)(puVar1 + 0x78),&stack0x000000a8);
                    if ((lVar5 != 0) &&
                       (lVar10 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar9 + 0x40)),
                       lVar10 == 0)) goto LAB_050d9268;
                    if (2 < *(uint *)(plVar9 + 3)) {
                      plVar9[6] = lVar5;
                      thunk_FUN_02bb0e9c(plVar9 + 6,lVar5);
                      uStack00000000000000a4 = param_4;
                      lVar5 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                        (*(undefined8 *)(puVar1 + 0x78),(long)&stack0x000000a0 + 4);
                      if ((lVar5 != 0) &&
                         (lVar10 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar9 + 0x40)),
                         lVar10 == 0)) goto LAB_050d9268;
                      if ((*(uint *)(plVar9 + 3) & 0xfffffffc) != 0) {
                        plVar9[7] = lVar5;
                        thunk_FUN_02bb0e9c(plVar9 + 7,lVar5);
                        puVar2 = PTR_DAT_0631fad8;
                        if (lVar14 != 0) {
                          FUN_04c1819c(lVar14,*(undefined8 *)System_Linq_Expressions_Block4_TypeInfo
                                       ,plVar9,0);
                          lVar5 = *plVar12;
                          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                            thunk_FUN_02b9ad44();
                          }
                          bStack00000000000000a0 = FUN_050648c4(0);
                          bStack00000000000000a0 = bStack00000000000000a0 & 1;
                          uVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                            (*(undefined8 *)(puVar1 + 0x28),&stack0x000000a0);
                          if (lVar5 != 0) {
                            FUN_04c17600(lVar5,*(undefined8 *)
                                                UnityEngine_UIElements_CallbackEventHandler_TypeInfo
                                         ,uVar6,0);
                            bStack000000000000009c = FUN_05064a4c(0xffffffff,0,unaff_x19 + 0x38,0);
                            bStack000000000000009c = bStack000000000000009c & 1;
                            lVar5 = *(long *)(unaff_x19 + 0x30);
                            uVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                              (*(undefined8 *)(puVar1 + 0x28),
                                               (long)&stack0x00000098 + 4);
                            puVar2 = System_Linq_Expressions_CachedReflectionInfo_TypeInfo;
                            if (lVar5 != 0) {
                              FUN_04c17600(lVar5,*(undefined8 *)
                                                  System_Runtime_InteropServices_CallingConvention_TypeInfo
                                           ,uVar6,0);
                              uStack0000000000000098 = *(undefined4 *)(unaff_x19 + 0x38);
                              lVar5 = *plVar12;
                              uVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                                (*(undefined8 *)puVar2,&stack0x00000098);
                              puVar3 = PTR_DAT_06320cb8;
                              if (lVar5 != 0) {
                                FUN_04c17600(lVar5,*(undefined8 *)
                                                                                                        
                                                  UnityEngine_Rendering_CameraCaptureBridge_TypeInfo
                                             ,uVar6,0);
                                in_stack_00000070 = *(undefined8 *)(unaff_x19 + 0x3c);
                                uStack0000000000000084 = *(undefined8 *)(unaff_x19 + 0x50);
                                lVar5 = *(long *)(unaff_x19 + 0x30);
                                uStack0000000000000078 =
                                     (undefined4)*(undefined8 *)(unaff_x19 + 0x44);
                                uStack000000000000007c =
                                     (undefined4)*(undefined8 *)(unaff_x19 + 0x48);
                                uStack0000000000000080 =
                                     (undefined4)((ulong)*(undefined8 *)(unaff_x19 + 0x48) >> 0x20);
                                uVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                                  (*(undefined8 *)puVar3,&stack0x00000070);
                                puVar4 = System_Runtime_CompilerServices_CallSiteBinder_TypeInfo;
                                if (lVar5 != 0) {
                                  FUN_04c17600(lVar5,*(undefined8 *)
                                                                                                            
                                                  UnityEngine_Rendering_CameraProperties_TypeInfo,
                                               uVar6,0);
                                  uStack000000000000006c = *(undefined4 *)(unaff_x19 + 0x98);
                                  lVar5 = *(long *)(unaff_x19 + 0x30);
                                  uVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                                    (*(undefined8 *)puVar4,
                                                     (long)&stack0x00000068 + 4);
                                  if (lVar5 != 0) {
                                    FUN_04c17600(lVar5,*(undefined8 *)
                                                                                                                
                                                  UnityEngine_Rendering_Universal_CameraRenderType_TypeInfo
                                                 ,uVar6,0);
                                    bStack0000000000000068 =
                                         FUN_05064a4c(0xffffffff,1,unaff_x19 + 0xb8,0);
                                    bStack0000000000000068 = bStack0000000000000068 & 1;
                                    lVar5 = *(long *)(unaff_x19 + 0x30);
                                    uVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                                      (*(undefined8 *)(puVar1 + 0x28),
                                                       &stack0x00000068);
                                    if (lVar5 != 0) {
                                      FUN_04c17600(lVar5,*(undefined8 *)
                                                                                                                    
                                                  System_Threading_CancellationCallbackCoreWorkArguments_TypeInfo
                                                  ,uVar6,0);
                                      in_stack_00000060._4_4_ = *(undefined4 *)(unaff_x19 + 0xb8);
                                      lVar5 = *plVar12;
                                      uVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                                        (*(undefined8 *)puVar2,
                                                         (long)&stack0x00000060 + 4);
                                      if (lVar5 != 0) {
                                        FUN_04c17600(lVar5,*(undefined8 *)
                                                                                                                        
                                                  System_Threading_CancellationTokenSource_TypeInfo,
                                                  uVar6,0);
                                        in_stack_00000040 = *(undefined8 *)(unaff_x19 + 0xbc);
                                        uStack0000000000000054 = *(undefined8 *)(unaff_x19 + 0xd0);
                                        lVar5 = *(long *)(unaff_x19 + 0x30);
                                        uStack0000000000000048 =
                                             (undefined4)*(undefined8 *)(unaff_x19 + 0xc4);
                                        uStack000000000000004c =
                                             (undefined4)*(undefined8 *)(unaff_x19 + 200);
                                        uStack0000000000000050 =
                                             (undefined4)
                                             ((ulong)*(undefined8 *)(unaff_x19 + 200) >> 0x20);
                                        uVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                                          (*(undefined8 *)puVar3,&stack0x00000040);
                                        if (lVar5 != 0) {
                                          FUN_04c17600(lVar5,*(undefined8 *)
                                                                                                                            
                                                  System_Threading_CancellationToken_TypeInfo,uVar6,
                                                  0);
                                          uStack000000000000003c =
                                               *(undefined4 *)(unaff_x19 + 0x118);
                                          lVar5 = *(long *)(unaff_x19 + 0x30);
                                          uVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                                            (*(undefined8 *)puVar4,
                                                             (long)&stack0x00000038 + 4);
                                          if (lVar5 != 0) {
                                            FUN_04c17600(lVar5,*(undefined8 *)
                                                                                                                                
                                                  UnityEngine_UIElements_CameraScreenRaycaster_TypeInfo
                                                  ,uVar6,0);
                                            uStack0000000000000038 =
                                                 *(undefined1 *)(unaff_x19 + 0x188);
                                            lVar5 = *(long *)(unaff_x19 + 0x30);
                                            uVar6 = 
                                                  DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                                            (*(undefined8 *)(puVar1 + 0x28),
                                                             &stack0x00000038);
                                            puVar2 = 
                                            System_Runtime_Remoting_Messaging_CallContextSecurityData_TypeInfo
                                            ;
                                            if (lVar5 != 0) {
                                              FUN_04c17600(lVar5,*(undefined8 *)
                                                                                                                                    
                                                  Newtonsoft_Json_Serialization_CamelCaseNamingStrategy_TypeInfo
                                                  ,uVar6,0);
                                              uStack0000000000000034 =
                                                   *(undefined4 *)(unaff_x19 + 0x138);
                                              lVar5 = *(long *)(unaff_x19 + 0x30);
                                              uVar6 = 
                                                  DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                                            (*(undefined8 *)puVar2,
                                                             (long)&stack0x00000030 + 4);
                                              if (lVar5 != 0) {
                                                FUN_04c17600(lVar5,*(undefined8 *)
                                                                                                                                        
                                                  UnityEngine_Rendering_CameraHistoryItem_TypeInfo,
                                                  uVar6,0);
                                                uStack0000000000000030 =
                                                     *(undefined4 *)(unaff_x19 + 0x13c);
                                                lVar5 = *(long *)(unaff_x19 + 0x30);
                                                uVar6 = 
                                                  DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                                            (*(undefined8 *)(puVar1 + 0x50),
                                                             &stack0x00000030);
                                                if (lVar5 != 0) {
                                                  FUN_04c17600(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Oculus_Platform_Callback_TypeInfo,uVar6,0);
                                                  uStack000000000000002c =
                                                       *(undefined1 *)(unaff_x19 + 0x189);
                                                  lVar5 = *(long *)(unaff_x19 + 0x30);
                                                  uVar6 = 
                                                  DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                                            (*(undefined8 *)(puVar1 + 0x28),
                                                             (long)&stack0x00000028 + 4);
                                                  if (lVar5 != 0) {
                                                    FUN_04c17600(lVar5,*(undefined8 *)
                                                                                                                                                
                                                  Oculus_Interaction_UnityCanvas_CanvasCylinder_TypeInfo
                                                  ,uVar6,0);
                                                  uStack0000000000000028 =
                                                       *(undefined4 *)(unaff_x19 + 0x158);
                                                  lVar5 = *(long *)(unaff_x19 + 0x30);
                                                  uVar6 = 
                                                  DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                                            (*(undefined8 *)puVar2,&stack0x00000028)
                                                  ;
                                                  if (lVar5 != 0) {
                                                    FUN_04c17600(lVar5,*(undefined8 *)
                                                                                                                                                
                                                  UnityEngine_CanvasGroup_TypeInfo,uVar6,0);
                                                  uStack0000000000000024 =
                                                       *(undefined4 *)(unaff_x19 + 0x15c);
                                                  lVar5 = *(long *)(unaff_x19 + 0x30);
                                                  uVar6 = 
                                                  DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                                            (*(undefined8 *)(puVar1 + 0x50),
                                                             (long)&stack0x00000020 + 4);
                                                  if (lVar5 != 0) {
                                                    FUN_04c17600(lVar5,*(undefined8 *)
                                                                        UnityEngine_Canvas_TypeInfo,
                                                                 uVar6,0);
                                                    uStack0000000000000020 =
                                                         *(undefined1 *)(unaff_x19 + 0x18a);
                                                    lVar5 = *(long *)(unaff_x19 + 0x30);
                                                    uVar6 = 
                                                  DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                                            (*(undefined8 *)(puVar1 + 0x28),
                                                             &stack0x00000020);
                                                  if (lVar5 != 0) {
                                                    FUN_04c17600(lVar5,*(undefined8 *)
                                                                                                                                                
                                                  System_Threading_CancellationCallbackInfo_TypeInfo
                                                  ,uVar6,0);
                                                  puVar2 = 
                                                  System_Globalization_CalendarData_TypeInfo;
                                                  if (*(long *)(unaff_x19 + 0x178) != 0) {
                                                    uStack000000000000001c =
                                                         *(undefined4 *)
                                                          (*(long *)(unaff_x19 + 0x178) + 0x10);
                                                    lVar5 = *(long *)(unaff_x19 + 0x30);
                                                    uVar6 = 
                                                  DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Globalization_CalendarData_TypeInfo,
                                                  (long)&stack0x00000018 + 4);
                                                  if (lVar5 != 0) {
                                                    FUN_04c17600(lVar5,*(undefined8 *)
                                                                                                                                                
                                                  System_Runtime_CallbackException_TypeInfo,uVar6,0)
                                                  ;
                                                  if (*(long *)(unaff_x19 + 0x178) != 0) {
                                                    uStack0000000000000018 =
                                                         *(undefined4 *)
                                                          (*(long *)(unaff_x19 + 0x178) + 0x14);
                                                    lVar5 = *(long *)(unaff_x19 + 0x30);
                                                    uVar6 = 
                                                  DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                                            (*(undefined8 *)(puVar1 + 0x50),
                                                             &stack0x00000018);
                                                  if (lVar5 != 0) {
                                                    FUN_04c17600(lVar5,*(undefined8 *)
                                                                                                                                                
                                                  System_Threading_CancellationTokenRegistration_TypeInfo
                                                  ,uVar6,0);
                                                  uStack0000000000000014 =
                                                       *(undefined1 *)(unaff_x19 + 0x18b);
                                                  lVar5 = *(long *)(unaff_x19 + 0x30);
                                                  uVar6 = 
                                                  DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                                            (*(undefined8 *)(puVar1 + 0x28),
                                                             (long)&stack0x00000010 + 4);
                                                  if (lVar5 != 0) {
                                                    FUN_04c17600(lVar5,*(undefined8 *)
                                                                        UnityEngine_Camera_TypeInfo,
                                                                 uVar6,0);
                                                    if (*(long *)(unaff_x19 + 0x180) != 0) {
                                                      uStack0000000000000010 =
                                                           *(undefined4 *)
                                                            (*(long *)(unaff_x19 + 0x180) + 0x10);
                                                      lVar5 = *(long *)(unaff_x19 + 0x30);
                                                      uVar6 = 
                                                  DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                                            (*(undefined8 *)puVar2,&stack0x00000010)
                                                  ;
                                                  if (lVar5 != 0) {
                                                    FUN_04c17600(lVar5,*(undefined8 *)
                                                                                                                                                
                                                  OVR_OpenVR_CameraVideoStreamFrameHeader_t_TypeInfo
                                                  ,uVar6,0);
                                                  if (*(long *)(unaff_x19 + 0x180) != 0) {
                                                    in_stack_00000008._4_4_ =
                                                         *(undefined4 *)
                                                          (*(long *)(unaff_x19 + 0x180) + 0x14);
                                                    lVar5 = *(long *)(unaff_x19 + 0x30);
                                                    uVar6 = 
                                                  DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                                            (*(undefined8 *)(puVar1 + 0x50),
                                                             (long)&stack0x00000008 + 4);
                                                  if (lVar5 != 0) {
                                                    FUN_04c17600(lVar5,*(undefined8 *)
                                                                                                                                                
                                                  UnityEngine_Rendering_Universal_CameraTypeUtility_TypeInfo
                                                  ,uVar6,0);
                                                  puVar2 = System_Globalization_Calendar_TypeInfo;
                                                  puVar1 = PTR_DAT_06312520;
                                                  lVar5 = *(long *)(unaff_x19 + 0x28);
                                                  if (lVar5 != 0) {
                                                    iVar13 = 0;
                                                    while (iVar13 < *(int *)(lVar5 + 0x18)) {
                                                      lVar5 = FUN_037a6268(lVar5,iVar13,
                                                                           *(undefined8 *)puVar2);
                                                      if (lVar5 == 0) goto LAB_050d91e0;
                                                      FUN_050d9274();
                                                      if ((*(long *)(unaff_x19 + 0x28) == 0) ||
                                                         (lVar5 = FUN_037a6268(*(long *)(unaff_x19 +
                                                                                        0x28),iVar13
                                                                               ,*(undefined8 *)
                                                                                 puVar2), lVar5 == 0
                                                         )) goto LAB_050d91e0;
                                                      FUN_050d9304(lVar5,plVar12);
                                                      lVar5 = *(long *)(unaff_x19 + 0x28);
                                                      iVar13 = iVar13 + 1;
                                                      if (lVar5 == 0) goto LAB_050d91e0;
                                                    }
                                                    uVar6 = *(undefined8 *)(unaff_x19 + 0x20);
                                                    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                                      thunk_FUN_02b9ad44();
                                                    }
                                                    uVar11 = FUN_05c8c45c(uVar6,0,0);
                                                    if ((uVar11 & 1) == 0) {
                                                      return;
                                                    }
                                                    plVar12 = *(long **)(unaff_x19 + 0x30);
                                                    if (plVar12 != (long *)0x0) {
                                                      plVar9 = *(long **)(unaff_x19 + 0x20);
                                                      uVar6 = (**(code **)(*plVar12 + 0x168))
                                                                        (plVar12,*(undefined8 *)
                                                                                  (*plVar12 + 0x170)
                                                                        );
                                                      if (plVar9 != (long *)0x0) {
                                                        (**(code **)(*plVar9 + 0x5e8))
                                                                  (plVar9,uVar6,
                                                                   *(undefined8 *)(*plVar9 + 0x5f0))
                                                        ;
                                                        return;
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
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        goto LAB_050d91e0;
                      }
                    }
                  }
                }
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
            }
          }
        }
      }
    }
  }
LAB_050d91e0:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


