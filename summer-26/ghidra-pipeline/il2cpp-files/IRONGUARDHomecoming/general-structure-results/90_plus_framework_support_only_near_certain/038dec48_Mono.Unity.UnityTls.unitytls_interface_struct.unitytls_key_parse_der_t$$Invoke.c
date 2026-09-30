/*
FUNCTION_NAME: Mono.Unity.UnityTls.unitytls_interface_struct.unitytls_key_parse_der_t$$Invoke
ENTRY_POINT: 038dec48
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 157
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x038deeac) */

void Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_key_parse_der_t__Invoke(long param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  ulong uVar8;
  
  uVar1 = *(undefined4 *)(unaff_x20 + 0x10);
  if (*(int *)(**(long **)(param_1 + 0x7f8) + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar3 = (long *)FUN_029cff28(uVar1,*(undefined8 *)StringLiteral_2946);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = FUN_029cfea8(plVar3,*(undefined8 *)StringLiteral_2947);
  if (0 < *(int *)(unaff_x20 + 0x10)) {
    uVar8 = 0;
    do {
      uVar2 = FUN_03409f80();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined1 *)(lVar4 + 0x20 + uVar8) = uVar2;
      uVar8 = uVar8 + 1;
    } while ((long)uVar8 < (long)*(int *)(unaff_x20 + 0x10));
  }
  plVar5 = (long *)(**(code **)(*unaff_x19 + 0x3f8))();
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  (**(code **)(*plVar5 + 0x358))
            (plVar5,lVar4,0,*(undefined4 *)(unaff_x20 + 0x10),*(undefined8 *)(*plVar5 + 0x360));
  if (plVar3 != (long *)0x0) {
    lVar4 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar8 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_038dee68;
        }
        uVar8 = uVar8 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_038dee68:
    (*(code *)*puVar6)(plVar3,puVar6[1]);
  }
  return;
}


