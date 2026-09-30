/*
FUNCTION_NAME: FUN_080ebb64
ENTRY_POINT: 080ebb64
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_19;ray_or_cast_sink_hits_21;strong_file_logging_hits_12
*/


void FUN_080ebb64(float param_1,long *param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0 [2];
  undefined8 uStack_18c;
  undefined8 local_180 [2];
  undefined8 uStack_16c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined8 uStack_144;
  undefined8 uStack_13c;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  long local_a0 [2];
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  
  if ((DAT_096985df & 1) == 0) {
    FUN_03f13384(PTR_DAT_09177658);
    FUN_03f13384(PTR_DAT_09177660);
    DAT_096985df = 1;
  }
  local_80 = (undefined8 *)0x0;
  local_78 = 0;
  local_90 = (undefined8 *)0x0;
  local_88 = 0;
  local_a0[0] = 0;
  local_a0[1] = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  local_c8 = 0;
  local_d0 = 0;
  uStack_cc = 0;
  local_100 = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  local_e8 = 0;
  local_f0 = 0;
  uStack_ec = 0;
  local_120 = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  local_108 = 0;
  local_110 = 0;
  uStack_10c = 0;
  if (param_1 <= 0.0) {
    return;
  }
  if (param_3 == 0) goto LAB_080ebcec;
  iVar6 = UnityEngine_Physics__Raycast(param_3,0);
  if (iVar6 == 0) {
    return;
  }
  if (param_1 < 1.0) {
    if (*param_2 == 0) goto LAB_080ebcec;
    iVar6 = UnityEngine_Physics__Raycast(*param_2,0);
    if (iVar6 != 0) {
      if (*param_2 != 0) {
        uVar7 = UnityEngine_Physics__Raycast(*param_2,0);
        puVar3 = PTR_DAT_09177660;
        FUN_05a4837c(&local_80,uVar7,2,1,*(undefined8 *)PTR_DAT_09177660);
        uVar7 = UnityEngine_Physics__Raycast(param_3,0);
        FUN_05a4837c(&local_90,uVar7,2,1,*(undefined8 *)puVar3);
        lVar9 = *param_2;
        if (lVar9 != 0) {
          lVar12 = 0;
          uVar11 = 0;
          do {
            iVar6 = UnityEngine_Physics__Raycast(lVar9,0);
            if ((long)iVar6 <= (long)uVar11) {
              iVar6 = UnityEngine_Physics__Raycast(param_3,0);
              if (0 < iVar6) {
                lVar9 = 0;
                uVar11 = 0;
                do {
                  FUN_08786f60(&uStack_13c,param_3,uVar11 & 0xffffffff,0);
                  uVar11 = uVar11 + 1;
                  puVar10 = (undefined8 *)((long)local_90 + lVar9);
                  *(undefined8 *)((long)puVar10 + 0x14) = uStack_128;
                  *(ulong *)((long)puVar10 + 0xc) = CONCAT44(uStack_12c,local_130);
                  puVar10[1] = CONCAT44(local_130,uStack_134);
                  *puVar10 = uStack_13c;
                  iVar6 = UnityEngine_Physics__Raycast(param_3,0);
                  lVar9 = lVar9 + 0x1c;
                } while ((long)uVar11 < (long)iVar6);
              }
              uStack_b8 = local_80[1];
              local_c0 = *local_80;
              local_b0 = local_80[2];
              local_a8 = *(undefined4 *)(local_80 + 3);
              fVar14 = (float)UnityEngine_Collider__ClosestPoint_Injected(&local_c0,0);
              uStack_b8 = local_90[1];
              local_c0 = *local_90;
              local_b0 = local_90[2];
              local_a8 = *(undefined4 *)(local_90 + 3);
              fVar15 = (float)UnityEngine_Collider__ClosestPoint_Injected(&local_c0,0);
              if (fVar15 <= fVar14) {
                fVar14 = fVar15;
              }
              if (*param_2 == 0) break;
              iVar6 = UnityEngine_Physics__Raycast(*param_2,0);
              puVar10 = (undefined8 *)((long)local_80 + (long)(iVar6 + -1) * 0x1c);
              uStack_b8 = puVar10[1];
              local_c0 = *puVar10;
              local_b0 = puVar10[2];
              local_a8 = *(undefined4 *)(puVar10 + 3);
              fVar15 = (float)UnityEngine_Collider__ClosestPoint_Injected(&local_c0,0);
              iVar6 = UnityEngine_Physics__Raycast(param_3,0);
              puVar10 = (undefined8 *)((long)local_90 + (long)(iVar6 + -1) * 0x1c);
              uStack_b8 = puVar10[1];
              local_c0 = *puVar10;
              local_b0 = puVar10[2];
              local_a8 = *(undefined4 *)(puVar10 + 3);
              fVar16 = (float)UnityEngine_Collider__ClosestPoint_Injected(&local_c0,0);
              if (fVar15 <= fVar16) {
                fVar15 = fVar16;
              }
              if (*param_2 == 0) break;
              iVar6 = UnityEngine_Physics__Raycast(*param_2,0);
              iVar8 = UnityEngine_Physics__Raycast(param_3,0);
              FUN_05a4837c(local_a0,iVar8 + iVar6,2,1,*(undefined8 *)puVar3);
              bVar1 = 0 < (int)local_88;
              bVar2 = 0 < (int)local_78;
              if (((int)local_78 < 1) && ((int)local_88 < 1)) {
                uVar13 = 0;
              }
              else {
                uVar13 = 0;
                iVar6 = 0;
                iVar8 = 0;
                do {
                  local_e0 = 0;
                  uStack_d8 = 0;
                  uStack_d4 = 0;
                  local_c8 = 0;
                  local_d0 = 0;
                  uStack_cc = 0;
                  uStack_f8 = 0;
                  uStack_f4 = 0;
                  local_f0 = 0;
                  uStack_ec = 0;
                  local_100 = 0;
                  local_e8 = 0;
                  if ((bVar2) && (bVar1)) {
                    FUN_080eb684(&uStack_13c,local_80,local_78,iVar6);
                    uStack_d8 = uStack_134;
                    local_e0 = uStack_13c;
                    uStack_cc = (undefined4)uStack_128;
                    local_c8 = (undefined4)((ulong)uStack_128 >> 0x20);
                    uStack_d4 = local_130;
                    local_d0 = uStack_12c;
                    FUN_080eb684(&local_158,local_90,local_88,iVar8);
                    uStack_f8 = uStack_150;
                    local_100 = local_158;
                    uStack_ec = (undefined4)uStack_144;
                    local_e8 = (undefined4)((ulong)uStack_144 >> 0x20);
                    uStack_f4 = uStack_14c;
                    local_f0 = uStack_148;
                    fVar16 = (float)UnityEngine_Collider__ClosestPoint_Injected(&local_e0,0);
                    fVar17 = (float)UnityEngine_Collider__ClosestPoint_Injected(&local_100,0);
                    if (fVar16 != fVar17) {
                      fVar16 = (float)UnityEngine_Collider__ClosestPoint_Injected(&local_e0,0);
                      fVar17 = (float)UnityEngine_Collider__ClosestPoint_Injected(&local_100,0);
                      uVar5 = local_78;
                      puVar4 = local_80;
                      uVar18 = local_88;
                      puVar10 = local_90;
                      if (fVar17 <= fVar16) {
                        uVar7 = UnityEngine_Collider__ClosestPoint_Injected(&local_100,0);
                        FUN_080ebaa0(&uStack_13c,fVar14,fVar15,uVar7,puVar4,uVar5,iVar6 + -1,iVar6);
                        local_e0 = uStack_13c;
                        uVar18 = uStack_128;
                        uStack_d8 = uStack_134;
                        uStack_d4 = local_130;
                        local_d0 = uStack_12c;
                        goto LAB_080ec0e8;
                      }
                      uVar7 = UnityEngine_Collider__ClosestPoint_Injected(&local_e0,0);
                      FUN_080ebaa0(&uStack_13c,fVar14,fVar15,uVar7,puVar10,uVar18,iVar8 + -1,iVar8);
                      local_100 = uStack_13c;
                      uVar18 = uStack_128;
                      uStack_f8 = uStack_134;
                      uStack_f4 = local_130;
                      local_f0 = uStack_12c;
                      goto LAB_080ec09c;
                    }
                    iVar6 = iVar6 + 1;
LAB_080ec0f0:
                    iVar8 = iVar8 + 1;
                  }
                  else {
                    if (!bVar2) {
                      FUN_080eb684(&uStack_13c,local_90,local_88,iVar8);
                      uVar18 = local_78;
                      puVar10 = local_80;
                      uStack_f8 = uStack_134;
                      local_100 = uStack_13c;
                      uStack_ec = (undefined4)uStack_128;
                      local_e8 = (undefined4)((ulong)uStack_128 >> 0x20);
                      uStack_f4 = local_130;
                      local_f0 = uStack_12c;
                      uVar7 = UnityEngine_Collider__ClosestPoint_Injected(&local_100,0);
                      FUN_080ebaa0(&local_158,fVar14,fVar15,uVar7,puVar10,uVar18,iVar6 + -1,iVar6);
                      local_e0 = local_158;
                      uVar18 = uStack_144;
                      uStack_d8 = uStack_150;
                      uStack_d4 = uStack_14c;
                      local_d0 = uStack_148;
LAB_080ec0e8:
                      uStack_cc = (undefined4)uVar18;
                      local_c8 = (undefined4)((ulong)uVar18 >> 0x20);
                      goto LAB_080ec0f0;
                    }
                    FUN_080eb684(&uStack_13c,local_80,local_78,iVar6);
                    uVar18 = local_88;
                    puVar10 = local_90;
                    uStack_d8 = uStack_134;
                    local_e0 = uStack_13c;
                    uStack_cc = (undefined4)uStack_128;
                    local_c8 = (undefined4)((ulong)uStack_128 >> 0x20);
                    uStack_d4 = local_130;
                    local_d0 = uStack_12c;
                    uVar7 = UnityEngine_Collider__ClosestPoint_Injected(&local_e0,0);
                    FUN_080ebaa0(&local_158,fVar14,fVar15,uVar7,puVar10,uVar18,iVar8 + -1,iVar8);
                    local_100 = local_158;
                    uVar18 = uStack_144;
                    uStack_f8 = uStack_150;
                    uStack_f4 = uStack_14c;
                    local_f0 = uStack_148;
LAB_080ec09c:
                    iVar6 = iVar6 + 1;
                    uStack_ec = (undefined4)uVar18;
                    local_e8 = (undefined4)((ulong)uVar18 >> 0x20);
                  }
                  uStack_16c = CONCAT44(local_c8,uStack_cc);
                  local_180[0] = local_e0;
                  uStack_18c = CONCAT44(local_e8,uStack_ec);
                  local_1a0[0] = local_100;
                  FUN_080eb4c4(&local_120,param_1,local_180,local_1a0);
                  puVar10 = (undefined8 *)(local_a0[0] + (long)(int)uVar13 * 0x1c);
                  uVar13 = uVar13 + 1;
                  puVar10[1] = CONCAT44(uStack_114,uStack_118);
                  *puVar10 = local_120;
                  *(ulong *)((long)puVar10 + 0x14) = CONCAT44(local_108,uStack_10c);
                  *(ulong *)((long)puVar10 + 0xc) = CONCAT44(local_110,uStack_114);
                  bVar1 = iVar8 < (int)local_88;
                  bVar2 = iVar6 < (int)local_78;
                } while ((iVar6 < (int)local_78) || (iVar8 < (int)local_88));
              }
              if (*param_2 != 0) {
                FUN_08786e38(*param_2,0);
                if (0 < (int)uVar13) {
                  lVar9 = 0;
                  do {
                    if (*param_2 == 0) goto LAB_080ebcec;
                    puVar10 = (undefined8 *)(local_a0[0] + lVar9);
                    uStack_1b8 = puVar10[1];
                    local_1c0 = *puVar10;
                    local_1b0 = puVar10[2];
                    local_1a8 = *(undefined4 *)(puVar10 + 3);
                    FUN_08786cb4(*param_2,&local_1c0,0);
                    lVar9 = lVar9 + 0x1c;
                  } while ((ulong)uVar13 * 0x1c - lVar9 != 0);
                }
                FUN_05a486ac(local_a0,*(undefined8 *)PTR_DAT_09177658);
                return;
              }
              break;
            }
            if (*param_2 == 0) break;
            FUN_08786f60(&uStack_13c,*param_2,uVar11 & 0xffffffff,0);
            uVar11 = uVar11 + 1;
            puVar10 = (undefined8 *)((long)local_80 + lVar12);
            lVar12 = lVar12 + 0x1c;
            *(undefined8 *)((long)puVar10 + 0x14) = uStack_128;
            *(ulong *)((long)puVar10 + 0xc) = CONCAT44(uStack_12c,local_130);
            puVar10[1] = CONCAT44(local_130,uStack_134);
            *puVar10 = uStack_13c;
            lVar9 = *param_2;
          } while (lVar9 != 0);
        }
      }
      goto LAB_080ebcec;
    }
  }
  if (*param_2 != 0) {
    FUN_087878e0(*param_2,param_3,0);
    return;
  }
LAB_080ebcec:
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


