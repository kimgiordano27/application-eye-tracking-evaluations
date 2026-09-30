/*
FUNCTION_NAME: FUN_05560978
ENTRY_POINT: 05560978
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_16;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05561128) */
/* WARNING: Removing unreachable block (ram,0x05561258) */
/* WARNING: Removing unreachable block (ram,0x05561250) */
/* WARNING: Removing unreachable block (ram,0x05560e44) */

long FUN_05560978(long param_1,long param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long lVar16;
  int *piVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  undefined8 uVar21;
  
                    /* try { // try from 05560998 to 0566099f has its CatchHandler @ 055609c0 */
  if ((DAT_06a54122 & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_066479a8);
    FUN_02d4dc40(PTR_DAT_0664bda0);
    FUN_02d4dc40(PTR_DAT_066479b0);
    FUN_02d4dc40(Newtonsoft_Json_Converters_XCommentWrapper_TypeInfo);
    FUN_02d4dc40(System_Security_SecurityElement_TypeInfo);
    FUN_02d4dc40(System_ComponentModel_DesignOnlyAttribute_var);
    FUN_02d4dc40(PTR_DAT_066530d8);
    FUN_02d4dc40(PTR_DAT_0664d098);
    DAT_06a54122 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_02db45e8(PTR_DAT_0664a210);
    uVar21 = thunk_FUN_02d8a638();
    uVar9 = thunk_FUN_02db45e8(Internal_Cryptography_OidLookup_<>c_TypeInfo);
    FUN_04f681bc(uVar21,uVar9,0);
LAB_05561238:
    uVar9 = thunk_FUN_02db45e8(UnityEngine_XR_OpenXR_OpenXRAnalytics_InitializeEvent_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02d4ddac(uVar21,uVar9);
  }
  plVar19 = (long *)(param_1 + 0x10);
  *plVar19 = 0;
  thunk_FUN_02dc1ef0(plVar19,0);
  plVar20 = (long *)(param_1 + 0x20);
  *plVar20 = param_2;
  thunk_FUN_02dc1ef0(plVar20,param_2);
  puVar3 = PTR_DAT_0664d098;
  puVar2 = PTR_DAT_0664bda0;
  puVar15 = PTR_DAT_066479a8;
  if (param_3 != 0) {
    FUN_055c5dfc(param_3,0);
    *(long *)(param_1 + 0x18) = param_3;
    thunk_FUN_02dc1ef0((long *)(param_1 + 0x18),param_3);
    do {
      plVar7 = (long *)*plVar20;
      if (plVar7 == (long *)0x0) goto LAB_05561174;
      iVar6 = (**(code **)(*plVar7 + 0x198))(plVar7,*(undefined8 *)(*plVar7 + 0x1a0));
      if (iVar6 == 1) break;
      plVar7 = (long *)*plVar20;
      if (plVar7 == (long *)0x0) goto LAB_05561174;
      uVar8 = (**(code **)(*plVar7 + 0x328))(plVar7,*(undefined8 *)(*plVar7 + 0x330));
    } while ((uVar8 & 1) != 0);
    plVar7 = (long *)*plVar20;
    if (plVar7 != (long *)0x0) {
      iVar6 = (**(code **)(*plVar7 + 0x198))(plVar7,*(undefined8 *)(*plVar7 + 0x1a0));
      if (iVar6 == 1) {
        plVar7 = (long *)*plVar20;
        if (plVar7 == (long *)0x0) goto LAB_05561174;
        uVar9 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
        *(undefined8 *)(param_1 + 0x30) = uVar9;
        thunk_FUN_02dc1ef0((undefined8 *)(param_1 + 0x30),uVar9);
        plVar7 = *(long **)(param_1 + 0x20);
        if (plVar7 == (long *)0x0) goto LAB_05561174;
        uVar9 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
        uVar8 = thunk_FUN_04e7e884(uVar9,*(undefined8 *)puVar3,0);
        if ((uVar8 & 1) == 0) {
          lVar10 = FUN_055c278c(param_3,0);
          if ((lVar10 == 0) || (plVar7 = (long *)FUN_055c0968(lVar10,0), plVar7 == (long *)0x0))
          goto LAB_05561174;
          lVar10 = *plVar7;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar8 != 0) {
            piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
                puVar11 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_05560b8c;
              }
              uVar8 = uVar8 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar8 != 0);
          }
          puVar11 = (undefined8 *)FUN_02d87540(plVar7,*(long *)puVar2,0);
LAB_05560b8c:
          plVar7 = (long *)(*(code *)*puVar11)(plVar7,puVar11[1]);
          puVar3 = Newtonsoft_Json_Converters_XCommentWrapper_TypeInfo;
          puVar2 = PTR_DAT_066479b0;
          do {
            do {
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4dee8();
              }
              lVar16 = *plVar7;
              lVar10 = *(long *)puVar2;
              uVar8 = (ulong)*(ushort *)(lVar16 + 0x12e);
              if (uVar8 != 0) {
                piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == lVar10) {
                    puVar11 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
                    goto LAB_05560c10;
                  }
                  uVar8 = uVar8 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar8 != 0);
              }
              puVar11 = (undefined8 *)FUN_02d87540(plVar7,lVar10,0);
LAB_05560c10:
              uVar8 = (*(code *)*puVar11)(plVar7,puVar11[1]);
              if ((uVar8 & 1) == 0) {
                plVar12 = (long *)0x0;
                goto LAB_05560dbc;
              }
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4dee8();
              }
              lVar16 = *plVar7;
              lVar10 = *(long *)puVar2;
              uVar8 = (ulong)*(ushort *)(lVar16 + 0x12e);
              if (uVar8 != 0) {
                piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == lVar10) {
                    puVar11 = (undefined8 *)(lVar16 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                    goto LAB_05560c78;
                  }
                  uVar8 = uVar8 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar8 != 0);
              }
              puVar11 = (undefined8 *)FUN_02d87540(plVar7,lVar10,1);
