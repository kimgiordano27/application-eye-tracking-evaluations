/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreShutdownOpenXrDelegate$$Invoke
ENTRY_POINT: 077149b0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate__Invoke
               (undefined1 param_1 [16],ulong param_2,ulong param_3,long param_4,long param_5)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  float fStack0000000000000004;
  undefined4 in_stack_00000008;
  float fStack000000000000000c;
  float in_stack_00000010;
  float fStack0000000000000014;
  float in_stack_00000018;
  float fStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  undefined8 uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  undefined8 uStack0000000000000100;
  undefined8 uStack0000000000000108;
  undefined8 uStack0000000000000110;
  undefined8 uStack0000000000000118;
  ulong uVar9;
  
  uStack0000000000000108 = 0;
  uStack0000000000000100 = 0;
  uStack0000000000000118 = 0;
  uStack0000000000000110 = 0;
  uStack00000000000000e8 = 0;
  uStack00000000000000e0 = 0;
  uStack00000000000000f8 = 0;
  uStack00000000000000f0 = 0;
  if (param_4 != 0) {
    if (*(int *)(param_4 + 0x18) == 0) {
Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate__BeginInvoke:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    if (*(long *)(param_4 + 0x20) != 0) {
      fVar4 = (float)FUN_09539d64(*(long *)(param_4 + 0x20),0);
      fVar8 = (float)param_2;
      fVar12 = (float)param_3;
      if (*(int *)(param_4 + 0x18) == 0)
      goto Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate__BeginInvoke;
      if (*(long *)(param_4 + 0x20) != 0) {
        uVar9 = param_2;
        uVar10 = param_3;
        fVar5 = (float)FUN_09539d64(*(long *)(param_4 + 0x20),0);
        fVar7 = (float)uVar9;
        fVar11 = (float)uVar10;
        uVar2 = *(uint *)(param_4 + 0x18);
        if (1 < (int)uVar2) {
          lVar3 = 5;
          uVar14 = uVar9;
          uVar15 = uVar10;
          fVar16 = fVar4;
          fVar13 = fVar5;
          do {
            if (uVar2 <= (int)lVar3 - 4U)
            goto Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate__BeginInvoke;
            lVar1 = *(long *)(param_4 + lVar3 * 8);
            if (lVar1 == 0) goto LAB_07714b84;
            fVar4 = (float)FUN_09539d64(lVar1,0);
            fVar5 = fVar4;
            if (fVar13 <= fVar4) {
              fVar5 = fVar13;
            }
            fVar8 = (float)uVar9;
            uVar2 = *(uint *)(param_4 + 0x18);
            fVar7 = fVar8;
            if ((float)uVar14 <= fVar8) {
              fVar7 = (float)uVar14;
            }
            uVar14 = (ulong)(uint)fVar7;
            fVar12 = (float)uVar10;
            fVar11 = fVar12;
            if ((float)uVar15 <= fVar12) {
              fVar11 = (float)uVar15;
            }
            uVar15 = (ulong)(uint)fVar11;
            lVar3 = lVar3 + 1;
            if (fVar4 <= fVar16) {
              fVar4 = fVar16;
            }
            if (fVar8 <= (float)param_2) {
              fVar8 = (float)param_2;
            }
            param_2 = (ulong)(uint)fVar8;
            if (fVar12 <= (float)param_3) {
              fVar12 = (float)param_3;
            }
            param_3 = (ulong)(uint)fVar12;
            fVar16 = fVar4;
            fVar13 = fVar5;
          } while ((int)lVar3 + -4 < (int)uVar2);
        }
        if (param_5 != 0) {
          fStack0000000000000004 = fVar12 - fVar11;
          fVar16 = fVar8 - fVar7;
          fVar11 = (fVar11 + fVar12) * 0.5;
          fVar12 = (fVar7 + fVar8) * 0.5;
          FUN_094daefc(&stack0x000000a0,param_5,0);
          uStack0000000000000108 = in_stack_000000c8;
          uStack0000000000000100 = in_stack_000000c0;
          uStack0000000000000118 = in_stack_000000d8;
          uStack0000000000000110 = in_stack_000000d0;
          uStack00000000000000e8 = in_stack_000000a8;
          uStack00000000000000e0 = in_stack_000000a0;
          uStack00000000000000f8 = in_stack_000000b8;
          uStack00000000000000f0 = in_stack_000000b0;
          in_stack_00000068 = in_stack_000000a8;
          in_stack_00000060 = in_stack_000000a0;
          in_stack_00000078 = in_stack_000000b8;
          in_stack_00000070 = in_stack_000000b0;
          in_stack_00000088 = in_stack_000000c8;
          in_stack_00000080 = in_stack_000000c0;
          in_stack_00000098 = in_stack_000000d8;
          in_stack_00000090 = in_stack_000000d0;
          uVar6 = FUN_09513430((fVar5 + fVar4) * 0.5,fVar12,fVar11,0,&stack0x00000060,0);
          in_stack_00000048 = uStack0000000000000108;
          in_stack_00000040 = uStack0000000000000100;
          in_stack_00000058 = uStack0000000000000118;
          in_stack_00000050 = uStack0000000000000110;
          in_stack_00000028 = uStack00000000000000e8;
          in_stack_00000020 = uStack00000000000000e0;
          in_stack_00000038 = uStack00000000000000f8;
          in_stack_00000030 = uStack00000000000000f0;
          fVar8 = fStack0000000000000004;
          fStack0000000000000014 =
               (float)FUN_09513430(fVar4 - fVar5,fVar16,fStack0000000000000004,0,&stack0x00000020,0)
          ;
          fStack0000000000000014 = fStack0000000000000014 * 0.5;
          in_stack_00000018 = fVar16 * 0.5;
          fStack000000000000001c = fVar8 * 0.5;
          in_stack_00000008 = uVar6;
          fStack000000000000000c = fVar12;
          in_stack_00000010 = fVar11;
          FUN_094d96a4(param_5,&stack0x00000008,0);
          return;
        }
      }
    }
  }
LAB_07714b84:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


