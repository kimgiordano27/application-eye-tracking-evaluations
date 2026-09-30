/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.PoolManager<object,-object>$$GetPool
ENTRY_POINT: 0126a5bc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 147
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_1;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x01269fc4) */
/* WARNING: Removing unreachable block (ram,0x0126b100) */

void Meta_XR_MRUtilityKit_SceneDecorator_PoolManager<object,_object>__GetPool(code *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  int unaff_w19;
  undefined8 uVar16;
  size_t unaff_x20;
  void *unaff_x21;
  void *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  (*param_1)();
  if (unaff_x27 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00dbe778();
  }
  if (unaff_w19 == 0x11) goto LAB_0126bd2c;
  if (unaff_w19 != 0) goto LAB_0126bd48;
  switch(*(uint *)(unaff_x29 + -0x144) & 0xff) {
  case 1:
    lVar9 = *(long *)(*(long *)(*unaff_x24 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar9 = *(long *)(*(long *)(*unaff_x24 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c();
    }
    if (**(char **)(lVar9 + 0xb8) == '\0') break;
    lVar9 = *unaff_x25;
    uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_9688) {
          puVar11 = (undefined8 *)(lVar9 + (long)(*piVar15 + 0x16) * 0x10 + 0x138);
          goto LAB_012694ac;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar11 = (undefined8 *)FUN_00d59724();
LAB_012694ac:
    (*(code *)*puVar11)();
    lVar9 = *unaff_x24;
    uVar10 = *(undefined8 *)(unaff_x29 + -0xd8);
LAB_0126a1c4:
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x18);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c(lVar9);
    }
    unaff_x21 = (void *)FUN_00da5060(uVar10,lVar9);
    pvVar12 = *(void **)(unaff_x29 + -0x140);
    goto LAB_0126bd40;
  case 2:
    lVar9 = *(long *)(*(long *)(*unaff_x24 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar9 = *(long *)(*(long *)(*unaff_x24 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c();
    }
    puVar1 = UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo;
    if (**(char **)(lVar9 + 0xb8) != '\0') {
      lVar9 = *unaff_x25;
      uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_9688) {
            puVar11 = (undefined8 *)(lVar9 + (long)(*piVar15 + 0x17) * 0x10 + 0x138);
            goto LAB_0126950c;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar11 = (undefined8 *)FUN_00d59724();
LAB_0126950c:
      (*(code *)*puVar11)();
      uVar10 = *(undefined8 *)puVar1;
      *(undefined8 *)(unaff_x29 + -0x118) = *(undefined8 *)(unaff_x29 + -0xe0);
      *(undefined8 *)(unaff_x29 + -0x120) = *(undefined8 *)(unaff_x29 + -0xe8);
LAB_0126a1b4:
      uVar10 = thunk_FUN_00d61fa0(uVar10,unaff_x29 + -0x120);
      lVar9 = *unaff_x24;
      goto LAB_0126a1c4;
    }
    break;
  case 3:
    lVar9 = *(long *)(*(long *)(*unaff_x24 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar9 = *(long *)(*(long *)(*unaff_x24 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c();
    }
    puVar11 = (undefined8 *)OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo;
    if (**(char **)(lVar9 + 0xb8) != '\0') {
      lVar9 = *unaff_x25;
      uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_9688) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar15 + 0x1b) * 0x10 + 0x138);
            goto LAB_012694d8;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_00d59724();
LAB_012694d8:
      (*(code *)*puVar7)();
      uVar16 = *(undefined8 *)(unaff_x29 + -0xd0);
LAB_012694ec:
      uVar10 = *puVar11;
      *(undefined8 *)(unaff_x29 + -0x120) = uVar16;
      goto LAB_0126a1b4;
    }
    break;
  case 4:
    lVar9 = *(long *)(*(long *)(*unaff_x24 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar9 = *(long *)(*(long *)(*unaff_x24 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c();
    }
    puVar11 = (undefined8 *)PTR_DAT_033f2f78;
    if (**(char **)(lVar9 + 0xb8) != '\0') {
      lVar9 = *unaff_x25;
      uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_9688) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar15 + 0x22) * 0x10 + 0x138);
            goto LAB_01269484;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_00d59724();
LAB_01269484:
      (*(code *)*puVar7)();
      uVar16 = *(undefined8 *)(unaff_x29 + -200);
      goto LAB_012694ec;
    }
    break;
  case 5:
    lVar9 = *(long *)(*(long *)(*unaff_x24 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar9 = *(long *)(*(long *)(*unaff_x24 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c();
    }
    puVar1 = StringLiteral_9958;
    if (**(char **)(lVar9 + 0xb8) != '\0') {
      lVar9 = *unaff_x25;
      uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_9688) {
            puVar11 = (undefined8 *)(lVar9 + (long)(*piVar15 + 0x23) * 0x10 + 0x138);
            goto LAB_0126a194;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar11 = (undefined8 *)FUN_00d59724();
LAB_0126a194:
      (*(code *)*puVar11)();
      uVar10 = *(undefined8 *)puVar1;
      *(undefined1 *)(unaff_x29 + -0x120) = *(undefined1 *)(unaff_x29 + -0xbc);
      goto LAB_0126a1b4;
    }
    break;
  case 6:
    lVar9 = *unaff_x25;
    uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_9688) {
          puVar11 = (undefined8 *)(lVar9 + (long)(*piVar15 + 0x24) * 0x10 + 0x138);
          goto LAB_0126923c;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar11 = (undefined8 *)FUN_00d59724();
LAB_0126923c:
    (*(code *)*puVar11)();
    goto LAB_0126a160;
  case 7:
    *(undefined4 *)(unaff_x29 + -0x158) = 1;
    lVar9 = *(long *)(*(long *)(*unaff_x24 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar9 = *(long *)(*(long *)(*unaff_x24 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c();
    }
    lVar13 = *unaff_x25;
    uVar10 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 8);
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_9688) {
          puVar11 = (undefined8 *)(lVar13 + (long)(*piVar15 + 0xb) * 0x10 + 0x138);
          goto LAB_012693a0;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar11 = (undefined8 *)FUN_00d59724();
LAB_012693a0:
    uVar14 = (*(code *)*puVar11)();
    if ((uVar14 & 1) == 0) {
      lVar9 = FUN_01c25128();
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar9 = FUN_01c254c8(lVar9,0);
      uVar10 = FUN_01600424(*(undefined8 *)StringLiteral_11299,*(undefined8 *)(unaff_x29 + -0x80),
                            *(undefined8 *)PTR_DAT_033ecaa0,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c(uVar10,uVar10);
      }
      FUN_01c25600(lVar9,uVar10,0);
      unaff_x28 = *(void **)(unaff_x29 + -0x150);
      memset(unaff_x28,0,unaff_x20);
    }
    else {
      lVar9 = *unaff_x25;
      uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_9688) {
            puVar11 = (undefined8 *)(lVar9 + (long)(*piVar15 + 6) * 0x10 + 0x138);
            goto LAB_01269540;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar11 = (undefined8 *)FUN_00d59724();
LAB_01269540:
      uVar5 = (*(code *)*puVar11)();
      *(undefined4 *)(unaff_x29 + -0x168) = uVar5;
      *(undefined8 *)(unaff_x29 + -0x170) = uVar10;
      uVar10 = *(undefined8 *)(unaff_x29 + -0xb8);
      if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar14 = FUN_0178a8c4(uVar10,0,0);
      if ((uVar14 & 1) == 0) {
LAB_012696b0:
        lVar9 = *(long *)(*(long *)(*unaff_x24 + 0xc0) + 8);
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar9 = *(long *)(*(long *)(*unaff_x24 + 0xc0) + 8);
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        if (*(char *)(*(long *)(lVar9 + 0xb8) + 1) == '\0') {
          lVar9 = FUN_01c25128();
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar10 = FUN_01c25190(lVar9,0);
          lVar9 = *(long *)(*(long *)(*unaff_x24 + 0xc0) + 8);
          if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
            lVar9 = FUN_00d5941c();
          }
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          puVar11 = *(undefined8 **)(*(long *)(*unaff_x24 + 0xc0) + 0x20);
          uVar16 = *puVar11;
          *(undefined8 *)(unaff_x29 + -0x78) = uVar10;
          (*(code *)puVar11[2])(uVar16,puVar11,0,unaff_x29 + -0x78,unaff_x29 + -0x68);
          plVar8 = *(long **)(unaff_x29 + -0x68);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar9 = *(long *)(*(long *)(*unaff_x24 + 0xc0) + 0x28);
          if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
            lVar9 = FUN_00d5941c(lVar9);
          }
          lVar13 = *plVar8;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar9) {
                lVar9 = lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138;
                goto LAB_01269e94;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          lVar9 = FUN_00d59724(plVar8,lVar9,1);
LAB_01269e94:
          *(void **)(unaff_x29 + -0x130) = unaff_x21;
          *(long **)(unaff_x29 + -0x138) = unaff_x25;
          lVar9 = *(long *)(lVar9 + 8);
          (**(code **)(lVar9 + 0x10))(*(undefined8 *)(lVar9 + 8),lVar9,plVar8,unaff_x29 + -0x138);
          pvVar12 = unaff_x21;
LAB_01269ec4:
          memcpy(unaff_x28,pvVar12,unaff_x20);
        }
        else {
LAB_012696f8:
          memset(unaff_x28,0,unaff_x20);
        }
      }
      else {
        uVar10 = *(undefined8 *)(unaff_x29 + -0xb8);
        if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar14 = FUN_0178a8c4(*(undefined8 *)(unaff_x29 + -0x170),uVar10,0);
        if ((uVar14 & 1) == 0) goto LAB_012696b0;
        uVar10 = *(undefined8 *)(unaff_x29 + -0xb8);
        if (*(int *)(*(long *)System_Net_FileWebRequest_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        bVar4 = FUN_01c307bc(uVar10,0);
        lVar9 = *(long *)(*(long *)(*unaff_x24 + 0xc0) + 8);
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar9 = *(long *)(*(long *)(*unaff_x24 + 0xc0) + 8);
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        uVar10 = *(undefined8 *)(unaff_x29 + -0xb8);
        if ((bVar4 & **(byte **)(lVar9 + 0xb8) & 1) != 0) {
          if (*(int *)(*(long *)Method_UnityEngine_XR_ARFoundation_ARAnchorManager_TryRemoveAnchor__
                      + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          plVar8 = (long *)FUN_01c25a14(uVar10,0);
          if (plVar8 == (long *)0x0) {
            *(long *)(unaff_x29 + -0x160) = unaff_x23;
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar10 = (**(code **)(*plVar8 + 0x178))();
          lVar9 = *(long *)(*(long *)(*unaff_x24 + 0xc0) + 0x18);
          if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
            lVar9 = FUN_00d5941c(lVar9);
          }
          pvVar12 = (void *)FUN_00da5060(uVar10,lVar9);
          goto LAB_01269ec4;
        }
        plVar8 = *(long **)(unaff_x29 + -0x170);
        if (plVar8 == (long *)0x0) {
          *(long *)(unaff_x29 + -0x160) = unaff_x23;
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar6 = (**(code **)(*plVar8 + 0x2c8))(plVar8,uVar10,*(undefined8 *)(*plVar8 + 0x2d0));
        *(uint *)(unaff_x29 + -0x178) = uVar6;
        if ((uVar6 & 1) != 0) {
LAB_01269e40:
          uVar10 = *(undefined8 *)(unaff_x29 + -0xb8);
          if ((bVar4 & 1) == 0) {
            lVar9 = FUN_01c25128();
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            uVar16 = FUN_01c25190(lVar9,0);
            if (*(int *)(*(long *)Method_System_Collections_Generic_List<char>__ctor__ + 0xe0) == 0)
            {
              thunk_FUN_00d32864();
            }
            plVar8 = (long *)FUN_01c1223c(uVar10,uVar16,0);
            if (plVar8 == (long *)0x0) {
              *(long *)(unaff_x29 + -0x160) = unaff_x23;
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            lVar9 = *plVar8;
            uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_3085) {
                  puVar11 = (undefined8 *)(lVar9 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                  goto LAB_0126a970;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar11 = (undefined8 *)FUN_00d59724(plVar8,*(long *)StringLiteral_3085,2);
LAB_0126a970:
            uVar10 = (*(code *)*puVar11)(plVar8);
          }
          else {
            if (*(int *)(*(long *)
                          Method_UnityEngine_XR_ARFoundation_ARAnchorManager_TryRemoveAnchor__ +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            plVar8 = (long *)FUN_01c25a14(uVar10,0);
            if (plVar8 == (long *)0x0) {
              *(long *)(unaff_x29 + -0x160) = unaff_x23;
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            uVar10 = (**(code **)(*plVar8 + 0x178))();
          }
          if ((*(uint *)(unaff_x29 + -0x178) & 1) == 0) {
            uVar16 = *(undefined8 *)(unaff_x29 + -0xb8);
            if (*(int *)(*(long *)Method_System_Collections_Generic_List<Collider>_Clear__ + 0xe0)
                == 0) {
              thunk_FUN_00d32864();
            }
            lVar9 = FUN_01c62024(uVar16,*(undefined8 *)(unaff_x29 + -0x170),0,0);
            if (lVar9 == 0) {
              lVar9 = *(long *)(*(long *)(*unaff_x24 + 0xc0) + 0x18);
              if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
                lVar9 = FUN_00d5941c(lVar9);
              }
              pvVar12 = (void *)FUN_00da5060(uVar10,lVar9);
            }
            else {
              (**(code **)(lVar9 + 0x18))
                        (*(undefined8 *)(lVar9 + 0x40),uVar10,unaff_x29 + -0x68,
                         *(undefined8 *)(lVar9 + 0x28));
              uVar10 = *(undefined8 *)(unaff_x29 + -0x68);
              lVar9 = *(long *)(*(long *)(*unaff_x24 + 0xc0) + 0x18);
              if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
                lVar9 = FUN_00d5941c(lVar9);
              }
              pvVar12 = (void *)FUN_00da5060(uVar10,lVar9);
            }
          }
          else {
            lVar9 = *(long *)(*(long *)(*unaff_x24 + 0xc0) + 0x18);
            if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
              lVar9 = FUN_00d5941c(lVar9);
            }
            pvVar12 = (void *)FUN_00da5060(uVar10,lVar9);
          }
          goto LAB_01269ec4;
        }
        uVar10 = *(undefined8 *)(unaff_x29 + -0xb8);
        if (*(int *)(*(long *)Method_System_Collections_Generic_List<Collider>_Clear__ + 0xe0) == 0)
        {
          thunk_FUN_00d32864();
        }
        uVar14 = FUN_01c60e90(uVar10,*(undefined8 *)(unaff_x29 + -0x170),0,0);
        if ((uVar14 & 1) != 0) goto LAB_01269e40;
        lVar9 = *(long *)(*(long *)(*unaff_x24 + 0xc0) + 8);
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar9 = *(long *)(*(long *)(*unaff_x24 + 0xc0) + 8);
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        if (*(char *)(*(long *)(lVar9 + 0xb8) + 1) != '\0') {
LAB_0126a8c8:
          uVar10 = *(undefined8 *)(unaff_x29 + -0xb8);
          lVar9 = FUN_01c25128();
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar16 = FUN_01c25190(lVar9,0);
          if (*(int *)(*(long *)Method_System_Collections_Generic_List<char>__ctor__ + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          plVar8 = (long *)FUN_01c1223c(uVar10,uVar16,0);
          if (plVar8 == (long *)0x0) {
            *(long *)(unaff_x29 + -0x160) = unaff_x23;
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar9 = *plVar8;
          uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_3085) {
                puVar11 = (undefined8 *)(lVar9 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                goto LAB_0126ab2c;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar11 = (undefined8 *)FUN_00d59724(plVar8,*(long *)StringLiteral_3085,2);
LAB_0126ab2c:
          (*(code *)*puVar11)(plVar8);
          if (-1 < *(int *)(unaff_x29 + -0x168)) {
            FUN_01c2e7bc();
          }
          memset(unaff_x28,0,unaff_x20);
          lVar9 = FUN_01c25128();
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar10 = FUN_01c254c8(lVar9,0);
          plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,7);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if ((*(long *)OVR_OpenVR_IVRInput__GetOriginLocalizedName_TypeInfo != 0) &&
             (lVar9 = thunk_FUN_00d6225c(*(long *)
                                          OVR_OpenVR_IVRInput__GetOriginLocalizedName_TypeInfo,
                                         *(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
            uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar10,0);
          }
          *(undefined8 *)(unaff_x29 + -0x178) = uVar10;
          if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          plVar8[4] = *(long *)OVR_OpenVR_IVRInput__GetOriginLocalizedName_TypeInfo;
          uVar10 = *(undefined8 *)(unaff_x29 + -0xb8);
          if (*(int *)(*(long *)Method_System_Collections_Generic_List<Collider>_Clear__ + 0xe0) ==
              0) {
            thunk_FUN_00d32864();
          }
          lVar9 = FUN_01c4b4e0(uVar10,0);
          if ((lVar9 != 0) &&
             (lVar13 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar13 == 0)) {
            uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar10,0);
          }
          uVar6 = *(uint *)(plVar8 + 3);
          if (uVar6 < 2) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          plVar8[5] = lVar9;
          if (*(long *)
               Method_System_Collections_Generic_List<MetaXRAcousticGeometry_TerrainMaterial>__ctor__
              == 0) {
            uVar10 = *(undefined8 *)(unaff_x29 + -0x170);
          }
          else {
            lVar9 = thunk_FUN_00d6225c(*(long *)
                                        Method_System_Collections_Generic_List<MetaXRAcousticGeometry_TerrainMaterial>__ctor__
                                       ,*(undefined8 *)(*plVar8 + 0x40));
            uVar10 = *(undefined8 *)(unaff_x29 + -0x170);
            if (lVar9 == 0) {
              uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar10,0);
            }
            uVar6 = *(uint *)(plVar8 + 3);
          }
          if (uVar6 < 3) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          plVar8[6] = *(long *)
                       Method_System_Collections_Generic_List<MetaXRAcousticGeometry_TerrainMaterial>__ctor__
          ;
          lVar9 = FUN_01c4b4e0(uVar10,0);
          if ((lVar9 != 0) &&
             (lVar13 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar13 == 0)) {
            uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar10,0);
          }
          uVar6 = *(uint *)(plVar8 + 3);
          if (uVar6 < 4) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          plVar8[7] = lVar9;
          if (*(long *)Method_System_Enum_GetNames__ != 0) {
            lVar9 = thunk_FUN_00d6225c(*(long *)Method_System_Enum_GetNames__,
                                       *(undefined8 *)(*plVar8 + 0x40));
            if (lVar9 == 0) {
              uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar10,0);
            }
            uVar6 = *(uint *)(plVar8 + 3);
          }
          if (uVar6 < 5) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          plVar8[8] = *(long *)Method_System_Enum_GetNames__;
          lVar9 = *(long *)(unaff_x29 + -0x80);
          if (lVar9 != 0) {
            lVar13 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40));
            if (lVar13 == 0) {
              uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar10,0);
            }
            uVar6 = *(uint *)(plVar8 + 3);
          }
          if (uVar6 < 6) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          plVar8[9] = lVar9;
          lVar9 = *(long *)(unaff_x29 + -0x178);
          if (*(long *)PTR_DAT_033ecaa0 != 0) {
            lVar13 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033ecaa0,*(undefined8 *)(*plVar8 + 0x40));
            if (lVar13 == 0) {
              uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar10,0);
            }
            uVar6 = *(uint *)(plVar8 + 3);
          }
          if (uVar6 < 7) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          plVar8[10] = *(long *)PTR_DAT_033ecaa0;
          uVar10 = FUN_01600844(plVar8,0);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c(uVar10,uVar10);
          }
          FUN_01c25764(lVar9,uVar10,0);
          goto LAB_012696f8;
        }
        lVar9 = *(long *)(*(long *)(*unaff_x24 + 0xc0) + 8);
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        *(long *)(unaff_x29 + -0x160) = unaff_x23;
        lVar9 = *(long *)(*(long *)(*unaff_x24 + 0xc0) + 8);
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        if (*(char *)(*(long *)(lVar9 + 0xb8) + 0x10) == '\0') {
          lVar9 = *unaff_x25;
          uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_9688) {
                puVar11 = (undefined8 *)(lVar9 + (long)(*piVar15 + 8) * 0x10 + 0x138);
                goto LAB_0126ada4;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar11 = (undefined8 *)FUN_00d59724();
LAB_0126ada4:
          lVar9 = (*(code *)*puVar11)();
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar9 = FUN_01c25128(lVar9,0);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          unaff_x23 = *(long *)(unaff_x29 + -0x160);
          if (*(char *)(lVar9 + 0x28) == '\0') goto LAB_0126a8c8;
        }
        lVar9 = FUN_01c25128();
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar10 = FUN_01c254c8(lVar9,0);
        *(undefined8 *)(unaff_x29 + -0x178) = uVar10;
        plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,7);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if ((*(long *)OVR_OpenVR_IVRInput__GetOriginLocalizedName_TypeInfo != 0) &&
           (lVar9 = thunk_FUN_00d6225c(*(long *)OVR_OpenVR_IVRInput__GetOriginLocalizedName_TypeInfo
                                       ,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
          uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar10,0);
        }
        if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar8[4] = *(long *)OVR_OpenVR_IVRInput__GetOriginLocalizedName_TypeInfo;
        uVar10 = *(undefined8 *)(unaff_x29 + -0xb8);
        if (*(int *)(*(long *)Method_System_Collections_Generic_List<Collider>_Clear__ + 0xe0) == 0)
        {
          thunk_FUN_00d32864();
        }
        lVar9 = FUN_01c4b4e0(uVar10,0);
        if ((lVar9 != 0) &&
           (lVar13 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar13 == 0)) {
          uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar10,0);
        }
        uVar6 = *(uint *)(plVar8 + 3);
        if (uVar6 < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar8[5] = lVar9;
        if (*(long *)
             Method_System_Collections_Generic_List<MetaXRAcousticGeometry_TerrainMaterial>__ctor__
            != 0) {
          lVar9 = thunk_FUN_00d6225c(*(long *)
                                      Method_System_Collections_Generic_List<MetaXRAcousticGeometry_TerrainMaterial>__ctor__
                                     ,*(undefined8 *)(*plVar8 + 0x40));
          if (lVar9 == 0) {
            uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar10,0);
          }
          uVar6 = *(uint *)(plVar8 + 3);
        }
        if (uVar6 < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar8[6] = *(long *)
                     Method_System_Collections_Generic_List<MetaXRAcousticGeometry_TerrainMaterial>__ctor__
        ;
        lVar9 = FUN_01c4b4e0(*(undefined8 *)(unaff_x29 + -0x170),0);
        if ((lVar9 != 0) &&
           (lVar13 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar13 == 0)) {
          uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar10,0);
        }
        puVar1 = PTR_DAT_033f5f40;
        uVar6 = *(uint *)(plVar8 + 3);
        if (uVar6 < 4) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar8[7] = lVar9;
        lVar9 = *(long *)puVar1;
        if (lVar9 != 0) {
          lVar9 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40));
          if (lVar9 == 0) {
            uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar10,0);
          }
          uVar6 = *(uint *)(plVar8 + 3);
        }
        if (uVar6 < 5) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar8[8] = *(long *)puVar1;
        lVar9 = *(long *)(unaff_x29 + -0x80);
        if (lVar9 != 0) {
          lVar13 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40));
          if (lVar13 == 0) {
            uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar10,0);
          }
          uVar6 = *(uint *)(plVar8 + 3);
        }
        if (uVar6 < 6) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar8[9] = lVar9;
        if (*(long *)PTR_DAT_033ecaa0 != 0) {
          lVar9 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033ecaa0,*(undefined8 *)(*plVar8 + 0x40));
          if (lVar9 == 0) {
            uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar10,0);
          }
          uVar6 = *(uint *)(plVar8 + 3);
        }
        if (uVar6 < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar8[10] = *(long *)PTR_DAT_033ecaa0;
        uVar10 = FUN_01600844(plVar8,0);
        if (*(long *)(unaff_x29 + -0x178) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c(0,uVar10);
        }
        FUN_01c25764(*(long *)(unaff_x29 + -0x178),uVar10,0);
        lVar9 = FUN_01c25128();
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar10 = FUN_01c25190(lVar9,0);
        lVar9 = *(long *)(*(long *)(*unaff_x24 + 0xc0) + 8);
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        puVar11 = *(undefined8 **)(*(long *)(*unaff_x24 + 0xc0) + 0x20);
        uVar16 = *puVar11;
        *(undefined8 *)(unaff_x29 + -0x78) = uVar10;
        (*(code *)puVar11[2])(uVar16,puVar11,0,unaff_x29 + -0x78,unaff_x29 + -0x68);
        plVar8 = *(long **)(unaff_x29 + -0x68);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar9 = *(long *)(*(long *)(*unaff_x24 + 0xc0) + 0x28);
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c(lVar9);
        }
        lVar13 = *plVar8;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar9) {
              lVar9 = lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138;
              goto LAB_0126b0ac;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        lVar9 = FUN_00d59724(plVar8,lVar9,1);
LAB_0126b0ac:
        *(void **)(unaff_x29 + -0x130) = unaff_x21;
        *(long **)(unaff_x29 + -0x138) = unaff_x25;
        lVar9 = *(long *)(lVar9 + 8);
        (**(code **)(lVar9 + 0x10))(*(undefined8 *)(lVar9 + 8),lVar9,plVar8,unaff_x29 + -0x138);
        memcpy(unaff_x28,unaff_x21,unaff_x20);
        unaff_x23 = *(long *)(unaff_x29 + -0x160);
      }
      if (-1 < *(int *)(unaff_x29 + -0x168)) {
        memcpy(unaff_x21,unaff_x28,unaff_x20);
        if ((*(byte *)(*(long *)(*(long *)(*unaff_x24 + 0xc0) + 0x18) + 0x132) & 1) == 0) {
          FUN_00d5941c();
        }
        thunk_FUN_00d61fa0();
        FUN_01c2e7bc();
      }
    }
    memcpy(unaff_x21,unaff_x28,unaff_x20);
    memcpy(unaff_x22,unaff_x21,unaff_x20);
    if (*(int *)(unaff_x29 + -0x158) != 0) {
      lVar9 = *unaff_x25;
      uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_9688) {
            puVar11 = (undefined8 *)(lVar9 + (long)(*piVar15 + 0xc) * 0x10 + 0x138);
            goto Oculus_Interaction_PointerInteractor<object,_object>__HandlePointerEventRaised;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar11 = (undefined8 *)FUN_00d59724();
Oculus_Interaction_PointerInteractor<object,_object>__HandlePointerEventRaised:
      (*(code *)*puVar11)();
    }
    goto LAB_0126bd2c;
  case 9:
    lVar9 = *unaff_x25;
    uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_9688) {
          puVar11 = (undefined8 *)(lVar9 + (long)(*piVar15 + 0x11) * 0x10 + 0x138);
          goto LAB_0126925c;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar11 = (undefined8 *)FUN_00d59724();
LAB_0126925c:
    (*(code *)*puVar11)();
    uVar10 = FUN_01c2e82c();
    lVar9 = *(long *)(*(long *)(*unaff_x24 + 0xc0) + 0x18);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c(lVar9);
    }
    pvVar12 = (void *)FUN_00da5060(uVar10,lVar9);
    goto LAB_01269380;
  case 10:
    lVar9 = *unaff_x25;
    uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_9688) {
          puVar11 = (undefined8 *)(lVar9 + (long)(*piVar15 + 0x12) * 0x10 + 0x138);
          goto LAB_0126932c;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar11 = (undefined8 *)FUN_00d59724();
LAB_0126932c:
    (*(code *)*puVar11)();
    uVar10 = FUN_01c2e8a0();
    lVar9 = *(long *)(*(long *)(*unaff_x24 + 0xc0) + 0x18);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c(lVar9);
    }
    pvVar12 = (void *)FUN_00da5060(uVar10,lVar9);
    goto LAB_01269380;
  case 0xb:
    lVar9 = *unaff_x25;
    uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_9688) {
          puVar11 = (undefined8 *)(lVar9 + (long)(*piVar15 + 0x13) * 0x10 + 0x138);
          goto LAB_012692c4;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar11 = (undefined8 *)FUN_00d59724();
LAB_012692c4:
    (*(code *)*puVar11)();
    uVar10 = FUN_01c2ea18();
    lVar9 = *(long *)(*(long *)(*unaff_x24 + 0xc0) + 0x18);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c(lVar9);
    }
    pvVar12 = (void *)FUN_00da5060(uVar10,lVar9);
    goto LAB_01269380;
  case 0x10:
    lVar9 = *unaff_x25;
    uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_9688) {
          puVar11 = (undefined8 *)(lVar9 + (long)(*piVar15 + 0x14) * 0x10 + 0x138);
          goto LAB_012691d4;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar11 = (undefined8 *)FUN_00d59724();
LAB_012691d4:
    (*(code *)*puVar11)();
    uVar10 = FUN_01c2ec30();
    lVar9 = *(long *)(*(long *)(*unaff_x24 + 0xc0) + 0x18);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c(lVar9);
    }
    pvVar12 = (void *)FUN_00da5060(uVar10,lVar9);
