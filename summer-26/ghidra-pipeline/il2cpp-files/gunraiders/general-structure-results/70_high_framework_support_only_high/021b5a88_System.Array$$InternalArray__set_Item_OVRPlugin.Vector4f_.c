/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.Vector4f>
ENTRY_POINT: 021b5a88
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__set_Item<OVRPlugin_Vector4f>(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x22;
  undefined8 *unaff_x23;
  
  lVar1 = thunk_FUN_01c495e4();
  if (lVar1 != 0) {
    *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x30) = lVar1;
    lVar1 = thunk_FUN_01c495e4();
    if (lVar1 != 0) {
      uVar4 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x38);
      uVar2 = thunk_FUN_01c496e0(*unaff_x23);
      System_Collections_Generic_Dictionary<uint,_GlyphPairAdjustmentRecord>__System_Collections_IDictionary_Add
                ();
      lVar1 = FUN_03316eac(uVar4,uVar2,0);
      if (lVar1 == 0) {
        *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x38) = 0;
        return;
      }
      lVar3 = thunk_FUN_01c495e4(lVar1,*unaff_x23);
      if (lVar3 != 0) {
        *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x38) = lVar3;
        lVar1 = thunk_FUN_01c495e4(lVar1,*unaff_x23);
        if (lVar1 != 0) {
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d748();
}


