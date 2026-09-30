/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$GetBestPoseFromRayCast
ENTRY_POINT: 0771c704
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_18;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__GetBestPoseFromRayCast(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long unaff_x19;
  long unaff_x20;
  long *plVar11;
  long *plVar12;
  uint uVar13;
  long lVar14;
  
  FUN_04447ba8(*(undefined8 *)(param_1 + 0xe68));
  *(undefined1 *)(unaff_x20 + 0x156) = 1;
  iVar2 = *(int *)(unaff_x19 + 0x10);
  plVar11 = *(long **)(unaff_x19 + 0x28);
  if ((iVar2 == 2) || (iVar2 == 1)) {
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0771cd08;
    if (*(char *)(*(long *)(unaff_x19 + 0x20) + 0x10) == '\0') {
      return 0;
    }
    if ((plVar11 == (long *)0x0) ||
       (lVar3 = FUN_04c6cb94(plVar11,*(undefined8 *)PTR_DAT_09f30c08), lVar3 == 0))
    goto LAB_0771cd08;
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar1) {
      uVar13 = 0;
      do {
        if (uVar1 <= uVar13) {
LAB_0771cd0c:
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        plVar12 = *(long **)(lVar3 + (long)(int)uVar13 * 8 + 0x20);
        uVar5 = (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180));
        if (plVar12 == (long *)0x0) goto LAB_0771cd08;
        (**(code **)(*plVar12 + 0x188))(plVar12,uVar5,*(undefined8 *)(*plVar12 + 400));
        uVar1 = *(uint *)(lVar3 + 0x18);
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < (int)uVar1);
    }
  }
  else {
    if (iVar2 != 0) {
      return 0;
    }
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    lVar3 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f30e90);
    FUN_0778ce0c(lVar3,0);
    if (**(char **)(*(long *)PTR_DAT_09f30dc8 + 0xb8) == '\0') {
      if (lVar3 == 0) goto LAB_0771cd08;
      iVar2 = FUN_0778b458(lVar3,0);
      if ((iVar2 < 5) ||
         ((iVar2 = FUN_0778b458(lVar3,0), iVar2 == 5 && (iVar2 = FUN_0778b518(lVar3,0), iVar2 < 3)))
         ) {
        if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_094c6b48(*(undefined8 *)PTR_DAT_09f30eb0,0);
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          *(undefined1 *)(*(long *)(unaff_x19 + 0x20) + 0x10) = 0;
          return 0;
        }
        goto LAB_0771cd08;
      }
    }
    if (plVar11 == (long *)0x0) goto LAB_0771cd08;
    plVar12 = plVar11 + 0x1a;
    *plVar12 = 0;
    thunk_FUN_044bb4b4(plVar12,0);
    if (*(float *)(unaff_x19 + 0x30) <= 0.0) {
      puVar9 = (undefined8 *)PTR_DAT_09f30ea8;
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        puVar9 = (undefined8 *)PTR_DAT_09f30ea8;
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_09f1e6b8 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar4 = FUN_094bbcfc(0);
      uVar8 = 1;
      if ((uVar4 & 1) == 0) {
        uVar8 = 2;
      }
      uVar4 = FUN_07718568(plVar11,2,0,uVar8);
      if (((uVar4 & 1) == 0) ||
         ((*(char *)((long)plVar11 + 0x84) != '\0' &&
          (uVar4 = FUN_0771b814(plVar11), (uVar4 & 1) == 0)))) goto LAB_0771c954;
      iVar2 = (**(code **)(*plVar11 + 0x378))(plVar11,*(undefined8 *)(*plVar11 + 0x380));
      plVar7 = (long *)PTR_DAT_09f1e538;
      if ((iVar2 == 1) || (*(char *)((long)plVar11 + 0x84) != '\0')) {
LAB_0771c80c:
        lVar3 = FUN_0771b240(plVar11);
        if (lVar3 != 0) {
          *(undefined1 *)(lVar3 + 0x3c) = *(undefined1 *)(unaff_x19 + 0x34);
          plVar11[0x1a] = 0;
          thunk_FUN_044bb4b4(plVar12,0);
          iVar2 = (**(code **)(*plVar11 + 0x378))(plVar11,*(undefined8 *)(*plVar11 + 0x380));
          if (iVar2 != 1) {
            uVar5 = Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__GetLargestSurfaceDebugger
                              (*(undefined4 *)(unaff_x19 + 0x30),plVar11,lVar3,
                               *(undefined8 *)(unaff_x19 + 0x38),*(undefined8 *)(unaff_x19 + 0x20),0
                               ,*(undefined8 *)(unaff_x19 + 0x40));
            *(undefined8 *)(unaff_x19 + 0x18) = uVar5;
            thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x18),uVar5);
            *(undefined4 *)(unaff_x19 + 0x10) = 2;
            return 1;
          }
          uVar5 = FUN_0771abd4(*(undefined4 *)(unaff_x19 + 0x30),plVar11,lVar3,
                               *(undefined8 *)(unaff_x19 + 0x38),*(undefined8 *)(unaff_x19 + 0x20),
                               *(undefined1 *)(unaff_x19 + 0x34),*(undefined8 *)(unaff_x19 + 0x40));
          *(undefined8 *)(unaff_x19 + 0x18) = uVar5;
          thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x18),uVar5);
          *(undefined4 *)(unaff_x19 + 0x10) = 1;
          return 1;
        }
        goto LAB_0771cd08;
      }
      lVar3 = plVar11[0x11];
      if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar4 = FUN_0952c404(lVar3,0,0);
      if ((uVar4 & 1) == 0) {
        if (plVar11[0x11] != 0) {
          plVar6 = (long *)FUN_094e2354(plVar11[0x11],0);
          lVar3 = plVar11[0x17];
          if (lVar3 != 0) {
            iVar2 = 0;
            do {
              if (*(int *)(lVar3 + 0x18) <= iVar2) goto LAB_0771c80c;
              uVar5 = FUN_05badb74(lVar3,iVar2,*(undefined8 *)PTR_DAT_09f1e8c0);
              lVar3 = FUN_0775e914(uVar5,0);
              if (lVar3 == 0) break;
              if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
                uVar4 = 0;
                uVar10 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
                do {
                  if (uVar10 <= uVar4) goto LAB_0771cd0c;
                  lVar14 = *(long *)(lVar3 + 0x20 + uVar4 * 8);
                  if (*(int *)(*plVar7 + 0xe4) == 0) {
                    thunk_FUN_044a54b4();
                  }
                  uVar10 = FUN_09531730(lVar14,0,0);
                  if ((uVar10 & 1) != 0) {
                    if (lVar14 == 0) goto LAB_0771cd08;
                    uVar5 = FUN_094e2354(lVar14,0);
                    if (*(int *)(*plVar7 + 0xe4) == 0) {
                      thunk_FUN_044a54b4(*plVar7);
                    }
                    uVar10 = FUN_09531730(uVar5,plVar6,0);
                    if ((uVar10 & 1) != 0) {
                      lVar14 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,5);
                      if (lVar14 == 0) goto LAB_0771cd08;
                      if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0771cd0c;
                      *(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)PTR_DAT_09f30ea0;
                      thunk_FUN_044bb4b4();
                      if (plVar11[0x17] == 0) goto LAB_0771cd08;
                      plVar7 = (long *)FUN_05badb74(plVar11[0x17],iVar2,
                                                    *(undefined8 *)PTR_DAT_09f1e8c0);
                      if (plVar7 == (long *)0x0) {
                        uVar5 = 0;
                      }
                      else {
                        if (plVar7 == (long *)0x0) goto LAB_0771cd08;
                        uVar5 = (**(code **)(*plVar7 + 0x168))
                                          (plVar7,*(undefined8 *)(*plVar7 + 0x170));
                      }
                      if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_0771cd0c;
                      *(undefined8 *)(lVar14 + 0x28) = uVar5;
                      thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x28));
                      if (*(uint *)(lVar14 + 0x18) < 3) goto LAB_0771cd0c;
                      *(undefined8 *)(lVar14 + 0x30) = *(undefined8 *)PTR_DAT_09f30e68;
                      thunk_FUN_044bb4b4();
                      if (plVar6 == (long *)0x0) {
                        uVar5 = 0;
                      }
                      else {
                        if (plVar6 == (long *)0x0) goto LAB_0771cd08;
                        uVar5 = (**(code **)(*plVar6 + 0x168))
                                          (plVar6,*(undefined8 *)(*plVar6 + 0x170));
                      }
                      if (*(uint *)(lVar14 + 0x18) < 4) goto LAB_0771cd0c;
                      *(undefined8 *)(lVar14 + 0x38) = uVar5;
                      thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x38));
                      if (*(uint *)(lVar14 + 0x18) < 5) goto LAB_0771cd0c;
                      *(undefined8 *)(lVar14 + 0x40) = *(undefined8 *)PTR_DAT_09f30e98;
                      thunk_FUN_044bb4b4();
                      uVar5 = FUN_078b57fc(lVar14,0);
                      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                        thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
                      }
                      FUN_094c33b0(uVar5,0);
                      plVar7 = (long *)PTR_DAT_09f1e538;
                    }
                  }
                  uVar10 = (ulong)*(uint *)(lVar3 + 0x18);
                  uVar4 = uVar4 + 1;
                } while ((long)uVar4 < (long)(int)*(uint *)(lVar3 + 0x18));
              }
              lVar3 = plVar11[0x17];
              iVar2 = iVar2 + 1;
            } while (lVar3 != 0);
          }
        }
        goto LAB_0771cd08;
      }
      puVar9 = (undefined8 *)PTR_DAT_09f30e48;
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        puVar9 = (undefined8 *)PTR_DAT_09f30e48;
      }
    }
    FUN_094c6b48(*puVar9,0);
  }
LAB_0771c954:
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    *(undefined1 *)(*(long *)(unaff_x19 + 0x20) + 0x11) = 1;
    return 0;
  }
LAB_0771cd08:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


