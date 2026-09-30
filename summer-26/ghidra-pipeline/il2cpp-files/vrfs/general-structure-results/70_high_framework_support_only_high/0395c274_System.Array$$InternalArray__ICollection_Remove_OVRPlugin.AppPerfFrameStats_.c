/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.AppPerfFrameStats>
ENTRY_POINT: 0395c274
PROGRAM: vrfs-libil2cpp.so
SCORE: 78
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__ICollection_Remove<OVRPlugin_AppPerfFrameStats>
          (long param_1,long *param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  code *pcVar6;
  
                    /* try { // try from 0395c278 to 03a5c27f has its CatchHandler @ 0395c280 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0395c260 with catch @ 0395c280
                       catch(type#2 @ 00000000) { ... } // from try @ 0395c278 with catch @ 0395c280
                        */
                    /* try { // try from 0395c284 to 03a5c2df has its CatchHandler @ 0395c284
                       catch() { ... } // from try @ 0395c284 with catch @ 0395c284
                       catch() { ... } // from try @ 0395c300 with catch @ 0395c284
                       catch() { ... } // from try @ 0395c340 with catch @ 0395c284
                       catch() { ... } // from try @ 0395c370 with catch @ 0395c284 */
  uVar2 = (**(code **)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 400) + 8))(param_2);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  lVar5 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
  lVar3 = *(long *)(lVar5 + 0xa8);
  pcVar6 = *(code **)(*(long *)(lVar5 + 0xa0) + 8);
  if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
    lVar3 = FUN_015c2790(lVar3);
  }
  if (param_2 != (long *)0x0) {
    if (*(long *)(*param_2 + 0x40) != *(long *)(lVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_0160f170(param_2);
    }
    puVar4 = (undefined8 *)thunk_FUN_015d06c4();
    uVar1 = (*pcVar6)(param_1,*puVar4,puVar4[1],
                      *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xa0));
    if ((int)uVar1 < 0) {
      return 0;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != 0) {
      if (*(uint *)(lVar3 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      return *(undefined8 *)(lVar3 + (long)(int)uVar1 * 0x20 + 0x38);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


