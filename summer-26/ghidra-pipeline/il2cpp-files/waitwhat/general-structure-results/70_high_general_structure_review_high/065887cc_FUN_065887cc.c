/*
FUNCTION_NAME: FUN_065887cc
ENTRY_POINT: 065887cc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_065887cc(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar3 = System_Collections_Generic_Queue<Vector4>_TypeInfo;
  puVar6 = System_Collections_Generic_Queue<Type>_TypeInfo;
  puVar2 = PTR_DAT_070f1fd0;
                    /* try { // try from 065887e4 to 0668889f has its CatchHandler @ 065887e4
                       catch() { ... } // from try @ 065887e4 with catch @ 065887e4
                       catch() { ... } // from try @ 065888ac with catch @ 065887e4
                       catch() { ... } // from try @ 06588958 with catch @ 065887e4
                       catch() { ... } // from try @ 06588988 with catch @ 065887e4
                       catch() { ... } // from try @ 065889c0 with catch @ 065887e4
                       catch() { ... } // from try @ 06588a1c with catch @ 065887e4
                       catch() { ... } // from try @ 06588a30 with catch @ 065887e4
                       catch() { ... } // from try @ 06588a70 with catch @ 065887e4 */
  local_60 = param_1;
  uStack_58 = param_2;
  if ((DAT_075574d3 & 1) == 0) {
    FUN_03188a78(System_Predicate<ISdkIntegration>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_Queue<Type>_TypeInfo);
    FUN_03188a78(System_Predicate<KerningPair>_TypeInfo);
    FUN_03188a78(PTR_DAT_070f1fd0);
    FUN_03188a78(System_Collections_Generic_Queue<Vector4>_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_EventBase<ContextClickEvent>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo);
    DAT_075574d3 = 1;
  }
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  uVar8 = FUN_04885cf0(&local_60,*(undefined8 *)puVar3);
  **(undefined8 **)(*(long *)puVar6 + 0xb8) = uVar8;
  lVar9 = *(long *)puVar2;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar9 = *(long *)puVar2;
  }
  puVar5 = System_Predicate<KerningPair>_TypeInfo;
  puVar4 = System_Predicate<ISdkIntegration>_TypeInfo;
  puVar3 = System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo;
  lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
  if (lVar9 != 0) {
    FUN_0654f988(lVar9,0);
    iVar12 = 0;
    while( true ) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      auVar13 = FUN_064f87e4(0);
      if (auVar13._12_4_ <= iVar12) break;
      local_70 = auVar13;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      auVar13 = FUN_064f87e4(0);
      local_70 = auVar13;
      plVar10 = (long *)FUN_04884e1c(local_70,iVar12,*(undefined8 *)puVar3);
      if (plVar10 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((bVar1 <= *(byte *)(*plVar10 + 0x130)) &&
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar5)) {
          uVar8 = **(undefined8 **)(*(long *)puVar6 + 0xb8);
          FUN_06582ab0(auStack_a0,plVar10,0);
          uVar7 = local_94;
          FUN_06582ab0(auStack_a0,plVar10,0);
          uVar11 = FUN_03a73e10(uVar8,CONCAT44(local_98,uVar7),*(undefined8 *)puVar4);
          if ((uVar11 & 1) == 0) {
            uVar8 = FUN_064fd3f4(plVar10,0);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_031e5338(*(long *)puVar2);
            }
            FUN_064f7d7c(uVar8,0);
            iVar12 = iVar12 + -1;
          }
        }
      }
      iVar12 = iVar12 + 1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


