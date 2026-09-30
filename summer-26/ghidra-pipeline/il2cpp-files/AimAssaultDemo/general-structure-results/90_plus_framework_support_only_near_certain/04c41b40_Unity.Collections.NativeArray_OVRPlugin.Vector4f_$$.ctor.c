/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$.ctor
ENTRY_POINT: 04c41b40
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


/* WARNING: Removing unreachable block (ram,0x04c41ca8) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4f>___ctor
               (undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x21;
  long *plVar8;
  
  plVar8 = *(long **)(unaff_x21 + 0x6f8);
  plVar3 = (long *)FUN_051395a8(param_2,*param_1);
  puVar2 = PTR_DAT_07d99048;
  puVar1 = PTR_DAT_07d89700;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  do {
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04c41bb0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c(plVar3,*(long *)puVar1,0);
LAB_04c41bb0:
                    /* try { // try from 04c41bb4 to 04d41bb7 has its CatchHandler @ 04c41bd8 */
                    /* try { // try from 04c41bb8 to 04d41bbf has its CatchHandler @ 04c41bdc */
    uVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar6 & 1) == 0) {
      if (plVar3 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto Unity_Collections_NativeArray<OVRPlugin_Vector4f>___ctor;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
                    /* try { // try from 04c41bc0 to 04d41bc3 has its CatchHandler @ 04c41920 */
    lVar5 = *plVar3;
                    /* try { // try from 04c41bc4 to 04d41bc7 has its CatchHandler @ 04c41bd0 */
                    /* try { // try from 04c41bc8 to 04d41bfb has its CatchHandler @ 04c41920 */
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 04c41bc4 with catch @ 04c41bd0
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 04c41b00 with catch @ 04c41bd4
                        */
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04c41c0c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c(plVar3,*(long *)puVar2,0);
LAB_04c41c0c:
    lVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    FUN_073140c8(lVar5,0);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *plVar8) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_04c41c7c;
    }
  }
Unity_Collections_NativeArray<OVRPlugin_Vector4f>___ctor:
  puVar4 = (undefined8 *)FUN_0377596c(plVar3,*plVar8,0);
LAB_04c41c7c:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}


