/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$UnregisterAnchorUpdates
ENTRY_POINT: 072ad8dc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_EffectMesh__UnregisterAnchorUpdates(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar14;
  long lVar15;
  ulong extraout_d0;
  ulong uVar16;
  float fVar17;
  
  thunk_FUN_040ec700();
  puVar4 = PTR_DAT_09285bb0;
  uVar14 = *(undefined8 *)(unaff_x19 + 0x30);
  if (*(int *)(*(long *)PTR_DAT_09285bb0 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar8 = FUN_089ca704(uVar14,0,0);
  if ((uVar8 & 1) == 0) {
    if (unaff_x20 != (long *)0x0) goto LAB_072adab8;
  }
  else if (unaff_x20 != (long *)0x0) {
    uVar8 = (**(code **)(*unaff_x20 + 0x2c8))();
    if (((uVar8 & 1) != 0) && (uVar8 = extraout_d0, (char)unaff_x20[8] != '\0')) {
      do {
        uVar14 = *(undefined8 *)(unaff_x19 + 0x30);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_040d65a8(uVar8);
        }
        uVar8 = FUN_089ca704(uVar14,0,0);
        if ((uVar8 & 1) == 0) {
LAB_072adaec:
          *(undefined8 *)(unaff_x19 + 0x18) = 0;
          thunk_FUN_040ec700((undefined8 *)(unaff_x19 + 0x18),0);
          *(undefined4 *)(unaff_x19 + 0x10) = 1;
          return 1;
        }
        iVar5 = (**(code **)(*unaff_x20 + 0x2b8))();
        if (iVar5 < *(int *)(unaff_x19 + 0x48)) {
          *(int *)(unaff_x19 + 0x40) = *(int *)(unaff_x19 + 0x40) + 1;
        }
        *(int *)(unaff_x19 + 0x48) = iVar5;
        if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_072adb0c;
        iVar7 = *(int *)(unaff_x19 + 0x40);
        iVar6 = FUN_089675ac(*(long *)(unaff_x19 + 0x30),0);
        iVar3 = *(int *)(unaff_x19 + 0x44);
        iVar2 = *(int *)(unaff_x19 + 0x4c) + iVar3;
        if (iVar5 + iVar6 * iVar7 <= iVar2) goto LAB_072adaec;
        lVar15 = *(long *)(unaff_x19 + 0x30);
        if (lVar15 == 0) goto LAB_072adb0c;
        uVar14 = *(undefined8 *)(unaff_x19 + 0x58);
        iVar7 = FUN_089675ac(lVar15,0);
        iVar5 = 0;
        if (iVar7 != 0) {
          iVar5 = iVar3 / iVar7;
        }
        FUN_089677c8(lVar15,uVar14,iVar3 - iVar5 * iVar7,0);
        lVar15 = *(long *)(unaff_x19 + 0x58);
        if (lVar15 == 0) goto LAB_072adb0c;
        uVar12 = *(ulong *)(lVar15 + 0x18);
        uVar11 = (uint)uVar12;
        if ((int)uVar11 < 1) {
          uVar8 = 0;
        }
        else {
          uVar9 = 0;
          uVar10 = 0;
          uVar16 = 0;
          do {
            if ((uVar12 & 0xffffffff) == uVar10) {
LAB_072adb08:
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            iVar5 = *(int *)(unaff_x19 + 0x50);
            fVar17 = *(float *)(lVar15 + 0x20 + uVar10 * 4);
            iVar7 = 0;
            if (iVar5 != 0) {
              iVar7 = (int)uVar10 / iVar5;
            }
            uVar8 = (ulong)(uint)(fVar17 * fVar17);
            if (fVar17 * fVar17 <= (float)uVar16) {
              uVar8 = uVar16;
            }
            if ((int)uVar10 == iVar7 * iVar5) {
              lVar13 = *(long *)(unaff_x19 + 0x38);
              if (lVar13 == 0) goto LAB_072adb0c;
              if ((int)uVar9 < (int)*(uint *)(lVar13 + 0x18)) {
                if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_072adb08;
                lVar1 = (long)(int)uVar9;
                uVar9 = uVar9 + 1;
                *(float *)(lVar13 + lVar1 * 4 + 0x20) = fVar17;
              }
            }
            uVar10 = uVar10 + 1;
            uVar16 = uVar8;
          } while ((uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU)) != uVar10);
        }
        lVar15 = unaff_x20[7];
        iVar5 = (int)unaff_x20[0xd] + 1;
        *(int *)(unaff_x20 + 0xd) = iVar5;
        if (lVar15 != 0) {
          uVar8 = (**(code **)(lVar15 + 0x18))
                            (*(undefined8 *)(lVar15 + 0x40),iVar5,*(undefined8 *)(unaff_x19 + 0x38),
                             *(undefined8 *)(lVar15 + 0x28));
        }
        *(int *)(unaff_x19 + 0x44) = iVar2;
      } while( true );
    }
LAB_072adab8:
    if ((char)unaff_x20[8] != '\0') {
      (**(code **)(*unaff_x20 + 0x328))();
    }
    return 0;
  }
LAB_072adb0c:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


