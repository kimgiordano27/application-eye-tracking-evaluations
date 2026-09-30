/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 04c411d0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x04c41308) */

void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__System_Collections_IEnumerable_GetEnumerator
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong in_x9;
  int *piVar4;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  
  do {
    if (in_x9 != 0) {
      piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == param_3) {
                    /* try { // try from 04c4120c to 04d41233 has its CatchHandler @ 04c41248 */
          puVar1 = (undefined8 *)(param_1 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_04c41210;
        }
        in_x9 = in_x9 - 1;
        piVar4 = piVar4 + 4;
      } while (in_x9 != 0);
    }
    puVar1 = (undefined8 *)FUN_0377596c();
LAB_04c41210:
    uVar2 = (*(code *)*puVar1)();
    if ((uVar2 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar3 = *unaff_x19;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 == 0) goto LAB_04c412c0;
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *unaff_x19;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
                    /* try { // try from 04c41234 to 04d4123f has its CatchHandler @ 04c40d04 */
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
                    /* try { // try from 04c41240 to 04d41247 has its CatchHandler @ 04c41248 */
        if (*(long *)(piVar4 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
          goto Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Equals;
        }
        uVar2 = uVar2 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_0377596c();
Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Equals:
    lVar3 = (*(code *)*puVar1)();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    FUN_073140c8(lVar3,0);
    param_1 = *unaff_x19;
    param_3 = *unaff_x20;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar4 = piVar4 + 4;
    if (uVar2 == 0) break;
    if (*(long *)(piVar4 + -2) == *unaff_x21) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_04c412dc;
    }
  }
LAB_04c412c0:
  puVar1 = (undefined8 *)FUN_0377596c();
LAB_04c412dc:
  (*(code *)*puVar1)();
  return;
}


