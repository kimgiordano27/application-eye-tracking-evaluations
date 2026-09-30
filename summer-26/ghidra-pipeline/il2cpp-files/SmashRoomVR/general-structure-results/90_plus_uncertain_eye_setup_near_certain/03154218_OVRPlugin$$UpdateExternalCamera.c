/*
FUNCTION_NAME: OVRPlugin$$UpdateExternalCamera
ENTRY_POINT: 03154218
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin__UpdateExternalCamera(void)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long unaff_x19;
  long unaff_x20;
  long *plVar10;
  long *plVar11;
  
  thunk_FUN_01ad9084();
  *(undefined1 *)(unaff_x20 + 0xffc) = 1;
  plVar11 = *(long **)(unaff_x19 + 0x60);
  if (plVar11 != (long *)0x0) {
    lVar3 = *plVar11;
    plVar10 = *(long **)(unaff_x19 + 0x38);
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_03d80330) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03154284;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)PTR_DAT_03d80330,0);
LAB_03154284:
    plVar11 = (long *)(*(code *)*puVar2)(plVar11,puVar2[1]);
    if (plVar11 != (long *)0x0) {
      lVar3 = *plVar11;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)StringLiteral_3771) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
            goto OVRPlugin__GetMixedRealityCameraInfo;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)StringLiteral_3771,0);
OVRPlugin__GetMixedRealityCameraInfo:
      uVar5 = (*(code *)*puVar2)(plVar11,puVar2[1]);
      if ((uVar5 & 1) == 0) {
        puVar4 = (undefined4 *)(unaff_x19 + 0x50);
        puVar6 = (undefined4 *)(unaff_x19 + 0x54);
        puVar8 = (undefined4 *)(unaff_x19 + 0x58);
        puVar9 = (undefined4 *)(unaff_x19 + 0x5c);
      }
      else {
        puVar4 = (undefined4 *)(unaff_x19 + 0x40);
        puVar6 = (undefined4 *)(unaff_x19 + 0x44);
        puVar8 = (undefined4 *)(unaff_x19 + 0x48);
        puVar9 = (undefined4 *)(unaff_x19 + 0x4c);
      }
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x2a8))
                  (*puVar4,*puVar6,*puVar8,*puVar9,plVar10,*(undefined8 *)(*plVar10 + 0x2b0));
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          lVar3 = FUN_0391c2b8(*(long *)(unaff_x19 + 0x20),0);
          if ((*(long *)(unaff_x19 + 0x20) != 0) &&
             (iVar1 = FUN_0392a654(*(long *)(unaff_x19 + 0x20),0), lVar3 != 0)) {
            FUN_0391fb70(lVar3,0 < iVar1,0);
            if ((*(long *)(unaff_x19 + 0x28) != 0) &&
               (lVar3 = FUN_0391c2b8(*(long *)(unaff_x19 + 0x28),0), lVar3 != 0)) {
              FUN_0391fb70(lVar3,*(char *)(unaff_x19 + 0x68) == '\0',0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


