/*
FUNCTION_NAME: FUN_0601e030
ENTRY_POINT: 0601e030
PROGRAM: hellodot-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_13;telemetry_or_network_hits_6
*/


void FUN_0601e030(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  int iVar16;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((DAT_06a825f4 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8c48);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Data_ParentForeignKeyConstraintEnumerator_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(UnityEngine_MonoBehaviour_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8918);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Peridot_Telemetry_PeridotWhTelemetryReflection_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(UnityEngine_Android_Permission_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c95e8);
    AkMIDIEventCallbackInfo__get_byProgramNum(UnityEngine_Android_PermissionCallbacks_TypeInfo);
    DAT_06a825f4 = 1;
  }
  puVar3 = System_Data_ParentForeignKeyConstraintEnumerator_TypeInfo;
  puVar2 = System_ModifierSpec_TypeInfo;
  puVar1 = UnityEngine_XR_Interaction_Toolkit_AR_MockTouch_TypeInfo;
  local_e4 = 0;
  if (0 < *(int *)(param_1 + 0xe8)) {
    iVar16 = 0;
    do {
      if ((*(long *)(param_1 + 0xe0) == 0) ||
         (lVar13 = FUN_03968108(*(long *)(param_1 + 0xe0),iVar16,*(undefined8 *)puVar3), lVar13 == 0
         )) {
LAB_0601e470:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      iVar11 = FUN_060bac0c(lVar13,0);
      if (0 < iVar11) {
        iVar11 = *(int *)(lVar13 + 0x44);
        iVar12 = FUN_060bac0c(lVar13,0);
        if (iVar11 < iVar12) {
          lVar14 = FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8918,5);
          if (lVar14 == 0) goto LAB_0601e470;
          if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0601e46c;
          *(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)UnityEngine_Android_Permission_TypeInfo;
          local_e4 = FUN_060bac0c(lVar13,0);
          uVar15 = FUN_04f2e660(&local_e4,0);
          if ((*(uint *)(lVar14 + 0x18) < 2) ||
             (*(undefined8 *)(lVar14 + 0x28) = uVar15, *(uint *)(lVar14 + 0x18) == 2))
          goto LAB_0601e46c;
          *(undefined8 *)(lVar14 + 0x30) =
               *(undefined8 *)Niantic_Peridot_Telemetry_PeridotWhTelemetryReflection_TypeInfo;
          uVar15 = FUN_04f2e660((int *)(lVar13 + 0x44),0);
          if ((*(uint *)(lVar14 + 0x18) < 4) ||
             (*(undefined8 *)(lVar14 + 0x38) = uVar15, *(uint *)(lVar14 + 0x18) == 4))
          goto LAB_0601e46c;
          *(undefined8 *)(lVar14 + 0x40) = *(undefined8 *)PTR_DAT_065c95e8;
          uVar15 = FUN_04db97ac(lVar14,0);
          if (*(int *)(*(long *)PTR_DAT_065c8c48 + 0xe0) == 0) {
            thunk_FUN_02cd038c(*(long *)PTR_DAT_065c8c48);
          }
          FUN_05eb30e4(uVar15,0);
          FUN_03c70914(&local_a0,lVar13 + 0x10,0,*(undefined8 *)UnityEngine_MonoBehaviour_TypeInfo);
          uStack_d8 = uStack_98;
          local_e0 = local_a0;
          uStack_c8 = uStack_88;
          uStack_d0 = uStack_90;
          uStack_b8 = uStack_78;
          local_c0 = local_80;
          uStack_a8 = uStack_68;
          uStack_b0 = uStack_70;
          while (iVar11 = *(int *)(lVar13 + 0x44), iVar12 = FUN_060bac0c(lVar13,0),
                uVar10 = uStack_a8, uVar9 = uStack_b0, uVar8 = uStack_b8, uVar7 = local_c0,
                uVar6 = uStack_c8, uVar5 = uStack_d0, uVar4 = uStack_d8, uVar15 = local_e0,
                iVar11 < iVar12) {
            if (DAT_06a8255a == '\0') {
              AkMIDIEventCallbackInfo__get_byProgramNum(puVar1);
              DAT_06a8255a = '\x01';
            }
            iVar11 = *(int *)(lVar13 + 0x44);
            *(int *)(lVar13 + 0x44) = iVar11 + 1;
            uStack_98 = uVar4;
            local_a0 = uVar15;
            uStack_88 = uVar6;
            uStack_90 = uVar5;
            uStack_78 = uVar8;
            local_80 = uVar7;
            uStack_68 = uVar10;
            uStack_70 = uVar9;
            FUN_03c70988(lVar13 + 0x10,iVar11,&local_a0,*(undefined8 *)puVar1);
          }
        }
      }
      iVar11 = FUN_060bac54(lVar13,0);
      if (0 < iVar11) {
        iVar11 = *(int *)(lVar13 + 0x40);
        iVar12 = FUN_060bac54(lVar13,0);
        if (iVar11 < iVar12) {
          lVar14 = FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8918,5);
          if (lVar14 == 0) goto LAB_0601e470;
          if (*(int *)(lVar14 + 0x18) == 0) {
LAB_0601e46c:
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c84();
          }
          *(undefined8 *)(lVar14 + 0x20) =
               *(undefined8 *)UnityEngine_Android_PermissionCallbacks_TypeInfo;
          local_e4 = FUN_060bac54(lVar13,0);
          uVar15 = FUN_04f2e660(&local_e4,0);
          if ((*(uint *)(lVar14 + 0x18) < 2) ||
             (*(undefined8 *)(lVar14 + 0x28) = uVar15, *(uint *)(lVar14 + 0x18) == 2))
          goto LAB_0601e46c;
          *(undefined8 *)(lVar14 + 0x30) =
               *(undefined8 *)Niantic_Peridot_Telemetry_PeridotWhTelemetryReflection_TypeInfo;
          uVar15 = FUN_04f2e660((int *)(lVar13 + 0x40),0);
          if ((*(uint *)(lVar14 + 0x18) < 4) ||
             (*(undefined8 *)(lVar14 + 0x38) = uVar15, *(uint *)(lVar14 + 0x18) == 4))
          goto LAB_0601e46c;
          *(undefined8 *)(lVar14 + 0x40) = *(undefined8 *)PTR_DAT_065c95e8;
          uVar15 = FUN_04db97ac(lVar14,0);
          if (*(int *)(*(long *)PTR_DAT_065c8c48 + 0xe0) == 0) {
            thunk_FUN_02cd038c(*(long *)PTR_DAT_065c8c48);
          }
          FUN_05eb30e4(uVar15,0);
          iVar11 = *(int *)(lVar13 + 0x40);
          iVar12 = FUN_060bac54(lVar13,0);
          if (iVar11 < iVar12) {
            do {
              if (DAT_06a8255b == '\0') {
                AkMIDIEventCallbackInfo__get_byProgramNum(puVar2);
                DAT_06a8255b = '\x01';
              }
              iVar11 = *(int *)(lVar13 + 0x40);
              *(int *)(lVar13 + 0x40) = iVar11 + 1;
              FUN_03c6e974(lVar13 + 0x20,iVar11,0,*(undefined8 *)puVar2);
              iVar11 = *(int *)(lVar13 + 0x40);
              iVar12 = FUN_060bac54(lVar13,0);
            } while (iVar11 < iVar12);
          }
        }
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < *(int *)(param_1 + 0xe8));
  }
  return;
}


