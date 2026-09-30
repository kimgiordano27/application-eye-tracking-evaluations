/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$<GetClosestSurfacePositionDebugger>b__57_0
ENTRY_POINT: 077430ec
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
Meta_XR_MRUtilityKit_SceneDebugger__<GetClosestSurfacePositionDebugger>b__57_0
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  int *piVar18;
  long unaff_x20;
  undefined4 *unaff_x21;
  undefined8 uVar19;
  long unaff_x23;
  long *unaff_x24;
  uint uVar20;
  long *unaff_x27;
  undefined4 unaff_w28;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  long in_stack_00000030;
  uint in_stack_00000038;
  uint uStack0000000000000040;
  uint uStack0000000000000044;
  long in_stack_00000048;
  undefined8 *in_stack_000000b0;
  undefined8 *in_stack_000000b8;
  undefined8 *in_stack_000000c0;
  undefined4 *in_stack_000000c8;
  undefined8 *in_stack_000000d0;
  int in_stack_000000d8;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    iVar1 = *(int *)(*(long *)(unaff_x20 + 0x10) + 0x18);
    iVar7 = FUN_07712f94(0);
    if (iVar1 < iVar7) {
      lVar9 = *(long *)(unaff_x20 + 0x10);
      if (lVar9 == 0) goto LAB_077435c4;
      FUN_07714288(lVar9,lVar9,0);
    }
    puVar6 = in_stack_000000d0;
    puVar5 = in_stack_000000c8;
    puVar4 = in_stack_000000c0;
    puVar3 = in_stack_000000b8;
    puVar2 = in_stack_000000b0;
    *unaff_x21 = 5;
    if ((*(long *)(unaff_x20 + 0x10) != 0) &&
       (lVar9 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x20), lVar9 != 0)) {
      puVar13 = (undefined8 *)PTR_DAT_09f31d98;
      if (*(long *)(lVar9 + 0x18) == 0) {
LAB_07743264:
        *puVar6 = *puVar13;
        thunk_FUN_044bb4b4(puVar6,*puVar13);
        *puVar2 = 0;
        puVar2[1] = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        *puVar4 = 0;
        puVar4[1] = 0;
        *puVar5 = 0xffffffff;
        return 0;
      }
      if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar10 = FUN_0952c404();
      if ((uVar10 & 1) == 0) {
        if (unaff_x24 != (long *)0x0) {
          iVar7 = FUN_094d3ba4();
          iVar1 = in_stack_000000d8;
          puVar13 = (undefined8 *)PTR_DAT_09f31db0;
          if (iVar7 <= (int)in_stack_00000038) goto LAB_07743264;
          lVar9 = *(long *)(unaff_x20 + 0x28);
          if (lVar9 != 0) {
            uVar20 = 0;
            do {
              if ((int)*(uint *)(lVar9 + 0x18) <= (int)uVar20) {
                *puVar2 = 0;
                puVar2[1] = 0;
                *puVar3 = 0;
                puVar3[1] = 0;
                *puVar4 = 0;
                puVar4[1] = 0;
                *puVar5 = 0xffffffff;
                if (unaff_x23 != 0) {
                  uVar11 = thunk_FUN_0952ff6c();
                  uVar11 = FUN_078ab14c(*(undefined8 *)PTR_DAT_09f31da0,uVar11,0);
                  goto LAB_077437c4;
                }
                break;
              }
              if (*(uint *)(lVar9 + 0x18) <= uVar20) goto LAB_077439d0;
              if (*(long *)(lVar9 + (long)(int)uVar20 * 8 + 0x20) == 0) break;
              uVar10 = FUN_07742eb0();
              if ((uVar10 & 1) != 0) {
                if (*(long *)(unaff_x20 + 0x10) == 0) break;
                uVar10 = FUN_0771314c(*(long *)(unaff_x20 + 0x10),unaff_w28);
                if ((uVar10 & 1) != 0) {
                  uVar8 = FUN_0952fcb8();
                  if (in_stack_00000030 != 0) {
                    uVar10 = FUN_0731ca6c(in_stack_00000030,uVar8,&stack0x00000048,
                                          *(undefined8 *)PTR_DAT_09f31390);
                    if ((uVar10 & 1) != 0) goto LAB_07743440;
                    uVar8 = FUN_094d3ba4();
                    in_stack_00000048 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f31398,uVar8);
                    iVar7 = FUN_094d3ba4();
                    if (iVar7 < 1) goto LAB_07743414;
                    uVar10 = 0;
                    goto LAB_0774336c;
                  }
                  break;
                }
                lVar9 = *(long *)(unaff_x20 + 0x20);
                if (lVar9 == 0) break;
                if (*(uint *)(lVar9 + 0x18) <= uVar20) goto LAB_077439d0;
                lVar15 = (long)(int)uVar20;
                if (*(int *)(lVar9 + lVar15 * 4 + 0x20) != 1) {
                  lVar17 = *(long *)(unaff_x20 + 0x28);
                  if (lVar17 == 0) break;
                  if (*(uint *)(lVar17 + 0x18) <= uVar20) goto LAB_077439d0;
                  lVar17 = *(long *)(lVar17 + lVar15 * 8 + 0x20);
                  if (lVar17 == 0) break;
                  plVar14 = *(long **)(lVar17 + 0x10);
                  uVar11 = *(undefined8 *)PTR_DAT_09f31d78;
                  if (plVar14 == (long *)0x0) {
                    uVar12 = 0;
                  }
                  else {
                    uVar12 = (**(code **)(*plVar14 + 0x168))
                                       (plVar14,*(undefined8 *)(*plVar14 + 0x170));
                    lVar9 = *(long *)(unaff_x20 + 0x20);
                    if (lVar9 == 0) break;
                  }
                  if (*(uint *)(lVar9 + 0x18) <= uVar20) goto LAB_077439d0;
                  uVar19 = FUN_07a3b850(lVar9 + lVar15 * 4 + 0x20,0);
                  uVar11 = FUN_078b56f4(uVar11,uVar12,*(undefined8 *)PTR_DAT_09f31d88,uVar19,0);
                  if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                    thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
                  }
                  FUN_094c6b48(uVar11,0);
                }
                lVar9 = *(long *)(unaff_x20 + 0x28);
                if (lVar9 != 0) {
                  if (*(uint *)(lVar9 + 0x18) <= uVar20) goto LAB_077439d0;
                  lVar9 = *(long *)(lVar9 + lVar15 * 8 + 0x20);
                  if (lVar9 != 0) {
                    uVar11 = *(undefined8 *)(lVar9 + 0x18);
                    puVar2[1] = *(undefined8 *)(lVar9 + 0x20);
                    *puVar2 = uVar11;
                    *unaff_x21 = *(undefined4 *)(lVar9 + 0x70);
                    uVar8 = FUN_07712f2c(lVar9,0);
                    *(undefined4 *)puVar3 = uVar8;
                    *(undefined4 *)((long)puVar3 + 4) = param_2;
                    *(undefined4 *)(puVar3 + 1) = param_3;
                    *(undefined4 *)((long)puVar3 + 0xc) = param_4;
                    uVar8 = FUN_07712f6c(lVar9,0);
                    *(undefined4 *)puVar4 = uVar8;
                    *(undefined4 *)((long)puVar4 + 4) = param_2;
                    *(undefined4 *)(puVar4 + 1) = param_3;
                    *(undefined4 *)((long)puVar4 + 0xc) = param_4;
                    *puVar5 = *(undefined4 *)(lVar9 + 0x30);
                    return 1;
                  }
                }
                break;
              }
              lVar9 = *(long *)(unaff_x20 + 0x28);
              uVar20 = uVar20 + 1;
            } while (lVar9 != 0);
          }
        }
      }
      else {
        *puVar2 = 0;
        puVar2[1] = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        *puVar4 = 0;
        puVar4[1] = 0;
        *puVar5 = 0xffffffff;
        if (unaff_x24 != (long *)0x0) {
          uVar11 = thunk_FUN_0952ff6c();
          uStack0000000000000040 = in_stack_00000038;
          uVar12 = thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x48),&stack0x00000040);
          uVar11 = FUN_078b5afc(*(undefined8 *)PTR_DAT_09f31db8,uVar11,uVar12,0);
