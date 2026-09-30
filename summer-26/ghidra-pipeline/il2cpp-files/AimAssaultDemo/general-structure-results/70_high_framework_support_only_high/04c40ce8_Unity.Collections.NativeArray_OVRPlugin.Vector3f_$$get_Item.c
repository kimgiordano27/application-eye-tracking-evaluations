/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$get_Item
ENTRY_POINT: 04c40ce8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04c40e38) */

void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__get_Item(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long *plVar6;
  long *unaff_x21;
  
  puVar1 = PTR_DAT_07d99048;
  plVar6 = *(long **)(unaff_x20 + 0x700);
                    /* catch() { ... } // from try @ 04c40c64 with catch @ 04c40cf0
                       catch() { ... } // from try @ 04c40ce0 with catch @ 04c40cf0 */
  do {
                    /* try { // try from 04c40cf4 to 04d40cf7 has its CatchHandler @ 04c40d00 */
    lVar3 = *unaff_x19;
                    /* try { // try from 04c40cf8 to 04d40d03 has its CatchHandler @ 04c40ba0 */
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04c40cf4 with catch @ 04c40d00
                        */
    if (uVar4 != 0) {
                    /* try { // try from 04c40d04 to 04d41003 has its CatchHandler @ 04c40d04
                       catch() { ... } // from try @ 04c40d04 with catch @ 04c40d04
                       catch() { ... } // from try @ 04c410c4 with catch @ 04c40d04
                       catch() { ... } // from try @ 04c41188 with catch @ 04c40d04
                       catch() { ... } // from try @ 04c41234 with catch @ 04c40d04 */
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *plVar6) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_04c40d40;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0377596c();
LAB_04c40d40:
    uVar4 = (*(code *)*puVar2)();
    if ((uVar4 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar3 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 == 0) goto LAB_04c40df0;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_04c40d9c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0377596c();
LAB_04c40d9c:
    lVar3 = (*(code *)*puVar2)();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    FUN_073140c8(lVar3,0);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == *unaff_x21) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_04c40e0c;
    }
  }
LAB_04c40df0:
  puVar2 = (undefined8 *)FUN_0377596c();
LAB_04c40e0c:
  (*(code *)*puVar2)();
  return;
}


