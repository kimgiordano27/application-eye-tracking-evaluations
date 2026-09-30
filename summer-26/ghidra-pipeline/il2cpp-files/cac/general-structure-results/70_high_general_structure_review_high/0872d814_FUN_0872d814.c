/*
FUNCTION_NAME: FUN_0872d814
ENTRY_POINT: 0872d814
PROGRAM: cac-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1
*/


void FUN_0872d814(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 local_58;
  undefined8 local_48;
  
  if ((DAT_0969ca07 & 1) == 0) {
    FUN_03f13384(PTR_DAT_0910d248);
    FUN_03f13384(PTR_DAT_091a1910);
    FUN_03f13384(PTR_DAT_091a1918);
    FUN_03f13384(PTR_DAT_091a17b8);
    FUN_03f13384(PTR_DAT_091a1518);
    FUN_03f13384(PTR_DAT_091a17c0);
    FUN_03f13384(PTR_DAT_091a11b8);
    FUN_03f13384(PTR_DAT_091a17c8);
    FUN_03f13384(PTR_DAT_091a17d0);
    FUN_03f13384(PTR_DAT_091a17d8);
    FUN_03f13384(PTR_DAT_091a17e0);
    FUN_03f13384(PTR_DAT_0910b560);
    FUN_03f13384(PTR_DAT_091a1920);
    FUN_03f13384(PTR_DAT_091a1928);
    FUN_03f13384(PTR_DAT_091a1930);
    FUN_03f13384(PTR_DAT_091a1938);
    FUN_03f13384(PTR_DAT_091a1940);
    FUN_03f13384(PTR_DAT_091a1948);
    FUN_03f13384(PTR_DAT_091a1950);
    FUN_03f13384(PTR_DAT_091a15d0);
    DAT_0969ca07 = 1;
  }
  puVar4 = PTR_DAT_091a1518;
  puVar2 = PTR_DAT_0910b560;
  iVar1 = *param_1;
  local_48 = 0;
  local_58 = 0;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      local_48 = *(undefined8 *)(param_1 + 0xe);
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      *param_1 = -1;
    }
    else {
      if (iVar1 == 1) {
        local_58 = *(undefined8 *)(param_1 + 0x10);
        param_1[0x10] = 0;
        param_1[0x11] = 0;
        *param_1 = -1;
        goto LAB_0872dd14;
      }
LAB_0872d9bc:
      lVar13 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_091a1950);
      FUN_074f9228(lVar13,0);
      plVar9 = (long *)(param_1 + 0xc);
      *plVar9 = lVar13;
      thunk_FUN_03f86000(plVar9,lVar13);
      if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      iVar1 = param_1[8];
      *(int *)(*plVar9 + 0x14) = iVar1;
      if (iVar1 == 0) {
        if (*(int *)(*(long *)PTR_DAT_091a11b8 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar7 = UnityEngine_Rendering_CommandBuffer__Internal_RequestAsyncReadback_2_Injected(0);
LAB_0872da78:
        puVar3 = PTR_DAT_0910d248;
        if ((uVar7 & 1) != 0) {
          lVar13 = *plVar9;
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f1362c();
          }
          *(undefined4 *)(lVar13 + 0x10) = 0xffffffff;
          uVar8 = thunk_FUN_03f4e68c(*(undefined8 *)puVar3);
          FUN_072310c8(uVar8,lVar13,*(undefined8 *)PTR_DAT_091a1930,0);
          lVar13 = *plVar9;
          uVar14 = thunk_FUN_03f4e68c(*(undefined8 *)puVar3);
          FUN_072310c8(uVar14,lVar13,*(undefined8 *)PTR_DAT_091a1938,0);
          lVar13 = *plVar9;
          uVar6 = thunk_FUN_03f4e68c(*(undefined8 *)puVar3);
          FUN_072310c8(uVar6,lVar13,*(undefined8 *)PTR_DAT_091a1940,0);
          FUN_086fb0c8(uVar8,uVar14,uVar6,0);
          while( true ) {
            puVar3 = PTR_DAT_091a15d0;
            lVar13 = *(long *)(param_1 + 0xc);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f1362c();
            }
            if (*(int *)(lVar13 + 0x10) != -1) break;
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            lVar13 = FUN_07539fa0(200,0);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f1362c();
            }
            local_58 = FUN_0752d014(lVar13,0);
            uVar7 = FUN_073d05c4(&local_58,0);
            if ((uVar7 & 1) == 0) {
              *param_1 = 1;
              *(undefined8 *)(param_1 + 0x10) = local_58;
              thunk_FUN_03f86000(param_1 + 0x10,0);
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_03f6fea8();
              }
              FUN_0429c184(param_1 + 2,&local_58,param_1,*(undefined8 *)PTR_DAT_091a1918);
              return;
            }
LAB_0872dd14:
            FUN_073d068c(&local_58,0);
          }
          if (*(int *)(lVar13 + 0x10) == 0) {
            uVar8 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_091a17c0);
            FUN_05036704(uVar8,lVar13,*(undefined8 *)PTR_DAT_091a1948,0);
            uVar14 = *(undefined8 *)(param_1 + 10);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            lVar13 = FUN_04c0162c(uVar8,uVar14,*(undefined8 *)PTR_DAT_091a17e0);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f1362c();
            }
            local_48 = FUN_061b6af8(lVar13,*(undefined8 *)PTR_DAT_091a17d8);
            uVar7 = FUN_0611ffcc(&local_48,*(undefined8 *)PTR_DAT_091a17d0);
            if ((uVar7 & 1) == 0) {
              *param_1 = 3;
              *(undefined8 *)(param_1 + 0xe) = local_48;
              thunk_FUN_03f86000(param_1 + 0xe,0);
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_03f6fea8();
              }
              FUN_0429b614(param_1 + 2,&local_48,param_1,*(undefined8 *)PTR_DAT_091a1910);
              return;
            }
            goto LAB_0872d9a4;
          }
          lVar13 = *(long *)PTR_DAT_091a15d0;
          if (*(int *)(lVar13 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
            lVar13 = *(long *)puVar3;
          }
          puVar10 = *(undefined8 **)(lVar13 + 0xb8);
          lVar12 = puVar10[2];
          if (lVar12 == 0) {
            if (*(int *)(lVar13 + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
              puVar10 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
            }
            uVar8 = *puVar10;
            lVar12 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_091a17c0);
            FUN_05036704(lVar12,uVar8,*(undefined8 *)PTR_DAT_091a1928,0);
            plVar9 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
            *plVar9 = lVar12;
            thunk_FUN_03f86000(plVar9,lVar12);
          }
          uVar8 = *(undefined8 *)(param_1 + 10);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          lVar13 = FUN_04c0162c(lVar12,uVar8,*(undefined8 *)PTR_DAT_091a17e0);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f1362c();
          }
          local_48 = FUN_061b6af8(lVar13,*(undefined8 *)PTR_DAT_091a17d8);
          uVar7 = FUN_0611ffcc(&local_48,*(undefined8 *)PTR_DAT_091a17d0);
          if ((uVar7 & 1) == 0) {
            *param_1 = 2;
            *(undefined8 *)(param_1 + 0xe) = local_48;
            thunk_FUN_03f86000(param_1 + 0xe,0);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            FUN_0429b614(param_1 + 2,&local_48,param_1,*(undefined8 *)PTR_DAT_091a1910);
            return;
          }
          goto LAB_0872da40;
        }
      }
      else if (iVar1 == 1) {
        uVar7 = FUN_0871caf8(0);
        goto LAB_0872da78;
      }
      puVar3 = PTR_DAT_091a15d0;
      lVar13 = *(long *)PTR_DAT_091a15d0;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
        lVar13 = *(long *)puVar3;
      }
      puVar10 = *(undefined8 **)(lVar13 + 0xb8);
      lVar12 = puVar10[1];
      if (lVar12 == 0) {
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
          puVar10 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
        }
        uVar8 = *puVar10;
        lVar12 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_091a17c0);
        FUN_05036704(lVar12,uVar8,*(undefined8 *)PTR_DAT_091a1920,0);
        plVar9 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
        *plVar9 = lVar12;
        thunk_FUN_03f86000(plVar9,lVar12);
      }
      uVar8 = *(undefined8 *)(param_1 + 10);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      lVar13 = FUN_04c0162c(lVar12,uVar8,*(undefined8 *)PTR_DAT_091a17e0);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      local_48 = FUN_061b6af8(lVar13,*(undefined8 *)PTR_DAT_091a17d8);
      uVar7 = FUN_0611ffcc(&local_48,*(undefined8 *)PTR_DAT_091a17d0);
      if ((uVar7 & 1) == 0) {
        *param_1 = 0;
        *(undefined8 *)(param_1 + 0xe) = local_48;
        thunk_FUN_03f86000(param_1 + 0xe,0);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        FUN_0429b614(param_1 + 2,&local_48,param_1,*(undefined8 *)PTR_DAT_091a1910);
        return;
      }
    }
    uVar5 = FUN_0612000c(&local_48,*(undefined8 *)PTR_DAT_091a17c8);
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 3) goto LAB_0872d9bc;
      local_48 = *(undefined8 *)(param_1 + 0xe);
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      *param_1 = -1;
LAB_0872d9a4:
      uVar5 = FUN_0612000c(&local_48,*(undefined8 *)PTR_DAT_091a17c8);
      goto UnityEngine_Rendering_CommandBuffer__SetGlobalMatrixArray;
    }
    local_48 = *(undefined8 *)(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
LAB_0872da40:
    uVar5 = FUN_0612000c(&local_48,*(undefined8 *)PTR_DAT_091a17c8);
  }
UnityEngine_Rendering_CommandBuffer__SetGlobalMatrixArray:
  puVar2 = PTR_DAT_091a17b8;
  piVar11 = param_1 + 0xc;
  piVar11[0] = 0;
  piVar11[1] = 0;
  *param_1 = -2;
  thunk_FUN_03f86000(piVar11,0);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
  }
  FUN_0637a4c0(param_1 + 2,uVar5,*(undefined8 *)puVar2);
  return;
}


