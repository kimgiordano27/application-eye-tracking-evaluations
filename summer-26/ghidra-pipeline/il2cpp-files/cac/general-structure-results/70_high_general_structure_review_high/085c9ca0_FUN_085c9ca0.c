/*
FUNCTION_NAME: FUN_085c9ca0
ENTRY_POINT: 085c9ca0
PROGRAM: cac-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_8;telemetry_or_network_hits_4
*/


void FUN_085c9ca0(undefined8 *param_1,undefined1 param_2 [16],undefined4 param_3,float param_4,
                 long param_5)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar20;
  ulong uVar19;
  ulong uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 local_d0;
  undefined1 local_c0 [8];
  float local_b8;
  undefined8 local_b4;
  float local_ac;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  
  if ((DAT_0969b184 & 1) == 0) {
    FUN_03f13384(PTR_DAT_09198a58);
    FUN_03f13384(PTR_DAT_09198a60);
    FUN_03f13384(PTR_DAT_09198a68);
    FUN_03f13384(PTR_DAT_09198a70);
    FUN_03f13384(PTR_DAT_09198a78);
    FUN_03f13384(PTR_DAT_09198a80);
    DAT_0969b184 = 1;
  }
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  if (param_5 != 0) {
    if (*(int *)(param_5 + 0x18) < 1) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    else {
      lVar6 = FUN_056b0600(param_5,0,*(undefined8 *)PTR_DAT_09198a80);
      if ((lVar6 == 0) || (lVar6 = FUN_087f1584(lVar6,0), puVar5 = PTR_DAT_09198a70, lVar6 == 0))
      goto 
      UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRSessionSubsystem_NativeApi__UnityOpenXRMeta_Session_Construct
      ;
      uVar9 = FUN_08808ca8(lVar6,0);
      if (DAT_096847b5 == '\0') {
        FUN_03f13384(PTR_DAT_0910c4c8);
        DAT_096847b5 = '\x01';
      }
      puVar4 = PTR_DAT_09198a60;
      puVar3 = PTR_DAT_09198a58;
      puVar2 = PTR_DAT_0910c4c8;
      uVar11 = **(undefined8 **)(*(long *)PTR_DAT_0910c4c8 + 0xb8);
      uVar11 = CONCAT44((float)((ulong)uVar11 >> 0x20) * 0.5,(float)uVar11 * 0.5);
      fVar22 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_0910c4c8 + 0xb8) + 1) * 0.5;
      FUN_056b1374(&local_98,param_5,*(undefined8 *)puVar5);
      fVar1 = DAT_01928a50;
      local_a8 = 0;
      local_d0 = CONCAT44(param_3,uVar9);
      puStack_a0 = &local_98;
      while (uVar7 = FUN_072070ec(&local_98,*(undefined8 *)puVar4), lVar6 = local_88,
            (uVar7 & 1) != 0) {
        if (local_88 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f1362c();
        }
        FUN_087a31a8(local_c0,local_88,0);
        fVar13 = local_ac;
        uVar14 = local_b4;
        if (DAT_096847b5 == '\0') {
          FUN_03f13384(puVar2);
          DAT_096847b5 = '\x01';
        }
        fVar10 = (float)uVar14;
        fVar12 = (float)((ulong)uVar14 >> 0x20);
        puVar8 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
        uVar14 = *puVar8;
        fVar10 = (fVar10 + fVar10) - (float)uVar14;
        fVar12 = (fVar12 + fVar12) - (float)((ulong)uVar14 >> 0x20);
        fVar13 = (fVar13 + fVar13) - *(float *)(puVar8 + 1);
        if (fVar1 <= fVar13 * fVar13 + fVar10 * fVar10 + fVar12 * fVar12) {
          FUN_087a31a8(local_c0,lVar6,0);
          fVar12 = local_b8 - local_ac;
          fVar10 = local_b8 + local_ac;
          fVar25 = local_c0._0_4_ - (float)local_b4;
          fVar17 = (float)((ulong)local_b4 >> 0x20);
          fVar26 = local_c0._4_4_ - fVar17;
          fVar16 = local_c0._0_4_ + (float)local_b4;
          fVar17 = local_c0._4_4_ + fVar17;
          uVar7 = CONCAT44(fVar17,fVar16);
          fVar18 = (float)local_d0 - (float)uVar11;
          fVar24 = (float)((ulong)uVar11 >> 0x20);
          fVar13 = (float)((ulong)local_d0 >> 0x20);
          fVar20 = fVar13 - fVar24;
          uVar19 = CONCAT44(fVar20,fVar18);
          fVar23 = (float)uVar11 + (float)local_d0;
          fVar24 = fVar24 + fVar13;
          fVar13 = param_4 - fVar22;
          if (fVar12 <= param_4 - fVar22) {
            fVar13 = fVar12;
          }
          fVar15 = fVar22 + param_4;
          if (fVar22 + param_4 <= fVar12) {
            fVar15 = fVar12;
          }
          uVar19 = uVar19 ^ (uVar19 ^ CONCAT44(fVar26,fVar25)) &
                            ~CONCAT44(-(uint)(fVar20 < fVar26),-(uint)(fVar18 < fVar25));
          uVar21 = CONCAT44(fVar26,fVar25) ^
                   (CONCAT44(fVar26,fVar25) ^ CONCAT44(fVar24,fVar23)) &
                   CONCAT44(-(uint)(fVar26 < fVar24),-(uint)(fVar25 < fVar23));
          fVar18 = (float)uVar19;
          fVar24 = (float)(uVar19 >> 0x20);
          fVar22 = (fVar15 - fVar13) * 0.5;
          fVar20 = ((float)uVar21 - fVar18) * 0.5;
          fVar23 = ((float)(uVar21 >> 0x20) - fVar24) * 0.5;
          fVar18 = fVar18 + fVar20;
          fVar24 = fVar24 + fVar23;
          param_4 = (fVar13 + fVar22) - fVar22;
          fVar22 = fVar22 + fVar13 + fVar22;
          fVar13 = fVar18 - fVar20;
          fVar12 = fVar24 - fVar23;
          fVar20 = fVar20 + fVar18;
          fVar23 = fVar23 + fVar24;
          if (fVar10 <= param_4) {
            param_4 = fVar10;
          }
          if (fVar22 <= fVar10) {
            fVar22 = fVar10;
          }
          uVar19 = uVar7 ^ (uVar7 ^ CONCAT44(fVar12,fVar13)) &
                           CONCAT44(-(uint)(fVar12 < fVar17),-(uint)(fVar13 < fVar16));
          uVar7 = uVar7 ^ (uVar7 ^ CONCAT44(fVar23,fVar20)) &
                          CONCAT44(-(uint)(fVar17 < fVar23),-(uint)(fVar16 < fVar20));
          fVar13 = (float)uVar19;
          fVar10 = (float)(uVar19 >> 0x20);
          fVar22 = (fVar22 - param_4) * 0.5;
          fVar12 = ((float)uVar7 - fVar13) * 0.5;
          fVar16 = ((float)(uVar7 >> 0x20) - fVar10) * 0.5;
          uVar11 = CONCAT44(fVar16,fVar12);
          param_4 = param_4 + fVar22;
          local_d0 = CONCAT44(fVar10 + fVar16,fVar13 + fVar12);
        }
      }
      FUN_072070e8(&local_98,*(undefined8 *)puVar3);
      *(float *)(param_1 + 1) = param_4;
      *(undefined8 *)((long)param_1 + 0xc) = uVar11;
      *param_1 = local_d0;
      *(float *)((long)param_1 + 0x14) = fVar22;
    }
    return;
  }

  UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRSessionSubsystem_NativeApi__UnityOpenXRMeta_Session_Construct
  :
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