LAB_05560c78:
              plVar12 = (long *)(*(code *)*puVar11)(plVar7,puVar11[1]);
              if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4dee8();
              }
              bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
              if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3))
              {
                    /* WARNING: Subroutine does not return */
                FUN_02d4e268(plVar12);
              }
              plVar13 = (long *)*plVar20;
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4dee8();
              }
              lVar10 = plVar12[0x13];
              uVar9 = (**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
              uVar8 = thunk_FUN_04e7e884(lVar10,uVar9,0);
            } while ((uVar8 & 1) == 0);
            if (plVar12[0x18] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            plVar13 = (long *)*plVar20;
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            uVar21 = *(undefined8 *)(plVar12[0x18] + 0x18);
            uVar9 = (**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
            uVar8 = thunk_FUN_04e7e884(uVar21,uVar9,0);
          } while ((uVar8 & 1) == 0);
          plVar13 = (long *)plVar12[5];
          if (plVar13 == (long *)0x0) {
            plVar13 = (long *)0x0;
            *plVar19 = 0;
          }
          else {
            lVar10 = *(long *)System_Security_SecurityElement_TypeInfo;
            bVar1 = *(byte *)(lVar10 + 0x130);
            if (*(byte *)(*plVar13 + 0x130) < bVar1) {
              plVar18 = (long *)0x0;
            }
            else {
              plVar18 = plVar13;
              if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) != lVar10) {
                plVar18 = (long *)0x0;
              }
            }
            *plVar19 = (long)plVar18;
            if (*(byte *)(*plVar13 + 0x130) < bVar1) {
              plVar13 = (long *)0x0;
            }
            else if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) != lVar10) {
              plVar13 = (long *)0x0;
            }
          }
          thunk_FUN_02dc1ef0(plVar19,plVar13);
LAB_05560dbc:
          plVar7 = (long *)thunk_FUN_02d8a53c(plVar7,*(undefined8 *)puVar15);
          if (plVar7 != (long *)0x0) {
            lVar10 = *plVar7;
            uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar8 != 0) {
              piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)puVar15) {
                  puVar11 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
                  goto FUN_05560e2c;
                }
                uVar8 = uVar8 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar8 != 0);
            }
            puVar11 = (undefined8 *)FUN_02d87540(plVar7,*(long *)puVar15,0);
FUN_05560e2c:
            (*(code *)*puVar11)(plVar7,puVar11[1]);
          }
          if (*plVar19 == 0) {
            plVar7 = (long *)*plVar20;
            if (plVar7 == (long *)0x0) goto LAB_05561174;
            uVar9 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
            plVar7 = (long *)*plVar20;
            if (plVar7 == (long *)0x0) goto LAB_05561174;
            uVar21 = (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0));
            plVar20 = (long *)*plVar20;
            if (plVar20 == (long *)0x0) goto LAB_05561174;
            uVar14 = (**(code **)(*plVar20 + 0x1c8))(plVar20,*(undefined8 *)(*plVar20 + 0x1d0));
            FUN_0556138c(param_1,uVar9,uVar21,uVar14,0,0,0xffffffff);
          }
          else {
            FUN_05561998(param_1,plVar12,0);
          }
          plVar20 = *(long **)(param_1 + 0x38);
          if (plVar20 != (long *)0x0) {
            plVar20 = (long *)(**(code **)(*plVar20 + 0x218))
                                        (plVar20,*(undefined8 *)(*plVar20 + 0x220));
            puVar5 = System_ComponentModel_DesignOnlyAttribute_var;
            puVar4 = PTR_DAT_066530d8;
            puVar3 = PTR_DAT_066479b0;
            puVar2 = PTR_DAT_066462a0;
            do {
              if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4dee8();
              }
              lVar16 = *plVar20;
              lVar10 = *(long *)puVar3;
              uVar8 = (ulong)*(ushort *)(lVar16 + 0x12e);
              if (uVar8 != 0) {
                piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == lVar10) {
                    puVar11 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
                    goto LAB_05560f70;
                  }
                  uVar8 = uVar8 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar8 != 0);
              }
              puVar11 = (undefined8 *)FUN_02d87540(plVar20,lVar10,0);
