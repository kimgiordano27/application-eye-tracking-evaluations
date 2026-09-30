/*
FUNCTION_NAME: FUN_01e5f1e8
ENTRY_POINT: 01e5f1e8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_16;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x01e5f8c8) */
/* WARNING: Removing unreachable block (ram,0x01e5fa04) */
/* WARNING: Removing unreachable block (ram,0x01e5f9f8) */
/* WARNING: Removing unreachable block (ram,0x01e5f614) */

long FUN_01e5f1e8(long param_1,long param_2,long param_3)

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
  undefined8 uVar18;
  long *plVar19;
  
                    /* try { // try from 01e5f1ec to 01f5f253 has its CatchHandler @ 01e5f4dc */
  if ((DAT_0377fd85 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(StringLiteral_13941);
                    /* try { // try from 01e5f25c to 01f5f25f has its CatchHandler @ 01e5f4d0 */
    thunk_FUN_00d48444(Method_System_Net_TimerThread_CreateQueue__);
    thunk_FUN_00d48444(StringLiteral_10543);
    thunk_FUN_00d48444(StringLiteral_1962);
    thunk_FUN_00d48444(Unity_XR_CoreUtils_TypeExtensions_<>c__DisplayClass2_0_TypeInfo);
                    /* try { // try from 01e5f284 to 01f5f287 has its CatchHandler @ 01e5f4cc */
    DAT_0377fd85 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar18 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar9 = thunk_FUN_00d48444(Method_Meta_Voice_Audio_Decoding_AudioDecoderPcm_DecodeSample_Pcm32__
                              );
    FUN_016ec5b8(uVar18,uVar9,0);
LAB_01e5f9dc:
    uVar9 = thunk_FUN_00d48444(PTR_DAT_033f43c8);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar18,uVar9);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(long *)(param_1 + 0x20) = param_2;
  puVar4 = StringLiteral_10310;
  puVar3 = Method_System_Net_TimerThread_CreateQueue__;
  puVar2 = Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__;
  puVar15 = Unity_XR_CoreUtils_TypeExtensions_<>c__DisplayClass2_0_TypeInfo;
  if (param_3 != 0) {
    FUN_01ec6d0c(param_3,0);
    *(long *)(param_1 + 0x18) = param_3;
    do {
      plVar7 = *(long **)(param_1 + 0x20);
      if (plVar7 == (long *)0x0) goto LAB_01e5f910;
                    /* try { // try from 01e5f2d4 to 01f5f2fb has its CatchHandler @ 01e5f4f4 */
      iVar6 = (**(code **)(*plVar7 + 0x198))(plVar7,*(undefined8 *)(*plVar7 + 0x1a0));
      if (iVar6 == 1) break;
      plVar7 = *(long **)(param_1 + 0x20);
      if (plVar7 == (long *)0x0) goto LAB_01e5f910;
      uVar8 = (**(code **)(*plVar7 + 0x338))(plVar7,*(undefined8 *)(*plVar7 + 0x340));
    } while ((uVar8 & 1) != 0);
    plVar7 = *(long **)(param_1 + 0x20);
    if (plVar7 != (long *)0x0) {
      iVar6 = (**(code **)(*plVar7 + 0x198))(plVar7,*(undefined8 *)(*plVar7 + 0x1a0));
      if (iVar6 == 1) {
        plVar7 = *(long **)(param_1 + 0x20);
        if (plVar7 == (long *)0x0) goto LAB_01e5f910;
        uVar9 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
        plVar7 = *(long **)(param_1 + 0x20);
        *(undefined8 *)(param_1 + 0x30) = uVar9;
        if (plVar7 == (long *)0x0) goto LAB_01e5f910;
        uVar9 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
        uVar8 = thunk_FUN_015fe514(uVar9,*(undefined8 *)puVar15,0);
        if ((uVar8 & 1) == 0) {
          lVar10 = FUN_01ec3320(param_3,0);
          if ((lVar10 == 0) || (plVar7 = (long *)FUN_01ec15c8(lVar10,0), plVar7 == (long *)0x0))
          goto LAB_01e5f910;
          lVar10 = *plVar7;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar8 != 0) {
            piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
                puVar11 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_01e5f3cc;
              }
              uVar8 = uVar8 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar8 != 0);
          }
          puVar11 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar2,0);
LAB_01e5f3cc:
          plVar7 = (long *)(*(code *)*puVar11)(plVar7,puVar11[1]);
          puVar2 = StringLiteral_13941;
          puVar15 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          do {
            do {
              lVar16 = *plVar7;
              lVar10 = *(long *)puVar15;
              uVar8 = (ulong)*(ushort *)(lVar16 + 0x12a);
              if (uVar8 != 0) {
                piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == lVar10) {
                    puVar11 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
                    goto LAB_01e5f43c;
                  }
                  uVar8 = uVar8 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar8 != 0);
              }
              puVar11 = (undefined8 *)FUN_00d59724(plVar7,lVar10,0);
LAB_01e5f43c:
              uVar8 = (*(code *)*puVar11)(plVar7,puVar11[1]);
              if ((uVar8 & 1) == 0) {
                plVar12 = (long *)0x0;
                goto LAB_01e5f598;
              }
              lVar16 = *plVar7;
              lVar10 = *(long *)puVar15;
              uVar8 = (ulong)*(ushort *)(lVar16 + 0x12a);
              if (uVar8 != 0) {
                piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == lVar10) {
                    puVar11 = (undefined8 *)(lVar16 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                    goto LAB_01e5f49c;
                  }
                  uVar8 = uVar8 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar8 != 0);
              }
              puVar11 = (undefined8 *)FUN_00d59724(plVar7,lVar10,1);
