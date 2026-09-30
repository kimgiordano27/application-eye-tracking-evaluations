/*
FUNCTION_NAME: FUN_05547d40
ENTRY_POINT: 05547d40
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x055488d4) */
/* WARNING: Removing unreachable block (ram,0x0554845c) */
/* WARNING: Removing unreachable block (ram,0x055488dc) */

long FUN_05547d40(long param_1,long param_2,long param_3,ulong param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  long *plVar19;
  uint uVar20;
  long lVar21;
  
  if ((DAT_06bbf7a5 & 1) == 0) {
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_BurstDirectCall_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(PTR_DAT_067cb558);
    FUN_02f08768(PTR_DAT_067c91b8);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
                );
    DAT_06bbf7a5 = 1;
  }
  if (param_2 != 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_2 + 0x90) = uVar8;
    *(undefined1 *)(param_2 + 0xb0) = *(undefined1 *)(param_1 + 0xb0);
    *(undefined8 *)(param_2 + 0xb8) = *(undefined8 *)(param_1 + 0xb8);
    *(undefined1 *)(param_2 + 0xc0) = *(undefined1 *)(param_1 + 0xc0);
    *(undefined8 *)(param_2 + 200) = *(undefined8 *)(param_1 + 200);
    *(undefined4 *)(param_2 + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
    uVar8 = *(undefined8 *)(param_1 + 0xd8);
    *(undefined8 *)(param_2 + 0xe0) = *(undefined8 *)(param_1 + 0xe0);
    *(undefined8 *)(param_2 + 0xd8) = uVar8;
    *(undefined2 *)(param_2 + 0xe8) = *(undefined2 *)(param_1 + 0xe8);
    uVar8 = *(undefined8 *)(param_1 + 0xa0);
    *(undefined8 *)(param_2 + 0xa8) = *(undefined8 *)(param_1 + 0xa8);
    *(undefined8 *)(param_2 + 0xa0) = uVar8;
    *(undefined8 *)(param_2 + 0x130) = *(undefined8 *)(param_1 + 0x130);
    *(undefined1 *)(param_2 + 0x128) = *(undefined1 *)(param_1 + 0x128);
    if (*(long *)(param_1 + 0x68) != 0) {
      FUN_0554a0f4(param_2,*(undefined4 *)(*(long *)(param_1 + 0x68) + 0x1c));
      FUN_0554bfa8(param_2,*(undefined4 *)(param_1 + 0x21c));
      plVar19 = *(long **)(param_1 + 0x40);
      if (plVar19 != (long *)0x0) {
        iVar5 = (**(code **)(*plVar19 + 0x1c8))(plVar19,*(undefined8 *)(*plVar19 + 0x1d0));
        if (0 < iVar5) {
          iVar5 = 0;
          do {
            lVar21 = *(long *)(param_2 + 0x40);
            lVar7 = FUN_0557e298(plVar19,iVar5,0);
            if ((lVar7 == 0) || (uVar8 = FUN_05561a38(lVar7,0), lVar21 == 0)) goto LAB_05548658;
            FUN_0557e700(lVar21,uVar8,0);
            iVar5 = iVar5 + 1;
            iVar6 = (**(code **)(*plVar19 + 0x1c8))(plVar19,*(undefined8 *)(*plVar19 + 0x1d0));
          } while (iVar5 < iVar6);
        }
        if (((param_3 == 0) && ((param_4 & 1) == 0)) &&
           (iVar5 = (**(code **)(*plVar19 + 0x1c8))(plVar19,*(undefined8 *)(*plVar19 + 0x1d0)),
           0 < iVar5)) {
          iVar5 = 0;
          do {
            lVar21 = *(long *)(param_2 + 0x40);
            lVar7 = FUN_0557e298(plVar19,iVar5,0);
            if ((lVar7 == 0) || (lVar21 == 0)) goto LAB_05548658;
            lVar7 = FUN_0557e3c8(lVar21,*(undefined8 *)(lVar7 + 0x30),0);
            lVar21 = FUN_0557e298(plVar19,iVar5,0);
            if ((lVar21 == 0) || (uVar8 = FUN_0555f7d8(lVar21,0), lVar7 == 0)) goto LAB_05548658;
            FUN_0555c54c(lVar7,uVar8,0);
            iVar5 = iVar5 + 1;
            iVar6 = (**(code **)(*plVar19 + 0x1c8))(plVar19,*(undefined8 *)(*plVar19 + 0x1d0));
          } while (iVar5 < iVar6);
        }
        lVar7 = FUN_0554d480(param_1);
        if (lVar7 != 0) {
          if (*(long *)(lVar7 + 0x18) != 0) {
            plVar19 = (long *)FUN_02f0880c(*(undefined8 *)
                                            UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_BurstDirectCall_TypeInfo
                                          );
            uVar15 = *(uint *)(lVar7 + 0x18);
            if (0 < (int)uVar15) {
              lVar21 = 4;
              do {
                uVar20 = (int)lVar21 - 4;
                if (uVar15 <= uVar20) {
LAB_055488b4:
                    /* WARNING: Subroutine does not return */
                  FUN_02f089d0();
                }
                lVar16 = *(long *)(lVar7 + lVar21 * 8);
                if (((lVar16 == 0) || (*(long *)(param_2 + 0x40) == 0)) ||
                   (lVar16 = FUN_0557e298(*(long *)(param_2 + 0x40),*(undefined4 *)(lVar16 + 100),0)
                   , plVar19 == (long *)0x0)) goto LAB_05548658;
                if ((lVar16 != 0) &&
                   (lVar9 = thunk_FUN_02f45174(lVar16,*(undefined8 *)(*plVar19 + 0x40)), lVar9 == 0)
                   ) {
                  uVar8 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
                  FUN_02f0888c(uVar8,0);
                }
                if (*(uint *)(plVar19 + 3) <= uVar20) goto LAB_055488b4;
                plVar19[lVar21] = lVar16;
                lVar21 = lVar21 + 1;
                uVar15 = *(uint *)(lVar7 + 0x18);
              } while ((int)lVar21 + -4 < (int)uVar15);
            }
            FUN_0554d53c(param_2,plVar19);
          }
          puVar4 = 
          UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
          ;
          puVar2 = 
          UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
          ;
          puVar3 = PTR_DAT_067c91b8;
          plVar19 = *(long **)(param_1 + 0x48);
          if (plVar19 != (long *)0x0) {
            iVar5 = 0;
LAB_05548038:
            iVar6 = (**(code **)(*plVar19 + 0x1c8))(plVar19,*(undefined8 *)(*plVar19 + 0x1d0));
            plVar19 = *(long **)(param_1 + 0x48);
            if (iVar6 <= iVar5) {
              if (plVar19 != (long *)0x0) {
                iVar5 = 0;
                goto LAB_055484dc;
              }
              goto LAB_05548658;
            }
            if (plVar19 == (long *)0x0) goto LAB_05548658;
            plVar19 = (long *)FUN_0557b300(plVar19,iVar5,0);
            if (plVar19 == (long *)0x0) {
LAB_05548080:
              plVar19 = (long *)0x0;
            }
            else {
              lVar7 = *(long *)puVar2;
              bVar1 = *(byte *)(lVar7 + 0x130);
              if (*(byte *)(*plVar19 + 0x130) < bVar1) goto LAB_05548080;
              if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) != lVar7) {
                plVar19 = (long *)0x0;
              }
            }
            if (*(long *)(param_1 + 0x48) == 0) goto LAB_05548658;
            plVar10 = (long *)FUN_0557b300(*(long *)(param_1 + 0x48),iVar5,0);
            if (plVar10 == (long *)0x0) {
LAB_055480d0:
              if (plVar19 != (long *)0x0) goto LAB_055480d4;
LAB_05548188:
              if (plVar10 != (long *)0x0) {
                lVar7 = FUN_055afa10(plVar10,param_2,0);
                if (*(long *)(param_2 + 0x48) == 0) goto LAB_05548658;
                plVar19 = (long *)FUN_0557ba08(*(long *)(param_2 + 0x48),lVar7,0);
                if (plVar19 != (long *)0x0) {
                  if ((*(long *)(param_1 + 0x48) != 0) &&
                     (plVar10 = (long *)FUN_0557b300(*(long *)(param_1 + 0x48),iVar5,0),
                     plVar10 != (long *)0x0)) {
                    uVar8 = (**(code **)(*plVar10 + 0x178))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x180));
                    (**(code **)(*plVar19 + 0x188))(plVar19,uVar8,*(undefined8 *)(*plVar19 + 400));
                    if ((lVar7 != 0) &&
                       ((plVar10 = (long *)FUN_0557b028(lVar7,0), plVar10 != (long *)0x0 &&
                        (plVar10 = (long *)(**(code **)(*plVar10 + 0x388))
                                                     (plVar10,*(undefined8 *)(*plVar10 + 0x390)),
                        plVar10 != (long *)0x0)))) {
                      lVar21 = *plVar10;
                      uVar17 = (ulong)*(ushort *)(lVar21 + 0x12e);
                      if (uVar17 != 0) {
                        piVar18 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_067cb558) {
                            puVar11 = (undefined8 *)(lVar21 + (long)*piVar18 * 0x10 + 0x138);
                            goto LAB_05548274;
                          }
                          uVar17 = uVar17 - 1;
                          piVar18 = piVar18 + 4;
                        } while (uVar17 != 0);
                      }
                      puVar11 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)PTR_DAT_067cb558,0);
LAB_05548274:
                      plVar10 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
                      do {
                        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02f089c8();
                        }
                        lVar21 = *plVar10;
                        uVar17 = (ulong)*(ushort *)(lVar21 + 0x12e);
                        if (uVar17 != 0) {
                          piVar18 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
                              puVar11 = (undefined8 *)(lVar21 + (long)*piVar18 * 0x10 + 0x138);
                              goto LAB_055482e4;
                            }
                            uVar17 = uVar17 - 1;
                            piVar18 = piVar18 + 4;
                          } while (uVar17 != 0);
                        }
                        puVar11 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)puVar3,0);
