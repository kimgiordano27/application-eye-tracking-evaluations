/*
FUNCTION_NAME: Best.HTTP.Shared.Streams.BufferSegmentStream$$Flush
ENTRY_POINT: 036c0bc0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Best_HTTP_Shared_Streams_BufferSegmentStream__Flush(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  long *plVar13;
  undefined8 *unaff_x20;
  undefined8 uVar14;
  undefined8 *unaff_x21;
  undefined8 uVar15;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  
  puVar4 = PTR_DAT_0759ea78;
  FUN_036c0380(*(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x58),*(undefined8 *)PTR_DAT_0759ea78,
               *unaff_x28);
  puVar1 = PTR_DAT_0759ea70;
  FUN_036c0380(*(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x60),*(undefined8 *)PTR_DAT_0759ea70,
               *unaff_x28);
  FUN_036c0380(*(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x68),*unaff_x25,*unaff_x28);
  FUN_036c0380(*(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x78),*(undefined8 *)PTR_DAT_075a30a0,
               *unaff_x28);
  FUN_036c0380(*(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x80),*unaff_x21,*unaff_x28);
  puVar2 = PTR_DAT_0759e8e0;
  FUN_036c0380(*(undefined8 *)(*(long *)(*(long *)PTR_DAT_0759e8e0 + 0xb8) + 0x1c8),
               *(undefined8 *)PTR_DAT_075a3ff0,*unaff_x28);
  FUN_036c0380(*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x1d0),
               *(undefined8 *)PTR_DAT_075a3f58,*unaff_x28);
  FUN_036c0380(*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x1d8),
               *(undefined8 *)PTR_DAT_075a3f70,*unaff_x28);
  FUN_036c0380(*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x1e0),
               *(undefined8 *)PTR_DAT_075a4038,*unaff_x28);
  puVar2 = PTR_DAT_075a1008;
  FUN_036c0380(*(undefined8 *)(*(long *)(*(long *)PTR_DAT_075a1008 + 0xb8) + 0x40),*unaff_x20,
               *unaff_x26);
  FUN_036c0380(*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x60),*unaff_x27,*unaff_x26);
  FUN_036c0380(*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x68),*(undefined8 *)puVar4,
               *unaff_x26);
  FUN_036c0380(*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x70),*(undefined8 *)puVar1,
               *unaff_x26);
  FUN_036c0380(*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x78),*unaff_x25,*unaff_x26);
  FUN_036c0380(*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x178),*unaff_x20,
               *(undefined8 *)PTR_DAT_075a2ec8);
  lVar8 = *unaff_x19;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar8 = *unaff_x19;
  }
  puVar5 = PTR_DAT_075a35c8;
  puVar7 = PTR_DAT_0759ea98;
  puVar4 = PTR_DAT_0759ea28;
  FUN_036c0380(*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x80),*unaff_x20,*unaff_x26);
  FUN_036c0380(*(undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x88),*(undefined8 *)PTR_DAT_0759eac8,
               *unaff_x26);
  puVar1 = PTR_DAT_0759ea78;
  FUN_036c0380(*(undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x90),*(undefined8 *)PTR_DAT_0759ea78,
               *unaff_x26);
  FUN_036c0380(*(undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x98),*(undefined8 *)PTR_DAT_0759ea70,
               *unaff_x26);
  FUN_036c0380(*(undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0xa0),*unaff_x25,*unaff_x26);
  FUN_036c0380(*(undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x58),*unaff_x20,*unaff_x28);
  FUN_036c0380(*(undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x60),*(undefined8 *)puVar1,*unaff_x28
              );
  puVar6 = PTR_DAT_075acea0;
  FUN_036c0380(*(undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x68),*unaff_x20,
               *(undefined8 *)PTR_DAT_075acea0);
  FUN_036c0380(*(undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x70),*(undefined8 *)puVar1,
               *(undefined8 *)puVar6);
  puVar1 = PTR_DAT_0759ea18;
  lVar8 = *(long *)PTR_DAT_0759ea18;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar8 = *(long *)puVar1;
  }
  puVar3 = PTR_DAT_0759eaa0;
  puVar6 = PTR_DAT_0759ea88;
  FUN_036c0380(*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x38),*(undefined8 *)puVar7,
               *(undefined8 *)PTR_DAT_075a4348);
  FUN_036c0380(*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x40),*(undefined8 *)puVar7,
               *(undefined8 *)puVar5);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar8 = *(long *)puVar4;
  }
  FUN_036c0380(*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x40),*(undefined8 *)puVar3,
               *(undefined8 *)puVar5);
  FUN_036c0380(*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x48),*(undefined8 *)puVar6,
               *(undefined8 *)puVar5);
  puVar7 = PTR_DAT_075a3b98;
  lVar8 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x170);
  if ((lVar8 != 0) &&
     (plVar13 = *(long **)(*(long *)(*unaff_x22 + 0xb8) + 0x30), plVar13 != (long *)0x0)) {
    lVar10 = *plVar13;
    uVar14 = *(undefined8 *)(lVar8 + 0x10);
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    uVar15 = *(undefined8 *)PTR_DAT_075a2ec8;
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_075a3b98) {
          puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
          goto LAB_036c0fd4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar9 = (undefined8 *)FUN_0322c1e8(plVar13,*(long *)PTR_DAT_075a3b98,5);
LAB_036c0fd4:
    (*(code *)*puVar9)(plVar13,uVar14,uVar15,puVar9[1]);
    lVar8 = *(long *)(*(long *)(*(long *)PTR_DAT_0759e6d8 + 0xb8) + 8);
    if ((lVar8 != 0) &&
       (plVar13 = *(long **)(*(long *)(*unaff_x22 + 0xb8) + 0x30), plVar13 != (long *)0x0)) {
      lVar10 = *plVar13;
      uVar14 = *(undefined8 *)(lVar8 + 0x10);
      uVar15 = *unaff_x28;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar7) {
            puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
            goto LAB_036c1068;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)FUN_0322c1e8(plVar13,*(long *)puVar7,5);
LAB_036c1068:
      (*(code *)*puVar9)(plVar13,uVar14,uVar15,puVar9[1]);
      puVar2 = PTR_DAT_0759ea30;
      lVar8 = *(long *)PTR_DAT_0759ea30;
      plVar13 = *(long **)(*(long *)(*unaff_x22 + 0xb8) + 0x30);
      if (*(int *)(lVar8 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar8 = *(long *)puVar2;
      }
      puVar2 = PTR_DAT_075a0a18;
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x20);
      if ((lVar8 != 0) && (plVar13 != (long *)0x0)) {
        lVar10 = *plVar13;
        uVar14 = *(undefined8 *)(lVar8 + 0x10);
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        uVar15 = *unaff_x28;
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar7) {
              puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
              goto LAB_036c1114;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar9 = (undefined8 *)FUN_0322c1e8(plVar13,*(long *)puVar7,5);
LAB_036c1114:
        (*(code *)*puVar9)(plVar13,uVar14,uVar15,puVar9[1]);
        lVar8 = *(long *)puVar2;
        plVar13 = *(long **)(*(long *)(*unaff_x22 + 0xb8) + 0x30);
        if (*(int *)(lVar8 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          lVar8 = *(long *)puVar2;
        }
        puVar6 = PTR_DAT_075acb10;
        puVar2 = PTR_DAT_0759eab8;
        lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x60);
        if ((lVar8 != 0) && (plVar13 != (long *)0x0)) {
          lVar10 = *plVar13;
          uVar15 = *unaff_x28;
          uVar14 = *(undefined8 *)(lVar8 + 0x10);
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar7) {
                puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
                goto LAB_036c11c0;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar9 = (undefined8 *)FUN_0322c1e8(plVar13,*(long *)puVar7,5);
LAB_036c11c0:
          (*(code *)*puVar9)(plVar13,uVar14,uVar15,puVar9[1]);
          lVar8 = *(long *)puVar6;
          plVar13 = *(long **)(*(long *)(*unaff_x22 + 0xb8) + 0x30);
          if (*(int *)(lVar8 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            lVar8 = *(long *)puVar6;
          }
          if (plVar13 != (long *)0x0) {
            lVar10 = *plVar13;
            uVar14 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x80);
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            uVar15 = *(undefined8 *)PTR_DAT_075acea0;
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar7) {
                  puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
                  goto LAB_036c125c;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar9 = (undefined8 *)FUN_0322c1e8(plVar13,*(long *)puVar7,5);
LAB_036c125c:
            (*(code *)*puVar9)(plVar13,uVar14,uVar15,puVar9[1]);
            lVar8 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
            if ((lVar8 != 0) &&
               (plVar13 = *(long **)(*(long *)(*unaff_x22 + 0xb8) + 0x30), plVar13 != (long *)0x0))
            {
              lVar10 = *plVar13;
              uVar14 = *(undefined8 *)(lVar8 + 0x10);
              uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
              uVar15 = *(undefined8 *)PTR_DAT_075a4348;
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar7) {
                    puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
                    goto LAB_036c12f0;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar9 = (undefined8 *)FUN_0322c1e8(plVar13,*(long *)puVar7,5);
LAB_036c12f0:
              (*(code *)*puVar9)(plVar13,uVar14,uVar15,puVar9[1]);
              lVar8 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
              if ((lVar8 != 0) &&
                 (plVar13 = *(long **)(*(long *)(*unaff_x22 + 0xb8) + 0x30), plVar13 != (long *)0x0)
                 ) {
                lVar10 = *plVar13;
                uVar14 = *(undefined8 *)(lVar8 + 0x10);
                uVar15 = *(undefined8 *)puVar5;
                uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar11 != 0) {
                  piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) == *(long *)puVar7) {
                      puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
                      goto LAB_036c137c;
                    }
                    uVar11 = uVar11 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar11 != 0);
                }
                puVar9 = (undefined8 *)FUN_0322c1e8(plVar13,*(long *)puVar7,5);
LAB_036c137c:
                (*(code *)*puVar9)(plVar13,uVar14,uVar15,puVar9[1]);
                lVar8 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x30);
                if ((lVar8 != 0) &&
                   (plVar13 = *(long **)(*(long *)(*unaff_x22 + 0xb8) + 0x30),
                   plVar13 != (long *)0x0)) {
                  lVar10 = *plVar13;
                  uVar14 = *(undefined8 *)(lVar8 + 0x10);
                  uVar15 = *(undefined8 *)puVar5;
                  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                  if (uVar11 != 0) {
                    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar12 + -2) == *(long *)puVar7) {
                        puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
                        goto Best_HTTP_Shared_Streams_ReadOnlyBufferedStream__Dispose;
                      }
                      uVar11 = uVar11 - 1;
                      piVar12 = piVar12 + 4;
                    } while (uVar11 != 0);
                  }
                  puVar9 = (undefined8 *)FUN_0322c1e8(plVar13,*(long *)puVar7,5);
Best_HTTP_Shared_Streams_ReadOnlyBufferedStream__Dispose:
                  (*(code *)*puVar9)(plVar13,uVar14,uVar15,puVar9[1]);
                  lVar8 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38);
                  if ((lVar8 != 0) &&
                     (plVar13 = *(long **)(*(long *)(*unaff_x22 + 0xb8) + 0x30),
                     plVar13 != (long *)0x0)) {
                    lVar10 = *plVar13;
                    uVar14 = *(undefined8 *)(lVar8 + 0x10);
                    uVar15 = *(undefined8 *)puVar5;
                    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                    if (uVar11 != 0) {
                      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar12 + -2) == *(long *)puVar7) {
                          puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
                          goto LAB_036c1494;
                        }
                        uVar11 = uVar11 - 1;
                        piVar12 = piVar12 + 4;
                      } while (uVar11 != 0);
                    }
                    puVar9 = (undefined8 *)FUN_0322c1e8(plVar13,*(long *)puVar7,5);
LAB_036c1494:
                    (*(code *)*puVar9)(plVar13,uVar14,uVar15,puVar9[1]);
                    puVar3 = PTR_DAT_0759e8e0;
                    plVar13 = *(long **)(*(long *)(*unaff_x22 + 0xb8) + 0x30);
                    if (plVar13 != (long *)0x0) {
                      lVar8 = *plVar13;
                      uVar15 = *(undefined8 *)puVar5;
                      uVar14 = *(undefined8 *)PTR_DAT_075aceb0;
                      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
                      if (uVar11 != 0) {
                        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar12 + -2) == *(long *)puVar7) {
                            puVar9 = (undefined8 *)(lVar8 + (long)(*piVar12 + 5) * 0x10 + 0x138);
                            goto LAB_036c1520;
                          }
                          uVar11 = uVar11 - 1;
                          piVar12 = piVar12 + 4;
                        } while (uVar11 != 0);
                      }
                      puVar9 = (undefined8 *)FUN_0322c1e8(plVar13,*(long *)puVar7,5);
LAB_036c1520:
                      (*(code *)*puVar9)(plVar13,uVar14,uVar15,puVar9[1]);
                      plVar13 = *(long **)(*(long *)(*unaff_x22 + 0xb8) + 0x30);
                      if (plVar13 != (long *)0x0) {
                        lVar8 = *plVar13;
                        uVar14 = *(undefined8 *)PTR_DAT_075acea8;
                        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
                        uVar15 = *(undefined8 *)PTR_DAT_075a4348;
                        if (uVar11 != 0) {
                          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar12 + -2) == *(long *)puVar7) {
                              puVar9 = (undefined8 *)(lVar8 + (long)(*piVar12 + 5) * 0x10 + 0x138);
                              goto LAB_036c15ac;
                            }
                            uVar11 = uVar11 - 1;
                            piVar12 = piVar12 + 4;
                          } while (uVar11 != 0);
                        }
                        puVar9 = (undefined8 *)FUN_0322c1e8(plVar13,*(long *)puVar7,5);
LAB_036c15ac:
                        (*(code *)*puVar9)(plVar13,uVar14,uVar15,puVar9[1]);
                        lVar8 = *(long *)(*(long *)(*(long *)PTR_DAT_0759e6d8 + 0xb8) + 0xe8);
                        if ((lVar8 != 0) &&
                           (plVar13 = *(long **)(*(long *)(*unaff_x22 + 0xb8) + 0x38),
                           plVar13 != (long *)0x0)) {
                          lVar10 = *plVar13;
                          uVar14 = *(undefined8 *)(lVar8 + 0x10);
                          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                          uVar15 = *(undefined8 *)PTR_DAT_075a4018;
                          if (uVar11 != 0) {
                            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar12 + -2) == *(long *)puVar7) {
                                puVar9 = (undefined8 *)
                                         (lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
                                goto LAB_036c1648;
                              }
                              uVar11 = uVar11 - 1;
                              piVar12 = piVar12 + 4;
                            } while (uVar11 != 0);
                          }
                          puVar9 = (undefined8 *)FUN_0322c1e8(plVar13,*(long *)puVar7,5);
LAB_036c1648:
                          (*(code *)*puVar9)(plVar13,uVar14,uVar15,puVar9[1]);
                          lVar8 = *(long *)(*(long *)(*(long *)PTR_DAT_0759e6d8 + 0xb8) + 0xf0);
                          if ((lVar8 != 0) &&
                             (plVar13 = *(long **)(*(long *)(*unaff_x22 + 0xb8) + 0x38),
                             plVar13 != (long *)0x0)) {
                            lVar10 = *plVar13;
                            uVar14 = *(undefined8 *)(lVar8 + 0x10);
                            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                            uVar15 = *(undefined8 *)PTR_DAT_075a3f20;
                            if (uVar11 != 0) {
                              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar12 + -2) == *(long *)puVar7) {
                                  puVar9 = (undefined8 *)
                                           (lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
                                  goto LAB_036c16e4;
                                }
                                uVar11 = uVar11 - 1;
                                piVar12 = piVar12 + 4;
                              } while (uVar11 != 0);
                            }
                            puVar9 = (undefined8 *)FUN_0322c1e8(plVar13,*(long *)puVar7,5);
LAB_036c16e4:
                            (*(code *)*puVar9)(plVar13,uVar14,uVar15,puVar9[1]);
                            lVar8 = *(long *)(*(long *)(*(long *)PTR_DAT_0759e6d8 + 0xb8) + 0xf8);
                            if ((lVar8 != 0) &&
                               (plVar13 = *(long **)(*(long *)(*unaff_x22 + 0xb8) + 0x38),
                               plVar13 != (long *)0x0)) {
                              lVar10 = *plVar13;
                              uVar14 = *(undefined8 *)(lVar8 + 0x10);
                              uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                              uVar15 = *(undefined8 *)PTR_DAT_0759eab0;
                              if (uVar11 != 0) {
                                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar12 + -2) == *(long *)puVar7) {
                                    puVar9 = (undefined8 *)
                                             (lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
                                    goto LAB_036c1780;
                                  }
                                  uVar11 = uVar11 - 1;
                                  piVar12 = piVar12 + 4;
                                } while (uVar11 != 0);
                              }
                              puVar9 = (undefined8 *)FUN_0322c1e8(plVar13,*(long *)puVar7,5);
LAB_036c1780:
                              (*(code *)*puVar9)(plVar13,uVar14,uVar15,puVar9[1]);
                              lVar8 = *(long *)(*(long *)(*(long *)PTR_DAT_0759e930 + 0xb8) + 0x40);
                              if ((lVar8 != 0) &&
                                 (plVar13 = *(long **)(*(long *)(*unaff_x22 + 0xb8) + 0x38),
                                 plVar13 != (long *)0x0)) {
                                lVar10 = *plVar13;
                                uVar14 = *(undefined8 *)(lVar8 + 0x10);
                                uVar15 = *unaff_x20;
                                uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                                if (uVar11 != 0) {
                                  piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar12 + -2) == *(long *)puVar7) {
                                      puVar9 = (undefined8 *)
                                               (lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
                                      goto LAB_036c1814;
                                    }
                                    uVar11 = uVar11 - 1;
                                    piVar12 = piVar12 + 4;
                                  } while (uVar11 != 0);
                                }
                                puVar9 = (undefined8 *)FUN_0322c1e8(plVar13,*(long *)puVar7,5);
LAB_036c1814:
                                (*(code *)*puVar9)(plVar13,uVar14,uVar15,puVar9[1]);
                                lVar8 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28);
                                if ((lVar8 != 0) &&
                                   (plVar13 = *(long **)(*(long *)(*unaff_x22 + 0xb8) + 0x38),
                                   plVar13 != (long *)0x0)) {
                                  lVar10 = *plVar13;
                                  uVar14 = *(undefined8 *)(lVar8 + 0x10);
                                  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                                  uVar15 = *(undefined8 *)PTR_DAT_0759eac8;
                                  if (uVar11 != 0) {
                                    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar12 + -2) == *(long *)puVar7) {
                                        puVar9 = (undefined8 *)
                                                 (lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
                                        goto LAB_036c18a8;
                                      }
                                      uVar11 = uVar11 - 1;
                                      piVar12 = piVar12 + 4;
                                    } while (uVar11 != 0);
                                  }
                                  puVar9 = (undefined8 *)FUN_0322c1e8(plVar13,*(long *)puVar7,5);
LAB_036c18a8:
                                  (*(code *)*puVar9)(plVar13,uVar14,uVar15,puVar9[1]);
                                  lVar8 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
                                  if ((lVar8 != 0) &&
                                     (plVar13 = *(long **)(*(long *)(*unaff_x22 + 0xb8) + 0x38),
                                     plVar13 != (long *)0x0)) {
                                    lVar10 = *plVar13;
                                    uVar14 = *(undefined8 *)(lVar8 + 0x10);
                                    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                                    uVar15 = *(undefined8 *)PTR_DAT_0759ea78;
                                    if (uVar11 != 0) {
                                      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                                      do {
                                        if (*(long *)(piVar12 + -2) == *(long *)puVar7) {
                                          puVar9 = (undefined8 *)
                                                   (lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
                                          goto LAB_036c193c;
                                        }
                                        uVar11 = uVar11 - 1;
                                        piVar12 = piVar12 + 4;
                                      } while (uVar11 != 0);
                                    }
                                    puVar9 = (undefined8 *)FUN_0322c1e8(plVar13,*(long *)puVar7,5);
LAB_036c193c:
                                    (*(code *)*puVar9)(plVar13,uVar14,uVar15,puVar9[1]);
                                    lVar8 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
                                    if ((lVar8 != 0) &&
                                       (plVar13 = *(long **)(*(long *)(*unaff_x22 + 0xb8) + 0x38),
                                       plVar13 != (long *)0x0)) {
                                      lVar10 = *plVar13;
                                      uVar14 = *(undefined8 *)(lVar8 + 0x10);
                                      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                                      uVar15 = *(undefined8 *)PTR_DAT_0759ea70;
                                      if (uVar11 != 0) {
                                        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar12 + -2) == *(long *)puVar7) {
                                            puVar9 = (undefined8 *)
                                                     (lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
                                            goto LAB_036c19d0;
                                          }
                                          uVar11 = uVar11 - 1;
                                          piVar12 = piVar12 + 4;
                                        } while (uVar11 != 0);
                                      }
                                      puVar9 = (undefined8 *)FUN_0322c1e8(plVar13,*(long *)puVar7,5)
                                      ;
LAB_036c19d0:
                                      (*(code *)*puVar9)(plVar13,uVar14,uVar15,puVar9[1]);
                                      lVar8 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
                                      if ((lVar8 != 0) &&
                                         (plVar13 = *(long **)(*(long *)(*unaff_x22 + 0xb8) + 0x38),
                                         plVar13 != (long *)0x0)) {
                                        lVar10 = *plVar13;
                                        uVar14 = *(undefined8 *)(lVar8 + 0x10);
                                        uVar15 = *(undefined8 *)puVar2;
                                        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                                        if (uVar11 != 0) {
                                          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                                          do {
                                            if (*(long *)(piVar12 + -2) == *(long *)puVar7) {
                                              puVar9 = (undefined8 *)
                                                       (lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138
                                                       );
                                              goto LAB_036c1a5c;
                                            }
                                            uVar11 = uVar11 - 1;
                                            piVar12 = piVar12 + 4;
                                          } while (uVar11 != 0);
                                        }
                                        puVar9 = (undefined8 *)
                                                 FUN_0322c1e8(plVar13,*(long *)puVar7,5);
LAB_036c1a5c:
                                        (*(code *)*puVar9)(plVar13,uVar14,uVar15,puVar9[1]);
                                        lVar8 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30);
                                        if ((lVar8 != 0) &&
                                           (plVar13 = *(long **)(*(long *)(*unaff_x22 + 0xb8) + 0x38
                                                                ), plVar13 != (long *)0x0)) {
                                          lVar10 = *plVar13;
                                          uVar14 = *(undefined8 *)(lVar8 + 0x10);
                                          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                                          uVar15 = *(undefined8 *)PTR_DAT_075a30a0;
                                          if (uVar11 != 0) {
                                            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                                            do {
                                              if (*(long *)(piVar12 + -2) == *(long *)puVar7) {
                                                puVar9 = (undefined8 *)
                                                         (lVar10 + (long)(*piVar12 + 5) * 0x10 +
                                                         0x138);
                                                goto LAB_036c1af0;
                                              }
                                              uVar11 = uVar11 - 1;
                                              piVar12 = piVar12 + 4;
                                            } while (uVar11 != 0);
                                          }
                                          puVar9 = (undefined8 *)
                                                   FUN_0322c1e8(plVar13,*(long *)puVar7,5);
LAB_036c1af0:
                                          (*(code *)*puVar9)(plVar13,uVar14,uVar15,puVar9[1]);
                                          lVar8 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38
                                                           );
                                          if (lVar8 != 0) {
                                            plVar13 = *(long **)(*(long *)(*unaff_x22 + 0xb8) + 0x38
                                                                );
                                            if (plVar13 != (long *)0x0) {
                                              lVar10 = *plVar13;
                                              uVar14 = *(undefined8 *)(lVar8 + 0x10);
                                              uVar15 = *(undefined8 *)PTR_DAT_075a3098;
                                              uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                                              if (uVar11 != 0) {
                                                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                                                do {
                                                  if (*(long *)(piVar12 + -2) == *(long *)puVar7) {
                                                    puVar9 = (undefined8 *)
                                                             (lVar10 + (long)(*piVar12 + 5) * 0x10 +
                                                             0x138);
                                                    goto LAB_036c1b84;
                                                  }
                                                  uVar11 = uVar11 - 1;
                                                  piVar12 = piVar12 + 4;
                                                } while (uVar11 != 0);
                                              }
                                              puVar9 = (undefined8 *)
                                                       FUN_0322c1e8(plVar13,*(long *)puVar7,5);
LAB_036c1b84:
                                              (*(code *)*puVar9)(plVar13,uVar14,uVar15,puVar9[1]);
                                              lVar8 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) +
                                                               0x40);
                                              if ((lVar8 != 0) &&
                                                 (plVar13 = *(long **)(*(long *)(*unaff_x22 + 0xb8)
                                                                      + 0x38),
                                                 plVar13 != (long *)0x0)) {
                                                lVar10 = *plVar13;
                                                uVar14 = *(undefined8 *)(lVar8 + 0x10);
                                                uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                                                uVar15 = *(undefined8 *)PTR_DAT_075a3ff0;
                                                if (uVar11 != 0) {
                                                  piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                                                  do {
                                                    if (*(long *)(piVar12 + -2) == *(long *)puVar7)
                                                    {
                                                      puVar9 = (undefined8 *)
                                                               (lVar10 + (long)(*piVar12 + 5) * 0x10
                                                               + 0x138);
                                                      goto LAB_036c1c18;
                                                    }
                                                    uVar11 = uVar11 - 1;
                                                    piVar12 = piVar12 + 4;
                                                  } while (uVar11 != 0);
                                                }
                                                puVar9 = (undefined8 *)
                                                         FUN_0322c1e8(plVar13,*(long *)puVar7,5);
LAB_036c1c18:
                                                (*(code *)*puVar9)(plVar13,uVar14,uVar15,puVar9[1]);
                                                lVar8 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8)
                                                                 + 0x48);
                                                if ((lVar8 != 0) &&
                                                   (plVar13 = *(long **)(*(long *)(*unaff_x22 + 0xb8
                                                                                  ) + 0x38),
                                                   plVar13 != (long *)0x0)) {
                                                  lVar10 = *plVar13;
                                                  uVar14 = *(undefined8 *)(lVar8 + 0x10);
                                                  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                                                  uVar15 = *(undefined8 *)PTR_DAT_075a3f58;
                                                  if (uVar11 != 0) {
                                                    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                                                    do {
                                                      if (*(long *)(piVar12 + -2) == *(long *)puVar7
                                                         ) {
                                                        puVar9 = (undefined8 *)
                                                                 (lVar10 + (long)(*piVar12 + 5) *
                                                                           0x10 + 0x138);
                                                        goto LAB_036c1cac;
                                                      }
                                                      uVar11 = uVar11 - 1;
                                                      piVar12 = piVar12 + 4;
                                                    } while (uVar11 != 0);
                                                  }
                                                  puVar9 = (undefined8 *)
                                                           FUN_0322c1e8(plVar13,*(long *)puVar7,5);
LAB_036c1cac:
                                                  (*(code *)*puVar9)(plVar13,uVar14,uVar15,puVar9[1]
                                                                    );
                                                  lVar8 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8
                                                                             ) + 0x50);
                                                  if ((lVar8 != 0) &&
                                                     (plVar13 = *(long **)(*(long *)(*unaff_x22 +
                                                                                    0xb8) + 0x38),
                                                     plVar13 != (long *)0x0)) {
                                                    lVar10 = *plVar13;
                                                    uVar14 = *(undefined8 *)(lVar8 + 0x10);
                                                    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                                                    uVar15 = *(undefined8 *)PTR_DAT_075a3f70;
                                                    if (uVar11 != 0) {
                                                      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8
                                                                       );
                                                      do {
                                                        if (*(long *)(piVar12 + -2) ==
                                                            *(long *)puVar7) {
                                                          puVar9 = (undefined8 *)
                                                                   (lVar10 + (long)(*piVar12 + 5) *
                                                                             0x10 + 0x138);
                                                          goto LAB_036c1d40;
                                                        }
                                                        uVar11 = uVar11 - 1;
                                                        piVar12 = piVar12 + 4;
                                                      } while (uVar11 != 0);
                                                    }
                                                    puVar9 = (undefined8 *)
                                                             FUN_0322c1e8(plVar13,*(long *)puVar7,5)
                                                    ;
LAB_036c1d40:
                                                    (*(code *)*puVar9)(plVar13,uVar14,uVar15,
                                                                       puVar9[1]);
                                                    puVar5 = PTR_DAT_0759ea30;
                                                    lVar8 = *(long *)(*(long *)(*(long *)puVar3 +
                                                                               0xb8) + 0x58);
                                                    if (lVar8 != 0) {
                                                      plVar13 = *(long **)(*(long *)(*unaff_x22 +
                                                                                    0xb8) + 0x38);
                                                      if (plVar13 != (long *)0x0) {
                                                        lVar10 = *plVar13;
                                                        uVar14 = *(undefined8 *)(lVar8 + 0x10);
                                                        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                                                        uVar15 = *(undefined8 *)PTR_DAT_075a4038;
                                                        if (uVar11 != 0) {
                                                          piVar12 = (int *)(*(long *)(lVar10 + 0xb0)
                                                                           + 8);
                                                          do {
                                                            if (*(long *)(piVar12 + -2) ==
                                                                *(long *)puVar7) {
                                                              puVar9 = (undefined8 *)
                                                                       (lVar10 + (long)(*piVar12 + 5
                                                                                       ) * 0x10 +
                                                                       0x138);
                                                              goto LAB_036c1ddc;
                                                            }
                                                            uVar11 = uVar11 - 1;
                                                            piVar12 = piVar12 + 4;
                                                          } while (uVar11 != 0);
                                                        }
                                                        puVar9 = (undefined8 *)
                                                                 FUN_0322c1e8(plVar13,*(long *)
                                                  puVar7,5);
LAB_036c1ddc:
                                                  (*(code *)*puVar9)(plVar13,uVar14,uVar15,puVar9[1]
                                                                    );
                                                  lVar8 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0x10);
                                                  if ((lVar8 != 0) &&
                                                     (plVar13 = *(long **)(*(long *)(*unaff_x22 +
                                                                                    0xb8) + 0x38),
                                                     plVar13 != (long *)0x0)) {
                                                    lVar10 = *plVar13;
                                                    uVar14 = *(undefined8 *)(lVar8 + 0x10);
                                                    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                                                    uVar15 = *(undefined8 *)PTR_DAT_0759eac0;
                                                    if (uVar11 != 0) {
                                                      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8
                                                                       );
                                                      do {
                                                        if (*(long *)(piVar12 + -2) ==
                                                            *(long *)puVar7) {
                                                          puVar9 = (undefined8 *)
                                                                   (lVar10 + (long)(*piVar12 + 5) *
                                                                             0x10 + 0x138);
                                                          goto LAB_036c1e70;
                                                        }
                                                        uVar11 = uVar11 - 1;
                                                        piVar12 = piVar12 + 4;
                                                      } while (uVar11 != 0);
                                                    }
                                                    puVar9 = (undefined8 *)
                                                             FUN_0322c1e8(plVar13,*(long *)puVar7,5)
                                                    ;
LAB_036c1e70:
                                                    (*(code *)*puVar9)(plVar13,uVar14,uVar15,
                                                                       puVar9[1]);
                                                    lVar8 = *(long *)(*(long *)(*(long *)puVar5 +
                                                                               0xb8) + 8);
                                                    if ((lVar8 != 0) &&
                                                       (plVar13 = *(long **)(*(long *)(*unaff_x22 +
                                                                                      0xb8) + 0x38),
                                                       plVar13 != (long *)0x0)) {
                                                      lVar10 = *plVar13;
                                                      uVar14 = *(undefined8 *)(lVar8 + 0x10);
                                                      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                                                      uVar15 = *(undefined8 *)PTR_DAT_0759ead0;
                                                      if (uVar11 != 0) {
                                                        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) +
                                                                         8);
                                                        do {
                                                          if (*(long *)(piVar12 + -2) ==
                                                              *(long *)puVar7) {
                                                            puVar9 = (undefined8 *)
                                                                     (lVar10 + (long)(*piVar12 + 5)
                                                                               * 0x10 + 0x138);
                                                            goto LAB_036c1f04;
                                                          }
                                                          uVar11 = uVar11 - 1;
                                                          piVar12 = piVar12 + 4;
                                                        } while (uVar11 != 0);
                                                      }
                                                      puVar9 = (undefined8 *)
                                                               FUN_0322c1e8(plVar13,*(long *)puVar7,
                                                                            5);
LAB_036c1f04:
                                                      (*(code *)*puVar9)(plVar13,uVar14,uVar15,
                                                                         puVar9[1]);
                                                      lVar8 = *(long *)(*(long *)(*(long *)puVar5 +
                                                                                 0xb8) + 0x18);
                                                      if ((lVar8 != 0) &&
                                                         (plVar13 = *(long **)(*(long *)(*unaff_x22
                                                                                        + 0xb8) +
                                                                              0x38),
                                                         plVar13 != (long *)0x0)) {
                                                        lVar10 = *plVar13;
                                                        uVar14 = *(undefined8 *)(lVar8 + 0x10);
                                                        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                                                        uVar15 = *(undefined8 *)PTR_DAT_0759eaa8;
                                                        if (uVar11 != 0) {
                                                          piVar12 = (int *)(*(long *)(lVar10 + 0xb0)
                                                                           + 8);
                                                          do {
                                                            if (*(long *)(piVar12 + -2) ==
                                                                *(long *)puVar7) {
                                                              puVar9 = (undefined8 *)
                                                                       (lVar10 + (long)(*piVar12 + 5
                                                                                       ) * 0x10 +
                                                                       0x138);
                                                              goto LAB_036c1f98;
                                                            }
                                                            uVar11 = uVar11 - 1;
                                                            piVar12 = piVar12 + 4;
                                                          } while (uVar11 != 0);
                                                        }
                                                        puVar9 = (undefined8 *)
                                                                 FUN_0322c1e8(plVar13,*(long *)
                                                  puVar7,5);
LAB_036c1f98:
                                                  (*(code *)*puVar9)(plVar13,uVar14,uVar15,puVar9[1]
                                                                    );
                                                  if (**(long **)(*(long *)puVar1 + 0xb8) != 0) {
                                                    plVar13 = *(long **)(*(long *)(*unaff_x22 + 0xb8
                                                                                  ) + 0x38);
                                                    if (plVar13 != (long *)0x0) {
                                                      lVar8 = *plVar13;
                                                      uVar14 = *(undefined8 *)
                                                                (**(long **)(*(long *)puVar1 + 0xb8)
                                                                + 0x10);
                                                      uVar15 = *(undefined8 *)PTR_DAT_0759ea98;
                                                      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
                                                      if (uVar11 != 0) {
                                                        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) +
                                                                         8);
                                                        do {
                                                          if (*(long *)(piVar12 + -2) ==
                                                              *(long *)puVar7) {
                                                            puVar9 = (undefined8 *)
                                                                     (lVar8 + (long)(*piVar12 + 5) *
                                                                              0x10 + 0x138);
                                                            goto LAB_036c202c;
                                                          }
                                                          uVar11 = uVar11 - 1;
                                                          piVar12 = piVar12 + 4;
                                                        } while (uVar11 != 0);
                                                      }
                                                      puVar9 = (undefined8 *)
                                                               FUN_0322c1e8(plVar13,*(long *)puVar7,
                                                                            5);
LAB_036c202c:
                                                      (*(code *)*puVar9)(plVar13,uVar14,uVar15,
                                                                         puVar9[1]);
                                                      plVar13 = *(long **)(*(long *)(*unaff_x22 +
                                                                                    0xb8) + 0x38);
                                                      if (plVar13 != (long *)0x0) {
                                                        lVar8 = *plVar13;
                                                        uVar14 = *(undefined8 *)PTR_DAT_075aceb8;
                                                        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
                                                        uVar15 = *(undefined8 *)PTR_DAT_0759ea98;
                                                        if (uVar11 != 0) {
                                                          piVar12 = (int *)(*(long *)(lVar8 + 0xb0)
                                                                           + 8);
                                                          do {
                                                            if (*(long *)(piVar12 + -2) ==
                                                                *(long *)puVar7) {
                                                              puVar9 = (undefined8 *)
                                                                       (lVar8 + (long)(*piVar12 + 5)
                                                                                * 0x10 + 0x138);
                                                              goto LAB_036c20b8;
                                                            }
                                                            uVar11 = uVar11 - 1;
                                                            piVar12 = piVar12 + 4;
                                                          } while (uVar11 != 0);
                                                        }
                                                        puVar9 = (undefined8 *)
                                                                 FUN_0322c1e8(plVar13,*(long *)
                                                  puVar7,5);
LAB_036c20b8:
                                                  (*(code *)*puVar9)(plVar13,uVar14,uVar15,puVar9[1]
                                                                    );
                                                  lVar8 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8
                                                                             ) + 0x10);
                                                  if ((lVar8 != 0) &&
                                                     (plVar13 = *(long **)(*(long *)(*unaff_x22 +
                                                                                    0xb8) + 0x38),
                                                     plVar13 != (long *)0x0)) {
                                                    lVar10 = *plVar13;
                                                    uVar14 = *(undefined8 *)(lVar8 + 0x10);
                                                    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                                                    uVar15 = *(undefined8 *)PTR_DAT_0759eaa0;
                                                    if (uVar11 != 0) {
                                                      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8
                                                                       );
                                                      do {
                                                        if (*(long *)(piVar12 + -2) ==
                                                            *(long *)puVar7) {
                                                          puVar9 = (undefined8 *)
                                                                   (lVar10 + (long)(*piVar12 + 5) *
                                                                             0x10 + 0x138);
                                                          goto LAB_036c214c;
                                                        }
                                                        uVar11 = uVar11 - 1;
                                                        piVar12 = piVar12 + 4;
                                                      } while (uVar11 != 0);
                                                    }
                                                    puVar9 = (undefined8 *)
                                                             FUN_0322c1e8(plVar13,*(long *)puVar7,5)
                                                    ;
LAB_036c214c:
                                                    (*(code *)*puVar9)(plVar13,uVar14,uVar15,
                                                                       puVar9[1]);
                                                    puVar1 = PTR_DAT_0759bc20;
                                                    lVar8 = *(long *)(*(long *)(*(long *)puVar4 +
                                                                               0xb8) + 0x18);
                                                    if ((lVar8 != 0) &&
                                                       (plVar13 = *(long **)(*(long *)(*unaff_x22 +
                                                                                      0xb8) + 0x38),
                                                       plVar13 != (long *)0x0)) {
                                                      lVar10 = *plVar13;
                                                      uVar14 = *(undefined8 *)(lVar8 + 0x10);
                                                      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                                                      uVar15 = *(undefined8 *)PTR_DAT_0759ea88;
                                                      if (uVar11 != 0) {
                                                        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) +
                                                                         8);
                                                        do {
                                                          if (*(long *)(piVar12 + -2) ==
                                                              *(long *)puVar7) {
                                                            puVar9 = (undefined8 *)
                                                                     (lVar10 + (long)(*piVar12 + 5)
                                                                               * 0x10 + 0x138);
                                                            goto LAB_036c21e8;
                                                          }
                                                          uVar11 = uVar11 - 1;
                                                          piVar12 = piVar12 + 4;
                                                        } while (uVar11 != 0);
                                                      }
                                                      puVar9 = (undefined8 *)
                                                               FUN_0322c1e8(plVar13,*(long *)puVar7,
                                                                            5);
LAB_036c21e8:
                                                      (*(code *)*puVar9)(plVar13,uVar14,uVar15,
                                                                         puVar9[1]);
                                                      plVar13 = *(long **)(*(long *)(*unaff_x22 +
                                                                                    0xb8) + 0x40);
                                                      lVar8 = FUN_031f21dc(*(undefined8 *)puVar1,1);
                                                      if (lVar8 != 0) {
                                                        if (*(int *)(lVar8 + 0x18) == 0) {
LAB_036c28e0:
                    /* WARNING: Subroutine does not return */
                                                          FUN_031f2398();
                                                        }
                                                        *(undefined8 *)(lVar8 + 0x20) =
                                                             *(undefined8 *)PTR_DAT_0759e8e8;
                                                        thunk_FUN_0329bf60();
                                                        puVar4 = PTR_DAT_075ace98;
                                                        if (plVar13 != (long *)0x0) {
                                                          lVar10 = *plVar13;
                                                          uVar14 = *unaff_x20;
                                                          uVar11 = (ulong)*(ushort *)
                                                                           (lVar10 + 0x12e);
                                                          if (uVar11 != 0) {
                                                            piVar12 = (int *)(*(long *)(lVar10 + 
                                                  0xb0) + 8);
                                                  do {
                                                    if (*(long *)(piVar12 + -2) ==
                                                        *(long *)PTR_DAT_075ace98) {
                                                      puVar9 = (undefined8 *)
                                                               (lVar10 + (long)(*piVar12 + 5) * 0x10
                                                               + 0x138);
                                                      goto LAB_036c229c;
                                                    }
                                                    uVar11 = uVar11 - 1;
                                                    piVar12 = piVar12 + 4;
                                                  } while (uVar11 != 0);
                                                  }
                                                  puVar9 = (undefined8 *)
                                                           FUN_0322c1e8(plVar13,*(long *)
                                                  PTR_DAT_075ace98,5);
LAB_036c229c:
                                                  (*(code *)*puVar9)(plVar13,uVar14,lVar8,puVar9[1])
                                                  ;
                                                  plVar13 = *(long **)(*(long *)(*unaff_x22 + 0xb8)
                                                                      + 0x40);
                                                  lVar8 = FUN_031f21dc(*(undefined8 *)puVar1,1);
                                                  if (lVar8 != 0) {
                                                    if (*(int *)(lVar8 + 0x18) == 0)
                                                    goto LAB_036c28e0;
                                                    *(undefined8 *)(lVar8 + 0x20) =
                                                         *(undefined8 *)PTR_DAT_075a4078;
                                                    thunk_FUN_0329bf60();
                                                    if (plVar13 != (long *)0x0) {
                                                      lVar10 = *plVar13;
                                                      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                                                      uVar14 = *(undefined8 *)PTR_DAT_0759eac8;
                                                      if (uVar11 != 0) {
                                                        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) +
                                                                         8);
                                                        do {
                                                          if (*(long *)(piVar12 + -2) ==
                                                              *(long *)puVar4) {
                                                            puVar9 = (undefined8 *)
                                                                     (lVar10 + (long)(*piVar12 + 5)
                                                                               * 0x10 + 0x138);
                                                            goto LAB_036c2350;
                                                          }
                                                          uVar11 = uVar11 - 1;
                                                          piVar12 = piVar12 + 4;
                                                        } while (uVar11 != 0);
                                                      }
                                                      puVar9 = (undefined8 *)
                                                               FUN_0322c1e8(plVar13,*(long *)puVar4,
                                                                            5);
LAB_036c2350:
                                                      (*(code *)*puVar9)(plVar13,uVar14,lVar8,
                                                                         puVar9[1]);
                                                      plVar13 = *(long **)(*(long *)(*unaff_x22 +
                                                                                    0xb8) + 0x40);
                                                      lVar8 = FUN_031f21dc(*(undefined8 *)puVar1,1);
                                                      if (lVar8 != 0) {
                                                        if (*(int *)(lVar8 + 0x18) == 0)
                                                        goto LAB_036c28e0;
                                                        *(undefined8 *)(lVar8 + 0x20) =
                                                             *(undefined8 *)PTR_DAT_0759e8f0;
                                                        thunk_FUN_0329bf60();
                                                        if (plVar13 != (long *)0x0) {
                                                          lVar10 = *plVar13;
                                                          uVar11 = (ulong)*(ushort *)
                                                                           (lVar10 + 0x12e);
                                                          uVar14 = *(undefined8 *)PTR_DAT_0759ea78;
                                                          if (uVar11 != 0) {
                                                            piVar12 = (int *)(*(long *)(lVar10 + 
                                                  0xb0) + 8);
                                                  do {
                                                    if (*(long *)(piVar12 + -2) == *(long *)puVar4)
                                                    {
                                                      puVar9 = (undefined8 *)
                                                               (lVar10 + (long)(*piVar12 + 5) * 0x10
                                                               + 0x138);
                                                      goto LAB_036c2404;
                                                    }
                                                    uVar11 = uVar11 - 1;
                                                    piVar12 = piVar12 + 4;
                                                  } while (uVar11 != 0);
                                                  }
                                                  puVar9 = (undefined8 *)
                                                           FUN_0322c1e8(plVar13,*(long *)puVar4,5);
LAB_036c2404:
                                                  (*(code *)*puVar9)(plVar13,uVar14,lVar8,puVar9[1])
                                                  ;
                                                  plVar13 = *(long **)(*(long *)(*unaff_x22 + 0xb8)
                                                                      + 0x40);
                                                  lVar8 = FUN_031f21dc(*(undefined8 *)puVar1,1);
                                                  if (lVar8 != 0) {
                                                    if (*(int *)(lVar8 + 0x18) == 0)
                                                    goto LAB_036c28e0;
                                                    *(undefined8 *)(lVar8 + 0x20) =
                                                         *(undefined8 *)PTR_DAT_075a3f28;
                                                    thunk_FUN_0329bf60();
                                                    if (plVar13 != (long *)0x0) {
                                                      lVar10 = *plVar13;
                                                      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                                                      uVar14 = *(undefined8 *)PTR_DAT_0759ea70;
                                                      if (uVar11 != 0) {
                                                        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) +
                                                                         8);
                                                        do {
                                                          if (*(long *)(piVar12 + -2) ==
                                                              *(long *)puVar4) {
                                                            puVar9 = (undefined8 *)
                                                                     (lVar10 + (long)(*piVar12 + 5)
                                                                               * 0x10 + 0x138);
                                                            goto LAB_036c24b8;
                                                          }
                                                          uVar11 = uVar11 - 1;
                                                          piVar12 = piVar12 + 4;
                                                        } while (uVar11 != 0);
                                                      }
                                                      puVar9 = (undefined8 *)
                                                               FUN_0322c1e8(plVar13,*(long *)puVar4,
                                                                            5);
LAB_036c24b8:
                                                      (*(code *)*puVar9)(plVar13,uVar14,lVar8,
                                                                         puVar9[1]);
                                                      plVar13 = *(long **)(*(long *)(*unaff_x22 +
                                                                                    0xb8) + 0x40);
                                                      lVar8 = FUN_031f21dc(*(undefined8 *)puVar1,1);
                                                      if (lVar8 != 0) {
                                                        if (*(int *)(lVar8 + 0x18) == 0)
                                                        goto LAB_036c28e0;
                                                        *(undefined8 *)(lVar8 + 0x20) =
                                                             *(undefined8 *)PTR_DAT_075a3fd0;
                                                        thunk_FUN_0329bf60();
                                                        if (plVar13 != (long *)0x0) {
                                                          lVar10 = *plVar13;
                                                          uVar14 = *(undefined8 *)puVar2;
                                                          uVar11 = (ulong)*(ushort *)
                                                                           (lVar10 + 0x12e);
                                                          if (uVar11 != 0) {
                                                            piVar12 = (int *)(*(long *)(lVar10 + 
                                                  0xb0) + 8);
                                                  do {
                                                    if (*(long *)(piVar12 + -2) == *(long *)puVar4)
                                                    {
                                                      puVar9 = (undefined8 *)
                                                               (lVar10 + (long)(*piVar12 + 5) * 0x10
                                                               + 0x138);
                                                      goto 
                                                  Best_HTTP_Shared_Streams_WriteOnlyBufferedStream__Seek
                                                  ;
                                                  }
                                                  uVar11 = uVar11 - 1;
                                                  piVar12 = piVar12 + 4;
                                                  } while (uVar11 != 0);
                                                  }
                                                  puVar9 = (undefined8 *)
                                                           FUN_0322c1e8(plVar13,*(long *)puVar4,5);
Best_HTTP_Shared_Streams_WriteOnlyBufferedStream__Seek:
                                                  (*(code *)*puVar9)(plVar13,uVar14,lVar8,puVar9[1])
                                                  ;
                                                  puVar2 = PTR_DAT_075a1f38;
                                                  lVar8 = *(long *)(*(long *)(*unaff_x22 + 0xb8) +
                                                                   0x48);
                                                  if (lVar8 != 0) {
                                                                                                        
                                                  System_Array_InternalEnumerator<ConcurrentQueue_Segment_Slot<BufferSegment>>__System_Collections_IEnumerator_get_Current
                                                            (lVar8,*(undefined8 *)
                                                                    (*(long *)(*(long *)puVar6 +
                                                                              0xb8) + 0x70),
                                                             *(undefined8 *)PTR_DAT_075a1f38);
                                                  lVar8 = *(long *)(*(long *)(*unaff_x22 + 0xb8) +
                                                                   0x48);
                                                  if (lVar8 != 0) {
                                                                                                        
                                                  System_Array_InternalEnumerator<ConcurrentQueue_Segment_Slot<BufferSegment>>__System_Collections_IEnumerator_get_Current
                                                            (lVar8,*(undefined8 *)
                                                                    (*(long *)(*unaff_x22 + 0xb8) +
                                                                    8),*(undefined8 *)puVar2);
                                                  lVar8 = *(long *)(*(long *)(*unaff_x22 + 0xb8) +
                                                                   0x48);
                                                  if (lVar8 != 0) {
                                                                                                        
                                                  System_Array_InternalEnumerator<ConcurrentQueue_Segment_Slot<BufferSegment>>__System_Collections_IEnumerator_get_Current
                                                            (lVar8,*(undefined8 *)
                                                                    (*(long *)(*unaff_x22 + 0xb8) +
                                                                    0x10),*(undefined8 *)puVar2);
                                                  lVar8 = *(long *)(*(long *)(*unaff_x22 + 0xb8) +
                                                                   0x48);
                                                  if (lVar8 != 0) {
                                                                                                        
                                                  System_Array_InternalEnumerator<ConcurrentQueue_Segment_Slot<BufferSegment>>__System_Collections_IEnumerator_get_Current
                                                            (lVar8,*(undefined8 *)
                                                                    (*(long *)(*unaff_x22 + 0xb8) +
                                                                    0x18),*(undefined8 *)puVar2);
                                                  lVar8 = *(long *)(*(long *)(*unaff_x22 + 0xb8) +
                                                                   0x48);
                                                  if (lVar8 != 0) {
                                                                                                        
                                                  System_Array_InternalEnumerator<ConcurrentQueue_Segment_Slot<BufferSegment>>__System_Collections_IEnumerator_get_Current
                                                            (lVar8,*(undefined8 *)
                                                                    (*(long *)(*unaff_x22 + 0xb8) +
                                                                    0x20),*(undefined8 *)puVar2);
                                                  lVar8 = *(long *)(*(long *)(*unaff_x22 + 0xb8) +
                                                                   0x48);
                                                  if (lVar8 != 0) {
                                                                                                        
                                                  System_Array_InternalEnumerator<ConcurrentQueue_Segment_Slot<BufferSegment>>__System_Collections_IEnumerator_get_Current
                                                            (lVar8,*(undefined8 *)
                                                                    (*(long *)(*unaff_x22 + 0xb8) +
                                                                    0x28),*(undefined8 *)puVar2);
                                                  plVar13 = *(long **)(*(long *)(*unaff_x22 + 0xb8)
                                                                      + 0x50);
                                                  if (plVar13 != (long *)0x0) {
                                                    lVar8 = *plVar13;
                                                    uVar14 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 8);
                                                    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
                                                    uVar15 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar6 + 0xb8) + 8
                                                              );
                                                    if (uVar11 != 0) {
                                                      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8)
                                                      ;
                                                      do {
                                                        if (*(long *)(piVar12 + -2) ==
                                                            *(long *)puVar7) {
                                                          puVar9 = (undefined8 *)
                                                                   (lVar8 + (long)(*piVar12 + 5) *
                                                                            0x10 + 0x138);
                                                          goto LAB_036c26a0;
                                                        }
                                                        uVar11 = uVar11 - 1;
                                                        piVar12 = piVar12 + 4;
                                                      } while (uVar11 != 0);
                                                    }
                                                    puVar9 = (undefined8 *)
                                                             FUN_0322c1e8(plVar13,*(long *)puVar7,5)
                                                    ;
LAB_036c26a0:
                                                    (*(code *)*puVar9)(plVar13,uVar15,uVar14,
                                                                       puVar9[1]);
                                                    plVar13 = *(long **)(*(long *)(*unaff_x22 + 0xb8
                                                                                  ) + 0x50);
                                                    if (plVar13 != (long *)0x0) {
                                                      lVar8 = *plVar13;
                                                      uVar14 = *(undefined8 *)
                                                                (*(long *)(*unaff_x22 + 0xb8) + 0x10
                                                                );
                                                      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
                                                      uVar15 = *(undefined8 *)
                                                                (*(long *)(*(long *)puVar6 + 0xb8) +
                                                                0x10);
                                                      if (uVar11 != 0) {
                                                        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) +
                                                                         8);
                                                        do {
                                                          if (*(long *)(piVar12 + -2) ==
                                                              *(long *)puVar7) {
                                                            puVar9 = (undefined8 *)
                                                                     (lVar8 + (long)(*piVar12 + 5) *
                                                                              0x10 + 0x138);
                                                            goto LAB_036c2724;
                                                          }
                                                          uVar11 = uVar11 - 1;
                                                          piVar12 = piVar12 + 4;
                                                        } while (uVar11 != 0);
                                                      }
                                                      puVar9 = (undefined8 *)
                                                               FUN_0322c1e8(plVar13,*(long *)puVar7,
                                                                            5);
LAB_036c2724:
                                                      (*(code *)*puVar9)(plVar13,uVar15,uVar14,
                                                                         puVar9[1]);
                                                      plVar13 = *(long **)(*(long *)(*unaff_x22 +
                                                                                    0xb8) + 0x50);
                                                      if (plVar13 != (long *)0x0) {
                                                        lVar8 = *plVar13;
                                                        uVar14 = *(undefined8 *)
                                                                  (*(long *)(*unaff_x22 + 0xb8) +
                                                                  0x18);
                                                        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
                                                        uVar15 = *(undefined8 *)
                                                                  (*(long *)(*(long *)puVar6 + 0xb8)
                                                                  + 0x18);
                                                        if (uVar11 != 0) {
                                                          piVar12 = (int *)(*(long *)(lVar8 + 0xb0)
                                                                           + 8);
                                                          do {
                                                            if (*(long *)(piVar12 + -2) ==
                                                                *(long *)puVar7) {
                                                              puVar9 = (undefined8 *)
                                                                       (lVar8 + (long)(*piVar12 + 5)
                                                                                * 0x10 + 0x138);
                                                              goto LAB_036c27a8;
                                                            }
                                                            uVar11 = uVar11 - 1;
                                                            piVar12 = piVar12 + 4;
                                                          } while (uVar11 != 0);
                                                        }
                                                        puVar9 = (undefined8 *)
                                                                 FUN_0322c1e8(plVar13,*(long *)
                                                  puVar7,5);
LAB_036c27a8:
                                                  (*(code *)*puVar9)(plVar13,uVar15,uVar14,puVar9[1]
                                                                    );
                                                  plVar13 = *(long **)(*(long *)(*unaff_x22 + 0xb8)
                                                                      + 0x50);
                                                  if (plVar13 != (long *)0x0) {
                                                    lVar8 = *plVar13;
                                                    uVar14 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x20);
                                                    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
                                                    uVar15 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar6 + 0xb8) +
                                                              0x20);
                                                    if (uVar11 != 0) {
                                                      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8)
                                                      ;
                                                      do {
                                                        if (*(long *)(piVar12 + -2) ==
                                                            *(long *)puVar7) {
                                                          puVar9 = (undefined8 *)
                                                                   (lVar8 + (long)(*piVar12 + 5) *
                                                                            0x10 + 0x138);
                                                          goto LAB_036c282c;
                                                        }
                                                        uVar11 = uVar11 - 1;
                                                        piVar12 = piVar12 + 4;
                                                      } while (uVar11 != 0);
                                                    }
                                                    puVar9 = (undefined8 *)
                                                             FUN_0322c1e8(plVar13,*(long *)puVar7,5)
                                                    ;
LAB_036c282c:
                                                    (*(code *)*puVar9)(plVar13,uVar15,uVar14,
                                                                       puVar9[1]);
                                                    plVar13 = *(long **)(*(long *)(*unaff_x22 + 0xb8
                                                                                  ) + 0x50);
                                                    if (plVar13 != (long *)0x0) {
                                                      lVar8 = *plVar13;
                                                      uVar14 = *(undefined8 *)
                                                                (*(long *)(*unaff_x22 + 0xb8) + 0x28
                                                                );
                                                      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
                                                      uVar15 = *(undefined8 *)
                                                                (*(long *)(*(long *)puVar6 + 0xb8) +
                                                                0x28);
                                                      if (uVar11 != 0) {
                                                        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) +
                                                                         8);
                                                        do {
                                                          if (*(long *)(piVar12 + -2) ==
                                                              *(long *)puVar7) {
                                                            puVar9 = (undefined8 *)
                                                                     (lVar8 + (long)(*piVar12 + 5) *
                                                                              0x10 + 0x138);
                                                            goto LAB_036c28b0;
                                                          }
                                                          uVar11 = uVar11 - 1;
                                                          piVar12 = piVar12 + 4;
                                                        } while (uVar11 != 0);
                                                      }
                                                      puVar9 = (undefined8 *)
                                                               FUN_0322c1e8(plVar13,*(long *)puVar7,
                                                                            5);
LAB_036c28b0:
                    /* WARNING: Could not recover jumptable at 0x036c28d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                                      (*(code *)*puVar9)(plVar13,uVar15,uVar14,
                                                                         puVar9[1]);
                                                      return;
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
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