LAB_01e5f49c:
              plVar12 = (long *)(*(code *)*puVar11)(plVar7,puVar11[1]);
              if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              bVar1 = *(byte *)(*(long *)puVar2 + 300);
              if ((*(byte *)(*plVar12 + 300) < bVar1) ||
                 (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2))
              {
                    /* WARNING: Subroutine does not return */
                FUN_00da544c(plVar12);
              }
              plVar13 = *(long **)(param_1 + 0x20);
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar10 = plVar12[0x13];
              uVar9 = (**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
              uVar8 = thunk_FUN_015fe514(lVar10,uVar9,0);
            } while ((uVar8 & 1) == 0);
            if (plVar12[0x18] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            plVar13 = *(long **)(param_1 + 0x20);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            uVar18 = *(undefined8 *)(plVar12[0x18] + 0x18);
            uVar9 = (**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
            uVar8 = thunk_FUN_015fe514(uVar18,uVar9,0);
          } while ((uVar8 & 1) == 0);
          plVar13 = (long *)plVar12[5];
          if (plVar13 == (long *)0x0) {
            *(undefined8 *)(param_1 + 0x10) = 0;
          }
          else {
            bVar1 = *(byte *)(*(long *)puVar3 + 300);
            if (*(byte *)(*plVar13 + 300) < bVar1) {
              plVar13 = (long *)0x0;
            }
            else if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3
                    ) {
              plVar13 = (long *)0x0;
            }
            *(long **)(param_1 + 0x10) = plVar13;
          }
LAB_01e5f598:
          plVar7 = (long *)thunk_FUN_00d6225c(plVar7,*(undefined8 *)puVar4);
          if (plVar7 != (long *)0x0) {
            lVar10 = *plVar7;
            uVar8 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar8 != 0) {
              piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
                  puVar11 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_01e5f5fc;
                }
                uVar8 = uVar8 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar8 != 0);
            }
            puVar11 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar4,0);
LAB_01e5f5fc:
            (*(code *)*puVar11)(plVar7,puVar11[1]);
          }
          if (*(long *)(param_1 + 0x10) == 0) {
            plVar7 = *(long **)(param_1 + 0x20);
            if (plVar7 == (long *)0x0) goto LAB_01e5f910;
            uVar9 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
            plVar7 = *(long **)(param_1 + 0x20);
            if (plVar7 == (long *)0x0) goto LAB_01e5f910;
            uVar18 = (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0));
            plVar7 = *(long **)(param_1 + 0x20);
            if (plVar7 == (long *)0x0) goto LAB_01e5f910;
            uVar14 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
            FUN_01e5fbd0(param_1,uVar9,uVar18,uVar14,0,0,0xffffffff);
          }
          else {
            FUN_01e601a0(param_1,plVar12,0);
          }
          plVar7 = *(long **)(param_1 + 0x38);
          if (plVar7 != (long *)0x0) {
            plVar7 = (long *)(**(code **)(*plVar7 + 0x218))(plVar7,*(undefined8 *)(*plVar7 + 0x220))
            ;
            puVar5 = StringLiteral_10543;
            puVar3 = StringLiteral_1962;
            puVar2 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
            puVar15 = System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            do {
              lVar16 = *plVar7;
              lVar10 = *(long *)puVar2;
              uVar8 = (ulong)*(ushort *)(lVar16 + 0x12a);
              if (uVar8 != 0) {
                piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == lVar10) {
                    puVar11 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
                    goto LAB_01e5f72c;
                  }
                  uVar8 = uVar8 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar8 != 0);
              }
              puVar11 = (undefined8 *)FUN_00d59724(plVar7,lVar10,0);
