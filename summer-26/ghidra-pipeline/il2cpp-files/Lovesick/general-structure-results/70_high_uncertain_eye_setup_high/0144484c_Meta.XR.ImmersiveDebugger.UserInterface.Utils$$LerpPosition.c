/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Utils$$LerpPosition
ENTRY_POINT: 0144484c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Utils__LerpPosition
               (ulong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,long param_5,
               undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined4 unaff_w20;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined4 unaff_s8;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_1982);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<StandardVelocityCalculator_SamplePoseData>_Dispose__
                      );
    thunk_FUN_00d48444(UnityEngine_XR_Interaction_Toolkit_ILineRenderable_TypeInfo);
    thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_31__);
    thunk_FUN_00d48444(StringLiteral_6971);
    thunk_FUN_00d48444(StringLiteral_4970);
    *(undefined1 *)(unaff_x23 + 0xa38) = 1;
  }
  FUN_017b46ec(param_5,0);
  *(undefined8 *)(param_5 + 0x10) = param_6;
  *(undefined4 *)(param_5 + 0x24) = unaff_w20;
  *(undefined4 *)(param_5 + 0x28) = param_2;
  *(undefined4 *)(param_5 + 0x2c) = param_3;
  *(undefined4 *)(param_5 + 0x30) = param_4;
  *(undefined4 *)(param_5 + 0x34) = unaff_s8;
  *(undefined2 *)(param_5 + 0x20) = 0;
  lVar2 = thunk_FUN_00d62348(*unaff_x22);
  puVar1 = UnityEngine_XR_Interaction_Toolkit_ILineRenderable_TypeInfo;
  if (lVar2 != 0) {
    FUN_017b46ec(lVar2,0);
    *(long *)(param_5 + 0x18) = lVar2;
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_31__;
    if (lVar3 != 0) {
      FUN_01320e50(lVar3,*(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<StandardVelocityCalculator_SamplePoseData>_Dispose__
                  );
      *(long *)(lVar2 + 0x10) = lVar3;
      lVar3 = *(long *)(param_5 + 0x18);
      lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if ((lVar2 != 0) &&
         (FUN_01320e50(lVar2,*(undefined8 *)StringLiteral_1982), puVar1 = StringLiteral_4970,
         lVar3 != 0)) {
        *(long *)(lVar3 + 0x18) = lVar2;
        lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        if (lVar2 != 0) {
          FUN_017b46ec(lVar2,0);
          *(long *)(lVar2 + 0x10) = param_5;
          *(long *)(param_5 + 0x40) = lVar2;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


