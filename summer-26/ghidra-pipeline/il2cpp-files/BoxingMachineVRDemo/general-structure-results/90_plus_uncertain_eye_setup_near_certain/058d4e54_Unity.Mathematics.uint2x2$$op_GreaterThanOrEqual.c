/*
FUNCTION_NAME: Unity.Mathematics.uint2x2$$op_GreaterThanOrEqual
ENTRY_POINT: 058d4e54
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_6
*/


void Unity_Mathematics_uint2x2__op_GreaterThanOrEqual(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  int extraout_w1;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  uint unaff_w19;
  int iVar11;
  long unaff_x20;
  long *plVar12;
  long *unaff_x22;
  long lVar13;
  code *pcVar14;
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
  
  FUN_02d6084c(OVRPlugin_<>c__DisplayClass531_0_TypeInfo);
  FUN_02d6084c(OVRPlugin_BodyJointLocation_TypeInfo);
  FUN_02d6084c(PTR_DAT_06767838);
  FUN_02d6084c(Unity_Collections_AllocatorManager_Managed_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xaf2) = 1;
  lVar6 = *unaff_x22;
  uStack000000000000012c = 0;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *unaff_x22;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
  if (lVar8 == 0) {
LAB_058d519c:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if (unaff_w19 < *(uint *)(lVar8 + 0x18)) {
    lVar13 = (long)(int)unaff_w19;
    if (*(char *)(lVar8 + lVar13 * 0xb8 + 0x58) != '\0') {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar6 = *unaff_x22;
        lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
        if (lVar8 == 0) goto LAB_058d519c;
      }
      if (*(uint *)(lVar8 + 0x18) <= unaff_w19) goto Unity_Mathematics_uint2x2__get_Item;
      if (*(long *)(lVar8 + lVar13 * 0xb8 + 0x50) != 0) {
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar8 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x30);
          if (lVar8 == 0) goto LAB_058d519c;
        }
        if (*(uint *)(lVar8 + 0x18) <= unaff_w19) goto Unity_Mathematics_uint2x2__get_Item;
        plVar12 = *(long **)(lVar8 + lVar13 * 0xb8 + 0x50);
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
        if (plVar12 == (long *)0x0) goto LAB_058d519c;
        lVar8 = *(long *)System_Linq_Expressions_Interpreter_ModuloInstruction_ModuloInt64_TypeInfo;
        memcpy(&stack0x00000000,&stack0x00000060,0x60);
        lVar6 = *plVar12;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar8) {
              puVar7 = (undefined8 *)(lVar6 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_058d4fc0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_02d9a5d4(plVar12,lVar8,1);
LAB_058d4fc0:
        pcVar14 = (code *)*puVar7;
        memcpy(&stack0x000000c0,&stack0x00000000,0x60);
        (*pcVar14)(plVar12,&stack0x000000c0,puVar7[1]);
        lVar6 = *unaff_x22;
      }
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *unaff_x22;
    }
    puVar5 = OVRPlugin_BodyTrackingFidelity2_TypeInfo;
    puVar4 = OVRPlugin_BodyJointSet_TypeInfo;
    puVar3 = OVRPlugin_BodyJointLocation_TypeInfo;
    puVar2 = OVRPlugin_<>c__DisplayClass531_0_TypeInfo;
    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
    if (lVar6 == 0) goto LAB_058d519c;
    if (unaff_w19 < *(uint *)(lVar6 + 0x18)) {
      FUN_05853890(lVar6 + lVar13 * 0xb8 + 0x78,0);
      FUN_058d46f4(unaff_w19);
      iVar11 = 0;
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
        if (iVar1 <= iVar11) {
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
        FUN_037a47e4(*(long *)(*unaff_x22 + 0xb8) + 0x48,iVar11,*(undefined8 *)puVar3);
        lVar6 = *(long *)(*unaff_x22 + 0xb8);
        lVar8 = *(long *)(lVar6 + 0x28);
        if (lVar8 == 0) goto LAB_058d519c;
        if (*(uint *)(lVar8 + 0x18) <= unaff_w19) break;
        if (*(int *)(lVar8 + lVar13 * 4 + 0x20) == extraout_w1) {
          if (*(int *)(*unaff_x22 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar6 = *(long *)(*unaff_x22 + 0xb8);
          }
          FUN_037a56f8(lVar6 + 0x48,iVar11,*(undefined8 *)puVar2);
          iVar11 = iVar11 + -1;
        }
        iVar11 = iVar11 + 1;
      }
    }
  }
Unity_Mathematics_uint2x2__get_Item:
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


