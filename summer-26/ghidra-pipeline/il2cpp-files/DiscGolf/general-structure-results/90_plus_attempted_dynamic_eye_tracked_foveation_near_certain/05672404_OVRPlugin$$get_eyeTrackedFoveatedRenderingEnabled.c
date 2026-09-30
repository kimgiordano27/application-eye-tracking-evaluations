/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 05672404
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 212
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;foveation_rendering;structure_combo;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;strong_foveation_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


long OVRPlugin__get_eyeTrackedFoveatedRenderingEnabled(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar10;
  
  puVar2 = System_Collections_Generic_List<ComponentItem>_TypeInfo;
  puVar10 = *(undefined8 **)(unaff_x20 + 0xfd8);
  lVar3 = thunk_FUN_02dd3144(**(undefined8 **)(param_1 + 0xfe0));
  FUN_04df7868(lVar3,0x40,*puVar10);
  lVar4 = FUN_02d966a4(*(undefined8 *)puVar2,0x40);
  if (lVar4 != 0) {
    uVar9 = *(ulong *)(lVar4 + 0x18);
    uVar8 = (uint)uVar9;
    if (0 < (int)uVar8) {
      uVar7 = 0;
      do {
        if ((uVar9 & 0xffffffff) == uVar7) goto LAB_0567252c;
        *(int *)(lVar4 + 0x20 + uVar7 * 4) = (int)uVar7;
        uVar7 = uVar7 + 1;
      } while ((uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU)) != uVar7);
    }
    uVar1 = *(undefined4 *)(unaff_x19 + 0xc0);
    if (*(int *)(*(long *)PTR_DAT_06a0f1a0 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar5 = FUN_0564c580(uVar1,lVar4);
    puVar2 = System_Collections_Generic_List<JsonPosition>_TypeInfo;
    uVar9 = 0;
    do {
      if (*(uint *)(lVar4 + 0x18) <= uVar9) {
LAB_0567252c:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar9) goto LAB_0567252c;
      uVar1 = *(undefined4 *)(lVar4 + 0x20 + uVar9 * 4);
      uVar6 = FUN_0566e684();
      if (lVar3 == 0) break;
      FUN_04df85f0(lVar3,uVar1,uVar6,*(undefined8 *)puVar2);
      uVar9 = uVar9 + 1;
      if (uVar9 == 0x40) {
        return lVar3;
      }
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


