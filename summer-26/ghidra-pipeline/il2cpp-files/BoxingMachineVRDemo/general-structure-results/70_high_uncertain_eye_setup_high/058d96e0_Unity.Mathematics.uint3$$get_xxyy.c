/*
FUNCTION_NAME: Unity.Mathematics.uint3$$get_xxyy
ENTRY_POINT: 058d96e0
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


void Unity_Mathematics_uint3__get_xxyy(long *param_1,long param_2,long param_3)

{
  void *__dest;
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float *pfVar12;
  int iVar13;
  long unaff_x22;
  long unaff_x23;
  long *plVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  ulong uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
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
  
  plVar14 = *(long **)(unaff_x23 + 0x1b8);
  if ((*(byte *)(unaff_x22 + 0xb5a) & 1) == 0) {
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
  uVar6 = FUN_058e0424(param_1);
  if (*(int *)(*plVar14 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*plVar14);
  }
  uVar7 = UnityEngine_Font__add_textureRebuilt(uVar6,0,0);
  if ((uVar7 & 1) == 0) {
    uVar6 = (**(code **)(*param_1 + 600))(param_1,*(undefined8 *)(*param_1 + 0x260));
    if (*(int *)(*plVar14 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*plVar14);
    }
    uVar7 = UnityEngine_Font__add_textureRebuilt(uVar6,0,0);
    if ((uVar7 & 1) == 0) {
      if (param_2 != 0) {
        uVar23 = *(undefined4 *)(param_2 + 0x19c);
        uVar24 = *(undefined4 *)(param_2 + 0x1a0);
        uVar25 = *(undefined4 *)(param_2 + 0x1a4);
        uVar21 = *(undefined4 *)(param_2 + 0x1a8);
        fStack000000000000000c = *(float *)(param_2 + 0x1ac);
        fVar22 = *(float *)(param_2 + 0x1b0);
        uVar7 = (ulong)*(uint *)(param_2 + 0x1b4);
        if (DAT_06b72244 == '\0') {
          FUN_02d6084c(PTR_DAT_0675e318);
          DAT_06b72244 = '\x01';
        }
        puVar3 = PTR_DAT_0675e318;
        lVar11 = *(long *)(*(long *)PTR_DAT_0675e318 + 0xb8);
        fStack0000000000000010 =
             (float)FUN_06058dfc(uVar21,fStack000000000000000c,fVar22,uVar7,
                                 *(undefined4 *)(lVar11 + 0x48),*(undefined4 *)(lVar11 + 0x4c),
                                 *(undefined4 *)(lVar11 + 0x50),0);
        if (DAT_06b72248 == '\0') {
          FUN_02d6084c(PTR_DAT_0675e6d8);
          DAT_06b72248 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_0675e6d8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar20 = (ulong)(uint)(fVar22 * fVar22);
        fVar15 = SQRT(fVar22 * fVar22 +
                      fStack0000000000000010 * fStack0000000000000010 +
                      fStack000000000000000c * fStack000000000000000c);
        if (fVar15 <= DAT_01208410) {
          if (DAT_06b7224b == '\0') {
            FUN_02d6084c(PTR_DAT_0675e318);
            DAT_06b7224b = '\x01';
          }
          pfVar12 = *(float **)(*(long *)puVar3 + 0xb8);
          fStack0000000000000010 = *pfVar12;
          fStack000000000000000c = pfVar12[1];
          fVar22 = pfVar12[2];
        }
        else {
          fStack0000000000000010 = fStack0000000000000010 / fVar15;
          uVar20 = (ulong)(uint)fStack0000000000000010;
          fStack000000000000000c = fStack000000000000000c / fVar15;
          fVar22 = fVar22 / fVar15;
        }
        fStack0000000000000014 = *(float *)((long)param_1 + 0x34);
        if (*(char *)((long)param_1 + 0x32) != '\0') {
          uVar21 = FUN_0606b4c4((int)param_1[7],0);
          if (*(int *)(*(long *)PTR_DAT_0675e6c8 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675e6c8);
          }
          fStack0000000000000054 = fStack0000000000000010;
          fStack0000000000000058 = fStack000000000000000c;
          uStack0000000000000048 = uVar23;
          uStack000000000000004c = uVar24;
          uStack0000000000000050 = uVar25;
          fStack000000000000005c = fVar22;
          uVar8 = FUN_060edb58(fStack0000000000000014,&stack0x00000048,&stack0x000000e0,uVar21,0);
          if ((uVar8 & 1) != 0) {
            fStack0000000000000014 = (float)FUN_060f3470(&stack0x000000e0,0);
          }
        }
        if (*(char *)((long)param_1 + 0x31) != '\0') {
          uVar21 = FUN_0606b4c4((int)param_1[7],0);
          if (*(int *)(*(long *)PTR_DAT_06762ff8 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06762ff8);
          }
          fStack000000000000003c = fStack0000000000000010;
          fStack0000000000000040 = fStack000000000000000c;
          uStack0000000000000030 = uVar23;
          uStack0000000000000034 = uVar24;
          uStack0000000000000038 = uVar25;
          fStack0000000000000044 = fVar22;
          FUN_060e60b0(&stack0x00000160,fStack0000000000000014,&stack0x00000030,uVar21,0);
          in_stack_000000c8 = CONCAT44(fStack000000000000017c,uStack0000000000000178);
          in_stack_000000c0 = CONCAT44(uStack0000000000000174,uStack0000000000000170);
          in_stack_000000b8 = in_stack_00000168;
          in_stack_000000b0 = in_stack_00000160;
          in_stack_000000d0 = in_stack_00000180;
          uVar6 = FUN_060e68b4(&stack0x000000b0,0);
          if (*(int *)(*plVar14 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*plVar14);
          }
          uVar8 = FUN_0606a004(uVar6,0,0);
          if ((uVar8 & 1) != 0) {
            fStack0000000000000014 = (float)FUN_060e68a4(&stack0x000000b0,0);
          }
        }
        lVar11 = param_1[5];
        if (lVar11 != 0) {
          iVar13 = *(int *)(lVar11 + 0x18);
          *(undefined4 *)(lVar11 + 0x18) = 0;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (0 < iVar13) {
            FUN_05029664(*(undefined8 *)(lVar11 + 0x10),0,iVar13,0);
          }
          uVar6 = FUN_058e0424(param_1);
          uVar8 = (ulong)(uint)fStack000000000000000c;
          fStack0000000000000024 = fStack0000000000000010;
          fStack0000000000000028 = fStack000000000000000c;
          uStack0000000000000018 = uVar23;
          uStack000000000000001c = uVar24;
          uStack0000000000000020 = uVar25;
          fStack000000000000002c = fVar22;
          FUN_058e0748(param_1,uVar6,&stack0x00000018,param_1[5]);
          puVar5 = OVRPlugin_OVRP_1_44_0_TypeInfo;
          puVar4 = PTR_DAT_06786178;
          lVar11 = param_1[5];
          if (lVar11 != 0) {
            iVar13 = 0;
            do {
              if (*(int *)(lVar11 + 0x18) <= iVar13) {
                return;
              }
              FUN_03c170fc(&stack0x00000160,lVar11,iVar13,*(undefined8 *)puVar5);
              fVar15 = fStack000000000000017c;
              uVar24 = uStack0000000000000178;
              uVar23 = uStack0000000000000174;
              uVar21 = uStack0000000000000170;
              uVar6 = in_stack_00000168;
              lVar11 = in_stack_00000160;
              if (in_stack_00000160 == 0) break;
              lVar9 = FUN_06066d44(in_stack_00000160,0);
              if ((char)param_1[6] == '\0') {
                bVar2 = true;
              }
              else {
                if ((lVar9 == 0) || (lVar10 = FUN_0606a288(lVar9,0), lVar10 == 0)) break;
                uVar17 = FUN_06076fa4(lVar10,0);
                if (DAT_06b72244 == '\0') {
                  FUN_02d6084c(puVar3);
                  DAT_06b72244 = '\x01';
                }
                lVar10 = *(long *)(*(long *)puVar3 + 0xb8);
                fVar16 = (float)FUN_06058dfc(uVar17,uVar8,uVar20,uVar7,
                                             *(undefined4 *)(lVar10 + 0x48),
                                             *(undefined4 *)(lVar10 + 0x4c),
                                             *(undefined4 *)(lVar10 + 0x50),0);
                uVar7 = (ulong)(uint)fStack000000000000000c;
                fVar18 = (float)uVar8;
                fVar19 = fVar22 * (float)uVar20;
                uVar8 = (ulong)(uint)fVar19;
                bVar2 = 0.0 < fVar19 + fStack0000000000000010 * fVar16 +
                                       fStack000000000000000c * fVar18;
              }
              if ((fVar15 < fStack0000000000000014) && (bVar2)) {
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
                in_stack_00000060 = lVar9;
                thunk_FUN_02dd37b4(&stack0x00000060,lVar9);
                in_stack_00000068 = param_1;
                thunk_FUN_02dd37b4((ulong)&stack0x00000060 | 8,param_1);
                in_stack_00000070 = CONCAT44(in_stack_00000070._4_4_,fVar15);
                if (param_3 == 0) break;
                in_stack_00000070 = CONCAT44((float)*(int *)(param_3 + 0x18),fVar15);
                uVar25 = FUN_061784cc(lVar11,0);
                lVar9 = *(long *)puVar4;
                in_stack_00000078 = CONCAT44(in_stack_00000078._4_4_,uVar25);
                uStack000000000000008c = (undefined4)uVar6;
                in_stack_00000090 = (undefined4)((ulong)uVar6 >> 0x20);
                uStack0000000000000094 = uVar21;
                uStack00000000000000a4 = uVar23;
                in_stack_000000a8 = uVar24;
                memcpy(&stack0x00000110,&stack0x00000060,0x50);
                lVar11 = *(long *)(param_3 + 0x10);
                *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
                if (lVar11 == 0) break;
                uVar1 = *(uint *)(param_3 + 0x18);
                if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                  __dest = (void *)(lVar11 + (long)(int)uVar1 * 0x50 + 0x20);
                  *(uint *)(param_3 + 0x18) = uVar1 + 1;
                  memcpy(__dest,&stack0x00000110,0x50);
                  thunk_FUN_02dd37b4(__dest,0);
                }
                else {
                  uVar6 = *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70);
                  memcpy(&stack0x00000160,&stack0x00000110,0x50);
                  FUN_03adb370(param_3,&stack0x00000160,uVar6);
                }
              }
              lVar11 = param_1[5];
              iVar13 = iVar13 + 1;
            } while (lVar11 != 0);
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
  }
  return;
}


