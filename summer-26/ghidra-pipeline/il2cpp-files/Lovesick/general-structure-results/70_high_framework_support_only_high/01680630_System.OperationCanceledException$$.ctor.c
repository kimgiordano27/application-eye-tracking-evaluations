/*
FUNCTION_NAME: System.OperationCanceledException$$.ctor
ENTRY_POINT: 01680630
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void System_OperationCanceledException___ctor(long param_1,undefined8 param_2)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 uVar9;
  
  uVar9 = **(undefined8 **)(param_1 + 0xa98);
  lVar4 = thunk_FUN_00d6225c(param_2,uVar9);
  puVar3 = Method_System_Linq_Enumerable_ToList<TriangulationPoint>__;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da544c(param_2,uVar9);
  }
  lVar4 = FUN_0167e304();
  if (lVar4 == 0) {
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)Method_UIToggle_OffPressed__);
    if (lVar4 == 0) {
LAB_01680830:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (unaff_x21 != (long *)0x0) {
      lVar7 = *(long *)puVar3;
      bVar2 = *(byte *)(lVar7 + 300);
      if ((*(byte *)(*unaff_x21 + 300) < bVar2) ||
         (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar2 * 8 + -8) != lVar7))
      goto System_OverflowException___ctor;
    }
    FUN_01680948(lVar4);
    FUN_0167e434();
    if ((*(byte *)(lVar4 + 0x50) & 7) != 0) {
      plVar5 = (long *)FUN_0167e290();
      if (plVar5 == (long *)0x0) goto LAB_01680830;
      (**(code **)(*plVar5 + 0x178))(plVar5,lVar4,*(undefined8 *)(*plVar5 + 0x180));
    }
    lVar7 = *unaff_x20;
  }
  else {
    if (*(long *)(lVar4 + 0x10) != 0) {
      uVar9 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_72__);
      uVar9 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar9,0);
      thunk_FUN_00d48444(
                        UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                        );
      uVar6 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      FUN_01679968(uVar6,uVar9);
      uVar9 = thunk_FUN_00d48444(PTR_DAT_033effa8);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar6,uVar9);
    }
    if (unaff_x21 != (long *)0x0) {
      lVar7 = *(long *)puVar3;
      bVar2 = *(byte *)(lVar7 + 300);
      if ((*(byte *)(*unaff_x21 + 300) < bVar2) ||
         (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar2 * 8 + -8) != lVar7)) {
System_OverflowException___ctor:
                    /* WARNING: Subroutine does not return */
        FUN_00da544c();
      }
    }
    FUN_01680b34(lVar4);
    if (0 < *(int *)(lVar4 + 0x20)) {
      FUN_0167f8d0();
    }
    uVar1 = *(uint *)(lVar4 + 0x50);
    if ((uVar1 & 7) != 0) {
      plVar5 = (long *)FUN_0167e290();
      if (plVar5 == (long *)0x0) goto LAB_01680830;
      (**(code **)(*plVar5 + 0x178))(plVar5,lVar4,*(undefined8 *)(*plVar5 + 0x180));
      uVar1 = *(uint *)(lVar4 + 0x50);
    }
    if (((uVar1 & 1) == 0) && ((uVar1 & 6) == 0 || (uVar1 & 0x4000) != 0)) {
      FUN_0167f554();
      *(undefined8 *)(lVar4 + 0x40) = 0;
    }
    lVar7 = *unaff_x20;
    if (*(int *)(lVar4 + 0x24) + *(int *)(lVar4 + 0x20) < 1) {
      pcVar8 = *(code **)(lVar7 + 0x1f8);
      goto LAB_01680804;
    }
  }
  pcVar8 = *(code **)(lVar7 + 0x1e8);
LAB_01680804:
  (*pcVar8)();
  return;
}