LAB_055482e4:
                        uVar17 = (*(code *)*puVar11)(plVar10,puVar11[1]);
                        if ((uVar17 & 1) == 0) goto LAB_055483c0;
                        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02f089c8();
                        }
                        lVar21 = *plVar10;
                        uVar17 = (ulong)*(ushort *)(lVar21 + 0x12e);
                        if (uVar17 != 0) {
                          piVar18 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
                              puVar11 = (undefined8 *)(lVar21 + (long)(*piVar18 + 1) * 0x10 + 0x138)
                              ;
                              goto LAB_0554834c;
                            }
                            uVar17 = uVar17 - 1;
                            piVar18 = piVar18 + 4;
                          } while (uVar17 != 0);
                        }
                        puVar11 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)puVar3,1);
LAB_0554834c:
                        uVar8 = (*(code *)*puVar11)(plVar10,puVar11[1]);
                        plVar12 = (long *)FUN_0557b028(plVar19,0);
                        plVar13 = (long *)FUN_0557b028(lVar7,0);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02f089c8();
                        }
                        uVar14 = (**(code **)(*plVar13 + 0x308))
                                           (plVar13,uVar8,*(undefined8 *)(*plVar13 + 0x310));
                        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02f089c8();
                        }
                        (**(code **)(*plVar12 + 0x318))
                                  (plVar12,uVar8,uVar14,*(undefined8 *)(*plVar12 + 800));
                      } while( true );
                    }
                  }
                  goto LAB_05548658;
                }
              }
            }
            else {
              lVar7 = *(long *)puVar4;
              bVar1 = *(byte *)(lVar7 + 0x130);
              if (*(byte *)(*plVar10 + 0x130) < bVar1) {
                plVar10 = (long *)0x0;
                goto LAB_055480d0;
              }
              if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != lVar7) {
                plVar10 = (long *)0x0;
              }
              if (plVar19 == (long *)0x0) goto LAB_05548188;
