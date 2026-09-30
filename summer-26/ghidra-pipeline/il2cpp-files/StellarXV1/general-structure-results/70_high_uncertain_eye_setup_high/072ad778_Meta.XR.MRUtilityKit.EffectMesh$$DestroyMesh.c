/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$DestroyMesh
ENTRY_POINT: 072ad778
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_EffectMesh__DestroyMesh(void)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  long unaff_x19;
  long unaff_x20;
  long *plVar17;
  long *plVar18;
  ulong extraout_d0;
  ulong uVar19;
  float fVar20;
  
  *(undefined1 *)(unaff_x20 + 0x91e) = 1;
  plVar17 = *(long **)(unaff_x19 + 0x20);
  if (*(int *)(unaff_x19 + 0x10) == 1) {
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(unaff_x19 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (plVar17 == (long *)0x0) goto LAB_072adb0c;
    lVar12 = plVar17[4];
    if (lVar12 != 0) {
      (**(code **)(lVar12 + 0x18))(*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x28));
    }
    lVar12 = (**(code **)(*plVar17 + 0x2a8))(plVar17,*(undefined8 *)(*plVar17 + 0x2b0));
    plVar18 = (long *)(unaff_x19 + 0x30);
    *plVar18 = lVar12;
    thunk_FUN_040ec700(plVar18,lVar12);
    (**(code **)(*plVar17 + 0x288))(plVar17,*(undefined8 *)(*plVar17 + 0x290));
    iVar4 = (**(code **)(*plVar17 + 0x298))(plVar17,*(undefined8 *)(*plVar17 + 0x2a0));
    if ((plVar17[9] == 0) || (*plVar18 == 0)) goto LAB_072adb0c;
    iVar2 = *(int *)(unaff_x19 + 0x28);
    iVar7 = *(int *)(plVar17[9] + 0x14);
    iVar5 = FUN_08967660(*plVar18,0);
    puVar3 = PTR_DAT_09286860;
    iVar5 = (iVar7 / 1000) * iVar2 * iVar5;
    uVar9 = FUN_04077674(*(undefined8 *)PTR_DAT_09286860,iVar5);
    *(undefined8 *)(unaff_x19 + 0x38) = uVar9;
    thunk_FUN_040ec700((undefined8 *)(unaff_x19 + 0x38),uVar9);
    *(undefined4 *)(unaff_x19 + 0x40) = 0;
    uVar6 = (**(code **)(*plVar17 + 0x2b8))(plVar17,*(undefined8 *)(*plVar17 + 0x2c0));
    *(undefined4 *)(unaff_x19 + 0x44) = uVar6;
    *(undefined4 *)(unaff_x19 + 0x48) = uVar6;
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_072adb0c;
    iVar2 = *(int *)(unaff_x19 + 0x28);
    iVar7 = FUN_08967660(*(long *)(unaff_x19 + 0x30),0);
    iVar7 = iVar2 * (iVar4 / 1000) * iVar7;
    uVar9 = *(undefined8 *)puVar3;
    iVar4 = 0;
    if (iVar5 != 0) {
      iVar4 = iVar7 / iVar5;
    }
    *(int *)(unaff_x19 + 0x4c) = iVar7;
    *(int *)(unaff_x19 + 0x50) = iVar4;
    uVar9 = FUN_04077674(uVar9);
    *(undefined8 *)(unaff_x19 + 0x58) = uVar9;
    thunk_FUN_040ec700();
  }
  puVar3 = PTR_DAT_09285bb0;
  uVar9 = *(undefined8 *)(unaff_x19 + 0x30);
  if (*(int *)(*(long *)PTR_DAT_09285bb0 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar10 = FUN_089ca704(uVar9,0,0);
  if ((uVar10 & 1) == 0) {
    if (plVar17 == (long *)0x0) goto LAB_072adb0c;
  }
  else {
    if (plVar17 == (long *)0x0) {
LAB_072adb0c:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar10 = (**(code **)(*plVar17 + 0x2c8))(plVar17,*(undefined8 *)(*plVar17 + 0x2d0));
    if (((uVar10 & 1) != 0) && (uVar10 = extraout_d0, (char)plVar17[8] != '\0')) {
      do {
        uVar9 = *(undefined8 *)(unaff_x19 + 0x30);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_040d65a8(uVar10);
        }
        uVar10 = FUN_089ca704(uVar9,0,0);
        if ((uVar10 & 1) == 0) {
LAB_072adaec:
          *(undefined8 *)(unaff_x19 + 0x18) = 0;
          thunk_FUN_040ec700((undefined8 *)(unaff_x19 + 0x18),0);
          *(undefined4 *)(unaff_x19 + 0x10) = 1;
          return 1;
        }
        iVar4 = (**(code **)(*plVar17 + 0x2b8))(plVar17,*(undefined8 *)(*plVar17 + 0x2c0));
        if (iVar4 < *(int *)(unaff_x19 + 0x48)) {
          *(int *)(unaff_x19 + 0x40) = *(int *)(unaff_x19 + 0x40) + 1;
        }
        *(int *)(unaff_x19 + 0x48) = iVar4;
        if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_072adb0c;
        iVar7 = *(int *)(unaff_x19 + 0x40);
        iVar8 = FUN_089675ac(*(long *)(unaff_x19 + 0x30),0);
        iVar5 = *(int *)(unaff_x19 + 0x44);
        iVar2 = *(int *)(unaff_x19 + 0x4c) + iVar5;
        if (iVar4 + iVar8 * iVar7 <= iVar2) goto LAB_072adaec;
        lVar12 = *(long *)(unaff_x19 + 0x30);
        if (lVar12 == 0) goto LAB_072adb0c;
        uVar9 = *(undefined8 *)(unaff_x19 + 0x58);
        iVar7 = FUN_089675ac(lVar12,0);
        iVar4 = 0;
        if (iVar7 != 0) {
          iVar4 = iVar5 / iVar7;
        }
        FUN_089677c8(lVar12,uVar9,iVar5 - iVar4 * iVar7,0);
        lVar12 = *(long *)(unaff_x19 + 0x58);
        if (lVar12 == 0) goto LAB_072adb0c;
        uVar15 = *(ulong *)(lVar12 + 0x18);
        uVar14 = (uint)uVar15;
        if ((int)uVar14 < 1) {
          uVar10 = 0;
        }
        else {
          uVar11 = 0;
          uVar13 = 0;
          uVar19 = 0;
          do {
            if ((uVar15 & 0xffffffff) == uVar13) {
LAB_072adb08:
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            iVar4 = *(int *)(unaff_x19 + 0x50);
            fVar20 = *(float *)(lVar12 + 0x20 + uVar13 * 4);
            iVar7 = 0;
            if (iVar4 != 0) {
              iVar7 = (int)uVar13 / iVar4;
            }
            uVar10 = (ulong)(uint)(fVar20 * fVar20);
            if (fVar20 * fVar20 <= (float)uVar19) {
              uVar10 = uVar19;
            }
            if ((int)uVar13 == iVar7 * iVar4) {
              lVar16 = *(long *)(unaff_x19 + 0x38);
              if (lVar16 == 0) goto LAB_072adb0c;
              if ((int)uVar11 < (int)*(uint *)(lVar16 + 0x18)) {
                if (*(uint *)(lVar16 + 0x18) <= uVar11) goto LAB_072adb08;
                lVar1 = (long)(int)uVar11;
                uVar11 = uVar11 + 1;
                *(float *)(lVar16 + lVar1 * 4 + 0x20) = fVar20;
              }
            }
            uVar13 = uVar13 + 1;
            uVar19 = uVar10;
          } while ((uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU)) != uVar13);
        }
        lVar12 = plVar17[7];
        iVar4 = (int)plVar17[0xd] + 1;
        *(int *)(plVar17 + 0xd) = iVar4;
        if (lVar12 != 0) {
          uVar10 = (**(code **)(lVar12 + 0x18))
                             (*(undefined8 *)(lVar12 + 0x40),iVar4,*(undefined8 *)(unaff_x19 + 0x38)
                              ,*(undefined8 *)(lVar12 + 0x28));
        }
        *(int *)(unaff_x19 + 0x44) = iVar2;
      } while( true );
    }
  }
  if ((char)plVar17[8] != '\0') {
    (**(code **)(*plVar17 + 0x328))(plVar17,*(undefined8 *)(*plVar17 + 0x330));
  }
  return 0;
}


