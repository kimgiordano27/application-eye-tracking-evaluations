/*
FUNCTION_NAME: Mono.Unity.UnityTls.unitytls_interface_struct.unitytls_errorstate_create_t$$Invoke
ENTRY_POINT: 038de9f0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 135
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
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
/* WARNING: Removing unreachable block (ram,0x038dee58) */
/* WARNING: Removing unreachable block (ram,0x038dee9c) */

void Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_errorstate_create_t__Invoke(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *in_x9;
  ulong uVar3;
  int *piVar4;
  long *unaff_x22;
  
  (*in_x9)();
  lVar2 = *unaff_x22;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_038deb68;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_038deb68:
  (*(code *)*puVar1)();
  return;
}


