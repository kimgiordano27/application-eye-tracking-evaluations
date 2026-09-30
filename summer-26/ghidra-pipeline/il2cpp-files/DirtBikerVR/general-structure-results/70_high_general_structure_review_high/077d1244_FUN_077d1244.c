/*
FUNCTION_NAME: FUN_077d1244
ENTRY_POINT: 077d1244
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_18;telemetry_or_network_hits_12;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x077d1780) */
/* WARNING: Removing unreachable block (ram,0x077d1ac0) */
/* WARNING: Removing unreachable block (ram,0x077d1ab8) */
/* WARNING: Removing unreachable block (ram,0x077d1ac8) */

void FUN_077d1244(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar13;
  int *piVar14;
  undefined1 auVar15 [16];
  undefined *puVar12;
  
  if ((DAT_08987155 & 1) == 0) {
    FUN_03a8a718(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_PostProcessingFinalFSRScalePassData,_RasterGraphContext>_TypeInfo
                );
    FUN_03a8a718(PTR_DAT_08488550);
    FUN_03a8a718(PTR_DAT_084c3f08);
    FUN_03a8a718(PTR_DAT_084c3f10);
    FUN_03a8a718(PTR_DAT_08488568);
    DAT_08987155 = 1;
  }
  FUN_077c7874(param_1);
  uVar5 = FUN_065cd284(param_5,0);
  puVar12 = PTR_DAT_084c3f08;
  if ((uVar5 & 1) == 0) {
    if (param_2 == (long *)0x0) {
      thunk_FUN_03af1434(PTR_DAT_08491298);
      uVar10 = thunk_FUN_03ac74bc();
      puVar12 = 
      UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_SMAASetupPassData,_RasterGraphContext>_TypeInfo
      ;
    }
    else if (param_3 == (long *)0x0) {
      thunk_FUN_03af1434(PTR_DAT_08491298);
      uVar10 = thunk_FUN_03ac74bc();
      puVar12 = 
      UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_StopNaNsPassData,_RasterGraphContext>_TypeInfo
      ;
    }
    else {
      if (param_4 != (long *)0x0) {
        (**(code **)(*param_1 + 0x2d8))(param_1,param_5,*(undefined8 *)(*param_1 + 0x2e0));
        lVar13 = *param_2;
        uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar5 != 0) {
          piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar12) {
              puVar6 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_077d1358;
            }
            uVar5 = uVar5 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)FUN_03ac43c4(param_2,*(long *)puVar12,0);
LAB_077d1358:
        puVar4 = 
        UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_PostProcessingFinalFSRScalePassData,_RasterGraphContext>_TypeInfo
        ;
        puVar3 = PTR_DAT_084c3f10;
        puVar2 = PTR_DAT_08488568;
        puVar1 = PTR_DAT_08488550;
        plVar7 = (long *)(*(code *)*puVar6)(param_2,puVar6[1]);
        do {
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          lVar13 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar5 != 0) {
            piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                puVar6 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_077d13e4;
              }
              uVar5 = uVar5 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)FUN_03ac43c4(plVar7,*(long *)puVar2,0);
LAB_077d13e4:
          uVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
          if ((uVar5 & 1) == 0) {
            if (plVar7 == (long *)0x0) goto LAB_077d1548;
            lVar13 = *plVar7;
            uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar5 == 0) goto LAB_077d1520;
            piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            goto LAB_077d1508;
          }
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          lVar13 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar5 != 0) {
            piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                puVar6 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_077d1448;
              }
              uVar5 = uVar5 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)FUN_03ac43c4(plVar7,*(long *)puVar3,0);
LAB_077d1448:
          auVar15 = (*(code *)*puVar6)(plVar7,puVar6[1]);
          plVar8 = (long *)(**(code **)(*param_1 + 0x2e8))
                                     (param_1,*(undefined8 *)(*param_1 + 0x2f0));
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          lVar13 = *plVar8;
          uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar5 != 0) {
            piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
                puVar6 = (undefined8 *)(lVar13 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                goto LAB_077d14c8;
              }
              uVar5 = uVar5 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)FUN_03ac43c4(plVar8,*(long *)puVar4,2);
