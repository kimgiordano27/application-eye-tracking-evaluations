/*
FUNCTION_NAME: OVRPlugin$$GetTrackerPose
ENTRY_POINT: 05744400
PROGRAM: Untangled-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x057445c8) */

long OVRPlugin__GetTrackerPose(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  
  puVar5 = (undefined8 *)FUN_02eea86c();
  puVar4 = PTR_DAT_06d3b610;
  puVar3 = PTR_DAT_06d02048;
  puVar2 = PTR_DAT_06d01f60;
  plVar6 = (long *)(*(code *)*puVar5)();
  lVar7 = 0;
  do {
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar10 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_05744494;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_02eea86c(plVar6,*(long *)puVar3,0);
LAB_05744494:
    uVar11 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar11 & 1) == 0) {
      if (plVar6 == (long *)0x0) {
        return lVar7;
      }
      lVar10 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 == 0) goto LAB_05744580;
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    lVar10 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_057444f0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_02eea86c(plVar6,*(long *)puVar4,0);
LAB_057444f0:
    lVar10 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    bVar1 = lVar7 != 0;
    lVar7 = lVar10;
    if (bVar1) {
      thunk_FUN_02f239f0(PTR_DAT_06d55148);
      uVar8 = thunk_FUN_02ef1808();
      uVar9 = thunk_FUN_02f239f0(PTR_DAT_06d590f8);
      FUN_05693110(uVar8,uVar9,0);
      uVar9 = thunk_FUN_02f239f0(PTR_DAT_06d59100);
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar8,uVar9);
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
      puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0574459c;
    }
  }
LAB_05744580:
  puVar5 = (undefined8 *)FUN_02eea86c(plVar6,*(long *)puVar2,0);
LAB_0574459c:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
  return lVar7;
}


