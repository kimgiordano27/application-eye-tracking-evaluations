/*
FUNCTION_NAME: Unity.Services.Wire.Internal.Client.<<OnIdentityChanged>b__27_0>d$$SetStateMachine
ENTRY_POINT: 0602661c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Wire_Internal_Client_<<OnIdentityChanged>b__27_0>d__SetStateMachine(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 in_x4;
  undefined8 *puVar10;
  long unaff_x19;
  undefined8 *puVar11;
  undefined8 unaff_x20;
  undefined8 *puVar12;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar13;
  undefined8 unaff_x23;
  long lVar14;
  long unaff_x24;
  long *unaff_x25;
  
                    /* try { // try from 0602661c to 0612662b has its CatchHandler @ 060267e8 */
  FUN_02d965b8(PTR_DAT_069fd228);
  FUN_02d965b8(PTR_DAT_069fb9d8);
                    /* try { // try from 0602663c to 06126647 has its CatchHandler @ 060267ac */
  FUN_02d965b8(
              Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_ICollection<System_Text_RegularExpressions_Capture>_Remove__
              );
  FUN_02d965b8(
              Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_Insert__
              );
  FUN_02d965b8(PTR_DAT_06a102b0);
  FUN_02d965b8(PTR_DAT_06a0d3b0);
  FUN_02d965b8(PTR_DAT_06a164f8);
                    /* try { // try from 06026678 to 0612668b has its CatchHandler @ 060267e4 */
  FUN_02d965b8(
              Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_BounceOutLerp_0000034B_PostfixBurstDelegate>__
              );
  FUN_02d965b8(OVR_OpenVR_IVROverlay__SetOverlayColor_TypeInfo);
  FUN_02d965b8(PTR_DAT_06a16518);
  FUN_02d965b8(Method_System_Threading_CancellationTokenSource_CancelAfter__);
  FUN_02d965b8(Method_System_Threading_CancellationTokenSource_TimerCallbackLogic__);
  *(undefined1 *)(unaff_x24 + 0xb0c) = 1;
  puVar1 = PTR_DAT_069fb9d8;
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_0552aca4();
  *(undefined8 *)(unaff_x19 + 0x10) = unaff_x22;
  LeanTween__value();
  *(undefined8 *)(unaff_x19 + 0x18) = unaff_x21;
  LeanTween__value();
  *(undefined8 *)(unaff_x19 + 0x20) = unaff_x20;
  LeanTween__value();
  puVar12 = (undefined8 *)(unaff_x19 + 0x28);
  *puVar12 = unaff_x23;
  LeanTween__value(puVar12);
  lVar4 = FUN_02d966a4(*(undefined8 *)puVar1,5);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) != 0) {
      *(undefined8 *)(lVar4 + 0x20) =
           *(undefined8 *)Method_System_Threading_CancellationTokenSource_CancelAfter__;
      LeanTween__value((undefined8 *)(lVar4 + 0x20));
      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar4 + 0x28) = unaff_x22;
        LeanTween__value((undefined8 *)(lVar4 + 0x28));
        if (2 < *(uint *)(lVar4 + 0x18)) {
          *(undefined8 *)(lVar4 + 0x30) =
               *(undefined8 *)
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_BounceOutLerp_0000034B_PostfixBurstDelegate>__
          ;
          LeanTween__value((undefined8 *)(lVar4 + 0x30));
          if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar4 + 0x38) = unaff_x21;
            LeanTween__value((undefined8 *)(lVar4 + 0x38));
            puVar2 = PTR_DAT_069fd228;
            puVar1 = PTR_DAT_069fd220;
            if (4 < *(uint *)(lVar4 + 0x18)) {
              *(undefined8 *)(lVar4 + 0x40) =
                   *(undefined8 *)
                    Method_System_Threading_CancellationTokenSource_TimerCallbackLogic__;
              LeanTween__value();
              uVar5 = FUN_0536dde4(lVar4,0);
              puVar11 = (undefined8 *)(unaff_x19 + 0x30);
              *puVar11 = uVar5;
              LeanTween__value(puVar11,uVar5);
              lVar4 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
              FUN_0400f984(lVar4,*(undefined8 *)puVar1);
              puVar1 = 
              Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_Insert__
              ;
              lVar13 = *(long *)(unaff_x19 + 0x20);
              if (lVar13 != 0) {
                lVar6 = *(long *)
                         Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_Insert__
                ;
                if (*(int *)(lVar6 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                  lVar6 = *(long *)puVar1;
                }
                puVar3 = Method_UnityEngine_UI_CanvasUpdateRegistry_PerformUpdate__;
                puVar2 = UnityEngine_UIElements_EventBase<PointerDownEvent>_TypeInfo;
                puVar10 = *(undefined8 **)(lVar6 + 0xb8);
                lVar14 = puVar10[1];
                if (lVar14 == 0) {
                  if (*(int *)(lVar6 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                    puVar10 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
                  }
                  uVar5 = *puVar10;
                  lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                               UnityEngine_UIElements_StylePropertyAnimationSystem_ElementPropertyPair_var
                                             );
                  FUN_03b78e40(lVar14,uVar5,
                               *(undefined8 *)
                                Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_ICollection<System_Text_RegularExpressions_Capture>_Remove__
                               ,0);
                  plVar7 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
                  *plVar7 = lVar14;
                  LeanTween__value(plVar7,lVar14);
                }
                puVar1 = PTR_DAT_06a0d3b0;
                uVar5 = FUN_0360ccb8(lVar13,lVar14,*(undefined8 *)puVar3);
                uVar8 = FUN_03615f24(uVar5,*(undefined8 *)puVar2);
                uVar5 = uVar8;
                if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                  uVar5 = thunk_FUN_02df485c(*unaff_x25);
                }
                FUN_0602166c(uVar5,lVar4,*(undefined8 *)puVar1,uVar8,in_x4,1);
              }
              uVar9 = FUN_0536c9cc(*puVar12,0);
              if ((uVar9 & 1) == 0) {
                lVar13 = *unaff_x25;
                uVar5 = *puVar12;
                if (*(int *)(lVar13 + 0xe4) == 0) {
                  lVar13 = thunk_FUN_02df485c();
                }
                FUN_06021574(lVar13,lVar4,*(undefined8 *)PTR_DAT_06a102b0,uVar5);
              }
              puVar1 = PTR_DAT_06a164f8;
              if (lVar4 != 0) {
                if (0 < *(int *)(lVar4 + 0x18)) {
                  uVar8 = *puVar11;
                  uVar5 = FUN_0536e598(*(undefined8 *)PTR_DAT_06a16518,lVar4,0);
                  uVar5 = FUN_0536d554(uVar8,*(undefined8 *)puVar1,uVar5,0);
                  *puVar11 = uVar5;
                  LeanTween__value(puVar11);
                  return;
                }
                return;
              }
              goto LAB_060269d0;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
LAB_060269d0:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


