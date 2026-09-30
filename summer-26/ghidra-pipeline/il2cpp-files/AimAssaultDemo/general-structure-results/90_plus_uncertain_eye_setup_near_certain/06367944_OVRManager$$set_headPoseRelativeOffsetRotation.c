/*
FUNCTION_NAME: OVRManager$$set_headPoseRelativeOffsetRotation
ENTRY_POINT: 06367944
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_headPoseRelativeOffsetRotation(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  
  FUN_0373b518();
  FUN_0373b518(PTR_DAT_07d86c50);
  FUN_0373b518(PTR_DAT_07db34c8);
  FUN_0373b518(PTR_DAT_07d86c48);
  FUN_0373b518(PTR_DAT_07d89060);
  FUN_0373b518(PTR_DAT_07db3420);
  FUN_0373b518(PTR_DAT_07db3430);
  *(undefined1 *)(unaff_x21 + 0x434) = 1;
  if (unaff_x20 != 0) {
    if (*(char *)(unaff_x20 + 0x10) == '\0') {
      if (unaff_x19 != 0) {
        *(bool *)(unaff_x20 + 0x10) = 0xff < *(ushort *)(unaff_x19 + 0x20);
        goto LAB_063679c8;
      }
    }
    else {
      *(undefined1 *)(unaff_x20 + 0x10) = 1;
      if (unaff_x19 != 0) {
LAB_063679c8:
        uVar1 = 0x7f;
        if ((*(uint *)(unaff_x19 + 0x30) & 0xff) != 0) {
          uVar1 = *(uint *)(unaff_x19 + 0x34);
        }
        *(uint *)(unaff_x20 + 0x14) = uVar1 & *(uint *)(unaff_x20 + 0x14);
        uVar5 = FUN_0632e684(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x19 + 0x40),0);
        *(undefined8 *)(unaff_x20 + 0x18) = uVar5;
        uVar5 = FUN_0632e5a4(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x19 + 0x48),0);
        *(undefined8 *)(unaff_x20 + 0x20) = uVar5;
        auVar10 = FUN_0632e764(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                               *(undefined8 *)(unaff_x19 + 0x50),*(undefined8 *)(unaff_x19 + 0x58),0
                              );
        *(undefined1 (*) [16])(unaff_x20 + 0x28) = auVar10;
        auVar10 = FUN_0632e764(*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                               *(undefined8 *)(unaff_x19 + 0x60),*(undefined8 *)(unaff_x19 + 0x68),0
                              );
        *(undefined1 (*) [16])(unaff_x20 + 0x38) = auVar10;
        auVar10 = FUN_0632e764(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                               *(undefined8 *)(unaff_x19 + 0x70),*(undefined8 *)(unaff_x19 + 0x78),0
                              );
        *(undefined1 (*) [16])(unaff_x20 + 0x48) = auVar10;
        if (*(char *)(unaff_x20 + 0x58) == '\0') {
          bVar4 = 0xff < *(ushort *)(unaff_x19 + 0x80);
        }
        else {
          bVar4 = true;
        }
        *(bool *)(unaff_x20 + 0x58) = bVar4;
        if (*(char *)(unaff_x20 + 0x59) == '\0') {
          bVar4 = 0xff < *(ushort *)(unaff_x19 + 0x82);
        }
        else {
          bVar4 = true;
        }
        *(bool *)(unaff_x20 + 0x59) = bVar4;
        uVar5 = FUN_0632e684(*(undefined8 *)(unaff_x20 + 0x5c),*(undefined8 *)(unaff_x19 + 0x84),0);
        *(undefined8 *)(unaff_x20 + 0x5c) = uVar5;
        uVar5 = FUN_0632e5a4(*(undefined8 *)(unaff_x20 + 100),*(undefined8 *)(unaff_x19 + 0x8c),0);
        *(undefined8 *)(unaff_x20 + 100) = uVar5;
        if (*(char *)(unaff_x20 + 0xa0) == '\0') {
          bVar4 = *(char *)(unaff_x19 + 0xa0) != '\0';
        }
        else {
          bVar4 = true;
        }
        *(bool *)(unaff_x20 + 0xa0) = bVar4;
        if (*(char *)(unaff_x20 + 0xa1) == '\0') {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined1 *)(unaff_x19 + 0xd0);
        }
        *(undefined1 *)(unaff_x20 + 0xa1) = uVar6;
        if (*(char *)(unaff_x20 + 0xa2) == '\0') {
          bVar4 = false;
        }
        else {
          bVar4 = *(char *)(unaff_x19 + 0xb0) != '\0';
        }
        *(bool *)(unaff_x20 + 0xa2) = bVar4;
        if (*(char *)(unaff_x20 + 0xa3) == '\0') {
          bVar4 = *(char *)(unaff_x19 + 0xb1) != '\0';
        }
        else {
          bVar4 = true;
        }
        *(bool *)(unaff_x20 + 0xa3) = bVar4;
        puVar2 = PTR_DAT_07d96690;
        lVar7 = *(long *)(unaff_x19 + 0xe0);
        if (lVar7 != 0) {
          plVar9 = (long *)(unaff_x20 + 0xa8);
          lVar8 = *plVar9;
          if (lVar8 == 0) {
            lVar7 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db34c8);
            FUN_049ce6c0(lVar7,*(undefined8 *)PTR_DAT_07db34c0);
            *plVar9 = lVar7;
            thunk_FUN_037aeb94(plVar9,lVar7);
            lVar8 = *plVar9;
            lVar7 = *(long *)(unaff_x19 + 0xe0);
          }
          puVar3 = PTR_DAT_07db55d0;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          uVar5 = FUN_06374108(0);
          FUN_03f09aec(lVar8,lVar7,uVar5,*(undefined8 *)puVar3);
        }
        *(uint *)(unaff_x20 + 0xb0) = *(uint *)(unaff_x20 + 0xb0) | *(uint *)(unaff_x19 + 0xec);
        puVar2 = PTR_DAT_07db55c8;
        lVar7 = *(long *)(unaff_x19 + 0x38);
        if (lVar7 == 0) {
          return;
        }
        plVar9 = (long *)(unaff_x20 + 0x70);
        lVar8 = *plVar9;
        if (lVar8 == 0) {
          lVar7 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d86c48);
          FUN_049ce6c0(lVar7,*(undefined8 *)PTR_DAT_07d86c50);
          *plVar9 = lVar7;
          thunk_FUN_037aeb94(plVar9,lVar7);
          lVar8 = *plVar9;
          lVar7 = *(long *)(unaff_x19 + 0x38);
        }
        FUN_03f08efc(lVar8,lVar7,*(undefined8 *)puVar2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


