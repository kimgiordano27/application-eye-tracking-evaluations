/*
FUNCTION_NAME: Unity.Mathematics.uint3$$get_yyzz
ENTRY_POINT: 058d9a40
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Unity_Mathematics_uint3__get_yyzz
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,ulong param_4)

{
  void *__dest;
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar10;
  long *unaff_x23;
  long unaff_x26;
  long unaff_x27;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  long in_stack_00000060;
  long in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined4 uStack0000000000000170;
  undefined8 uStack0000000000000174;
  undefined4 uStack000000000000017c;
  
  *(long *)(unaff_x26 + 0x58) = param_1._8_8_;
  *(long *)(unaff_x26 + 0x50) = param_1._0_8_;
  *(long *)(unaff_x26 + 0x68) = param_2._8_8_;
  *(long *)(unaff_x26 + 0x60) = param_2._0_8_;
  uVar5 = FUN_060e68b4(&stack0x000000b0,0);
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*unaff_x23);
  }
  uVar6 = FUN_0606a004(uVar5,0,0);
  if ((uVar6 & 1) != 0) {
    fStack0000000000000014 = (float)FUN_060e68a4(&stack0x000000b0,0);
  }
  lVar9 = *(long *)(unaff_x20 + 0x28);
  if (lVar9 != 0) {
    iVar10 = *(int *)(lVar9 + 0x18);
    *(undefined4 *)(lVar9 + 0x18) = 0;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (0 < iVar10) {
      FUN_05029664(*(undefined8 *)(lVar9 + 0x10),0,iVar10,0);
    }
    FUN_058e0424();
    uVar6 = (ulong)(uint)fStack000000000000000c;
    FUN_058e0748();
    puVar3 = OVRPlugin_OVRP_1_44_0_TypeInfo;
    lVar9 = *(long *)(unaff_x20 + 0x28);
    if (lVar9 != 0) {
      iVar10 = 0;
      do {
        if (*(int *)(lVar9 + 0x18) <= iVar10) {
          return;
        }
        FUN_03c170fc(&stack0x00000160,lVar9,iVar10,*(undefined8 *)puVar3);
        uVar4 = uStack000000000000017c;
        uVar5 = uStack0000000000000174;
        lVar9 = in_stack_00000160;
        if (in_stack_00000160 == 0) break;
        lVar7 = FUN_06066d44(in_stack_00000160,0);
        if (*(char *)(unaff_x20 + 0x30) == '\0') {
          bVar2 = true;
        }
        else {
          if ((lVar7 == 0) || (lVar8 = FUN_0606a288(lVar7,0), lVar8 == 0)) break;
          uVar12 = FUN_06076fa4(lVar8,0);
          if (*(char *)(unaff_x27 + 0x244) == '\0') {
            FUN_02d6084c();
            *(undefined1 *)(unaff_x27 + 0x244) = 1;
          }
          lVar8 = *(long *)(*unaff_x21 + 0xb8);
          fVar11 = (float)FUN_06058dfc(uVar12,uVar6,param_3,param_4,*(undefined4 *)(lVar8 + 0x48),
                                       *(undefined4 *)(lVar8 + 0x4c),*(undefined4 *)(lVar8 + 0x50),0
                                      );
          param_4 = (ulong)(uint)fStack000000000000000c;
          fVar13 = (float)uVar6;
          fVar14 = fStack0000000000000008 * (float)param_3;
          uVar6 = (ulong)(uint)fVar14;
          bVar2 = 0.0 < fVar14 + fStack0000000000000010 * fVar11 + fStack000000000000000c * fVar13;
        }
        if (((float)uVar4 < fStack0000000000000014) && (bVar2)) {
          *(undefined8 *)(unaff_x26 + 0x48) = 0;
          *(undefined8 *)(unaff_x26 + 0x40) = 0;
          in_stack_00000060 = lVar7;
          thunk_FUN_02dd37b4(&stack0x00000060,lVar7);
          thunk_FUN_02dd37b4((ulong)&stack0x00000060 | 8);
          if (unaff_x19 == 0) break;
          FUN_061784cc(lVar9,0);
          *(undefined8 *)(unaff_x26 + 0x44) = uVar5;
          memcpy(&stack0x00000110,&stack0x00000060,0x50);
          lVar9 = *(long *)(unaff_x19 + 0x10);
          *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
          if (lVar9 == 0) break;
          uVar1 = *(uint *)(unaff_x19 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            __dest = (void *)(lVar9 + (long)(int)uVar1 * 0x50 + 0x20);
            *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
            memcpy(__dest,&stack0x00000110,0x50);
            thunk_FUN_02dd37b4(__dest,0);
          }
          else {
            memcpy(&stack0x00000160,&stack0x00000110,0x50);
            FUN_03adb370();
          }
        }
        lVar9 = *(long *)(unaff_x20 + 0x28);
        iVar10 = iVar10 + 1;
      } while (lVar9 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


