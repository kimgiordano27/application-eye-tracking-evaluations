/*
FUNCTION_NAME: FUN_051ccf98
ENTRY_POINT: 051ccf98
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_051ccf98(long param_1,long *param_2,uint param_3,long param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  uint uVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined1 auVar17 [12];
  undefined1 auStack_150 [120];
  undefined1 auStack_d8 [120];
  
  puVar14 = (undefined8 *)(ulong)param_3;
  if ((DAT_086db55b & 1) == 0) {
    FUN_0335b6c8(&DAT_083c7a10,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083d23b8,1);
    DataMemoryBarrier(2,3);
    DAT_086db55b = 1;
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_06842340(3,0);
  }
  if (*(char *)(*param_2 + 0x132) != '\x01') {
    uVar16 = 7;
    goto LAB_051cd420;
  }
  iVar4 = FUN_0334d06c(param_2,0);
  if (iVar4 != 0) {
    uVar16 = 6;
    goto LAB_051cd420;
  }
  if ((int)param_3 < 0) {
    FUN_068519f4(0);
  }
  else {
    iVar4 = FUN_068485f0(param_2,0);
    iVar5 = FUN_051cc7f0(param_1,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x68)
                        );
    if (iVar5 <= (int)(iVar4 - param_3)) {
      lVar8 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x38);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0338f618(lVar8);
      }
      lVar8 = FUN_0339898c(param_2,lVar8);
      if (lVar8 != 0) {
        plVar15 = *(long **)(param_1 + 0x10);
        if (plVar15 != (long *)0x0) {
          lVar9 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x10);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_0338f618(lVar9);
          }
          lVar10 = *plVar15;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar9) {
                puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
                goto LAB_051cd210;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar6 = (undefined8 *)FUN_0338f71c(plVar15,lVar9,5);
LAB_051cd210:
                    /* WARNING: Could not recover jumptable at 0x051cd23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar6)(plVar15,lVar8,puVar14,puVar6[1]);
          return;
        }
        goto LAB_051cd3f4;
      }
      plVar15 = (long *)FUN_0339a700(*param_2 + 0x20);
      if (plVar15 == (long *)0x0) goto LAB_051cd3f4;
      plVar15 = (long *)(**(code **)(*plVar15 + 0x448))(plVar15,*(undefined8 *)(*plVar15 + 0x450));
      uVar16 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x70);
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870(DAT_083d23b8);
      }
      plVar7 = (long *)FUN_0683eca4(uVar16,0);
      if (plVar15 == (long *)0x0) goto LAB_051cd3f4;
      uVar11 = (**(code **)(*plVar15 + 0x2b8))(plVar15,plVar7,*(undefined8 *)(*plVar15 + 0x2c0));
      if ((uVar11 & 1) == 0) {
        if (plVar7 == (long *)0x0) goto LAB_051cd3f4;
        uVar11 = (**(code **)(*plVar7 + 0x2b8))(plVar7,plVar15,*(undefined8 *)(*plVar7 + 0x2c0));
        if ((uVar11 & 1) != 0) goto LAB_051cd184;
      }
      else {
LAB_051cd184:
        plVar15 = (long *)FUN_0339898c(param_2,DAT_083c7a10);
        if (plVar15 != (long *)0x0) {
          plVar7 = *(long **)(param_1 + 0x10);
          if (plVar7 != (long *)0x0) {
            lVar8 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x10);
            if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_0338f618(lVar8);
            }
            lVar9 = *plVar7;
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar8) {
                  puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                  goto 
                  System_Collections_ObjectModel_ReadOnlyCollection<OVRPlugin_Qpl_Annotation_Builder_Entry>__System_Collections_ICollection_get_IsSynchronized
                  ;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar6 = (undefined8 *)FUN_0338f71c(plVar7,lVar8,0);

            System_Collections_ObjectModel_ReadOnlyCollection<OVRPlugin_Qpl_Annotation_Builder_Entry>__System_Collections_ICollection_get_IsSynchronized
            :
            iVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
            if (0 < iVar4) {
              iVar5 = 0;
              do {
                plVar7 = *(long **)(param_1 + 0x10);
                if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_033d1d3c();
                }
                lVar8 = **(long **)(*(long *)(param_4 + 0x20) + 0xc0);
                if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
                  lVar8 = FUN_0338f618(lVar8);
                }
                lVar9 = *plVar7;
                uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar11 != 0) {
                  piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) == lVar8) {
                      puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                      goto LAB_051cd2f0;
                    }
                    uVar11 = uVar11 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar11 != 0);
                }
                puVar6 = (undefined8 *)FUN_0338f71c(plVar7,lVar8,0);
LAB_051cd2f0:
                (*(code *)*puVar6)(auStack_150,plVar7,iVar5,puVar6[1]);
                memcpy(auStack_d8,auStack_150,0x78);
                memcpy(auStack_150,auStack_d8,0x78);
                lVar8 = FUN_03398650(*(undefined8 *)
                                      (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28),
                                     auStack_150);
                if ((lVar8 != 0) &&
                   (lVar9 = FUN_0339898c(lVar8,*(undefined8 *)(*plVar15 + 0x40)), lVar9 == 0)) {
                  uVar16 = FUN_0334ef60(DAT_086f5c88,"System","ArrayTypeMismatchException",0);
                    /* WARNING: Subroutine does not return */
                  FUN_033d1c20(uVar16,0);
                }
                uVar13 = (uint)puVar14;
                if (*(uint *)(plVar15 + 3) <= uVar13) {
                    /* WARNING: Subroutine does not return */
                  FUN_033d1d44();
                }
                plVar7 = plVar15 + (long)(int)uVar13 + 4;
                *plVar7 = lVar8;
                if (DAT_08908cd0 != 0) {
                  puVar1 = &DAT_0873ccb0 + ((ulong)plVar7 >> 0x12 & 0x7fff);
                  do {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar3) {
                      *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                }
                iVar5 = iVar5 + 1;
                puVar14 = (undefined8 *)(ulong)(uVar13 + 1);
              } while (iVar5 != iVar4);
            }
            return;
          }
LAB_051cd3f4:
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        auVar17 = FUN_06851a2c();
        if (auVar17._8_4_ != 1) {
                    /* WARNING: Subroutine does not return */
          FUN_02e0237c(auVar17._0_8_);
        }
        puVar14 = (undefined8 *)__cxa_begin_catch(auVar17._0_8_);
        uVar16 = FUN_0335b6c8(&DAT_083c8a88,1);
        uVar11 = FUN_033c6698(uVar16,*(undefined8 *)*puVar14);
        if ((uVar11 & 1) == 0) goto LAB_051cd47c;
        __cxa_end_catch();
      }
      FUN_06851a2c(0);
LAB_051cd47c:
      puVar6 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar6 = *puVar14;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar6,&PTR_PTR_07e8c608,0);
    }
  }
  uVar16 = 5;
LAB_051cd420:
                    /* WARNING: Subroutine does not return */
  FUN_06850f64(uVar16,0);
}


