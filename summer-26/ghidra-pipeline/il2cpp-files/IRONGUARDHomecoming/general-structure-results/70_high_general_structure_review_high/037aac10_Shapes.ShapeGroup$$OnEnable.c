/*
FUNCTION_NAME: Shapes.ShapeGroup$$OnEnable
ENTRY_POINT: 037aac10
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


void Shapes_ShapeGroup__OnEnable(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  code *in_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  
  uVar1 = (*in_x9)();
  if ((unaff_x22 & 1) == 0) {
    FUN_03405678(uVar1,*(undefined8 *)StringLiteral_486,0);
    (**(code **)(*unaff_x21 + 0x5e8))();
    return;
  }
  FUN_03405678(uVar1,*(undefined8 *)StringLiteral_484,0);
  (**(code **)(*unaff_x21 + 0x5e8))();
  plVar2 = *(long **)(unaff_x19 + 0x30);
  if (plVar2 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x5d8))(plVar2,*(undefined8 *)(*plVar2 + 0x5e0));
    *(undefined8 *)(unaff_x19 + 0x40) = uVar1;
    thunk_FUN_01f51358();
    if ((unaff_x20 != 0) && (lVar3 = FUN_04032eb8(), lVar3 != 0)) {
      if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      uVar1 = *(undefined8 *)(lVar3 + 0x20);
      if (*(int *)(*(long *)
                    Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)
                            Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                          );
      }
      uVar1 = FUN_034e4458(uVar1,0);
      if (*(int *)(*(long *)
                    Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_get_valid__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)
                            Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_get_valid__
                          );
      }
      lVar3 = FUN_040857c8(uVar1,0);
      plVar2 = (long *)(unaff_x19 + 0x38);
      *plVar2 = lVar3;
      thunk_FUN_01f51358(plVar2,lVar3);
      lVar3 = *plVar2;
      uVar1 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_476);
      System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
                ();
      if (lVar3 != 0) {
        FUN_0406ea38(lVar3,uVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


