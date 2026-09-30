/*
FUNCTION_NAME: OVRVirtualKeyboardSampleInputHandler$$UpdateLineRenderer
ENTRY_POINT: 036cccac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVRVirtualKeyboardSampleInputHandler__UpdateLineRenderer
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,
               undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  FUN_036cc854();
  if (*(int *)(unaff_x20 + 0x30) == 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0x38) == 0) {
LAB_036cce9c:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar9 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x158);
  if (*(int *)(*(long *)Method_OVRPlugin_FovfPair_get_Item__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_03694cd0();
  uVar7 = FUN_036cc7a4();
  if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_036cce9c;
  uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x148);
  uVar3 = param_3;
  FUN_03694d98();
  uVar8 = FUN_0406761c(0);
  lVar1 = FUN_04070398();
  if (lVar1 == 0) goto LAB_036cce9c;
  FUN_0407de3c(uVar7,uVar9,param_3,uVar8,uVar10,uVar3,param_4,lVar1,0);
  plVar6 = *(long **)(unaff_x19 + 0x58);
  if (plVar6 == (long *)0x0) {
    uVar9 = 0;
  }
  else {
    lVar1 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_UnityEngine_UIElements_FocusOutEvent_<>c_<_cctor>b__0_0__) {
          puVar2 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_036ccde4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar6,*(long *)
                                  Method_UnityEngine_UIElements_FocusOutEvent_<>c_<_cctor>b__0_0__,0
                         );
LAB_036ccde4:
    uVar9 = (*(code *)*puVar2)(plVar6,puVar2[1]);
  }
  if (*(int *)(unaff_x20 + 0x30) == 2) {
    puVar2 = (undefined8 *)(unaff_x19 + 0x48);
  }
  else {
    if (*(int *)(unaff_x20 + 0x30) != 1) {
      uVar7 = 0;
      goto LAB_036cce28;
    }
    puVar2 = (undefined8 *)(unaff_x19 + 0x40);
  }
  uVar7 = *puVar2;
LAB_036cce28:
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0) == 0)
  {
    thunk_FUN_01ee6d7c();
  }
  uVar4 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                    (uVar7,0,0);
  if ((uVar4 & 1) == 0) {
    uVar3 = FUN_036ccea0();
    uVar9 = FUN_036ccf7c(uVar9,uVar3,uVar7);
    if (*(long *)(unaff_x19 + 0x68) != 0) {
      FUN_036cd010(uVar9,uVar7,unaff_w21 & 1);
    }
  }
  return;
}


