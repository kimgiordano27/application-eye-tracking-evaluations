/*
FUNCTION_NAME: Unity.Entities.SystemState$$Dispose
ENTRY_POINT: 030aaec8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Unity_Entities_SystemState__Dispose
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  float *pfVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
  puVar2 = System_Action<RoomInfoTaskPostData>_TypeInfo;
  if ((DAT_0412b5bc & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d01f88);
    FUN_01ab69ac(System_Action<Scene>_TypeInfo);
    FUN_01ab69ac(System_Action<SetItemBatchResponseResultsInner>_TypeInfo);
    FUN_01ab69ac(System_Action<SignInCodeInfo>_TypeInfo);
    FUN_01ab69ac(System_Action<float>_TypeInfo);
    FUN_01ab69ac(System_Action<SortColumnDescription>_TypeInfo);
    FUN_01ab69ac(System_Action<Speaker>_TypeInfo);
    FUN_01ab69ac(System_Action<SpriteAtlas>_TypeInfo);
    FUN_01ab69ac(System_Action<string>_TypeInfo);
    FUN_01ab69ac(System_Action<StringBuilder>_TypeInfo);
    FUN_01ab69ac(System_Action<StudioEventEmitter>_TypeInfo);
    FUN_01ab69ac(System_Action<SuggestionSet>_TypeInfo);
    FUN_01ab69ac(System_Action<RoomInfoTaskPostData>_TypeInfo);
    DAT_0412b5bc = 1;
  }
  lVar3 = *(long *)puVar2;
  uVar6 = *(undefined8 *)(param_4 + 0x20);
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *(long *)puVar2;
  }
  puVar1 = System_Action<Scene>_TypeInfo;
  lVar7 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar7 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar3 = *(long *)puVar2;
    }
    uVar8 = **(undefined8 **)(lVar3 + 0xb8);
    lVar7 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<SpriteAtlas>_TypeInfo);
    FUN_021de400(lVar7,uVar8,*(undefined8 *)System_Action<string>_TypeInfo,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar4 = lVar7;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4,lVar7);
  }
  uVar6 = FUN_01f6d690(uVar6,lVar7,*(undefined8 *)puVar1);
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar3);
    lVar3 = *(long *)puVar2;
  }
  puVar1 = System_Action<SignInCodeInfo>_TypeInfo;
  lVar7 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar7 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar3);
      lVar3 = *(long *)puVar2;
    }
    uVar8 = **(undefined8 **)(lVar3 + 0xb8);
    lVar7 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<float>_TypeInfo);
    FUN_021de1ac(lVar7,uVar8,*(undefined8 *)System_Action<StringBuilder>_TypeInfo,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar4 = lVar7;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4,lVar7);
  }
  uVar6 = FUN_01f71424(uVar6,lVar7,*(undefined8 *)puVar1);
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar3);
    lVar3 = *(long *)puVar2;
  }
  lVar7 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x18);
  if (lVar7 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar3);
      lVar3 = *(long *)puVar2;
    }
    uVar8 = **(undefined8 **)(lVar3 + 0xb8);
    lVar7 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<SortColumnDescription>_TypeInfo);
    FUN_021de1ac(lVar7,uVar8,*(undefined8 *)System_Action<StudioEventEmitter>_TypeInfo,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    *plVar4 = lVar7;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4,lVar7);
    lVar3 = *(long *)puVar2;
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar3);
    lVar3 = *(long *)puVar2;
  }
  puVar1 = System_Action<SetItemBatchResponseResultsInner>_TypeInfo;
  lVar9 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x20);
  if (lVar9 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar3);
      lVar3 = *(long *)puVar2;
    }
    uVar8 = **(undefined8 **)(lVar3 + 0xb8);
    lVar9 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Speaker>_TypeInfo);
    FUN_021de1ac(lVar9,uVar8,*(undefined8 *)System_Action<SuggestionSet>_TypeInfo,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
    *plVar4 = lVar9;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4,lVar9);
  }
  lVar3 = FUN_01f70a5c(uVar6,lVar7,lVar9,*(undefined8 *)puVar1);
  if (lVar3 != 0) {
    in_stack_00000008._4_4_ = 0xf;
    FUN_0219b634(lVar3,(long)&stack0x00000008 + 4);
    if (in_stack_00000000 != 0) {
      fVar10 = (float)FUN_036dc9e4(in_stack_00000000,0);
      in_stack_00000008._4_4_ = 0xd;
      fVar18 = param_2;
      fVar12 = param_3;
      FUN_0219b634(lVar3,(long)&stack0x00000008 + 4);
      if (in_stack_00000000 != 0) {
        fVar11 = (float)FUN_036dc9e4(in_stack_00000000,0);
        if (DAT_0411f1e2 == '\0') {
          FUN_01ab69ac(PTR_DAT_03cbdee0);
          DAT_0411f1e2 = '\x01';
        }
        puVar2 = PTR_DAT_03cbdee0;
        fVar10 = fVar10 - fVar11;
        param_2 = param_2 - fVar18;
        param_3 = param_3 - fVar12;
        if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        puVar1 = PTR_DAT_03cbded8;
        fVar18 = DAT_00d38ac8;
        fVar12 = SQRT(param_3 * param_3 + fVar10 * fVar10 + param_2 * param_2);
        if (fVar12 <= DAT_00d38ac8) {
          if (DAT_0411f172 == '\0') {
            FUN_01ab69ac(PTR_DAT_03cbded8);
            DAT_0411f172 = '\x01';
          }
          pfVar5 = *(float **)(*(long *)puVar1 + 0xb8);
          fVar10 = *pfVar5;
          param_2 = pfVar5[1];
          param_3 = pfVar5[2];
        }
        else {
          fVar10 = fVar10 / fVar12;
          param_2 = param_2 / fVar12;
          param_3 = param_3 / fVar12;
        }
        in_stack_00000008._4_4_ = 0xd;
        FUN_0219b634(lVar3,(long)&stack0x00000008 + 4);
        if (DAT_0411f1e0 == '\0') {
          FUN_01ab69ac(PTR_DAT_03cbded8);
          DAT_0411f1e0 = '\x01';
        }
        fVar17 = *(float *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
        fVar13 = (float)FUN_036c0658(fVar10,0);
        in_stack_00000008._4_4_ = 0xd;
        fVar12 = fVar17;
        fVar10 = param_3;
        fVar11 = param_2;
        FUN_0219b634(lVar3,(long)&stack0x00000008 + 4);
        if ((in_stack_00000000 != 0) &&
           (fVar14 = (float)FUN_036db02c(in_stack_00000000,0), in_stack_00000000 != 0)) {
          fVar16 = (fVar13 * fVar11 + fVar17 * fVar10 + param_3 * fVar12) - param_2 * fVar14;
          fVar15 = (param_3 * fVar14 + fVar17 * fVar11 + param_2 * fVar12) - fVar13 * fVar10;
          FUN_036dce04((param_2 * fVar10 + fVar17 * fVar14 + fVar13 * fVar12) - param_3 * fVar11,
                       fVar15,fVar16,
                       ((fVar17 * fVar12 - fVar13 * fVar14) - param_2 * fVar11) - param_3 * fVar10,
                       in_stack_00000000,0);
          in_stack_00000008._4_4_ = 0x10;
          FUN_0219b634(lVar3,(long)&stack0x00000008 + 4);
          if (in_stack_00000000 != 0) {
            fVar11 = (float)FUN_036dc9e4(in_stack_00000000,0);
            in_stack_00000008._4_4_ = 0xe;
            fVar12 = fVar15;
            fVar10 = fVar16;
            FUN_0219b634(lVar3,(long)&stack0x00000008 + 4);
            if (in_stack_00000000 != 0) {
              fVar13 = (float)FUN_036dc9e4(in_stack_00000000,0);
              if (DAT_0411f1e2 == '\0') {
                FUN_01ab69ac(PTR_DAT_03cbdee0);
                DAT_0411f1e2 = '\x01';
              }
              fVar11 = fVar11 - fVar13;
              fVar15 = fVar15 - fVar12;
              fVar16 = fVar16 - fVar10;
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              fVar12 = SQRT(fVar16 * fVar16 + fVar11 * fVar11 + fVar15 * fVar15);
              if (fVar12 <= fVar18) {
                if (DAT_0411f172 == '\0') {
                  FUN_01ab69ac(PTR_DAT_03cbded8);
                  DAT_0411f172 = '\x01';
                }
                pfVar5 = *(float **)(*(long *)puVar1 + 0xb8);
                fVar11 = *pfVar5;
                fVar15 = pfVar5[1];
                fVar16 = pfVar5[2];
              }
              else {
                fVar11 = fVar11 / fVar12;
                fVar15 = fVar15 / fVar12;
                fVar16 = fVar16 / fVar12;
              }
              in_stack_00000008._4_4_ = 0xe;
              FUN_0219b634(lVar3,(long)&stack0x00000008 + 4);
              if (DAT_0411f3a0 == '\0') {
                FUN_01ab69ac(PTR_DAT_03cbded8);
                DAT_0411f3a0 = '\x01';
              }
              lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
              fVar13 = *(float *)(lVar7 + 0x3c);
              fVar11 = (float)FUN_036c0658(fVar11,fVar15,fVar16,fVar13,*(undefined4 *)(lVar7 + 0x40)
                                           ,*(undefined4 *)(lVar7 + 0x44),0);
              in_stack_00000008._4_4_ = 0xe;
              fVar18 = fVar13;
              fVar12 = fVar16;
              fVar10 = fVar15;
              FUN_0219b634(lVar3,(long)&stack0x00000008 + 4);
              if ((in_stack_00000000 != 0) &&
                 (fVar17 = (float)FUN_036db02c(in_stack_00000000,0), in_stack_00000000 != 0)) {
                FUN_036dce04((fVar15 * fVar12 + fVar13 * fVar17 + fVar11 * fVar18) - fVar16 * fVar10
                             ,(fVar16 * fVar17 + fVar13 * fVar10 + fVar15 * fVar18) -
                              fVar11 * fVar12,
                             (fVar11 * fVar10 + fVar13 * fVar12 + fVar16 * fVar18) - fVar15 * fVar17
                             ,((fVar13 * fVar18 - fVar11 * fVar17) - fVar15 * fVar10) -
                              fVar16 * fVar12,in_stack_00000000,0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


