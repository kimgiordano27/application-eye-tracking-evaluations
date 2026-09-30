/*
FUNCTION_NAME: UnityEngine.InputSystem.Utilities.InputActionTrace.Enumerator$$Dispose
ENTRY_POINT: 059a59e0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x059a5b58) */

void UnityEngine_InputSystem_Utilities_InputActionTrace_Enumerator__Dispose(long param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long in_stack_00000018;
  
  FUN_02f08768(*(undefined8 *)(param_1 + 0x1b0));
  FUN_02f08768(Method_Oculus_Platform_Message<LivestreamingStartResult>__ctor__);
  *(undefined1 *)(unaff_x21 + 0xb77) = 1;
  if (-1 < unaff_w20) {
    in_stack_00000018 = unaff_x19[0x4c];
    iVar2 = FUN_0624b854(&stack0x00000018,0);
    if (unaff_w20 <= iVar2 + -1) {
      iVar2 = *(int *)((long)unaff_x19 + 0x2d4);
      FUN_059a5ba4();
      iVar1 = *(int *)((long)unaff_x19 + 0x2d4);
      if (iVar2 != iVar1) {
        if (*(int *)(*(long *)
                      Method_Oculus_Platform_Message<NetSyncVoipAttenuationValueList>__ctor__ + 0xe4
                    ) == 0) {
          thunk_FUN_02f6670c();
        }
        plVar3 = (long *)FUN_0442be88(iVar2,iVar1,
                                      *(undefined8 *)
                                       Method_Oculus_Platform_Message<NetSyncSetSessionPropertyResult>_get_Data__
                                     );
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        FUN_0635e004();
        (**(code **)(*unaff_x19 + 0x188))();
        if (plVar3 != (long *)0x0) {
          lVar5 = *plVar3;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_067c91b0) {
                puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_059a5b04;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined8 *)FUN_02f421d0(plVar3,*(long *)PTR_DAT_067c91b0,0);
LAB_059a5b04:
          (*(code *)*puVar4)(plVar3,puVar4[1]);
        }
      }
      if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStartResult>__ctor__ + 0xe4)
          == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_06361d7c();
    }
  }
  return;
}


