/*
FUNCTION_NAME: Oculus.Interaction.HandGrab.ObjectPull$$UpdateTarget
ENTRY_POINT: 035bb390
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_7;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior
*/


void Oculus_Interaction_HandGrab_ObjectPull__UpdateTarget(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  long unaff_x19;
  long *unaff_x20;
  uint uVar7;
  undefined8 *unaff_x21;
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(
                    Method_Unity_VisualScripting_StaticFunctionInvoker<Vector3,_float,_Vector3>__ctor__
                    );
  *(undefined1 *)(unaff_x19 + 0x5c6) = 1;
  plVar2 = (long *)thunk_FUN_01f117cc(*unaff_x21);
  FUN_03416d98(plVar2,0);
  if (unaff_x20 != (long *)0x0) {
    lVar3 = (**(code **)(*unaff_x20 + 0x328))();
    if ((plVar2 != (long *)0x0) &&
       (FUN_03418748(plVar2,*(undefined8 *)
                             Method_Unity_VisualScripting_StaticFunctionInvoker<Vector2,_Vector2,_Vector2>__ctor__
                     ,0), puVar1 = Method_UnityEngine_GameObject_GetComponents<DOTweenAnimation>__,
       lVar3 != 0)) {
      uVar6 = *(uint *)(lVar3 + 0x18);
      if (0 < (int)uVar6) {
        uVar7 = 0;
        do {
          if (uVar7 != 0) {
            FUN_03418748(plVar2,*(undefined8 *)puVar1,0);
            uVar6 = *(uint *)(lVar3 + 0x18);
          }
          if (uVar6 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          plVar4 = *(long **)(lVar3 + (long)(int)uVar7 * 8 + 0x20);
          if (plVar4 == (long *)0x0) goto LAB_035bb49c;
          uVar5 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
          FUN_03418748(plVar2,uVar5,0);
          uVar6 = *(uint *)(lVar3 + 0x18);
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)uVar6);
      }
      FUN_03418748(plVar2,*(undefined8 *)
                           Method_Unity_VisualScripting_StaticFunctionInvoker<Vector3,_float,_Vector3>__ctor__
                   ,0);
                    /* WARNING: Could not recover jumptable at 0x035bb498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
      return;
    }
  }
LAB_035bb49c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


