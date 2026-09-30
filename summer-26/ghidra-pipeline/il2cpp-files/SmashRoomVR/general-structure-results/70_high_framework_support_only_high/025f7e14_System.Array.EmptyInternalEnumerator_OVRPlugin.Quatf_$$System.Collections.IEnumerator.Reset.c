/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Quatf>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 025f7e14
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__System_Collections_IEnumerator_Reset
               (void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  long *unaff_x19;
  uint unaff_w20;
  long lVar5;
  long *plVar6;
  long unaff_x23;
  uint unaff_w24;
  long lVar7;
  
  FUN_026a93ec();
  if (unaff_w24 != unaff_w20) {
    plVar6 = (long *)*unaff_x19;
    if (plVar6 == (long *)0x0) goto LAB_025f7fd8;
    uVar4 = *(uint *)(plVar6 + 3);
    if (uVar4 <= unaff_w24) goto LAB_025f7fd4;
    lVar7 = (long)(int)unaff_w24;
    lVar5 = plVar6[lVar7 + 4];
    if (lVar5 != 0) {
      lVar1 = thunk_FUN_01afa9e0(lVar5,*(undefined8 *)(*plVar6 + 0x40));
      if (lVar1 == 0) {
        uVar3 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
        FUN_01b48050(uVar3,0);
      }
      uVar4 = *(uint *)(plVar6 + 3);
    }
    if (uVar4 <= unaff_w20) goto LAB_025f7fd4;
    plVar6[unaff_x23 + 4] = lVar5;
    thunk_FUN_01b4f09c(plVar6 + unaff_x23 + 4,lVar5);
    lVar5 = unaff_x19[1];
    if (lVar5 == 0) goto LAB_025f7fd8;
    if ((*(uint *)(lVar5 + 0x18) <= unaff_w24) || (*(uint *)(lVar5 + 0x18) <= unaff_w20))
    goto LAB_025f7fd4;
    *(undefined4 *)(lVar5 + unaff_x23 * 4 + 0x20) = *(undefined4 *)(lVar5 + lVar7 * 4 + 0x20);
    lVar5 = unaff_x19[2];
    if (lVar5 == 0) goto LAB_025f7fd8;
    if ((*(uint *)(lVar5 + 0x18) <= unaff_w24) || (*(uint *)(lVar5 + 0x18) <= unaff_w20))
    goto LAB_025f7fd4;
    *(undefined1 *)(lVar5 + 0x20 + unaff_x23) = *(undefined1 *)(lVar5 + 0x20 + lVar7);
    lVar5 = unaff_x19[3];
    if (lVar5 == 0) goto LAB_025f7fd8;
    if ((*(uint *)(lVar5 + 0x18) <= unaff_w24) || (*(uint *)(lVar5 + 0x18) <= unaff_w20))
    goto LAB_025f7fd4;
    *(undefined8 *)(lVar5 + unaff_x23 * 8 + 0x20) = *(undefined8 *)(lVar5 + lVar7 * 8 + 0x20);
    thunk_FUN_01b4f09c();
    lVar5 = unaff_x19[5];
    FUN_03ad7678();
    if (lVar5 == 0) goto LAB_025f7fd8;
    FUN_026a7f70(lVar5,0,0,unaff_w20,*(undefined8 *)StringLiteral_3516);
  }
  lVar5 = *unaff_x19;
  if (lVar5 != 0) {
    if (unaff_w24 < *(uint *)(lVar5 + 0x18)) {
      lVar7 = (long)(int)unaff_w24;
      puVar2 = (undefined8 *)(lVar5 + lVar7 * 8 + 0x20);
      *puVar2 = 0;
      thunk_FUN_01b4f09c(puVar2,0);
      lVar5 = unaff_x19[1];
      if (lVar5 == 0) goto LAB_025f7fd8;
      if (unaff_w24 < *(uint *)(lVar5 + 0x18)) {
        *(undefined4 *)(lVar5 + lVar7 * 4 + 0x20) = 0;
        lVar5 = unaff_x19[2];
        if (lVar5 == 0) goto LAB_025f7fd8;
        if (unaff_w24 < *(uint *)(lVar5 + 0x18)) {
          *(undefined1 *)(lVar5 + lVar7 + 0x20) = 0;
          lVar5 = unaff_x19[3];
          if (lVar5 == 0) goto LAB_025f7fd8;
          if (unaff_w24 < *(uint *)(lVar5 + 0x18)) {
            puVar2 = (undefined8 *)(lVar5 + lVar7 * 8 + 0x20);
            *puVar2 = 0;
            thunk_FUN_01b4f09c(puVar2,0);
            return;
          }
        }
      }
    }
LAB_025f7fd4:
                    /* WARNING: Subroutine does not return */
    FUN_01b48180();
  }
LAB_025f7fd8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


