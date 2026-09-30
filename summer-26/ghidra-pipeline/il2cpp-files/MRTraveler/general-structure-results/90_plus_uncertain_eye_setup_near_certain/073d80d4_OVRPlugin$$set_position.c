/*
FUNCTION_NAME: OVRPlugin$$set_position
ENTRY_POINT: 073d80d4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_position(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x19;
  long unaff_x20;
  long *plVar8;
  long unaff_x21;
  long *unaff_x23;
  ulong uVar9;
  
  FUN_03c8f898(PTR_DAT_08eb5b58);
  FUN_03c8f898(PTR_DAT_08eb5b60);
  FUN_03c8f898(PTR_DAT_08eb5b68);
  FUN_03c8f898(PTR_DAT_08eb5b70);
  *(undefined1 *)(unaff_x20 + 0x714) = 1;
  lVar4 = *unaff_x23;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar4 = *unaff_x23;
  }
  puVar2 = PTR_DAT_08eb5b68;
  puVar1 = PTR_DAT_08eb5b60;
  if (**(long **)(lVar4 + 0xb8) == 0) {
LAB_073d827c:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar4 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e6baa0,
                       *(undefined4 *)(**(long **)(lVar4 + 0xb8) + 0x18));
  plVar8 = (long *)(unaff_x21 + 0x10);
  *plVar8 = lVar4;
  thunk_FUN_03d233cc(plVar8,lVar4);
  FUN_07145224();
  *(long *)(unaff_x21 + 0x18) = unaff_x19;
  thunk_FUN_03d233cc((long *)(unaff_x21 + 0x18));
  lVar4 = 8;
  while( true ) {
    lVar5 = *unaff_x23;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar5 = *unaff_x23;
    }
    if (**(long **)(lVar5 + 0xb8) == 0) goto LAB_073d827c;
    uVar9 = lVar4 - 8;
    if ((long)*(int *)(**(long **)(lVar5 + 0xb8) + 0x18) <= (long)uVar9) {
      return;
    }
    lVar5 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08eb5b70);
    FUN_07145224(lVar5,0);
    lVar6 = *unaff_x23;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar6 = *unaff_x23;
    }
    lVar6 = **(long **)(lVar6 + 0xb8);
    if (lVar6 == 0) goto LAB_073d827c;
    if (*(uint *)(lVar6 + 0x18) <= uVar9) break;
    if (lVar5 == 0) goto LAB_073d827c;
    *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)(lVar6 + lVar4 * 4);
    lVar6 = *plVar8;
    uVar7 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
    FUN_05822d7c(uVar7,lVar5,*(undefined8 *)puVar2,0);
    if ((unaff_x19 == 0) || (uVar3 = FUN_0521354c(), lVar6 == 0)) goto LAB_073d827c;
    if (*(uint *)(lVar6 + 0x18) <= uVar9) break;
    *(undefined4 *)(lVar6 + lVar4 * 4) = uVar3;
    lVar4 = lVar4 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


