/*
FUNCTION_NAME: Unity.Mathematics.uint2x3$$op_Addition
ENTRY_POINT: 058d5b74
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Unity_Mathematics_uint2x3__op_Addition(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  uint unaff_w20;
  ulong unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  long *plVar13;
  undefined8 uVar14;
  ulong uVar15;
  long *unaff_x26;
  long lVar16;
  undefined1 auVar17 [16];
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  FUN_02d6084c(System_Xml_XmlDictionary_TypeInfo);
  FUN_02d6084c(Unity_Collections_AllocatorManager_Managed_TypeInfo);
  *(undefined1 *)(unaff_x23 + 0xaf7) = 1;
  lVar6 = *unaff_x26;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *unaff_x26;
  }
  lVar9 = *(long *)(lVar6 + 0xb8);
  lVar10 = *(long *)(lVar9 + 0x30);
  if (lVar10 != 0) {
    if (unaff_w20 < *(uint *)(lVar10 + 0x18)) {
      lVar16 = (long)(int)unaff_w20;
      lVar11 = lVar10 + lVar16 * 0xb8;
      piVar12 = (int *)(lVar11 + 200);
      if ((unaff_x21 & 1) == 0) {
        piVar12 = (int *)(lVar11 + 0x48);
      }
      iVar1 = *piVar12;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar6 = *unaff_x26;
        lVar9 = *(long *)(lVar6 + 0xb8);
        lVar10 = *(long *)(lVar9 + 0x30);
        if (lVar10 == 0) goto LAB_058d6058;
      }
      if (unaff_w20 < *(uint *)(lVar10 + 0x18)) {
        lVar10 = lVar10 + lVar16 * 0xb8;
        piVar12 = (int *)(lVar10 + 0xcc);
        if ((unaff_x21 & 1) == 0) {
          piVar12 = (int *)(lVar10 + 0x4c);
        }
        iVar2 = *piVar12;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar6 = *unaff_x26;
          lVar9 = *(long *)(lVar6 + 0xb8);
        }
        *(int *)(lVar9 + 0x10) = *(int *)(lVar9 + 0x10) + 1;
        puVar3 = OVRPlugin_Mesh_TypeInfo;
        if (0 < iVar1) {
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar9 = *(long *)(*unaff_x26 + 0xb8);
            lVar6 = 0x40;
            if ((unaff_x21 & 1) == 0) {
              lVar6 = 0x38;
            }
            uVar14 = *(undefined8 *)(lVar9 + lVar6);
            if (*(int *)(*unaff_x26 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
              lVar9 = *(long *)(*unaff_x26 + 0xb8);
            }
          }
          else {
            lVar6 = 0x40;
            if ((unaff_x21 & 1) == 0) {
              lVar6 = 0x38;
            }
            uVar14 = *(undefined8 *)(lVar9 + lVar6);
          }
          lVar6 = 0x20;
          if ((unaff_x21 & 1) == 0) {
            lVar6 = 0x1c;
          }
          FUN_032e1e44(uVar14,iVar2,*(int *)(lVar9 + lVar6) - iVar1,iVar1,*(undefined8 *)puVar3);
          lVar6 = *unaff_x26;
          uVar15 = 0;
          lVar9 = 0xcc;
          while( true ) {
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
              lVar6 = *unaff_x26;
            }
            if ((long)*(int *)(*(long *)(lVar6 + 0xb8) + 0x18) <= (long)uVar15) break;
            if (unaff_w20 != uVar15) {
              if (*(int *)(lVar6 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
                lVar6 = *unaff_x26;
              }
              lVar10 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
              if (lVar10 == 0) goto LAB_058d6058;
              if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_058d605c;
              piVar12 = (int *)(lVar10 + lVar9);
              if ((unaff_x21 & 1) == 0) {
                piVar12 = (int *)(lVar10 + lVar9) + -0x20;
              }
              if (iVar2 < *piVar12) {
                if (*(int *)(lVar6 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                  lVar6 = *unaff_x26;
                }
                lVar10 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
                if (lVar10 == 0) goto LAB_058d6058;
                if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_058d605c;
                if ((unaff_x21 & 1) == 0) {
                  *(int *)(lVar10 + lVar9 + -0x80) = *(int *)(lVar10 + lVar9 + -0x80) - iVar1;
                }
                else {
                  *(int *)(lVar10 + lVar9) = *(int *)(lVar10 + lVar9) - iVar1;
                }
              }
            }
            uVar15 = uVar15 + 1;
            lVar9 = lVar9 + 0xb8;
          }
        }
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar6 = *unaff_x26;
        }
        lVar6 = *(long *)(lVar6 + 0xb8);
        lVar9 = *(long *)(lVar6 + 0x30);
        if (lVar9 == 0) goto LAB_058d6058;
        if ((unaff_x21 & 1) == 0) {
          if (unaff_w20 < *(uint *)(lVar9 + 0x18)) {
            *(int *)(lVar9 + lVar16 * 0xb8 + 0x4c) = *(int *)(lVar6 + 0x1c) - iVar1;
            FUN_032da580(lVar6 + 0x38,lVar6 + 0x1c);
            lVar6 = *unaff_x26;
            lVar9 = *(long *)(lVar6 + 0xb8);
            lVar10 = *(long *)(lVar9 + 0x30);
            if (lVar10 == 0) goto LAB_058d6058;
            if (unaff_w20 < *(uint *)(lVar10 + 0x18)) {
              lVar10 = lVar10 + lVar16 * 0xb8;
              plVar13 = *(long **)(lVar10 + 0x50);
              *(int *)(lVar10 + 0x48) = *(int *)(lVar10 + 0x48) + 1;
              if (plVar13 != (long *)0x0) {
                if (*(int *)(lVar6 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                  lVar9 = *(long *)(*unaff_x26 + 0xb8);
                }
                lVar6 = *(long *)(lVar9 + 0x28);
                if (lVar6 == 0) goto LAB_058d6058;
                if (*(uint *)(lVar6 + 0x18) <= unaff_w20) goto LAB_058d605c;
                auVar17 = FUN_058c51d4(lVar6 + lVar16 * 4 + 0x20);
                in_stack_00000018 = 0;
                in_stack_00000020 = 0;
                in_stack_00000028 = 0;
                FUN_03dc64dc(&stack0x00000018,auVar17._0_8_,auVar17._8_8_,
                             *(undefined8 *)System_Xml_XmlDictionary_TypeInfo);
                uVar5 = in_stack_00000028;
                uVar4 = in_stack_00000020;
                uVar14 = in_stack_00000018;
                lVar6 = *plVar13;
                uVar15 = (ulong)*(ushort *)(lVar6 + 0x12e);
                if (uVar15 != 0) {
                  piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) ==
                        *(long *)
                         System_Linq_Expressions_Interpreter_ModuloInstruction_ModuloInt64_TypeInfo)
                    {
                      puVar7 = (undefined8 *)(lVar6 + (long)(*piVar12 + 3) * 0x10 + 0x138);
                      goto LAB_058d5f7c;
                    }
                    uVar15 = uVar15 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar15 != 0);
                }
                puVar7 = (undefined8 *)
                         FUN_02d9a5d4(plVar13,*(long *)
                                               System_Linq_Expressions_Interpreter_ModuloInstruction_ModuloInt64_TypeInfo
                                      ,3);
LAB_058d5f7c:
                in_stack_00000038 = uVar4;
                in_stack_00000030 = uVar14;
                in_stack_00000040 = uVar5;
                (*(code *)*puVar7)(plVar13,&stack0x00000030,puVar7[1]);
                if ((unaff_x22 & 1) == 0) {
                  lVar6 = *unaff_x26;
                  if (*(int *)(lVar6 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                    lVar6 = *unaff_x26;
                  }
                  lVar9 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
                  if (lVar9 == 0) goto LAB_058d6058;
                  if (*(uint *)(lVar9 + 0x18) <= unaff_w20) goto LAB_058d605c;
                  if (*(char *)(lVar9 + lVar16 * 0xb8 + 0x58) != '\0') {
                    if (*(int *)(lVar6 + 0xe4) == 0) {
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
              uVar8 = 4;
              if ((unaff_x21 & 1) == 0) {
                uVar8 = 2;
              }
              FUN_058d3a78(unaff_w20,uVar8);
              return;
            }
          }
        }
        else if (unaff_w20 < *(uint *)(lVar9 + 0x18)) {
          *(int *)(lVar9 + lVar16 * 0xb8 + 0xcc) = *(int *)(lVar6 + 0x20) - iVar1;
          FUN_032da580(lVar6 + 0x40,lVar6 + 0x20);
          lVar6 = *(long *)(*(long *)(*unaff_x26 + 0xb8) + 0x30);
          if (lVar6 == 0) goto LAB_058d6058;
          if (unaff_w20 < *(uint *)(lVar6 + 0x18)) {
            lVar6 = lVar6 + lVar16 * 0xb8;
            *(int *)(lVar6 + 200) = *(int *)(lVar6 + 200) + 1;
            goto LAB_058d5ff8;
          }
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


