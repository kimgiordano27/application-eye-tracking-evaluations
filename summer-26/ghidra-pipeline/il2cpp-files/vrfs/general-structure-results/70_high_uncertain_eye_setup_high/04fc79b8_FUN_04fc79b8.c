/*
FUNCTION_NAME: FUN_04fc79b8
ENTRY_POINT: 04fc79b8
PROGRAM: vrfs-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_04fc79b8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  
  puVar2 = PTR_DAT_06e4f228;
  puVar1 = PTR_DAT_06d9fd78;
  if ((bRam000000000724512a & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e3eb10);
    thunk_FUN_0159f088(PTR_DAT_06e4f228);
    thunk_FUN_0159f088(PTR_DAT_06d9fd78);
    bRam000000000724512a = 1;
  }
  lVar3 = FUN_0431ae70(param_1,*(undefined8 *)puVar2);
  plVar6 = (long *)(param_1 + 0x18);
  *plVar6 = lVar3;
  thunk_FUN_01656ef8(plVar6,lVar3);
  lVar3 = *plVar6;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar4 = FUN_051d2ac0(lVar3,0,0);
  if ((uVar4 & 1) != 0) {
    if (*plVar6 == 0) {
LAB_04fc7ae4:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar5 = FUN_036e1620(*plVar6,0);
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_016466fc(lVar3);
    }
    uVar4 = FUN_051d94d4(uVar5,0,0);
    if ((uVar4 & 1) != 0) {
      lVar3 = *plVar6;
      uVar5 = FUN_051d85c4(0);
      if (lVar3 == 0) goto LAB_04fc7ae4;
      Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerable_GetEnumerator
                (lVar3,uVar5,0);
    }
  }
  uVar5 = FUN_0431b09c(param_1,*(undefined8 *)PTR_DAT_06e3eb10);
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  thunk_FUN_01656ef8((undefined8 *)(param_1 + 0x20),uVar5);
  return;
}


