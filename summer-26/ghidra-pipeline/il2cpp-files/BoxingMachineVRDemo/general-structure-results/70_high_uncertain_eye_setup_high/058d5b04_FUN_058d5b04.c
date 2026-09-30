/*
FUNCTION_NAME: FUN_058d5b04
ENTRY_POINT: 058d5b04
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_058d5b04(uint param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long *plVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar3 = PTR_DAT_06767838;
  if ((DAT_06b80af7 & 1) == 0) {
    FUN_02d6084c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_PositionProperty_TypeInfo);
    FUN_02d6084c(OVRPlugin_Mesh_TypeInfo);
    FUN_02d6084c(System_Linq_Expressions_Interpreter_ModuloInstruction_ModuloInt64_TypeInfo);
    FUN_02d6084c(PTR_DAT_06767838);
    FUN_02d6084c(System_Xml_XmlDictionary_TypeInfo);
    FUN_02d6084c(Unity_Collections_AllocatorManager_Managed_TypeInfo);
    DAT_06b80af7 = 1;
  }
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar3;
  }
  lVar8 = *(long *)(lVar5 + 0xb8);
  lVar9 = *(long *)(lVar8 + 0x30);
  if (lVar9 != 0) {
    if (param_1 < *(uint *)(lVar9 + 0x18)) {
      lVar15 = (long)(int)param_1;
      lVar10 = lVar9 + lVar15 * 0xb8;
      piVar11 = (int *)(lVar10 + 200);
      if ((param_3 & 1) == 0) {
        piVar11 = (int *)(lVar10 + 0x48);
      }
      iVar1 = *piVar11;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar5 = *(long *)puVar3;
        lVar8 = *(long *)(lVar5 + 0xb8);
        lVar9 = *(long *)(lVar8 + 0x30);
        if (lVar9 == 0) goto LAB_058d6058;
      }
      if (param_1 < *(uint *)(lVar9 + 0x18)) {
        lVar9 = lVar9 + lVar15 * 0xb8;
        piVar11 = (int *)(lVar9 + 0xcc);
        if ((param_3 & 1) == 0) {
          piVar11 = (int *)(lVar9 + 0x4c);
        }
        iVar2 = *piVar11;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar5 = *(long *)puVar3;
          lVar8 = *(long *)(lVar5 + 0xb8);
        }
        *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + 1;
        puVar4 = OVRPlugin_Mesh_TypeInfo;
        if (0 < iVar1) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar8 = *(long *)(*(long *)puVar3 + 0xb8);
            lVar5 = 0x40;
            if ((param_3 & 1) == 0) {
              lVar5 = 0x38;
            }
            uVar13 = *(undefined8 *)(lVar8 + lVar5);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
              lVar8 = *(long *)(*(long *)puVar3 + 0xb8);
            }
          }
          else {
            lVar5 = 0x40;
            if ((param_3 & 1) == 0) {
              lVar5 = 0x38;
            }
            uVar13 = *(undefined8 *)(lVar8 + lVar5);
          }
          lVar5 = 0x20;
          if ((param_3 & 1) == 0) {
            lVar5 = 0x1c;
          }
          FUN_032e1e44(uVar13,iVar2,*(int *)(lVar8 + lVar5) - iVar1,iVar1,*(undefined8 *)puVar4);
          lVar5 = *(long *)puVar3;
          uVar14 = 0;
          lVar8 = 0xcc;
          while( true ) {
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
              lVar5 = *(long *)puVar3;
            }
            if ((long)*(int *)(*(long *)(lVar5 + 0xb8) + 0x18) <= (long)uVar14) break;
            if (param_1 != uVar14) {
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
                lVar5 = *(long *)puVar3;
              }
              lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
              if (lVar9 == 0) goto LAB_058d6058;
              if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_058d605c;
              piVar11 = (int *)(lVar9 + lVar8);
              if ((param_3 & 1) == 0) {
                piVar11 = (int *)(lVar9 + lVar8) + -0x20;
              }
              if (iVar2 < *piVar11) {
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                  lVar5 = *(long *)puVar3;
                }
                lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
                if (lVar9 == 0) goto LAB_058d6058;
                if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_058d605c;
                if ((param_3 & 1) == 0) {
                  *(int *)(lVar9 + lVar8 + -0x80) = *(int *)(lVar9 + lVar8 + -0x80) - iVar1;
                }
                else {
                  *(int *)(lVar9 + lVar8) = *(int *)(lVar9 + lVar8) - iVar1;
                }
              }
            }
            uVar14 = uVar14 + 1;
            lVar8 = lVar8 + 0xb8;
          }
        }
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar5 = *(long *)puVar3;
        }
        lVar5 = *(long *)(lVar5 + 0xb8);
        lVar8 = *(long *)(lVar5 + 0x30);
        if (lVar8 == 0) goto LAB_058d6058;
        if ((param_3 & 1) == 0) {
          if (param_1 < *(uint *)(lVar8 + 0x18)) {
            *(int *)(lVar8 + lVar15 * 0xb8 + 0x4c) = *(int *)(lVar5 + 0x1c) - iVar1;
            FUN_032da580(lVar5 + 0x38,lVar5 + 0x1c,param_2,10,
                         *(undefined8 *)
                          UnityEngine_UIElements_InlineStyleAccessPropertyBag_PositionProperty_TypeInfo
                        );
            lVar5 = *(long *)puVar3;
            lVar8 = *(long *)(lVar5 + 0xb8);
            lVar9 = *(long *)(lVar8 + 0x30);
            if (lVar9 == 0) goto LAB_058d6058;
            if (param_1 < *(uint *)(lVar9 + 0x18)) {
              lVar9 = lVar9 + lVar15 * 0xb8;
              plVar12 = *(long **)(lVar9 + 0x50);
              *(int *)(lVar9 + 0x48) = *(int *)(lVar9 + 0x48) + 1;
              if (plVar12 != (long *)0x0) {
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                  lVar8 = *(long *)(*(long *)puVar3 + 0xb8);
                }
                lVar5 = *(long *)(lVar8 + 0x28);
                if (lVar5 == 0) goto LAB_058d6058;
                if (*(uint *)(lVar5 + 0x18) <= param_1) goto LAB_058d605c;
                auVar16 = FUN_058c51d4(lVar5 + lVar15 * 4 + 0x20);
                local_98 = 0;
                uStack_90 = 0;
                local_88 = 0;
                FUN_03dc64dc(&local_98,auVar16._0_8_,auVar16._8_8_,
                             *(undefined8 *)System_Xml_XmlDictionary_TypeInfo);
                local_70 = local_88;
                uStack_78 = uStack_90;
                local_80 = local_98;
                lVar5 = *plVar12;
                uVar14 = (ulong)*(ushort *)(lVar5 + 0x12e);
                if (uVar14 != 0) {
                  piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) ==
                        *(long *)
                         System_Linq_Expressions_Interpreter_ModuloInstruction_ModuloInt64_TypeInfo)
                    {
                      puVar6 = (undefined8 *)(lVar5 + (long)(*piVar11 + 3) * 0x10 + 0x138);
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
                (*(code *)*puVar6)(plVar12,&local_80,puVar6[1]);
                if ((param_4 & 1) == 0) {
                  lVar5 = *(long *)puVar3;
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                    lVar5 = *(long *)puVar3;
                  }
                  lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
                  if (lVar8 == 0) goto LAB_058d6058;
                  if (*(uint *)(lVar8 + 0x18) <= param_1) goto LAB_058d605c;
                  if (*(char *)(lVar8 + lVar15 * 0xb8 + 0x58) != '\0') {
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    Unity_Mathematics_uint2__op_Explicit(param_1,0);
                  }
                }
              }
LAB_058d5ff8:
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              FUN_058d65a0();
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar7 = 4;
              if ((param_3 & 1) == 0) {
                uVar7 = 2;
              }
              FUN_058d3a78(param_1,uVar7,param_2);
              return;
            }
          }
        }
        else if (param_1 < *(uint *)(lVar8 + 0x18)) {
          *(int *)(lVar8 + lVar15 * 0xb8 + 0xcc) = *(int *)(lVar5 + 0x20) - iVar1;
          FUN_032da580(lVar5 + 0x40,lVar5 + 0x20,param_2,10,
                       *(undefined8 *)
                        UnityEngine_UIElements_InlineStyleAccessPropertyBag_PositionProperty_TypeInfo
                      );
          lVar5 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30);
          if (lVar5 == 0) goto LAB_058d6058;
          if (param_1 < *(uint *)(lVar5 + 0x18)) {
            lVar5 = lVar5 + lVar15 * 0xb8;
            *(int *)(lVar5 + 200) = *(int *)(lVar5 + 200) + 1;
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