LAB_01e5f72c:
              uVar8 = (*(code *)*puVar11)(plVar7,puVar11[1]);
              if ((uVar8 & 1) == 0) {
                plVar7 = (long *)thunk_FUN_00d6225c(plVar7,*(undefined8 *)puVar4);
                if (plVar7 == (long *)0x0) goto LAB_01e5f8bc;
                lVar10 = *plVar7;
                uVar8 = (ulong)*(ushort *)(lVar10 + 0x12a);
                if (uVar8 == 0) goto LAB_01e5f894;
                piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                goto LAB_01e5f87c;
              }
              lVar16 = *plVar7;
              lVar10 = *(long *)puVar2;
              uVar8 = (ulong)*(ushort *)(lVar16 + 0x12a);
              if (uVar8 != 0) {
                piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == lVar10) {
                    puVar11 = (undefined8 *)(lVar16 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                    goto LAB_01e5f78c;
                  }
                  uVar8 = uVar8 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar8 != 0);
              }
              puVar11 = (undefined8 *)FUN_00d59724(plVar7,lVar10,1);
LAB_01e5f78c:
              plVar12 = (long *)(*(code *)*puVar11)(plVar7,puVar11[1]);
              if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (*plVar12 != *(long *)puVar15) {
                    /* WARNING: Subroutine does not return */
                FUN_00da544c(plVar12);
              }
              uVar8 = FUN_015fe250(plVar12,*(undefined8 *)puVar3,0);
              if (((uVar8 & 1) == 0) &&
                 (uVar8 = FUN_015fe250(plVar12,*(undefined8 *)puVar5,0), (uVar8 & 1) == 0)) {
                plVar13 = *(long **)(param_1 + 0x28);
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                plVar19 = *(long **)(param_1 + 0x38);
                uVar9 = (**(code **)(*plVar13 + 0x178))
                                  (plVar13,plVar12,*(undefined8 *)(*plVar13 + 0x180));
                if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c(uVar9,uVar9);
                }
                lVar10 = (**(code **)(*plVar19 + 0x238))
                                   (plVar19,uVar9,*(undefined8 *)(*plVar19 + 0x240));
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                if (*(int *)(lVar10 + 0x10) != 0) {
                  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  lVar16 = FUN_01eb8364(*(long *)(param_1 + 0x10),0);
                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  FUN_01f7a47c(lVar16,plVar12,lVar10,0);
                }
              }
            } while( true );
          }
          goto LAB_01e5f910;
        }
        thunk_FUN_00d48444(StringLiteral_5045);
        uVar18 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        puVar15 = Method_UnityEngine_UIElements_MouseEventBase<MouseEnterWindowEvent>_PostDispatch__
        ;
      }
      else {
        thunk_FUN_00d48444(StringLiteral_5045);
        uVar18 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        puVar15 = PTR_DAT_033ec5d0;
      }
      uVar9 = thunk_FUN_00d48444(puVar15);
      FUN_01e69a00(uVar18,uVar9,0,0,0);
      goto LAB_01e5f9dc;
    }
  }
LAB_01e5f910:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar17 = piVar17 + 4;
    if (uVar8 == 0) break;
LAB_01e5f87c:
    if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
      puVar11 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_01e5f8b0;
    }
  }
LAB_01e5f894:
  puVar11 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar4,0);
LAB_01e5f8b0:
  (*(code *)*puVar11)(plVar7,puVar11[1]);
LAB_01e5f8bc:
  FUN_01ec7210(param_3,*(undefined8 *)(param_1 + 0x10),0);
  FUN_01ec6d0c(param_3,0);
  return param_3;
}


