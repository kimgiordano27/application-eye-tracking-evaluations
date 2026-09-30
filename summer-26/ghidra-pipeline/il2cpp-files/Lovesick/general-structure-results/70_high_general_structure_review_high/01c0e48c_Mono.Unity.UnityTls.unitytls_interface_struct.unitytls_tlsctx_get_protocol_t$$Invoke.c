/*
FUNCTION_NAME: Mono.Unity.UnityTls.unitytls_interface_struct.unitytls_tlsctx_get_protocol_t$$Invoke
ENTRY_POINT: 01c0e48c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_protocol_t__Invoke
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  
  lVar3 = thunk_FUN_00d62348(param_1);
  puVar2 = Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__;
  puVar1 = 
  Method_OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_get_IsCompleted__
  ;
  if (lVar3 != 0) {
    FUN_011c21b8();
    FUN_0129a054();
    FUN_01780344(*(undefined8 *)puVar2,0);
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar2 = Method_UnityEngine_Rendering_VolumeStack_GetComponent<ColorAdjustments>__;
    puVar1 = Method_Sirenix_Serialization_Serializer<byte>__ctor__;
    if (lVar3 != 0) {
      FUN_011c21b8();
      FUN_0129a054();
      FUN_01780344(*(undefined8 *)puVar1,0);
      lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      puVar2 = Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__;
      puVar1 = Method_System_Xml_Schema_XsdBuilder_InitSchema__;
      if (lVar3 != 0) {
        FUN_011c21b8();
        FUN_0129a054();
        FUN_01780344(*(undefined8 *)puVar2,0);
        lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        puVar2 = StringLiteral_8318;
        puVar1 = System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo;
        if (lVar3 != 0) {
          FUN_011c21b8();
          FUN_0129a054();
          FUN_01780344(*(undefined8 *)puVar1,0);
          lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          puVar2 = StringLiteral_7427;
          puVar1 = Method_OVRControllerTest_<>c_<Start>b__4_9__;
          if (lVar3 != 0) {
            FUN_011c21b8();
            FUN_0129a054();
            FUN_01780344(*(undefined8 *)puVar1,0);
            lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
            puVar2 = StringLiteral_3349;
            puVar1 = PTR_DAT_033edda8;
            if (lVar3 != 0) {
              FUN_011c21b8();
              FUN_0129a054();
              FUN_01780344(*(undefined8 *)puVar2,0);
              lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
              if (lVar3 != 0) {
                FUN_011c21b8();
                FUN_0129a054();
                *(undefined8 *)(unaff_x19 + 0x38) = unaff_x20;
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


