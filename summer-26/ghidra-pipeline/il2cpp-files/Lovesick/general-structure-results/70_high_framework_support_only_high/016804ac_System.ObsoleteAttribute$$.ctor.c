/*
FUNCTION_NAME: System.ObsoleteAttribute$$.ctor
ENTRY_POINT: 016804ac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_10;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void System_ObsoleteAttribute___ctor(long param_1)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  code *pcVar12;
  int *piVar13;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x25;
  long *plVar14;
  
  puVar7 = PTR_DAT_033f7150;
  if (param_1 !=
      *(long *)
       System_Collections_Generic_List<ProbeVolumeSceneData_SerializablePVBakeSettings>_TypeInfo) {
LAB_016808fc:
    uVar4 = thunk_FUN_00d48444(puVar7);
    uVar4 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar4,0);
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                      );
    uVar8 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    FUN_01679968(uVar8,uVar4);
    uVar4 = thunk_FUN_00d48444(PTR_DAT_033effa8);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar8,uVar4);
  }
  if (unaff_x20[8] != 0) {
    uVar4 = thunk_FUN_00d93c64();
    plVar14 = (long *)unaff_x20[8];
    if (plVar14 == (long *)0x0) goto LAB_01680830;
    lVar9 = *plVar14;
    lVar6 = unaff_x20[9];
    lVar10 = unaff_x20[10];
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)StringLiteral_6724) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto System_OperationCanceledException___ctor;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724(plVar14,*(long *)StringLiteral_6724,0);
System_OperationCanceledException___ctor:
    (*(code *)*puVar5)(plVar14,uVar4,lVar6,lVar10,&stack0x00000008,puVar5[1]);
  }
  puVar7 = StringLiteral_4488;
  lVar6 = thunk_FUN_00d6225c();
  if (lVar6 != 0) {
    plVar14 = (long *)thunk_FUN_00d6225c();
    if (plVar14 == (long *)0x0) goto FUN_016808ec;
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_System_Collections_Generic_List<XRLoader>_Insert__);
    if (lVar6 == 0) goto LAB_01680830;
    lVar10 = *plVar14;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar7) {
          lVar10 = lVar10 + (long)*piVar13 * 0x10 + 0x138;
          goto LAB_016805f4;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    lVar10 = FUN_00d59724(plVar14,*(long *)puVar7,0);
LAB_016805f4:
    FUN_01679b94(lVar6,plVar14,*(undefined8 *)(lVar10 + 8));
    (**(code **)(*unaff_x20 + 0x1d8))();
  }
  if (((unaff_x25 != 0) && (lVar6 = FUN_017959a4(), lVar6 != 0)) &&
     (lVar6 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                        Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__),
     lVar6 == 0)) {
FUN_016808ec:
                    /* WARNING: Subroutine does not return */
    FUN_00da544c();
  }
  puVar3 = Method_System_Linq_Enumerable_ToList<TriangulationPoint>__;
  lVar6 = FUN_0167e304();
  if (lVar6 == 0) {
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)Method_UIToggle_OffPressed__);
    if (lVar6 == 0) {
LAB_01680830:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (unaff_x21 != (long *)0x0) {
      lVar10 = *(long *)puVar3;
      bVar2 = *(byte *)(lVar10 + 300);
      if ((*(byte *)(*unaff_x21 + 300) < bVar2) ||
         (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar2 * 8 + -8) != lVar10))
      goto System_OverflowException___ctor;
    }
    FUN_01680948(lVar6);
    FUN_0167e434();
    if ((*(byte *)(lVar6 + 0x50) & 7) != 0) {
      plVar14 = (long *)FUN_0167e290();
      if (plVar14 == (long *)0x0) goto LAB_01680830;
      (**(code **)(*plVar14 + 0x178))(plVar14,lVar6,*(undefined8 *)(*plVar14 + 0x180));
    }
    lVar10 = *unaff_x20;
  }
  else {
    puVar7 = Method_OVRPlugin_<>c_<_cctor>b__796_72__;
    if (*(long *)(lVar6 + 0x10) != 0) goto LAB_016808fc;
    if (unaff_x21 != (long *)0x0) {
      lVar10 = *(long *)puVar3;
      bVar2 = *(byte *)(lVar10 + 300);
      if ((*(byte *)(*unaff_x21 + 300) < bVar2) ||
         (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar2 * 8 + -8) != lVar10)) {
System_OverflowException___ctor:
                    /* WARNING: Subroutine does not return */
        FUN_00da544c();
      }
    }
    FUN_01680b34(lVar6);
    if (0 < *(int *)(lVar6 + 0x20)) {
      FUN_0167f8d0();
    }
    uVar1 = *(uint *)(lVar6 + 0x50);
    if ((uVar1 & 7) != 0) {
      plVar14 = (long *)FUN_0167e290();
      if (plVar14 == (long *)0x0) goto LAB_01680830;
      (**(code **)(*plVar14 + 0x178))(plVar14,lVar6,*(undefined8 *)(*plVar14 + 0x180));
      uVar1 = *(uint *)(lVar6 + 0x50);
    }
    if (((uVar1 & 1) == 0) && ((uVar1 & 6) == 0 || (uVar1 & 0x4000) != 0)) {
      FUN_0167f554();
      *(undefined8 *)(lVar6 + 0x40) = 0;
    }
    lVar10 = *unaff_x20;
    if (*(int *)(lVar6 + 0x24) + *(int *)(lVar6 + 0x20) < 1) {
      pcVar12 = *(code **)(lVar10 + 0x1f8);
      goto LAB_01680804;
    }
  }
  pcVar12 = *(code **)(lVar10 + 0x1e8);
LAB_01680804:
  (*pcVar12)();
  return;
}


