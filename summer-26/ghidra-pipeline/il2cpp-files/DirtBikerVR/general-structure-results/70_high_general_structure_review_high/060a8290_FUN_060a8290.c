/*
FUNCTION_NAME: FUN_060a8290
ENTRY_POINT: 060a8290
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_060a8290(long *param_1,int param_2,long param_3)

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
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  int *piVar19;
  float fVar20;
  float fVar21;
  
  if ((DAT_08979cf0 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08497258);
    FUN_03a8a718(PTR_DAT_08492790);
    FUN_03a8a718(PTR_DAT_08496218);
    FUN_03a8a718(PTR_DAT_08496220);
    DAT_08979cf0 = 1;
  }
  if (param_1 != (long *)0x0) {
    iVar7 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
    if (iVar7 == param_2) {
      return;
    }
    lVar10 = FUN_05c53604(param_1,*(undefined8 *)
                                   (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x140));
    FUN_060a9f40(param_1,param_2 + -1,
                 *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 200));
    System_Collections_Generic_Queue_Enumerator<Guid>__Dispose
              (param_1,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x130));
    (**(code **)(*param_1 + 0x188))(param_1,param_2,*(undefined8 *)(*param_1 + 400));
    if (param_1[5] != 0) {
      iVar7 = *(int *)(param_1[5] + 0x18);
      if (iVar7 < 1) {
LAB_060a8720:
        if (*(int *)((long)param_1 + 0xbc) != 1) {
          FUN_060a98d0(param_1,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x198))
          ;
        }
        FUN_060a995c(param_1);
        return;
      }
      if (lVar10 != 0) {
        iVar8 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
        iVar9 = *(int *)(lVar10 + 0x20);
        if (DAT_08975b84 == '\0') {
          FUN_03a8a718(PTR_DAT_08486c60);
          DAT_08975b84 = '\x01';
        }
        iVar8 = iVar8 - iVar9;
        if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        iVar9 = -iVar8;
        if (-1 < iVar8) {
          iVar9 = iVar8;
        }
        if (iVar9 < iVar7) {
          iVar9 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
          iVar7 = *(int *)(lVar10 + 0x20);
          if (iVar7 <= iVar9) {
            lVar11 = param_1[0xf];
            iVar7 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
            lVar10 = param_1[5];
            if (lVar10 != 0) {
              iVar9 = 0;
              iVar8 = -1;
              while (lVar10 = FUN_04de82e0(lVar10,iVar9,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x148)),
                    lVar10 != 0) {
                if (iVar7 <= *(int *)(lVar10 + 0x20)) {
LAB_060a88b0:
                  if (param_1[5] != 0) {
                    FUN_04de9e10(param_1[5],0,iVar9,
                                 *(undefined8 *)
                                  (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x180));
                    if (param_1[5] != 0) {
                      FUN_04de87c0(param_1[5],lVar11,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x188));
                      lVar10 = param_1[0xf];
                      if (lVar10 != 0) {
                        iVar7 = *(int *)(lVar10 + 0x18);
                        *(undefined4 *)(lVar10 + 0x18) = 0;
                        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                        goto joined_r0x060a8904;
                      }
                    }
                  }
                  break;
                }
                if ((param_1[5] == 0) ||
                   (lVar10 = FUN_04de82e0(param_1[5],iVar9,
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x148)),
                   lVar10 == 0)) break;
                if (*(int *)(lVar10 + 0x20) <= iVar8) goto LAB_060a88b0;
                if (((param_1[5] == 0) ||
                    (plVar12 = (long *)FUN_04de82e0(param_1[5],iVar9,
                                                    *(undefined8 *)
                                                     (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) +
                                                     0x148)), plVar12 == (long *)0x0)) ||
                   (lVar11 == 0)) break;
                iVar8 = (int)plVar12[4];
                lVar10 = *(long *)(lVar11 + 0x10);
                lVar18 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x178);
                *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                if (lVar10 == 0) break;
                uVar1 = *(uint *)(lVar11 + 0x18);
                if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                  *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                  plVar13 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar13 = (long)plVar12;
                  thunk_FUN_03afed3c(plVar13,plVar12);
                }
                else {
                  FUN_04de85b0(lVar11,plVar12,
                               *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                }
                lVar10 = (**(code **)(*plVar12 + 0x178))(plVar12,*(undefined8 *)(*plVar12 + 0x180));
                if (lVar10 == 0) break;
                iVar9 = iVar9 + 1;
                FUN_07e10a58(lVar10,0);
                iVar7 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
                lVar10 = param_1[5];
                if (lVar10 == 0) break;
              }
            }
            goto LAB_060a871c;
          }
          iVar9 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
          lVar10 = param_1[0xf];
          iVar7 = iVar7 - iVar9;
          if (0 < iVar7) {
            do {
              lVar11 = param_1[5];
              if ((lVar11 == 0) ||
                 (plVar12 = (long *)FUN_04de82e0(lVar11,*(int *)(lVar11 + 0x18) + -1,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) +
                                                  0x148)), lVar10 == 0)) goto LAB_060a871c;
              FUN_04de937c(lVar10,0,plVar12,
                           *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x150));
              lVar11 = param_1[5];
              if ((lVar11 == 0) ||
                 ((FUN_04de9d78(lVar11,*(int *)(lVar11 + 0x18) + -1,
                                *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x158)
                               ), plVar12 == (long *)0x0 ||
                  (lVar11 = (**(code **)(*plVar12 + 0x178))
                                      (plVar12,*(undefined8 *)(*plVar12 + 0x180)), lVar11 == 0))))
              goto LAB_060a871c;
              UnityEngine_UIElements_TabLayout__ReorderDisplay(lVar11,0);
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          if (param_1[5] == 0) goto LAB_060a871c;
          FUN_04de95b4(param_1[5],0,lVar10,
                       *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x160));
          lVar10 = param_1[0xf];
          if (lVar10 == 0) goto LAB_060a871c;
          iVar7 = *(int *)(lVar10 + 0x18);
          *(undefined4 *)(lVar10 + 0x18) = 0;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
joined_r0x060a8904:
          if (0 < iVar7) {
            Newtonsoft_Json_Schema_ValidationEventArgs__get_Path
                      (*(undefined8 *)(lVar10 + 0x10),0,iVar7,0);
          }
        }
      }
      fVar20 = (float)FUN_060a6ae0(param_1,*(undefined8 *)
                                            (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xd0));
      puVar5 = PTR_DAT_08497258;
      puVar4 = PTR_DAT_08496220;
      puVar3 = PTR_DAT_08496218;
      puVar2 = PTR_DAT_08492790;
      lVar10 = param_1[5];
      if (lVar10 != 0) {
        iVar7 = 0;
        while( true ) {
          if (*(int *)(lVar10 + 0x18) <= iVar7) goto LAB_060a8720;
          plVar12 = (long *)FUN_04de82e0(lVar10,iVar7,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x148));
          iVar9 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
          if (plVar12 == (long *)0x0) break;
          lVar10 = plVar12[4];
          lVar11 = (**(code **)(*plVar12 + 0x178))(plVar12,*(undefined8 *)(*plVar12 + 0x180));
          if ((lVar11 == 0) || (plVar13 = (long *)FUN_07e05b1c(lVar11,0), plVar13 == (long *)0x0))
          break;
          lVar11 = *plVar13;
          uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)puVar2) {
                puVar14 = (undefined8 *)(lVar11 + (long)(*piVar19 + 0x30) * 0x10 + 0x138);
                goto 
                Unity_Collections_NativeArray_ReadOnly_Enumerator<HDShadowRequestSetHandle>___ctor;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar14 = (undefined8 *)FUN_03ac43c4(plVar13,*(long *)puVar2,0x30);
Unity_Collections_NativeArray_ReadOnly_Enumerator<HDShadowRequestSetHandle>___ctor:
          uVar15 = (*(code *)*puVar14)(plVar13,puVar14[1]);
          uVar16 = FUN_0586feac(0,*(undefined8 *)puVar4);
          bVar6 = FUN_0586fda4(uVar15,uVar16,*(undefined8 *)puVar3);
          if (param_1[0x14] == 0) break;
          iVar9 = iVar9 + iVar7;
          FUN_049c8914(param_1[0x14],(int)lVar10,*(undefined8 *)puVar5);
          uVar17 = FUN_060ab540(param_1,iVar9,
                                *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x48))
          ;
          lVar11 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
          if ((uVar17 & 1) == 0) {
            FUN_05c5454c(param_1,plVar12,iVar9,*(undefined8 *)(lVar11 + 0x100));
            fVar21 = (float)FUN_060a6e98(param_1);
            if (fVar20 <= fVar21) {
              if ((iVar9 == (int)lVar10 & bVar6) == 0) {
                FUN_060ab48c(param_1,plVar12);
              }
            }
            else {
              FUN_060ab34c(param_1,iVar7,
                           *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xf8));
            }
            fVar21 = (float)(**(code **)(*param_1 + 0x1f8))
                                      (param_1,iVar9,*(undefined8 *)(*param_1 + 0x200));
            fVar20 = fVar20 + fVar21;
          }
          else {
            FUN_060ab34c(param_1,iVar7,*(undefined8 *)(lVar11 + 0xf8));
          }
          lVar10 = param_1[5];
          iVar7 = iVar7 + 1;
          if (lVar10 == 0) break;
        }
      }
    }
  }
LAB_060a871c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


