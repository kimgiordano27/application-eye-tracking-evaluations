/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.Rectf>
ENTRY_POINT: 01c90498
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01c905e4) */

void System_Array__InternalArray__IndexOf<OVRPlugin_Rectf>(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x23;
  
  plVar1 = (long *)thunk_FUN_01afaadc(param_1);
  FUN_038dfa2c();
  lVar2 = FUN_01b47fd0(*(undefined8 *)
                        Method_System_Collections_SortedList_SortedListEnumerator_get_Current__,2);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  if ((unaff_x23 != 0) && (lVar3 = thunk_FUN_01afa9e0(), lVar3 == 0)) {
    uVar4 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
    FUN_01b48050(uVar4,0);
  }
  if (*(int *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48180();
  }
  *(long *)(lVar2 + 0x20) = unaff_x23;
  thunk_FUN_01b4f09c();
  if ((unaff_x20 != 0) && (lVar3 = thunk_FUN_01afa9e0(), lVar3 == 0)) {
    uVar4 = thunk_FUN_01b154cc();
                    /* try { // try from 01c9060c to 01d9068b has its CatchHandler @ 01c903d0 */
                    /* WARNING: Subroutine does not return */
    FUN_01b48050(uVar4,0);
  }
  if (*(uint *)(lVar2 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48180();
  }
  *(long *)(lVar2 + 0x28) = unaff_x20;
  thunk_FUN_01b4f09c();
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar4 = FUN_01d385e8(plVar1,*(undefined8 *)StringLiteral_537,lVar2,
                       *(undefined8 *)StringLiteral_534);
  *unaff_x21 = uVar4;
  thunk_FUN_01b4f09c();
  lVar2 = *plVar1;
  uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
        puVar5 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_01c905c0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_01ae9f78(plVar1,*(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,
                        0);
LAB_01c905c0:
  (*(code *)*puVar5)(plVar1,puVar5[1]);
  return;
}


