/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.DestructibleMeshComponent$$OnDestroy
ENTRY_POINT: 072ac7c4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_DestructibleMeshComponent__OnDestroy(void)

{
  int iVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  code *pcVar12;
  long unaff_x19;
  long *plVar13;
  long unaff_x20;
  undefined8 *puVar14;
  long lVar15;
  bool bVar16;
  float fVar17;
  
  FUN_04077588(PTR_DAT_09286860);
  FUN_04077588(PTR_DAT_092b8400);
  FUN_04077588(PTR_DAT_092c2718);
  *(undefined1 *)(unaff_x19 + 0x90e) = 1;
  puVar2 = PTR_DAT_09285bb0;
  iVar4 = *(int *)(unaff_x20 + 0x10);
  plVar13 = *(long **)(unaff_x20 + 0x20);
  if (iVar4 == 2) {
    *(undefined4 *)(unaff_x20 + 0x10) = 0xffffffff;
    do {
      bVar16 = true;
      do {
        do {
          uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          bVar3 = FUN_089ca704(uVar8,0,0);
          if ((bVar16 & bVar3) == 0) goto LAB_072acb54;
          if (plVar13 == (long *)0x0) goto LAB_072acc10;
          iVar4 = (**(code **)(*plVar13 + 0x2b8))(plVar13,*(undefined8 *)(*plVar13 + 0x2c0));
          if (iVar4 < *(int *)(unaff_x20 + 0x38)) {
            *(int *)(unaff_x20 + 0x40) = *(int *)(unaff_x20 + 0x40) + 1;
          }
          *(int *)(unaff_x20 + 0x38) = iVar4;
          if (*(long *)(unaff_x20 + 0x28) == 0) goto LAB_072acc10;
          iVar5 = *(int *)(unaff_x20 + 0x40);
          iVar6 = FUN_089675ac(*(long *)(unaff_x20 + 0x28),0);
          lVar11 = *(long *)(unaff_x20 + 0x30);
          if (lVar11 == 0) goto LAB_072acc10;
          iVar1 = *(int *)(unaff_x20 + 0x3c);
          iVar4 = iVar4 + iVar6 * iVar5;
          iVar5 = iVar1 + *(int *)(lVar11 + 0x18);
          bVar16 = iVar5 < iVar4;
        } while (iVar4 <= iVar5);
        lVar15 = *(long *)(unaff_x20 + 0x28);
        if (lVar15 == 0) goto LAB_072acc10;
        iVar6 = FUN_089675ac(lVar15,0);
        iVar4 = 0;
        if (iVar6 != 0) {
          iVar4 = iVar1 / iVar6;
        }
        uVar9 = FUN_089677c8(lVar15,lVar11,iVar1 - iVar4 * iVar6,0);
      } while ((uVar9 & 1) == 0);
      lVar11 = plVar13[0xc];
      if (lVar11 != 0) {
        (**(code **)(lVar11 + 0x18))
                  (0,*(undefined8 *)(lVar11 + 0x40),0,*(undefined8 *)(unaff_x20 + 0x30),
                   *(undefined8 *)(lVar11 + 0x28));
      }
      *(int *)(unaff_x20 + 0x3c) = iVar5;
    } while( true );
  }
  if (iVar4 == 1) {
    *(undefined4 *)(unaff_x20 + 0x10) = 0xffffffff;
    if (plVar13 == (long *)0x0) goto LAB_072acc10;
    goto LAB_072ac844;
  }
  if (iVar4 != 0) {
    return 0;
  }
  *(undefined4 *)(unaff_x20 + 0x10) = 0xffffffff;
  if (plVar13 == (long *)0x0) goto LAB_072acc10;
  if ((int)plVar13[6] == 1) {
LAB_072ac844:
    if ((int)plVar13[6] == 1) {
      *(undefined8 *)(unaff_x20 + 0x18) = 0;
      thunk_FUN_040ec700((undefined8 *)(unaff_x20 + 0x18),0);
      *(undefined4 *)(unaff_x20 + 0x10) = 1;
      return 1;
    }
    if ((int)plVar13[6] == 2) goto LAB_072ac858;
  }
  else {
    if ((int)plVar13[6] != 2) {
      FUN_072abe84(plVar13);
      goto LAB_072ac844;
    }
LAB_072ac858:
    uVar8 = (**(code **)(*plVar13 + 0x2a8))(plVar13,*(undefined8 *)(*plVar13 + 0x2b0));
    puVar14 = (undefined8 *)(unaff_x20 + 0x28);
    *puVar14 = uVar8;
    thunk_FUN_040ec700(puVar14,uVar8);
    uVar8 = *puVar14;
    if (*(int *)(*(long *)PTR_DAT_09285bb0 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar9 = FUN_089cc398(uVar8,0,0);
    if ((uVar9 & 1) == 0) {
      lVar11 = plVar13[9];
      if (lVar11 != 0) {
        (**(code **)(lVar11 + 0x18))(*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
      }
      iVar4 = (**(code **)(*plVar13 + 0x308))(plVar13,*(undefined8 *)(*plVar13 + 0x310));
      iVar5 = (**(code **)(*plVar13 + 0x2e8))(plVar13,*(undefined8 *)(*plVar13 + 0x2f0));
      iVar6 = (**(code **)(*plVar13 + 0x2f8))(plVar13,*(undefined8 *)(*plVar13 + 0x300));
      if (DAT_09887c61 == '\0') {
        FUN_04077588(PTR_DAT_09285ae0);
        DAT_09887c61 = '\x01';
      }
      fVar17 = ((float)iVar4 / 1000.0) * (float)(iVar6 * iVar5);
      if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      iVar4 = -0x80000000;
      if ((float)(int)fVar17 != INFINITY) {
        iVar4 = (int)fVar17;
      }
      uVar8 = FUN_04077674(*(undefined8 *)PTR_DAT_09286860,iVar4);
      *(undefined8 *)(unaff_x20 + 0x30) = uVar8;
      thunk_FUN_040ec700((undefined8 *)(unaff_x20 + 0x30),uVar8);
      uVar7 = (**(code **)(*plVar13 + 0x2b8))(plVar13,*(undefined8 *)(*plVar13 + 0x2c0));
      *(undefined4 *)(unaff_x20 + 0x3c) = uVar7;
      *(undefined4 *)(unaff_x20 + 0x40) = 0;
      *(undefined4 *)(unaff_x20 + 0x38) = uVar7;
LAB_072acb54:
      uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_09285bb0 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar9 = FUN_089ca704(uVar8,0,0);
      if ((uVar9 & 1) == 0) {
        if (plVar13 == (long *)0x0) goto LAB_072acc10;
      }
      else {
        if (plVar13 == (long *)0x0) {
LAB_072acc10:
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        uVar9 = (**(code **)(*plVar13 + 0x338))(plVar13,*(undefined8 *)(*plVar13 + 0x340));
        if ((uVar9 & 1) != 0) {
          *(undefined8 *)(unaff_x20 + 0x18) = 0;
          thunk_FUN_040ec700((undefined8 *)(unaff_x20 + 0x18),0);
          *(undefined4 *)(unaff_x20 + 0x10) = 2;
          return 1;
        }
      }
      uVar9 = (**(code **)(*plVar13 + 0x338))(plVar13,*(undefined8 *)(*plVar13 + 0x340));
      if ((uVar9 & 1) == 0) {
        return 0;
      }
      pcVar12 = *(code **)(*plVar13 + 0x3b8);
      uVar8 = *(undefined8 *)(*plVar13 + 0x3c0);
      goto LAB_072acbec;
    }
    plVar10 = (long *)thunk_FUN_0408781c(plVar13,0);
    if (plVar10 == (long *)0x0) goto LAB_072acc10;
    uVar8 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
    if (*(int *)(*(long *)PTR_DAT_092b8400 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)PTR_DAT_092b8400);
    }
    FUN_07301bac(uVar8,*(undefined8 *)PTR_DAT_092c2718,0,0);
  }
  lVar11 = plVar13[10];
  *(undefined1 *)(plVar13 + 8) = 0;
  if (lVar11 == 0) {
    return 0;
  }
  pcVar12 = *(code **)(lVar11 + 0x18);
  plVar13 = *(long **)(lVar11 + 0x40);
  uVar8 = *(undefined8 *)(lVar11 + 0x28);
LAB_072acbec:
  (*pcVar12)(plVar13,uVar8);
  return 0;
}


