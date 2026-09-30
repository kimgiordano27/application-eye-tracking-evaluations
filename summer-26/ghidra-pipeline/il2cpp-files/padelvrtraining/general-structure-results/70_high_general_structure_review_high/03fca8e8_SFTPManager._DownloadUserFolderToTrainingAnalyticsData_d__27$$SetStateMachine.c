/*
FUNCTION_NAME: SFTPManager.<DownloadUserFolderToTrainingAnalyticsData>d__27$$SetStateMachine
ENTRY_POINT: 03fca8e8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
SFTPManager_<DownloadUserFolderToTrainingAnalyticsData>d__27__SetStateMachine
          (float param_1,float param_2,float param_3,undefined8 param_4)

{
  bool bVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined1 uVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined1 *puVar13;
  char *pcVar14;
  int *piVar15;
  undefined4 *puVar16;
  long lVar17;
  undefined4 *puVar18;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  float fVar19;
  undefined4 uVar20;
  ulong uVar21;
  undefined8 uVar22;
  double dVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  float unaff_s10;
  
code_r0x03fca8e8:
  uVar8 = (ulong)(uint)(param_2 * unaff_s10);
  FUN_08a447dc(param_1 * unaff_s10,uVar8,param_3 * unaff_s10,param_4);
  if (unaff_x21 != 0) {
    FUN_08a5d814(unaff_x21,0);
    FUN_03e52ae4();
    lVar6 = *unaff_x24;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar6 = *unaff_x24;
    }
    lVar12 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
    if (lVar12 == 0) goto LAB_03fc915c;
    if (*(char *)(lVar12 + 0x20) == '\0') {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_03db619c();
        lVar12 = *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x30);
        if (lVar12 == 0) goto LAB_03fc915c;
      }
      if (*(char *)(lVar12 + 0x20) == '\0') {
        if (*(long *)(unaff_x20 + 0x848) != 0) {
          lVar6 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x848),0);
          if ((*(long *)(unaff_x20 + 0x848) != 0) &&
             (lVar12 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x848),0), lVar12 != 0)) {
            fVar19 = (float)FUN_08a5de1c(lVar12,0);
            if ((*(long *)(unaff_x20 + 0x848) != 0) &&
               (lVar12 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x848),0), lVar12 != 0)) {
              FUN_08a5de1c(lVar12,0);
              if (((*(long *)(unaff_x20 + 0x848) != 0) &&
                  (lVar12 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x848),0), lVar12 != 0)) &&
                 (FUN_08a5de1c(lVar12,0), lVar6 != 0)) {
                uVar21 = (ulong)(uint)-fVar19;
                goto LAB_03fca9b4;
              }
            }
          }
        }
        goto LAB_03fc915c;
      }
    }
    else {
      if (*(long *)(unaff_x20 + 0x848) == 0) goto LAB_03fc915c;
      lVar6 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x848),0);
      if ((*(long *)(unaff_x20 + 0x848) == 0) ||
         (lVar12 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x848),0), lVar12 == 0)) goto LAB_03fc915c;
      uVar21 = FUN_08a5de1c(lVar12,0);
      if ((*(long *)(unaff_x20 + 0x848) == 0) ||
         (lVar12 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x848),0), lVar12 == 0)) goto LAB_03fc915c;
      FUN_08a5de1c(lVar12,0);
      if (((*(long *)(unaff_x20 + 0x848) == 0) ||
          (lVar12 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x848),0), lVar12 == 0)) ||
         (FUN_08a5de1c(lVar12,0), lVar6 == 0)) goto LAB_03fc915c;
LAB_03fca9b4:
      FUN_08a5debc(uVar21,uVar8,lVar6,0);
    }
    if (*(long *)(unaff_x20 + 0x858) != 0) {
      FUN_08a50fa8(*(long *)(unaff_x20 + 0x858),1,0);
      if (((*(long *)(unaff_x20 + 0xb98) != 0) &&
          (lVar6 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0xf0), lVar6 != 0)) &&
         (lVar6 = *(long *)(lVar6 + 0x10), lVar6 != 0)) {
        lVar12 = *(long *)(unaff_x20 + 0x860);
        uVar7 = FUN_08a550fc(lVar6,0);
        if (lVar12 != 0) {
          *(undefined8 *)(lVar12 + 0x100) = uVar7;
          thunk_FUN_03d1023c(lVar12 + 0x100);
          if (*(long *)(unaff_x20 + 0x860) != 0) {
            FUN_03f4ccb4(*(long *)(unaff_x20 + 0x860),0);
            FUN_08a52818();
            if (*(long *)(unaff_x20 + 0x868) != 0) {
              FUN_08a50fa8(*(long *)(unaff_x20 + 0x868),1,0);
              if (*(long *)(unaff_x20 + 0x868) != 0) {
                lVar6 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x868),0);
                if ((*(long *)(unaff_x20 + 0x868) != 0) &&
                   (lVar12 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x868),0), lVar12 != 0)) {
                  uVar7 = FUN_08a5d3f4(lVar12,0);
                  if ((*(long *)(unaff_x20 + 0x868) != 0) &&
                     (lVar12 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x868),0), lVar12 != 0)) {
                    FUN_08a5d3f4(lVar12,0);
                    if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
                        (*(long *)(*(long *)(unaff_x20 + 0xb98) + 0xf0) == 0)) || (lVar6 == 0))
                    goto LAB_03fc915c;
                    FUN_08a5d494(uVar7,lVar6,0);
                    if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
                        (lVar6 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0xf0), lVar6 == 0)) ||
                       (lVar12 = *(long *)(unaff_x20 + 0x870), lVar12 == 0)) goto LAB_03fc915c;
                    if (*(char *)(lVar6 + 0x48) == '\0') {
                      FUN_08a50fa8(lVar12,0,0);
                    }
                    else {
                      FUN_08a50fa8(lVar12,1,0);
                      if (*(long *)(unaff_x20 + 0x870) == 0) goto LAB_03fc915c;
                      lVar6 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x870),0);
                      if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
                          (lVar12 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0xf0), lVar12 == 0)) ||
                         (lVar6 == 0)) goto LAB_03fc915c;
                      FUN_08a5d494(*(undefined4 *)(lVar12 + 0x4c),*(undefined4 *)(lVar12 + 0x50),
                                   *(undefined4 *)(lVar12 + 0x54),lVar6,0);
                      if (*(long *)(unaff_x20 + 0x870) == 0) goto LAB_03fc915c;
                      lVar6 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x870),0);
                      if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
                          (lVar12 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0xf0), lVar12 == 0)) ||
                         (FUN_08a447dc(*(float *)(lVar12 + 0x58) * unaff_s10,
                                       *(float *)(lVar12 + 0x5c) * unaff_s10,
                                       *(float *)(lVar12 + 0x60) * unaff_s10,0), lVar6 == 0))
                      goto LAB_03fc915c;
                      FUN_08a5d814(lVar6,0);
                    }
                    if (*(long *)(unaff_x20 + 0x878) != 0) {
                      uVar8 = FUN_08a51028(*(long *)(unaff_x20 + 0x878),0);
                      if ((uVar8 & 1) != 0) {
                        FUN_03e45e58();
                      }
LAB_03fcacc0:
                      if (*(long *)(unaff_x20 + 0xb98) == 0) goto LAB_03fc915c;
                      if (*(char *)(*(long *)(unaff_x20 + 0xb98) + 0x58) == '\0') {
                        lVar6 = *unaff_x24;
                        if (*(int *)(lVar6 + 0xe0) == 0) {
                          thunk_FUN_03db619c();
                          lVar6 = *unaff_x24;
                        }
                        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x98);
                        if (lVar6 == 0) goto LAB_03fc915c;
LAB_03fcad64:
                        *(undefined1 *)(lVar6 + 0xb3) = 0;
                        *(undefined2 *)(unaff_x20 + 0xba9) = 0;
                      }
                      else {
                        *(undefined1 *)(unaff_x20 + 0x268) = 0;
                        lVar6 = *unaff_x24;
                        if (*(int *)(lVar6 + 0xe0) == 0) {
                          thunk_FUN_03db619c();
                          lVar6 = *unaff_x24;
                        }
                        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x78);
                        if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x20), lVar6 == 0))
                        goto LAB_03fc915c;
                        FUN_08a50fa8(lVar6,1,0);
                        lVar6 = *(long *)(unaff_x20 + 0xb98);
                        if ((lVar6 == 0) || (lVar12 = *(long *)(lVar6 + 0x60), lVar12 == 0))
                        goto LAB_03fc915c;
                        if (*(char *)(lVar12 + 0x34) == '\0') {
                          lVar6 = *(long *)(lVar6 + 0x50);
                          if ((lVar6 == 0) || (*(long *)(lVar12 + 0x48) == 0)) goto LAB_03fc915c;
                          puVar18 = (undefined4 *)(lVar6 + 0x44);
                          puVar11 = (undefined4 *)(lVar6 + 0x3c);
                          puVar16 = (undefined4 *)(lVar6 + 0x40);
                        }
                        else {
                          puVar11 = (undefined4 *)(lVar12 + 0x1c);
                          puVar16 = (undefined4 *)(lVar12 + 0x20);
                          puVar18 = (undefined4 *)(lVar12 + 0x24);
                        }
                        FUN_03e46bd8(*(undefined4 *)(lVar12 + 0x10),*(undefined4 *)(lVar12 + 0x14),
                                     *(undefined4 *)(lVar12 + 0x18),*puVar11,*puVar16,*puVar18,
                                     *(undefined4 *)(lVar12 + 0x28));
                        if ((*(char *)(unaff_x20 + 0x593) != '\0') ||
                           (*(char *)(unaff_x20 + 0x788) != '\0')) {
                          *(undefined8 *)(unaff_x19 + 0x18) =
                               *(undefined8 *)(*(long *)(*(long *)PTR_DAT_091a31d8 + 0xb8) + 0xb0);
                          thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18));
                          uVar20 = 0xd;
                          goto LAB_03fcbe38;
                        }
                        if (*(long *)(unaff_x20 + 0xa8) == 0) {
                          uVar7 = FUN_03e44538();
                          *(undefined8 *)(unaff_x20 + 3000) = uVar7;
                          thunk_FUN_03d1023c(unaff_x20 + 3000);
                        }
                        if (*(char *)(unaff_x20 + 0x240) == '\0') {
                          FUN_08a52818();
                        }
                        if ((*(long *)(unaff_x20 + 0xb98) == 0) ||
                           (lVar6 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x60), lVar6 == 0))
                        goto LAB_03fc915c;
                        if (*(char *)(lVar6 + 0x50) == '\0') {
                          lVar6 = *unaff_x24;
                          if (*(int *)(lVar6 + 0xe0) == 0) {
                            thunk_FUN_03db619c();
                            lVar6 = *unaff_x24;
                          }
                          lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x98);
                          if (lVar6 != 0) goto LAB_03fcad64;
                          goto LAB_03fc915c;
                        }
                        lVar6 = *(long *)(lVar6 + 0x58);
                        if (lVar6 == 0) goto LAB_03fc915c;
                        if (*(char *)(lVar6 + 0x35) != '\0') {
                          *(undefined4 *)(unaff_x20 + 0x330) = *(undefined4 *)(unaff_x20 + 0x23c);
                        }
                        lVar12 = *unaff_x24;
                        cVar2 = *(char *)(lVar6 + 0x11);
                        if (*(int *)(lVar12 + 0xe0) == 0) {
                          thunk_FUN_03db619c();
                          lVar12 = *unaff_x24;
                        }
                        lVar6 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x98);
                        if (lVar6 == 0) goto LAB_03fc915c;
                        bVar1 = cVar2 == '\0';
                        if (bVar1) {
                          *(undefined1 *)(lVar6 + 0xb3) = 0;
                          *(undefined1 *)(unaff_x20 + 0xba9) = 0;
                        }
                        else {
                          *(undefined1 *)(lVar6 + 0xb3) = 1;
                        }
                        *(bool *)(unaff_x20 + 0xbaa) = !bVar1;
                        if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
                            (lVar6 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x60), lVar6 == 0)) ||
                           (lVar6 = *(long *)(lVar6 + 0x58), lVar6 == 0)) goto LAB_03fc915c;
                        if (*(char *)(lVar6 + 0x10) == '\0') {
                          if (*(int *)(lVar12 + 0xe0) == 0) {
                            thunk_FUN_03db619c();
                            lVar12 = *unaff_x24;
                          }
                          lVar6 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x98);
                          if (((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x40), lVar6 == 0)) ||
                             (lVar6 = FUN_04f82e34(lVar6,*unaff_x28), lVar6 == 0))
                          goto LAB_03fc915c;
                          *(undefined1 *)(lVar6 + 0x1a0) = 0;
                        }
                        else {
                          if (*(long *)(unaff_x20 + 0x228) == 0) goto LAB_03fc915c;
                          FUN_08a50fa8(*(long *)(unaff_x20 + 0x228),1,0);
                          if (*(long *)(unaff_x20 + 0x228) == 0) goto LAB_03fc915c;
                          lVar6 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x228),0);
                          if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
                              (lVar12 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x60), lVar12 == 0)
                              ) || ((lVar12 = *(long *)(lVar12 + 0x58), lVar12 == 0 || (lVar6 == 0))
                                   )) goto LAB_03fc915c;
                          FUN_08a5d494(*(undefined4 *)(lVar12 + 0x14),*(undefined4 *)(lVar12 + 0x18)
                                       ,*(undefined4 *)(lVar12 + 0x1c),lVar6,0);
                          if (*(long *)(unaff_x20 + 0x228) == 0) goto LAB_03fc915c;
                          lVar6 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x228),0);
                          if ((((*(long *)(unaff_x20 + 0xb98) == 0) ||
                               (lVar12 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x60), lVar12 == 0
                               )) || (lVar12 = *(long *)(lVar12 + 0x58), lVar12 == 0)) ||
                             (lVar6 == 0)) goto LAB_03fc915c;
                          FUN_08a5debc(*(undefined4 *)(lVar12 + 0x20),*(undefined4 *)(lVar12 + 0x24)
                                       ,*(undefined4 *)(lVar12 + 0x28),lVar6,0);
                          *(undefined1 *)(unaff_x20 + 0xbab) = 1;
                          lVar6 = *unaff_x24;
                          if (*(int *)(lVar6 + 0xe0) == 0) {
                            thunk_FUN_03db619c();
                            lVar6 = *unaff_x24;
                          }
                          lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x98);
                          if (((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x40), lVar6 == 0)) ||
                             (lVar6 = FUN_04f82e34(lVar6,*unaff_x28), lVar6 == 0))
                          goto LAB_03fc915c;
                          *(undefined1 *)(lVar6 + 0x1a0) = 1;
                        }
                      }
                      if (*(long *)(unaff_x20 + 0xb98) == 0) goto LAB_03fc915c;
                      if (*(char *)(*(long *)(unaff_x20 + 0xb98) + 0x89) != '\0') {
                        *(undefined8 *)(unaff_x19 + 0x18) =
                             *(undefined8 *)(*(long *)(*(long *)PTR_DAT_091a31d8 + 0xb8) + 0xb0);
                        thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18));
                        uVar20 = 0xe;
                        goto LAB_03fcbe38;
                      }
                      if (*(long *)(unaff_x20 + 0x308) == 0) goto LAB_03fc915c;
                      FUN_08a50fa8(*(long *)(unaff_x20 + 0x308),0,0);
                      if (*(long *)(unaff_x20 + 0x310) == 0) goto LAB_03fc915c;
                      FUN_08a50fa8(*(long *)(unaff_x20 + 0x310),0,0);
                      if (*(long *)(unaff_x20 + 0x318) == 0) goto LAB_03fc915c;
                      FUN_08a50fa8(*(long *)(unaff_x20 + 0x318),0,0);
                      if (*(long *)(unaff_x20 + 800) == 0) goto LAB_03fc915c;
                      FUN_08a50fa8(*(long *)(unaff_x20 + 800),0,0);
                      if (*(long *)(unaff_x20 + 0x300) == 0) goto LAB_03fc915c;
                      FUN_08a50fa8(*(long *)(unaff_x20 + 0x300),0,0);
                      if (*(long *)(unaff_x20 + 0x328) == 0) goto LAB_03fc915c;
                      FUN_08a50fa8(*(long *)(unaff_x20 + 0x328),0,0);
                      if (*(long *)(unaff_x20 + 0xb98) == 0) goto LAB_03fc915c;
                      if (*(char *)(*(long *)(unaff_x20 + 0xb98) + 0x69) == '\0') {
                        FUN_03e4c9e0();
                        puVar3 = PTR_DAT_091a13f8;
                        plVar9 = *(long **)(unaff_x20 + 0x5a0);
                        if (plVar9 == (long *)0x0) goto LAB_03fc915c;
                        (**(code **)(*plVar9 + 0x558))
                                  (plVar9,**(undefined8 **)(*(long *)PTR_DAT_091a13f8 + 0xb8),
                                   *(undefined8 *)(*plVar9 + 0x560));
                        if (*(long *)(unaff_x20 + 0x598) == 0) goto LAB_03fc915c;
                        FUN_08a50fa8(*(long *)(unaff_x20 + 0x598),0,0);
                        plVar9 = *(long **)(unaff_x20 + 0x5b0);
                        if (plVar9 == (long *)0x0) goto LAB_03fc915c;
                        (**(code **)(*plVar9 + 0x558))
                                  (plVar9,**(undefined8 **)(*(long *)puVar3 + 0xb8),
                                   *(undefined8 *)(*plVar9 + 0x560));
                        if (*(long *)(unaff_x20 + 0x5a8) == 0) goto LAB_03fc915c;
                        FUN_08a50fa8(*(long *)(unaff_x20 + 0x5a8),0,0);
                        lVar6 = *(long *)(unaff_x20 + 0x2f0);
                        if (lVar6 == 0) goto LAB_03fc915c;
LAB_03fcb0cc:
                        uVar7 = 0;
                      }
                      else {
                        FUN_03e4729c();
                        puVar3 = PTR_DAT_091a13f8;
                        if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
                            (lVar6 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x60), lVar6 == 0)) ||
                           (lVar6 = *(long *)(lVar6 + 0x58), lVar6 == 0)) goto LAB_03fc915c;
                        if (*(int *)(lVar6 + 0x30) != 0) {
                          plVar9 = *(long **)(unaff_x20 + 0x5a0);
                          if (plVar9 != (long *)0x0) {
                            (**(code **)(*plVar9 + 0x558))
                                      (plVar9,**(undefined8 **)(*(long *)PTR_DAT_091a13f8 + 0xb8),
                                       *(undefined8 *)(*plVar9 + 0x560));
                            if (*(long *)(unaff_x20 + 0x598) != 0) {
                              FUN_08a50fa8(*(long *)(unaff_x20 + 0x598),0,0);
                              plVar9 = *(long **)(unaff_x20 + 0x5b0);
                              if (plVar9 != (long *)0x0) {
                                (**(code **)(*plVar9 + 0x558))
                                          (plVar9,**(undefined8 **)(*(long *)puVar3 + 0xb8),
                                           *(undefined8 *)(*plVar9 + 0x560));
                                if (*(long *)(unaff_x20 + 0x5a8) != 0) {
                                  FUN_08a50fa8(*(long *)(unaff_x20 + 0x5a8),0,0);
                                  lVar6 = *(long *)(unaff_x20 + 0x2f0);
                                  if (lVar6 != 0) goto LAB_03fcb0cc;
                                }
                              }
                            }
                          }
                          goto LAB_03fc915c;
                        }
                        if (*(int *)(*(long *)PTR_DAT_091a1120 + 0xe0) == 0) {
                          thunk_FUN_03db619c();
                        }
                        FUN_08a0ff80(*(undefined8 *)PTR_DAT_091a7400,0);
                        if (*(long *)(unaff_x20 + 0x598) == 0) goto LAB_03fc915c;
                        FUN_08a50fa8(*(long *)(unaff_x20 + 0x598),1,0);
                        if (*(long *)(unaff_x20 + 0x5a8) == 0) goto LAB_03fc915c;
                        FUN_08a50fa8(*(long *)(unaff_x20 + 0x5a8),1,0);
                        lVar6 = *(long *)(unaff_x20 + 0x2f0);
                        if (lVar6 == 0) goto LAB_03fc915c;
                        uVar7 = 1;
                      }
                      FUN_08a50fa8(lVar6,uVar7,0);
                      uVar7 = *(undefined8 *)(unaff_x20 + 0x790);
                      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                        thunk_FUN_03db619c();
                      }
                      puVar5 = (undefined8 *)(unaff_x20 + 0x790);
                      uVar8 = FUN_08a508b0(uVar7,0,0);
                      if ((uVar8 & 1) != 0) {
                        uVar7 = *puVar5;
                        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                          thunk_FUN_03db619c();
                        }
                        FUN_08a55c38(uVar7,0);
                      }
                      if (*(long *)(unaff_x20 + 0xb98) == 0) goto LAB_03fc915c;
                      cVar2 = *(char *)(*(long *)(unaff_x20 + 0xb98) + 0xd8);
                      uVar7 = *puVar5;
                      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                        thunk_FUN_03db619c();
                      }
                      uVar8 = FUN_08a508b0(uVar7,0,0);
                      if (cVar2 == '\0') {
                        if ((uVar8 & 1) != 0) {
                          uVar7 = *puVar5;
                          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                            thunk_FUN_03db619c();
                          }
                          FUN_08a55c38(uVar7,0);
                        }
                      }
                      else {
                        if ((uVar8 & 1) != 0) {
                          uVar7 = *puVar5;
                          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                            thunk_FUN_03db619c();
                          }
                          FUN_08a55c38(uVar7,0);
                        }
                        if ((*(long *)(unaff_x20 + 0xb98) == 0) ||
                           (lVar6 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0xe0), lVar6 == 0))
                        goto LAB_03fc915c;
                        uVar7 = *(undefined8 *)(lVar6 + 0x10);
                        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                          thunk_FUN_03db619c();
                        }
                        uVar8 = FUN_08a508b0(uVar7,0,0);
                        if ((uVar8 & 1) != 0) {
                          if ((*(long *)(unaff_x20 + 0xb98) == 0) ||
                             (lVar6 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0xe0), lVar6 == 0))
                          goto LAB_03fc915c;
                          uVar7 = *(undefined8 *)(lVar6 + 0x10);
                          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                            thunk_FUN_03db619c();
                          }
                          uVar7 = FUN_050a0f30(uVar7,*(undefined8 *)PTR_DAT_091a11c8);
                          *(undefined8 *)(unaff_x20 + 0x790) = uVar7;
                          thunk_FUN_03d1023c(puVar5,uVar7);
                          if (*(long *)(unaff_x20 + 0x790) == 0) goto LAB_03fc915c;
                          fVar24 = *(float *)(unaff_x20 + 0x77c);
                          fVar26 = *(float *)(unaff_x20 + 0x780);
                          fVar19 = *(float *)(unaff_x20 + 0x784);
                          lVar6 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x790),0);
                          if (fVar19 * fVar19 + fVar24 * fVar24 + fVar26 * fVar26 < DAT_01913f10) {
                            if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
                                (lVar12 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0xe0),
                                lVar12 == 0)) || (lVar6 == 0)) goto LAB_03fc915c;
                            uVar25 = *(undefined4 *)(lVar12 + 0x1c);
                            uVar27 = *(undefined4 *)(lVar12 + 0x20);
                            uVar20 = *(undefined4 *)(lVar12 + 0x18);
                          }
                          else {
                            if (lVar6 == 0) goto LAB_03fc915c;
                            uVar27 = *(undefined4 *)(unaff_x20 + 0x784);
                            uVar25 = *(undefined4 *)(unaff_x20 + 0x780);
                            uVar20 = *(undefined4 *)(unaff_x20 + 0x77c);
                          }
                          FUN_08a5d494(uVar20,uVar25,uVar27,lVar6,0);
                        }
                      }
                      if ((*(long *)(unaff_x20 + 0xb98) == 0) ||
                         (lVar6 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x60), lVar6 == 0))
                      goto LAB_03fc915c;
                      lVar12 = *unaff_x24;
                      uVar10 = *(undefined1 *)(lVar6 + 0x50);
                      if (*(int *)(lVar12 + 0xe0) == 0) {
                        thunk_FUN_03db619c();
                        lVar12 = *unaff_x24;
                      }
                      lVar6 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x98);
                      if (((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x40), lVar6 == 0)) ||
                         (lVar6 = FUN_04f82e34(lVar6,*unaff_x28), lVar6 == 0)) goto LAB_03fc915c;
                      *(undefined1 *)(lVar6 + 0x1a0) = uVar10;
                      lVar6 = *(long *)(unaff_x20 + 0xb98);
                      if (lVar6 == 0) goto LAB_03fc915c;
                      switch(*(undefined4 *)(lVar6 + 0x18)) {
                      case 0:
                        *(undefined4 *)(unaff_x19 + 0x34) = 0;
                        if (*(long *)(lVar6 + 0x40) == 0) goto LAB_03fc915c;
                        fVar19 = 0.0;
                        if (*(char *)(*(long *)(lVar6 + 0x40) + 0x88) == '\0') {
                          lVar6 = *unaff_x24;
                          if (*(int *)(lVar6 + 0xe0) == 0) {
                            thunk_FUN_03db619c();
                            lVar6 = *unaff_x24;
                          }
                          lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
                          if (lVar6 == 0) goto LAB_03fc915c;
                          uVar7 = *(undefined8 *)(lVar6 + 0x200);
                          uVar8 = thunk_FUN_06fd18b4(uVar7,*(undefined8 *)PTR_DAT_091a1c90,0);
                          if ((uVar8 & 1) == 0) {
                            uVar8 = thunk_FUN_06fd18b4(uVar7,*(undefined8 *)PTR_DAT_091a1c80,0);
                            if ((uVar8 & 1) == 0) {
                              uVar8 = thunk_FUN_06fd18b4(uVar7,*(undefined8 *)PTR_DAT_091a1c88,0);
                              if ((*(long *)(unaff_x20 + 0xb98) == 0) ||
                                 (lVar6 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x40), lVar6 == 0
                                 )) goto LAB_03fc915c;
                              if ((uVar8 & 1) == 0) {
                                lVar6 = *(long *)(lVar6 + 0x18);
                                goto joined_r0x03fcbcb0;
                              }
                            }
                            else if ((*(long *)(unaff_x20 + 0xb98) == 0) ||
                                    (lVar6 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x40),
                                    lVar6 == 0)) goto LAB_03fc915c;
                            lVar6 = *(long *)(lVar6 + 0x10);
                          }
                          else {
                            if ((*(long *)(unaff_x20 + 0xb98) == 0) ||
                               (lVar6 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x40), lVar6 == 0))
                            goto LAB_03fc915c;
                            lVar6 = *(long *)(lVar6 + 0x18);
                          }
joined_r0x03fcbcb0:
                          if (lVar6 == 0) goto LAB_03fc915c;
                          dVar23 = (double)FUN_08ca86f8(lVar6,0);
                          fVar19 = (float)dVar23 + 0.5;
                          *(float *)(unaff_x19 + 0x34) = fVar19;
                        }
                        if ((*(long *)(unaff_x20 + 0xb98) == 0) ||
                           (lVar6 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x40), lVar6 == 0))
                        goto LAB_03fc915c;
                        if (*(char *)(lVar6 + 0x88) != '\0') {
                          lVar6 = *(long *)(unaff_x20 + 0x960);
                          if (lVar6 == 0) goto LAB_03fc915c;
                          if (*(int *)(lVar6 + 0x18) == 2) {
                            uVar7 = 1;
                          }
                          else {
                            if (*(int *)(lVar6 + 0x18) != 1) goto LAB_03fcbd38;
                            uVar7 = 0;
                          }
                          lVar6 = FUN_05a39464(lVar6,uVar7,*(undefined8 *)PTR_DAT_091a73f0);
                          if (lVar6 == 0) goto LAB_03fc915c;
                          dVar23 = (double)FUN_08ca86f8(lVar6,0);
                          fVar19 = (float)dVar23;
                          *(float *)(unaff_x19 + 0x34) = fVar19;
                        }
LAB_03fcbd38:
                        if ((*(long *)(unaff_x20 + 0xb98) == 0) ||
                           (lVar6 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x50), lVar6 == 0))
                        goto LAB_03fc915c;
                        if (*(int *)(lVar6 + 0x1c) == 1) {
                          uVar7 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091a1098);
                          FUN_08a57768(fVar19,uVar7,0);
                          *(undefined8 *)(unaff_x19 + 0x18) = uVar7;
                          thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18),uVar7);
                          uVar20 = 0x15;
                        }
                        else {
                          *(undefined4 *)(unaff_x19 + 0x38) = 0;
                          if ((*(long *)(unaff_x20 + 0xb98) == 0) ||
                             (lVar6 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x50), lVar6 == 0))
                          goto LAB_03fc915c;
                          if (*(int *)(lVar6 + 0x1c) < 1) {
                            if (0.0 < fVar19) {
                              uVar7 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091a1098);
                              FUN_08a57768(fVar19,uVar7,0);
                              *(undefined8 *)(unaff_x19 + 0x18) = uVar7;
                              thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18),uVar7);
                              uVar20 = 0x14;
                            }
                            else {
                              lVar6 = *unaff_x23;
                              if (*(int *)(lVar6 + 0xe0) == 0) {
                                thunk_FUN_03db619c();
                                lVar6 = *unaff_x23;
                              }
                              if (*(char *)(*(long *)(lVar6 + 0xb8) + 2) == '\0') {
                                if (unaff_x20 != 0) {
                                  uVar20 = *(undefined4 *)(unaff_x20 + 0x7a4);
                                  uVar7 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091a1098);
                                  FUN_08a57768(uVar20,uVar7,0);
                                  *(undefined8 *)(unaff_x19 + 0x18) = uVar7;
                                  thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18),uVar7);
                                  uVar20 = 0x17;
                                  break;
                                }
                                goto LAB_03fc915c;
                              }
                              *(undefined8 *)(unaff_x19 + 0x18) =
                                   *(undefined8 *)
                                    (*(long *)(*(long *)PTR_DAT_091a31d8 + 0xb8) + 0x50);
                              thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18));
                              uVar20 = 0x16;
                            }
                          }
                          else {
                            if (*(long *)(lVar6 + 0x10) == 0) goto LAB_03fc915c;
                            uVar22 = FUN_089f5af8(*(long *)(lVar6 + 0x10),0);
                            uVar7 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091a1098);
                            FUN_08a57768(uVar22,uVar7,0);
                            *(undefined8 *)(unaff_x19 + 0x18) = uVar7;
                            thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18),uVar7);
                            uVar20 = 0x13;
                          }
                        }
                        break;
                      case 1:
                        if ((*(long *)(lVar6 + 0x50) == 0) ||
                           (lVar6 = *(long *)(*(long *)(lVar6 + 0x50) + 0x10), lVar6 == 0))
                        goto LAB_03fc915c;
                        fVar19 = (float)FUN_089f5af8(lVar6,0);
                        if ((*(long *)(unaff_x20 + 0xb98) == 0) ||
                           (lVar6 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x50), lVar6 == 0))
                        goto LAB_03fc915c;
                        fVar19 = (fVar19 + 0.75) * (float)*(int *)(lVar6 + 0x1c);
                        if (*(char *)(lVar6 + 0x50) != '\0') {
                          fVar19 = fVar19 + *(float *)(lVar6 + 0x54);
                        }
                        if (*(char *)(lVar6 + 0x58) != '\0') {
                          fVar19 = fVar19 + *(float *)(lVar6 + 0x5c);
                        }
                        uVar7 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091a1098);
                        FUN_08a57768(fVar19,uVar7,0);
                        *(undefined8 *)(unaff_x19 + 0x18) = uVar7;
                        thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18),uVar7);
                        uVar20 = 0x18;
                        break;
                      case 2:
                        lVar6 = *(long *)(unaff_x20 + 0xb98);
                        if (*(char *)(unaff_x20 + 0xb89) == '\0') {
                          if (((lVar6 == 0) || (lVar12 = *(long *)(lVar6 + 0x60), lVar12 == 0)) ||
                             (lVar17 = *(long *)(lVar12 + 0x58), lVar17 == 0)) goto LAB_03fc915c;
                          if (*(char *)(lVar17 + 0x2c) != '\0') goto LAB_03fcb838;
                        }
                        else {
                          if (lVar6 == 0) goto LAB_03fc915c;
LAB_03fcb838:
                          lVar12 = *(long *)(lVar6 + 0x60);
                          if ((lVar12 == 0) || (lVar17 = *(long *)(lVar12 + 0x58), lVar17 == 0))
                          goto LAB_03fc915c;
                          if ((*(char *)(lVar17 + 0x2c) == '\0') ||
                             (*(char *)(unaff_x20 + 0x53) != '\0' ||
                              *(char *)(unaff_x20 + 0xb89) != '\0')) {
                            *(undefined8 *)(unaff_x19 + 0x18) =
                                 *(undefined8 *)(*(long *)(*(long *)PTR_DAT_091a31d8 + 0xb8) + 0xb0)
                            ;
                            thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18));
                            uVar20 = 0x1d;
                            break;
                          }
                        }
                        if (*(char *)(lVar17 + 0x11) == '\0') {
                          uVar20 = *(undefined4 *)(lVar12 + 0x30);
                          uVar7 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091a1098);
                          FUN_08a57768(uVar20,uVar7,0);
                          *(undefined8 *)(unaff_x19 + 0x18) = uVar7;
                          thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18),uVar7);
                          uVar20 = 0x1b;
                        }
                        else {
                          *(undefined8 *)(unaff_x19 + 0x18) =
                               *(undefined8 *)(*(long *)(*(long *)PTR_DAT_091a31d8 + 0xb8) + 0x50);
                          thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18));
                          uVar20 = 0x1c;
                        }
                        break;
                      case 3:
                        uVar20 = *(undefined4 *)(lVar6 + 0x20);
                        uVar7 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091a1098);
                        FUN_08a57768(uVar20,uVar7,0);
                        *(undefined8 *)(unaff_x19 + 0x18) = uVar7;
                        thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18),uVar7);
                        uVar20 = 0x24;
                        break;
                      default:
                        do {
                          iVar4 = *(int *)(unaff_x19 + 0x30) + 1;
                          *(int *)(unaff_x19 + 0x30) = iVar4;
                          while( true ) {
                            if ((unaff_x20 == 0) ||
                               (lVar6 = *(long *)(unaff_x20 + 0xb98), lVar6 == 0))
                            goto LAB_03fc915c;
                            if (iVar4 < *(int *)(lVar6 + 0x1c)) break;
                            if (*(char *)(lVar6 + 0x24) != '\0') {
                              FUN_03e448cc();
                              lVar6 = *unaff_x23;
                              if (*(int *)(lVar6 + 0xe0) == 0) {
                                thunk_FUN_03db619c();
                                lVar6 = *unaff_x23;
                              }
                              *(undefined1 *)(*(long *)(lVar6 + 0xb8) + 3) = 1;
                              if (*(char *)(unaff_x20 + 0xc20) != '\0') {
                                FUN_03e452c4();
                                if ((*(long *)(unaff_x20 + 0x2c8) == 0) ||
                                   (lVar6 = FUN_04f82e34(*(long *)(unaff_x20 + 0x2c8),*unaff_x26),
                                   lVar6 == 0)) goto LAB_03fc915c;
                                FUN_04022424(lVar6,0);
                                lVar6 = *unaff_x23;
                              }
                              if (*(int *)(lVar6 + 0xe0) == 0) {
                                thunk_FUN_03db619c();
                                lVar6 = *unaff_x23;
                              }
                              if ((*(char *)(*(long *)(lVar6 + 0xb8) + 1) == '\0') &&
                                 (*(undefined1 *)(unaff_x20 + 0x2d0) = 0,
                                 *(char *)(unaff_x20 + 0x2d0) == '\0')) {
                                *(undefined8 *)(unaff_x19 + 0x18) =
                                     *(undefined8 *)
                                      (*(long *)(*(long *)PTR_DAT_091a31d8 + 0xb8) + 0xb0);
                                thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18));
                                uVar20 = 0x25;
                                goto LAB_03fcbe38;
                              }
                              if ((*(long *)(unaff_x20 + 0x2c8) == 0) ||
                                 (lVar6 = FUN_04f82e34(*(long *)(unaff_x20 + 0x2c8),*unaff_x26),
                                 lVar6 == 0)) goto LAB_03fc915c;
                              FUN_04021da4(lVar6,0);
                              if (*(long *)(unaff_x20 + 0x270) == 0) goto LAB_03fc915c;
                              FUN_08a50fa8(*(long *)(unaff_x20 + 0x270),0,0);
                              lVar6 = *unaff_x23;
                              if (*(int *)(lVar6 + 0xe0) == 0) {
                                thunk_FUN_03db619c();
                                lVar6 = *unaff_x23;
                              }
                              puVar13 = *(undefined1 **)(lVar6 + 0xb8);
                              *(undefined2 *)(puVar13 + 2) = 0;
                              *puVar13 = 0;
                            }
                            lVar6 = *unaff_x23;
                            if (*(int *)(lVar6 + 0xe0) == 0) {
                              thunk_FUN_03db619c();
                              lVar6 = *unaff_x23;
                            }
                            pcVar14 = *(char **)(lVar6 + 0xb8);
                            if (pcVar14[1] == '\0') {
LAB_03fcb7f4:
                              *(undefined8 *)(unaff_x19 + 0x18) =
                                   *(undefined8 *)
                                    (*(long *)(*(long *)PTR_DAT_091a31d8 + 0xb8) + 0xb0);
                              thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18));
                              uVar20 = 0x26;
                              goto LAB_03fcbe38;
                            }
                            if (*(int *)(lVar6 + 0xe0) == 0) {
                              thunk_FUN_03db619c();
                              lVar6 = *unaff_x23;
                              pcVar14 = *(char **)(lVar6 + 0xb8);
                            }
                            if (*pcVar14 != '\0') goto LAB_03fcb7f4;
                            if (*(int *)(lVar6 + 0xe0) == 0) {
                              thunk_FUN_03db619c();
                              pcVar14 = *(char **)(*unaff_x23 + 0xb8);
                            }
                            *pcVar14 = '\0';
                            if ((unaff_x20 == 0) || (*(long *)(unaff_x20 + 0xb98) == 0))
                            goto LAB_03fc915c;
                            if (*(char *)(*(long *)(unaff_x20 + 0xb98) + 0x8a) != '\0') {
                              *(undefined8 *)(unaff_x19 + 0x18) =
                                   *(undefined8 *)
                                    (*(long *)(*(long *)PTR_DAT_091a31d8 + 0xb8) + 0x98);
                              thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18));
                              uVar20 = 0x27;
                              goto LAB_03fcbe38;
                            }
                            *(int *)(unaff_x20 + 0x23c) = *(int *)(unaff_x20 + 0x23c) + 1;
                            *(undefined4 *)(unaff_x20 + 0x7a4) = 0;
                            if ((*(long *)(unaff_x19 + 0x28) == 0) ||
                               (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x18), lVar6 == 0))
                            goto LAB_03fc915c;
                            if (*(int *)(lVar6 + 0x18) <= *(int *)(unaff_x20 + 0x23c)) {
                              if (*(long *)(unaff_x20 + 0xb98) == 0) goto LAB_03fc915c;
                              if (*(char *)(*(long *)(unaff_x20 + 0xb98) + 0x3d) == '\0') {
                                fVar19 = 10.0;
                              }
                              else {
                                lVar6 = *unaff_x24;
                                if (*(int *)(lVar6 + 0xe0) == 0) {
                                  thunk_FUN_03db619c();
                                  lVar6 = *unaff_x24;
                                }
                                lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
                                if (lVar6 == 0) goto LAB_03fc915c;
                                uVar8 = thunk_FUN_06fd18b4(*(undefined8 *)(lVar6 + 0x200),
                                                           *(undefined8 *)PTR_DAT_091a1c80,0);
                                if ((uVar8 & 1) == 0) {
                                  lVar6 = *unaff_x24;
                                  if (*(int *)(lVar6 + 0xe0) == 0) {
                                    thunk_FUN_03db619c();
                                    lVar6 = *unaff_x24;
                                  }
                                  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
                                  if (lVar6 == 0) goto LAB_03fc915c;
                                  uVar8 = thunk_FUN_06fd18b4(*(undefined8 *)(lVar6 + 0x200),
                                                             *(undefined8 *)PTR_DAT_091a1c88,0);
                                  if ((uVar8 & 1) != 0) goto LAB_03fcb6e8;
                                  if ((*(long *)(unaff_x20 + 0xb98) == 0) ||
                                     (lVar6 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x40),
                                     lVar6 == 0)) goto LAB_03fc915c;
                                  lVar6 = *(long *)(lVar6 + 0x18);
                                }
                                else {
LAB_03fcb6e8:
                                  if ((*(long *)(unaff_x20 + 0xb98) == 0) ||
                                     (lVar6 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x40),
                                     lVar6 == 0)) goto LAB_03fc915c;
                                  lVar6 = *(long *)(lVar6 + 0x10);
                                }
                                if (lVar6 == 0) goto LAB_03fc915c;
                                dVar23 = (double)FUN_08ca86f8(lVar6,0);
                                fVar19 = (float)dVar23 + 10.0;
                              }
                              FUN_03e42b50(fVar19);
                              FUN_08a52818();
                              lVar6 = *unaff_x24;
                              if (*(int *)(lVar6 + 0xe0) == 0) {
                                thunk_FUN_03db619c();
                                lVar6 = *unaff_x24;
                              }
                              lVar12 = *(long *)(lVar6 + 0xb8);
                              if (*(long *)(lVar12 + 0x98) == 0) goto LAB_03fc915c;
                              if (*(char *)(*(long *)(lVar12 + 0x98) + 0x76) != '\0') {
                                if (*(int *)(lVar6 + 0xe0) == 0) {
                                  thunk_FUN_03db619c();
                                  lVar12 = *(long *)(*unaff_x24 + 0xb8);
                                }
                                if ((*(long *)(lVar12 + 0xa0) == 0) ||
                                   (lVar6 = *(long *)(*(long *)(lVar12 + 0xa0) + 0x40), lVar6 == 0))
                                goto LAB_03fc915c;
                                FUN_08a50fa8(lVar6,1,0);
                                lVar6 = *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x2a0);
                                if (lVar6 == 0) goto LAB_03fc915c;
                                FUN_03fb6678(lVar6,0);
                              }
                              return 0;
                            }
                            uVar7 = FUN_05a39464(lVar6,*(int *)(unaff_x20 + 0x23c),*unaff_x29);
                            *(undefined8 *)(unaff_x20 + 0xb98) = uVar7;
                            thunk_FUN_03d1023c(unaff_x20 + 0xb98);
                            FUN_03e52fd0();
                            if (*(char *)(unaff_x20 + 0xa70) != '\0') {
                              *(undefined8 *)(unaff_x19 + 0x18) =
                                   *(undefined8 *)
                                    (*(long *)(*(long *)PTR_DAT_091a31d8 + 0xb8) + 0xb0);
                              thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18));
                              *(undefined4 *)(unaff_x19 + 0x10) = 1;
                              return 1;
                            }
                            if (*(char *)(unaff_x20 + 0x74a) == '\0') {
                              uVar7 = *(undefined8 *)(unaff_x20 + 0x5d8);
                              if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                                thunk_FUN_03db619c();
                              }
                              uVar8 = FUN_08a508b0(uVar7,0,0);
                              if ((uVar8 & 1) != 0) {
                                if (*(long *)(unaff_x20 + 0x5d8) == 0) goto LAB_03fc915c;
                                uVar8 = FUN_08a50fec(*(long *)(unaff_x20 + 0x5d8),0);
                                if ((uVar8 & 1) != 0) {
                                  FUN_03e3fbe4(*(undefined4 *)(unaff_x20 + 0x77c),
                                               *(undefined4 *)(unaff_x20 + 0x780),
                                               *(undefined4 *)(unaff_x20 + 0x784));
                                }
                              }
                            }
                            else {
                              FUN_03e3fab0();
                            }
                            if (*(long *)(unaff_x20 + 0xb98) == 0) goto LAB_03fc915c;
                            FUN_08a550fc(*(long *)(unaff_x20 + 0xb98),0);
                            iVar4 = FUN_03e41f50();
                            if (iVar4 == 2) {
LAB_03fc9378:
                              FUN_03e40470();
                              uVar10 = 1;
                            }
                            else {
                              if (*(long *)(unaff_x20 + 0xb98) == 0) goto LAB_03fc915c;
                              FUN_08a550fc(*(long *)(unaff_x20 + 0xb98),0);
                              iVar4 = FUN_03e41f50();
                              if (iVar4 == 3) goto LAB_03fc9378;
                              if (*(long *)(unaff_x20 + 0xb98) == 0) goto LAB_03fc915c;
                              FUN_08a550fc(*(long *)(unaff_x20 + 0xb98),0);
                              iVar4 = FUN_03e41f50();
                              if (iVar4 == 4) goto LAB_03fc9378;
                              if (*(long *)(unaff_x20 + 0xb98) == 0) goto LAB_03fc915c;
                              FUN_08a550fc(*(long *)(unaff_x20 + 0xb98),0);
                              iVar4 = FUN_03e41f50();
                              if (iVar4 == 5) goto LAB_03fc9378;
                              if (*(long *)(unaff_x20 + 0xb98) == 0) goto LAB_03fc915c;
                              FUN_08a550fc(*(long *)(unaff_x20 + 0xb98),0);
                              iVar4 = FUN_03e41f50();
                              if (iVar4 == 7) goto LAB_03fc9378;
                              if (*(long *)(unaff_x20 + 0xb98) == 0) goto LAB_03fc915c;
                              FUN_08a550fc(*(long *)(unaff_x20 + 0xb98),0);
                              iVar4 = FUN_03e41f50();
                              if (iVar4 == 8) goto LAB_03fc9378;
                              if (*(long *)(unaff_x20 + 0xb98) == 0) goto LAB_03fc915c;
                              FUN_08a550fc(*(long *)(unaff_x20 + 0xb98),0);
                              iVar4 = FUN_03e41f50();
                              if (iVar4 == 6) goto LAB_03fc9378;
                              if (*(long *)(unaff_x20 + 0xb98) == 0) goto LAB_03fc915c;
                              FUN_08a550fc(*(long *)(unaff_x20 + 0xb98),0);
                              iVar4 = FUN_03e41f50();
                              if (iVar4 == 9) goto LAB_03fc9378;
                              uVar10 = 0;
                            }
                            *(undefined1 *)(unaff_x20 + 0x5e8) = uVar10;
                            if ((*(long *)(unaff_x20 + 0xb98) == 0) ||
                               (lVar6 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x70), lVar6 == 0))
                            goto LAB_03fc915c;
                            if ((*(char *)(lVar6 + 0x3c9) == '\0') ||
                               (*(char *)(lVar6 + 0x3c8) == '\0')) {
                              *(undefined1 *)(unaff_x20 + 0x5e8) = 0;
                            }
                            if (*(long *)(unaff_x20 + 0x220) == 0) goto LAB_03fc915c;
                            FUN_08a50fa8(*(long *)(unaff_x20 + 0x220),1,0);
                            if (*(long *)(unaff_x20 + 0x220) == 0) goto LAB_03fc915c;
                            lVar6 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x220),0);
                            lVar12 = *(long *)(unaff_x20 + 0xb98);
                            if ((lVar12 == 0) || (lVar6 == 0)) goto LAB_03fc915c;
                            FUN_08a5d494(*(undefined4 *)(lVar12 + 0x30),
                                         *(undefined4 *)(lVar12 + 0x34),
                                         *(undefined4 *)(lVar12 + 0x38),lVar6,0);
                            lVar6 = *(long *)(unaff_x20 + 0xb98);
                            if (lVar6 == 0) goto LAB_03fc915c;
                            if (*(char *)(lVar6 + 0x2d) != '\0') {
                              lVar12 = *unaff_x24;
                              if (*(int *)(lVar12 + 0xe0) == 0) {
                                thunk_FUN_03db619c();
                                lVar6 = *(long *)(unaff_x20 + 0xb98);
                                if (lVar6 == 0) goto LAB_03fc915c;
                                lVar12 = *unaff_x24;
                              }
                              if (**(long **)(lVar12 + 0xb8) == 0) goto LAB_03fc915c;
                              FUN_040daa24(*(undefined4 *)(lVar6 + 0x30),
                                           *(undefined4 *)(lVar6 + 0x34),
                                           *(undefined4 *)(lVar6 + 0x38),**(long **)(lVar12 + 0xb8),
                                           0);
                              lVar6 = *(long *)(unaff_x20 + 0xb98);
                              if (lVar6 == 0) goto LAB_03fc915c;
                            }
                            puVar3 = PTR_DAT_091a3928;
                            if (*(char *)(lVar6 + 0x3c) == '\0') {
                              lVar6 = *unaff_x24;
                              if (*(int *)(lVar6 + 0xe0) == 0) {
                                thunk_FUN_03db619c();
                                lVar6 = *unaff_x24;
                              }
                              lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x98);
                              if (((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0xc0), lVar6 == 0)) ||
                                 (lVar6 = FUN_04f83194(lVar6,*(undefined8 *)puVar3), lVar6 == 0))
                              goto LAB_03fc915c;
                              FUN_08a200c4(lVar6,0,0);
                              if (*(long *)(unaff_x20 + 0x220) == 0) goto LAB_03fc915c;
                              FUN_08a50fa8(*(long *)(unaff_x20 + 0x220),0,0);
                            }
                            else {
                              if (*(long *)(unaff_x20 + 0x220) == 0) goto LAB_03fc915c;
                              FUN_08a50fa8(*(long *)(unaff_x20 + 0x220),1,0);
                              lVar6 = *unaff_x24;
                              if (*(int *)(lVar6 + 0xe0) == 0) {
                                thunk_FUN_03db619c();
                                lVar6 = *unaff_x24;
                              }
                              lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x98);
                              if (((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0xc0), lVar6 == 0)) ||
                                 (lVar6 = FUN_04f83194(lVar6,*(undefined8 *)puVar3), lVar6 == 0))
                              goto LAB_03fc915c;
                              FUN_08a200c4(lVar6,1,0);
                              if (*(long *)(unaff_x20 + 0x220) == 0) goto LAB_03fc915c;
                              lVar6 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x220),0);
                              lVar12 = *(long *)(unaff_x20 + 0xb98);
                              if ((lVar12 == 0) || (lVar6 == 0)) goto LAB_03fc915c;
                              FUN_08a5d494(*(undefined4 *)(lVar12 + 0x30),
                                           *(undefined4 *)(lVar12 + 0x34),
                                           *(undefined4 *)(lVar12 + 0x38),lVar6,0);
                            }
                            FUN_03e46b78();
                            if (*(long *)(unaff_x20 + 0x228) == 0) goto LAB_03fc915c;
                            FUN_08a50fa8(*(long *)(unaff_x20 + 0x228),0,0);
                            *(undefined1 *)(unaff_x20 + 0xbab) = 0;
                            FUN_03e44770();
                            if (*(long *)(unaff_x20 + 0xbb0) != 0) {
                              FUN_08a52950();
                            }
                            if (((*(long *)(unaff_x19 + 0x28) == 0) ||
                                (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x18), lVar6 == 0))
                               || (lVar6 = FUN_05a39464(lVar6,*(undefined4 *)(unaff_x20 + 0x23c),
                                                        *unaff_x29), lVar6 == 0)) goto LAB_03fc915c;
                            if ((*(char *)(lVar6 + 0x2c) == '\0') ||
                               (*(char *)(unaff_x20 + 0xc20) != '\0')) {
                              if ((*(long *)(unaff_x19 + 0x28) == 0) ||
                                 ((lVar6 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x18), lVar6 == 0
                                  || (lVar6 = FUN_05a39464(lVar6,*(undefined4 *)(unaff_x20 + 0x23c),
                                                           *unaff_x29), lVar6 == 0))))
                              goto LAB_03fc915c;
                              if ((*(char *)(lVar6 + 0x2c) != '\0') ||
                                 (*(char *)(unaff_x20 + 0xc20) == '\0')) {
                                if (((*(long *)(unaff_x19 + 0x28) == 0) ||
                                    (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x18),
                                    lVar6 == 0)) ||
                                   (lVar6 = FUN_05a39464(lVar6,*(undefined4 *)(unaff_x20 + 0x23c),
                                                         *unaff_x29), lVar6 == 0))
                                goto LAB_03fc915c;
                                if ((*(char *)(lVar6 + 0x2c) != '\0') ||
                                   (*(char *)(unaff_x20 + 0xc20) == '\0')) goto LAB_03fc961c;
                              }
                              FUN_03e452c4();
                            }
                            else {
                              FUN_03e462e0();
                            }
LAB_03fc961c:
                            lVar6 = *(long *)(unaff_x20 + 0xb98);
                            if (((lVar6 == 0) || (lVar12 = *(long *)(lVar6 + 0x60), lVar12 == 0)) ||
                               (*(long *)(lVar12 + 0x58) == 0)) goto LAB_03fc915c;
                            iVar4 = *(int *)(*(long *)(lVar12 + 0x58) + 0x30);
                            if (((iVar4 == 0) || (*(char *)(lVar12 + 0x50) == '\0')) ||
                               (*(char *)(lVar6 + 0x58) == '\0')) {
                              FUN_03e471b4();
                            }
                            else if (iVar4 == 1) {
                              FUN_03e471b4();
                              plVar9 = *(long **)(unaff_x20 + 0x368);
                              *(undefined4 *)(unaff_x20 + 900) = 0;
                              uVar7 = FUN_0718a9b8(unaff_x20 + 900,0);
                              if (plVar9 == (long *)0x0) goto LAB_03fc915c;
                              (**(code **)(*plVar9 + 0x558))
                                        (plVar9,uVar7,*(undefined8 *)(*plVar9 + 0x560));
                              plVar9 = *(long **)(unaff_x20 + 0x370);
                              *(undefined4 *)(unaff_x20 + 0x388) = 0;
                              uVar7 = FUN_07175a38(unaff_x20 + 0x388,0);
                              if (plVar9 == (long *)0x0) goto LAB_03fc915c;
                              (**(code **)(*plVar9 + 0x558))
                                        (plVar9,uVar7,*(undefined8 *)(*plVar9 + 0x560));
                              plVar9 = *(long **)(unaff_x20 + 0x378);
                              *(undefined4 *)(unaff_x20 + 0x38c) = 0;
                              uVar7 = FUN_0718a9b8(unaff_x20 + 0x38c,0);
                              uVar7 = FUN_06fc5244(uVar7,*(undefined8 *)PTR_DAT_091a1cf8,0);
                              if (plVar9 == (long *)0x0) goto LAB_03fc915c;
                              (**(code **)(*plVar9 + 0x558))
                                        (plVar9,uVar7,*(undefined8 *)(*plVar9 + 0x560));
                              *(undefined4 *)(unaff_x20 + 0x380) = 0;
                              *(undefined4 *)(unaff_x20 + 0x330) =
                                   *(undefined4 *)(unaff_x20 + 0x23c);
                            }
                            if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
                                (lVar6 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x60), lVar6 == 0)
                                ) || ((lVar6 = *(long *)(lVar6 + 0x58), lVar6 == 0 ||
                                      (*(long *)(unaff_x20 + 0x338) == 0)))) goto LAB_03fc915c;
                            FUN_08a50fa8(*(long *)(unaff_x20 + 0x338),*(undefined1 *)(lVar6 + 0x34),
                                         0);
                            if (*(long *)(unaff_x20 + 0xb98) == 0) goto LAB_03fc915c;
                            if (*(char *)(*(long *)(unaff_x20 + 0xb98) + 200) == '\0') {
                              CoursesShadowCoachManager__ShadowCoachComeBackToPosition();
                            }
                            else {
                              if (*(long *)(unaff_x20 + 0x890) == 0) goto LAB_03fc915c;
                              lVar6 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x890),0);
                              if ((*(long *)(unaff_x20 + 0x890) == 0) ||
                                 (lVar12 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x890),0), lVar12 == 0
                                 )) goto LAB_03fc915c;
                              uVar7 = FUN_08a5d3f4(lVar12,0);
                              if ((*(long *)(unaff_x20 + 0x890) == 0) ||
                                 (lVar12 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x890),0), lVar12 == 0
                                 )) goto LAB_03fc915c;
                              FUN_08a5d3f4(lVar12,0);
                              if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
                                  (*(long *)(*(long *)(unaff_x20 + 0xb98) + 0xd0) == 0)) ||
                                 (lVar6 == 0)) goto LAB_03fc915c;
                              FUN_08a5d494(uVar7,lVar6,0);
                              CoursesShadowCoachManager__ShadowCoachComeBackToPosition();
                              lVar6 = *(long *)(unaff_x20 + 0xb98);
                              if ((lVar6 == 0) || (*(long *)(lVar6 + 0xd0) == 0)) goto LAB_03fc915c;
                              if (*(char *)(*(long *)(lVar6 + 0xd0) + 0x14) != '\0') {
                                FUN_03e4d4f4();
                                lVar6 = *(long *)(unaff_x20 + 0xb98);
                                if (lVar6 == 0) goto LAB_03fc915c;
                              }
                              if (*(long *)(lVar6 + 0xd0) == 0) goto LAB_03fc915c;
                              if (*(char *)(*(long *)(lVar6 + 0xd0) + 0x15) != '\0') {
                                FUN_03e4d5b4();
                                lVar6 = *(long *)(unaff_x20 + 0xb98);
                                if (lVar6 == 0) goto LAB_03fc915c;
                              }
                              if (*(long *)(lVar6 + 0xd0) == 0) goto LAB_03fc915c;
                              if (*(char *)(*(long *)(lVar6 + 0xd0) + 0x16) != '\0') {
                                FUN_03e4d624();
                                lVar6 = *(long *)(unaff_x20 + 0xb98);
                                if (lVar6 == 0) goto LAB_03fc915c;
                              }
                              if (*(long *)(lVar6 + 0xd0) == 0) goto LAB_03fc915c;
                              if (*(char *)(*(long *)(lVar6 + 0xd0) + 0x17) != '\0') {
                                FUN_03e4d694();
                                lVar6 = *(long *)(unaff_x20 + 0xb98);
                                if (lVar6 == 0) goto LAB_03fc915c;
                              }
                              if (*(long *)(lVar6 + 0xd0) == 0) goto LAB_03fc915c;
                              if (*(char *)(*(long *)(lVar6 + 0xd0) + 0x18) != '\0') {
                                FUN_03e52990();
                                lVar6 = *(long *)(unaff_x20 + 0xb98);
                                if (lVar6 == 0) goto LAB_03fc915c;
                              }
                              if (*(long *)(lVar6 + 0xd0) == 0) goto LAB_03fc915c;
                              if (*(char *)(*(long *)(lVar6 + 0xd0) + 0x19) != '\0') {
                                FUN_03e52a00();
                              }
                            }
                            iVar4 = 0;
                            *(undefined4 *)(unaff_x19 + 0x30) = 0;
                          }
                          *(undefined4 *)(unaff_x20 + 0xb8c) = 0;
                          *(undefined4 *)(unaff_x20 + 0x280) = 0;
                          *(undefined1 *)(unaff_x20 + 0x7f0) = 0;
                          *(undefined1 *)(unaff_x20 + 0xb89) = 0;
                          *(undefined1 *)(unaff_x20 + 0x53) = 0;
                          if (*(long *)(unaff_x20 + 0xbc0) != 0) {
                            FUN_08a52950();
                          }
                          if (*(long *)(unaff_x20 + 3000) != 0) {
                            FUN_08a52950();
                            *(undefined1 *)(unaff_x20 + 0x240) = 0;
                          }
                          lVar6 = *(long *)(unaff_x20 + 0xb98);
                          if (lVar6 == 0) goto LAB_03fc915c;
                          if (*(char *)(lVar6 + 0x78) == '\0') goto LAB_03fc9ab4;
                          lVar12 = *(long *)(unaff_x19 + 0x28);
                          if (*(char *)(lVar6 + 0x88) == '\0') goto LAB_03fc99e4;
                          if (((lVar12 == 0) || (*(long *)(lVar12 + 0x18) == 0)) ||
                             ((lVar6 = FUN_05a39464(*(long *)(lVar12 + 0x18),
                                                    *(undefined4 *)(unaff_x20 + 0x23c),*unaff_x29),
                              lVar6 == 0 ||
                              ((*(long *)(lVar6 + 0x80) == 0 ||
                               (plVar9 = (long *)FUN_04f82e34(*(long *)(lVar6 + 0x80),
                                                              *(undefined8 *)PTR_DAT_091a73e0),
                               plVar9 == (long *)0x0)))))) goto LAB_03fc915c;
                          lVar6 = *plVar9;
                          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
                          if (uVar8 != 0) {
                            piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_091a73d8) {
                                puVar5 = (undefined8 *)(lVar6 + (long)*piVar15 * 0x10 + 0x138);
                                goto LAB_03fc9a74;
                              }
                              uVar8 = uVar8 - 1;
                              piVar15 = piVar15 + 4;
                            } while (uVar8 != 0);
                          }
                          puVar5 = (undefined8 *)FUN_03d8f370(plVar9,*(long *)PTR_DAT_091a73d8,0);
LAB_03fc9a74:
                          (*(code *)*puVar5)(plVar9,puVar5[1]);
                          if (unaff_x20 == 0) goto LAB_03fc915c;
                          if (*(char *)(unaff_x20 + 0xb88) == '\0') {
                            *(undefined8 *)(unaff_x19 + 0x18) =
                                 *(undefined8 *)(*(long *)(*(long *)PTR_DAT_091a31d8 + 0xb8) + 0xb0)
                            ;
                            thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18));
                            uVar20 = 2;
                            break;
                          }
                          *(undefined1 *)(unaff_x20 + 0xb88) = 0;
                        } while( true );
                      }
                      goto LAB_03fcbe38;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03fc915c:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
LAB_03fc99e4:
  if ((((lVar12 == 0) || (*(long *)(lVar12 + 0x18) == 0)) ||
      (lVar6 = FUN_05a39464(*(long *)(lVar12 + 0x18),*(undefined4 *)(unaff_x20 + 0x23c),*unaff_x29),
      lVar6 == 0)) ||
     ((*(long *)(lVar6 + 0x80) == 0 ||
      (plVar9 = (long *)FUN_04f82e34(*(long *)(lVar6 + 0x80),*(undefined8 *)PTR_DAT_091a73e0),
      plVar9 == (long *)0x0)))) goto LAB_03fc915c;
  lVar6 = *plVar9;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_091a73d8) {
        puVar5 = (undefined8 *)(lVar6 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_03fc9aa0;
      }
      uVar8 = uVar8 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_03d8f370(plVar9,*(long *)PTR_DAT_091a73d8,0);
LAB_03fc9aa0:
  (*(code *)*puVar5)(plVar9,puVar5[1]);
  lVar6 = *(long *)(unaff_x20 + 0xb98);
  if (lVar6 == 0) goto LAB_03fc915c;
LAB_03fc9ab4:
  if (*(char *)(lVar6 + 0x3d) == '\0') {
    if ((*(long *)(unaff_x20 + 0x390) == 0) ||
       (lVar6 = FUN_04f82e34(*(long *)(unaff_x20 + 0x390),*(undefined8 *)PTR_DAT_091a1bc0),
       lVar6 == 0)) goto LAB_03fc915c;
    FUN_08ca89f0(lVar6,0);
    if (*(long *)(unaff_x20 + 0x398) == 0) goto LAB_03fc915c;
    FUN_08a50fa8(*(long *)(unaff_x20 + 0x398),0,0);
    if (*(long *)(unaff_x20 + 0x390) == 0) goto LAB_03fc915c;
    FUN_08a50fa8(*(long *)(unaff_x20 + 0x390),0,0);
    goto LAB_03fca480;
  }
  if (*(long *)(unaff_x20 + 0x398) == 0) goto LAB_03fc915c;
  uVar8 = FUN_08a51028(*(long *)(unaff_x20 + 0x398),0);
  if ((uVar8 & 1) == 0) {
LAB_03fc9ae4:
    if (*(long *)(unaff_x20 + 0x398) == 0) goto LAB_03fc915c;
    FUN_08a50fa8(*(long *)(unaff_x20 + 0x398),1,0);
    if (*(long *)(unaff_x20 + 0x390) == 0) goto LAB_03fc915c;
    FUN_08a50fa8(*(long *)(unaff_x20 + 0x390),1,0);
  }
  else {
    if (*(long *)(unaff_x20 + 0x390) == 0) goto LAB_03fc915c;
    uVar8 = FUN_08a51028(*(long *)(unaff_x20 + 0x390),0);
    if ((uVar8 & 1) == 0) goto LAB_03fc9ae4;
  }
  if ((*(int *)(unaff_x20 + 0x23c) == 0) && (*(char *)(unaff_x20 + 0xa72) == '\0')) {
    if (*(long *)(unaff_x20 + 0x398) == 0) goto LAB_03fc915c;
    lVar6 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x398),0);
    if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
        (lVar12 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x40), lVar12 == 0)) || (lVar6 == 0))
    goto LAB_03fc915c;
    FUN_08a5d494(*(undefined4 *)(lVar12 + 0x20),*(undefined4 *)(lVar12 + 0x24),
                 *(undefined4 *)(lVar12 + 0x28),lVar6,0);
    if (*(long *)(unaff_x20 + 0x398) == 0) goto LAB_03fc915c;
    lVar6 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x398),0);
    if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
        (lVar12 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x40), lVar12 == 0)) ||
       (FUN_08a447dc(*(float *)(lVar12 + 0x2c) * DAT_01914568,
                     *(float *)(lVar12 + 0x30) * DAT_01914568,
                     *(float *)(lVar12 + 0x34) * DAT_01914568,0), lVar6 == 0)) goto LAB_03fc915c;
    FUN_08a5d814(lVar6,0);
    *(undefined8 *)(unaff_x19 + 0x18) =
         *(undefined8 *)(*(long *)(*(long *)PTR_DAT_091a31d8 + 0xb8) + 0xb0);
    thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18));
    uVar20 = 3;
    goto LAB_03fcbe38;
  }
  if ((*(long *)(unaff_x20 + 0xb98) == 0) ||
     (lVar6 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x40), lVar6 == 0)) goto LAB_03fc915c;
  fVar19 = *(float *)(unaff_x20 + 0x3cc) - *(float *)(lVar6 + 0x20);
  fVar24 = (float)*(undefined8 *)(unaff_x20 + 0x3d0) - (float)*(undefined8 *)(lVar6 + 0x24);
  fVar26 = (float)((ulong)*(undefined8 *)(unaff_x20 + 0x3d0) >> 0x20) -
           (float)((ulong)*(undefined8 *)(lVar6 + 0x24) >> 0x20);
  if (DAT_01913f10 <= fVar26 * fVar26 + fVar19 * fVar19 + fVar24 * fVar24) {
    *(undefined1 *)(unaff_x20 + 0x3c8) = 1;
    FUN_03e47228();
    FUN_08a52818();
    if (*(long *)(unaff_x20 + 0x3d8) == 0) goto LAB_03fc915c;
    FUN_089f6760(*(long *)(unaff_x20 + 0x3d8),*(undefined8 *)PTR_DAT_091a68e0,0);
    if (*(long *)(unaff_x20 + 1000) == 0) goto LAB_03fc915c;
    uVar22 = FUN_089f5af8(*(long *)(unaff_x20 + 1000),0);
    uVar7 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091a1098);
    FUN_08a57768(uVar22,uVar7,0);
    *(undefined8 *)(unaff_x19 + 0x18) = uVar7;
    thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18),uVar7);
    uVar20 = 5;
    goto LAB_03fcbe38;
  }
  if (*(char *)(lVar6 + 0x3c) == '\0') {
    FUN_03e47228();
    FUN_08a52818();
  }
  if ((*(long *)(unaff_x20 + 0xb98) == 0) ||
     (lVar6 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x40), lVar6 == 0)) goto LAB_03fc915c;
  uVar7 = *(undefined8 *)(lVar6 + 0x20);
  *(undefined4 *)(unaff_x20 + 0x3d4) = *(undefined4 *)(lVar6 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x3cc) = uVar7;
  if (*(long *)(unaff_x20 + 0x390) == 0) goto LAB_03fc915c;
  uVar7 = FUN_04f82e34(*(long *)(unaff_x20 + 0x390),*(undefined8 *)PTR_DAT_091a1bc0);
  plVar9 = (long *)(unaff_x20 + 0x3a8);
  *(undefined8 *)(unaff_x20 + 0x3a8) = uVar7;
  thunk_FUN_03d1023c(plVar9,uVar7);
  puVar3 = PTR_DAT_091a73f0;
  if ((*(long *)(unaff_x20 + 0xb98) == 0) ||
     (lVar6 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x40), lVar6 == 0)) goto LAB_03fc915c;
  if (*(char *)(lVar6 + 0x60) == '\0') {
    if (*(char *)(lVar6 + 0x88) == '\0') {
      if (*(char *)(lVar6 + 0x3d) != '\0') goto LAB_03fc9dc0;
      lVar6 = *unaff_x24;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_03db619c();
        lVar6 = *unaff_x24;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
      if (lVar6 == 0) goto LAB_03fc915c;
      uVar8 = thunk_FUN_06fd18b4(*(undefined8 *)(lVar6 + 0x200),*(undefined8 *)PTR_DAT_091a1c80,0);
      if ((uVar8 & 1) == 0) {
        lVar6 = *unaff_x24;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_03db619c();
          lVar6 = *unaff_x24;
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
        if (lVar6 == 0) goto LAB_03fc915c;
        uVar8 = thunk_FUN_06fd18b4(*(undefined8 *)(lVar6 + 0x200),*(undefined8 *)PTR_DAT_091a1c88,0)
        ;
        if ((uVar8 & 1) != 0) goto LAB_03fca0e0;
        if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
            (lVar6 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x40), lVar6 == 0)) ||
           (lVar12 = *(long *)(unaff_x20 + 0x3a8), lVar12 == 0)) goto LAB_03fc915c;
        puVar5 = (undefined8 *)(lVar6 + 0x18);
      }
      else {
LAB_03fca0e0:
        if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
            (lVar6 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x40), lVar6 == 0)) ||
           (lVar12 = *(long *)(unaff_x20 + 0x3a8), lVar12 == 0)) goto LAB_03fc915c;
        puVar5 = (undefined8 *)(lVar6 + 0x10);
      }
      FUN_08ca87f8(lVar12,*puVar5,0);
      if (*plVar9 == 0) goto LAB_03fc915c;
      uVar7 = FUN_08ca87bc(*plVar9,0);
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_03db619c(*unaff_x27);
      }
      uVar8 = FUN_08a508b0(uVar7,0,0);
      if ((uVar8 & 1) != 0) {
        if (*plVar9 == 0) goto LAB_03fc915c;
        FUN_08ca8900(*plVar9,0);
        if (*(long *)(unaff_x20 + 0x3a8) == 0) goto LAB_03fc915c;
        uVar8 = FUN_08ca893c(*(long *)(unaff_x20 + 0x3a8),0);
        if ((uVar8 & 1) == 0) {
          *(undefined8 *)(unaff_x19 + 0x18) =
               *(undefined8 *)(*(long *)(*(long *)PTR_DAT_091a31d8 + 0xb8) + 0xb0);
          thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18));
          uVar20 = 7;
          goto LAB_03fcbe38;
        }
      }
      if (*(long *)(unaff_x20 + 0x3a0) == 0) goto LAB_03fc915c;
      FUN_08a200c4(*(long *)(unaff_x20 + 0x3a0),1,0);
      lVar6 = *(long *)(unaff_x20 + 0x3a8);
      goto joined_r0x03fca2fc;
    }
    if (*(char *)(lVar6 + 0x3d) == '\0') {
      lVar6 = *(long *)(unaff_x20 + 0x960);
      if (lVar6 == 0) goto LAB_03fc915c;
      iVar4 = *(int *)(lVar6 + 0x18);
      if (iVar4 == 0) {
        FUN_03e44cdc();
      }
      else {
        if (iVar4 == 1) {
          lVar12 = *plVar9;
          uVar7 = FUN_05a39464(lVar6,0,*(undefined8 *)PTR_DAT_091a73f0);
          if (lVar12 == 0) goto LAB_03fc915c;
          FUN_08ca87f8(lVar12,uVar7,0);
          lVar6 = *plVar9;
          goto joined_r0x03fca2fc;
        }
        if (iVar4 == 2) {
          lVar12 = *plVar9;
          uVar7 = FUN_05a39464(lVar6,0,*(undefined8 *)PTR_DAT_091a73f0);
          if (lVar12 == 0) goto LAB_03fc915c;
          FUN_08ca87f8(lVar12,uVar7,0);
          if (*plVar9 == 0) goto LAB_03fc915c;
          FUN_08ca8978(*plVar9,0);
          if ((*(long *)(unaff_x20 + 0x960) == 0) ||
             (lVar6 = FUN_05a39464(*(long *)(unaff_x20 + 0x960),0,*(undefined8 *)puVar3), lVar6 == 0
             )) goto LAB_03fc915c;
          dVar23 = (double)FUN_08ca86f8(lVar6,0);
          uVar7 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091a1098);
          FUN_08a57768((float)dVar23,uVar7,0);
          *(undefined8 *)(unaff_x19 + 0x18) = uVar7;
          thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18),uVar7);
          uVar20 = 0xc;
          goto LAB_03fcbe38;
        }
      }
    }
    else {
LAB_03fc9dc0:
      uVar8 = FUN_03e52a70();
      if ((uVar8 & 1) == 0) {
        uVar8 = FUN_03e52a70();
        if ((uVar8 & 1) == 0) {
          lVar6 = *unaff_x24;
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_03db619c();
            lVar6 = *unaff_x24;
          }
          lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
          if (lVar6 == 0) goto LAB_03fc915c;
          uVar8 = thunk_FUN_06fd18b4(*(undefined8 *)(lVar6 + 0x200),*(undefined8 *)PTR_DAT_091a1c80,
                                     0);
          if ((uVar8 & 1) == 0) {
            lVar6 = *unaff_x24;
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_03db619c();
              lVar6 = *unaff_x24;
            }
            lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
            if (lVar6 == 0) goto LAB_03fc915c;
            uVar8 = thunk_FUN_06fd18b4(*(undefined8 *)(lVar6 + 0x200),
                                       *(undefined8 *)PTR_DAT_091a1c88,0);
            if ((uVar8 & 1) != 0) goto LAB_03fc9ef0;
            if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
                (lVar6 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x40), lVar6 == 0)) ||
               (lVar12 = *(long *)(unaff_x20 + 0x3a8), lVar12 == 0)) goto LAB_03fc915c;
            puVar5 = (undefined8 *)(lVar6 + 0x48);
          }
          else {
LAB_03fc9ef0:
            if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
                (lVar6 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x40), lVar6 == 0)) ||
               (lVar12 = *(long *)(unaff_x20 + 0x3a8), lVar12 == 0)) goto LAB_03fc915c;
            puVar5 = (undefined8 *)(lVar6 + 0x40);
          }
          FUN_08ca87f8(lVar12,*puVar5,0);
          if (*plVar9 == 0) goto LAB_03fc915c;
          uVar7 = FUN_08ca87bc(*plVar9,0);
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_03db619c(*unaff_x27);
          }
          uVar8 = FUN_08a508b0(uVar7,0,0);
          if ((uVar8 & 1) != 0) {
            if (*plVar9 == 0) goto LAB_03fc915c;
            FUN_08ca8900(*plVar9,0);
            if (*(long *)(unaff_x20 + 0x3a8) == 0) goto LAB_03fc915c;
            uVar8 = FUN_08ca893c(*(long *)(unaff_x20 + 0x3a8),0);
            if ((uVar8 & 1) == 0) {
              *(undefined8 *)(unaff_x19 + 0x18) =
                   *(undefined8 *)(*(long *)(*(long *)PTR_DAT_091a31d8 + 0xb8) + 0xb0);
              thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18));
              uVar20 = 9;
              goto LAB_03fcbe38;
            }
          }
          goto LAB_03fca188;
        }
      }
      else {
        lVar6 = *unaff_x24;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_03db619c();
          lVar6 = *unaff_x24;
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
        if (lVar6 == 0) goto LAB_03fc915c;
        uVar8 = thunk_FUN_06fd18b4(*(undefined8 *)(lVar6 + 0x200),*(undefined8 *)PTR_DAT_091a1c80,0)
        ;
        if ((uVar8 & 1) == 0) {
          lVar6 = *unaff_x24;
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_03db619c();
            lVar6 = *unaff_x24;
          }
          lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
          if (lVar6 == 0) goto LAB_03fc915c;
          uVar8 = thunk_FUN_06fd18b4(*(undefined8 *)(lVar6 + 0x200),*(undefined8 *)PTR_DAT_091a1c88,
                                     0);
          if ((uVar8 & 1) != 0) goto LAB_03fc9e48;
          if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
              (lVar6 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x40), lVar6 == 0)) ||
             (lVar12 = *(long *)(unaff_x20 + 0x3a8), lVar12 == 0)) goto LAB_03fc915c;
          puVar5 = (undefined8 *)(lVar6 + 0x58);
        }
        else {
LAB_03fc9e48:
          if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
              (lVar6 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x40), lVar6 == 0)) ||
             (lVar12 = *(long *)(unaff_x20 + 0x3a8), lVar12 == 0)) goto LAB_03fc915c;
          puVar5 = (undefined8 *)(lVar6 + 0x50);
        }
        FUN_08ca87f8(lVar12,*puVar5,0);
        if (*plVar9 == 0) goto LAB_03fc915c;
        uVar7 = FUN_08ca87bc(*plVar9,0);
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_03db619c(*unaff_x27);
        }
        uVar8 = FUN_08a508b0(uVar7,0,0);
        if ((uVar8 & 1) != 0) {
          if (*plVar9 == 0) goto LAB_03fc915c;
          FUN_08ca8900(*plVar9,0);
          if (*(long *)(unaff_x20 + 0x3a8) == 0) goto LAB_03fc915c;
          uVar8 = FUN_08ca893c(*(long *)(unaff_x20 + 0x3a8),0);
          if ((uVar8 & 1) == 0) {
            *(undefined8 *)(unaff_x19 + 0x18) =
                 *(undefined8 *)(*(long *)(*(long *)PTR_DAT_091a31d8 + 0xb8) + 0xb0);
            thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18));
            uVar20 = 8;
            goto LAB_03fcbe38;
          }
        }
LAB_03fca188:
        if (*(long *)(unaff_x20 + 0x3a0) == 0) goto LAB_03fc915c;
        FUN_08a200c4(*(long *)(unaff_x20 + 0x3a0),1,0);
        if (*(long *)(unaff_x20 + 0x3a8) == 0) goto LAB_03fc915c;
        FUN_08ca8978(*(long *)(unaff_x20 + 0x3a8),0);
      }
      FUN_03e4d438();
    }
  }
  else {
    if (*(char *)(lVar6 + 0x3d) != '\0') goto LAB_03fc9dc0;
    uVar8 = FUN_03e52aa4();
    if ((uVar8 & 1) == 0) {
      uVar8 = FUN_03e52aa4();
      if ((uVar8 & 1) != 0) goto LAB_03fca480;
      lVar6 = *unaff_x24;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_03db619c();
        lVar6 = *unaff_x24;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
      if (lVar6 == 0) goto LAB_03fc915c;
      uVar8 = thunk_FUN_06fd18b4(*(undefined8 *)(lVar6 + 0x200),*(undefined8 *)PTR_DAT_091a1c80,0);
      if ((uVar8 & 1) == 0) {
        lVar6 = *unaff_x24;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_03db619c();
          lVar6 = *unaff_x24;
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
        if (lVar6 == 0) goto LAB_03fc915c;
        uVar8 = thunk_FUN_06fd18b4(*(undefined8 *)(lVar6 + 0x200),*(undefined8 *)PTR_DAT_091a1c88,0)
        ;
        if ((uVar8 & 1) != 0) goto LAB_03fc9f98;
        if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
            (lVar6 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x40), lVar6 == 0)) ||
           (lVar12 = *(long *)(unaff_x20 + 0x3a8), lVar12 == 0)) goto LAB_03fc915c;
        puVar5 = (undefined8 *)(lVar6 + 0x70);
      }
      else {
LAB_03fc9f98:
        if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
            (lVar6 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x40), lVar6 == 0)) ||
           (lVar12 = *(long *)(unaff_x20 + 0x3a8), lVar12 == 0)) goto LAB_03fc915c;
        puVar5 = (undefined8 *)(lVar6 + 0x68);
      }
      FUN_08ca87f8(lVar12,*puVar5,0);
      if (*plVar9 == 0) goto LAB_03fc915c;
      uVar7 = FUN_08ca87bc(*plVar9,0);
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_03db619c(*unaff_x27);
      }
      uVar8 = FUN_08a508b0(uVar7,0,0);
      if ((uVar8 & 1) != 0) {
        if (*plVar9 == 0) goto LAB_03fc915c;
        FUN_08ca8900(*plVar9,0);
        if (*(long *)(unaff_x20 + 0x3a8) == 0) goto LAB_03fc915c;
        uVar8 = FUN_08ca893c(*(long *)(unaff_x20 + 0x3a8),0);
        if ((uVar8 & 1) == 0) {
          *(undefined8 *)(unaff_x19 + 0x18) =
               *(undefined8 *)(*(long *)(*(long *)PTR_DAT_091a31d8 + 0xb8) + 0xb0);
          thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18));
          uVar20 = 0xb;
          goto LAB_03fcbe38;
        }
      }
    }
    else {
      lVar6 = *unaff_x24;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_03db619c();
        lVar6 = *unaff_x24;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
      if (lVar6 == 0) goto LAB_03fc915c;
      uVar8 = thunk_FUN_06fd18b4(*(undefined8 *)(lVar6 + 0x200),*(undefined8 *)PTR_DAT_091a1c80,0);
      if ((uVar8 & 1) == 0) {
        lVar6 = *unaff_x24;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_03db619c();
          lVar6 = *unaff_x24;
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
        if (lVar6 == 0) goto LAB_03fc915c;
        uVar8 = thunk_FUN_06fd18b4(*(undefined8 *)(lVar6 + 0x200),*(undefined8 *)PTR_DAT_091a1c88,0)
        ;
        if ((uVar8 & 1) != 0) goto LAB_03fc9c84;
        if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
            (lVar6 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x40), lVar6 == 0)) ||
           (lVar12 = *(long *)(unaff_x20 + 0x3a8), lVar12 == 0)) goto LAB_03fc915c;
        puVar5 = (undefined8 *)(lVar6 + 0x80);
      }
      else {
LAB_03fc9c84:
        if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
            (lVar6 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x40), lVar6 == 0)) ||
           (lVar12 = *(long *)(unaff_x20 + 0x3a8), lVar12 == 0)) goto LAB_03fc915c;
        puVar5 = (undefined8 *)(lVar6 + 0x78);
      }
      FUN_08ca87f8(lVar12,*puVar5,0);
      if (*plVar9 == 0) goto LAB_03fc915c;
      uVar7 = FUN_08ca87bc(*plVar9,0);
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_03db619c(*unaff_x27);
      }
      uVar8 = FUN_08a508b0(uVar7,0,0);
      if ((uVar8 & 1) != 0) {
        if (*plVar9 == 0) goto LAB_03fc915c;
        FUN_08ca8900(*plVar9,0);
        if (*(long *)(unaff_x20 + 0x3a8) == 0) goto LAB_03fc915c;
        uVar8 = FUN_08ca893c(*(long *)(unaff_x20 + 0x3a8),0);
        if ((uVar8 & 1) == 0) {
          *(undefined8 *)(unaff_x19 + 0x18) =
               *(undefined8 *)(*(long *)(*(long *)PTR_DAT_091a31d8 + 0xb8) + 0xb0);
          thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18));
          uVar20 = 10;
LAB_03fcbe38:
          *(undefined4 *)(unaff_x19 + 0x10) = uVar20;
          return 1;
        }
      }
    }
    if (*(long *)(unaff_x20 + 0x3a0) == 0) goto LAB_03fc915c;
    FUN_08a200c4(*(long *)(unaff_x20 + 0x3a0),1,0);
    lVar6 = *(long *)(unaff_x20 + 0x3a8);
joined_r0x03fca2fc:
    if (lVar6 == 0) goto LAB_03fc915c;
    FUN_08ca8978(lVar6,0);
  }
LAB_03fca480:
  if (*(long *)(unaff_x20 + 0xb98) == 0) goto LAB_03fc915c;
  if (*(char *)(*(long *)(unaff_x20 + 0xb98) + 0x48) == '\0') {
    if (*(long *)(unaff_x20 + 0x7c0) == 0) goto LAB_03fc915c;
    FUN_08a50fa8(*(long *)(unaff_x20 + 0x7c0),0,0);
    if (*(long *)(unaff_x20 + 0x7c8) == 0) goto LAB_03fc915c;
    FUN_08a50fa8(*(long *)(unaff_x20 + 0x7c8),0,0);
    if (*(long *)(unaff_x20 + 0x810) == 0) goto LAB_03fc915c;
    FUN_08a50fa8(*(long *)(unaff_x20 + 0x810),0,0);
    ConfigurableBallThrowerGameModeScript_<forcedConfigurableBallThrowerThrowTimer>d__53__System_Collections_IEnumerator_get_Current
              ();
    if (*(long *)(unaff_x20 + 0x7b8) == 0) goto LAB_03fc915c;
    uVar8 = FUN_08a51028(*(long *)(unaff_x20 + 0x7b8),0);
    if ((uVar8 & 1) != 0) {
      FUN_03e42ca4();
      FUN_08a52818();
      goto LAB_03fca858;
    }
    lVar6 = *(long *)(unaff_x20 + 0x7b8);
  }
  else {
    if (*(long *)(unaff_x20 + 0x7b0) == 0) goto LAB_03fc915c;
    lVar6 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x7b0),0);
    if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
        (lVar12 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x50), lVar12 == 0)) || (lVar6 == 0))
    goto LAB_03fc915c;
    FUN_08a5d494(*(undefined4 *)(lVar12 + 0x20),*(undefined4 *)(lVar12 + 0x24),
                 *(undefined4 *)(lVar12 + 0x28),lVar6,0);
    if (*(long *)(unaff_x20 + 0x7b0) == 0) goto LAB_03fc915c;
    lVar6 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x7b0),0);
    fVar19 = DAT_01914568;
    if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
        (lVar12 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x50), lVar12 == 0)) ||
       (FUN_08a447dc(*(float *)(lVar12 + 0x2c) * DAT_01914568,
                     *(float *)(lVar12 + 0x30) * DAT_01914568,
                     *(float *)(lVar12 + 0x34) * DAT_01914568,0), lVar6 == 0)) goto LAB_03fc915c;
    FUN_08a5d814(lVar6,0);
    if ((*(long *)(unaff_x20 + 0x7b8) == 0) ||
       (lVar6 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x7b8),0), lVar6 == 0)) goto LAB_03fc915c;
    FUN_08a5caa0(0,0,0,lVar6,0);
    if (*(long *)(unaff_x20 + 0x7b8) == 0) goto LAB_03fc915c;
    lVar6 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x7b8),0);
    if (DAT_098362c8 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f90);
      DAT_098362c8 = '\x01';
    }
    puVar3 = PTR_DAT_091a0f90;
    if (lVar6 == 0) goto LAB_03fc915c;
    puVar11 = *(undefined4 **)(*(long *)PTR_DAT_091a0f90 + 0xb8);
    FUN_08a5d920(*puVar11,puVar11[1],puVar11[2],puVar11[3],lVar6,0);
    if (*(long *)(unaff_x20 + 0x7b8) == 0) goto LAB_03fc915c;
    lVar6 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x7b8),0);
    if (DAT_098362c8 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f90);
      DAT_098362c8 = '\x01';
    }
    if (lVar6 == 0) goto LAB_03fc915c;
    puVar11 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
    FUN_08a5d814(*puVar11,puVar11[1],puVar11[2],puVar11[3],lVar6,0);
    if (*(long *)(unaff_x20 + 0x7b8) == 0) goto LAB_03fc915c;
    uVar8 = FUN_08a51028(*(long *)(unaff_x20 + 0x7b8),0);
    if ((uVar8 & 1) == 0) {
      FUN_03e42c30();
      FUN_08a52818();
    }
    else {
      if (*(long *)(unaff_x20 + 0x7b8) == 0) goto LAB_03fc915c;
      FUN_08a50fa8(*(long *)(unaff_x20 + 0x7b8),1,0);
    }
    if (*(long *)(unaff_x20 + 0x7c0) == 0) goto LAB_03fc915c;
    FUN_08a50fa8(*(long *)(unaff_x20 + 0x7c0),0,0);
    if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
        (lVar6 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x50), lVar6 == 0)) ||
       (*(long *)(unaff_x20 + 0x7c8) == 0)) goto LAB_03fc915c;
    FUN_08a50fa8(*(long *)(unaff_x20 + 0x7c8),*(undefined1 *)(lVar6 + 0x60),0);
    if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
        (lVar6 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x50), lVar6 == 0)) ||
       (*(long *)(unaff_x20 + 0x818) == 0)) goto LAB_03fc915c;
    FUN_08a50fa8(*(long *)(unaff_x20 + 0x818),*(undefined1 *)(lVar6 + 0x7c),0);
    uVar7 = FUN_03e447e4();
    *(undefined8 *)(unaff_x20 + 0xbc0) = uVar7;
    thunk_FUN_03d1023c(unaff_x20 + 0xbc0);
    FUN_08a52818();
    FUN_03e45b88();
    if ((*(long *)(unaff_x20 + 0xb98) == 0) ||
       (lVar6 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x50), lVar6 == 0)) goto LAB_03fc915c;
    if (*(char *)(lVar6 + 0x19) == '\0') {
      ConfigurableBallThrowerGameModeScript_<forcedConfigurableBallThrowerThrowTimer>d__53__System_Collections_IEnumerator_get_Current
                ();
    }
    else {
      FUN_03e44858();
      FUN_08a52818();
    }
    if ((*(long *)(unaff_x20 + 0xb98) == 0) ||
       (lVar12 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x50), lVar12 == 0)) goto LAB_03fc915c;
    lVar6 = *(long *)(unaff_x20 + 0x810);
    if (*(char *)(lVar12 + 0x60) != '\0') {
      if (lVar6 == 0) goto LAB_03fc915c;
      FUN_08a50fa8(lVar6,1,0);
      if (*(long *)(unaff_x20 + 0x810) == 0) goto LAB_03fc915c;
      lVar6 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x810),0);
      if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
          (lVar12 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x50), lVar12 == 0)) || (lVar6 == 0))
      goto LAB_03fc915c;
      FUN_08a5d494(*(undefined4 *)(lVar12 + 100),*(undefined4 *)(lVar12 + 0x68),
                   *(undefined4 *)(lVar12 + 0x6c),lVar6,0);
      if (*(long *)(unaff_x20 + 0x810) == 0) goto LAB_03fc915c;
      lVar6 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x810),0);
      if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
          (lVar12 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x50), lVar12 == 0)) ||
         (FUN_08a447dc(*(float *)(lVar12 + 0x70) * fVar19,*(float *)(lVar12 + 0x74) * fVar19,
                       *(float *)(lVar12 + 0x78) * fVar19,0), lVar6 == 0)) goto LAB_03fc915c;
      FUN_08a5d814(lVar6,0);
      goto LAB_03fca858;
    }
  }
  if (lVar6 == 0) goto LAB_03fc915c;
  FUN_08a50fa8(lVar6,0,0);
LAB_03fca858:
  if ((*(long *)(unaff_x20 + 0xb98) == 0) || (lVar6 = *(long *)(unaff_x20 + 0x840), lVar6 == 0))
  goto LAB_03fc915c;
  if (*(char *)(*(long *)(unaff_x20 + 0xb98) + 0xe8) == '\0') {
    uVar8 = FUN_08a51028(lVar6,0);
    if ((uVar8 & 1) != 0) {
      lVar6 = *(long *)(unaff_x20 + 0x860);
      if (lVar6 == 0) goto LAB_03fc915c;
      *(undefined1 *)(lVar6 + 0x109) = 0;
      FUN_03f4ccb4(lVar6,0);
      FUN_08a52950();
      if (*(long *)(unaff_x20 + 0x860) == 0) goto LAB_03fc915c;
      FUN_03f4cd48(*(long *)(unaff_x20 + 0x860),0);
      FUN_08a52950();
      if (*(long *)(unaff_x20 + 0x868) == 0) goto LAB_03fc915c;
      FUN_08a50fa8(*(long *)(unaff_x20 + 0x868),0,0);
      if (*(long *)(unaff_x20 + 0x840) == 0) goto LAB_03fc915c;
      FUN_08a50fa8(*(long *)(unaff_x20 + 0x840),0,0);
      if (*(long *)(unaff_x20 + 0x858) == 0) goto LAB_03fc915c;
      FUN_08a50fa8(*(long *)(unaff_x20 + 0x858),0,0);
      if (*(long *)(unaff_x20 + 0x878) == 0) goto LAB_03fc915c;
      uVar8 = FUN_08a51028(*(long *)(unaff_x20 + 0x878),0);
      if ((uVar8 & 1) != 0) {
        if (*(long *)(unaff_x20 + 0x878) == 0) goto LAB_03fc915c;
        FUN_08a50fa8(*(long *)(unaff_x20 + 0x878),0,0);
        if (*(long *)(unaff_x20 + 0x880) == 0) goto LAB_03fc915c;
        FUN_08a50fa8(*(long *)(unaff_x20 + 0x880),0,0);
        if (*(long *)(unaff_x20 + 0x888) == 0) goto LAB_03fc915c;
        FUN_08a50fa8(*(long *)(unaff_x20 + 0x888),0,0);
      }
      if (*(long *)(unaff_x20 + 0x870) == 0) goto LAB_03fc915c;
      FUN_08a50fa8(*(long *)(unaff_x20 + 0x870),0,0);
    }
    goto LAB_03fcacc0;
  }
  FUN_08a50fa8(lVar6,1,0);
  if (*(long *)(unaff_x20 + 0x840) == 0) goto LAB_03fc915c;
  lVar6 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x840),0);
  if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
      (lVar12 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0xf0), lVar12 == 0)) || (lVar6 == 0))
  goto LAB_03fc915c;
  FUN_08a5d494(*(undefined4 *)(lVar12 + 0x18),*(undefined4 *)(lVar12 + 0x1c),
               *(undefined4 *)(lVar12 + 0x20),lVar6,0);
  if (*(long *)(unaff_x20 + 0x840) == 0) goto LAB_03fc915c;
  unaff_x21 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x840),0);
  if ((*(long *)(unaff_x20 + 0xb98) == 0) ||
     (lVar6 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0xf0), lVar6 == 0)) goto LAB_03fc915c;
  param_1 = *(float *)(lVar6 + 0x24);
  param_2 = *(float *)(lVar6 + 0x28);
  param_3 = *(float *)(lVar6 + 0x2c);
  param_4 = 0;
  unaff_s10 = DAT_01914568;
  goto code_r0x03fca8e8;
}


