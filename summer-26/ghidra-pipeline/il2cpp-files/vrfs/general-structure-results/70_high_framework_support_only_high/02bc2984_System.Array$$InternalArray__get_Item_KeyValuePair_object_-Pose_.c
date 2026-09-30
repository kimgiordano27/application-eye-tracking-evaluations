/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<KeyValuePair<object,-Pose>>
ENTRY_POINT: 02bc2984
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Array__InternalArray__get_Item<KeyValuePair<object,_Pose>>(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 uVar7;
  ulong uVar8;
  
  lVar2 = FUN_0366303c();
  if (lVar2 != 0) {
    iVar1 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(lVar2,0);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      if ((*(long *)(unaff_x19 + 0x100) == 0) ||
         (lVar2 = FUN_0366303c(*(long *)(unaff_x19 + 0x100),0), lVar2 == 0)) goto LAB_02bc27c8;
      uVar3 = FUN_036e1620(lVar2,0);
    }
                    /* try { // try from 02bc29c0 to 02cc2c83 has its CatchHandler @ 02bc29c0
                       catch() { ... } // from try @ 02bc29c0 with catch @ 02bc29c0
                       catch() { ... } // from try @ 02bc2d48 with catch @ 02bc29c0
                       catch() { ... } // from try @ 02bc2de8 with catch @ 02bc29c0
                       catch() { ... } // from try @ 02bc2e80 with catch @ 02bc29c0 */
    if ((*(long *)(unaff_x19 + 0x1b0) != 0) &&
       (lVar2 = FUN_051e516c(*(long *)(unaff_x19 + 0x1b0),0), lVar2 != 0)) {
      lVar2 = FUN_051df7a8(lVar2,0);
      lVar6 = *(long *)(unaff_x19 + 0x1a0);
      if (lVar6 != 0) {
        if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
        if (lVar2 != 0) {
          uVar8 = (ulong)*(uint *)(lVar6 + 0x24);
          uVar4 = (ulong)*(uint *)(lVar6 + 0x28);
          uVar7 = FUN_04f1c778(*(undefined4 *)(lVar6 + 0x20),uVar8,uVar4,lVar2,0);
          if (*(int *)(*unaff_x23 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uVar7 = FUN_036df8cc(uVar7,uVar8,uVar4,uVar3,0);
          uVar3 = FUN_02bba0b8();
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_016466fc(*unaff_x22);
          }
          uVar4 = FUN_051d2ac0(uVar3,0,0);
          if ((uVar4 & 1) != 0) {
            plVar5 = (long *)FUN_02bba0b8();
            if (plVar5 == (long *)0x0) goto LAB_02bc27c8;
            (**(code **)(*plVar5 + 0x288))
                      (uVar7,(float)unaff_w20 - (float)uVar8,plVar5,*(undefined8 *)(*plVar5 + 0x290)
                      );
          }
          return;
        }
      }
    }
  }
LAB_02bc27c8:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


