/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Quatf>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 028dab8c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__System_Collections_IEnumerator_Reset
               (void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x25;
  long in_stack_00000048;
  
  FUN_0282c06c();
  if (in_stack_00000048 == 0) {
    return;
  }
  uVar2 = FUN_031e78c4(in_stack_00000048,*(undefined8 *)Photon_Pun_PhotonMessageInfo_TypeInfo,0);
  puVar1 = PTR_DAT_0422fb28;
  if (in_stack_00000048 != 0) {
    iVar3 = FUN_031e78c4(in_stack_00000048,*(undefined8 *)PhotonCustomGamePortal_TypeInfo,0);
    lVar5 = *(long *)puVar1;
    uVar7 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x168);
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(lVar5);
    }
    uVar7 = FUN_032e04b8(uVar7,0);
    if (in_stack_00000048 == 0) goto LAB_028dae20;
    lVar5 = FUN_031e5740(in_stack_00000048,*(undefined8 *)Photon_Pun_PhotonHandler_TypeInfo,uVar7,0)
    ;
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01c72394(lVar8);
    }
    if (lVar5 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01c495e4(lVar5,lVar8);
      if (lVar4 == 0) goto LAB_028dae24;
    }
    *(long *)(unaff_x19 + 0x30) = lVar4;
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01c72394(lVar8);
    }
    if ((lVar5 != 0) && (lVar4 = thunk_FUN_01c495e4(lVar5,lVar8), lVar4 == 0)) {
LAB_028dae24:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(lVar5,lVar8);
    }
    if (iVar3 == 0) {
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
    }
    else {
      System_Array_EmptyInternalEnumerator<OVRPlugin_BodyJointLocation>__MoveNext();
      uVar7 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x180);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar7 = FUN_032e04b8(uVar7,0);
      if (in_stack_00000048 == 0) goto LAB_028dae20;
      lVar5 = FUN_031e5740(in_stack_00000048,*(undefined8 *)PhotonManager_TypeInfo,uVar7,0);
      lVar8 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01c72394(lVar8);
      }
      if (lVar5 == 0) {
        FUN_032f25c4(0x10,0);
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar4 = thunk_FUN_01c495e4(lVar5,lVar8);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(lVar5,lVar8);
      }
      if (0 < *(int *)(lVar4 + 0x18)) {
        uVar6 = 0;
        do {
          if (*(uint *)(lVar4 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4ac();
          }
          FUN_028da600();
          uVar6 = uVar6 + 1;
        } while ((long)uVar6 < (long)*(int *)(lVar4 + 0x18));
      }
    }
    *(undefined4 *)(unaff_x19 + 0x2c) = uVar2;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar5 = FUN_0329f684(0);
    if (lVar5 != 0) {
      FUN_0282be2c();
      return;
    }
  }
LAB_028dae20:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


