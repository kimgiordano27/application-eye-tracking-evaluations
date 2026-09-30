/*
FUNCTION_NAME: FUN_06026594
ENTRY_POINT: 06026594
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


void FUN_06026594(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  
  puVar3 = Method_System_Threading_CancellationTokenSource__ctor__;
                    /* try { // try from 060265a0 to 061265b3 has its CatchHandler @ 060267b8 */
                    /* try { // try from 060265c8 to 061265db has its CatchHandler @ 060267b4 */
  if ((DAT_06dc4b0c & 1) == 0) {
    FUN_02d965b8(Method_System_Threading_CancellationTokenSource__ctor__);
                    /* try { // try from 060265e0 to 061265eb has its CatchHandler @ 060267b0 */
    FUN_02d965b8(Method_UnityEngine_UI_CanvasUpdateRegistry_PerformUpdate__);
    FUN_02d965b8(UnityEngine_UIElements_EventBase<PointerDownEvent>_TypeInfo);
                    /* try { // try from 060265f8 to 061265ff has its CatchHandler @ 060267ec */
    FUN_02d965b8(UnityEngine_UIElements_StylePropertyAnimationSystem_ElementPropertyPair_var);
    FUN_02d965b8(PTR_DAT_069fd220);
                    /* try { // try from 06026618 to 0612661b has its CatchHandler @ 060267d0 */
    FUN_02d965b8(PTR_DAT_069fda98);
    FUN_02d965b8(PTR_DAT_069fd228);
    FUN_02d965b8(PTR_DAT_069fb9d8);
    FUN_02d965b8(
                Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_ICollection<System_Text_RegularExpressions_Capture>_Remove__
                );
    FUN_02d965b8(
                Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_Insert__
                );
    FUN_02d965b8(PTR_DAT_06a102b0);
    FUN_02d965b8(PTR_DAT_06a0d3b0);
    FUN_02d965b8(PTR_DAT_06a164f8);
    FUN_02d965b8(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_BounceOutLerp_0000034B_PostfixBurstDelegate>__
                );
    FUN_02d965b8(OVR_OpenVR_IVROverlay__SetOverlayColor_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a16518);
    FUN_02d965b8(Method_System_Threading_CancellationTokenSource_CancelAfter__);
    FUN_02d965b8(Method_System_Threading_CancellationTokenSource_TimerCallbackLogic__);
    DAT_06dc4b0c = 1;
  }
  puVar1 = PTR_DAT_069fb9d8;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_0552aca4(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  LeanTween__value((undefined8 *)(param_1 + 0x10),param_2);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  LeanTween__value((undefined8 *)(param_1 + 0x18),param_3);
  *(undefined8 *)(param_1 + 0x20) = param_4;
  LeanTween__value((undefined8 *)(param_1 + 0x20),param_4);
  puVar13 = (undefined8 *)(param_1 + 0x28);
  *puVar13 = param_5;
  LeanTween__value(puVar13,param_5);
  lVar5 = FUN_02d966a4(*(undefined8 *)puVar1,5);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) != 0) {
      *(undefined8 *)(lVar5 + 0x20) =
           *(undefined8 *)Method_System_Threading_CancellationTokenSource_CancelAfter__;
      LeanTween__value((undefined8 *)(lVar5 + 0x20));
      if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar5 + 0x28) = param_2;
        LeanTween__value((undefined8 *)(lVar5 + 0x28),param_2);
        if (2 < *(uint *)(lVar5 + 0x18)) {
          *(undefined8 *)(lVar5 + 0x30) =
               *(undefined8 *)
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_BounceOutLerp_0000034B_PostfixBurstDelegate>__
          ;
          LeanTween__value((undefined8 *)(lVar5 + 0x30));
          if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar5 + 0x38) = param_3;
            LeanTween__value((undefined8 *)(lVar5 + 0x38),param_3);
            puVar2 = PTR_DAT_069fd228;
            puVar1 = PTR_DAT_069fd220;
            if (4 < *(uint *)(lVar5 + 0x18)) {
              *(undefined8 *)(lVar5 + 0x40) =
                   *(undefined8 *)
                    Method_System_Threading_CancellationTokenSource_TimerCallbackLogic__;
              LeanTween__value();
              uVar6 = FUN_0536dde4(lVar5,0);
              puVar12 = (undefined8 *)(param_1 + 0x30);
              *puVar12 = uVar6;
              LeanTween__value(puVar12,uVar6);
              lVar5 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
              FUN_0400f984(lVar5,*(undefined8 *)puVar1);
              puVar1 = 
              Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_Insert__
              ;
              lVar14 = *(long *)(param_1 + 0x20);
              if (lVar14 != 0) {
                lVar7 = *(long *)
                         Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_Insert__
                ;
                if (*(int *)(lVar7 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                  lVar7 = *(long *)puVar1;
                }
                puVar4 = Method_UnityEngine_UI_CanvasUpdateRegistry_PerformUpdate__;
                puVar2 = UnityEngine_UIElements_EventBase<PointerDownEvent>_TypeInfo;
                puVar11 = *(undefined8 **)(lVar7 + 0xb8);
                lVar15 = puVar11[1];
                if (lVar15 == 0) {
                  if (*(int *)(lVar7 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                    puVar11 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
                  }
                  uVar6 = *puVar11;
                  lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                               UnityEngine_UIElements_StylePropertyAnimationSystem_ElementPropertyPair_var
                                             );
                  FUN_03b78e40(lVar15,uVar6,
                               *(undefined8 *)
                                Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_ICollection<System_Text_RegularExpressions_Capture>_Remove__
                               ,0);
                  plVar8 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
                  *plVar8 = lVar15;
                  LeanTween__value(plVar8,lVar15);
                }
                puVar1 = PTR_DAT_06a0d3b0;
                uVar6 = FUN_0360ccb8(lVar14,lVar15,*(undefined8 *)puVar4);
                uVar9 = FUN_03615f24(uVar6,*(undefined8 *)puVar2);
                uVar6 = uVar9;
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  uVar6 = thunk_FUN_02df485c(*(long *)puVar3);
                }
                FUN_0602166c(uVar6,lVar5,*(undefined8 *)puVar1,uVar9);
              }
              uVar10 = FUN_0536c9cc(*puVar13,0);
              if ((uVar10 & 1) == 0) {
                lVar14 = *(long *)puVar3;
                uVar6 = *puVar13;
                if (*(int *)(lVar14 + 0xe4) == 0) {
                  lVar14 = thunk_FUN_02df485c();
                }
                FUN_06021574(lVar14,lVar5,*(undefined8 *)PTR_DAT_06a102b0,uVar6);
              }
              puVar3 = PTR_DAT_06a164f8;
              if (lVar5 != 0) {
                if (0 < *(int *)(lVar5 + 0x18)) {
                  uVar9 = *puVar12;
                  uVar6 = FUN_0536e598(*(undefined8 *)PTR_DAT_06a16518,lVar5,0);
                  uVar6 = FUN_0536d554(uVar9,*(undefined8 *)puVar3,uVar6,0);
                  *puVar12 = uVar6;
                  LeanTween__value(puVar12);
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


