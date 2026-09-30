/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture$$.ctor
ENTRY_POINT: 0251d114
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


undefined1  [16] UnityEngine_XR_Interaction_Toolkit_AR_TwistGesture___ctor(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *unaff_x22;
  undefined1 auVar8 [16];
  double unaff_d8;
  undefined8 in_register_00005108;
  double dVar9;
  double in_stack_00000018;
  
  puVar1 = PTR_DAT_033eafc8;
  if (*(long *)(*(long *)(param_1 + 0xb8) + 0x18) == 0) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      param_1 = *unaff_x22;
    }
    uVar7 = **(undefined8 **)(param_1 + 0xb8);
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar3 == 0) goto LAB_0251d340;
    FUN_012d239c(lVar3,uVar7,
                 *(undefined8 *)
                  Method_UnityEngine_Timeline_IntervalTree<RuntimeElement>_IntersectsWith__,0);
    *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x18) = lVar3;
  }
  if (*(int *)(*(long *)Oculus_Platform_Request<ChallengeList>_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar3 = FUN_0251cf90();
  if ((lVar3 == 0) ||
     (lVar3 = FUN_01602744(lVar3,0x3a,0,0),
     puVar1 = Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__, lVar3 == 0)) {
LAB_0251d340:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar6 = *(long *)(lVar3 + 0x18);
  if ((lVar6 != 0) && ((int)lVar6 < 5)) {
    in_stack_00000018 = 0.0;
    if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    uVar7 = *(undefined8 *)(lVar3 + ((lVar6 << 0x20) + -0x100000000 >> 0x1d) + 0x20);
    if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_01731954(0);
    uVar5 = FUN_01756bd0(uVar7,7,uVar4,&stack0x00000018,0);
    if ((uVar5 & 1) == 0) {
      if (*(int *)(*(long *)Method_OVRPlugin_<>c_<_cctor>b__796_105__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar6 = FUN_0202015c(uVar7,*(undefined8 *)StringLiteral_7287,0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar5 = FUN_0201bf00(lVar6,0);
      if ((uVar5 & 1) == 0) goto LAB_0251d328;
      in_stack_00000018 = (double)FUN_01756550(uVar7,0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_01731954(0);
    uVar5 = FUN_01756bd0(uVar7,0xa7,uVar4,&stack0x00000018,0);
    if ((uVar5 & 1) != 0) {
      iVar2 = (int)*(long *)(lVar3 + 0x18);
      if (iVar2 < 4) {
        if (iVar2 < 2) {
          iVar2 = 0;
          dVar9 = 0.0;
        }
        else {
          iVar2 = FUN_0176ee4c(*(undefined8 *)
                                (lVar3 + ((*(long *)(lVar3 + 0x18) << 0x20) + -0x200000000 >> 0x1d)
                                + 0x20),0);
          dVar9 = (double)(iVar2 * 0x3c);
          if ((int)*(long *)(lVar3 + 0x18) < 3) {
            iVar2 = 0;
          }
          else {
            iVar2 = FUN_0176ee4c(*(undefined8 *)
                                  (lVar3 + ((*(long *)(lVar3 + 0x18) << 0x20) + -0x300000000 >> 0x1d
                                           ) + 0x20),0);
          }
        }
        unaff_d8 = in_stack_00000018 + dVar9 + (double)(iVar2 * 0xe10);
        in_register_00005108 = 0;
      }
    }
  }
LAB_0251d328:
  auVar8._8_8_ = in_register_00005108;
  auVar8._0_8_ = unaff_d8;
  return auVar8;
}


