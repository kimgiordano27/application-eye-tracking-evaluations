/*
FUNCTION_NAME: Unity.Properties.ContainerPropertyBag<__Il2CppFullySharedGenericType>$$.cctor
ENTRY_POINT: 0296ebcc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0296ec6c) */

void Unity_Properties_ContainerPropertyBag<__Il2CppFullySharedGenericType>___cctor(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *in_x9;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  long *unaff_x20;
  
  (*in_x9)();
  (**(code **)(*unaff_x20 + 0x198))();
  lVar2 = *unaff_x19;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_0296ec44;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_0296ec44:
  (*(code *)*puVar1)();
  return;
}


