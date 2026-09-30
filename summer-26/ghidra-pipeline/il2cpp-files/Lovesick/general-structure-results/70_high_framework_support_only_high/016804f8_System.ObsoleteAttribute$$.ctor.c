/*
FUNCTION_NAME: System.ObsoleteAttribute$$.ctor
ENTRY_POINT: 016804f8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void System_ObsoleteAttribute___ctor(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long in_x9;
  ulong uVar10;
  code *pcVar11;
  int *piVar12;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x25;
  
  if (in_x9 != 0) {
    piVar12 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == param_3) {
        puVar4 = (undefined8 *)(param_1 + (long)*piVar12 * 0x10 + 0x138);
        goto System_OperationCanceledException___ctor;
      }
      in_x9 = in_x9 + -1;
      piVar12 = piVar12 + 4;
    } while (in_x9 != 0);
  }
  puVar4 = (undefined8 *)FUN_00d59724();
System_OperationCanceledException___ctor:
  (*(code *)*puVar4)();
  puVar3 = StringLiteral_4488;
  lVar5 = thunk_FUN_00d6225c();
  if (lVar5 != 0) {
    plVar6 = (long *)thunk_FUN_00d6225c();
    if (plVar6 == (long *)0x0) goto FUN_016808ec;
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_System_Collections_Generic_List<XRLoader>_Insert__);
    if (lVar5 == 0) goto LAB_01680830;
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          lVar9 = lVar9 + (long)*piVar12 * 0x10 + 0x138;
          goto LAB_016805f4;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    lVar9 = FUN_00d59724(plVar6,*(long *)puVar3,0);
LAB_016805f4:
    FUN_01679b94(lVar5,plVar6,*(undefined8 *)(lVar9 + 8));
    (**(code **)(*unaff_x20 + 0x1d8))();
  }
  if (((unaff_x25 != 0) && (lVar5 = FUN_017959a4(), lVar5 != 0)) &&
     (lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                        Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__),
     lVar5 == 0)) {
FUN_016808ec:
                    /* WARNING: Subroutine does not return */
    FUN_00da544c();
  }
  puVar3 = Method_System_Linq_Enumerable_ToList<TriangulationPoint>__;
  lVar5 = FUN_0167e304();
  if (lVar5 == 0) {
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)Method_UIToggle_OffPressed__);
    if (lVar5 == 0) {
LAB_01680830:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (unaff_x21 != (long *)0x0) {
      lVar9 = *(long *)puVar3;
      bVar2 = *(byte *)(lVar9 + 300);
      if ((*(byte *)(*unaff_x21 + 300) < bVar2) ||
         (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar2 * 8 + -8) != lVar9))
      goto System_OverflowException___ctor;
    }
    FUN_01680948(lVar5);
    FUN_0167e434();
    if ((*(byte *)(lVar5 + 0x50) & 7) != 0) {
      plVar6 = (long *)FUN_0167e290();
      if (plVar6 == (long *)0x0) goto LAB_01680830;
      (**(code **)(*plVar6 + 0x178))(plVar6,lVar5,*(undefined8 *)(*plVar6 + 0x180));
    }
    lVar9 = *unaff_x20;
  }
  else {
    if (*(long *)(lVar5 + 0x10) != 0) {
      uVar7 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_72__);
      uVar7 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar7,0);
      thunk_FUN_00d48444(
                        UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                        );
      uVar8 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      FUN_01679968(uVar8,uVar7);
      uVar7 = thunk_FUN_00d48444(PTR_DAT_033effa8);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar8,uVar7);
    }
    if (unaff_x21 != (long *)0x0) {
      lVar9 = *(long *)puVar3;
      bVar2 = *(byte *)(lVar9 + 300);
      if ((*(byte *)(*unaff_x21 + 300) < bVar2) ||
         (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar2 * 8 + -8) != lVar9)) {
System_OverflowException___ctor:
                    /* WARNING: Subroutine does not return */
        FUN_00da544c();
      }
    }
    FUN_01680b34(lVar5);
    if (0 < *(int *)(lVar5 + 0x20)) {
      FUN_0167f8d0();
    }
    uVar1 = *(uint *)(lVar5 + 0x50);
    if ((uVar1 & 7) != 0) {
      plVar6 = (long *)FUN_0167e290();
      if (plVar6 == (long *)0x0) goto LAB_01680830;
      (**(code **)(*plVar6 + 0x178))(plVar6,lVar5,*(undefined8 *)(*plVar6 + 0x180));
      uVar1 = *(uint *)(lVar5 + 0x50);
    }
    if (((uVar1 & 1) == 0) && ((uVar1 & 6) == 0 || (uVar1 & 0x4000) != 0)) {
      FUN_0167f554();
      *(undefined8 *)(lVar5 + 0x40) = 0;
    }
    lVar9 = *unaff_x20;
    if (*(int *)(lVar5 + 0x24) + *(int *)(lVar5 + 0x20) < 1) {
      pcVar11 = *(code **)(lVar9 + 0x1f8);
      goto LAB_01680804;
    }
  }
  pcVar11 = *(code **)(lVar9 + 0x1e8);
LAB_01680804:
  (*pcVar11)();
  return;
}


