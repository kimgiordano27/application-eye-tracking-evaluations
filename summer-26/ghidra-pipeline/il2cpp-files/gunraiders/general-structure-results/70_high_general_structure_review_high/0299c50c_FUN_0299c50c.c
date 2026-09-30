/*
FUNCTION_NAME: FUN_0299c50c
ENTRY_POINT: 0299c50c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_0299c50c(long *param_1,int param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  
  if ((DAT_045310ce & 1) == 0) {
    FUN_01c5d288(UnityEngine_Physics2D_TypeInfo);
    FUN_01c5d288(Newtonsoft_Json_JsonSerializerSettings_TypeInfo);
    FUN_01c5d288(VoxelBusters_EssentialKit_NotificationSettingsInternal_TypeInfo);
    FUN_01c5d288(System_Collections_Specialized_NotifyCollectionChangedAction_TypeInfo);
    DAT_045310ce = 1;
  }
  if (param_1 != (long *)0x0) {
    iVar7 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
    if (iVar7 == param_2) {
      return;
    }
    lVar10 = FUN_02719108(param_1,*(undefined8 *)
                                   (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x120));
    FUN_0299e380(param_1,param_2 + -1,
                 *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xb0));
    FUN_0299b1e0(param_1,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x110));
    (**(code **)(*param_1 + 0x188))(param_1,param_2,*(undefined8 *)(*param_1 + 400));
    if (param_1[5] != 0) {
      iVar7 = *(int *)(param_1[5] + 0x18);
      if (iVar7 < 1) {
LAB_0299caf8:
        if (*(int *)((long)param_1 + 0x8c) != 1) {
          FUN_0299db78(param_1,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x178))
          ;
        }
        FUN_0299dc0c(param_1);
        return;
      }
      if (lVar10 != 0) {
        iVar8 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
        iVar9 = *(int *)(lVar10 + 0x20);
        if (DAT_045310e0 == '\0') {
          FUN_01c5d288(PTR_DAT_0422fa60);
          DAT_045310e0 = '\x01';
        }
        iVar8 = iVar8 - iVar9;
        if (*(int *)(*(long *)PTR_DAT_0422fa60 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        iVar9 = -iVar8;
        if (-1 < iVar8) {
          iVar9 = iVar8;
        }
        if (iVar9 < iVar7) {
          iVar9 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
          iVar7 = *(int *)(lVar10 + 0x20);
          if (iVar9 < iVar7) {
            iVar9 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
            lVar10 = param_1[5];
            if (lVar10 != 0) {
              lVar20 = param_1[10];
              uVar1 = iVar7 - iVar9;
              iVar7 = (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) + 1;
LAB_0299c6cc:
              iVar7 = iVar7 + -1;
              if (iVar7 == 0) {
                FUN_02d50f20(lVar10,0,lVar20,
                             *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x140));
LAB_0299c8c0:
                lVar10 = param_1[10];
                if (lVar10 == 0) goto LAB_0299caf4;
                iVar7 = *(int *)(lVar10 + 0x18);
                *(undefined4 *)(lVar10 + 0x18) = 0;
                *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                if (0 < iVar7) {
                  FUN_032f3ffc(*(undefined8 *)(lVar10 + 0x10),0,iVar7,0);
                }
                goto LAB_0299c8ec;
              }
              plVar11 = (long *)FUN_02d4fd88(lVar10,*(int *)(lVar10 + 0x18) + -1,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x128))
              ;
              if (lVar20 != 0) {
                FUN_02d50cf4(lVar20,0,plVar11,
                             *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x130));
                lVar10 = param_1[5];
                if (((lVar10 != 0) &&
                    (FUN_02d51704(lVar10,*(int *)(lVar10 + 0x18) + -1,
                                  *(undefined8 *)
                                   (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x138)),
                    plVar11 != (long *)0x0)) &&
                   (lVar10 = (**(code **)(*plVar11 + 0x178))
                                       (plVar11,*(undefined8 *)(*plVar11 + 0x180)), lVar10 != 0))
                goto code_r0x0299c74c;
              }
            }
          }
          else {
            lVar20 = param_1[10];
            iVar7 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
            lVar10 = param_1[5];
            if (lVar10 != 0) {
              iVar9 = 0;
              while( true ) {
                lVar10 = FUN_02d4fd88(lVar10,iVar9,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x128));
                if ((lVar10 == 0) || (lVar12 = param_1[5], lVar12 == 0)) goto LAB_0299caf4;
                lVar17 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
                if (iVar7 <= *(int *)(lVar10 + 0x20)) break;
                plVar11 = (long *)FUN_02d4fd88(lVar12,iVar9,*(undefined8 *)(lVar17 + 0x128));
                if (lVar20 == 0) goto LAB_0299caf4;
                lVar10 = *(long *)(lVar20 + 0x10);
                lVar12 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x158);
                *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
                if (lVar10 == 0) goto LAB_0299caf4;
                uVar1 = *(uint *)(lVar20 + 0x18);
                if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                  *(uint *)(lVar20 + 0x18) = uVar1 + 1;
                  *(long **)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = plVar11;
                }
                else {
                  FUN_02d5004c(lVar20,plVar11,
                               *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                }
                if ((plVar11 == (long *)0x0) ||
                   (lVar10 = (**(code **)(*plVar11 + 0x178))
                                       (plVar11,*(undefined8 *)(*plVar11 + 0x180)), lVar10 == 0))
                goto LAB_0299caf4;
                iVar9 = iVar9 + 1;
                FUN_03f1c228(lVar10,0);
                iVar7 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
                lVar10 = param_1[5];
                if (lVar10 == 0) goto LAB_0299caf4;
              }
              FUN_02d51794(lVar12,0,iVar9,*(undefined8 *)(lVar17 + 0x160));
              if (param_1[5] != 0) {
                FUN_02d50250(param_1[5],lVar20,
                             *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x168));
                goto LAB_0299c8c0;
              }
            }
          }
          goto LAB_0299caf4;
        }
      }
LAB_0299c8ec:
      fVar21 = (float)FUN_0299b1b4(param_1,*(undefined8 *)
                                            (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xb8));
      puVar5 = UnityEngine_Physics2D_TypeInfo;
      puVar4 = System_Collections_Specialized_NotifyCollectionChangedAction_TypeInfo;
      puVar3 = VoxelBusters_EssentialKit_NotificationSettingsInternal_TypeInfo;
      puVar2 = Newtonsoft_Json_JsonSerializerSettings_TypeInfo;
      lVar10 = param_1[5];
      if (lVar10 != 0) {
        iVar7 = 0;
        while( true ) {
          if (*(int *)(lVar10 + 0x18) <= iVar7) goto LAB_0299caf8;
          plVar11 = (long *)FUN_02d4fd88(lVar10,iVar7,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x128));
          iVar9 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
          if (plVar11 == (long *)0x0) break;
          lVar10 = plVar11[4];
          lVar20 = (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180));
          if ((lVar20 == 0) || (plVar13 = (long *)FUN_03f0d9bc(lVar20,0), plVar13 == (long *)0x0))
          break;
          lVar20 = *plVar13;
          uVar18 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)puVar2) {
                puVar14 = (undefined8 *)(lVar20 + (long)(*piVar19 + 0x11) * 0x10 + 0x138);
                goto LAB_0299c9e4;
              }
              uVar18 = uVar18 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar18 != 0);
          }
          puVar14 = (undefined8 *)FUN_01c72498(plVar13,*(long *)puVar2,0x11);
LAB_0299c9e4:
          uVar15 = (*(code *)*puVar14)(plVar13,puVar14[1]);
          uVar16 = FUN_030d67d4(0,*(undefined8 *)puVar4);
          bVar6 = FUN_030d66d8(uVar15,uVar16,*(undefined8 *)puVar3);
          if (param_1[0xf] == 0) break;
          iVar9 = iVar9 + iVar7;
          FUN_02b941a8(param_1[0xf],(int)lVar10,*(undefined8 *)puVar5);
          uVar18 = FUN_0299f9d8(param_1,iVar9,
                                *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x50))
          ;
          lVar20 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
          if ((uVar18 & 1) == 0) {
            FUN_02719a20(param_1,plVar11,iVar9,*(undefined8 *)(lVar20 + 0xe8));
            fVar22 = (float)FUN_0299b564(param_1,*(undefined8 *)
                                                  (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) +
                                                  0x170));
            if (fVar21 <= fVar22) {
              if ((iVar9 == (int)lVar10 & bVar6) == 0) {
                FUN_0299f924(param_1,plVar11);
              }
            }
            else {
              FUN_0299f7e4(param_1,iVar7,
                           *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xe0));
            }
            fVar22 = (float)(**(code **)(*param_1 + 0x1f8))
                                      (param_1,iVar9,*(undefined8 *)(*param_1 + 0x200));
            fVar21 = fVar21 + fVar22;
          }
          else {
            FUN_0299f7e4(param_1,iVar7,*(undefined8 *)(lVar20 + 0xe0));
          }
          lVar10 = param_1[5];
          iVar7 = iVar7 + 1;
          if (lVar10 == 0) break;
        }
      }
    }
  }
LAB_0299caf4:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
code_r0x0299c74c:
  FUN_03f1c28c(lVar10,0);
  lVar10 = param_1[5];
  if (lVar10 == 0) goto LAB_0299caf4;
  goto LAB_0299c6cc;
}


