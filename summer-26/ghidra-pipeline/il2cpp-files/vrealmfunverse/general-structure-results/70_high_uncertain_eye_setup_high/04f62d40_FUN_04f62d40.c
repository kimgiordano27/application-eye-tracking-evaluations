/*
FUNCTION_NAME: FUN_04f62d40
ENTRY_POINT: 04f62d40
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_6;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_04f62d40(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_c4;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_94;
  undefined8 local_8c;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  
  if ((DAT_066c9b05 & 1) == 0) {
    FUN_02b3c81c(System_Collections_Generic_Dictionary<uint,_GlyphPairAdjustmentRecord>_TypeInfo);
    FUN_02b3c81c(PTR_DAT_063185a8);
    DAT_066c9b05 = 1;
  }
  puVar2 = System_Collections_Generic_Dictionary<uint,_GlyphPairAdjustmentRecord>_TypeInfo;
  local_50 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  local_38 = 0;
  local_40 = 0;
  uStack_3c = 0;
  local_70 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  local_58 = 0;
  local_60 = 0;
  uStack_5c = 0;
  if (param_2 != (long *)0x0) {
    lVar4 = *param_2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)System_Collections_Generic_Dictionary<uint,_GlyphPairAdjustmentRecord>_TypeInfo
           ) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto LAB_04f62dfc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_02b7654c(param_2,*(long *)
                                   System_Collections_Generic_Dictionary<uint,_GlyphPairAdjustmentRecord>_TypeInfo
                          ,4);
LAB_04f62dfc:
    lVar4 = (*(code *)*puVar3)(param_2,puVar3[1]);
    puVar1 = PTR_DAT_063185a8;
    if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x18), lVar4 != 0)) {
      if ((*(char *)(lVar4 + 0x10) == '\0') || (*(long *)(lVar4 + 0x18) == 0)) {
        if (*(int *)(*(long *)PTR_DAT_063185a8 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_05c9a2f0(&local_8c,0);
        lVar4 = *param_2;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        uStack_68 = uStack_84;
        local_70 = local_8c;
        uStack_5c = (undefined4)uStack_78;
        local_58 = (undefined4)((ulong)uStack_78 >> 0x20);
        uStack_64 = uStack_80;
        local_60 = uStack_7c;
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
              puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
              goto LAB_04f62ee8;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_02b7654c(param_2,*(long *)puVar2,3);
LAB_04f62ee8:
        (*(code *)*puVar3)(&local_a8,param_2,puVar3[1]);
        uStack_48 = uStack_a0;
        local_50 = local_a8;
        uStack_3c = (undefined4)uStack_94;
        local_38 = (undefined4)((ulong)uStack_94 >> 0x20);
        uStack_44 = uStack_9c;
        local_40 = uStack_98;
        FUN_04f0d104(&local_50,&local_70,0);
        lVar4 = *param_2;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
              puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
              goto LAB_04f62f68;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_02b7654c(param_2,*(long *)puVar2,4);
LAB_04f62f68:
        lVar4 = (*(code *)*puVar3)(param_2,puVar3[1]);
        if (lVar4 == 0) goto OVRPlugin__get_systemDisplayFrequenciesAvailable;
        FUN_04f61ad0(&local_c4,lVar4,&local_70);
        uVar7 = CONCAT44(uStack_b8,uStack_bc);
        uVar8 = CONCAT44(uStack_b4,uStack_b8);
        local_a8 = local_c4;
        uStack_94 = uStack_b0;
      }
      else {
        lVar4 = *param_2;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
              puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
              goto LAB_04f62fa0;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_02b7654c(param_2,*(long *)puVar2,4);
LAB_04f62fa0:
        lVar4 = (*(code *)*puVar3)(param_2,puVar3[1]);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)puVar1);
        }
        FUN_05c9a2f0(&local_8c,0);
        uStack_48 = uStack_84;
        local_50 = local_8c;
        uStack_3c = (undefined4)uStack_78;
        local_38 = (undefined4)((ulong)uStack_78 >> 0x20);
        uStack_44 = uStack_80;
        local_40 = uStack_7c;
        if (lVar4 == 0) goto OVRPlugin__get_systemDisplayFrequenciesAvailable;
        FUN_04f61ad0(&local_a8,lVar4,&local_50);
        uVar7 = CONCAT44(uStack_9c,uStack_a0);
        uVar8 = CONCAT44(uStack_98,uStack_9c);
      }
      param_1[1] = uVar7;
      *param_1 = local_a8;
      *(undefined8 *)((long)param_1 + 0x14) = uStack_94;
      *(undefined8 *)((long)param_1 + 0xc) = uVar8;
      return;
    }
  }
OVRPlugin__get_systemDisplayFrequenciesAvailable:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