LAB_055480d4:
              lVar7 = (**(code **)(*plVar19 + 0x1b8))(plVar19,*(undefined8 *)(*plVar19 + 0x1c0));
              lVar21 = (**(code **)(*plVar19 + 0x2c8))(plVar19,*(undefined8 *)(*plVar19 + 0x2d0));
              if (lVar7 != lVar21) goto LAB_05548460;
              uVar8 = FUN_055a4c40(plVar19,param_2,0);
              if (*(long *)(param_2 + 0x48) == 0) goto LAB_05548658;
              plVar19 = (long *)FUN_0557ba08(*(long *)(param_2 + 0x48),uVar8,0);
              if (plVar19 != (long *)0x0) {
                if ((*(long *)(param_1 + 0x48) == 0) ||
                   (plVar10 = (long *)FUN_0557b300(*(long *)(param_1 + 0x48),iVar5,0),
                   plVar10 == (long *)0x0)) goto LAB_05548658;
                uVar8 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
                (**(code **)(*plVar19 + 0x188))(plVar19,uVar8,*(undefined8 *)(*plVar19 + 400));
              }
            }
            goto LAB_05548460;
          }
        }
      }
    }
  }
  goto LAB_05548658;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
LAB_0554869c:
    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_067cb558) {
      puVar11 = (undefined8 *)(lVar7 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_055486d0;
    }
  }
