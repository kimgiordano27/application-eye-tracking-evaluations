/*
FUNCTION_NAME: Unity.Properties.TypeUtility$$GetTypeDisplayName
ENTRY_POINT: 0620377c
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_10;ray_or_cast_sink_hits_5;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x06203fc4) */

long Unity_Properties_TypeUtility__GetTypeDisplayName(void)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  long lVar11;
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000018;
  long *in_stack_00000028;
  
  FUN_02e3ca1c(Cysharp_Threading_Tasks_Triggers_IAsyncOnCollisionStay2DHandler_TypeInfo);
  FUN_02e3ca1c(UnityEngine_UIElements_EventBase<PointerEnterEvent>_TypeInfo);
  FUN_02e3ca1c(PTR_DAT_06a33998);
  FUN_02e3ca1c(PTR_DAT_06a2ef10);
  FUN_02e3ca1c(PTR_DAT_06a6d9e0);
  FUN_02e3ca1c(System_Net_HttpValidationHelpers_TypeInfo);
  FUN_02e3ca1c(System_Threading_IAsyncLocal_TypeInfo);
  FUN_02e3ca1c(System_Net_HttpRequestCreator_TypeInfo);
  FUN_02e3ca1c(Cysharp_Threading_Tasks_Triggers_IAsyncOnAnimatorIKHandler_TypeInfo);
  FUN_02e3ca1c(System_Net_HttpWebResponse_TypeInfo);
  FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo);
  FUN_02e3ca1c(Cysharp_Threading_Tasks_Triggers_IAsyncOnAnimatorMoveHandler_TypeInfo);
  FUN_02e3ca1c(Cysharp_Threading_Tasks_Triggers_IAsyncOnCollisionStayHandler_TypeInfo);
  FUN_02e3ca1c(Unity_Services_Authentication_Shared_IApiConfiguration_TypeInfo);
  FUN_02e3ca1c(System_Net_HttpStatusCode_TypeInfo);
  FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_HoverExitEventArgs_TypeInfo);
  FUN_02e3ca1c(Cysharp_Threading_Tasks_Triggers_IAsyncOnApplicationFocusHandler_TypeInfo);
  FUN_02e3ca1c(UnityEngine_InputSystem_HumiditySensor_TypeInfo);
  FUN_02e3ca1c(Cysharp_Threading_Tasks_Triggers_IAsyncOnApplicationPauseHandler_TypeInfo);
  FUN_02e3ca1c(Oculus_Platform_Models_HttpTransferUpdate_TypeInfo);
  FUN_02e3ca1c(Unity_Services_Authentication_Internal_IAccessToken_TypeInfo);
  FUN_02e3ca1c(Cysharp_Threading_Tasks_Triggers_IAsyncOnApplicationQuitHandler_TypeInfo);
  FUN_02e3ca1c(UnityWebSocketSharp_Net_HttpVersion_TypeInfo);
  FUN_02e3ca1c(Cysharp_Threading_Tasks_Triggers_IAsyncOnAudioFilterReadHandler_TypeInfo);
  FUN_02e3ca1c(Cysharp_Threading_Tasks_Triggers_IAsyncOnBecameInvisibleHandler_TypeInfo);
  FUN_02e3ca1c(Cysharp_Threading_Tasks_Triggers_IAsyncOnBecameVisibleHandler_TypeInfo);
  FUN_02e3ca1c(Cysharp_Threading_Tasks_Triggers_IAsyncOnControllerColliderHitHandler_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xad4) = 1;
  puVar1 = PTR_DAT_06a33998;
  in_stack_00000028 = (long *)0x0;
  if (unaff_x19 != 0) {
    lVar11 = *(long *)PTR_DAT_06a33998;
    lVar9 = *(long *)(lVar11 + 0x38);
    if (lVar9 == 0) {
      FUN_02e756e8(lVar11);
      lVar9 = *(long *)(lVar11 + 0x38);
    }
    lVar9 = *(long *)(lVar9 + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02e7568c();
    }
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    if ((*(ushort *)(*(long *)(*(long *)(lVar11 + 0x38) + 0x10) + 0x135) & 1) == 0) {
      FUN_02e7568c();
    }
    plVar5 = (long *)FUN_039749e8();
    lVar11 = *(long *)puVar1;
    in_stack_00000018 = &stack0x00000028;
    lVar9 = *(long *)(lVar11 + 0x38);
    in_stack_00000010 = 0;
    in_stack_00000028 = plVar5;
    if (lVar9 == 0) {
      FUN_02e756e8(lVar11);
      lVar9 = *(long *)(lVar11 + 0x38);
    }
    lVar9 = *(long *)(lVar9 + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02e7568c();
    }
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    lVar9 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02e7568c();
    }
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
                    /* try { // try from 062039d8 to 06303b4b has its CatchHandler @ 062039d8
                       catch() { ... } // from try @ 062039d8 with catch @ 062039d8
                       catch() { ... } // from try @ 06203b84 with catch @ 062039d8
                       catch() { ... } // from try @ 06203c6c with catch @ 062039d8
                       catch() { ... } // from try @ 06203cf4 with catch @ 062039d8
                       catch() { ... } // from try @ 06203d1c with catch @ 062039d8
                       catch() { ... } // from try @ 06203d40 with catch @ 062039d8
                       catch() { ... } // from try @ 06203d6c with catch @ 062039d8 */
    uVar6 = FUN_039749e8(plVar5,*(undefined8 *)
                                 UnityEngine_XR_Interaction_Toolkit_HoverExitEventArgs_TypeInfo,
                         **(undefined8 **)(lVar9 + 0xb8),
                         *(undefined8 *)UnityEngine_UIElements_EventBase<PointerEnterEvent>_TypeInfo
                        );
    uVar7 = thunk_FUN_0548b788(*(undefined8 *)
                                Cysharp_Threading_Tasks_Triggers_IAsyncOnBecameVisibleHandler_TypeInfo
                               ,uVar6,0);
    if ((uVar7 & 1) == 0) {
      uVar7 = thunk_FUN_0548b788(*(undefined8 *)
                                  Cysharp_Threading_Tasks_Triggers_IAsyncOnAnimatorIKHandler_TypeInfo
                                 ,uVar6,0);
      if ((uVar7 & 1) == 0) {
                    /* try { // try from 06203b4c to 06303b53 has its CatchHandler @ 06203d20 */
        uVar7 = thunk_FUN_0548b788(*(undefined8 *)
                                    Cysharp_Threading_Tasks_Triggers_IAsyncOnAnimatorMoveHandler_TypeInfo
                                   ,uVar6,0);
        if ((uVar7 & 1) == 0) {
          uVar7 = thunk_FUN_0548b788(*(undefined8 *)
                                      Cysharp_Threading_Tasks_Triggers_IAsyncOnApplicationPauseHandler_TypeInfo
                                     ,uVar6,0);
          if ((uVar7 & 1) == 0) {
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 06203c58 with catch @ 06203cc4
                        */
            uVar7 = thunk_FUN_0548b788(*(undefined8 *)
                                        Cysharp_Threading_Tasks_Triggers_IAsyncOnApplicationQuitHandler_TypeInfo
                                       ,uVar6,0);
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 06203b70 with catch @ 06203cc8
                        */
            if ((uVar7 & 1) == 0) {
                    /* try { // try from 06203d1c to 06303d3b has its CatchHandler @ 062039d8 */
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 06203b4c with catch @ 06203d20
                        */
              uVar7 = thunk_FUN_0548b788(*(undefined8 *)System_Threading_IAsyncLocal_TypeInfo,uVar6,
                                         0);
              if ((uVar7 & 1) == 0) {
                uVar7 = thunk_FUN_0548b788(*(undefined8 *)
                                            Cysharp_Threading_Tasks_Triggers_IAsyncOnBecameInvisibleHandler_TypeInfo
                                           ,uVar6,0);
                if ((uVar7 & 1) == 0) {
                  uVar7 = thunk_FUN_0548b788(*(undefined8 *)
                                              Cysharp_Threading_Tasks_Triggers_IAsyncOnAudioFilterReadHandler_TypeInfo
                                             ,uVar6,0);
                  if ((uVar7 & 1) == 0) {
                    uVar7 = thunk_FUN_0548b788(*(undefined8 *)
                                                Cysharp_Threading_Tasks_Triggers_IAsyncOnApplicationFocusHandler_TypeInfo
                                               ,uVar6,0);
                    if ((uVar7 & 1) == 0) {
                      uVar7 = thunk_FUN_0548b788(*(undefined8 *)
                                                  Cysharp_Threading_Tasks_Triggers_IAsyncOnCollisionStayHandler_TypeInfo
                                                 ,uVar6,0);
                      plVar5 = in_stack_00000028;
                      if ((uVar7 & 1) == 0) {
                        uVar6 = FUN_02a861f0(*(undefined8 *)puVar1);
                        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02e3ccc4();
                        }
                        uVar7 = FUN_03974808(plVar5,*(undefined8 *)
                                                                                                          
                                                  Cysharp_Threading_Tasks_Triggers_IAsyncOnControllerColliderHitHandler_TypeInfo
                                             ,uVar6,*(undefined8 *)PTR_DAT_06a8e288);
                        if ((uVar7 & 1) != 0) {
                          if (*(int *)(*(long *)PTR_DAT_06a6d9e0 + 0xe4) == 0) {
                            thunk_FUN_02e9a04c();
                          }
                          unaff_x19 = FUN_0620688c();
                        }
                      }
                      else {
                        if (*(long *)(unaff_x19 + 0x10) == 0) {
                          uVar6 = 0;
                        }
                        else {
                          uVar6 = *(undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0x18);
                        }
                        unaff_x19 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a6d9f0);
                        FUN_06205440(unaff_x19,uVar6);
                      }
                    }
                    else {
                      FUN_02a861f0(*(undefined8 *)puVar1);
                      unaff_x19 = FUN_039749e8();
                    }
                  }
                  else {
                    FUN_02a861f0(*(undefined8 *)puVar1);
                    uVar3 = FUN_03974858();
                    in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,uVar3);
                    unaff_x19 = thunk_FUN_02e786f0(*(undefined8 *)(PTR_DAT_06a2f000 + 0x88),
                                                   &stack0x00000008);
                  }
                }
                else {
                  FUN_02a861f0(*(undefined8 *)puVar1);
                  in_stack_00000008 = FUN_039748a8();
                  unaff_x19 = thunk_FUN_02e786f0(*(undefined8 *)(PTR_DAT_06a2f000 + 0x80),
                                                 &stack0x00000008);
                }
              }
              else {
                FUN_02a861f0(*(undefined8 *)puVar1);
                    /* try { // try from 06203d3c to 06303d3f has its CatchHandler @ 06203d60 */
                    /* try { // try from 06203d40 to 06303d63 has its CatchHandler @ 062039d8 */
                uVar4 = FUN_03974a88();
                    /* catch() { ... } // from try @ 06203d3c with catch @ 06203d60 */
                    /* try { // try from 06203d64 to 06303d6b has its CatchHandler @ 06203d74 */
                in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar4);
                    /* try { // try from 06203d6c to 06303d77 has its CatchHandler @ 062039d8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06203d14 with catch @ 06203d74
                       catch(type#2 @ 00000000) { ... } // from try @ 06203d64 with catch @ 06203d74
                        */
                unaff_x19 = thunk_FUN_02e786f0(*(undefined8 *)(PTR_DAT_06a2f000 + 0x78),
                                               &stack0x00000008);
              }
            }
            else {
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 06203c5c with catch @ 06203ccc
                        */
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 06203b74 with catch @ 06203cd0
                        */
              FUN_02a861f0(*(undefined8 *)puVar1);
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 06203c34 with catch @ 06203cd4
                        */
                    /* try { // try from 06203cf0 to 06303cf3 has its CatchHandler @ 06203d10 */
                    /* try { // try from 06203cf4 to 06303d13 has its CatchHandler @ 062039d8 */
              in_stack_00000008 = FUN_03974998();
                    /* catch() { ... } // from try @ 06203cf0 with catch @ 06203d10 */
              unaff_x19 = thunk_FUN_02e786f0(*(undefined8 *)(PTR_DAT_06a2f000 + 0x68),
                                             &stack0x00000008);
                    /* try { // try from 06203d14 to 06303d1b has its CatchHandler @ 06203d74 */
            }
          }
          else {
            lVar11 = *(long *)puVar1;
            lVar9 = *(long *)(lVar11 + 0x38);
            if (lVar9 == 0) {
              FUN_02e756e8(lVar11);
              lVar9 = *(long *)(lVar11 + 0x38);
            }
            lVar9 = *(long *)(lVar9 + 0x10);
                    /* try { // try from 06203c34 to 06303c3b has its CatchHandler @ 06203cd4 */
            if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_02e7568c();
            }
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
                    /* try { // try from 06203c58 to 06303c5b has its CatchHandler @ 06203cc4 */
                    /* try { // try from 06203c5c to 06303c6b has its CatchHandler @ 06203ccc */
            if ((*(ushort *)(*(long *)(*(long *)(lVar11 + 0x38) + 0x10) + 0x135) & 1) == 0) {
              FUN_02e7568c();
            }
                    /* try { // try from 06203c6c to 06303cef has its CatchHandler @ 062039d8 */
            uVar3 = FUN_039748f8();
            in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,uVar3);
            unaff_x19 = thunk_FUN_02e786f0(*(undefined8 *)(PTR_DAT_06a2f000 + 0x38),&stack0x00000008
                                          );
          }
        }
        else {
          lVar11 = *(long *)puVar1;
          lVar9 = *(long *)(lVar11 + 0x38);
          if (lVar9 == 0) {
                    /* try { // try from 06203b70 to 06303b73 has its CatchHandler @ 06203cc8 */
                    /* try { // try from 06203b74 to 06303b83 has its CatchHandler @ 06203cd0 */
            FUN_02e756e8(lVar11);
            lVar9 = *(long *)(lVar11 + 0x38);
          }
          lVar9 = *(long *)(lVar9 + 0x10);
                    /* try { // try from 06203b84 to 06303c33 has its CatchHandler @ 062039d8 */
          if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_02e7568c();
          }
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          if ((*(ushort *)(*(long *)(*(long *)(lVar11 + 0x38) + 0x10) + 0x135) & 1) == 0) {
            FUN_02e7568c();
          }
          uVar2 = FUN_03974a38();
          in_stack_00000008 = CONCAT71(in_stack_00000008._1_7_,uVar2);
          unaff_x19 = thunk_FUN_02e786f0(*(undefined8 *)(PTR_DAT_06a2f000 + 0x30),&stack0x00000008);
        }
      }
      else {
        lVar11 = *(long *)puVar1;
        lVar9 = *(long *)(lVar11 + 0x38);
        if (lVar9 == 0) {
          FUN_02e756e8(lVar11);
          lVar9 = *(long *)(lVar11 + 0x38);
        }
        lVar9 = *(long *)(lVar9 + 0x10);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_02e7568c();
        }
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        if ((*(ushort *)(*(long *)(*(long *)(lVar11 + 0x38) + 0x10) + 0x135) & 1) == 0) {
          FUN_02e7568c();
        }
        uVar2 = FUN_03974808();
        in_stack_00000008 = CONCAT71(in_stack_00000008._1_7_,uVar2) & 0xffffffffffffff01;
        unaff_x19 = thunk_FUN_02e786f0(*(undefined8 *)(PTR_DAT_06a2f000 + 0x28),&stack0x00000008);
      }
    }
    else {
      lVar11 = *(long *)puVar1;
      lVar9 = *(long *)(lVar11 + 0x38);
      if (lVar9 == 0) {
        FUN_02e756e8(lVar11);
        lVar9 = *(long *)(lVar11 + 0x38);
      }
      lVar9 = *(long *)(lVar9 + 0x10);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02e7568c();
      }
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar11 + 0x38) + 0x10) + 0x135) & 1) == 0) {
        FUN_02e7568c();
      }
      uVar4 = FUN_03974948();
      in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar4);
      unaff_x19 = thunk_FUN_02e786f0(*(undefined8 *)(PTR_DAT_06a2f000 + 0x48),&stack0x00000008);
    }
    plVar5 = in_stack_00000028;
    if (in_stack_00000028 != (long *)0x0) {
      lVar9 = *in_stack_00000028;
      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06a2ef10) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_06203ef0;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_02e759c0(in_stack_00000028,*(long *)PTR_DAT_06a2ef10,0);
LAB_06203ef0:
      (*(code *)*puVar8)(plVar5,puVar8[1]);
    }
  }
  return unaff_x19;
}


