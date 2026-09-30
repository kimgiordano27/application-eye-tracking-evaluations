/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<KeyValuePair<object,-object>>
ENTRY_POINT: 02bc28e0
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Array__InternalArray__get_Item<KeyValuePair<object,_object>>(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x19;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x26;
  undefined8 uVar8;
  ulong uVar9;
  
  if (param_1 != 0) {
    lVar3 = FUN_0366303c(param_1,0);
    if (lVar3 == 0) goto LAB_02bc27c8;
    uVar1 = FUN_036e1214(lVar3,0);
    if (0 < (int)uVar1) {
      lVar3 = *unaff_x26;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar3 = *unaff_x26;
      }
      lVar7 = **(long **)(lVar3 + 0xb8);
      if (lVar7 == 0) goto LAB_02bc27c8;
      if ((int)uVar1 < *(int *)(lVar7 + 0x18)) {
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar7 = **(long **)(*unaff_x26 + 0xb8);
          if (lVar7 == 0) goto LAB_02bc27c8;
        }
        if (*(uint *)(lVar7 + 0x18) <= uVar1) goto LAB_02bc2ac0;
        lVar3 = *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
        if (lVar3 == 0) goto LAB_02bc27c8;
        param_2 = FUN_051d0f1c(lVar3,0);
      }
    }
    if ((*(long *)(unaff_x19 + 0x100) != 0) &&
       (lVar3 = FUN_0366303c(*(long *)(unaff_x19 + 0x100),0), lVar3 != 0)) {
      iVar2 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(lVar3,0);
      if (iVar2 == 0) {
        uVar4 = 0;
      }
      else {
        if ((*(long *)(unaff_x19 + 0x100) == 0) ||
           (lVar3 = FUN_0366303c(*(long *)(unaff_x19 + 0x100),0), lVar3 == 0)) goto LAB_02bc27c8;
        uVar4 = FUN_036e1620(lVar3,0);
      }
      if ((*(long *)(unaff_x19 + 0x1b0) != 0) &&
         (lVar3 = FUN_051e516c(*(long *)(unaff_x19 + 0x1b0),0), lVar3 != 0)) {
        lVar3 = FUN_051df7a8(lVar3,0);
        lVar7 = *(long *)(unaff_x19 + 0x1a0);
        if (lVar7 != 0) {
          if (*(int *)(lVar7 + 0x18) == 0) {
LAB_02bc2ac0:
                    /* WARNING: Subroutine does not return */
            FUN_0160eebc();
          }
          if (lVar3 != 0) {
            uVar9 = (ulong)*(uint *)(lVar7 + 0x24);
            uVar5 = (ulong)*(uint *)(lVar7 + 0x28);
            uVar8 = FUN_04f1c778(*(undefined4 *)(lVar7 + 0x20),uVar9,uVar5,lVar3,0);
            if (*(int *)(*unaff_x23 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            uVar8 = FUN_036df8cc(uVar8,uVar9,uVar5,uVar4,0);
            uVar4 = FUN_02bba0b8();
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_016466fc(*unaff_x22);
            }
            uVar5 = FUN_051d2ac0(uVar4,0,0);
            if ((uVar5 & 1) != 0) {
              plVar6 = (long *)FUN_02bba0b8();
              if (plVar6 == (long *)0x0) goto LAB_02bc27c8;
              (**(code **)(*plVar6 + 0x288))
                        (uVar8,(float)param_2 - (float)uVar9,plVar6,*(undefined8 *)(*plVar6 + 0x290)
                        );
            }
            return;
          }
        }
      }
    }
  }
LAB_02bc27c8:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