LAB_055486b4:
  puVar11 = (undefined8 *)FUN_02f421d0(plVar19,*(long *)PTR_DAT_067cb558,0);
LAB_055486d0:
  plVar19 = (long *)(*(code *)*puVar11)(plVar19,puVar11[1]);
  do {
    if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar7 = *plVar19;
    uVar17 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
          puVar11 = (undefined8 *)(lVar7 + (long)*piVar18 * 0x10 + 0x138);
          goto System_Xml_XmlBaseReader__get_Base64Encoding;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar11 = (undefined8 *)FUN_02f421d0(plVar19,*(long *)puVar3,0);
System_Xml_XmlBaseReader__get_Base64Encoding:
    uVar17 = (*(code *)*puVar11)(plVar19,puVar11[1]);
    puVar2 = PTR_DAT_067c91b0;
    if ((uVar17 & 1) == 0) {
      plVar19 = (long *)thunk_FUN_02f45174(plVar19,*(undefined8 *)PTR_DAT_067c91b0);
      if (plVar19 == (long *)0x0) {
        return param_2;
      }
      lVar7 = *plVar19;
      uVar17 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar17 == 0) goto LAB_05548864;
      piVar18 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      goto LAB_0554884c;
    }
    if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar7 = *plVar19;
    uVar17 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
          puVar11 = (undefined8 *)(lVar7 + (long)(*piVar18 + 1) * 0x10 + 0x138);
          goto LAB_055487ac;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar11 = (undefined8 *)FUN_02f421d0(plVar19,*(long *)puVar3,1);
LAB_055487ac:
    uVar8 = (*(code *)*puVar11)(plVar19,puVar11[1]);
    plVar10 = (long *)FUN_05548c64(param_2);
    plVar12 = *(long **)(param_1 + 0x88);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar14 = (**(code **)(*plVar12 + 0x308))(plVar12,uVar8,*(undefined8 *)(*plVar12 + 0x310));
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    (**(code **)(*plVar10 + 0x318))(plVar10,uVar8,uVar14,*(undefined8 *)(*plVar10 + 800));
  } while( true );
LAB_055483c0:
  plVar19 = (long *)thunk_FUN_02f45174(plVar10,*(undefined8 *)PTR_DAT_067c91b0);
  if (plVar19 != (long *)0x0) {
    lVar7 = *plVar19;
    uVar17 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_067c91b0) {
          puVar11 = (undefined8 *)(lVar7 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_05548444;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar11 = (undefined8 *)FUN_02f421d0(plVar19,*(long *)PTR_DAT_067c91b0,0);
LAB_05548444:
    (*(code *)*puVar11)(plVar19,puVar11[1]);
  }
LAB_05548460:
  plVar19 = *(long **)(param_1 + 0x48);
  iVar5 = iVar5 + 1;
  if (plVar19 == (long *)0x0) goto LAB_05548658;
  goto LAB_05548038;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
LAB_0554884c:
    if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
      puVar11 = (undefined8 *)(lVar7 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_05548880;
    }
  }
