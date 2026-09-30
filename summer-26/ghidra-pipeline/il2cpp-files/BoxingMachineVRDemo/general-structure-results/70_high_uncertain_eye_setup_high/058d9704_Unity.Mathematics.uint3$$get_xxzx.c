/*
FUNCTION_NAME: Unity.Mathematics.uint3$$get_xxzx
ENTRY_POINT: 058d9704
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_4
*/


void Unity_Mathematics_uint3__get_xxzx(void)

{
  void *__dest;
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float *pfVar12;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar13;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x26;
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
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000094;
  undefined4 in_stack_000000d0;
  long in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined4 uStack0000000000000170;
  undefined8 uStack0000000000000174;
  undefined4 uStack000000000000017c;
  undefined4 in_stack_00000180;
  
  FUN_02d6084c();
  FUN_02d6084c(OVRPlugin_OVRP_1_42_0_TypeInfo);
  FUN_02d6084c(OVRPlugin_OVRP_1_43_0_TypeInfo);
  FUN_02d6084c(PTR_DAT_06786148);
  FUN_02d6084c(OVRPlugin_OVRP_1_44_0_TypeInfo);
  FUN_02d6084c(PTR_DAT_0675e1b8);
  FUN_02d6084c(PTR_DAT_06762ff8);
  FUN_02d6084c(PTR_DAT_0675e6c8);
  *(undefined1 *)(unaff_x22 + 0xb5a) = 1;
  in_stack_000000d0 = 0;
  *(undefined8 *)(unaff_x26 + 0xa4) = 0;
  *(undefined8 *)(unaff_x26 + 0x9c) = 0;
  *(undefined8 *)(unaff_x26 + 0x88) = 0;
  *(undefined8 *)(unaff_x26 + 0x80) = 0;
  *(undefined8 *)(unaff_x26 + 0x98) = 0;
  *(undefined8 *)(unaff_x26 + 0x90) = 0;
  *(undefined8 *)(unaff_x26 + 0x58) = 0;
  *(undefined8 *)(unaff_x26 + 0x50) = 0;
  *(undefined8 *)(unaff_x26 + 0x68) = 0;
  *(undefined8 *)(unaff_x26 + 0x60) = 0;
  *(undefined8 *)(unaff_x26 + 0x48) = 0;
  *(undefined8 *)(unaff_x26 + 0x40) = 0;
  uStack000000000000008c = 0;
  uStack0000000000000094 = 0;
  in_stack_00000060 = 0;
  uVar6 = FUN_058e0424();
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*unaff_x23);
  }
  uVar7 = UnityEngine_Font__add_textureRebuilt(uVar6,0,0);
  if ((uVar7 & 1) == 0) {
    uVar6 = (**(code **)(*unaff_x20 + 600))();
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*unaff_x23);
    }
    uVar7 = UnityEngine_Font__add_textureRebuilt(uVar6,0,0);
    if ((uVar7 & 1) == 0) {
      if (unaff_x21 != 0) {
        uVar21 = *(undefined4 *)(unaff_x21 + 0x19c);
        uVar22 = *(undefined4 *)(unaff_x21 + 0x1a0);
        uVar23 = *(undefined4 *)(unaff_x21 + 0x1a4);
        uVar19 = *(undefined4 *)(unaff_x21 + 0x1a8);
        fStack000000000000000c = *(float *)(unaff_x21 + 0x1ac);
        fVar20 = *(float *)(unaff_x21 + 0x1b0);
        uVar7 = (ulong)*(uint *)(unaff_x21 + 0x1b4);
        if (DAT_06b72244 == '\0') {
          FUN_02d6084c(PTR_DAT_0675e318);
          DAT_06b72244 = '\x01';
        }
        puVar3 = PTR_DAT_0675e318;
        lVar11 = *(long *)(*(long *)PTR_DAT_0675e318 + 0xb8);
        fStack0000000000000010 =
             (float)FUN_06058dfc(uVar19,fStack000000000000000c,fVar20,uVar7,
                                 *(undefined4 *)(lVar11 + 0x48),*(undefined4 *)(lVar11 + 0x4c),
                                 *(undefined4 *)(lVar11 + 0x50),0);
        if (DAT_06b72248 == '\0') {
          FUN_02d6084c(PTR_DAT_0675e6d8);
          DAT_06b72248 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_0675e6d8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar18 = (ulong)(uint)(fVar20 * fVar20);
        fVar14 = SQRT(fVar20 * fVar20 +
                      fStack0000000000000010 * fStack0000000000000010 +
                      fStack000000000000000c * fStack000000000000000c);
        if (fVar14 <= DAT_01208410) {
          if (DAT_06b7224b == '\0') {
            FUN_02d6084c(PTR_DAT_0675e318);
            DAT_06b7224b = '\x01';
          }
          pfVar12 = *(float **)(*(long *)puVar3 + 0xb8);
          fStack0000000000000010 = *pfVar12;
          fStack000000000000000c = pfVar12[1];
          fVar20 = pfVar12[2];
        }
        else {
          fStack0000000000000010 = fStack0000000000000010 / fVar14;
          uVar18 = (ulong)(uint)fStack0000000000000010;
          fStack000000000000000c = fStack000000000000000c / fVar14;
          fVar20 = fVar20 / fVar14;
        }
        fStack0000000000000014 = *(float *)((long)unaff_x20 + 0x34);
        if (*(char *)((long)unaff_x20 + 0x32) != '\0') {
          uVar19 = FUN_0606b4c4((int)unaff_x20[7],0);
          if (*(int *)(*(long *)PTR_DAT_0675e6c8 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675e6c8);
          }
          fStack0000000000000054 = fStack0000000000000010;
          fStack0000000000000058 = fStack000000000000000c;
          uStack0000000000000048 = uVar21;
          uStack000000000000004c = uVar22;
          uStack0000000000000050 = uVar23;
          fStack000000000000005c = fVar20;
          uVar8 = FUN_060edb58(fStack0000000000000014,&stack0x00000048,&stack0x000000e0,uVar19,0);
          if ((uVar8 & 1) != 0) {
            fStack0000000000000014 = (float)FUN_060f3470(&stack0x000000e0,0);
          }
        }
        if (*(char *)((long)unaff_x20 + 0x31) != '\0') {
          uVar19 = FUN_0606b4c4((int)unaff_x20[7],0);
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
          *(undefined8 *)(unaff_x26 + 0x58) = *(undefined8 *)(unaff_x26 + 0x108);
          *(undefined8 *)(unaff_x26 + 0x50) = *(undefined8 *)(unaff_x26 + 0x100);
          *(undefined8 *)(unaff_x26 + 0x68) = *(undefined8 *)(unaff_x26 + 0x118);
          *(undefined8 *)(unaff_x26 + 0x60) = *(undefined8 *)(unaff_x26 + 0x110);
          in_stack_000000d0 = in_stack_00000180;
          uVar6 = FUN_060e68b4(&stack0x000000b0,0);
          if (*(int *)(*unaff_x23 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*unaff_x23);
          }
          uVar8 = FUN_0606a004(uVar6,0,0);
          if ((uVar8 & 1) != 0) {
            fStack0000000000000014 = (float)FUN_060e68a4(&stack0x000000b0,0);
          }
        }
        lVar11 = unaff_x20[5];
        if (lVar11 != 0) {
          iVar13 = *(int *)(lVar11 + 0x18);
          *(undefined4 *)(lVar11 + 0x18) = 0;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (0 < iVar13) {
            FUN_05029664(*(undefined8 *)(lVar11 + 0x10),0,iVar13,0);
          }
          FUN_058e0424();
          uVar8 = (ulong)(uint)fStack000000000000000c;
          FUN_058e0748();
          puVar4 = OVRPlugin_OVRP_1_44_0_TypeInfo;
          lVar11 = unaff_x20[5];
          if (lVar11 != 0) {
            iVar13 = 0;
            do {
              if (*(int *)(lVar11 + 0x18) <= iVar13) {
                return;
              }
              FUN_03c170fc(&stack0x00000160,lVar11,iVar13,*(undefined8 *)puVar4);
              uVar21 = uStack000000000000017c;
              uVar5 = uStack0000000000000174;
              uVar19 = uStack0000000000000170;
              uVar6 = in_stack_00000168;
              lVar11 = in_stack_00000160;
              if (in_stack_00000160 == 0) break;
              lVar9 = FUN_06066d44(in_stack_00000160,0);
              if ((char)unaff_x20[6] == '\0') {
                bVar2 = true;
              }
              else {
                if ((lVar9 == 0) || (lVar10 = FUN_0606a288(lVar9,0), lVar10 == 0)) break;
                uVar15 = FUN_06076fa4(lVar10,0);
                if (DAT_06b72244 == '\0') {
                  FUN_02d6084c(puVar3);
                  DAT_06b72244 = '\x01';
                }
                lVar10 = *(long *)(*(long *)puVar3 + 0xb8);
                fVar14 = (float)FUN_06058dfc(uVar15,uVar8,uVar18,uVar7,
                                             *(undefined4 *)(lVar10 + 0x48),
                                             *(undefined4 *)(lVar10 + 0x4c),
                                             *(undefined4 *)(lVar10 + 0x50),0);
                uVar7 = (ulong)(uint)fStack000000000000000c;
                fVar16 = (float)uVar8;
                fVar17 = fVar20 * (float)uVar18;
                uVar8 = (ulong)(uint)fVar17;
                bVar2 = 0.0 < fVar17 + fStack0000000000000010 * fVar14 +
                                       fStack000000000000000c * fVar16;
              }
              if (((float)uVar21 < fStack0000000000000014) && (bVar2)) {
                *(undefined8 *)(unaff_x26 + 0x48) = 0;
                *(undefined8 *)(unaff_x26 + 0x40) = 0;
                uStack000000000000008c = 0;
                uStack0000000000000094 = 0;
                in_stack_00000060 = lVar9;
                thunk_FUN_02dd37b4(&stack0x00000060,lVar9);
                thunk_FUN_02dd37b4((ulong)&stack0x00000060 | 8);
                if (unaff_x19 == 0) break;
                FUN_061784cc(lVar11,0);
                uStack000000000000008c = (undefined4)uVar6;
                uStack0000000000000094 = uVar19;
                *(undefined8 *)(unaff_x26 + 0x44) = uVar5;
                memcpy(&stack0x00000110,&stack0x00000060,0x50);
                lVar11 = *(long *)(unaff_x19 + 0x10);
                *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
                if (lVar11 == 0) break;
                uVar1 = *(uint *)(unaff_x19 + 0x18);
                if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                  __dest = (void *)(lVar11 + (long)(int)uVar1 * 0x50 + 0x20);
                  *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
                  memcpy(__dest,&stack0x00000110,0x50);
                  thunk_FUN_02dd37b4(__dest,0);
                }
                else {
                  memcpy(&stack0x00000160,&stack0x00000110,0x50);
                  FUN_03adb370();
                }
              }
              lVar11 = unaff_x20[5];
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


