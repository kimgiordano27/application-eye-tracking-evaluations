/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<OVRRaycaster.RaycastHit>
ENTRY_POINT: 022d10fc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 125
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_5;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x022d1448) */
/* WARNING: Removing unreachable block (ram,0x022d1190) */
/* WARNING: Removing unreachable block (ram,0x022d11a4) */
/* WARNING: Removing unreachable block (ram,0x022d11a8) */
/* WARNING: Removing unreachable block (ram,0x022d11b4) */
/* WARNING: Removing unreachable block (ram,0x022d11c4) */
/* WARNING: Removing unreachable block (ram,0x022d11d4) */
/* WARNING: Removing unreachable block (ram,0x022d11e8) */
/* WARNING: Removing unreachable block (ram,0x022d1204) */
/* WARNING: Removing unreachable block (ram,0x022d1218) */
/* WARNING: Removing unreachable block (ram,0x022d1238) */
/* WARNING: Removing unreachable block (ram,0x022d1444) */
/* WARNING: Removing unreachable block (ram,0x022d1248) */
/* WARNING: Removing unreachable block (ram,0x022d125c) */
/* WARNING: Removing unreachable block (ram,0x022d1260) */
/* WARNING: Removing unreachable block (ram,0x022d13b8) */
/* WARNING: Removing unreachable block (ram,0x022d12a0) */
/* WARNING: Removing unreachable block (ram,0x022d13c0) */
/* WARNING: Removing unreachable block (ram,0x022d12c4) */
/* WARNING: Removing unreachable block (ram,0x022d13c8) */
/* WARNING: Removing unreachable block (ram,0x022d12ec) */
/* WARNING: Removing unreachable block (ram,0x022d1314) */
/* WARNING: Removing unreachable block (ram,0x022d1330) */
/* WARNING: Removing unreachable block (ram,0x022d12f8) */
/* WARNING: Removing unreachable block (ram,0x022d1334) */
/* WARNING: Removing unreachable block (ram,0x022d134c) */
/* WARNING: Removing unreachable block (ram,0x022d1354) */
/* WARNING: Removing unreachable block (ram,0x022d137c) */
/* WARNING: Removing unreachable block (ram,0x022d1360) */
/* WARNING: Removing unreachable block (ram,0x022d136c) */
/* WARNING: Removing unreachable block (ram,0x022d1388) */
/* WARNING: Removing unreachable block (ram,0x022d1398) */
/* WARNING: Removing unreachable block (ram,0x022d13a8) */
/* WARNING: Removing unreachable block (ram,0x022d13ac) */
/* WARNING: Removing unreachable block (ram,0x022d13b4) */
/* WARNING: Removing unreachable block (ram,0x022d1450) */

void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<OVRRaycaster_RaycastHit>
               (long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x25;
  long unaff_x29;
  
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  (**(code **)(*param_1 + 0x198))();
  FUN_041c73ec();
  lVar2 = *unaff_x25;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_022d117c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_022d117c:
  (*(code *)*puVar1)();
  if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