LAB_05548864:
  puVar11 = (undefined8 *)FUN_02f421d0(plVar19,*(long *)puVar2,0);
LAB_05548880:
  (*(code *)*puVar11)(plVar19,puVar11[1]);
  return param_2;
LAB_055484dc:
  do {
    iVar6 = (**(code **)(*plVar19 + 0x1c8))(plVar19,*(undefined8 *)(*plVar19 + 0x1d0));
    if (iVar6 <= iVar5) {
      plVar19 = *(long **)(param_1 + 0x88);
      if (plVar19 == (long *)0x0) {
        return param_2;
      }
      plVar19 = (long *)(**(code **)(*plVar19 + 0x388))(plVar19,*(undefined8 *)(*plVar19 + 0x390));
      if (plVar19 != (long *)0x0) {
        lVar7 = *plVar19;
        uVar17 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar17 == 0) goto LAB_055486b4;
        piVar18 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_0554869c;
      }
      break;
    }
    if (*(long *)(param_1 + 0x48) == 0) break;
    lVar7 = *(long *)(param_2 + 0x48);
    plVar19 = (long *)FUN_0557b300(*(long *)(param_1 + 0x48),iVar5,0);
    if ((plVar19 == (long *)0x0) ||
       (uVar8 = (**(code **)(*plVar19 + 0x178))(plVar19,*(undefined8 *)(*plVar19 + 0x180)),
       lVar7 == 0)) break;
    uVar17 = FUN_0557ca08(lVar7,uVar8,1,0);
    if ((uVar17 & 1) == 0) {
      if (*(long *)(param_1 + 0x48) == 0) break;
      plVar19 = (long *)FUN_0557b300(*(long *)(param_1 + 0x48),iVar5,0);
      if (plVar19 == (long *)0x0) {
LAB_05548564:
        plVar19 = (long *)0x0;
      }
      else {
        lVar7 = *(long *)puVar2;
        bVar1 = *(byte *)(lVar7 + 0x130);
        if (*(byte *)(*plVar19 + 0x130) < bVar1) goto LAB_05548564;
        if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) != lVar7) {
          plVar19 = (long *)0x0;
        }
      }
      if (*(long *)(param_1 + 0x48) == 0) break;
      plVar10 = (long *)FUN_0557b300(*(long *)(param_1 + 0x48),iVar5,0);
      if (plVar10 == (long *)0x0) {
LAB_055485b4:
        if (plVar19 != (long *)0x0) goto LAB_055485b8;
LAB_05548624:
        if (plVar10 == (long *)0x0) goto LAB_0554864c;
        lVar7 = *(long *)(param_2 + 0x48);
        lVar21 = FUN_055afa10(plVar10,param_2,0);
      }
      else {
        lVar7 = *(long *)puVar4;
        bVar1 = *(byte *)(lVar7 + 0x130);
        if (*(byte *)(*plVar10 + 0x130) < bVar1) {
          plVar10 = (long *)0x0;
          goto LAB_055485b4;
        }
        if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != lVar7) {
          plVar10 = (long *)0x0;
        }
        if (plVar19 == (long *)0x0) goto LAB_05548624;
LAB_055485b8:
        lVar7 = (**(code **)(*plVar19 + 0x1b8))(plVar19,*(undefined8 *)(*plVar19 + 0x1c0));
        lVar21 = (**(code **)(*plVar19 + 0x2c8))(plVar19,*(undefined8 *)(*plVar19 + 0x2d0));
        if ((lVar7 != lVar21) || (lVar21 = FUN_055a4c40(plVar19,param_2,0), lVar21 == 0))
        goto LAB_0554864c;
        lVar7 = *(long *)(param_2 + 0x48);
      }
      if (lVar7 == 0) break;
      FUN_0557b64c(lVar7,lVar21,0);
    }
LAB_0554864c:
    plVar19 = *(long **)(param_1 + 0x48);
    iVar5 = iVar5 + 1;
  } while (plVar19 != (long *)0x0);
LAB_05548658:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


