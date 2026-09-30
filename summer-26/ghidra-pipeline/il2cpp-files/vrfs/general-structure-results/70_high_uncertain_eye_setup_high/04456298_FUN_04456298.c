/*
FUNCTION_NAME: FUN_04456298
ENTRY_POINT: 04456298
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_04456298(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  
  if ((bRam000000000723dec8 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e23cf8);
    thunk_FUN_0159f088(PTR_DAT_06e398e8);
    thunk_FUN_0159f088(PTR_DAT_06d9fd78);
                    /* try { // try from 044562d4 to 04556337 has its CatchHandler @ 04456450 */
    thunk_FUN_0159f088(PTR_DAT_06e116d0);
    thunk_FUN_0159f088(PTR_DAT_06dc26f0);
    bRam000000000723dec8 = 1;
  }
  lVar4 = FUN_051e516c(param_1,0);
  if (lVar4 == 0) {
LAB_0445644c:
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  lVar4 = FUN_01a257e8(lVar4,*(undefined8 *)PTR_DAT_06e398e8);
  plVar7 = (long *)(param_1 + 0x40);
  *plVar7 = lVar4;
  thunk_FUN_01656ef8(plVar7,lVar4);
  puVar2 = PTR_DAT_06e116d0;
  puVar1 = PTR_DAT_06dc26f0;
  if (*plVar7 == 0) goto LAB_0445644c;
  uVar5 = thunk_FUN_0164ba04(*plVar7,0);
  uVar8 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_016466fc(*(long *)puVar1);
  }
  uVar8 = FUN_031c8668(uVar8,0);
  uVar6 = FUN_031d212c(uVar5,uVar8,0);
  if ((uVar6 & 1) == 0) {
    uVar5 = FUN_051d85c4(0);
  }
  else {
    lVar4 = FUN_051e516c(param_1,0);
    puVar1 = PTR_DAT_06d9fd78;
    if (lVar4 == 0) goto LAB_0445644c;
    lVar4 = FUN_01a25960(lVar4,*(undefined8 *)PTR_DAT_06e23cf8);
    plVar7 = (long *)(param_1 + 0x50);
    *plVar7 = lVar4;
    thunk_FUN_01656ef8(plVar7,lVar4);
    lVar4 = *plVar7;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar6 = FUN_051d2ac0(lVar4,0,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    if (*plVar7 == 0) goto LAB_0445644c;
    iVar3 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(*plVar7,0);
    if (iVar3 == 0) {
      *(undefined8 *)(param_1 + 0x48) = 0;
      uVar5 = 0;
      goto LAB_04456424;
    }
    if (*plVar7 == 0) goto LAB_0445644c;
    uVar5 = FUN_036e1620(*plVar7,0);
  }
  *(undefined8 *)(param_1 + 0x48) = uVar5;
LAB_04456424:
  thunk_FUN_01656ef8(param_1 + 0x48,uVar5);
  return;
}


