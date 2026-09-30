/*
FUNCTION_NAME: UniGLTF.Extensions.VRMC_springBone.GltfSerializer$$__colliders_ITEM__shape__sphere_Serialize_Offset
ENTRY_POINT: 07c6f8b4
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UniGLTF_Extensions_VRMC_springBone_GltfSerializer____colliders_ITEM__shape__sphere_Serialize_Offset
               (void)

{
  long *plVar1;
  int *piVar2;
  ulong *puVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *unaff_x19;
  long lVar14;
  long lVar15;
  undefined8 in_stack_00000018;
  
  FUN_07c6eb74();
  if ((char)unaff_x19[0x3a] == '\0') {
    return;
  }
  uVar8 = FUN_07a15ad4(0);
  if ((uVar8 & 1) == 0) {
    return;
  }
  if ((char)unaff_x19[0x42] != '\0') {
    return;
  }
  lVar14 = unaff_x19[0x20];
  if (lVar14 == 0) goto LAB_07c6fe94;
  if (DAT_086ef770 == (code *)0x0) {
    DAT_086ef770 = (code *)FUN_033d1b68("UnityEngine.TouchScreenKeyboard::get_status()");
  }
  iVar7 = (*DAT_086ef770)(lVar14);
  lVar14 = unaff_x19[0x20];
  if (iVar7 == 0) {
    if (lVar14 == 0) goto LAB_07c6fecc;
    if (DAT_086ef748 == (code *)0x0) {
      DAT_086ef748 = (code *)FUN_033d1b68("UnityEngine.TouchScreenKeyboard::get_text()");
    }
    lVar14 = (*DAT_086ef748)(lVar14);
    uVar8 = FUN_0666e380(unaff_x19[0x30],lVar14);
    if ((uVar8 & 1) == 0) {
      plVar1 = unaff_x19 + 0x30;
      if ((char)unaff_x19[0x32] == '\0') {
        uVar8 = (ulong)plVar1 >> 0xc;
        uVar13 = (ulong)plVar1 >> 0x12 & 0x7fff;
        *plVar1 = DAT_0842d1f0;
        if (DAT_08908cd0 != 0) {
          puVar3 = &DAT_0873ccb0 + uVar13;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar6) {
              *puVar3 = *puVar3 | 1L << (uVar8 & 0x3f);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        if (lVar14 == 0) goto LAB_07c6fecc;
        uVar11 = (ulong)*(uint *)(lVar14 + 0x10);
        if (0 < (int)*(uint *)(lVar14 + 0x10)) {
          puVar3 = &DAT_0873ccb0 + uVar13;
          lVar15 = 0;
          do {
            if ((int)uVar11 <= lVar15) {
                    /* WARNING: Subroutine does not return */
              FUN_06850b80(0);
            }
            sVar4 = *(short *)(lVar14 + 0x14 + lVar15 * 2);
            in_stack_00000018._4_2_ = 10;
            if (sVar4 != 3 && sVar4 != 0xd) {
              in_stack_00000018._4_2_ = sVar4;
            }
            lVar12 = unaff_x19[0x2a];
            if (lVar12 == 0) {
              if ((int)unaff_x19[0x26] != 0) {
                if (*plVar1 == 0) goto LAB_07c6fecc;
                in_stack_00000018._4_2_ = FUN_07c70988();
              }
            }
            else {
              lVar10 = *plVar1;
              if (lVar10 == 0) goto LAB_07c6fecc;
              in_stack_00000018._4_2_ =
                   (**(code **)(lVar12 + 0x18))
                             (*(undefined8 *)(lVar12 + 0x40),lVar10,*(undefined4 *)(lVar10 + 0x10),
                              in_stack_00000018._4_2_,*(undefined8 *)(lVar12 + 0x28));
            }
            if ((in_stack_00000018._4_2_ == 10) && ((int)unaff_x19[0x25] == 1)) {
              lVar14 = unaff_x19[0x20];
              if (lVar14 == 0) goto LAB_07c6fecc;
              lVar15 = *plVar1;
              if (DAT_086ef750 == (code *)0x0) {
                DAT_086ef750 = (code *)FUN_033d1b68(
                                                  "UnityEngine.TouchScreenKeyboard::set_text(System.String)"
                                                  );
              }
              (*DAT_086ef750)(lVar14,lVar15);
              goto LAB_07c6fe8c;
            }
            if (in_stack_00000018._4_2_ != 0) {
              lVar12 = *plVar1;
              if (*(int *)(DAT_083c97d0 + 0xe0) == 0) {
                FUN_033b9870();
              }
              uVar9 = FUN_0677b114((long)&stack0x00000018 + 4,0);
              lVar12 = FUN_06660dbc(lVar12,uVar9,0);
              *plVar1 = lVar12;
              if (DAT_08908cd0 != 0) {
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                  if (bVar6) {
                    *puVar3 = *puVar3 | 1L << (uVar8 & 0x3f);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
            }
            uVar11 = (ulong)*(int *)(lVar14 + 0x10);
            lVar15 = lVar15 + 1;
          } while (lVar15 < (long)uVar11);
        }
        iVar7 = *(int *)((long)unaff_x19 + 0x134);
        if (0 < iVar7) {
          lVar15 = *plVar1;
          if (lVar15 == 0) goto LAB_07c6fecc;
          if (iVar7 < *(int *)(lVar15 + 0x10)) {
            lVar15 = FUN_066706f8(lVar15,0,iVar7,0);
            *plVar1 = lVar15;
            if (DAT_08908cd0 != 0) {
              puVar3 = &DAT_0873ccb0 + uVar13;
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                if (bVar6) {
                  *puVar3 = *puVar3 | 1L << (uVar8 & 0x3f);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
          }
        }
        lVar15 = unaff_x19[0x20];
        if (lVar15 == 0) goto LAB_07c6fecc;
        if (DAT_086ef780 == (code *)0x0) {
          DAT_086ef780 = (code *)FUN_033d1b68(
                                             "UnityEngine.TouchScreenKeyboard::get_canGetSelection()"
                                             );
        }
        uVar8 = (*DAT_086ef780)(lVar15);
        if ((uVar8 & 1) == 0) {
          lVar15 = *plVar1;
          if (lVar15 == 0) goto LAB_07c6fecc;
          iVar7 = *(int *)(lVar15 + 0x10);
          piVar2 = (int *)((long)unaff_x19 + 0x194);
          *(int *)(unaff_x19 + 0x33) = iVar7;
          if (iVar7 < 0) {
            piVar2[0] = 0;
            piVar2[1] = 0;
          }
          else {
            *piVar2 = iVar7;
          }
        }
        else {
          FUN_07c6f59c();
          lVar15 = unaff_x19[0x30];
        }
        uVar8 = FUN_0666e380(lVar15,lVar14);
        if ((uVar8 & 1) == 0) {
          lVar14 = unaff_x19[0x20];
          if (lVar14 == 0) goto LAB_07c6fecc;
          lVar15 = *plVar1;
          if (DAT_086ef750 == (code *)0x0) {
            DAT_086ef750 = (code *)FUN_033d1b68(
                                               "UnityEngine.TouchScreenKeyboard::set_text(System.String)"
                                               );
          }
          (*DAT_086ef750)(lVar14,lVar15);
        }
        FUN_07c6d004();
        FUN_07c6d0ac();
      }
      else {
        lVar14 = unaff_x19[0x20];
        if (lVar14 == 0) goto LAB_07c6fecc;
        lVar15 = *plVar1;
        if (DAT_086ef750 == (code *)0x0) {
          DAT_086ef750 = (code *)FUN_033d1b68(
                                             "UnityEngine.TouchScreenKeyboard::set_text(System.String)"
                                             );
        }
        (*DAT_086ef750)(lVar14,lVar15);
      }
    }
    else {
      if (*(char *)((long)unaff_x19 + 300) != '\0') {
        lVar14 = unaff_x19[0x20];
        if (lVar14 == 0) goto LAB_07c6fecc;
        if (DAT_086ef788 == (code *)0x0) {
          DAT_086ef788 = (code *)FUN_033d1b68(
                                             "UnityEngine.TouchScreenKeyboard::get_canSetSelection()"
                                             );
        }
        uVar8 = (*DAT_086ef788)(lVar14);
        if ((uVar8 & 1) != 0) {
          if (*(int *)(DAT_083c89c0 + 0xe0) == 0) {
            FUN_033b9870();
          }
          if (DAT_086ed3c8 == (code *)0x0) {
            DAT_086ed3c8 = (code *)FUN_033d1b68("UnityEngine.Application::get_platform()");
          }
          iVar7 = (*DAT_086ed3c8)();
          if (iVar7 != 8) {
            if (*(int *)(DAT_083c89c0 + 0xe0) == 0) {
              FUN_033b9870();
            }
            if (DAT_086ed3c8 == (code *)0x0) {
              DAT_086ed3c8 = (code *)FUN_033d1b68("UnityEngine.Application::get_platform()");
            }
            iVar7 = (*DAT_086ed3c8)();
            if (iVar7 != 0x1f) {
              lVar14 = unaff_x19[0x20];
              uVar9 = FUN_07c6f3d4();
              if (lVar14 == 0) goto LAB_07c6fecc;
              FUN_07a1616c(lVar14,uVar9,0);
              goto LAB_07c6fde8;
            }
          }
        }
      }
      lVar14 = unaff_x19[0x20];
      if (lVar14 == 0) goto LAB_07c6fecc;
      if (DAT_086ef780 == (code *)0x0) {
        DAT_086ef780 = (code *)FUN_033d1b68("UnityEngine.TouchScreenKeyboard::get_canGetSelection()"
                                           );
      }
      uVar8 = (*DAT_086ef780)(lVar14);
      if ((uVar8 & 1) != 0) {
        FUN_07c6f59c();
      }
    }
