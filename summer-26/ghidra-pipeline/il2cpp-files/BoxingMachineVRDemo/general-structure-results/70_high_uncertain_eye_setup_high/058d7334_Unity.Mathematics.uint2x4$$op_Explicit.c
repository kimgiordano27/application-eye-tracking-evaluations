/*
FUNCTION_NAME: Unity.Mathematics.uint2x4$$op_Explicit
ENTRY_POINT: 058d7334
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_13;weak_xr_or_state_hits_13;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_13
*/


void Unity_Mathematics_uint2x4__op_Explicit(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  int iStack0000000000000024;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  int in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 uStack0000000000000148;
  
  puVar1 = PTR_DAT_06767838;
  uStack0000000000000148 = param_1;
  if ((DAT_06b80b00 & 1) == 0) {
    FUN_02d6084c(OVRPlugin_EyeTextureFormat_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_100_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_101_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_102_0_TypeInfo);
    FUN_02d6084c(UnityEngine_UIElements_MouseOverEvent_<>c_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_103_0_TypeInfo);
    FUN_02d6084c(PTR_DAT_06767838);
    FUN_02d6084c(OVRPlugin_OVRP_1_104_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_105_0_TypeInfo);
    DAT_06b80b00 = 1;
  }
  lVar10 = *(long *)puVar1;
  in_stack_00000128 = 0;
  in_stack_00000120 = 0;
  in_stack_00000138 = 0;
  in_stack_00000130 = 0;
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
  in_stack_00000118 = 0;
  in_stack_00000110 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000f8 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000a8 = 0;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar10 = *(long *)puVar1;
  }
  if (*(int *)(*(long *)(lVar10 + 0xb8) + 0x174) != 0) {
    iVar8 = FUN_058eca00(&stack0x00000148,0);
    if ((iVar8 == 0x53544154) || (iVar8 == 0x444c5441)) {
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar11 = FUN_058636b0(param_2,0);
      if ((uVar11 & 1) != 0) {
        lVar10 = *(long *)puVar1;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar10 = *(long *)puVar1;
        }
        uVar11 = FUN_032dc1a0(*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x38),
                              *(undefined4 *)(*(long *)(lVar10 + 0xb8) + 0x1c),param_2,
                              *(undefined8 *)OVRPlugin_EyeTextureFormat_TypeInfo);
        if ((uVar11 & 1) == 0) {
          lVar10 = *(long *)puVar1;
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar10 = *(long *)puVar1;
          }
          uVar11 = FUN_033880c4(*(long *)(lVar10 + 0xb8) + 0x108,param_2,uStack0000000000000148,
                                *(undefined8 *)OVRPlugin_OVRP_1_105_0_TypeInfo,0,
                                *(undefined8 *)OVRPlugin_OVRP_1_103_0_TypeInfo);
          if ((uVar11 & 1) != 0) {
            FUN_0585d9b0(&stack0x00000030,DAT_01208248,uStack0000000000000148,param_2,0);
            in_stack_000000c0 = in_stack_00000040;
            in_stack_000000b8 = in_stack_00000038;
            in_stack_000000b0 = in_stack_00000030;
            FUN_0585da04(&stack0x00000030,&stack0x000000b0,0);
            memcpy(&stack0x000000d0,&stack0x00000030,0x70);
            iVar8 = in_stack_000000a8;
            puVar5 = OVRPlugin_OVRP_1_102_0_TypeInfo;
            puVar4 = OVRPlugin_OVRP_1_101_0_TypeInfo;
            puVar3 = OVRPlugin_OVRP_1_100_0_TypeInfo;
            puVar2 = UnityEngine_UIElements_MouseOverEvent_<>c_TypeInfo;
            iStack0000000000000024 = in_stack_000000a8 + 1;
            do {
              uVar11 = FUN_0585da2c(&stack0x000000d0,0);
              uVar6 = in_stack_00000118;
              if ((uVar11 & 1) == 0) break;
              lVar10 = *(long *)puVar1;
              if (*(int *)(lVar10 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
                lVar10 = *(long *)puVar1;
              }
              FUN_0436dca4(*(long *)(lVar10 + 0xb8) + 0xb8,*(undefined8 *)puVar3);
              iVar13 = 0;
              while( true ) {
                lVar10 = *(long *)puVar1;
                if (*(int *)(lVar10 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                  lVar10 = *(long *)puVar1;
                }
                iVar9 = FUN_0436d8f4(*(long *)(lVar10 + 0xb8) + 0xb8,*(undefined8 *)puVar2);
                if (iVar9 <= iVar13) break;
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                  lVar10 = *(long *)(*(long *)puVar1 + 0xb8);
                  iVar12 = *(int *)(lVar10 + 0x10);
                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                    lVar10 = *(long *)(*(long *)puVar1 + 0xb8);
                  }
                }
                else {
                  lVar10 = *(long *)(*(long *)puVar1 + 0xb8);
                  iVar12 = *(int *)(lVar10 + 0x10);
                }
                lVar10 = FUN_0436d8fc(lVar10 + 0xb8,iVar13,*(undefined8 *)puVar5);
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60ae8();
                }
                (**(code **)(lVar10 + 0x18))
                          (*(undefined8 *)(lVar10 + 0x40),uVar6,uStack0000000000000148,
                           *(undefined8 *)(lVar10 + 0x28));
                lVar10 = *(long *)puVar1;
                if (*(int *)(lVar10 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4(lVar10);
                  lVar10 = *(long *)puVar1;
                }
                if (iVar12 != *(int *)(*(long *)(lVar10 + 0xb8) + 0x10)) {
                  if (*(int *)(lVar10 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4(lVar10);
                  }
                  cVar7 = FUN_058d53c8(param_2);
                  if (cVar7 != '\0') break;
                }
                iVar13 = iVar13 + 1;
              }
              lVar10 = *(long *)puVar1;
              if (*(int *)(lVar10 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
                lVar10 = *(long *)puVar1;
              }
              FUN_0436dcb0(*(long *)(lVar10 + 0xb8) + 0xb8,*(undefined8 *)puVar4);
            } while (iVar9 <= iVar13);
            in_stack_000000a8 = iVar8;
            FUN_0585e9d4(&stack0x000000d0,0);
          }
        }
      }
    }
  }
  return;
}


