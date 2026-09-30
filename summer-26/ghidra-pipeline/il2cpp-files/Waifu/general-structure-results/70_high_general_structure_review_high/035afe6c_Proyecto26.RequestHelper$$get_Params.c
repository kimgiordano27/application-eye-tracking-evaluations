/*
FUNCTION_NAME: Proyecto26.RequestHelper$$get_Params
ENTRY_POINT: 035afe6c
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Proyecto26_RequestHelper__get_Params
               (undefined1 param_1 [16],ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  ulong *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined4 unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  ulong unaff_x22;
  int unaff_w23;
  long unaff_x24;
  long unaff_x25;
  undefined8 uVar12;
  long lVar13;
  undefined1 unaff_w26;
  undefined4 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint uStack000000000000001c;
  
  FUN_0335b6c8(&DAT_0844c5b8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08431e20,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x25 + 0x562) = unaff_w26;
  *(long *)(unaff_x20 + 0xf48) = unaff_x24;
  if (DAT_08908cd0 != 0) {
    puVar2 = &DAT_0873ccb0 + (unaff_x20 + 0xf48U >> 0x12 & 0x7fff);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = *puVar2 | 1L << (unaff_x20 + 0xf48U >> 0xc & 0x3f);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (*(int *)(unaff_x20 + 0xca8) == 1) {
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar6 = FUN_07a0d2c4();
    if (((uVar6 & 1) != 0) && (*(int *)(unaff_x20 + 0xd3c) == 1)) {
                    /* try { // try from 035aff28 to 036b0013 has its CatchHandler @ 035aff28
                       catch() { ... } // from try @ 035aff28 with catch @ 035aff28
                       catch() { ... } // from try @ 035b00d4 with catch @ 035aff28
                       catch() { ... } // from try @ 035b00fc with catch @ 035aff28 */
      iVar9 = *(int *)(unaff_x20 + 0x2b0);
      param_2 = 0x3f000000;
      if (0.5 <= *(float *)(unaff_x20 + 0x14c)) {
        iVar9 = iVar9 + 1;
        *(int *)(unaff_x20 + 0x2b0) = iVar9;
        *(undefined4 *)(unaff_x20 + 0x14c) = 0;
      }
      if ((((*(int *)(unaff_x20 + 0x2b4) <= iVar9) && (*(char *)(unaff_x20 + 0x34e) == '\0')) &&
          (*(char *)(unaff_x20 + 0x352) == '\0')) &&
         (((*(char *)(unaff_x20 + 0x351) != '\0' && (*(int *)(unaff_x20 + 0xd8c) == 1)) ||
          ((*(char *)(unaff_x20 + 0x357) != '\0' ||
           ((*(char *)(unaff_x20 + 0x34d) != '\0' && (*(int *)(unaff_x20 + 0xd8c) == 0)))))))) {
        iVar9 = *(int *)(unaff_x20 + 0x2b8);
        if (iVar9 == 0) {
          if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          uVar6 = FUN_07a0d2c4();
          if ((uVar6 & 1) == 0) {
            iVar9 = *(int *)(unaff_x20 + 0x2b8);
            goto LAB_035afff0;
          }
          if ((*(long *)(unaff_x20 + 0x2d0) == 0) ||
             (FUN_035a1fa4(*(long *)(unaff_x20 + 0x2d0),0), *(long *)(unaff_x20 + 0x2c0) == 0))
          goto LAB_035b10c0;
          FUN_035c6fb8();
        }
        else {
LAB_035afff0:
          if (iVar9 == 2) {
            if (*(long *)(unaff_x20 + 0x2d0) == 0) goto LAB_035b10c0;
            FUN_035a1fa4(*(long *)(unaff_x20 + 0x2d0),0);
            if (*(long *)(unaff_x20 + 0x2c0) == 0) goto LAB_035b10c0;
            FUN_035c7828(*(long *)(unaff_x20 + 0x2c0),0);
          }
          else if (iVar9 == 1) {
            if (*(long *)(unaff_x20 + 0x2d0) == 0) goto LAB_035b10c0;
            FUN_035a1fa4(*(long *)(unaff_x20 + 0x2d0),0);
            if (*(long *)(unaff_x20 + 0x2d0) == 0) goto LAB_035b10c0;
            FUN_035a9744(*(long *)(unaff_x20 + 0x2d0),0);
          }
        }
        uVar12 = *(undefined8 *)(unaff_x20 + 0xdb0);
        if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar6 = FUN_07a119fc(uVar12,0,0);
        if ((uVar6 & 1) != 0) {
          if (*(long *)(unaff_x20 + 0x2c0) == 0) goto LAB_035b10c0;
          FUN_035c7828(*(long *)(unaff_x20 + 0x2c0),0);
        }
        *(undefined4 *)(unaff_x20 + 0x2b0) = 0;
      }
    }
  }
  uVar12 = *(undefined8 *)(unaff_x20 + 0xdb0);
  plVar1 = (long *)(unaff_x20 + 0xdb0);
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  iVar9 = (int)(unaff_x22 >> 0x20);
  uVar6 = FUN_07a119fc(uVar12,0,0);
  if ((((uVar6 & 1) == 0) || (*(int *)(unaff_x20 + 0xca8) != 0)) &&
     (*(char *)(unaff_x20 + 0xa44) == '\0')) {
    if (*(int *)(unaff_x20 + 0xc8c) == 1) {
      lVar13 = *plVar1;
      if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar6 = FUN_07a0d2c4(lVar13,0,0);
      if (((uVar6 & 1) != 0) && (*(int *)(unaff_x20 + 0xc98) != 0)) goto LAB_035b00c0;
    }
  }
  else {
LAB_035b00c0:
    uVar12 = *(undefined8 *)(unaff_x20 + 0xdb8);
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar6 = FUN_07a0d2c4(uVar12,0,0);
    if ((uVar6 & 1) != 0) {
      if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar6 = FUN_07a119fc();
      if ((uVar6 & 1) != 0) {
        if (*(int *)(unaff_x20 + 0xc8c) == 2) {
          return;
        }
        if (*(int *)(unaff_x20 + 0xc8c) == 4) {
          return;
        }
      }
    }
    iVar3 = *(int *)(unaff_x20 + 0xc8c);
    if (iVar3 == 0) {
LAB_035b013c:
      if (*(int *)(unaff_x20 + 0xc98) == 0) {
        if (unaff_x24 == 0) goto LAB_035b10c0;
        uVar6 = FUN_07a0a76c();
        if ((uVar6 & 1) != 0) {
          if ((*(long *)(unaff_x20 + 0x5b0) == 0) ||
             (lVar13 = FUN_04ab0b48(*(long *)(unaff_x20 + 0x5b0),0,DAT_083f66d0), lVar13 == 0))
          goto LAB_035b10c0;
          *(undefined4 *)(lVar13 + 0x18) = 0;
        }
        *(undefined4 *)(unaff_x20 + 0xc8c) = 1;
        *(undefined4 *)(unaff_x20 + 0xa7c) = *(undefined4 *)(unaff_x20 + 0x57c);
        *(undefined4 *)(unaff_x20 + 0x9e4) = *(undefined4 *)(unaff_x20 + 0x584);
        *(undefined4 *)(unaff_x20 + 0xa74) = *(undefined4 *)(unaff_x20 + 0xa70);
        goto LAB_035b0718;
      }
    }
    else if (iVar3 != 3) {
      if (iVar3 != 1) goto LAB_035b0718;
      goto LAB_035b013c;
    }
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar6 = FUN_07a11b14();
    if (((uVar6 & 1) == 0) || (*(int *)(unaff_x20 + 0xda0) != 0)) {
      *(undefined4 *)(unaff_x20 + 0xa7c) = *(undefined4 *)(unaff_x20 + 0x57c);
      *(undefined4 *)(unaff_x20 + 0x9e4) = *(undefined4 *)(unaff_x20 + 0x584);
      *(undefined4 *)(unaff_x20 + 0xa74) = *(undefined4 *)(unaff_x20 + 0xa70);
      if (*(long *)(unaff_x20 + 0x2c0) == 0) goto LAB_035b10c0;
      FUN_035c7828(*(long *)(unaff_x20 + 0x2c0),0);
    }
    else {
      if ((unaff_x22 & 0xff) == 0) {
        iVar9 = *(int *)(unaff_x20 + 0xca4);
      }
      else {
        *(int *)(unaff_x20 + 0xca4) = iVar9;
      }
      if (iVar9 != 1) {
        if (iVar9 == 0) {
          if ((*(long *)(unaff_x20 + 0x5b0) == 0) ||
             (lVar13 = FUN_04ab0b48(*(long *)(unaff_x20 + 0x5b0),0,DAT_083f66d0), lVar13 == 0))
          goto LAB_035b10c0;
          if (*(int *)(lVar13 + 0x18) != 2) goto LAB_035b028c;
          iVar9 = *(int *)(unaff_x20 + 0xca4);
        }
        if (iVar9 != 2) goto LAB_035b0718;
      }
LAB_035b028c:
      *(undefined1 *)(unaff_x20 + 0xa44) = 0;
      *(long *)(unaff_x20 + 0xdb0) = unaff_x24;
      lVar13 = unaff_x24;
      if (DAT_08908cd0 != 0) {
        puVar2 = &DAT_0873ccb0 + ((ulong)plVar1 >> 0x12 & 0x7fff);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = *puVar2 | 1L << ((ulong)plVar1 >> 0xc & 0x3f);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar13 = *plVar1;
      }
      if (lVar13 == 0) goto LAB_035b10c0;
      lVar13 = *(long *)(unaff_x20 + 0x420);
      uStack000000000000001c = unaff_w21;
      FUN_07a18d2c();
      if (lVar13 == 0) goto LAB_035b10c0;
      FUN_079989ac(lVar13,0);
      lVar13 = *(long *)(unaff_x20 + 0x420);
      if (lVar13 == 0) goto LAB_035b10c0;
      uVar14 = *(undefined4 *)(unaff_x20 + 0xa94);
      if (DAT_086ebe78 == (code *)0x0) {
        DAT_086ebe78 = (code *)FUN_033d1b68(
                                           "UnityEngine.AI.NavMeshAgent::set_stoppingDistance(System.Single)"
                                           );
      }
      (*DAT_086ebe78)(uVar14,lVar13);
      if ((*(uint *)(unaff_x20 + 0xc8c) < 2) && (*(int *)(unaff_x20 + 0xc98) != 0)) {
        *(undefined4 *)(unaff_x20 + 0xc8c) = 3;
      }
      if (((*(int *)(unaff_x20 + 0xd24) == 1) && (*(int *)(unaff_x20 + 0xd30) == 1)) &&
         (*(char *)(unaff_x20 + 0xa44) == '\0')) {
        lVar13 = *plVar1;
        if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar6 = FUN_07a0d2c4(lVar13,0,0);
        if ((uVar6 & 1) != 0) {
          lVar13 = FUN_03398188(DAT_083c7c90,5);
          if (lVar13 == 0) goto LAB_035b10c0;
          if (*(int *)(lVar13 + 0x18) == 0) {
LAB_035b10c4:
                    /* WARNING: Subroutine does not return */
            FUN_033d1d44();
          }
          puVar10 = (undefined8 *)(lVar13 + 0x20);
          *puVar10 = DAT_084321b0;
          if (DAT_08908cd0 != 0) {
            puVar2 = &DAT_0873ccb0 + ((ulong)puVar10 >> 0x12 & 0x7fff);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = *puVar2 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          if (DAT_086ef190 == (code *)0x0) {
            DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
          }
          lVar8 = (*DAT_086ef190)();
          if (lVar8 == 0) goto LAB_035b10c0;
          uVar12 = FUN_07a11ba4(lVar8,0);
          if (*(uint *)(lVar13 + 0x18) < 2) goto LAB_035b10c4;
          puVar10 = (undefined8 *)(lVar13 + 0x28);
          *puVar10 = uVar12;
          if (DAT_08908cd0 == 0) {
            if (*(uint *)(lVar13 + 0x18) < 3) goto LAB_035b10c4;
            *(undefined8 *)(lVar13 + 0x30) = DAT_0842fb20;
          }
          else {
            puVar2 = &DAT_0873ccb0 + ((ulong)puVar10 >> 0x12 & 0x7fff);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = *puVar2 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (*(uint *)(lVar13 + 0x18) < 3) goto LAB_035b10c4;
            puVar10 = (undefined8 *)(lVar13 + 0x30);
            *puVar10 = DAT_0842fb20;
            puVar2 = &DAT_0873ccb0 + ((ulong)puVar10 >> 0x12 & 0x7fff);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = *puVar2 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          lVar8 = *plVar1;
          if (lVar8 == 0) goto LAB_035b10c0;
          if (DAT_086ef190 == (code *)0x0) {
            DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
          }
          lVar8 = (*DAT_086ef190)(lVar8);
          if (lVar8 == 0) goto LAB_035b10c0;
          uVar12 = FUN_07a11ba4(lVar8,0);
          if (*(uint *)(lVar13 + 0x18) < 4) goto LAB_035b10c4;
          puVar10 = (undefined8 *)(lVar13 + 0x38);
          *puVar10 = uVar12;
          if (DAT_08908cd0 == 0) {
            if (*(uint *)(lVar13 + 0x18) < 5) goto LAB_035b10c4;
            *(undefined8 *)(lVar13 + 0x40) = DAT_08431e20;
          }
          else {
            puVar2 = &DAT_0873ccb0 + ((ulong)puVar10 >> 0x12 & 0x7fff);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = *puVar2 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (*(uint *)(lVar13 + 0x18) < 5) goto LAB_035b10c4;
            puVar10 = (undefined8 *)(lVar13 + 0x40);
            *puVar10 = DAT_08431e20;
            puVar2 = &DAT_0873ccb0 + ((ulong)puVar10 >> 0x12 & 0x7fff);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = *puVar2 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          uVar12 = FUN_0666ee4c(lVar13,0);
          if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
            FUN_033b9870(DAT_083ca458);
          }
          FUN_079c9c0c(uVar12,0);
        }
      }
      if (*(int *)(unaff_x20 + 0xca4) == 1) {
        if (*plVar1 == 0) goto LAB_035b10c0;
        uVar12 = FUN_03c89df4(*plVar1,DAT_08405898);
        *(undefined8 *)(unaff_x20 + 4000) = uVar12;
        if (DAT_08908cd0 != 0) {
          puVar2 = &DAT_0873ccb0 + (unaff_x20 + 4000U >> 0x12 & 0x7fff);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = *puVar2 | 1L << (unaff_x20 + 4000U >> 0xc & 0x3f);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
      }
      else {
        *(undefined8 *)(unaff_x20 + 4000) = 0;
        if (DAT_08908cd0 != 0) {
          puVar2 = &DAT_0873ccb0 + (unaff_x20 + 4000U >> 0x12 & 0x7fff);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = *puVar2 | 1L << (unaff_x20 + 4000U >> 0xc & 0x3f);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
      }
      lVar13 = *(long *)(unaff_x20 + 0x2e0);
      *(undefined4 *)(unaff_x20 + 0xa7c) = *(undefined4 *)(unaff_x20 + 0x57c);
      if (lVar13 == 0) goto LAB_035b10c0;
      *(undefined1 *)(lVar13 + 0x38) = 1;
      *(undefined4 *)(lVar13 + 0xac) = 0;
      if (*(long *)(unaff_x20 + 0x2d8) == 0) goto LAB_035b10c0;
      FUN_035a1b40(*(long *)(unaff_x20 + 0x2d8),0);
      unaff_w21 = uStack000000000000001c;
    }
  }
LAB_035b0718:
  *(int *)(unaff_x20 + 0xf30) = unaff_w23;
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar6 = FUN_07a0d2c4();
  if ((uVar6 & 1) != 0) {
    *(long *)(unaff_x20 + 0x498) = unaff_x24;
    if (DAT_08908cd0 != 0) {
      puVar2 = &DAT_0873ccb0 + (unaff_x20 + 0x498U >> 0x12 & 0x7fff);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = *puVar2 | 1L << (unaff_x20 + 0x498U >> 0xc & 0x3f);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lVar13 = *plVar1;
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar6 = FUN_07a0d2c4(lVar13,0,0);
    if ((uVar6 & 1) != 0) {
      uVar14 = FUN_035b9fb0();
      *(undefined4 *)(unaff_x20 + 0x2ec) = uVar14;
    }
  }
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar6 = FUN_07a0d2c4();
  iVar9 = *(int *)(unaff_x20 + 0xc8c);
  if ((((uVar6 & 1) != 0) && (iVar9 == 2)) || ((iVar9 != 2 && (iVar9 != 4)))) {
    if (*(char *)(unaff_x20 + 0x358) == '\0') {
      if (*(char *)(unaff_x20 + 0x351) == '\0') {
LAB_035b0828:
        *(int *)(unaff_x20 + 0x9dc) = *(int *)(unaff_x20 + 0x9dc) - unaff_w23;
        if ((unaff_x22 >> 0x20 != 0) || ((unaff_x22 & 0xff) == 0)) {
          lVar13 = **(long **)(DAT_083c9b08 + 0xb8);
          if ((lVar13 == 0) || (*(long *)(lVar13 + 0x38) == 0)) goto LAB_035b10c0;
          if (*(int *)(*(long *)(lVar13 + 0x38) + 0x94) != 1) {
            if (*(long *)(unaff_x20 + 0x1b8) == 0) goto LAB_035b10c0;
            uVar14 = *(undefined4 *)(unaff_x20 + 0xf30);
            FUN_07a18d2c(*(long *)(unaff_x20 + 0x1b8),0);
            FUN_03599ba8(lVar13,uVar14,unaff_w21 & 1,0,0);
          }
        }
        if (*(long *)(unaff_x20 + 0x4f8) == 0) goto LAB_035b10c0;
        FUN_07a22574(*(long *)(unaff_x20 + 0x4f8),0);
        if ((*(int *)(unaff_x20 + 0xd80) == 1) && (*(char *)(unaff_x20 + 0xdeb) == '\0')) {
          lVar13 = *(long *)(unaff_x20 + 0x5d8);
          if (lVar13 == 0) goto LAB_035b10c0;
          iVar9 = *(int *)(lVar13 + 0x18);
          if ((0 < iVar9) && (*(char *)(unaff_x20 + 0x358) == '\0')) {
            if (DAT_086ef0a0 == (code *)0x0) {
              DAT_086ef0a0 = (code *)FUN_033d1b68(
                                                 "UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)"
                                                 );
            }
            uVar14 = (*DAT_086ef0a0)(0,iVar9);
            uVar12 = FUN_04ab0b48(lVar13,uVar14,DAT_083f0f80);
            if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
              FUN_033b9870(DAT_083cf7d8);
            }
            uVar6 = FUN_07a0d2c4(uVar12,0,0);
            if ((uVar6 & 1) != 0) {
              if (DAT_086d7cc6 == '\0') {
                FUN_0335b6c8(&DAT_083d2c90,1);
                DataMemoryBarrier(2,3);
                DAT_086d7cc6 = '\x01';
              }
              puVar11 = *(undefined4 **)(DAT_083d2c90 + 0xb8);
              uVar20 = *puVar11;
              uVar19 = puVar11[1];
              uVar14 = puVar11[2];
              if (DAT_086ef188 == (code *)0x0) {
                DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
              }
              lVar13 = (*DAT_086ef188)();
              if (lVar13 == 0) goto LAB_035b10c0;
              uVar15 = FUN_07a172b0(lVar13,0);
              lVar13 = FUN_035dcb1c(uVar20,uVar19,uVar14,uVar15,param_2,param_3,param_4,
                                    *(undefined4 *)(unaff_x20 + 0x5d0),uVar12,0);
              if (lVar13 == 0) goto LAB_035b10c0;
              if (DAT_086ef250 == (code *)0x0) {
                DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
              }
              lVar8 = (*DAT_086ef250)(lVar13);
              if (DAT_086ef188 == (code *)0x0) {
                DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
              }
              uVar12 = (*DAT_086ef188)();
              if (lVar8 == 0) goto LAB_035b10c0;
              if (DAT_086ef840 == (code *)0x0) {
                DAT_086ef840 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                                  );
              }
              (*DAT_086ef840)(lVar8,uVar12,1);
              fVar16 = *(float *)(unaff_x20 + 0xa0);
              uVar12 = *(undefined8 *)(unaff_x20 + 0xa4);
              if (DAT_086d7cc6 == '\0') {
                FUN_0335b6c8(&DAT_083d2c90,1);
                DataMemoryBarrier(2,3);
                DAT_086d7cc6 = '\x01';
              }
              uVar15 = *(undefined8 *)(*(float **)(DAT_083d2c90 + 0xb8) + 1);
              fVar16 = fVar16 - **(float **)(DAT_083d2c90 + 0xb8);
              fVar17 = (float)uVar12 - (float)uVar15;
              fVar18 = (float)((ulong)uVar12 >> 0x20) - (float)((ulong)uVar15 >> 0x20);
              fVar18 = fVar18 * fVar18;
              if (fVar18 + fVar16 * fVar16 + fVar17 * fVar17 < DAT_012ed8ec) {
                fVar16 = DAT_012ed8ec;
                if (*(int *)(unaff_x20 + 0xe70) == 1) {
                  if (DAT_086ef250 == (code *)0x0) {
                    DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
                  }
                  lVar8 = (*DAT_086ef250)(lVar13);
                  lVar13 = *(long *)(unaff_x20 + 0x1b8);
                }
                else {
                  if (*(int *)(unaff_x20 + 0xe70) != 0) goto LAB_035b0ff4;
                  if (DAT_086ef250 == (code *)0x0) {
                    DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
                  }
                  lVar8 = (*DAT_086ef250)(lVar13);
                  if (DAT_086ef188 == (code *)0x0) {
                    DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
                  }
                  lVar13 = (*DAT_086ef188)();
                }
                if ((lVar13 == 0) || (fVar17 = (float)FUN_07a18d2c(lVar13,0), lVar8 == 0))
                goto LAB_035b10c0;
                FUN_07a18dcc(fVar17 + *(float *)(unaff_x20 + 0xe64),
                             fVar18 + *(float *)(unaff_x20 + 0xe68),
                             fVar16 + *(float *)(unaff_x20 + 0xe6c),lVar8,0);
              }
LAB_035b0ff4:
              if (DAT_086d7cc6 == '\0') {
                FUN_0335b6c8(&DAT_083d2c90,1);
                DataMemoryBarrier(2,3);
                DAT_086d7cc6 = '\x01';
              }
              uVar14 = *(undefined4 *)(*(undefined8 **)(DAT_083d2c90 + 0xb8) + 1);
              *(undefined8 *)(unaff_x20 + 0xa0) = **(undefined8 **)(DAT_083d2c90 + 0xb8);
              *(undefined4 *)(unaff_x20 + 0xa8) = uVar14;
            }
          }
        }
        if (*(long *)(unaff_x20 + 0x2d0) == 0) goto LAB_035b10c0;
        FUN_035a41fc(*(long *)(unaff_x20 + 0x2d0),0);
        if ((*(int *)(unaff_x20 + 0xca8) == 0) || (*(int *)(unaff_x20 + 0xc98) == 0)) {
          iVar9 = *(int *)(unaff_x20 + 0x39c);
LAB_035b08fc:
          lVar13 = *(long *)(unaff_x20 + 0xf78);
          if (DAT_086ef0a0 == (code *)0x0) {
            DAT_086ef0a0 = (code *)FUN_033d1b68(
                                               "UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)"
                                               );
          }
          uVar14 = (*DAT_086ef0a0)(1,iVar9 + 1);
          uVar12 = DAT_0843c880;
          if (lVar13 == 0) goto LAB_035b10c0;
          if (DAT_086ec970 == (code *)0x0) {
            DAT_086ec970 = (code *)FUN_033d1b68(
                                               "UnityEngine.Animator::SetIntegerString(System.String,System.Int32)"
                                               );
          }
          (*DAT_086ec970)(lVar13,uVar12,uVar14);
        }
        else if (*(int *)(unaff_x20 + 0xca8) == 1) {
          if (*(int *)(unaff_x20 + 0xccc) == 1) {
            iVar9 = *(int *)(unaff_x20 + 0x3a4);
          }
          else {
            if (*(int *)(unaff_x20 + 0xccc) != 0) goto LAB_035b0978;
            iVar9 = *(int *)(unaff_x20 + 0x3a0);
          }
          goto LAB_035b08fc;
        }
LAB_035b0978:
        uVar12 = DAT_0843c870;
        if (((((*(int *)(unaff_x20 + 0xd1c) == 1) && (*(char *)(unaff_x20 + 0x34f) == '\0')) &&
             (*(char *)(unaff_x20 + 0x357) == '\0')) &&
            ((*(char *)(unaff_x20 + 0x352) == '\0' && (*(char *)(unaff_x20 + 0x34e) == '\0')))) &&
           ((*(char *)(unaff_x20 + 0x353) == '\0' &&
            ((*(char *)(unaff_x20 + 0x350) == '\0' &&
             (*(float *)(unaff_x20 + 0x2ec) <= (float)*(int *)(unaff_x20 + 0x2f4))))))) {
          lVar13 = *(long *)(unaff_x20 + 0xf78);
          if (lVar13 == 0) goto LAB_035b10c0;
          if (DAT_086ec978 == (code *)0x0) {
            DAT_086ec978 = (code *)FUN_033d1b68(
                                               "UnityEngine.Animator::SetTriggerString(System.String)"
                                               );
          }
          (*DAT_086ec978)(lVar13,uVar12);
          uVar12 = DAT_08435af8;
          lVar13 = *(long *)(unaff_x20 + 0x2d0);
          if (lVar13 == 0) goto LAB_035b10c0;
          if (DAT_086ef388 == (code *)0x0) {
            DAT_086ef388 = (code *)FUN_033d1b68(
                                               "UnityEngine.MonoBehaviour::InvokeDelayed(UnityEngine.MonoBehaviour,System.String,System.Single,System.Single)"
                                               );
          }
          (*DAT_086ef388)(0x3e800000,0,lVar13,uVar12);
          goto LAB_035b0b2c;
        }
        lVar13 = *(long *)(unaff_x20 + 0xf78);
        if (lVar13 == 0) goto LAB_035b10c0;
        pcVar7 = DAT_086ec980;
        if (DAT_086ec980 == (code *)0x0) {
          pcVar7 = (code *)FUN_033d1b68("UnityEngine.Animator::ResetTriggerString(System.String)");
          DAT_086ec980 = pcVar7;
        }
      }
      else {
        fVar16 = *(float *)(unaff_x20 + 0x2ec);
        param_2 = (ulong)(uint)fVar16;
        if ((float)*(int *)(unaff_x20 + 0x2f4) < fVar16) goto LAB_035b0828;
        if ((float)*(int *)(unaff_x20 + 0x2f4) < fVar16) goto LAB_035b0b2c;
        fVar16 = ABS((float)(*(int *)(unaff_x20 + 0x2f0) + -1) * DAT_012edd80 * (float)unaff_w23 -
                     (float)unaff_w23);
        iVar9 = -0x80000000;
        if (fVar16 != INFINITY) {
          iVar9 = (int)fVar16;
        }
        *(int *)(unaff_x20 + 0x9dc) = *(int *)(unaff_x20 + 0x9dc) - iVar9;
        if ((unaff_x22 >> 0x20 != 0) || ((unaff_x22 & 0xff) == 0)) {
          if (*(long *)(unaff_x20 + 0x1b8) == 0) goto LAB_035b10c0;
          lVar13 = **(long **)(DAT_083c9b08 + 0xb8);
          FUN_07a18d2c(*(long *)(unaff_x20 + 0x1b8),0);
          if (lVar13 == 0) goto LAB_035b10c0;
          FUN_03599ba8(lVar13,iVar9,unaff_w21 & 1,0,0);
        }
        if (*(long *)(unaff_x20 + 0x2d0) == 0) goto LAB_035b10c0;
        FUN_035a3cd4(*(long *)(unaff_x20 + 0x2d0),0);
        uVar12 = DAT_08435af8;
        lVar13 = *(long *)(unaff_x20 + 0x2d0);
        if (lVar13 == 0) goto LAB_035b10c0;
        if (DAT_086ef388 == (code *)0x0) {
          DAT_086ef388 = (code *)FUN_033d1b68(
                                             "UnityEngine.MonoBehaviour::InvokeDelayed(UnityEngine.MonoBehaviour,System.String,System.Single,System.Single)"
                                             );
        }
        (*DAT_086ef388)(0x3e800000,0,lVar13,uVar12);
        uVar12 = DAT_0843c870;
        lVar13 = *(long *)(unaff_x20 + 0xf78);
        if (lVar13 == 0) goto LAB_035b10c0;
        pcVar7 = DAT_086ec978;
        if (DAT_086ec978 == (code *)0x0) {
          pcVar7 = (code *)FUN_033d1b68("UnityEngine.Animator::SetTriggerString(System.String)");
          DAT_086ec978 = pcVar7;
        }
      }
      (*pcVar7)(lVar13,uVar12);
    }
LAB_035b0b2c:
    iVar9 = *(int *)(unaff_x20 + 0xc8c);
  }
  if (((iVar9 == 3) && (*(int *)(unaff_x20 + 0xc98) == 1)) &&
     ((float)*(int *)(unaff_x20 + 0x9dc) / (float)*(int *)(unaff_x20 + 0x9e0) <=
      (float)*(int *)(unaff_x20 + 0xafc) * DAT_012edd80)) {
    lVar13 = *(long *)(unaff_x20 + 0x420);
    if (lVar13 == 0) goto LAB_035b10c0;
    if (DAT_086ebf48 == (code *)0x0) {
      DAT_086ebf48 = (code *)FUN_033d1b68(
                                         "UnityEngine.AI.NavMeshAgent::set_updateRotation(System.Boolean)"
                                         );
    }
    (*DAT_086ebf48)(lVar13,1);
    lVar13 = *(long *)(unaff_x20 + 0x420);
    if (lVar13 == 0) goto LAB_035b10c0;
    if (DAT_086ebef8 == (code *)0x0) {
      DAT_086ebef8 = (code *)FUN_033d1b68("UnityEngine.AI.NavMeshAgent::ResetPath()");
    }
    (*DAT_086ebef8)(lVar13);
    lVar13 = *(long *)(unaff_x20 + 0x420);
    if (lVar13 == 0) goto LAB_035b10c0;
    uVar14 = *(undefined4 *)(unaff_x20 + 0xad8);
    if (DAT_086ebe78 == (code *)0x0) {
      DAT_086ebe78 = (code *)FUN_033d1b68(
                                         "UnityEngine.AI.NavMeshAgent::set_stoppingDistance(System.Single)"
                                         );
    }
    (*DAT_086ebe78)(uVar14,lVar13);
    lVar13 = *(long *)(unaff_x20 + 0xf78);
    *(undefined1 *)(unaff_x20 + 0x352) = 0;
    uVar12 = DAT_0844c5b8;
    if (lVar13 == 0) goto LAB_035b10c0;
    if (DAT_086ec958 == (code *)0x0) {
      DAT_086ec958 = (code *)FUN_033d1b68(
                                         "UnityEngine.Animator::SetBoolString(System.String,System.Boolean)"
                                         );
    }
    (*DAT_086ec958)(lVar13,uVar12,0);
    if ((*(long *)(unaff_x20 + 0x2d0) == 0) ||
       (lVar13 = *(long *)(*(long *)(unaff_x20 + 0x2d0) + 0x20), lVar13 == 0)) goto LAB_035b10c0;
    *(undefined4 *)(lVar13 + 0xc8c) = 1;
    *(undefined4 *)(lVar13 + 0xc98) = 0;
  }
  if ((0 < *(int *)(unaff_x20 + 0x9dc)) || (*(char *)(unaff_x20 + 0x358) != '\0')) {
    return;
  }
  *(undefined4 *)(unaff_x20 + 0x4a0) = unaff_w19;
  if (*(long *)(unaff_x20 + 0x2d8) != 0) {
    FUN_035a0d0c(*(long *)(unaff_x20 + 0x2d8),0);
    return;
  }
LAB_035b10c0:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


