/*
FUNCTION_NAME: Unity.Mathematics.uint2x2$$op_RightShift
ENTRY_POINT: 058d4f08
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void Unity_Mathematics_uint2x2__op_RightShift(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  int extraout_w1;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  uint unaff_w19;
  int iVar10;
  long *plVar11;
  long lVar12;
  long *unaff_x22;
  long unaff_x23;
  code *pcVar13;
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
  undefined4 uStack000000000000012c;
  
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    param_1 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x30);
    if (param_1 == 0) goto LAB_058d519c;
  }
  if (*(uint *)(param_1 + 0x18) <= unaff_w19) {
Unity_Mathematics_uint2x2__get_Item:
                    /* WARNING: Subroutine does not return */
    FUN_02d60af0();
  }
  plVar11 = *(long **)(param_1 + unaff_x23 * 0xb8 + 0x50);
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  if (plVar11 != (long *)0x0) {
    lVar12 = *(long *)System_Linq_Expressions_Interpreter_ModuloInstruction_ModuloInt64_TypeInfo;
    memcpy(&stack0x00000000,&stack0x00000060,0x60);
    lVar7 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar12) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_058d4fc0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02d9a5d4(plVar11,lVar12,1);
LAB_058d4fc0:
    pcVar13 = (code *)*puVar6;
    memcpy(&stack0x000000c0,&stack0x00000000,0x60);
    (*pcVar13)(plVar11,&stack0x000000c0,puVar6[1]);
    lVar7 = *unaff_x22;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar7 = *unaff_x22;
    }
    puVar5 = OVRPlugin_BodyTrackingFidelity2_TypeInfo;
    puVar4 = OVRPlugin_BodyJointSet_TypeInfo;
    puVar3 = OVRPlugin_BodyJointLocation_TypeInfo;
    puVar2 = OVRPlugin_<>c__DisplayClass531_0_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x30);
    if (lVar7 != 0) {
      if (unaff_w19 < *(uint *)(lVar7 + 0x18)) {
        FUN_05853890(lVar7 + unaff_x23 * 0xb8 + 0x78,0);
        FUN_058d46f4(unaff_w19);
        iVar10 = 0;
        while( true ) {
          if (*(int *)(*unaff_x22 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            iVar1 = *(int *)(*(long *)(*unaff_x22 + 0xb8) + 0x48);
            if (*(int *)(*unaff_x22 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
          }
          else {
            iVar1 = *(int *)(*(long *)(*unaff_x22 + 0xb8) + 0x48);
          }
          if (iVar1 <= iVar10) {
            FUN_058d3a78(unaff_w19,1,0);
            uStack000000000000012c = *(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
            FUN_032de00c(*(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x28),&stack0x0000012c,
                         unaff_w19,*(undefined8 *)puVar4);
            FUN_032deb00(*(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x30),
                         *(long *)(*unaff_x22 + 0xb8) + 0x18,unaff_w19,*(undefined8 *)puVar5);
            if (*(int *)(*(long *)(*unaff_x22 + 0xb8) + 0x18) == 0) {
              if (*(int *)(*unaff_x22 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              FUN_058d67a0();
              FUN_058d6850();
            }
            return;
          }
          FUN_037a47e4(*(long *)(*unaff_x22 + 0xb8) + 0x48,iVar10,*(undefined8 *)puVar3);
          lVar7 = *(long *)(*unaff_x22 + 0xb8);
          lVar12 = *(long *)(lVar7 + 0x28);
          if (lVar12 == 0) goto LAB_058d519c;
          if (*(uint *)(lVar12 + 0x18) <= unaff_w19) break;
          if (*(int *)(lVar12 + unaff_x23 * 4 + 0x20) == extraout_w1) {
            if (*(int *)(*unaff_x22 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
              lVar7 = *(long *)(*unaff_x22 + 0xb8);
            }
            FUN_037a56f8(lVar7 + 0x48,iVar10,*(undefined8 *)puVar2);
            iVar10 = iVar10 + -1;
          }
          iVar10 = iVar10 + 1;
        }
      }
      goto Unity_Mathematics_uint2x2__get_Item;
    }
  }
LAB_058d519c:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


