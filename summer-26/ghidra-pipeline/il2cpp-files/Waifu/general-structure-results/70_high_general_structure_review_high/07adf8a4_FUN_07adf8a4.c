/*
FUNCTION_NAME: FUN_07adf8a4
ENTRY_POINT: 07adf8a4
PROGRAM: Waifu-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


long FUN_07adf8a4(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 local_68;
  
  if ((DAT_086f2981 & 1) == 0) {
    FUN_0335b6c8(&DAT_083ca590,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_0840cbe0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_0840ccb8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_0840ccf0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083bcbc0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083bd1d0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083bd308,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083c7dc8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083d23b8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_0843c4c8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_08445ab0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_084462f0,1);
    DataMemoryBarrier(2,3);
    DAT_086f2981 = 1;
  }
  if (*(int *)(DAT_083ca590 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar12 = *(undefined4 *)(*(long *)(DAT_083ca590 + 0xb8) + 0x10);
  uVar11 = *(undefined4 *)(*(long *)(DAT_083ca590 + 0xb8) + 0x14);
  plVar4 = (long *)FUN_03398188(DAT_083c7dc8,2);
  uVar9 = DAT_083bcbc0;
  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
    FUN_033b9870(DAT_083d23b8);
  }
  lVar5 = FUN_0683eca4(uVar9,0);
  if (plVar4 == (long *)0x0) goto LAB_07adfe98;
  if ((lVar5 != 0) && (lVar6 = FUN_0339898c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
LAB_07adfea0:
    uVar9 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
    FUN_033d1c20(uVar9,0);
  }
  if ((int)plVar4[3] != 0) {
    plVar10 = plVar4 + 4;
    *plVar10 = lVar5;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar10 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar5 = FUN_0683eca4(DAT_083bd308,0);
    if ((lVar5 != 0) && (lVar6 = FUN_0339898c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
    goto LAB_07adfea0;
    if (1 < *(uint *)(plVar4 + 3)) {
      plVar10 = plVar4 + 5;
      *plVar10 = lVar5;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar10 >> 0x12 & 0x7fff);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lVar5 = FUN_07add5f8(uVar12,uVar11,DAT_08445ab0,plVar4);
      plVar4 = (long *)FUN_03398188(DAT_083c7dc8,1);
      lVar6 = FUN_0683eca4(DAT_083bd1d0,0);
      if (plVar4 != (long *)0x0) {
        if ((lVar6 != 0) &&
           (lVar7 = FUN_0339898c(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0))
        goto LAB_07adfea0;
        if ((int)plVar4[3] == 0) goto LAB_07adfe9c;
        plVar10 = plVar4 + 4;
        *plVar10 = lVar6;
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)plVar10 >> 0x12 & 0x7fff);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        lVar6 = FUN_07add76c(DAT_084462f0,lVar5,plVar4);
        plVar4 = (long *)FUN_03398188(DAT_083c7dc8,1);
        lVar7 = FUN_0683eca4(DAT_083bcbc0,0);
        if (plVar4 != (long *)0x0) {
          if ((lVar7 != 0) &&
             (lVar8 = FUN_0339898c(lVar7,*(undefined8 *)(*plVar4 + 0x40)), lVar8 == 0))
          goto LAB_07adfea0;
          if ((int)plVar4[3] == 0) goto LAB_07adfe9c;
          plVar10 = plVar4 + 4;
          *plVar10 = lVar7;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)plVar10 >> 0x12 & 0x7fff);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          lVar7 = FUN_07add76c(DAT_0843c4c8,lVar6,plVar4);
          if ((lVar5 != 0) &&
             (plVar4 = (long *)FUN_03fa1bc8(lVar5,DAT_0840cbe0), plVar4 != (long *)0x0)) {
            FUN_07ade03c(plVar4,param_1[1]);
            FUN_07ade400(plVar4,1);
            lVar8 = *(long *)(DAT_083ca590 + 0xb8);
            (**(code **)(*plVar4 + 0x2a8))
                      (*(undefined4 *)(lVar8 + 0x20),*(undefined4 *)(lVar8 + 0x24),
                       *(undefined4 *)(lVar8 + 0x28),*(undefined4 *)(lVar8 + 0x2c),plVar4,
                       *(undefined8 *)(*plVar4 + 0x2b0));
            if ((lVar7 != 0) &&
               (plVar4 = (long *)FUN_03fa1bc8(lVar7,DAT_0840cbe0), plVar4 != (long *)0x0)) {
              FUN_07ade03c(plVar4,*param_1);
              FUN_07ade400(plVar4,1);
              lVar8 = *(long *)(DAT_083ca590 + 0xb8);
              (**(code **)(*plVar4 + 0x2a8))
                        (*(undefined4 *)(lVar8 + 0x20),*(undefined4 *)(lVar8 + 0x24),
                         *(undefined4 *)(lVar8 + 0x28),*(undefined4 *)(lVar8 + 0x2c),plVar4,
                         *(undefined8 *)(*plVar4 + 0x2b0));
              if ((lVar6 != 0) && (lVar6 = FUN_03fa1bc8(lVar6,DAT_0840ccb8), lVar6 != 0)) {
                local_68 = NEON_fmov(0xc1a00000,4);
                if (DAT_086ef808 == (code *)0x0) {
                  DAT_086ef808 = (code *)FUN_033d1b68(
                                                  "UnityEngine.RectTransform::set_sizeDelta_Injected(UnityEngine.Vector2&)"
                                                  );
                }
                (*DAT_086ef808)(lVar6,&local_68);
                if (DAT_086d8912 == '\0') {
                  FUN_0335b6c8(&DAT_083d2c48,1);
                  DataMemoryBarrier(2,3);
                  DAT_086d8912 = '\x01';
                }
                FUN_07a17c9c(**(undefined4 **)(DAT_083d2c48 + 0xb8),
                             (*(undefined4 **)(DAT_083d2c48 + 0xb8))[1],lVar6,0);
                if (DAT_086d8b28 == '\0') {
                  FUN_0335b6c8(&DAT_083d2c48,1);
                  DataMemoryBarrier(2,3);
                  DAT_086d8b28 = '\x01';
                }
                FUN_07a17db8(*(undefined4 *)(*(long *)(DAT_083d2c48 + 0xb8) + 8),
                             *(undefined4 *)(*(long *)(DAT_083d2c48 + 0xb8) + 0xc),lVar6,0);
                lVar6 = FUN_03fa1bc8(lVar7,DAT_0840ccb8);
                if (lVar6 != 0) {
                  local_68 = NEON_fmov(0x41a00000,4);
                  if (DAT_086ef808 == (code *)0x0) {
                    DAT_086ef808 = (code *)FUN_033d1b68(
                                                  "UnityEngine.RectTransform::set_sizeDelta_Injected(UnityEngine.Vector2&)"
                                                  );
                  }
                  (*DAT_086ef808)(lVar6,&local_68);
                  lVar7 = FUN_03fa1bc8(lVar5,DAT_0840ccf0);
                  if (lVar7 != 0) {
                    UniGLTF_Extensions_VRMC_vrm_animation_GltfDeserializer____humanoid__humanBones_Deserialize_LeftThumbProximal
                              (lVar7,lVar6,0);
                    FUN_07c8c96c(lVar7,plVar4,0);
                    FUN_07addb00(lVar7);
                    return lVar5;
                  }
                }
              }
            }
          }
        }
      }
LAB_07adfe98:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
  }
LAB_07adfe9c:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