LAB_077d14c8:
          (*(code *)*puVar6)(plVar8,auVar15._0_8_,auVar15._8_8_,puVar6[1]);
        } while( true );
      }
      thunk_FUN_03af1434(PTR_DAT_08491298);
      uVar10 = thunk_FUN_03ac74bc();
      puVar12 = 
      UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_UberPostPassData,_RasterGraphContext>_TypeInfo
      ;
    }
    uVar11 = thunk_FUN_03af1434(puVar12);
    FUN_066af6a0(uVar10,uVar11,0);
  }
  else {
    thunk_FUN_03af1434(PTR_DAT_08488490);
    uVar10 = thunk_FUN_03ac74bc();
    uVar11 = thunk_FUN_03af1434(
                               UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_PostProcessingFinalSetupPassData,_RasterGraphContext>_TypeInfo
                               );
    uVar9 = thunk_FUN_03af1434(
                              UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_SMAAPassData,_RasterGraphContext>_TypeInfo
                              );
    FUN_066af718(uVar10,uVar11,uVar9,0);
  }
  uVar11 = thunk_FUN_03af1434(
                             UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_UpdateCameraResolutionPassData,_UnsafeGraphContext>_TypeInfo
                             );
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar10,uVar11);
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar14 = piVar14 + 4;
    if (uVar5 == 0) break;
LAB_077d1508:
    if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
      puVar6 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
      goto FUN_077d153c;
    }
  }
LAB_077d1520:
  puVar6 = (undefined8 *)FUN_03ac43c4(plVar7,*(long *)puVar1,0);
FUN_077d153c:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
LAB_077d1548:
  lVar13 = *param_3;
  uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar5 != 0) {
    piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)puVar12) {
        puVar6 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_077d1598;
      }
      uVar5 = uVar5 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar5 != 0);
  }
  puVar6 = (undefined8 *)FUN_03ac43c4(param_3,*(long *)puVar12,0);
LAB_077d1598:
  plVar7 = (long *)(*(code *)*puVar6)(param_3,puVar6[1]);
  do {
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar13 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar5 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_077d1604;
        }
        uVar5 = uVar5 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_03ac43c4(plVar7,*(long *)puVar2,0);
LAB_077d1604:
    uVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if ((uVar5 & 1) == 0) {
      if (plVar7 == (long *)0x0) goto LAB_077d1774;
      lVar13 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 == 0) goto LAB_077d174c;
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      break;
    }
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar13 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar5 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_077d1668;
        }
        uVar5 = uVar5 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_03ac43c4(plVar7,*(long *)puVar3,0);
LAB_077d1668:
    auVar15 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    plVar8 = (long *)(**(code **)(*param_1 + 1000))(param_1,*(undefined8 *)(*param_1 + 0x3f0));
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar13 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar5 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
          puVar6 = (undefined8 *)(lVar13 + (long)(*piVar14 + 2) * 0x10 + 0x138);
          goto LAB_077d16e8;
        }
        uVar5 = uVar5 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_03ac43c4(plVar8,*(long *)puVar4,2);
LAB_077d16e8:
    (*(code *)*puVar6)(plVar8,auVar15._0_8_,auVar15._8_8_,puVar6[1]);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar14 = piVar14 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
      puVar6 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_077d1768;
    }
  }
LAB_077d174c:
  puVar6 = (undefined8 *)FUN_03ac43c4(plVar7,*(long *)puVar1,0);
LAB_077d1768:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
LAB_077d1774:
  lVar13 = *param_4;
  uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar5 != 0) {
    piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)puVar12) {
        puVar6 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_077d17d0;
      }
      uVar5 = uVar5 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar5 != 0);
  }
  puVar6 = (undefined8 *)FUN_03ac43c4(param_4,*(long *)puVar12,0);
LAB_077d17d0:
  plVar7 = (long *)(*(code *)*puVar6)(param_4,puVar6[1]);
  do {
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar13 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar5 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_077d183c;
        }
        uVar5 = uVar5 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_03ac43c4(plVar7,*(long *)puVar2,0);
LAB_077d183c:
    uVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if ((uVar5 & 1) == 0) {
      if (plVar7 == (long *)0x0) {
        return;
      }
      lVar13 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 == 0) goto LAB_077d1980;
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      break;
    }
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar13 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar5 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_077d18a0;
        }
        uVar5 = uVar5 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_03ac43c4(plVar7,*(long *)puVar3,0);
LAB_077d18a0:
    auVar15 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    plVar8 = (long *)(**(code **)(*param_1 + 0x3c8))(param_1,*(undefined8 *)(*param_1 + 0x3d0));
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar13 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar5 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
          puVar6 = (undefined8 *)(lVar13 + (long)(*piVar14 + 2) * 0x10 + 0x138);
          goto LAB_077d1920;
        }
        uVar5 = uVar5 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_03ac43c4(plVar8,*(long *)puVar4,2);
LAB_077d1920:
    (*(code *)*puVar6)(plVar8,auVar15._0_8_,auVar15._8_8_,puVar6[1]);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar14 = piVar14 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
      puVar6 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_077d199c;
    }
  }
LAB_077d1980:
  puVar6 = (undefined8 *)FUN_03ac43c4(plVar7,*(long *)puVar1,0);
LAB_077d199c:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
  return;
}


