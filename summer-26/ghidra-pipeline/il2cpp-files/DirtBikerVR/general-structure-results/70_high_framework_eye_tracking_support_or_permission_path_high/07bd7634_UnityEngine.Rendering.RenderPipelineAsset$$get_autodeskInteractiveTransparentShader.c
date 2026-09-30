/*
FUNCTION_NAME: UnityEngine.Rendering.RenderPipelineAsset$$get_autodeskInteractiveTransparentShader
ENTRY_POINT: 07bd7634
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_possible_biometrics_hits_1
*/


undefined8 UnityEngine_Rendering_RenderPipelineAsset__get_autodeskInteractiveTransparentShader(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int unaff_w19;
  long *plVar7;
  long *unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  
  do {
    do {
      do {
        unaff_x23 = unaff_x23 + 1;
        if ((long)(int)*(uint *)(unaff_x22 + 0x18) <= (long)unaff_x23) {
          return 1;
        }
        if (*(uint *)(unaff_x22 + 0x18) <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        plVar7 = *(long **)(unaff_x24 + unaff_x23 * 8);
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar1 = FUN_07c9e200(plVar7,0,0);
      } while ((uVar1 & 1) != 0);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uVar1 = FUN_07bd1ac4(plVar7);
    } while ((uVar1 & 1) == 0);
    if (unaff_w19 < 2) {
      if (unaff_w19 == 0) {
        puVar5 = (undefined8 *)(*plVar7 + 0x188);
        puVar6 = (undefined8 *)(*plVar7 + 400);
      }
      else {
        if (unaff_w19 != 1) {
UnityEngine_Rendering_RenderPipelineAsset__get_defaultLineMaterial:
          uVar2 = thunk_FUN_03af1434(OVREyeGaze_TypeInfo);
          uVar2 = thunk_FUN_03ac70f4(uVar2,&stack0x0000000c);
          thunk_FUN_03af1434(PTR_DAT_08491280);
          uVar3 = thunk_FUN_03ac74bc();
          uVar4 = thunk_FUN_03af1434(PTR_DAT_084936d8);
          FUN_066b4278(uVar3,uVar4,uVar2,0,0);
          uVar2 = thunk_FUN_03af1434(OVRFaceExpressions_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_03a8a884(uVar3,uVar2);
        }
        puVar5 = (undefined8 *)(*plVar7 + 0x1b8);
        puVar6 = (undefined8 *)(*plVar7 + 0x1c0);
      }
    }
    else if (unaff_w19 == 2) {
      puVar5 = (undefined8 *)(*plVar7 + 0x198);
      puVar6 = (undefined8 *)(*plVar7 + 0x1a0);
    }
    else {
      if (unaff_w19 != 3) goto UnityEngine_Rendering_RenderPipelineAsset__get_defaultLineMaterial;
      puVar5 = (undefined8 *)(*plVar7 + 0x1a8);
      puVar6 = (undefined8 *)(*plVar7 + 0x1b0);
    }
    (*(code *)*puVar5)(plVar7,*puVar6);
  } while( true );
}


