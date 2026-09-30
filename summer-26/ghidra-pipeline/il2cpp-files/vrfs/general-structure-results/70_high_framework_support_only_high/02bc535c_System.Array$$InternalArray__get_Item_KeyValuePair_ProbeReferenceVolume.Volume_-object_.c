/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<KeyValuePair<ProbeReferenceVolume.Volume,-object>>
ENTRY_POINT: 02bc535c
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Array__InternalArray__get_Item<KeyValuePair<ProbeReferenceVolume_Volume,_object>>(void)

{
  int iVar1;
  ulong uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x19;
  
  uVar2 = FUN_051d94d4();
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (unaff_x19[9] != 0) {
    uVar2 = FUN_036e0e70(unaff_x19[9],0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (unaff_x19[9] != 0) {
      iVar1 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(unaff_x19[9],0);
      if (iVar1 == 2) {
        UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x19 + 600);
      }
      else {
        iVar1 = (int)unaff_x19[3];
        if (iVar1 == 2) {
          UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x19 + 0x288);
                    /* try { // try from 02bc53e8 to 02cc56b3 has its CatchHandler @ 02bc53e8
                       catch() { ... } // from try @ 02bc53e8 with catch @ 02bc53e8
                       catch() { ... } // from try @ 02bc5728 with catch @ 02bc53e8
                       catch() { ... } // from try @ 02bc5774 with catch @ 02bc53e8
                       catch() { ... } // from try @ 02bc5788 with catch @ 02bc53e8
                       catch() { ... } // from try @ 02bc57c8 with catch @ 02bc53e8
                       catch() { ... } // from try @ 02bc5804 with catch @ 02bc53e8 */
        }
        else if (iVar1 == 1) {
          UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x19 + 0x278);
        }
        else {
          if (iVar1 != 0) {
            return;
          }
          UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x19 + 0x268);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x02bc53a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