LAB_05560f70:
              uVar8 = (*(code *)*puVar11)(plVar20,puVar11[1]);
              if ((uVar8 & 1) == 0) {
                plVar20 = (long *)thunk_FUN_02d8a53c(plVar20,*(undefined8 *)puVar15);
                if (plVar20 == (long *)0x0) goto LAB_0556111c;
                lVar10 = *plVar20;
                uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar8 == 0) goto LAB_055610f4;
                piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                goto LAB_055610dc;
              }
              if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4dee8();
              }
              lVar16 = *plVar20;
              lVar10 = *(long *)puVar3;
              uVar8 = (ulong)*(ushort *)(lVar16 + 0x12e);
              if (uVar8 != 0) {
                piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == lVar10) {
                    puVar11 = (undefined8 *)(lVar16 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                    goto LAB_05560fd8;
                  }
                  uVar8 = uVar8 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar8 != 0);
              }
              puVar11 = (undefined8 *)FUN_02d87540(plVar20,lVar10,1);
LAB_05560fd8:
              plVar7 = (long *)(*(code *)*puVar11)(plVar20,puVar11[1]);
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4dee8();
              }
              if (*plVar7 != *(long *)(puVar2 + 0x90)) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4e268(plVar7);
              }
              uVar8 = FUN_04e7e59c(plVar7,*(undefined8 *)puVar4,0);
              if (((uVar8 & 1) == 0) &&
                 (uVar8 = FUN_04e7e59c(plVar7,*(undefined8 *)puVar5,0), (uVar8 & 1) == 0)) {
                plVar12 = *(long **)(param_1 + 0x28);
                if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d4dee8();
                }
                plVar13 = *(long **)(param_1 + 0x38);
                uVar9 = (**(code **)(*plVar12 + 0x178))
                                  (plVar12,plVar7,*(undefined8 *)(*plVar12 + 0x180));
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d4dee8(uVar9,uVar9);
                }
                lVar10 = (**(code **)(*plVar13 + 0x238))
                                   (plVar13,uVar9,*(undefined8 *)(*plVar13 + 0x240));
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d4dee8();
                }
                if (*(int *)(lVar10 + 0x10) != 0) {
                  if (*plVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d4dee8();
                  }
                  lVar16 = FUN_055b82c4(*plVar19,0);
                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d4dee8();
                  }
                  FUN_0566a350(lVar16,plVar7,lVar10,0);
                }
              }
            } while( true );
          }
          goto LAB_05561174;
        }
        thunk_FUN_02db45e8(Photon_Pun_UtilityScripts_OnClickDestroy_<DestroyRpc>d__4_TypeInfo);
        uVar21 = thunk_FUN_02d8a638();
        puVar15 = UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_TypeInfo;
      }
      else {
        thunk_FUN_02db45e8(Photon_Pun_UtilityScripts_OnClickDestroy_<DestroyRpc>d__4_TypeInfo);
        uVar21 = thunk_FUN_02d8a638();
        puVar15 = Photon_Pun_UtilityScripts_OnClickRpc_<ClickFlash>d__8_TypeInfo;
      }
      uVar9 = thunk_FUN_02db45e8(puVar15);
      FUN_05561358(uVar21,uVar9,0,0);
      goto LAB_05561238;
    }
  }
LAB_05561174:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar17 = piVar17 + 4;
    if (uVar8 == 0) break;
LAB_055610dc:
    if (*(long *)(piVar17 + -2) == *(long *)puVar15) {
      puVar11 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_05561110;
    }
  }
LAB_055610f4:
  puVar11 = (undefined8 *)FUN_02d87540(plVar20,*(long *)puVar15,0);
LAB_05561110:
  (*(code *)*puVar11)(plVar20,puVar11[1]);
LAB_0556111c:
  FUN_055c6314(param_3,*plVar19,0);
  FUN_055c5dfc(param_3,0);
  return param_3;
}


