/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$AsReadOnly
ENTRY_POINT: 05f18260
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__AsReadOnly(long param_1)

{
  int iVar1;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  uint uVar3;
  undefined8 uVar4;
  
  uVar3 = unaff_w23 - 1;
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    FUN_04481fb8();
  }
  FUN_05f17cf4();
  if ((int)uVar3 <= (int)unaff_w19) {
LAB_05f18374:
    lVar2 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04481fb8();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04481fb8();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    FUN_05f17cf4();
    return unaff_w19;
  }
  do {
    do {
      unaff_w19 = unaff_w19 + 1;
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_w19) {
LAB_05f183e0:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar4 = *(undefined8 *)(unaff_x20 + (long)(int)unaff_w19 * 8 + 0x20);
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_04481fb8();
      }
      iVar1 = (**(code **)(unaff_x22 + 0x18))(*(undefined8 *)(unaff_x22 + 0x40),uVar4);
    } while (iVar1 < 0);
    do {
      uVar3 = uVar3 - 1;
      if (*(uint *)(unaff_x20 + 0x18) <= uVar3) goto LAB_05f183e0;
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_04481fb8();
      }
      iVar1 = (**(code **)(unaff_x22 + 0x18))(*(undefined8 *)(unaff_x22 + 0x40));
    } while (iVar1 < 0);
    if ((int)uVar3 <= (int)unaff_w19) goto LAB_05f18374;
    lVar2 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04481fb8();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04481fb8();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    FUN_05f17cf4();
  } while( true );
}


