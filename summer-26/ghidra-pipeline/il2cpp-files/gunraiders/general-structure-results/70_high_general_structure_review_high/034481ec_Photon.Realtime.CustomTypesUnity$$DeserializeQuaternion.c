/*
FUNCTION_NAME: Photon.Realtime.CustomTypesUnity$$DeserializeQuaternion
ENTRY_POINT: 034481ec
PROGRAM: gunraiders-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


long Photon_Realtime_CustomTypesUnity__DeserializeQuaternion
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined4 unaff_w19;
  long *unaff_x20;
  long unaff_x21;
  uint uVar12;
  ulong uVar13;
  undefined4 *puVar14;
  long lVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  
  FUN_01c5d288();
  FUN_01c5d288(VoxelBusters_CoreLibrary_Callback<string>_TypeInfo);
  FUN_01c5d288(PTR_DAT_04232658);
  FUN_01c5d288(PTR_DAT_04232660);
  FUN_01c5d288(PTR_DAT_042325d8);
  FUN_01c5d288(PTR_DAT_04232b48);
  FUN_01c5d288(PTR_DAT_04232530);
  FUN_01c5d288(PTR_DAT_042323b8);
  FUN_01c5d288(PTR_DAT_04232560);
  *(undefined1 *)(unaff_x21 + 0x388) = 1;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  if (DAT_0453640d == '\0') {
    FUN_01c5d288(PTR_DAT_04232530);
    DAT_0453640d = '\x01';
  }
  lVar4 = *unaff_x20;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar4 = *unaff_x20;
  }
  if (*(long *)(*(long *)(lVar4 + 0xb8) + 0x18) != 0) {
    uVar5 = FUN_03447d3c();
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    if (DAT_0453640d == '\0') {
      FUN_01c5d288(PTR_DAT_04232530);
      DAT_0453640d = '\x01';
    }
    lVar4 = *unaff_x20;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar4 = *unaff_x20;
    }
    if (*(long *)(*(long *)(lVar4 + 0xb8) + 0x18) != 0) {
      uVar6 = FUN_03447dd4(lVar4,unaff_w19);
      lVar4 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_042325d8);
      FUN_02ddcbb4(lVar4,uVar6,*(undefined8 *)VoxelBusters_CoreLibrary_Callback<string>_TypeInfo);
      if (lVar4 != 0) {
        if (*(int *)(lVar4 + 0x18) == 0) {
          return 0;
        }
        uVar17 = FUN_02ddcfa0(lVar4,0,*(undefined8 *)PTR_DAT_04232660);
        lVar8 = *(long *)(lVar4 + 0x10);
        lVar10 = *(long *)PTR_DAT_04232630;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar8 != 0) {
          uVar3 = *(uint *)(lVar4 + 0x18);
          if (uVar3 < *(uint *)(lVar8 + 0x18)) {
            lVar8 = lVar8 + (long)(int)uVar3 * 0xc;
            *(uint *)(lVar4 + 0x18) = uVar3 + 1;
            *(undefined4 *)(lVar8 + 0x20) = uVar17;
            *(undefined4 *)(lVar8 + 0x24) = param_2;
            *(undefined4 *)(lVar8 + 0x28) = param_3;
          }
          else {
            FUN_02ddd2d0(lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
          uVar3 = *(uint *)(lVar4 + 0x18);
          uVar5 = (ulong)uVar3;
          lVar8 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04232560,uVar3 << 1);
          lVar10 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042323b8,uVar3 << 1);
          if (0 < (int)uVar3) {
            uVar13 = 0;
            puVar14 = (undefined4 *)(lVar8 + 0x28);
            lVar15 = uVar5 << 0x20;
            puVar16 = (undefined4 *)(lVar10 + 0x24);
            do {
              uVar17 = FUN_02ddcfa0(lVar4,uVar13 & 0xffffffff,*(undefined8 *)PTR_DAT_04232660);
              if (lVar8 == 0) goto LAB_03448618;
              uVar12 = *(uint *)(lVar8 + 0x18);
              if (uVar12 <= uVar13) goto LAB_03448614;
              puVar14[-2] = uVar17;
              puVar14[-1] = unaff_s8;
              *puVar14 = param_3;
              if ((ulong)uVar12 <= uVar5 + uVar13) goto LAB_03448614;
              lVar11 = lVar8 + (lVar15 >> 0x20) * 0xc;
              *(undefined4 *)(lVar11 + 0x20) = uVar17;
              *(undefined4 *)(lVar11 + 0x24) = unaff_s9;
              *(undefined4 *)(lVar11 + 0x28) = param_3;
              if (lVar10 == 0) goto LAB_03448618;
              uVar12 = *(uint *)(lVar10 + 0x18);
              if (uVar12 <= uVar13) goto LAB_03448614;
              fVar18 = (float)(int)uVar13 / (float)(int)(uVar3 - 1);
              puVar16[-1] = fVar18;
              *puVar16 = 0;
              if ((ulong)uVar12 <= uVar5 + uVar13) goto LAB_03448614;
              uVar13 = uVar13 + 1;
              lVar11 = lVar10 + (lVar15 >> 0x20) * 8;
              puVar14 = puVar14 + 3;
              lVar15 = lVar15 + 0x100000000;
              puVar16 = puVar16 + 2;
              *(float *)(lVar11 + 0x20) = fVar18;
              *(undefined4 *)(lVar11 + 0x24) = 0x3f800000;
            } while (uVar5 != uVar13);
          }
          uVar12 = uVar3 - 1;
          lVar4 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04232bd8,uVar12 * 6);
          if (0 < (int)uVar12) {
            if (lVar4 == 0) goto LAB_03448618;
            uVar2 = *(uint *)(lVar4 + 0x18);
            lVar15 = 0;
            iVar9 = 0;
            do {
              uVar7 = (uint)lVar15;
              if (uVar2 <= uVar7) {
LAB_03448614:
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4ac();
              }
              *(int *)(lVar4 + (long)(int)uVar7 * 4 + 0x20) = iVar9;
              if (uVar2 <= uVar7 + 1) goto LAB_03448614;
              *(uint *)(lVar4 + (long)(int)(uVar7 + 1) * 4 + 0x20) = uVar3 + iVar9;
              if (uVar2 <= uVar7 + 2) goto LAB_03448614;
              iVar1 = uVar3 + iVar9 + 1;
              *(int *)(lVar4 + (long)(int)(uVar7 + 2) * 4 + 0x20) = iVar1;
              if (uVar2 <= uVar7 + 3) goto LAB_03448614;
              *(int *)(lVar4 + (long)(int)(uVar7 + 3) * 4 + 0x20) = iVar9;
              if (uVar2 <= uVar7 + 4) goto LAB_03448614;
              *(int *)(lVar4 + (long)(int)(uVar7 + 4) * 4 + 0x20) = iVar1;
              if (uVar2 <= uVar7 + 5) goto LAB_03448614;
              lVar15 = lVar15 + 6;
              iVar1 = iVar9 + 1;
              iVar9 = iVar9 + 1;
              *(int *)(lVar4 + (long)(int)(uVar7 + 5) * 4 + 0x20) = iVar1;
            } while ((ulong)uVar12 * 6 - lVar15 != 0);
          }
          lVar15 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04232b48);
          FUN_03d215c0(lVar15,0);
          if (lVar15 != 0) {
            FUN_03d24070(lVar15,lVar8,0);
            FUN_03d24274(lVar15,lVar10,0);
            FUN_03d27b54(lVar15,lVar4,0);
            return lVar15;
          }
        }
      }
    }
  }
LAB_03448618:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


