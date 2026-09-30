/*
FUNCTION_NAME: OVRPlugin$$OverrideExternalCameraStaticPose
ENTRY_POINT: 060d3eec
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__OverrideExternalCameraStaticPose(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  int iVar7;
  long *plVar8;
  int iVar9;
  
  if ((DAT_07ee0aa1 & 1) == 0) {
    FUN_03642964(PTR_DAT_07a245e8);
    DAT_07ee0aa1 = 1;
  }
  iVar9 = (int)((ulong)param_2 >> 0x20);
  if (1 < iVar9 - 2U) {
    iVar7 = (int)param_2;
    if (iVar9 != 1) {
      if (iVar9 == 0) {
        if (iVar7 == 3) goto LAB_060d3fb4;
        (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
      }
      else {
        if (iVar7 == 3) goto LAB_060d3fb4;
LAB_060d3ffc:
        if (iVar9 != 0) {
          if (iVar9 != 1) {
            return;
          }
          goto LAB_060d4008;
        }
      }
      uVar3 = (undefined1)param_1[8];
      goto LAB_060d3fb8;
    }
    if (iVar7 != 3) {
      if (iVar7 == 0) {
        plVar8 = (long *)param_1[5];
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar4 = *plVar8;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07a245e8) {
              puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
              goto LAB_060d3fdc;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar1 = (undefined8 *)FUN_0367cd30(plVar8,*(long *)PTR_DAT_07a245e8,2);
LAB_060d3fdc:
        uVar2 = (*(code *)*puVar1)(plVar8,puVar1[1]);
        (**(code **)(*param_1 + 0x1a8))(param_1,uVar2,*(undefined8 *)(*param_1 + 0x1b0));
        goto LAB_060d3ffc;
      }
LAB_060d4008:
      uVar3 = 1;
      goto LAB_060d3fb8;
    }
  }
LAB_060d3fb4:
  uVar3 = 0;
LAB_060d3fb8:
  *(undefined1 *)((long)param_1 + 0x59) = uVar3;
  return;
}


