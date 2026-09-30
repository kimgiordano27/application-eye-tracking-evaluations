/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Vector4s>$$Dispose
ENTRY_POINT: 029135f0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector4s>__Dispose(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int in_w8;
  ulong uVar6;
  long unaff_x19;
  long unaff_x20;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long *unaff_x25;
  long in_stack_00000068;
  
  if (in_w8 == 0) {
    thunk_FUN_01c1d1e8();
  }
  lVar4 = FUN_0329f684(0);
  if (lVar4 != 0) {
    FUN_0282c06c();
    if (in_stack_00000068 == 0) {
      return;
    }
    uVar2 = FUN_031e78c4(in_stack_00000068,*(undefined8 *)Photon_Pun_PhotonMessageInfo_TypeInfo,0);
    puVar1 = PTR_DAT_0422fb28;
    if (in_stack_00000068 == 0) goto LAB_029138c8;
    iVar3 = FUN_031e78c4(in_stack_00000068,*(undefined8 *)PhotonCustomGamePortal_TypeInfo,0);
    lVar4 = *(long *)puVar1;
    uVar8 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x168);
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(lVar4);
    }
    uVar8 = FUN_032e04b8(uVar8,0);
    if (in_stack_00000068 == 0) goto LAB_029138c8;
    lVar4 = FUN_031e5740(in_stack_00000068,*(undefined8 *)Photon_Pun_PhotonHandler_TypeInfo,uVar8,0)
    ;
    lVar9 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01c72394(lVar9);
    }
    if (lVar4 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = thunk_FUN_01c495e4(lVar4,lVar9);
      if (lVar5 == 0) goto FUN_029138cc;
    }
    *(long *)(unaff_x19 + 0x30) = lVar5;
    lVar9 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01c72394(lVar9);
    }
    if ((lVar4 != 0) && (lVar5 = thunk_FUN_01c495e4(lVar4,lVar9), lVar5 == 0)) {
FUN_029138cc:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(lVar4,lVar9);
    }
    if (iVar3 == 0) {
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
    }
    else {
      FUN_02913024();
      uVar8 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x180);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar8 = FUN_032e04b8(uVar8,0);
      if (in_stack_00000068 == 0) goto LAB_029138c8;
      lVar4 = FUN_031e5740(in_stack_00000068,*(undefined8 *)PhotonManager_TypeInfo,uVar8,0);
      lVar9 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01c72394(lVar9);
      }
      if (lVar4 == 0) {
        FUN_032f25c4(0x10,0);
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar5 = thunk_FUN_01c495e4(lVar4,lVar9);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(lVar4,lVar9);
      }
      if (0 < *(int *)(lVar5 + 0x18)) {
        uVar7 = 0;
        plVar10 = (long *)(lVar5 + 0x20);
        do {
          uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
          if (uVar6 <= uVar7) {
LAB_029138c4:
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4ac();
          }
          if (*plVar10 == 0) {
            FUN_032f25c4(0x11,0);
            uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
          }
          if (uVar6 <= uVar7) goto LAB_029138c4;
          plVar10 = plVar10 + 7;
          Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector2f>__Reset();
          uVar7 = uVar7 + 1;
        } while ((long)uVar7 < (long)*(int *)(lVar5 + 0x18));
      }
    }
    *(undefined4 *)(unaff_x19 + 0x2c) = uVar2;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar4 = FUN_0329f684(0);
    if (lVar4 != 0) {
      FUN_0282be2c();
      return;
    }
  }
LAB_029138c8:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


