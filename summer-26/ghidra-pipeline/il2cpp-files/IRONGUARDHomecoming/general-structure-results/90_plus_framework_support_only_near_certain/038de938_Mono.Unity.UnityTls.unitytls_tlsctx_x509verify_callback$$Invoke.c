/*
FUNCTION_NAME: Mono.Unity.UnityTls.unitytls_tlsctx_x509verify_callback$$Invoke
ENTRY_POINT: 038de938
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 131
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x038deeac) */
/* WARNING: Removing unreachable block (ram,0x038deb7c) */
/* WARNING: Removing unreachable block (ram,0x038deb80) */
/* WARNING: Removing unreachable block (ram,0x038deb88) */
/* WARNING: Removing unreachable block (ram,0x038ded60) */
/* WARNING: Removing unreachable block (ram,0x038ded9c) */
/* WARNING: Removing unreachable block (ram,0x038ded70) */
/* WARNING: Removing unreachable block (ram,0x038ded98) */
/* WARNING: Removing unreachable block (ram,0x038deda4) */
/* WARNING: Removing unreachable block (ram,0x038dedb0) */
/* WARNING: Removing unreachable block (ram,0x038dedc4) */
/* WARNING: Removing unreachable block (ram,0x038dedd4) */
/* WARNING: Removing unreachable block (ram,0x038dedcc) */
/* WARNING: Removing unreachable block (ram,0x038dedd8) */
/* WARNING: Removing unreachable block (ram,0x038dedf4) */
/* WARNING: Removing unreachable block (ram,0x038dee10) */
/* WARNING: Removing unreachable block (ram,0x038dee14) */
/* WARNING: Removing unreachable block (ram,0x038dee8c) */
/* WARNING: Removing unreachable block (ram,0x038dee20) */
/* WARNING: Removing unreachable block (ram,0x038dee30) */
/* WARNING: Removing unreachable block (ram,0x038deb9c) */
/* WARNING: Removing unreachable block (ram,0x038debc8) */
/* WARNING: Removing unreachable block (ram,0x038debf8) */
/* WARNING: Removing unreachable block (ram,0x038debfc) */
/* WARNING: Removing unreachable block (ram,0x038dec28) */
/* WARNING: Removing unreachable block (ram,0x038dec5c) */
/* WARNING: Removing unreachable block (ram,0x038dec60) */
/* WARNING: Removing unreachable block (ram,0x038deea8) */
/* WARNING: Removing unreachable block (ram,0x038dec7c) */
/* WARNING: Removing unreachable block (ram,0x038deca0) */
/* WARNING: Removing unreachable block (ram,0x038deca8) */
/* WARNING: Removing unreachable block (ram,0x038dee90) */
/* WARNING: Removing unreachable block (ram,0x038decbc) */
/* WARNING: Removing unreachable block (ram,0x038dee94) */
/* WARNING: Removing unreachable block (ram,0x038decc8) */
/* WARNING: Removing unreachable block (ram,0x038decdc) */
/* WARNING: Removing unreachable block (ram,0x038deeb4) */
/* WARNING: Removing unreachable block (ram,0x038decf4) */
/* WARNING: Removing unreachable block (ram,0x038ded18) */
/* WARNING: Removing unreachable block (ram,0x038ded30) */
/* WARNING: Removing unreachable block (ram,0x038ded38) */
/* WARNING: Removing unreachable block (ram,0x038dee5c) */
/* WARNING: Removing unreachable block (ram,0x038ded44) */
/* WARNING: Removing unreachable block (ram,0x038ded50) */
/* WARNING: Removing unreachable block (ram,0x038dee68) */
/* WARNING: Removing unreachable block (ram,0x038dee74) */
/* WARNING: Removing unreachable block (ram,0x038dee9c) */

void Mono_Unity_UnityTls_unitytls_tlsctx_x509verify_callback__Invoke(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  undefined4 unaff_w21;
  
  plVar1 = (long *)(**(code **)(param_1 + 0x3f8))();
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  (**(code **)(*plVar1 + 0x358))(plVar1,unaff_x19[6],0,4,*(undefined8 *)(*plVar1 + 0x360));
  if (*(int *)(*(long *)StringLiteral_2948 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar1 = (long *)FUN_029cff28(unaff_w21,*(undefined8 *)StringLiteral_2946);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar2 = FUN_029cfea8(plVar1,*(undefined8 *)StringLiteral_2947);
  FUN_03952894();
  plVar3 = (long *)(**(code **)(*unaff_x19 + 0x3f8))();
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  (**(code **)(*plVar3 + 0x358))(plVar3,uVar2,0,unaff_w21,*(undefined8 *)(*plVar3 + 0x360));
  lVar5 = *plVar1;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_038deb68;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_01ecb238(plVar1,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_038deb68:
  (*(code *)*puVar4)(plVar1,puVar4[1]);
  return;
}


