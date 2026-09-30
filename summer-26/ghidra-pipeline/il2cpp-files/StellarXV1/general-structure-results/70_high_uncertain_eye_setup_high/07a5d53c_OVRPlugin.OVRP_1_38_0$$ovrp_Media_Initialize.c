/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_Initialize
ENTRY_POINT: 07a5d53c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_Initialize(long param_1,long *param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined1 in_stack_00000040 [16];
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined4 uStack000000000000008c;
  undefined4 in_stack_00000090;
  undefined4 uStack0000000000000094;
  undefined4 in_stack_00000098;
  
  if ((DAT_098954f3 & 1) == 0) {
    FUN_04077588(PTR_DAT_092ecf08);
    FUN_04077588(PTR_DAT_092f0808);
    FUN_04077588(PTR_DAT_092f07f8);
    DAT_098954f3 = 1;
  }
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  uStack000000000000008c = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  uStack0000000000000094 = 0;
  if (param_2 != (long *)0x0) {
    lVar5 = *param_2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_092f0808) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_07a5d5f0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00(param_2,*(long *)PTR_DAT_092f0808,0);
LAB_07a5d5f0:
    iVar3 = (*(code *)*puVar4)(param_2,puVar4[1]);
    puVar2 = PTR_DAT_092f07f8;
    puVar1 = PTR_DAT_092ecf08;
    if (iVar3 == 0x18) {
      iVar3 = 0;
      do {
        lVar5 = *param_2;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_07a5d668;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_040b1e00(param_2,*(long *)puVar2,0);
LAB_07a5d668:
        (*(code *)*puVar4)(&stack0x00000080,param_2,iVar3,puVar4[1]);
        if ((param_3 & 1) != 0) {
          uStack0000000000000074 = CONCAT44(in_stack_00000098,uStack0000000000000094);
          uStack0000000000000068 = in_stack_00000088;
          in_stack_00000060 = in_stack_00000080;
          uStack000000000000006c = uStack000000000000008c;
          uStack0000000000000070 = in_stack_00000090;
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uStack0000000000000028 = uStack0000000000000068;
          in_stack_00000020 = in_stack_00000060;
          uStack0000000000000034 = uStack0000000000000074;
          uStack000000000000002c = uStack000000000000006c;
          uStack0000000000000030 = uStack0000000000000070;
          FUN_07a56f20(&stack0x00000040 + 4,&stack0x00000020);
          in_stack_00000088 = in_stack_00000040._12_4_;
          in_stack_00000080 = in_stack_00000040._4_8_;
          uStack0000000000000094 = (undefined4)in_stack_00000058;
          in_stack_00000098 = (undefined4)((ulong)in_stack_00000058 >> 0x20);
          uStack000000000000008c = uStack0000000000000050;
          in_stack_00000090 = uStack0000000000000054;
        }
        if (param_1 == 0) goto LAB_07a5d714;
        FUN_07a5ceac(param_1,iVar3);
        iVar3 = iVar3 + 1;
      } while (iVar3 != 0x18);
    }
    return;
  }
LAB_07a5d714:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