LAB_01269380:
    memcpy(unaff_x22,pvVar12,unaff_x20);
    goto LAB_0126bd2c;
  }
  lVar9 = FUN_01c25128();
  puVar2 = Method_Oculus_Interaction_PokeInteractor_<>c_<_ctor>b__86_1__;
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<InputAction,_InputSystemUIInputModule_InputActionReferenceState>_Remove__
  ;
  if (lVar9 != 0) {
    lVar9 = FUN_01c254c8(lVar9,0);
    puVar3 = StringLiteral_4901;
    *(undefined8 *)(unaff_x29 + -0x118) = 0xffffffffffffffff;
    *(undefined8 *)(unaff_x29 + -0x120) = *(undefined8 *)puVar3;
    *(char *)(unaff_x29 + -0x110) = (char)*(undefined4 *)(unaff_x29 + -0x144);
    uVar10 = FUN_017a7f78(unaff_x29 + -0x120,0);
    uVar10 = FUN_01600424(*(undefined8 *)puVar1,uVar10,*(undefined8 *)puVar2,0);
    if (lVar9 != 0) {
      FUN_01c25764(lVar9,uVar10,0);
      lVar9 = *unaff_x25;
      uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_9688) {
            puVar11 = (undefined8 *)(lVar9 + (long)(*piVar15 + 0x25) * 0x10 + 0x138);
            goto LAB_0126a154;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar11 = (undefined8 *)FUN_00d59724();
LAB_0126a154:
      (*(code *)*puVar11)();
LAB_0126a160:
      unaff_x22 = *(void **)(unaff_x29 + -0x150);
      memset(unaff_x22,0,unaff_x20);
LAB_0126bd2c:
      memcpy(unaff_x21,unaff_x22,unaff_x20);
      pvVar12 = *(void **)(unaff_x29 + -0x140);
LAB_0126bd40:
      memcpy(pvVar12,unaff_x21,unaff_x20);
LAB_0126bd48:
      if (*(long *)(unaff_x23 + 0x28) != *(long *)(unaff_x29 + -0x60)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


