/*
FUNCTION_NAME: Unity.Mathematics.math$$uint4x4
ENTRY_POINT: 03b3ca5c
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


undefined8 Unity_Mathematics_math__uint4x4(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  int *piVar5;
  undefined8 unaff_x19;
  long *unaff_x20;
  long lVar6;
  
                    /* try { // try from 03b3ca60 to 03c3ca8b has its CatchHandler @ 03b3ca44 */
  plVar3 = (long *)__cxa_begin_catch();
  lVar6 = *plVar3;
  __cxa_end_catch();
  if (unaff_x20 != (long *)0x0) {
    lVar4 = *unaff_x20;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03b3c9d4;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_03b3c9d4:
    (*(code *)*puVar1)();
  }
  if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(lVar6);
  }
  uVar2 = FUN_0340eec4();
  if ((uVar2 & 1) == 0) {
    unaff_x19 = FUN_0340ebc0();
  }
  return unaff_x19;
}


