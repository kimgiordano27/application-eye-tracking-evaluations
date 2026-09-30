/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetTrackingTransformRelativePose
ENTRY_POINT: 07ca9634
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_OVRP_1_38_0__ovrp_GetTrackingTransformRelativePose
          (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long in_x9;
  ulong uVar3;
  int *in_x10;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  uint uVar7;
  long *unaff_x22;
  
  do {
    in_x9 = in_x9 + -1;
    piVar5 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_044822ac();
      goto LAB_07ca9660;
    }
    plVar6 = (long *)(in_x10 + 2);
    in_x10 = piVar5;
  } while (*plVar6 != param_3);
  puVar1 = (undefined8 *)(param_1 + (long)(*piVar5 + 1) * 0x10 + 0x138);
LAB_07ca9660:
  (*(code *)*puVar1)();
  lVar4 = *(long *)(unaff_x19 + 0x80);
  if ((lVar4 != 0) && (plVar6 = *(long **)(unaff_x19 + 0x90), plVar6 != (long *)0x0)) {
    lVar2 = *plVar6;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_09f4f220) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto LAB_07ca96dc;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_044822ac(plVar6,*(long *)PTR_DAT_09f4f220,1);
LAB_07ca96dc:
    (*(code *)*puVar1)(plVar6,lVar4 + 0x18,puVar1[1]);
    uVar7 = 0;
    while (lVar4 = *(long *)(unaff_x19 + 0xa0), lVar4 != 0) {
      if (*(uint *)(lVar4 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      lVar2 = *(long *)(unaff_x19 + 0x80);
      if ((lVar2 == 0) ||
         (plVar6 = *(long **)(lVar4 + (long)(int)uVar7 * 8 + 0x20), plVar6 == (long *)0x0)) break;
      lVar4 = *plVar6;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x22) {
            puVar1 = (undefined8 *)(lVar4 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_07ca9768;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_044822ac(plVar6,*unaff_x22,1);
LAB_07ca9768:
      (*(code *)*puVar1)(plVar6,lVar2 + 0x30,puVar1[1]);
      uVar7 = uVar7 + 1;
      if (uVar7 == 0x1a) {
        return 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


