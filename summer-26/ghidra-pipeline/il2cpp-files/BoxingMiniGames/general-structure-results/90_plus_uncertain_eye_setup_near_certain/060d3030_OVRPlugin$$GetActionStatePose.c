/*
FUNCTION_NAME: OVRPlugin$$GetActionStatePose
ENTRY_POINT: 060d3030
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetActionStatePose(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  undefined8 *unaff_x22;
  long *unaff_x23;
  
  uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x23) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar5 + 10) * 0x10 + 0x138);
        goto LAB_060d3084;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_0367cd30();
LAB_060d3084:
  (*(code *)*puVar1)();
  plVar6 = *(long **)(unaff_x19 + 0x18);
  uVar2 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_0554a400();
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0xc) * 0x10 + 0x138);
          goto LAB_060d3110;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0367cd30(plVar6,*unaff_x23,0xc);
LAB_060d3110:
    (*(code *)*puVar1)(plVar6,uVar2,puVar1[1]);
    plVar6 = *(long **)(unaff_x19 + 0x18);
    uVar2 = thunk_FUN_0367fe20(*unaff_x22);
    FUN_0554a400();
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x23) {
            puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0xe) * 0x10 + 0x138);
            goto LAB_060d3194;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_0367cd30(plVar6,*unaff_x23,0xe);
LAB_060d3194:
                    /* WARNING: Could not recover jumptable at 0x060d31b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar1)(plVar6,uVar2,puVar1[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


