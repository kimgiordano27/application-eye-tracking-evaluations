/*
FUNCTION_NAME: Unity.Mathematics.uint3$$get_xxyz
ENTRY_POINT: 058d96f0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_4
*/


void Unity_Mathematics_uint3__get_xxyz(ulong param_1,long *param_2)

{
  void *__dest;
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  long unaff_x19;
  long unaff_x21;
  int iVar12;
  long unaff_x22;
  long *unaff_x23;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  ulong uVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  long in_stack_00000060;
  long *in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined4 uStack000000000000008c;
  undefined4 in_stack_00000090;
  undefined4 uStack0000000000000094;
  undefined8 in_stack_00000098;
  undefined4 in_stack_000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 in_stack_000000a8;
  undefined4 uStack00000000000000ac;
  long in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined4 in_stack_000000d0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined4 in_stack_000000f8;
  undefined4 uStack00000000000000fc;
  undefined4 in_stack_00000100;
  undefined8 uStack0000000000000104;
  long in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined4 uStack0000000000000170;
  undefined4 uStack0000000000000174;
  undefined4 uStack0000000000000178;
  float fStack000000000000017c;
  undefined4 in_stack_00000180;
  
  if ((param_1 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06786178);
    FUN_02d6084c(OVRPlugin_OVRP_1_42_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_43_0_TypeInfo);
    FUN_02d6084c(PTR_DAT_06786148);
    FUN_02d6084c(OVRPlugin_OVRP_1_44_0_TypeInfo);
    FUN_02d6084c(PTR_DAT_0675e1b8);
    FUN_02d6084c(PTR_DAT_06762ff8);
    FUN_02d6084c(PTR_DAT_0675e6c8);
    *(undefined1 *)(unaff_x22 + 0xb5a) = 1;
  }
  in_stack_000000d0 = 0;
  uStack0000000000000104 = 0;
  in_stack_00000100 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000f8 = 0;
  uStack00000000000000fc = 0;
  in_stack_000000f0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000a8 = 0;
  uStack00000000000000ac = 0;
  in_stack_000000a0 = 0;
  uStack00000000000000a4 = 0;
  in_stack_00000088 = 0;
  uStack000000000000008c = 0;
  in_stack_00000080 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  uStack0000000000000094 = 0;
  in_stack_00000068 = (long *)0x0;
  in_stack_00000060 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  uVar5 = FUN_058e0424(param_2);
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*unaff_x23);
  }
  uVar6 = UnityEngine_Font__add_textureRebuilt(uVar5,0,0);
  if ((uVar6 & 1) == 0) {
    uVar5 = (**(code **)(*param_2 + 600))(param_2,*(undefined8 *)(*param_2 + 0x260));
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*unaff_x23);
    }
    uVar6 = UnityEngine_Font__add_textureRebuilt(uVar5,0,0);
    if ((uVar6 & 1) == 0) {
      if (unaff_x21 != 0) {
        uVar21 = *(undefined4 *)(unaff_x21 + 0x19c);
        uVar22 = *(undefined4 *)(unaff_x21 + 0x1a0);
        uVar23 = *(undefined4 *)(unaff_x21 + 0x1a4);
        uVar19 = *(undefined4 *)(unaff_x21 + 0x1a8);
        fStack000000000000000c = *(float *)(unaff_x21 + 0x1ac);
        fVar20 = *(float *)(unaff_x21 + 0x1b0);
        uVar6 = (ulong)*(uint *)(unaff_x21 + 0x1b4);
        if (DAT_06b72244 == '\0') {
          FUN_02d6084c(PTR_DAT_0675e318);
          DAT_06b72244 = '\x01';
        }
        puVar3 = PTR_DAT_0675e318;
        lVar10 = *(long *)(*(long *)PTR_DAT_0675e318 + 0xb8);
        fStack0000000000000010 =
             (float)FUN_06058dfc(uVar19,fStack000000000000000c,fVar20,uVar6,
                                 *(undefined4 *)(lVar10 + 0x48),*(undefined4 *)(lVar10 + 0x4c),
                                 *(undefined4 *)(lVar10 + 0x50),0);
        if (DAT_06b72248 == '\0') {
          FUN_02d6084c(PTR_DAT_0675e6d8);
          DAT_06b72248 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_0675e6d8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar18 = (ulong)(uint)(fVar20 * fVar20);
        fVar13 = SQRT(fVar20 * fVar20 +
                      fStack0000000000000010 * fStack0000000000000010 +
                      fStack000000000000000c * fStack000000000000000c);
        if (fVar13 <= DAT_01208410) {
          if (DAT_06b7224b == '\0') {
            FUN_02d6084c(PTR_DAT_0675e318);
            DAT_06b7224b = '\x01';
          }
          pfVar11 = *(float **)(*(long *)puVar3 + 0xb8);
          fStack0000000000000010 = *pfVar11;
          fStack000000000000000c = pfVar11[1];
          fVar20 = pfVar11[2];
        }
        else {
          fStack0000000000000010 = fStack0000000000000010 / fVar13;
          uVar18 = (ulong)(uint)fStack0000000000000010;
          fStack000000000000000c = fStack000000000000000c / fVar13;
          fVar20 = fVar20 / fVar13;
        }
        fStack0000000000000014 = *(float *)((long)param_2 + 0x34);
        if (*(char *)((long)param_2 + 0x32) != '\0') {
          uVar19 = FUN_0606b4c4((int)param_2[7],0);
          if (*(int *)(*(long *)PTR_DAT_0675e6c8 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675e6c8);
          }
          fStack0000000000000054 = fStack0000000000000010;
          fStack0000000000000058 = fStack000000000000000c;
          uStack0000000000000048 = uVar21;
          uStack000000000000004c = uVar22;
          uStack0000000000000050 = uVar23;
          fStack000000000000005c = fVar20;
          uVar7 = FUN_060edb58(fStack0000000000000014,&stack0x00000048,&stack0x000000e0,uVar19,0);
          if ((uVar7 & 1) != 0) {
            fStack0000000000000014 = (float)FUN_060f3470(&stack0x000000e0,0);
          }
        }
        if (*(char *)((long)param_2 + 0x31) != '\0') {
          uVar19 = FUN_0606b4c4((int)param_2[7],0);
          if (*(int *)(*(long *)PTR_DAT_06762ff8 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06762ff8);
          }
          fStack000000000000003c = fStack0000000000000010;
          fStack0000000000000040 = fStack000000000000000c;
          uStack0000000000000030 = uVar21;
          uStack0000000000000034 = uVar22;
          uStack0000000000000038 = uVar23;
          fStack0000000000000044 = fVar20;
          FUN_060e60b0(&stack0x00000160,fStack0000000000000014,&stack0x00000030,uVar19,0);
          in_stack_000000c8 = CONCAT44(fStack000000000000017c,uStack0000000000000178);
          in_stack_000000c0 = CONCAT44(uStack0000000000000174,uStack0000000000000170);
          in_stack_000000b8 = in_stack_00000168;
          in_stack_000000b0 = in_stack_00000160;
          in_stack_000000d0 = in_stack_00000180;
          uVar5 = FUN_060e68b4(&stack0x000000b0,0);
          if (*(int *)(*unaff_x23 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*unaff_x23);
          }
          uVar7 = FUN_0606a004(uVar5,0,0);
          if ((uVar7 & 1) != 0) {
            fStack0000000000000014 = (float)FUN_060e68a4(&stack0x000000b0,0);
          }
        }
        lVar10 = param_2[5];
        if (lVar10 != 0) {
          iVar12 = *(int *)(lVar10 + 0x18);
          *(undefined4 *)(lVar10 + 0x18) = 0;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (0 < iVar12) {
            FUN_05029664(*(undefined8 *)(lVar10 + 0x10),0,iVar12,0);
          }
          uVar5 = FUN_058e0424(param_2);
          uVar7 = (ulong)(uint)fStack000000000000000c;
          fStack0000000000000024 = fStack0000000000000010;
          fStack0000000000000028 = fStack000000000000000c;
          uStack0000000000000018 = uVar21;
          uStack000000000000001c = uVar22;
          uStack0000000000000020 = uVar23;
          fStack000000000000002c = fVar20;
          FUN_058e0748(param_2,uVar5,&stack0x00000018,param_2[5]);
          puVar4 = OVRPlugin_OVRP_1_44_0_TypeInfo;
          lVar10 = param_2[5];
          if (lVar10 != 0) {
            iVar12 = 0;
            do {
              if (*(int *)(lVar10 + 0x18) <= iVar12) {
                return;
              }
              FUN_03c170fc(&stack0x00000160,lVar10,iVar12,*(undefined8 *)puVar4);
              fVar13 = fStack000000000000017c;
              uVar22 = uStack0000000000000178;
              uVar21 = uStack0000000000000174;
              uVar19 = uStack0000000000000170;
              uVar5 = in_stack_00000168;
              lVar10 = in_stack_00000160;
              if (in_stack_00000160 == 0) break;
              lVar8 = FUN_06066d44(in_stack_00000160,0);
              if ((char)param_2[6] == '\0') {
                bVar2 = true;
              }
              else {
                if ((lVar8 == 0) || (lVar9 = FUN_0606a288(lVar8,0), lVar9 == 0)) break;
                uVar15 = FUN_06076fa4(lVar9,0);
                if (DAT_06b72244 == '\0') {
                  FUN_02d6084c(puVar3);
                  DAT_06b72244 = '\x01';
                }
                lVar9 = *(long *)(*(long *)puVar3 + 0xb8);
                fVar14 = (float)FUN_06058dfc(uVar15,uVar7,uVar18,uVar6,*(undefined4 *)(lVar9 + 0x48)
                                             ,*(undefined4 *)(lVar9 + 0x4c),
                                             *(undefined4 *)(lVar9 + 0x50),0);
                uVar6 = (ulong)(uint)fStack000000000000000c;
                fVar16 = (float)uVar7;
                fVar17 = fVar20 * (float)uVar18;
                uVar7 = (ulong)(uint)fVar17;
                bVar2 = 0.0 < fVar17 + fStack0000000000000010 * fVar14 +
                                       fStack000000000000000c * fVar16;
              }
              if ((fVar13 < fStack0000000000000014) && (bVar2)) {
                in_stack_000000a8 = 0;
                uStack00000000000000ac = 0;
                in_stack_000000a0 = 0;
                uStack00000000000000a4 = 0;
                in_stack_00000088 = 0;
                uStack000000000000008c = 0;
                in_stack_00000080 = 0;
                in_stack_00000098 = 0;
                in_stack_00000090 = 0;
                uStack0000000000000094 = 0;
                in_stack_00000068 = (long *)0x0;
                in_stack_00000078 = 0;
                in_stack_00000070 = 0;
                in_stack_00000060 = lVar8;
                thunk_FUN_02dd37b4(&stack0x00000060,lVar8);
                in_stack_00000068 = param_2;
                thunk_FUN_02dd37b4((ulong)&stack0x00000060 | 8,param_2);
                in_stack_00000070 = CONCAT44(in_stack_00000070._4_4_,fVar13);
                if (unaff_x19 == 0) break;
                in_stack_00000070 = CONCAT44((float)*(int *)(unaff_x19 + 0x18),fVar13);
                uVar23 = FUN_061784cc(lVar10,0);
                in_stack_00000078 = CONCAT44(in_stack_00000078._4_4_,uVar23);
                uStack000000000000008c = (undefined4)uVar5;
                in_stack_00000090 = (undefined4)((ulong)uVar5 >> 0x20);
                uStack0000000000000094 = uVar19;
                uStack00000000000000a4 = uVar21;
                in_stack_000000a8 = uVar22;
                memcpy(&stack0x00000110,&stack0x00000060,0x50);
                lVar10 = *(long *)(unaff_x19 + 0x10);
                *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
                if (lVar10 == 0) break;
                uVar1 = *(uint *)(unaff_x19 + 0x18);
                if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                  __dest = (void *)(lVar10 + (long)(int)uVar1 * 0x50 + 0x20);
                  *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
                  memcpy(__dest,&stack0x00000110,0x50);
                  thunk_FUN_02dd37b4(__dest,0);
                }
                else {
                  memcpy(&stack0x00000160,&stack0x00000110,0x50);
                  FUN_03adb370();
                }
              }
              lVar10 = param_2[5];
              iVar12 = iVar12 + 1;
            } while (lVar10 != 0);
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
  }
  return;
}


