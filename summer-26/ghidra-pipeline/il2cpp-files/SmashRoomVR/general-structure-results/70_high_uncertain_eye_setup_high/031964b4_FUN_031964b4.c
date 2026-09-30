/*
FUNCTION_NAME: FUN_031964b4
ENTRY_POINT: 031964b4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_031964b4(long param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  float local_48;
  undefined8 local_40;
  float local_38;
  long local_28;
  
  if ((DAT_03ff2349 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_13316);
    thunk_FUN_01ad9084(StringLiteral_13733);
    thunk_FUN_01ad9084(Method_UnityEngine_UI_ToggleGroup_<>c_<ActiveToggles>b__14_0__);
    DAT_03ff2349 = 1;
  }
  puVar1 = StringLiteral_13316;
  local_28 = 0;
  local_38 = 0.0;
  local_40 = 0;
  local_48 = 0.0;
  local_50 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_78 = 0;
  local_80 = 0;
  if (param_2 != (long *)0x0) {
    lVar4 = *param_2;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)StringLiteral_13316) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 0xd) * 0x10 + 0x138);
          goto LAB_0319658c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ae9f78(param_2,*(long *)StringLiteral_13316,0xd);
LAB_0319658c:
    (*(code *)*puVar3)(param_2,&local_28,puVar3[1]);
    if (local_28 != 0) {
      iVar2 = OVRPlugin_OVRP_1_76_0___cctor(local_28,0);
      if (0 < iVar2) {
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_031967f4;
        FUN_031956d4(*(long *)(param_1 + 0x18),local_28);
        if (DAT_03fed260 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed260 = '\x01';
        }
        lVar4 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
        fVar10 = *(float *)(lVar4 + 0x4c);
        local_50 = *(undefined8 *)(lVar4 + 0x48);
        local_40 = *(undefined8 *)(lVar4 + 0x48);
        fVar11 = *(float *)(lVar4 + 0x50);
        local_48 = fVar11;
        local_38 = fVar11;
        if (*(long *)(param_1 + 0x20) != 0) {
          lVar5 = *param_2;
          lVar4 = *(long *)puVar1;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == lVar4) {
                puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 9) * 0x10 + 0x138);
                goto LAB_03196664;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_01ae9f78(param_2,lVar4,9);
LAB_03196664:
          uVar6 = (*(code *)*puVar3)(param_2,0,&local_70,puVar3[1]);
          if ((uVar6 & 1) != 0) {
            plVar8 = *(long **)(param_1 + 0x20);
            if (plVar8 == (long *)0x0) goto LAB_031967f4;
            lVar4 = *plVar8;
            uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *(long *)StringLiteral_13733) {
                  puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_031966d8;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar3 = (undefined8 *)FUN_01ae9f78(plVar8,*(long *)StringLiteral_13733,0);
LAB_031966d8:
            uVar6 = (*(code *)*puVar3)(plVar8,&local_90,puVar3[1]);
            if ((uVar6 & 1) != 0) {
              if (*(int *)(*(long *)Method_UnityEngine_UI_ToggleGroup_<>c_<ActiveToggles>b__14_0__ +
                          0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              fVar9 = (float)FUN_039274f8(&local_70,0);
              fVar10 = -fVar10;
              fVar11 = -fVar11;
              local_40 = CONCAT44(fVar10,-fVar9);
              local_38 = fVar11;
              fVar9 = (float)FUN_039274f8(&local_90,0);
              local_48 = -fVar11;
              local_50 = CONCAT44(-fVar10,-fVar9);
              lVar5 = *param_2;
              lVar4 = *(long *)puVar1;
              uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == lVar4) {
                    puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                    goto LAB_03196790;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 != 0);
              }
              puVar3 = (undefined8 *)FUN_01ae9f78(param_2,lVar4,0);
LAB_03196790:
              iVar2 = (*(code *)*puVar3)(param_2,puVar3[1]);
              if (iVar2 == 1) {
                local_40 = CONCAT44(-(float)((ulong)local_40 >> 0x20),-(float)local_40);
                local_38 = -local_38;
              }
            }
          }
        }
        uVar6 = (ulong)*(uint *)(param_1 + 0x10);
        if (*(uint *)(param_1 + 0x10) == 0xffffffff) {
          uVar6 = FUN_03195908();
          *(int *)(param_1 + 0x10) = (int)uVar6;
        }
        FUN_03195a34(uVar6,*(undefined8 *)(param_1 + 0x18),&local_40,&local_50);
      }
      return;
    }
  }
LAB_031967f4:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


