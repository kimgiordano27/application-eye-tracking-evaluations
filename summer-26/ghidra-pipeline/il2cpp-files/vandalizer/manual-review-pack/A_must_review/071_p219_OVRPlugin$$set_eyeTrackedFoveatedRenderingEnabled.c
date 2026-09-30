/*
FUNCTION_NAME: OVRPlugin$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 0600fd9c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 153
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


undefined8
OVRPlugin__set_eyeTrackedFoveatedRenderingEnabled
          (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
          undefined8 *param_5,undefined8 *param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  ulong uVar12;
  
  if ((bRam0000000007a4699e & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075d64f0);
    FUN_031f20f4(PTR_DAT_075d5f18);
    bRam0000000007a4699e = 1;
  }
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  fVar7 = (float)FUN_0600f88c(param_4,param_7);
  uVar15 = *param_5;
  fVar17 = *(float *)(param_5 + 1);
  uVar14 = *(undefined8 *)((long)param_5 + 0xc);
  fVar16 = *(float *)((long)param_5 + 0x14);
  if (DAT_07a4437f == '\0') {
    FUN_031f20f4(PTR_DAT_075b9420);
    DAT_07a4437f = '\x01';
  }
  puVar1 = PTR_DAT_075d5f18;
  fVar11 = (float)uVar14;
  fVar13 = (float)((ulong)uVar14 >> 0x20);
  fVar8 = fVar16 * fVar16 + fVar11 * fVar11 + fVar13 * fVar13;
  if (**(float **)(*(long *)PTR_DAT_075b9420 + 0xb8) <= fVar8) {
    fVar17 = (param_3 - fVar17) * fVar16 +
             (fVar7 - (float)uVar15) * fVar11 + (param_2 - (float)((ulong)uVar15 >> 0x20)) * fVar13;
    uVar14 = CONCAT44((fVar13 * fVar17) / fVar8,(fVar11 * fVar17) / fVar8);
    fVar8 = (fVar16 * fVar17) / fVar8;
  }
  else {
    if (DAT_07a3ca82 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      DAT_07a3ca82 = '\x01';
    }
    uVar14 = **(undefined8 **)(*(long *)PTR_DAT_0759b378 + 0xb8);
    fVar8 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_0759b378 + 0xb8) + 1);
  }
  uVar15 = *param_5;
  fVar17 = *(float *)(param_5 + 1);
  fVar16 = (float)FUN_0600f8e8(param_4,param_7);
  lVar3 = FUN_031f21dc(*(undefined8 *)puVar1,1);
  if (DAT_07a3fba1 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b370);
    DAT_07a3fba1 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  if (lVar3 != 0) {
    iVar4 = (int)*(ulong *)(lVar3 + 0x18);
    if (iVar4 != 0) {
      fVar11 = (float)uVar14 + (float)uVar15;
      fVar13 = (float)((ulong)uVar14 >> 0x20) + (float)((ulong)uVar15 >> 0x20);
      uVar12 = CONCAT44(fVar13,fVar11);
      fVar8 = fVar8 + fVar17;
      fVar7 = SQRT((param_3 - fVar8) * (param_3 - fVar8) +
                   (fVar7 - fVar11) * (fVar7 - fVar11) + (param_2 - fVar13) * (param_2 - fVar13)) -
              fVar16;
      *(float *)(lVar3 + 0x20) = fVar7;
      puVar1 = PTR_DAT_075d64f0;
      if (1 < iVar4) {
        lVar5 = (*(ulong *)(lVar3 + 0x18) & 0xffffffff) - 1;
        pfVar6 = (float *)(lVar3 + 0x24);
        do {
          fVar17 = *pfVar6;
          if (*pfVar6 <= fVar7) {
            fVar17 = fVar7;
          }
          fVar7 = fVar17;
          lVar5 = lVar5 + -1;
          pfVar6 = pfVar6 + 1;
        } while (lVar5 != 0);
      }
      if (fVar7 < fVar16) {
        fVar7 = SQRT(fVar16 * fVar16 - fVar7 * fVar7);
        uVar12 = CONCAT44(fVar13 - (float)((ulong)*(undefined8 *)((long)param_5 + 0xc) >> 0x20) *
                                   fVar7,
                          fVar11 - (float)*(undefined8 *)((long)param_5 + 0xc) * fVar7);
        fVar8 = fVar8 - fVar7 * *(float *)((long)param_5 + 0x14);
      }
      uVar10 = (ulong)(uint)fVar8;
      FUN_0600f814(&stack0x00000040,param_4,param_7);
      uVar2 = uStack0000000000000050;
      uVar9 = uVar12 >> 0x20;
      uVar14 = FUN_060100c0(uVar12,uVar9,uVar10,param_4,param_7);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      FUN_06e67e1c(uVar14,uVar9,uVar10,uStack000000000000004c,uVar2,
                   uStack0000000000000054 & 0xffffffff,uStack0000000000000054._4_4_,&stack0x00000060
                   ,0);
      FUN_060101f0(&stack0x00000020,param_4,&stack0x00000060,param_7);
      param_6[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      *param_6 = in_stack_00000020;
      *(undefined8 *)((long)param_6 + 0x14) = uStack0000000000000034;
      *(ulong *)((long)param_6 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_031f2398();
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


