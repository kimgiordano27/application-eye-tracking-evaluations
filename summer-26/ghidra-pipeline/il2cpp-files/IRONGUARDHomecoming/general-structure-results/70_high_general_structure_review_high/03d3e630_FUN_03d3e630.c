/*
FUNCTION_NAME: FUN_03d3e630
ENTRY_POINT: 03d3e630
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void FUN_03d3e630(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  puVar7 = PTR_DAT_04574788;
  puVar6 = StringLiteral_2545;
  puVar5 = Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_44__;
  puVar4 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector3_<SetWidget>b__7_1__;
  puVar3 = 
  Method_Oculus_Interaction_PointerInteractor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_DoPostprocess__
  ;
  puVar2 = Method_Unity_Collections_NativeArray<BoneWeight>__ctor__;
  puVar1 = 
  Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_set_mousePosition__;
  if ((DAT_0483a142 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_UI_DebugUIHandlerVector3_<SetWidget>b__7_1__);
    thunk_FUN_01efb3a4(StringLiteral_2545);
    thunk_FUN_01efb3a4(PTR_DAT_04574788);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<BoneWeight>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_44__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_DoPostprocess__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_set_mousePosition__
                      );
    DAT_0483a142 = 1;
  }
  FUN_035ac8e8(param_1,0);
  uVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
  FUN_0317f884(uVar8,param_2,*(undefined8 *)puVar6);
  *(undefined8 *)(param_1 + 0x18) = uVar8;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x18),uVar8);
  uVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_030ba120(uVar8,param_2,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x20) = uVar8;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x20),uVar8);
  uVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
  FUN_0308cc2c(uVar8,param_2,*(undefined8 *)puVar7);
  *(undefined8 *)(param_1 + 0x28) = uVar8;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x28),uVar8);
  lVar9 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_04051010(lVar9,0);
  if (lVar9 != 0) {
    FUN_04051090(lVar9,1,0);
    FUN_04077338(lVar9,0x3d,0);
    *(long *)(param_1 + 0x10) = lVar9;
    thunk_FUN_01f51358((long *)(param_1 + 0x10),lVar9);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


