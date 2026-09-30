/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$RaycastVolume
ENTRY_POINT: 07731938
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKAnchor__RaycastVolume(void)

{
  undefined4 uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  undefined8 *unaff_x19;
  long *plVar16;
  long unaff_x20;
  undefined8 *unaff_x22;
  undefined4 unaff_w24;
  long *unaff_x25;
  uint uVar17;
  
  uVar4 = FUN_04447c90();
  *unaff_x22 = uVar4;
  thunk_FUN_044bb4b4();
  uVar4 = FUN_04447c90(*unaff_x19,unaff_w24);
  uVar5 = FUN_04447c90(*unaff_x19,unaff_w24);
  uVar6 = FUN_04447c90(*unaff_x19,unaff_w24);
  if (unaff_x25 != (long *)0x0) {
    bVar2 = *(byte *)(*(long *)PTR_DAT_09f31428 + 0x130);
    if ((*(byte *)(*unaff_x25 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*unaff_x25 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_09f31428)
       ) {
                    /* WARNING: Subroutine does not return */
      FUN_044481e4();
    }
    FUN_094edf40();
    FUN_07720304();
    lVar12 = *(long *)(unaff_x20 + 0x18);
    if (lVar12 != 0) {
      uVar17 = 0;
      while (puVar3 = PTR_DAT_09f31428, (int)uVar17 < (int)*(uint *)(lVar12 + 0x18)) {
        if (*(uint *)(lVar12 + 0x18) <= uVar17) {
LAB_07731da8:
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        lVar12 = *(long *)(lVar12 + (long)(int)uVar17 * 8 + 0x20);
        if ((lVar12 == 0) || (*(long *)(unaff_x20 + 0x10) == 0)) goto LAB_07731bdc;
        lVar7 = FUN_07726ac8(*(long *)(unaff_x20 + 0x10),*(undefined8 *)(lVar12 + 0x18));
        if (lVar7 == 0) {
          if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          FUN_094c6b48(*(undefined8 *)PTR_DAT_09f317f8,0);
        }
        else {
          lVar13 = *(long *)(lVar12 + 0x30);
          if (lVar13 == 0) goto LAB_07731bdc;
          uVar1 = *(undefined4 *)(lVar7 + 0x28);
          lVar7 = 0;
          while( true ) {
            if ((int)*(uint *)(lVar13 + 0x18) <= (int)(uint)lVar7) break;
            if (*(uint *)(lVar13 + 0x18) <= (uint)lVar7) goto LAB_07731da8;
            lVar13 = *(long *)(lVar13 + lVar7 * 8 + 0x20);
            if ((lVar13 == 0) || (lVar8 = *(long *)(lVar13 + 0x18), lVar8 == 0)) goto LAB_07731bdc;
            FUN_07a612b4(lVar8,0,uVar4,uVar1,*(undefined4 *)(lVar8 + 0x18),0);
            lVar8 = *(long *)(lVar13 + 0x20);
            if (lVar8 == 0) goto LAB_07731bdc;
            FUN_07a612b4(lVar8,0,uVar5,uVar1,*(undefined4 *)(lVar8 + 0x18),0);
            lVar8 = *(long *)(lVar13 + 0x28);
            if (lVar8 == 0) goto LAB_07731bdc;
            FUN_07a612b4(lVar8,0,uVar6,uVar1,*(undefined4 *)(lVar8 + 0x18),0);
            uVar9 = FUN_07731dc8(*(undefined8 *)(lVar12 + 0x20));
            uVar10 = FUN_07a3b850(lVar12 + 0x10,0);
            FUN_078a7764(uVar9,uVar10,0);
            FUN_077203f8(*(undefined4 *)(lVar13 + 0x10));
            if (*(long *)(lVar13 + 0x18) == 0) goto LAB_07731bdc;
            FUN_07731e0c(uVar4,uVar1,*(undefined4 *)(*(long *)(lVar13 + 0x18) + 0x18));
            if (*(long *)(lVar13 + 0x20) == 0) goto LAB_07731bdc;
            FUN_07731e0c(uVar5,uVar1,*(undefined4 *)(*(long *)(lVar13 + 0x20) + 0x18));
            if (*(long *)(lVar13 + 0x28) == 0) goto LAB_07731bdc;
            FUN_07731e0c(uVar6,uVar1,*(undefined4 *)(*(long *)(lVar13 + 0x28) + 0x18));
            lVar13 = *(long *)(lVar12 + 0x30);
            lVar7 = lVar7 + 1;
            if (lVar13 == 0) goto LAB_07731bdc;
          }
        }
        if ((*(long *)(unaff_x20 + 0x10) == 0) ||
           (plVar16 = *(long **)(*(long *)(unaff_x20 + 0x10) + 0x1a0), plVar16 == (long *)0x0))
        goto LAB_07731bdc;
        lVar7 = thunk_FUN_04485110(lVar12,*(undefined8 *)(*plVar16 + 0x40));
        if (lVar7 == 0) {
          uVar4 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
          FUN_04447d10(uVar4,0);
        }
        if (*(uint *)(plVar16 + 3) <= uVar17) goto LAB_07731da8;
        plVar16[(long)(int)uVar17 + 4] = lVar12;
        thunk_FUN_044bb4b4(plVar16 + (long)(int)uVar17 + 4,lVar12);
        lVar12 = *(long *)(unaff_x20 + 0x18);
        uVar17 = uVar17 + 1;
        if (lVar12 == 0) goto LAB_07731bdc;
      }
      bVar2 = *(byte *)(*(long *)PTR_DAT_09f31428 + 0x130);
      if ((bVar2 <= *(byte *)(*unaff_x25 + 0x130)) &&
         (*(long *)(*(long *)(*unaff_x25 + 200) + (ulong)bVar2 * 8 + -8) ==
          *(long *)PTR_DAT_09f31428)) {
        FUN_094edf40(unaff_x25,0,0);
        bVar2 = *(byte *)(*(long *)puVar3 + 0x130);
        if ((bVar2 <= *(byte *)(*unaff_x25 + 0x130)) &&
           (*(long *)(*(long *)(*unaff_x25 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar3)) {
          FUN_094edf40(unaff_x25);
          if ((*(long *)(unaff_x20 + 0x10) != 0) &&
             (plVar16 = (long *)FUN_07715da0(*(long *)(unaff_x20 + 0x10),0), plVar16 != (long *)0x0)
             ) {
            lVar12 = *plVar16;
            uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar14 == 0) goto LAB_07731cb4;
            piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            goto LAB_07731c9c;
          }
          goto LAB_07731bdc;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_044481e4(unaff_x25);
    }
  }
  goto LAB_07731bdc;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_07731c9c:
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_09f30ab8) {
      puVar11 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_07731cd0;
    }
  }
LAB_07731cb4:
  puVar11 = (undefined8 *)FUN_044822ac(plVar16,*(long *)PTR_DAT_09f30ab8,0);
LAB_07731cd0:
  uVar14 = (*(code *)*puVar11)(plVar16,puVar11[1]);
  if ((uVar14 & 1) == 0) {
    return;
  }
  lVar12 = FUN_04c6bfdc(unaff_x25,*(undefined8 *)PTR_DAT_09f317e8);
  if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
    thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e538);
  }
  uVar14 = FUN_0952c404(lVar12,0,0);
  if ((uVar14 & 1) != 0) {
    lVar12 = FUN_095259a0(unaff_x25,0);
    if (lVar12 == 0) goto LAB_07731bdc;
    lVar12 = FUN_04d7a120(lVar12,*(undefined8 *)PTR_DAT_09f317f0);
  }
  if (lVar12 != 0) {
    uVar4 = FUN_0775d4bc(lVar12,0);
    FUN_07731ebc(*(undefined8 *)(unaff_x20 + 0x10),uVar4,*(undefined8 *)(unaff_x20 + 0x18));
    return;
  }
LAB_07731bdc:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


