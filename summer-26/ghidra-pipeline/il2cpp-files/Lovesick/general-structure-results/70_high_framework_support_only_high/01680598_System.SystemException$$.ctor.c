/*
FUNCTION_NAME: System.SystemException$$.ctor
ENTRY_POINT: 01680598
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void System_SystemException___ctor(undefined8 *param_1)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  code *pcVar9;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x25;
  long *unaff_x27;
  undefined8 uVar10;
  long *unaff_x29;
  
  lVar4 = thunk_FUN_00d62348(*param_1);
  if (lVar4 == 0) {
LAB_01680830:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar8 = (ulong)*(ushort *)(*unaff_x27 + 0x12a);
  if (uVar8 != 0) {
    lVar5 = *(long *)(*unaff_x27 + 0xb0) + 8;
    do {
      if (*(long *)(lVar5 + -8) == *unaff_x29) goto LAB_016805f4;
      uVar8 = uVar8 - 1;
      lVar5 = lVar5 + 0x10;
    } while (uVar8 != 0);
  }
  FUN_00d59724();
LAB_016805f4:
  FUN_01679b94(lVar4);
  (**(code **)(*unaff_x20 + 0x1d8))();
  if ((unaff_x25 != 0) && (lVar4 = FUN_017959a4(), lVar4 != 0)) {
    uVar10 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
    lVar5 = thunk_FUN_00d6225c(lVar4,uVar10);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(lVar4,uVar10);
    }
  }
  puVar3 = Method_System_Linq_Enumerable_ToList<TriangulationPoint>__;
  lVar4 = FUN_0167e304();
  if (lVar4 == 0) {
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)Method_UIToggle_OffPressed__);
    if (lVar4 == 0) goto LAB_01680830;
    if (unaff_x21 != (long *)0x0) {
      lVar5 = *(long *)puVar3;
      bVar2 = *(byte *)(lVar5 + 300);
      if ((*(byte *)(*unaff_x21 + 300) < bVar2) ||
         (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar2 * 8 + -8) != lVar5))
      goto System_OverflowException___ctor;
    }
    FUN_01680948(lVar4);
    FUN_0167e434();
    if ((*(byte *)(lVar4 + 0x50) & 7) != 0) {
      plVar6 = (long *)FUN_0167e290();
      if (plVar6 == (long *)0x0) goto LAB_01680830;
      (**(code **)(*plVar6 + 0x178))(plVar6,lVar4,*(undefined8 *)(*plVar6 + 0x180));
    }
    lVar5 = *unaff_x20;
  }
  else {
    if (*(long *)(lVar4 + 0x10) != 0) {
      uVar10 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_72__);
      uVar10 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar10,0);
      thunk_FUN_00d48444(
                        UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                        );
      uVar7 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      FUN_01679968(uVar7,uVar10);
      uVar10 = thunk_FUN_00d48444(PTR_DAT_033effa8);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar7,uVar10);
    }
    if (unaff_x21 != (long *)0x0) {
      lVar5 = *(long *)puVar3;
      bVar2 = *(byte *)(lVar5 + 300);
      if ((*(byte *)(*unaff_x21 + 300) < bVar2) ||
         (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar2 * 8 + -8) != lVar5)) {
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
      plVar6 = (long *)FUN_0167e290();
      if (plVar6 == (long *)0x0) goto LAB_01680830;
      (**(code **)(*plVar6 + 0x178))(plVar6,lVar4,*(undefined8 *)(*plVar6 + 0x180));
      uVar1 = *(uint *)(lVar4 + 0x50);
    }
    if (((uVar1 & 1) == 0) && ((uVar1 & 6) == 0 || (uVar1 & 0x4000) != 0)) {
      FUN_0167f554();
      *(undefined8 *)(lVar4 + 0x40) = 0;
    }
    lVar5 = *unaff_x20;
    if (*(int *)(lVar4 + 0x24) + *(int *)(lVar4 + 0x20) < 1) {
      pcVar9 = *(code **)(lVar5 + 0x1f8);
      goto LAB_01680804;
    }
  }
  pcVar9 = *(code **)(lVar5 + 0x1e8);
LAB_01680804:
  (*pcVar9)();
  return;
}


