/*
FUNCTION_NAME: Shapes.ShapeGroup$$UpdateChildShapes
ENTRY_POINT: 037aac70
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


void Shapes_ShapeGroup__UpdateChildShapes(void)

{
  long lVar1;
  long unaff_x19;
  undefined8 uVar2;
  long *plVar3;
  
  lVar1 = FUN_04032eb8();
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    if (*(int *)(*(long *)
                  Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)
                          Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                        );
    }
    uVar2 = FUN_034e4458(uVar2,0);
    if (*(int *)(*(long *)
                  Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_get_valid__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)
                          Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_get_valid__
                        );
    }
    lVar1 = FUN_040857c8(uVar2,0);
    plVar3 = (long *)(unaff_x19 + 0x38);
    *plVar3 = lVar1;
    thunk_FUN_01f51358(plVar3,lVar1);
    lVar1 = *plVar3;
    uVar2 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_476);
    System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
              ();
    if (lVar1 != 0) {
      FUN_0406ea38(lVar1,uVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


