/*
FUNCTION_NAME: System.Array$$Sort
ENTRY_POINT: 01697af8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;pose_vector;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void System_Array__Sort(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x21;
  undefined4 uStack0000000000000008;
  
  uStack0000000000000008 = *(undefined4 *)(unaff_x21 + 0x40);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01697af0 with catch @ 01697afc
                        */
  uVar1 = thunk_FUN_00d48444(System_Converter<IBounded,_Triangle>_TypeInfo);
  uVar1 = thunk_FUN_00d61fa0(uVar1,&stack0x00000008);
  FUN_017a7f78(uVar1,0);
  FUN_00ac2be8();
  FUN_00acb0b4();
  FUN_00adb25c();
  thunk_FUN_00d48444(OVRPlugin_OVRP_1_38_0_TypeInfo);
  uVar1 = FUN_017b63dc();
  thunk_FUN_00d48444(
                    UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                    );
  uVar2 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  FUN_01679968(uVar2,uVar1,0);
  uVar1 = thunk_FUN_00d48444(StringLiteral_10139);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar2,uVar1);
}


