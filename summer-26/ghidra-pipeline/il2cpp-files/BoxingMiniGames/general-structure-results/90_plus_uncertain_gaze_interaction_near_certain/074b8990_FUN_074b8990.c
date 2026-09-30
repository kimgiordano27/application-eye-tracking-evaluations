/*
FUNCTION_NAME: FUN_074b8990
ENTRY_POINT: 074b8990
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 117
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_21;functionality_gaze_interaction_hits_1
*/


void FUN_074b8990(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long *param_5)

{
  float fVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined *puVar26;
  undefined *puVar27;
  long *plVar28;
  char cVar29;
  uint uVar30;
  long lVar31;
  ulong uVar32;
  undefined8 *puVar33;
  int *piVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  ushort uVar39;
  float fVar40;
  ulong uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  short sVar50;
  undefined2 uVar51;
  undefined2 uVar52;
  undefined2 uVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined8 uVar58;
  float fVar59;
  float fVar60;
  undefined8 uVar61;
  float local_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  float local_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 local_88;
  undefined8 *puStack_80;
  long *local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  long *local_60;
  undefined8 local_50;
  undefined8 *puStack_48;
  long *local_40;
  char local_34 [4];
  
  uVar52 = param_4._2_2_;
  uVar51 = param_4._0_2_;
  if ((DAT_07ef42d7 & 1) == 0) {
    FUN_03642964(Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_GetSubArray__);
    FUN_03642964(Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_get_IsCreated__);
    FUN_03642964(Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_op_Implicit__);
    FUN_03642964(Method_Unity_Collections_NativeArray<ShaderInput_LightData>__ctor__);
    FUN_03642964(Method_Unity_Collections_NativeArray<ShaderInput_LightData>_Dispose__);
    FUN_03642964(Method_Unity_Collections_NativeArray<TubeRenderer_VertexLayout>__ctor__);
    FUN_03642964(Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__ctor__);
    FUN_03642964(Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>_Dispose__);
    FUN_03642964(
                Method_Unity_Collections_NativeArray<MeshGenerator_TessellationJobParameters>_Dispose__
                );
    DAT_07ef42d7 = 1;
  }
  local_34[0] = '\0';
  local_50 = 0;
  puStack_48 = (undefined8 *)0x0;
  local_40 = (long *)0x0;
  local_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_60 = (long *)0x0;
  lVar31 = FUN_074b82c8(param_5);
  if (lVar31 != 0) {
    if ((char)param_5[8] != '\0') {
      FUN_074b6acc(param_5,param_5[9],0);
      *(undefined1 *)(param_5 + 8) = 0;
    }
    local_34[0] = '\x01';
    auVar42 = FUN_072b9cc8(param_5[9],local_34,0);
    uStack_a8 = param_2._8_8_;
    local_b0 = param_2._0_4_;
    uStack_ac = param_2._4_4_;
    uVar61 = auVar42._8_8_;
    uVar41 = auVar42._0_8_;
    fVar1 = (float)CONCAT22(uVar52,uVar51);
    uStack_b8 = param_3._8_8_;
    local_c0 = param_3._0_4_;
    uStack_bc = param_3._4_4_;
    auVar49 = param_2;
    lVar31 = FUN_074b82c8(param_5);
    if ((lVar31 == 0) || (lVar31 = FUN_074a2b30(lVar31,0), lVar31 == 0)) goto LAB_074b8fd8;
    uVar30 = FUN_074a1c5c(lVar31,0);
    if (uVar30 < 2) {
      fVar40 = (float)FUN_074b8894(param_5);
      auVar47._8_8_ = param_3._8_8_;
      auVar47._0_4_ = param_3._0_4_;
      auVar47._4_4_ = CONCAT22(uVar52,uVar51);
      fVar44 = auVar49._0_4_;
      auVar43._0_8_ = CONCAT44(fVar44,fVar40);
      fVar60 = auVar42._0_4_;
      auVar45._8_4_ = local_c0;
      auVar45._0_8_ = auVar43._0_8_;
      auVar45._12_4_ = fVar1;
      uVar58 = CONCAT26(param_2._2_2_,CONCAT24(param_2._0_2_,fVar60));
      auVar43._8_8_ = uVar58;
      fVar54 = auVar47._0_4_ + fVar40;
      fVar55 = (float)CONCAT22(uVar52,uVar51) + fVar44;
      fVar56 = fVar60 + local_c0;
      fVar57 = local_b0 + fVar1;
      auVar45 = NEON_ext(auVar45,auVar47,8,1);
      uVar51 = (undefined2)-(uint)(fVar55 < fVar44);
      uVar52 = (undefined2)-(uint)(fVar56 < fVar60);
      fVar59 = (float)((ulong)uVar58 >> 0x20);
      iVar2 = -(uint)(fVar57 < fVar59);
      uVar53 = (undefined2)iVar2;
      fVar59 = fVar59 - fVar57;
      uVar58 = CONCAT26(uVar53,CONCAT24(uVar52,CONCAT22(uVar51,(short)-(uint)(fVar54 < fVar40))));
      auVar48._4_4_ = fVar44 - fVar55;
      auVar48._0_4_ = fVar40 - fVar54;
      auVar48._8_4_ = fVar60 - fVar56;
      auVar48._12_4_ = fVar59;
      auVar4._4_4_ = fVar44 - fVar55;
      auVar4._0_4_ = fVar40 - fVar54;
      auVar4._8_4_ = fVar60 - fVar56;
      auVar4._12_4_ = fVar59;
      auVar48 = NEON_ext(auVar48,auVar4,8,1);
      auVar3._4_4_ = fVar55;
      auVar3._0_4_ = fVar54;
      auVar3._8_4_ = fVar56;
      auVar3._12_4_ = fVar57;
      auVar49._4_2_ = uVar51;
      auVar49._0_4_ = -(uint)(fVar54 < fVar40);
      auVar49._6_2_ = (short)(-(uint)(fVar55 < fVar44) >> 0x10);
      auVar49._8_2_ = uVar52;
      auVar49._10_2_ = (short)(-(uint)(fVar56 < fVar60) >> 0x10);
      auVar49._12_2_ = uVar53;
      auVar49._14_2_ = (short)((uint)iVar2 >> 0x10);
      auVar43 = auVar43 ^ (auVar43 ^ auVar3) & auVar49;
      uVar58 = NEON_ext(uVar58,uVar58,4,1);
      sVar35 = (short)uVar58;
      sVar50 = sVar35 >> 0xf;
      sVar36 = (short)((ulong)uVar58 >> 0x10);
      sVar37 = (short)((ulong)uVar58 >> 0x20);
      sVar38 = (short)((ulong)uVar58 >> 0x30);
      auVar42._4_2_ = sVar36;
      auVar42._0_4_ = (int)sVar35;
      auVar42._6_2_ = sVar36 >> 0xf;
      auVar42._8_2_ = sVar37;
      auVar42._10_2_ = sVar37 >> 0xf;
      auVar42._12_2_ = sVar38;
      auVar42._14_2_ = sVar38 >> 0xf;
      auVar45 = auVar45 ^ (auVar45 ^ auVar48) & auVar42;
      auVar49 = NEON_ext(auVar43,auVar43,8,1);
      auVar46._0_4_ = auVar49._0_4_ + auVar45._0_4_;
      auVar46._4_4_ = auVar49._4_4_ + auVar45._4_4_;
      auVar46._8_4_ = auVar49._8_4_ + auVar45._8_4_;
      auVar46._12_4_ = auVar49._12_4_ + auVar45._12_4_;
      uVar39 = NEON_uminv(CONCAT26(-(ushort)((short)((ushort)(auVar43._12_4_ < auVar46._12_4_) *
                                                    -0x8000) < 0),
                                   CONCAT24(-(ushort)((short)((ushort)(auVar43._8_4_ < auVar46._8_4_
                                                                      ) * -0x8000) < 0),
                                            CONCAT22(-(ushort)((short)((ushort)(auVar43._4_4_ <
                                                                               auVar46._4_4_) *
                                                                      -0x8000) < 0),
                                                     -(ushort)((short)((ushort)(auVar43._0_4_ <
                                                                               auVar46._0_4_) *
                                                                      -0x8000) < 0)))),2);
      if ((uVar39 & 1) == 0) {
        uVar30 = FUN_0717e7e0(0);
        uVar41 = (ulong)uVar30;
        uVar61 = 0;
        uStack_b8 = auVar49._8_8_;
        local_c0 = auVar49._0_4_;
        uStack_bc = auVar49._4_4_;
        uStack_a8 = auVar46._8_8_;
        local_b0 = auVar46._0_4_;
        uStack_ac = auVar46._4_4_;
        fVar1 = (float)CONCAT22(sVar50,sVar35);
        local_34[0] = '\0';
      }
    }
    uVar51 = SUB42(fVar1,0);
    if (((((float)uVar41 == *(float *)(param_5 + 10)) &&
         (local_b0 == *(float *)((long)param_5 + 0x54))) && (local_c0 == *(float *)(param_5 + 0xb)))
       && (fVar1 == *(float *)((long)param_5 + 0x5c))) {
      if ((char)param_5[0xc] == '\0') {
        if (param_5[6] == 0) goto LAB_074b8fd8;
        FUN_0422ad98(&local_88,param_5[6],
                     *(undefined8 *)
                      Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>_Dispose__);
        puVar26 = Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_op_Implicit__;
        puStack_68 = puStack_80;
        local_70 = local_88;
        local_60 = local_78;
        local_88 = 0;
        puStack_80 = &local_70;
        while (uVar32 = FUN_05897378(&local_70,*(undefined8 *)puVar26), (uVar32 & 1) != 0) {
          if (local_60 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          auVar18._4_4_ = uStack_ac;
          auVar18._0_4_ = local_b0;
          auVar18._8_8_ = uStack_a8;
          auVar25._8_8_ = uVar61;
          auVar25._0_8_ = uVar41;
          auVar11._4_4_ = uStack_bc;
          auVar11._0_4_ = local_c0;
          auVar11._8_8_ = uStack_b8;
          (**(code **)(*local_60 + 0x4e8))
                    (auVar25,auVar18,auVar11,uVar51,local_60,local_34[0],
                     *(undefined8 *)(*local_60 + 0x4f0));
        }
      }
      else {
        if (param_5[7] == 0) goto LAB_074b8fd8;
        FUN_0422ad98(&local_88,param_5[7],
                     *(undefined8 *)
                      Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__ctor__);
        puVar27 = Method_Unity_Collections_NativeArray<ShaderInput_LightData>__ctor__;
        puVar26 = 
        Method_Unity_Collections_NativeArray<MeshGenerator_TessellationJobParameters>_Dispose__;
        puStack_48 = puStack_80;
        local_50 = local_88;
        local_40 = local_78;
        local_88 = 0;
        puStack_80 = &local_50;
        while (uVar32 = FUN_05897378(&local_50,*(undefined8 *)puVar27), cVar29 = local_34[0],
              plVar28 = local_40, (uVar32 & 1) != 0) {
          if (local_40 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar31 = *local_40;
          uVar32 = (ulong)*(ushort *)(lVar31 + 0x12e);
          if (uVar32 != 0) {
            piVar34 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
            do {
              if (*(long *)(piVar34 + -2) == *(long *)puVar26) {
                puVar33 = (undefined8 *)(lVar31 + (long)(*piVar34 + 4) * 0x10 + 0x138);
                goto LAB_074b8c44;
              }
              uVar32 = uVar32 - 1;
              piVar34 = piVar34 + 4;
            } while (uVar32 != 0);
          }
          puVar33 = (undefined8 *)FUN_0367cd30(local_40,*(long *)puVar26,4);
LAB_074b8c44:
          auVar12._4_4_ = uStack_ac;
          auVar12._0_4_ = local_b0;
          auVar12._8_8_ = uStack_a8;
          auVar19._8_8_ = uVar61;
          auVar19._0_8_ = uVar41;
          auVar5._4_4_ = uStack_bc;
          auVar5._0_4_ = local_c0;
          auVar5._8_8_ = uStack_b8;
          (*(code *)*puVar33)(auVar19,auVar12,auVar5,uVar51,plVar28,cVar29 != '\0',puVar33[1]);
        }
        FUN_05897374(&local_50,
                     *(undefined8 *)
                      Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_GetSubArray__);
        if (param_5[6] == 0) goto LAB_074b8fd8;
        FUN_0422ad98(&local_88,param_5[6],
                     *(undefined8 *)
                      Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>_Dispose__);
        puVar26 = Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_op_Implicit__;
        puStack_68 = puStack_80;
        local_70 = local_88;
        local_60 = local_78;
        local_88 = 0;
        puStack_80 = &local_70;
        while (uVar32 = FUN_05897378(&local_70,*(undefined8 *)puVar26), plVar28 = local_60,
              (uVar32 & 1) != 0) {
          if (local_60 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          auVar16._4_4_ = uStack_ac;
          auVar16._0_4_ = local_b0;
          auVar16._8_8_ = uStack_a8;
          auVar23._8_8_ = uVar61;
          auVar23._0_8_ = uVar41;
          auVar9._4_4_ = uStack_bc;
          auVar9._0_4_ = local_c0;
          auVar9._8_8_ = uStack_b8;
          (**(code **)(*local_60 + 0x4f8))
                    (auVar23,auVar16,auVar9,uVar51,local_60,local_34[0],
                     *(undefined8 *)(*local_60 + 0x500));
          lVar31 = FUN_072c3778(plVar28,0);
          if (lVar31 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar32 = FUN_0749f108(lVar31,0);
          if ((uVar32 & 1) != 0) {
            auVar17._4_4_ = uStack_ac;
            auVar17._0_4_ = local_b0;
            auVar17._8_8_ = uStack_a8;
            auVar24._8_8_ = uVar61;
            auVar24._0_8_ = uVar41;
            auVar10._4_4_ = uStack_bc;
            auVar10._0_4_ = local_c0;
            auVar10._8_8_ = uStack_b8;
            (**(code **)(*plVar28 + 0x4e8))
                      (auVar24,auVar17,auVar10,uVar51,plVar28,local_34[0],
                       *(undefined8 *)(*plVar28 + 0x4f0));
          }
        }
      }
    }
    else {
      if (param_5[7] == 0) {
LAB_074b8fd8:
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      FUN_0422ad98(&local_88,param_5[7],
                   *(undefined8 *)
                    Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__ctor__);
      puVar27 = Method_Unity_Collections_NativeArray<ShaderInput_LightData>__ctor__;
      puVar26 = 
      Method_Unity_Collections_NativeArray<MeshGenerator_TessellationJobParameters>_Dispose__;
      puStack_48 = puStack_80;
      local_50 = local_88;
      local_40 = local_78;
      local_88 = 0;
      puStack_80 = &local_50;
      while (uVar32 = FUN_05897378(&local_50,*(undefined8 *)puVar27), cVar29 = local_34[0],
            plVar28 = local_40, (uVar32 & 1) != 0) {
        if (local_40 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar31 = *local_40;
        uVar32 = (ulong)*(ushort *)(lVar31 + 0x12e);
        if (uVar32 != 0) {
          piVar34 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
          do {
            if (*(long *)(piVar34 + -2) == *(long *)puVar26) {
              puVar33 = (undefined8 *)(lVar31 + (long)(*piVar34 + 4) * 0x10 + 0x138);
              goto LAB_074b8d14;
            }
            uVar32 = uVar32 - 1;
            piVar34 = piVar34 + 4;
          } while (uVar32 != 0);
        }
        puVar33 = (undefined8 *)FUN_0367cd30(local_40,*(long *)puVar26,4);
LAB_074b8d14:
        auVar13._4_4_ = uStack_ac;
        auVar13._0_4_ = local_b0;
        auVar13._8_8_ = uStack_a8;
        auVar20._8_8_ = uVar61;
        auVar20._0_8_ = uVar41;
        auVar6._4_4_ = uStack_bc;
        auVar6._0_4_ = local_c0;
        auVar6._8_8_ = uStack_b8;
        (*(code *)*puVar33)(auVar20,auVar13,auVar6,uVar51,plVar28,cVar29 != '\0',puVar33[1]);
      }
      FUN_05897374(&local_50,
                   *(undefined8 *)
                    Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_GetSubArray__);
      if (param_5[6] == 0) goto LAB_074b8fd8;
      FUN_0422ad98(&local_88,param_5[6],
                   *(undefined8 *)
                    Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>_Dispose__);
      puVar26 = Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_op_Implicit__;
      puStack_68 = puStack_80;
      local_70 = local_88;
      local_60 = local_78;
      local_88 = 0;
      puStack_80 = &local_70;
      while (uVar32 = FUN_05897378(&local_70,*(undefined8 *)puVar26), plVar28 = local_60,
            (uVar32 & 1) != 0) {
        if (local_60 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        auVar14._4_4_ = uStack_ac;
        auVar14._0_4_ = local_b0;
        auVar14._8_8_ = uStack_a8;
        auVar21._8_8_ = uVar61;
        auVar21._0_8_ = uVar41;
        auVar7._4_4_ = uStack_bc;
        auVar7._0_4_ = local_c0;
        auVar7._8_8_ = uStack_b8;
        (**(code **)(*local_60 + 0x4f8))
                  (auVar21,auVar14,auVar7,uVar51,local_60,local_34[0],
                   *(undefined8 *)(*local_60 + 0x500));
        lVar31 = *plVar28;
        auVar15._4_4_ = uStack_ac;
        auVar15._0_4_ = local_b0;
        auVar15._8_8_ = uStack_a8;
        auVar22._8_8_ = uVar61;
        auVar22._0_8_ = uVar41;
        auVar8._4_4_ = uStack_bc;
        auVar8._0_4_ = local_c0;
        auVar8._8_8_ = uStack_b8;
        (**(code **)(lVar31 + 0x4e8))
                  (auVar22,auVar15,auVar8,uVar51,plVar28,local_34[0],*(undefined8 *)(lVar31 + 0x4f0)
                  );
      }
    }
    FUN_05897374(&local_70,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_get_IsCreated__);
    *(undefined1 *)(param_5 + 0xc) = 0;
    *(float *)(param_5 + 10) = (float)uVar41;
    *(float *)((long)param_5 + 0x54) = local_b0;
    *(float *)(param_5 + 0xb) = local_c0;
    *(float *)((long)param_5 + 0x5c) = fVar1;
    (**(code **)(*param_5 + 0x288))(param_5,*(undefined8 *)(*param_5 + 0x290));
  }
  return;
}


