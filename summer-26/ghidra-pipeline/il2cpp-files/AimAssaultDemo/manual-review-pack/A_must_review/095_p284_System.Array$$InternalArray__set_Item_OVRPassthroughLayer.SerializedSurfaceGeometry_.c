/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 03ce80c4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 167
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__set_Item<OVRPassthroughLayer_SerializedSurfaceGeometry>
               (long *param_1,void *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long alStack_c18 [2];
  undefined1 auStack_c08 [1024];
  undefined1 auStack_808 [1024];
  undefined1 auStack_408 [1024];
  long lStack_8;
  
  lVar1 = tpidr_el0;
  lStack_8 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_037756d4(param_3);
  }
  memset(auStack_408,0,0x400);
  iVar2 = thunk_FUN_0374ada8(param_1,0);
  if (1 < iVar2) {
    thunk_FUN_037a15ac(PTR_DAT_07d95aa0);
    uVar4 = thunk_FUN_037788cc();
    uVar6 = thunk_FUN_037a15ac(PTR_DAT_07d95aa8);
    FUN_06253fb8(uVar4,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar4,param_3);
  }
  uVar3 = FUN_0625b654(param_1,0);
  if (0 < (int)uVar3) {
    uVar8 = 0;
    do {
      memcpy(auStack_408,(void *)((long)param_1 + uVar8 * *(uint *)(*param_1 + 0x104) + 0x20),
             (ulong)*(uint *)(*param_1 + 0x104));
      memcpy(auStack_808,param_2,0x400);
      uVar4 = thunk_FUN_037784fc(*(undefined8 *)(*(long *)(param_3 + 0x38) + 8),auStack_808);
      lVar7 = *(long *)(*(long *)(param_3 + 0x38) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03775678(lVar7);
      }
      alStack_c18[1] = 0xffffffffffffffff;
      alStack_c18[0] = lVar7;
      memcpy(auStack_c08,auStack_408,0x400);
      uVar5 = thunk_FUN_0629d330(alStack_c18,uVar4,0);
      if ((uVar5 & 1) != 0) {
        iVar2 = thunk_FUN_0374ad64(param_1,0,0);
        iVar2 = iVar2 + (int)uVar8;
        goto System_Array__InternalArray__set_Item<OVRPlugin_AppPerfFrameStats>;
      }
      uVar8 = uVar8 + 1;
    } while (uVar3 != uVar8);
  }
  iVar2 = thunk_FUN_0374ad64(param_1,0,0);
  iVar2 = iVar2 + -1;
System_Array__InternalArray__set_Item<OVRPlugin_AppPerfFrameStats>:
  if (*(long *)(lVar1 + 0x28) == lStack_8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


