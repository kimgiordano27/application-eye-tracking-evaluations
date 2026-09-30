/*
FUNCTION_NAME: FUN_05e6e4f4
ENTRY_POINT: 05e6e4f4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_05e6e4f4(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  undefined8 local_78;
  int local_70;
  undefined8 local_68;
  
  if ((DAT_066dc6cc & 1) == 0) {
    FUN_02b3c81c(Method_OVRTask_Builder_ToTask<bool>__);
    FUN_02b3c81c(Method_OVRTask_Builder_ToTask<OVRAnchor>__);
    FUN_02b3c81c(Method_OVRTask_Builder_ToTask<OVRPlugin_Result>__);
    FUN_02b3c81c(Method_OVRVirtualKeyboard_<>c_<InitializeGlTFModel>b__92_2__);
    FUN_02b3c81c(Method_OVRVirtualKeyboard_<>c_<PopulateCollision>b__94_0__);
    FUN_02b3c81c(
                Method_OVRVirtualKeyboard_<InitializeGlTFModel>d__92_System_Collections_IEnumerator_Reset__
                );
    FUN_02b3c81c(Method_OVRVirtualKeyboard_BaseInputSource_OnUpdatedAnchors__);
    DAT_066dc6cc = 1;
  }
  puVar6 = Method_OVRVirtualKeyboard_BaseInputSource_OnUpdatedAnchors__;
  puVar5 = 
  Method_OVRVirtualKeyboard_<InitializeGlTFModel>d__92_System_Collections_IEnumerator_Reset__;
  puVar4 = Method_OVRTask_Builder_ToTask<OVRAnchor>__;
  puVar3 = Method_OVRTask_Builder_ToTask<bool>__;
  lVar9 = *(long *)(param_1 + 0x28);
  if (lVar9 != 0) {
    iVar14 = 0;
    iVar15 = 0;
    do {
      iVar1 = *(int *)(lVar9 + 0x18);
      if (iVar1 <= iVar15) {
        *(undefined4 *)(lVar9 + 0x18) = 0;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (0 < iVar1) {
          FUN_04d9e084(*(undefined8 *)(lVar9 + 0x10),0,iVar1,0);
        }
        lVar9 = *(long *)(param_1 + 0x30);
        if (lVar9 != 0) {
          iVar14 = 0;
          goto LAB_05e6e738;
        }
        break;
      }
      FUN_039bbd78(&local_78,lVar9,iVar15,*(undefined8 *)puVar6);
      uVar8 = local_68;
      uVar7 = local_78;
      if (local_70 == 0) {
        lVar9 = *(long *)(param_1 + 0x30);
        if (lVar9 == 0) break;
        if (iVar14 < *(int *)(lVar9 + 0x18)) {
          lVar9 = FUN_037a6268(lVar9,iVar14,*(undefined8 *)puVar5);
        }
        else {
          lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
          FUN_05e5c3ec(lVar9,0);
          lVar10 = *(long *)(param_1 + 0x30);
          if (lVar10 == 0) break;
          lVar11 = *(long *)(lVar10 + 0x10);
          lVar13 = *(long *)puVar4;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar11 == 0) break;
          uVar2 = *(uint *)(lVar10 + 0x18);
          if (uVar2 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar2 + 1;
            plVar12 = (long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
            *plVar12 = lVar9;
            thunk_FUN_02bb0e9c(plVar12,lVar9);
          }
          else {
            FUN_037a6538(lVar10,lVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
        }
        if (lVar9 == 0) break;
        iVar14 = iVar14 + 1;
        FUN_05e5a6dc(lVar9,uVar8,*(undefined8 *)(param_1 + 0x10),uVar7,0);
        FUN_05e5a9ec(lVar9,0);
        FUN_05e55370(*(undefined8 *)(param_1 + 0x10),uVar7,lVar9,0);
      }
      else {
        if (*(long *)(param_1 + 0x30) == 0) break;
        iVar14 = iVar14 + -1;
        lVar9 = FUN_037a6268(*(long *)(param_1 + 0x30),iVar14,*(undefined8 *)puVar5);
        if (lVar9 == 0) break;
        FUN_05e5b490(lVar9,0);
        FUN_05e55664(*(undefined8 *)(param_1 + 0x10),uVar7,lVar9,0);
      }
      lVar9 = *(long *)(param_1 + 0x28);
      iVar15 = iVar15 + 1;
    } while (lVar9 != 0);
  }
  goto LAB_05e6e768;
  while( true ) {
    FUN_05e5a940(lVar9,0);
    lVar9 = *(long *)(param_1 + 0x30);
    iVar14 = iVar14 + 1;
    if (lVar9 == 0) break;
LAB_05e6e738:
    if (*(int *)(lVar9 + 0x18) <= iVar14) {
      return;
    }
    lVar9 = FUN_037a6268(lVar9,iVar14,*(undefined8 *)puVar5);
    if (lVar9 == 0) break;
  }
LAB_05e6e768:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


