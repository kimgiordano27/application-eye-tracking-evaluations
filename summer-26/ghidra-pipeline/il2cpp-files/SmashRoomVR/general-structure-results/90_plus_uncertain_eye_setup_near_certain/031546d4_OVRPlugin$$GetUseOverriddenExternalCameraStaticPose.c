/*
FUNCTION_NAME: OVRPlugin$$GetUseOverriddenExternalCameraStaticPose
ENTRY_POINT: 031546d4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetUseOverriddenExternalCameraStaticPose(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  int *in_x10;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  long unaff_x19;
  long *unaff_x20;
  
  plVar2 = (long *)(**(code **)(param_1 + (long)*in_x10 * 0x10 + 0x138))();
  if (plVar2 != (long *)0x0) {
    lVar4 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)StringLiteral_3771) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03154748;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ae9f78(plVar2,*(long *)StringLiteral_3771,0);
LAB_03154748:
    uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar6 & 1) == 0) {
      puVar5 = (undefined4 *)(unaff_x19 + 0x50);
      puVar7 = (undefined4 *)(unaff_x19 + 0x54);
      puVar9 = (undefined4 *)(unaff_x19 + 0x58);
      puVar10 = (undefined4 *)(unaff_x19 + 0x5c);
    }
    else {
      puVar5 = (undefined4 *)(unaff_x19 + 0x40);
      puVar7 = (undefined4 *)(unaff_x19 + 0x44);
      puVar9 = (undefined4 *)(unaff_x19 + 0x48);
      puVar10 = (undefined4 *)(unaff_x19 + 0x4c);
    }
    if (unaff_x20 != (long *)0x0) {
      (**(code **)(*unaff_x20 + 0x2a8))(*puVar5,*puVar7,*puVar9,*puVar10);
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        lVar4 = FUN_0391c2b8(*(long *)(unaff_x19 + 0x20),0);
        if ((*(long *)(unaff_x19 + 0x20) != 0) &&
           (iVar1 = FUN_0392a654(*(long *)(unaff_x19 + 0x20),0), lVar4 != 0)) {
          FUN_0391fb70(lVar4,0 < iVar1,0);
          if ((*(long *)(unaff_x19 + 0x28) != 0) &&
             (lVar4 = FUN_0391c2b8(*(long *)(unaff_x19 + 0x28),0), lVar4 != 0)) {
            FUN_0391fb70(lVar4,*(char *)(unaff_x19 + 0x68) == '\0',0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


