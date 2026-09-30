/*
FUNCTION_NAME: FUN_04e929c4
ENTRY_POINT: 04e929c4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_3
*/


void FUN_04e929c4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  int *piVar11;
  long lVar12;
  undefined8 uVar13;
  undefined4 local_44;
  
  if ((DAT_066c92c0 & 1) == 0) {
    FUN_02b3c81c(Newtonsoft_Json_JsonTextWriter_var);
    FUN_02b3c81c(Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_var);
    FUN_02b3c81c(PTR_DAT_06322de0);
    FUN_02b3c81c(System_Data_SqlTypes_INullable_var);
    FUN_02b3c81c(System_Reflection_InterfaceMapping_var);
    FUN_02b3c81c(UnityEngine_InputSystem_Controls_KeyControl_var);
    FUN_02b3c81c(UnityEngine_KeyCode_var);
    DAT_066c92c0 = 1;
  }
  local_44 = 0;
  FUN_04e8ece0(param_1);
  puVar4 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_var;
  if (*(int *)(param_1 + 0x78) == 1) {
    lVar7 = *(long *)Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_var;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar7 = *(long *)puVar4;
    }
    uVar8 = FUN_04e8e8b0(param_1,**(undefined8 **)(lVar7 + 0xb8));
    puVar1 = UnityEngine_KeyCode_var;
    if ((uVar8 & 1) != 0) {
      lVar7 = *(long *)UnityEngine_KeyCode_var;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar7 = *(long *)puVar1;
      }
      puVar10 = *(undefined8 **)(lVar7 + 0xb8);
      lVar12 = puVar10[2];
      if (lVar12 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          puVar10 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
        }
        uVar13 = *puVar10;
        lVar12 = thunk_FUN_02b79644(*(undefined8 *)Newtonsoft_Json_JsonTextWriter_var);
        FUN_03fbf2e8(lVar12,uVar13,*(undefined8 *)UnityEngine_InputSystem_Controls_KeyControl_var,0)
        ;
        plVar9 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
        *plVar9 = lVar12;
        thunk_FUN_02bb0e9c(plVar9,lVar12);
      }
      uVar8 = FUN_04e92010(param_1,lVar12);
      if ((uVar8 & 1) != 0) {
        FUN_04e8dc2c(param_1,1);
      }
    }
    if (*(int *)(param_1 + 0x78) == 1) {
      lVar7 = *(long *)puVar4;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar7 = *(long *)puVar4;
      }
      uVar8 = FUN_04e8e8b0(param_1,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8));
      puVar3 = System_Reflection_InterfaceMapping_var;
      puVar2 = System_Data_SqlTypes_INullable_var;
      puVar1 = PTR_DAT_06322de0;
      if ((uVar8 & 1) != 0) {
        while( true ) {
          lVar7 = *(long *)puVar4;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar7 = *(long *)puVar4;
          }
          uVar8 = FUN_04e8e248(param_1,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8),&local_44,
                               0xffffffff,0xffffffff);
          uVar5 = local_44;
          if ((uVar8 & 1) == 0) {
            return;
          }
          plVar9 = *(long **)(param_1 + 0x28);
          if (plVar9 == (long *)0x0) break;
          lVar7 = *plVar9;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
                puVar10 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_04e92c00;
              }
              uVar8 = uVar8 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)FUN_02b7654c(plVar9,*(long *)puVar3,0);
LAB_04e92c00:
          plVar9 = (long *)(*(code *)*puVar10)(plVar9,uVar5,puVar10[1]);
          if (plVar9 == (long *)0x0) break;
          lVar12 = *plVar9;
          lVar7 = *(long *)puVar2;
          uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar8 != 0) {
            piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar7) {
                puVar10 = (undefined8 *)(lVar12 + (long)(*piVar11 + 7) * 0x10 + 0x138);
                goto LAB_04e92c68;
              }
              uVar8 = uVar8 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)FUN_02b7654c(plVar9,lVar7,7);
LAB_04e92c68:
          (*(code *)*puVar10)(plVar9,puVar10[1]);
          lVar7 = *plVar9;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                puVar10 = (undefined8 *)(lVar7 + (long)(*piVar11 + 6) * 0x10 + 0x138);
                goto LAB_04e92cc4;
              }
              uVar8 = uVar8 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)FUN_02b7654c(plVar9,*(long *)puVar1,6);
LAB_04e92cc4:
          iVar6 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          if (iVar6 != 1) {
            lVar12 = *plVar9;
            lVar7 = *(long *)puVar2;
            uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar8 != 0) {
              piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar7) {
                  puVar10 = (undefined8 *)(lVar12 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                  goto LAB_04e92d28;
                }
                uVar8 = uVar8 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar8 != 0);
            }
            puVar10 = (undefined8 *)FUN_02b7654c(plVar9,lVar7,1);
LAB_04e92d28:
            (*(code *)*puVar10)(plVar9,puVar10[1]);
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
    }
  }
  return;
}


