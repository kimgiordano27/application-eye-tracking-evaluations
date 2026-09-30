/*
FUNCTION_NAME: Unity.Mathematics.uint2x3$$op_Addition
ENTRY_POINT: 058d5bb8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Unity_Mathematics_uint2x3__op_Addition(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  long lVar8;
  long in_x9;
  long lVar9;
  uint in_w10;
  long lVar10;
  int *piVar11;
  uint unaff_w20;
  ulong unaff_x21;
  ulong unaff_x22;
  long *plVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *unaff_x26;
  long lVar15;
  undefined1 auVar16 [16];
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  if (unaff_w20 < in_w10) {
    lVar15 = (long)(int)unaff_w20;
    lVar10 = in_x9 + lVar15 * 0xb8;
    piVar11 = (int *)(lVar10 + 200);
    if ((unaff_x21 & 1) == 0) {
      piVar11 = (int *)(lVar10 + 0x48);
    }
    iVar1 = *piVar11;
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      param_2 = *unaff_x26;
      param_1 = *(long *)(param_2 + 0xb8);
      in_x9 = *(long *)(param_1 + 0x30);
      if (in_x9 == 0) goto LAB_058d6058;
    }
    if (unaff_w20 < *(uint *)(in_x9 + 0x18)) {
      lVar10 = in_x9 + lVar15 * 0xb8;
      piVar11 = (int *)(lVar10 + 0xcc);
      if ((unaff_x21 & 1) == 0) {
        piVar11 = (int *)(lVar10 + 0x4c);
      }
      iVar2 = *piVar11;
      if (*(int *)(param_2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        param_2 = *unaff_x26;
        param_1 = *(long *)(param_2 + 0xb8);
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      puVar3 = OVRPlugin_Mesh_TypeInfo;
      if (0 < iVar1) {
        if (*(int *)(param_2 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          param_1 = *(long *)(*unaff_x26 + 0xb8);
          lVar10 = 0x40;
          if ((unaff_x21 & 1) == 0) {
            lVar10 = 0x38;
          }
          uVar13 = *(undefined8 *)(param_1 + lVar10);
          if (*(int *)(*unaff_x26 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            param_1 = *(long *)(*unaff_x26 + 0xb8);
          }
        }
        else {
          lVar10 = 0x40;
          if ((unaff_x21 & 1) == 0) {
            lVar10 = 0x38;
          }
          uVar13 = *(undefined8 *)(param_1 + lVar10);
        }
        lVar10 = 0x20;
        if ((unaff_x21 & 1) == 0) {
          lVar10 = 0x1c;
        }
        FUN_032e1e44(uVar13,iVar2,*(int *)(param_1 + lVar10) - iVar1,iVar1,*(undefined8 *)puVar3);
        param_2 = *unaff_x26;
        uVar14 = 0;
        lVar10 = 0xcc;
        while( true ) {
          if (*(int *)(param_2 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            param_2 = *unaff_x26;
          }
          if ((long)*(int *)(*(long *)(param_2 + 0xb8) + 0x18) <= (long)uVar14) break;
          if (unaff_w20 != uVar14) {
            if (*(int *)(param_2 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
              param_2 = *unaff_x26;
            }
            lVar8 = *(long *)(*(long *)(param_2 + 0xb8) + 0x30);
            if (lVar8 == 0) goto LAB_058d6058;
            if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_058d605c;
            piVar11 = (int *)(lVar8 + lVar10);
            if ((unaff_x21 & 1) == 0) {
              piVar11 = (int *)(lVar8 + lVar10) + -0x20;
            }
            if (iVar2 < *piVar11) {
              if (*(int *)(param_2 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
                param_2 = *unaff_x26;
              }
              lVar8 = *(long *)(*(long *)(param_2 + 0xb8) + 0x30);
              if (lVar8 == 0) goto LAB_058d6058;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_058d605c;
              if ((unaff_x21 & 1) == 0) {
                *(int *)(lVar8 + lVar10 + -0x80) = *(int *)(lVar8 + lVar10 + -0x80) - iVar1;
              }
              else {
                *(int *)(lVar8 + lVar10) = *(int *)(lVar8 + lVar10) - iVar1;
              }
            }
          }
          uVar14 = uVar14 + 1;
          lVar10 = lVar10 + 0xb8;
        }
      }
      if (*(int *)(param_2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        param_2 = *unaff_x26;
      }
      lVar10 = *(long *)(param_2 + 0xb8);
      lVar8 = *(long *)(lVar10 + 0x30);
      if (lVar8 == 0) {
LAB_058d6058:
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if ((unaff_x21 & 1) == 0) {
        if (unaff_w20 < *(uint *)(lVar8 + 0x18)) {
          *(int *)(lVar8 + lVar15 * 0xb8 + 0x4c) = *(int *)(lVar10 + 0x1c) - iVar1;
          FUN_032da580(lVar10 + 0x38,lVar10 + 0x1c);
          lVar10 = *unaff_x26;
          lVar8 = *(long *)(lVar10 + 0xb8);
          lVar9 = *(long *)(lVar8 + 0x30);
          if (lVar9 == 0) goto LAB_058d6058;
          if (unaff_w20 < *(uint *)(lVar9 + 0x18)) {
            lVar9 = lVar9 + lVar15 * 0xb8;
            plVar12 = *(long **)(lVar9 + 0x50);
            *(int *)(lVar9 + 0x48) = *(int *)(lVar9 + 0x48) + 1;
            if (plVar12 != (long *)0x0) {
              if (*(int *)(lVar10 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
                lVar8 = *(long *)(*unaff_x26 + 0xb8);
              }
              lVar10 = *(long *)(lVar8 + 0x28);
              if (lVar10 == 0) goto LAB_058d6058;
              if (*(uint *)(lVar10 + 0x18) <= unaff_w20) goto LAB_058d605c;
              auVar16 = FUN_058c51d4(lVar10 + lVar15 * 4 + 0x20);
              in_stack_00000018 = 0;
              in_stack_00000020 = 0;
              in_stack_00000028 = 0;
              FUN_03dc64dc(&stack0x00000018,auVar16._0_8_,auVar16._8_8_,
                           *(undefined8 *)System_Xml_XmlDictionary_TypeInfo);
              uVar5 = in_stack_00000028;
              uVar4 = in_stack_00000020;
              uVar13 = in_stack_00000018;
              lVar10 = *plVar12;
              uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar14 != 0) {
                piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) ==
                      *(long *)
                       System_Linq_Expressions_Interpreter_ModuloInstruction_ModuloInt64_TypeInfo) {
                    puVar6 = (undefined8 *)(lVar10 + (long)(*piVar11 + 3) * 0x10 + 0x138);
                    goto LAB_058d5f7c;
                  }
                  uVar14 = uVar14 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar14 != 0);
              }
              puVar6 = (undefined8 *)
                       FUN_02d9a5d4(plVar12,*(long *)
                                             System_Linq_Expressions_Interpreter_ModuloInstruction_ModuloInt64_TypeInfo
                                    ,3);
LAB_058d5f7c:
              in_stack_00000038 = uVar4;
              in_stack_00000030 = uVar13;
              in_stack_00000040 = uVar5;
              (*(code *)*puVar6)(plVar12,&stack0x00000030,puVar6[1]);
              if ((unaff_x22 & 1) == 0) {
                lVar10 = *unaff_x26;
                if (*(int *)(lVar10 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                  lVar10 = *unaff_x26;
                }
                lVar8 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x30);
                if (lVar8 == 0) goto LAB_058d6058;
                if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_058d605c;
                if (*(char *)(lVar8 + lVar15 * 0xb8 + 0x58) != '\0') {
                  if (*(int *)(lVar10 + 0xe4) == 0) {
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
            uVar7 = 4;
            if ((unaff_x21 & 1) == 0) {
              uVar7 = 2;
            }
            FUN_058d3a78(unaff_w20,uVar7);
            return;
          }
        }
      }
      else if (unaff_w20 < *(uint *)(lVar8 + 0x18)) {
        *(int *)(lVar8 + lVar15 * 0xb8 + 0xcc) = *(int *)(lVar10 + 0x20) - iVar1;
        FUN_032da580(lVar10 + 0x40,lVar10 + 0x20);
        lVar10 = *(long *)(*(long *)(*unaff_x26 + 0xb8) + 0x30);
        if (lVar10 == 0) goto LAB_058d6058;
        if (unaff_w20 < *(uint *)(lVar10 + 0x18)) {
          lVar10 = lVar10 + lVar15 * 0xb8;
          *(int *)(lVar10 + 200) = *(int *)(lVar10 + 200) + 1;
          goto LAB_058d5ff8;
        }
      }
    }
  }
LAB_058d605c:
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


