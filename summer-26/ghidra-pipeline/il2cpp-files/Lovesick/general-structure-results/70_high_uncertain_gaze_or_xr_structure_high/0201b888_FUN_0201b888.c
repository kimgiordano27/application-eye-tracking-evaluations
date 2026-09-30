/*
FUNCTION_NAME: FUN_0201b888
ENTRY_POINT: 0201b888
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


void FUN_0201b888(undefined8 param_1,int param_2,int param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar8;
  int local_34;
  undefined *puVar7;
  
  puVar7 = OVRUnityHumanoidSkeletonRetargeter_JointAdjustment_TypeInfo;
                    /* try { // try from 0201b8a8 to 0211b8e3 has its CatchHandler @ 0201b5d8 */
  if ((DAT_0378097b & 1) == 0) {
    thunk_FUN_00d48444(Oculus_Interaction_PointableCanvasModule_TypeInfo);
    thunk_FUN_00d48444(OVRUnityHumanoidSkeletonRetargeter_JointAdjustment_TypeInfo);
    thunk_FUN_00d48444(TMPro_TMP_InputField_SubmitEvent_TypeInfo);
    DAT_0378097b = 1;
  }
  local_34 = 0;
  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_017e3eac(param_1,0);
  puVar1 = Oculus_Interaction_PointableCanvasModule_TypeInfo;
  if (param_2 < 0) {
    uVar2 = thunk_FUN_00d48444(
                              Method_System_Xml_Schema_XmlSchemaValidator_InternalValidateEndElement__
                              );
    uVar5 = FUN_015e2414(uVar2,0);
    thunk_FUN_00d48444(StringLiteral_8570);
    uVar2 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar7 = StringLiteral_1268;
  }
  else {
    if (0 < param_3) {
      puVar8 = Method_Oculus_Interaction_IndexPinchSelector_<>c_<_ctor>b__20_0__;
      if ((param_2 <= param_3) &&
         ((param_4 == 0 ||
          (puVar8 = Method_UnityEngine_ProBuilder_KdTree_Math_TypeMath<float>__ctor__,
          *(int *)(param_4 + 0x10) < 0x105)))) {
        uVar2 = FUN_0201bb60(param_2,param_3,param_4,&local_34);
        plVar3 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar1);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_015fc7ec(plVar3,uVar2,1,0);
        uVar4 = (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
        if ((uVar4 & 1) != 0) {
          if (((param_4 != 0) && (*(int *)(param_4 + 0x10) != 0)) && (local_34 == 6)) {
            uVar2 = thunk_FUN_00d48444(StringLiteral_3033);
            uVar2 = FUN_00da4fb8(uVar2,1);
            FUN_00ac2be8();
            FUN_00acb0b4(uVar2,param_4);
            FUN_00adb25c(uVar2,0,param_4);
            uVar5 = thunk_FUN_00d48444(Method_System_Diagnostics_ProcessWaitHandle__ctor__);
            uVar5 = FUN_015e239c(uVar5,uVar2,0);
            thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcvtq_n_f64_s64__);
            uVar2 = thunk_FUN_00d62348();
            FUN_00ac2be8();
            FUN_017d61ac(uVar2,uVar5,0);
            goto LAB_0201bb48;
          }
          FUN_0200f2d0(local_34,*(undefined8 *)TMPro_TMP_InputField_SubmitEvent_TypeInfo,0);
        }
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_017e4158(param_1,plVar3,0);
        return;
      }
      uVar2 = thunk_FUN_00d48444(puVar8);
      uVar5 = FUN_015e2414(uVar2,0);
      thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
      uVar2 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      FUN_016f2f28(uVar2,uVar5,0);
      goto LAB_0201bb48;
    }
    uVar2 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_91__);
    uVar5 = FUN_015e2414(uVar2,0);
    thunk_FUN_00d48444(StringLiteral_8570);
    uVar2 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar7 = Method_System_Text_Latin1Encoding_GetMaxCharCount__;
  }
  uVar6 = thunk_FUN_00d48444(puVar7);
  FUN_016efd4c(uVar2,uVar6,uVar5,0);
LAB_0201bb48:
  uVar5 = thunk_FUN_00d48444(System_Func<DateTime>_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar2,uVar5);
}


