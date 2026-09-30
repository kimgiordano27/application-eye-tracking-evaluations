/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.EnvironmentDepthManager.Mask$$Dispose
ENTRY_POINT: 04d05ff8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04d06764) */

undefined4 Meta_XR_EnvironmentDepth_EnvironmentDepthManager_Mask__Dispose(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined4 uVar17;
  ulong uVar18;
  ulong uVar19;
  long unaff_x29;
  undefined1 auVar20 [16];
  ulong auStack_30 [6];
  
  FUN_02d6084c(*(undefined8 *)(param_1 + 0x420));
  *(undefined1 *)(unaff_x20 + 0xd93) = 1;
  uVar18 = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x60) + 0xfc);
  lVar15 = (long)&stack0x00000000 - (uVar18 + 0xf & 0x1fffffff0);
  memset((void *)(unaff_x19 + 0x50),0,0x2f0);
  *(undefined1 *)(unaff_x19 + 0x3c) = 0;
  pcVar5 = (char *)thunk_FUN_02dbdd9c();
  uVar17 = 0;
  if (*pcVar5 == '\0') {
    *(ulong *)(unaff_x19 + 8) = uVar18;
    *(long *)(unaff_x19 + 0x10) = lVar15;
    memset((void *)(unaff_x19 + 0x50),0,0x2f0);
    puVar6 = (undefined8 *)thunk_FUN_02dbdd9c();
    uVar7 = *puVar6;
    *(undefined1 *)(unaff_x19 + 0x3c) = 0;
    *(undefined8 *)(unaff_x19 + 0x18) = uVar7;
    FUN_0506ac34(uVar7,unaff_x19 + 0x3c,0);
    pcVar5 = (char *)thunk_FUN_02dbdd9c();
    if (*pcVar5 == '\0') {
      plVar8 = (long *)thunk_FUN_02dbdd9c();
      lVar14 = *plVar8;
      if (lVar14 == 0) {
        *(undefined8 *)(unaff_x19 + 0x28) = 0;
      }
      else {
        lVar1 = 0;
        if (*(int *)(lVar14 + 0x18) != 0) {
          lVar1 = lVar14 + 0x20;
        }
        *(long *)(unaff_x19 + 0x28) = lVar1;
      }
LAB_04d06168:
      do {
        plVar8 = (long *)thunk_FUN_02dbdd9c();
        if ((*plVar8 != 0) && (plVar8 = (long *)thunk_FUN_02dbdd9c(), *plVar8 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x40))();
        pcVar5 = (char *)thunk_FUN_02dbdd9c();
        if (*pcVar5 != '\0') goto LAB_04d060d0;
        puVar6 = (undefined8 *)thunk_FUN_02dbdd9c();
        uVar7 = *puVar6;
        uVar2 = puVar6[1];
        plVar8 = (long *)thunk_FUN_02dbdd9c();
        lVar14 = *plVar8;
        if (DAT_06b77dad == '\0') {
          FUN_02d6084c(PTR_DAT_0676c428);
          DAT_06b77dad = '\x01';
          if (lVar14 == 0) goto LAB_04d0628c;
LAB_04d06254:
          uVar9 = FUN_04e8a8a0(lVar14,0);
          *(ulong *)(unaff_x19 + 0x30) = (ulong)*(uint *)(lVar14 + 0x10);
        }
        else {
          if (lVar14 != 0) goto LAB_04d06254;
LAB_04d0628c:
          uVar9 = 0;
          *(undefined8 *)(unaff_x19 + 0x30) = 0;
        }
        puVar10 = (ulong *)thunk_FUN_02dbdd9c();
        uVar18 = *puVar10;
        if (DAT_06b77dad == '\0') {
          FUN_02d6084c(PTR_DAT_0676c428);
          DAT_06b77dad = '\x01';
          if (uVar18 == 0) goto LAB_04d062f8;
LAB_04d062c4:
          uVar11 = FUN_04e8a8a0(uVar18,0);
          uVar18 = (ulong)*(uint *)(uVar18 + 0x10);
        }
        else {
          if (uVar18 != 0) goto LAB_04d062c4;
LAB_04d062f8:
          uVar11 = 0;
        }
        puVar10 = (ulong *)thunk_FUN_02dbdd9c();
        uVar19 = *puVar10;
        if (DAT_06b77dad == '\0') {
          FUN_02d6084c(PTR_DAT_0676c428);
          DAT_06b77dad = '\x01';
          if (uVar19 == 0) goto LAB_04d0635c;
LAB_04d06328:
          uVar12 = FUN_04e8a8a0(uVar19,0);
          uVar19 = (ulong)*(uint *)(uVar19 + 0x10);
        }
        else {
          if (uVar19 != 0) goto LAB_04d06328;
LAB_04d0635c:
          uVar12 = 0;
        }
        plVar8 = (long *)thunk_FUN_02dbdd9c();
        lVar14 = *plVar8;
        if (lVar14 == 0) {
          uVar16 = 0;
          lVar14 = 0;
        }
        else {
          uVar16 = (ulong)*(uint *)(lVar14 + 0x18);
          lVar14 = lVar14 + 0x20;
        }
        uVar13 = *(undefined8 *)(unaff_x19 + 0x30);
        *(ulong *)(lVar15 + -0x18) = uVar16;
        *(undefined8 *)(lVar15 + -0x10) = 0;
        *(ulong *)(lVar15 + -0x28) = uVar19;
        *(long *)(lVar15 + -0x20) = lVar14;
        *(undefined8 *)(lVar15 + -0x30) = uVar12;
        uVar3 = FUN_04fe2cf8(unaff_x19 + 0x50,uVar7,uVar2,uVar9,uVar13,uVar11,uVar18);
        if ((((uVar3 >> 4 & 1) == 0) ||
            (puVar6 = (undefined8 *)thunk_FUN_02dbdd9c(), *(char *)*puVar6 != '.')) ||
           ((plVar8 = (long *)thunk_FUN_02dbdd9c(), *(char *)(*plVar8 + 1) != '\0' &&
            ((plVar8 = (long *)thunk_FUN_02dbdd9c(), *(char *)(*plVar8 + 1) != '.' ||
             (plVar8 = (long *)thunk_FUN_02dbdd9c(), *(char *)(*plVar8 + 2) != '\0')))))) {
          plVar8 = (long *)thunk_FUN_02dbdd9c();
          if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          if (*(int *)(*plVar8 + 0x14) != 0) {
            plVar8 = (long *)thunk_FUN_02dbdd9c();
            if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            uVar4 = uVar3;
            if ((*(byte *)(*plVar8 + 0x14) & 1) != 0) {
              uVar4 = FUN_04fe3168(unaff_x19 + 0x50,0);
            }
            plVar8 = (long *)thunk_FUN_02dbdd9c();
            if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            if ((*(uint *)(*plVar8 + 0x14) & uVar4) != 0) goto LAB_04d06168;
          }
          if ((uVar3 >> 4 & 1) != 0) {
            plVar8 = (long *)thunk_FUN_02dbdd9c();
            if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            if ((*(char *)(*plVar8 + 0x10) != '\0') &&
               (uVar18 = (**(code **)(*unaff_x21 + 0x1d8))(), (uVar18 & 1) != 0)) {
              plVar8 = (long *)thunk_FUN_02dbdd9c();
              if (*plVar8 == 0) {
                uVar7 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0676c418);
                FUN_03f8cb2c(uVar7,*(undefined8 *)PTR_DAT_0676c410);
                FUN_028f861c();
              }
              plVar8 = (long *)thunk_FUN_02dbdd9c();
              lVar14 = *plVar8;
              puVar10 = (ulong *)thunk_FUN_02dbdd9c();
              uVar18 = *puVar10;
              if (DAT_06b77dad == '\0') {
                FUN_02d6084c(PTR_DAT_0676c428);
                DAT_06b77dad = '\x01';
                if (uVar18 == 0) goto LAB_04d06678;
LAB_04d06614:
                uVar7 = FUN_04e8a8a0(uVar18,0);
                uVar18 = (ulong)*(uint *)(uVar18 + 0x10);
              }
              else {
                if (uVar18 != 0) goto LAB_04d06614;
LAB_04d06678:
                uVar7 = 0;
              }
              auVar20 = FUN_04fe30a4(unaff_x19 + 0x50,0);
              if (*(int *)(*(long *)PTR_DAT_067616e8 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar7 = FUN_04fe0698(uVar7,uVar18,auVar20._0_8_,auVar20._8_8_,0);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8(uVar7,uVar7);
              }
              FUN_03f8d040(lVar14,uVar7,*(undefined8 *)PTR_DAT_0676c408);
            }
          }
        }
        else {
          plVar8 = (long *)thunk_FUN_02dbdd9c();
          if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          if (*(char *)(*plVar8 + 0x20) == '\0') goto LAB_04d06168;
        }
        uVar18 = (**(code **)(*unaff_x21 + 0x1c8))();
      } while ((uVar18 & 1) == 0);
      lVar15 = *unaff_x21;
      *(long *)(unaff_x19 + 0x40) = unaff_x19 + 0x50;
      *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)(unaff_x19 + 0x10);
      (**(code **)(*(long *)(lVar15 + 0x1f0) + 0x10))
                (*(undefined8 *)(*(long *)(lVar15 + 0x1f0) + 8));
      FUN_02d60874();
      uVar17 = 1;
    }
    else {
LAB_04d060d0:
      uVar17 = 0;
    }
    if (*(char *)(unaff_x19 + 0x3c) != '\0') {
      thunk_FUN_02d6ec70(*(undefined8 *)(unaff_x19 + 0x18),0);
    }
  }
  if (*(long *)(*(long *)(unaff_x19 + 0x20) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
    return uVar17;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


