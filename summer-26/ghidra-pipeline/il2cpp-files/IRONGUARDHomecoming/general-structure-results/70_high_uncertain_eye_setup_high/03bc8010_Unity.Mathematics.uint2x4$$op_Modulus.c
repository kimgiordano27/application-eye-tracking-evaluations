/*
FUNCTION_NAME: Unity.Mathematics.uint2x4$$op_Modulus
ENTRY_POINT: 03bc8010
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03bc80d8) */
/* WARNING: Removing unreachable block (ram,0x03bc80f4) */

void Unity_Mathematics_uint2x4__op_Modulus(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  
  if (**(long **)(**(long **)(param_1 + 0xf60) + 0xb8) != 0) {
    FUN_03bc8258();
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar2 = (long *)FUN_03b2468c(0);
  if (*(long *)(unaff_x19 + 0x88) != 0) {
    FUN_03b208bc(*(long *)(unaff_x19 + 0x88),0);
  }
  *(undefined1 *)(unaff_x19 + 0x94) = 0;
  FUN_03bc6bd8();
  FUN_03bc2bc0();
  if (plVar2 != (long *)0x0) {
    lVar4 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03bc80c0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar2,*(long *)puVar1,0);
LAB_03bc80c0:
    (*(code *)*puVar3)(plVar2,puVar3[1]);
  }
  *(undefined4 *)(unaff_x19 + 0x90) = 0xffffffff;
  return;
}


