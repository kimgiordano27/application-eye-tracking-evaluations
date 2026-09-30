/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Vector4s>$$Reset
ENTRY_POINT: 02913658
PROGRAM: gunraiders-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector4s>__Reset
               (undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *unaff_x25;
  long unaff_x26;
  long *plVar8;
  long in_stack_00000068;
  
  plVar8 = *(long **)(unaff_x26 + 0xb28);
  iVar1 = FUN_031e78c4(param_1,param_2,0);
  lVar3 = *plVar8;
  uVar6 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x168);
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(lVar3);
  }
  uVar6 = FUN_032e04b8(uVar6,0);
  if (in_stack_00000068 != 0) {
    lVar3 = FUN_031e5740(in_stack_00000068,*(undefined8 *)Photon_Pun_PhotonHandler_TypeInfo,uVar6,0)
    ;
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01c72394(lVar7);
    }
    if (lVar3 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = thunk_FUN_01c495e4(lVar3,lVar7);
      if (lVar2 == 0) goto FUN_029138cc;
    }
    *(long *)(unaff_x19 + 0x30) = lVar2;
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01c72394(lVar7);
    }
    if ((lVar3 != 0) && (lVar2 = thunk_FUN_01c495e4(lVar3,lVar7), lVar2 == 0)) {
FUN_029138cc:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(lVar3,lVar7);
    }
    if (iVar1 == 0) {
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
    }
    else {
      FUN_02913024();
      uVar6 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x180);
      if (*(int *)(*plVar8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar6 = FUN_032e04b8(uVar6,0);
      if (in_stack_00000068 == 0) goto LAB_029138c8;
      lVar3 = FUN_031e5740(in_stack_00000068,*(undefined8 *)PhotonManager_TypeInfo,uVar6,0);
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01c72394(lVar7);
      }
      if (lVar3 == 0) {
        FUN_032f25c4(0x10,0);
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar2 = thunk_FUN_01c495e4(lVar3,lVar7);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(lVar3,lVar7);
      }
      if (0 < *(int *)(lVar2 + 0x18)) {
        uVar5 = 0;
        plVar8 = (long *)(lVar2 + 0x20);
        do {
          uVar4 = (ulong)*(uint *)(lVar2 + 0x18);
          if (uVar4 <= uVar5) {
LAB_029138c4:
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4ac();
          }
          if (*plVar8 == 0) {
            FUN_032f25c4(0x11,0);
            uVar4 = (ulong)*(uint *)(lVar2 + 0x18);
          }
          if (uVar4 <= uVar5) goto LAB_029138c4;
          plVar8 = plVar8 + 7;
          Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector2f>__Reset();
          uVar5 = uVar5 + 1;
        } while ((long)uVar5 < (long)*(int *)(lVar2 + 0x18));
      }
    }
    *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar3 = FUN_0329f684(0);
    if (lVar3 != 0) {
      FUN_0282be2c();
      return;
    }
  }
LAB_029138c8:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


