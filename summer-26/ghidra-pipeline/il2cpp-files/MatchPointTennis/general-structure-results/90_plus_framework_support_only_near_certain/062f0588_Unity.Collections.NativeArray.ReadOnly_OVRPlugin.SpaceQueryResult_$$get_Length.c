/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$get_Length
ENTRY_POINT: 062f0588
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__get_Length(void)

{
  int iVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  size_t unaff_x22;
  long lVar6;
  void *unaff_x23;
  int unaff_w24;
  long unaff_x25;
  long unaff_x29;
  
  iVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x80))();
  if (unaff_w24 < iVar1) {
    plVar2 = (long *)thunk_FUN_044a5a9c();
    lVar6 = *plVar2;
    puVar3 = (undefined4 *)thunk_FUN_044a5a9c();
    if (lVar6 == 0) goto LAB_062f061c;
    puVar5 = *(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x88);
    uVar4 = *puVar5;
    *(undefined4 *)(unaff_x29 + -0xc) = *puVar3;
    *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
    *(undefined8 **)(unaff_x29 + -0x18) = unaff_x21;
    (*(code *)puVar5[2])(uVar4,puVar5,lVar6,unaff_x29 + -0x20);
  }
  else {
    memset(unaff_x23,0,unaff_x22);
    memcpy(unaff_x21,unaff_x23,unaff_x22);
  }
  if (unaff_x19 != (long *)0x0) {
    if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20) + 0x28)) {
      unaff_x21 = (undefined8 *)*unaff_x21;
    }
    lVar6 = *unaff_x19;
    *(undefined8 **)(unaff_x29 + -0x20) = unaff_x21;
    (**(code **)(*(long *)(lVar6 + 0xa40) + 0x10))(*(undefined8 *)(*(long *)(lVar6 + 0xa40) + 8));
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_04481fb8();
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 0x135) & 1) ==
        0) {
      FUN_04481fb8();
    }
    FUN_097b65b8();
    if (*(long *)(unaff_x25 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
LAB_062f061c:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


