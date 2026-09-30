/*
FUNCTION_NAME: Unity.Mathematics.uint2x3$$op_Subtraction
ENTRY_POINT: 058d5c38
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Unity_Mathematics_uint2x3__op_Subtraction(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  uint unaff_w20;
  ulong unaff_x21;
  ulong unaff_x22;
  int unaff_w23;
  long *plVar9;
  int unaff_w24;
  undefined8 uVar10;
  ulong uVar11;
  long *unaff_x26;
  long unaff_x27;
  long lVar12;
  undefined1 auVar13 [16];
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  puVar1 = OVRPlugin_Mesh_TypeInfo;
  if (0 < unaff_w23) {
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      param_1 = *(long *)(*unaff_x26 + 0xb8);
      lVar12 = 0x40;
      if ((unaff_x21 & 1) == 0) {
        lVar12 = 0x38;
      }
      uVar10 = *(undefined8 *)(param_1 + lVar12);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        param_1 = *(long *)(*unaff_x26 + 0xb8);
      }
    }
    else {
      lVar12 = 0x40;
      if ((unaff_x21 & 1) == 0) {
        lVar12 = 0x38;
      }
      uVar10 = *(undefined8 *)(param_1 + lVar12);
    }
    lVar12 = 0x20;
    if ((unaff_x21 & 1) == 0) {
      lVar12 = 0x1c;
    }
    FUN_032e1e44(uVar10,unaff_w24,*(int *)(param_1 + lVar12) - unaff_w23,unaff_w23,
                 *(undefined8 *)puVar1);
    param_2 = *unaff_x26;
    uVar11 = 0;
    lVar12 = 0xcc;
    while( true ) {
      if (*(int *)(param_2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        param_2 = *unaff_x26;
      }
      if ((long)*(int *)(*(long *)(param_2 + 0xb8) + 0x18) <= (long)uVar11) break;
      if (unaff_w20 != uVar11) {
        if (*(int *)(param_2 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          param_2 = *unaff_x26;
        }
        lVar6 = *(long *)(*(long *)(param_2 + 0xb8) + 0x30);
        if (lVar6 == 0) goto LAB_058d6058;
        if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_058d605c;
        piVar8 = (int *)(lVar6 + lVar12);
        if ((unaff_x21 & 1) == 0) {
          piVar8 = (int *)(lVar6 + lVar12) + -0x20;
        }
        if (unaff_w24 < *piVar8) {
          if (*(int *)(param_2 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            param_2 = *unaff_x26;
          }
          lVar6 = *(long *)(*(long *)(param_2 + 0xb8) + 0x30);
          if (lVar6 == 0) goto LAB_058d6058;
          if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_058d605c;
          if ((unaff_x21 & 1) == 0) {
            *(int *)(lVar6 + lVar12 + -0x80) = *(int *)(lVar6 + lVar12 + -0x80) - unaff_w23;
          }
          else {
            *(int *)(lVar6 + lVar12) = *(int *)(lVar6 + lVar12) - unaff_w23;
          }
        }
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0xb8;
    }
  }
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    param_2 = *unaff_x26;
  }
  lVar12 = *(long *)(param_2 + 0xb8);
  lVar6 = *(long *)(lVar12 + 0x30);
  if (lVar6 != 0) {
    if ((unaff_x21 & 1) == 0) {
      if (unaff_w20 < *(uint *)(lVar6 + 0x18)) {
        *(int *)(lVar6 + unaff_x27 * 0xb8 + 0x4c) = *(int *)(lVar12 + 0x1c) - unaff_w23;
        FUN_032da580(lVar12 + 0x38,lVar12 + 0x1c);
        lVar12 = *unaff_x26;
        lVar6 = *(long *)(lVar12 + 0xb8);
        lVar7 = *(long *)(lVar6 + 0x30);
        if (lVar7 == 0) goto LAB_058d6058;
        if (unaff_w20 < *(uint *)(lVar7 + 0x18)) {
          lVar7 = lVar7 + unaff_x27 * 0xb8;
          plVar9 = *(long **)(lVar7 + 0x50);
          *(int *)(lVar7 + 0x48) = *(int *)(lVar7 + 0x48) + 1;
          if (plVar9 != (long *)0x0) {
            if (*(int *)(lVar12 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
              lVar6 = *(long *)(*unaff_x26 + 0xb8);
            }
            lVar12 = *(long *)(lVar6 + 0x28);
            if (lVar12 == 0) goto LAB_058d6058;
            if (*(uint *)(lVar12 + 0x18) <= unaff_w20) goto LAB_058d605c;
            auVar13 = FUN_058c51d4(lVar12 + unaff_x27 * 4 + 0x20);
            in_stack_00000018 = 0;
            in_stack_00000020 = 0;
            in_stack_00000028 = 0;
            FUN_03dc64dc(&stack0x00000018,auVar13._0_8_,auVar13._8_8_,
                         *(undefined8 *)System_Xml_XmlDictionary_TypeInfo);
            uVar3 = in_stack_00000028;
            uVar2 = in_stack_00000020;
            uVar10 = in_stack_00000018;
            lVar12 = *plVar9;
            uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar11 != 0) {
              piVar8 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) ==
                    *(long *)
                     System_Linq_Expressions_Interpreter_ModuloInstruction_ModuloInt64_TypeInfo) {
                  puVar4 = (undefined8 *)(lVar12 + (long)(*piVar8 + 3) * 0x10 + 0x138);
                  goto LAB_058d5f7c;
                }
                uVar11 = uVar11 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar11 != 0);
            }
            puVar4 = (undefined8 *)
                     FUN_02d9a5d4(plVar9,*(long *)
                                          System_Linq_Expressions_Interpreter_ModuloInstruction_ModuloInt64_TypeInfo
                                  ,3);
LAB_058d5f7c:
            in_stack_00000038 = uVar2;
            in_stack_00000030 = uVar10;
            in_stack_00000040 = uVar3;
            (*(code *)*puVar4)(plVar9,&stack0x00000030,puVar4[1]);
            if ((unaff_x22 & 1) == 0) {
              lVar12 = *unaff_x26;
              if (*(int *)(lVar12 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
                lVar12 = *unaff_x26;
              }
              lVar6 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x30);
              if (lVar6 == 0) goto LAB_058d6058;
              if (*(uint *)(lVar6 + 0x18) <= unaff_w20) goto LAB_058d605c;
              if (*(char *)(lVar6 + unaff_x27 * 0xb8 + 0x58) != '\0') {
                if (*(int *)(lVar12 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                Unity_Mathematics_uint2__op_Explicit(unaff_w20,0);
              }
            }
          }
LAB_058d5ff8:
          if (*(int *)(*unaff_x26 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_058d65a0();
          if (*(int *)(*unaff_x26 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar5 = 4;
          if ((unaff_x21 & 1) == 0) {
            uVar5 = 2;
          }
          FUN_058d3a78(unaff_w20,uVar5);
          return;
        }
      }
    }
    else if (unaff_w20 < *(uint *)(lVar6 + 0x18)) {
      *(int *)(lVar6 + unaff_x27 * 0xb8 + 0xcc) = *(int *)(lVar12 + 0x20) - unaff_w23;
      FUN_032da580(lVar12 + 0x40,lVar12 + 0x20);
      lVar12 = *(long *)(*(long *)(*unaff_x26 + 0xb8) + 0x30);
      if (lVar12 == 0) goto LAB_058d6058;
      if (unaff_w20 < *(uint *)(lVar12 + 0x18)) {
        lVar12 = lVar12 + unaff_x27 * 0xb8;
        *(int *)(lVar12 + 200) = *(int *)(lVar12 + 200) + 1;
        goto LAB_058d5ff8;
      }
    }
LAB_058d605c:
                    /* WARNING: Subroutine does not return */
    FUN_02d60af0();
  }
LAB_058d6058:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


