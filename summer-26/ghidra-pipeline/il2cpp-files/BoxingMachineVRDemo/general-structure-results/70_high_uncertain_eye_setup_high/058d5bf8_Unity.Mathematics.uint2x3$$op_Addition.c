/*
FUNCTION_NAME: Unity.Mathematics.uint2x3$$op_Addition
ENTRY_POINT: 058d5bf8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Unity_Mathematics_uint2x3__op_Addition(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  long lVar7;
  long in_x9;
  long lVar8;
  long lVar9;
  int *piVar10;
  uint unaff_w20;
  ulong unaff_x21;
  ulong unaff_x22;
  int unaff_w23;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *unaff_x26;
  long unaff_x27;
  undefined1 auVar14 [16];
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  if (in_x9 != 0) {
    if (unaff_w20 < *(uint *)(in_x9 + 0x18)) {
      lVar8 = in_x9 + unaff_x27 * 0xb8;
      piVar10 = (int *)(lVar8 + 0xcc);
      if ((unaff_x21 & 1) == 0) {
        piVar10 = (int *)(lVar8 + 0x4c);
      }
      iVar1 = *piVar10;
      if (*(int *)(param_2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        param_2 = *unaff_x26;
        param_1 = *(long *)(param_2 + 0xb8);
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      puVar2 = OVRPlugin_Mesh_TypeInfo;
      if (0 < unaff_w23) {
        if (*(int *)(param_2 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          param_1 = *(long *)(*unaff_x26 + 0xb8);
          lVar8 = 0x40;
          if ((unaff_x21 & 1) == 0) {
            lVar8 = 0x38;
          }
          uVar12 = *(undefined8 *)(param_1 + lVar8);
          if (*(int *)(*unaff_x26 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            param_1 = *(long *)(*unaff_x26 + 0xb8);
          }
        }
        else {
          lVar8 = 0x40;
          if ((unaff_x21 & 1) == 0) {
            lVar8 = 0x38;
          }
          uVar12 = *(undefined8 *)(param_1 + lVar8);
        }
        lVar8 = 0x20;
        if ((unaff_x21 & 1) == 0) {
          lVar8 = 0x1c;
        }
        FUN_032e1e44(uVar12,iVar1,*(int *)(param_1 + lVar8) - unaff_w23,unaff_w23,
                     *(undefined8 *)puVar2);
        param_2 = *unaff_x26;
        uVar13 = 0;
        lVar8 = 0xcc;
        while( true ) {
          if (*(int *)(param_2 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            param_2 = *unaff_x26;
          }
          if ((long)*(int *)(*(long *)(param_2 + 0xb8) + 0x18) <= (long)uVar13) break;
          if (unaff_w20 != uVar13) {
            if (*(int *)(param_2 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
              param_2 = *unaff_x26;
            }
            lVar7 = *(long *)(*(long *)(param_2 + 0xb8) + 0x30);
            if (lVar7 == 0) goto LAB_058d6058;
            if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_058d605c;
            piVar10 = (int *)(lVar7 + lVar8);
            if ((unaff_x21 & 1) == 0) {
              piVar10 = (int *)(lVar7 + lVar8) + -0x20;
            }
            if (iVar1 < *piVar10) {
              if (*(int *)(param_2 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
                param_2 = *unaff_x26;
              }
              lVar7 = *(long *)(*(long *)(param_2 + 0xb8) + 0x30);
              if (lVar7 == 0) goto LAB_058d6058;
              if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_058d605c;
              if ((unaff_x21 & 1) == 0) {
                *(int *)(lVar7 + lVar8 + -0x80) = *(int *)(lVar7 + lVar8 + -0x80) - unaff_w23;
              }
              else {
                *(int *)(lVar7 + lVar8) = *(int *)(lVar7 + lVar8) - unaff_w23;
              }
            }
          }
          uVar13 = uVar13 + 1;
          lVar8 = lVar8 + 0xb8;
        }
      }
      if (*(int *)(param_2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        param_2 = *unaff_x26;
      }
      lVar8 = *(long *)(param_2 + 0xb8);
      lVar7 = *(long *)(lVar8 + 0x30);
      if (lVar7 == 0) goto LAB_058d6058;
      if ((unaff_x21 & 1) == 0) {
        if (unaff_w20 < *(uint *)(lVar7 + 0x18)) {
          *(int *)(lVar7 + unaff_x27 * 0xb8 + 0x4c) = *(int *)(lVar8 + 0x1c) - unaff_w23;
          FUN_032da580(lVar8 + 0x38,lVar8 + 0x1c);
          lVar8 = *unaff_x26;
          lVar7 = *(long *)(lVar8 + 0xb8);
          lVar9 = *(long *)(lVar7 + 0x30);
          if (lVar9 == 0) goto LAB_058d6058;
          if (unaff_w20 < *(uint *)(lVar9 + 0x18)) {
            lVar9 = lVar9 + unaff_x27 * 0xb8;
            plVar11 = *(long **)(lVar9 + 0x50);
            *(int *)(lVar9 + 0x48) = *(int *)(lVar9 + 0x48) + 1;
            if (plVar11 != (long *)0x0) {
              if (*(int *)(lVar8 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
                lVar7 = *(long *)(*unaff_x26 + 0xb8);
              }
              lVar8 = *(long *)(lVar7 + 0x28);
              if (lVar8 == 0) goto LAB_058d6058;
              if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_058d605c;
              auVar14 = FUN_058c51d4(lVar8 + unaff_x27 * 4 + 0x20);
              in_stack_00000018 = 0;
              in_stack_00000020 = 0;
              in_stack_00000028 = 0;
              FUN_03dc64dc(&stack0x00000018,auVar14._0_8_,auVar14._8_8_,
                           *(undefined8 *)System_Xml_XmlDictionary_TypeInfo);
              uVar4 = in_stack_00000028;
              uVar3 = in_stack_00000020;
              uVar12 = in_stack_00000018;
              lVar8 = *plVar11;
              uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar13 != 0) {
                piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) ==
                      *(long *)
                       System_Linq_Expressions_Interpreter_ModuloInstruction_ModuloInt64_TypeInfo) {
                    puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 3) * 0x10 + 0x138);
                    goto LAB_058d5f7c;
                  }
                  uVar13 = uVar13 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar13 != 0);
              }
              puVar5 = (undefined8 *)
                       FUN_02d9a5d4(plVar11,*(long *)
                                             System_Linq_Expressions_Interpreter_ModuloInstruction_ModuloInt64_TypeInfo
                                    ,3);
LAB_058d5f7c:
              in_stack_00000038 = uVar3;
              in_stack_00000030 = uVar12;
              in_stack_00000040 = uVar4;
              (*(code *)*puVar5)(plVar11,&stack0x00000030,puVar5[1]);
              if ((unaff_x22 & 1) == 0) {
                lVar8 = *unaff_x26;
                if (*(int *)(lVar8 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                  lVar8 = *unaff_x26;
                }
                lVar7 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x30);
                if (lVar7 == 0) goto LAB_058d6058;
                if (*(uint *)(lVar7 + 0x18) <= unaff_w20) goto LAB_058d605c;
                if (*(char *)(lVar7 + unaff_x27 * 0xb8 + 0x58) != '\0') {
                  if (*(int *)(lVar8 + 0xe4) == 0) {
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
            uVar6 = 4;
            if ((unaff_x21 & 1) == 0) {
              uVar6 = 2;
            }
            FUN_058d3a78(unaff_w20,uVar6);
            return;
          }
        }
      }
      else if (unaff_w20 < *(uint *)(lVar7 + 0x18)) {
        *(int *)(lVar7 + unaff_x27 * 0xb8 + 0xcc) = *(int *)(lVar8 + 0x20) - unaff_w23;
        FUN_032da580(lVar8 + 0x40,lVar8 + 0x20);
        lVar8 = *(long *)(*(long *)(*unaff_x26 + 0xb8) + 0x30);
        if (lVar8 == 0) goto LAB_058d6058;
        if (unaff_w20 < *(uint *)(lVar8 + 0x18)) {
          lVar8 = lVar8 + unaff_x27 * 0xb8;
          *(int *)(lVar8 + 200) = *(int *)(lVar8 + 200) + 1;
          goto LAB_058d5ff8;
        }
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