LAB_077437c4:
          *puVar6 = uVar11;
          thunk_FUN_044bb4b4(puVar6,uVar11);
          return 0;
        }
      }
    }
  }
  goto LAB_077435c4;
LAB_0774336c:
  do {
    if ((in_stack_00000048 == 0) || (unaff_x27 == (long *)0x0)) goto LAB_077435c4;
    if (*(uint *)(in_stack_00000048 + 0x18) <= uVar10) goto LAB_077439d0;
    lVar9 = *unaff_x27;
    uVar16 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar16 != 0) {
      piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_09f312b8) {
          puVar13 = (undefined8 *)(lVar9 + (long)(*piVar18 + 4) * 0x10 + 0x138);
          goto LAB_077433dc;
        }
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar16 != 0);
    }
    puVar13 = (undefined8 *)FUN_044822ac();
LAB_077433dc:
    (*(code *)*puVar13)();
    uVar10 = uVar10 + 1;
    iVar7 = FUN_094d3ba4();
  } while ((long)uVar10 < (long)iVar7);
LAB_07743414:
  uVar8 = FUN_0952fcb8();
  FUN_0731afd4(in_stack_00000030,uVar8,in_stack_00000048,*(undefined8 *)PTR_DAT_09f31388);
LAB_07743440:
  if (4 < iVar1) {
    if (in_stack_00000048 == 0) goto LAB_077435c4;
    if (*(uint *)(in_stack_00000048 + 0x18) <= in_stack_00000038) {
LAB_077439d0:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    FUN_094cc6fc(in_stack_00000048 + (long)(int)in_stack_00000038 * 0x18 + 0x20,
                 *(undefined8 *)PTR_DAT_09f30790,0,0);
    uVar11 = FUN_078b5b40(*(undefined8 *)PTR_DAT_09f31d80);
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
    }
    FUN_094c652c(uVar11,0);
  }
  lVar9 = *(long *)(unaff_x20 + 0x28);
  uStack0000000000000044 = uVar20;
  if (lVar9 != 0) {
    while (uStack0000000000000044 = uVar20, (int)uVar20 < (int)*(uint *)(lVar9 + 0x18)) {
      if (*(uint *)(lVar9 + 0x18) <= uVar20) goto LAB_077439d0;
      lVar9 = *(long *)(lVar9 + (long)(int)uVar20 * 8 + 0x20);
      if (lVar9 == 0) goto LAB_077435c4;
      uVar10 = FUN_07742eb0();
      if ((uVar10 & 1) != 0) {
        if (in_stack_00000048 == 0) goto LAB_077435c4;
        if (*(uint *)(in_stack_00000048 + 0x18) <= in_stack_00000038) goto LAB_077439d0;
        lVar15 = in_stack_00000048 + (long)(int)in_stack_00000038 * 0x18;
        uVar8 = *(undefined4 *)(lVar15 + 0x24);
        uVar22 = *(undefined4 *)(lVar15 + 0x28);
        uVar23 = *(undefined4 *)(lVar15 + 0x2c);
        uVar10 = FUN_077142ec(*(undefined4 *)(lVar15 + 0x20),*(undefined4 *)(lVar9 + 0x70),iVar1,0);
        if ((uVar10 & 1) != 0) {
          if (4 < iVar1) {
            uVar19 = *(undefined8 *)PTR_DAT_09f31d90;
            uVar11 = (**(code **)(*unaff_x24 + 0x168))();
            uVar12 = FUN_07a3b850((long)&stack0x00000040 + 4,0);
            uVar11 = FUN_078b56f4(uVar19,uVar11,*(undefined8 *)PTR_DAT_09f31d70,uVar12,0);
            if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
              thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
            }
            FUN_094c652c(uVar11,0);
            uVar20 = uStack0000000000000044;
          }
          lVar9 = *(long *)(unaff_x20 + 0x28);
          if (lVar9 != 0) {
            if (*(uint *)(lVar9 + 0x18) <= uVar20) goto LAB_077439d0;
            lVar9 = *(long *)(lVar9 + (long)(int)uVar20 * 8 + 0x20);
            if (lVar9 != 0) {
              uVar11 = *(undefined8 *)(lVar9 + 0x18);
              puVar2[1] = *(undefined8 *)(lVar9 + 0x20);
              *puVar2 = uVar11;
              *unaff_x21 = *(undefined4 *)(lVar9 + 0x70);
              uVar21 = FUN_07712f2c(lVar9,0);
              *(undefined4 *)puVar3 = uVar21;
              *(undefined4 *)((long)puVar3 + 4) = uVar8;
              *(undefined4 *)(puVar3 + 1) = uVar22;
              *(undefined4 *)((long)puVar3 + 0xc) = uVar23;
              uVar21 = FUN_07712f6c(lVar9,0);
              *(undefined4 *)puVar4 = uVar21;
              *(undefined4 *)((long)puVar4 + 4) = uVar8;
              *(undefined4 *)(puVar4 + 1) = uVar22;
              *(undefined4 *)((long)puVar4 + 0xc) = uVar23;
              *puVar5 = *(undefined4 *)(lVar9 + 0x30);
              return 1;
            }
          }
          goto LAB_077435c4;
        }
      }
      uVar20 = uVar20 + 1;
      lVar9 = *(long *)(unaff_x20 + 0x28);
      uStack0000000000000044 = uVar20;
      if (lVar9 == 0) goto LAB_077435c4;
    }
    *puVar2 = 0;
    puVar2[1] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    *puVar5 = 0xffffffff;
    plVar14 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,4);
    lVar9 = thunk_FUN_0952ff6c();
    if (plVar14 == (long *)0x0) goto LAB_077435c4;
    if ((lVar9 == 0) ||
       (lVar15 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar14 + 0x40)), lVar15 != 0)) {
      if ((int)plVar14[3] == 0) goto LAB_077439d0;
      plVar14[4] = lVar9;
      thunk_FUN_044bb4b4(plVar14 + 4,lVar9);
      if ((unaff_x23 == 0) || (lVar9 = thunk_FUN_04485110(), lVar9 != 0)) {
        if (*(uint *)(plVar14 + 3) < 2) goto LAB_077439d0;
        plVar14[5] = unaff_x23;
        thunk_FUN_044bb4b4();
        uStack0000000000000040 = in_stack_00000038;
        lVar9 = thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x48),&stack0x00000040);
        if ((lVar9 == 0) ||
           (lVar15 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar14 + 0x40)), lVar15 != 0)) {
          if (*(uint *)(plVar14 + 3) < 3) goto LAB_077439d0;
          plVar14[6] = lVar9;
          thunk_FUN_044bb4b4(plVar14 + 6,lVar9);
          if (in_stack_00000048 == 0) goto LAB_077435c4;
          if (*(uint *)(in_stack_00000048 + 0x18) <= in_stack_00000038) goto LAB_077439d0;
          lVar9 = FUN_094cc6fc(in_stack_00000048 + (long)(int)in_stack_00000038 * 0x18 + 0x20,0,0,0)
          ;
          if ((lVar9 == 0) ||
             (lVar15 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar14 + 0x40)), lVar15 != 0)) {
            if (*(uint *)(plVar14 + 3) < 4) goto LAB_077439d0;
            plVar14[7] = lVar9;
            thunk_FUN_044bb4b4(plVar14 + 7,lVar9);
            uVar11 = FUN_078b5b84(*(undefined8 *)PTR_DAT_09f31da8,plVar14,0);
            goto LAB_077437c4;
          }
        }
      }
    }
    uVar11 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar11,0);
  }
LAB_077435c4:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


