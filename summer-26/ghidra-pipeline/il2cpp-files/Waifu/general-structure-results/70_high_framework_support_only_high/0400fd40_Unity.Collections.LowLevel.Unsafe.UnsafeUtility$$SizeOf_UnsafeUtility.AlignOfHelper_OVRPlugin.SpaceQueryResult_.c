/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$SizeOf<UnsafeUtility.AlignOfHelper<OVRPlugin.SpaceQueryResult>>
ENTRY_POINT: 0400fd40
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<OVRPlugin_SpaceQueryResult>>
               (void)

{
  ulong *puVar1;
  undefined8 uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  void *__src;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long in_x9;
  int in_w10;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  size_t __n;
  int *piVar12;
  int unaff_w23;
  void *__dest;
  undefined8 *unaff_x24;
  void *__dest_00;
  long unaff_x29;
  
  do {
    if (-1 < in_w10) {
      unaff_x24 = (undefined8 *)*unaff_x24;
    }
    puVar11 = *(undefined8 **)(in_x9 + 0x18);
    piVar12 = *(int **)(unaff_x29 + -0x50);
    uVar9 = *puVar11;
    *(undefined4 *)(unaff_x29 + -0xc) = 10;
    *(undefined8 **)(unaff_x29 + -0x20) = unaff_x24;
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0xc;
    *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x68);
    *(int **)(unaff_x29 + -0x28) = piVar12;
    (*(code *)puVar11[2])(uVar9,puVar11,0,unaff_x29 + -0x30,unaff_x29 + -0x10);
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<CopyClosingMeshJobData>:
    lVar10 = *unaff_x21;
    unaff_w23 = unaff_w23 + 1;
    if (lVar10 == 0) {
LAB_0401011c:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    if (*(int *)(lVar10 + 0x18) <= unaff_w23) {
      if (*(long *)(*(long *)(unaff_x29 + -0x90) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(*(undefined4 *)(unaff_x29 + -0x94));
      }
      return;
    }
    FUN_04a9f994(unaff_x29 + -0x30,lVar10,unaff_w23,DAT_083f2dc8);
    uVar9 = *(undefined8 *)(unaff_x29 + -0x30);
    plVar6 = (long *)FUN_073fd434(unaff_x29 + -0x38,uVar9,0);
    if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
      FUN_033b9870(DAT_083d23b8);
      if (plVar6 != (long *)0x0) goto LAB_0400f9ec;
LAB_0400fa14:
      lVar10 = FUN_03398188(DAT_083c7c90,7);
      if (lVar10 == 0) goto LAB_0401011c;
      if (*(int *)(lVar10 + 0x18) == 0) {
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<FixedBytes4096Align8>:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      puVar11 = (undefined8 *)(lVar10 + 0x20);
      *puVar11 = DAT_08441450;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)puVar11 >> 0x12 & 0x7fff);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = *puVar1 | unaff_x20 << ((ulong)puVar11 >> 0xc & 0x3f);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      uVar7 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      plVar6 = (long *)FUN_0683eca4(uVar7,0);
      if (plVar6 == (long *)0x0) goto LAB_0401011c;
      uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
      uVar3 = *(uint *)(lVar10 + 0x18);
      if (uVar3 < 2)
      goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<FixedBytes4096Align8>;
      puVar11 = (undefined8 *)(lVar10 + 0x28);
      *puVar11 = uVar7;
      if (DAT_08908cd0 == 0) {
        if (((uVar3 < 3) || (*(undefined8 *)(lVar10 + 0x30) = DAT_0842eb80, uVar3 == 3)) ||
           ((*(undefined8 *)(lVar10 + 0x38) = uVar9, uVar3 < 5 ||
            ((*(undefined8 *)(lVar10 + 0x40) = DAT_0842f4d8, uVar3 == 5 ||
             (*(undefined8 *)(lVar10 + 0x48) = *(undefined8 *)(unaff_x29 + -0x48), uVar3 < 7))))))
        goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<FixedBytes4096Align8>;
        *(undefined8 *)(lVar10 + 0x50) = DAT_0842f8a8;
      }
      else {
        puVar1 = &DAT_0873ccb0 + ((ulong)puVar11 >> 0x12 & 0x7fff);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = *puVar1 | unaff_x20 << ((ulong)puVar11 >> 0xc & 0x3f);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (*(uint *)(lVar10 + 0x18) < 3)
        goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<FixedBytes4096Align8>;
        puVar11 = (undefined8 *)(lVar10 + 0x30);
        *puVar11 = DAT_0842eb80;
        puVar1 = &DAT_0873ccb0 + ((ulong)puVar11 >> 0x12 & 0x7fff);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = *puVar1 | unaff_x20 << ((ulong)puVar11 >> 0xc & 0x3f);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (*(uint *)(lVar10 + 0x18) < 4)
        goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<FixedBytes4096Align8>;
        puVar11 = (undefined8 *)(lVar10 + 0x38);
        *puVar11 = uVar9;
        puVar1 = &DAT_0873ccb0 + ((ulong)puVar11 >> 0x12 & 0x7fff);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = *puVar1 | unaff_x20 << ((ulong)puVar11 >> 0xc & 0x3f);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (*(uint *)(lVar10 + 0x18) < 5)
        goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<FixedBytes4096Align8>;
        puVar11 = (undefined8 *)(lVar10 + 0x40);
        *puVar11 = DAT_0842f4d8;
        puVar1 = &DAT_0873ccb0 + ((ulong)puVar11 >> 0x12 & 0x7fff);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = *puVar1 | unaff_x20 << ((ulong)puVar11 >> 0xc & 0x3f);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (*(uint *)(lVar10 + 0x18) < 6)
        goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<FixedBytes4096Align8>;
        puVar11 = (undefined8 *)(lVar10 + 0x48);
        *puVar11 = *(undefined8 *)(unaff_x29 + -0x48);
        puVar1 = &DAT_0873ccb0 + ((ulong)puVar11 >> 0x12 & 0x7fff);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = *puVar1 | unaff_x20 << ((ulong)puVar11 >> 0xc & 0x3f);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (*(uint *)(lVar10 + 0x18) < 7)
        goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<FixedBytes4096Align8>;
        puVar11 = (undefined8 *)(lVar10 + 0x50);
        *puVar11 = DAT_0842f8a8;
        puVar1 = &DAT_0873ccb0 + ((ulong)puVar11 >> 0x12 & 0x7fff);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = *puVar1 | unaff_x20 << ((ulong)puVar11 >> 0xc & 0x3f);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
LAB_040100dc:
      uVar9 = FUN_0666ee4c(lVar10,0);
      if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
        FUN_033b9870(DAT_083ca458);
      }
      FUN_079ca0b0(uVar9,0);
      goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<CopyClosingMeshJobData>;
    }
    if (plVar6 == (long *)0x0) goto LAB_0400fa14;
LAB_0400f9ec:
    if (*(char *)(*(long *)(unaff_x29 + -0x40) + 0x118) != '\0') {
      *piVar12 = *piVar12 + 1;
      goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<CopyClosingMeshJobData>;
    }
    uVar7 = FUN_0685bdbc(plVar6,0,1);
    lVar10 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0338f618(lVar10);
    }
    lVar10 = FUN_0339898c(uVar7,lVar10);
    if (lVar10 == 0) {
      lVar10 = FUN_03398188(DAT_083c7c90,8);
      if (lVar10 != 0) {
        if (*(int *)(lVar10 + 0x18) == 0)
        goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<FixedBytes4096Align8>;
        puVar11 = (undefined8 *)(lVar10 + 0x20);
        *puVar11 = DAT_0844a430;
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)puVar11 >> 0x12 & 0x7fff);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = *puVar1 | unaff_x20 << ((ulong)puVar11 >> 0xc & 0x3f);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
        uVar3 = *(uint *)(lVar10 + 0x18);
        if (uVar3 < 2)
        goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<FixedBytes4096Align8>;
        puVar11 = (undefined8 *)(lVar10 + 0x28);
        *puVar11 = uVar7;
        if (DAT_08908cd0 == 0) {
          if ((((uVar3 < 3) || (*(undefined8 *)(lVar10 + 0x30) = DAT_0842f7a8, uVar3 == 3)) ||
              (*(undefined8 *)(lVar10 + 0x38) = uVar9, uVar3 < 5)) ||
             ((*(undefined8 *)(lVar10 + 0x40) = DAT_0842f4d8, uVar3 == 5 ||
              (*(undefined8 *)(lVar10 + 0x48) = *(undefined8 *)(unaff_x29 + -0x48), uVar3 < 7))))
          goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<FixedBytes4096Align8>;
          *(undefined8 *)(lVar10 + 0x50) = DAT_0842f8b8;
        }
        else {
          puVar1 = &DAT_0873ccb0 + ((ulong)puVar11 >> 0x12 & 0x7fff);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = *puVar1 | unaff_x20 << ((ulong)puVar11 >> 0xc & 0x3f);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (*(uint *)(lVar10 + 0x18) < 3)
          goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<FixedBytes4096Align8>;
          puVar11 = (undefined8 *)(lVar10 + 0x30);
          *puVar11 = DAT_0842f7a8;
          puVar1 = &DAT_0873ccb0 + ((ulong)puVar11 >> 0x12 & 0x7fff);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = *puVar1 | unaff_x20 << ((ulong)puVar11 >> 0xc & 0x3f);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (*(uint *)(lVar10 + 0x18) < 4)
          goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<FixedBytes4096Align8>;
          puVar11 = (undefined8 *)(lVar10 + 0x38);
          *puVar11 = uVar9;
          puVar1 = &DAT_0873ccb0 + ((ulong)puVar11 >> 0x12 & 0x7fff);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = *puVar1 | unaff_x20 << ((ulong)puVar11 >> 0xc & 0x3f);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (*(uint *)(lVar10 + 0x18) < 5)
          goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<FixedBytes4096Align8>;
          puVar11 = (undefined8 *)(lVar10 + 0x40);
          *puVar11 = DAT_0842f4d8;
          puVar1 = &DAT_0873ccb0 + ((ulong)puVar11 >> 0x12 & 0x7fff);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = *puVar1 | unaff_x20 << ((ulong)puVar11 >> 0xc & 0x3f);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (*(uint *)(lVar10 + 0x18) < 6)
          goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<FixedBytes4096Align8>;
          puVar11 = (undefined8 *)(lVar10 + 0x48);
          *puVar11 = *(undefined8 *)(unaff_x29 + -0x48);
          puVar1 = &DAT_0873ccb0 + ((ulong)puVar11 >> 0x12 & 0x7fff);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = *puVar1 | unaff_x20 << ((ulong)puVar11 >> 0xc & 0x3f);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (*(uint *)(lVar10 + 0x18) < 7)
          goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<FixedBytes4096Align8>;
          puVar11 = (undefined8 *)(lVar10 + 0x50);
          *puVar11 = DAT_0842f8b8;
          puVar1 = &DAT_0873ccb0 + ((ulong)puVar11 >> 0x12 & 0x7fff);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = *puVar1 | unaff_x20 << ((ulong)puVar11 >> 0xc & 0x3f);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        uVar9 = **(undefined8 **)(unaff_x19 + 0x38);
        if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        plVar6 = (long *)FUN_0683eca4(uVar9,0);
        if (plVar6 != (long *)0x0) {
          uVar9 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
          if (*(uint *)(lVar10 + 0x18) < 8)
          goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<FixedBytes4096Align8>;
          puVar11 = (undefined8 *)(lVar10 + 0x58);
          *puVar11 = uVar9;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)puVar11 >> 0x12 & 0x7fff);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = *puVar1 | unaff_x20 << ((ulong)puVar11 >> 0xc & 0x3f);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          goto LAB_040100dc;
        }
      }
      goto LAB_0401011c;
    }
    lVar10 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0338f618(lVar10);
    }
    __dest = *(void **)(unaff_x29 + -0x78);
    __src = (void *)FUN_033d1c38(uVar7,lVar10,__dest);
    __dest_00 = *(void **)(unaff_x29 + -0x80);
    __n = *(size_t *)(unaff_x29 + -0x70);
    memcpy(__dest_00,__src,__n);
    if (*unaff_x21 == 0) goto LAB_0401011c;
    FUN_04a9f994(unaff_x29 + -0x30,*unaff_x21,unaff_w23,DAT_083f2dc8);
    uVar7 = *(undefined8 *)(unaff_x29 + -0x28);
    uVar2 = *(undefined8 *)(unaff_x29 + -0x20);
    memcpy(__dest,__dest_00,__n);
    uVar8 = FUN_03398650(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),__dest);
    FUN_073e51e8(uVar7,uVar2,uVar8,*(undefined8 *)(unaff_x29 + -0x60),
                 *(undefined8 *)(unaff_x29 + -0x58),uVar9,*(undefined8 *)(unaff_x29 + -0x48),0);
    unaff_x24 = *(undefined8 **)(unaff_x29 + -0x88);
    memcpy(unaff_x24,__dest_00,__n);
    in_x9 = *(long *)(unaff_x19 + 0x38);
    in_w10 = *(int *)(*(long *)(in_x9 + 8) + 0x28);
  } while( true );
}