LAB_07c6fde8:
    lVar14 = unaff_x19[0x20];
    if (lVar14 == 0) goto LAB_07c6fecc;
    if (DAT_086ef770 == (code *)0x0) {
      DAT_086ef770 = (code *)FUN_033d1b68("UnityEngine.TouchScreenKeyboard::get_status()");
    }
    iVar7 = (*DAT_086ef770)(lVar14);
    if (iVar7 == 0) {
      return;
    }
LAB_07c6fe18:
    lVar14 = unaff_x19[0x20];
    if (lVar14 == 0) goto LAB_07c6fecc;
  }
  else {
    if (lVar14 == 0) goto LAB_07c6fe94;
    if ((char)unaff_x19[0x32] == '\0') {
      if (DAT_086ef748 == (code *)0x0) {
        DAT_086ef748 = (code *)FUN_033d1b68("UnityEngine.TouchScreenKeyboard::get_text()");
      }
      (*DAT_086ef748)(lVar14);
      FUN_07c6caf0();
      goto LAB_07c6fe18;
    }
  }
  if (DAT_086ef770 == (code *)0x0) {
    DAT_086ef770 = (code *)FUN_033d1b68("UnityEngine.TouchScreenKeyboard::get_status()");
  }
  iVar7 = (*DAT_086ef770)(lVar14);
  if (iVar7 == 2) {
    *(undefined1 *)(unaff_x19 + 0x40) = 1;
  }
  else {
    lVar14 = unaff_x19[0x20];
    if (lVar14 == 0) {
LAB_07c6fecc:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    if (DAT_086ef770 == (code *)0x0) {
      DAT_086ef770 = (code *)FUN_033d1b68("UnityEngine.TouchScreenKeyboard::get_status()");
    }
    iVar7 = (*DAT_086ef770)(lVar14);
    if (iVar7 == 1) {
LAB_07c6fe8c:
      FUN_07c708e0();
    }
  }
LAB_07c6fe94:
  (**(code **)(*unaff_x19 + 0x388))();
  return;
}


