/*
FUNCTION_NAME: FUN_07a5ba94
ENTRY_POINT: 07a5ba94
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_07a5ba94(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined8 local_6c;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  long local_28;
  
  if ((DAT_098954e9 & 1) == 0) {
    FUN_04077588(PTR_DAT_092f0a98);
    FUN_04077588(PTR_DAT_092ecf10);
    DAT_098954e9 = 1;
  }
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  local_50 = 0;
  local_38 = 0;
  local_28 = param_1;
  thunk_FUN_040ec700(&local_28,param_1);
  if (local_28 != 0) {
    lVar3 = FUN_04077674(*(undefined8 *)PTR_DAT_092f0a98,*(undefined4 *)(local_28 + 0x18));
    puVar1 = PTR_DAT_092ecf10;
    if (local_28 != 0) {
      uVar5 = 0;
      puVar6 = (undefined4 *)(lVar3 + 0x20);
      do {
        if ((long)(int)*(uint *)(local_28 + 0x18) <= (long)uVar5) {
          lVar4 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
          FUN_07a5bd10();
          if (lVar4 != 0) {
            *(long *)(lVar4 + 0x10) = lVar3;
            thunk_FUN_040ec700((long *)(lVar4 + 0x10),lVar3);
            return lVar4;
          }
          break;
        }
        if (*(uint *)(local_28 + 0x18) <= uVar5) {
OVRPlugin_Vector4s__ToString:
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        FUN_079cf630(&local_6c,*(undefined8 *)(local_28 + uVar5 * 8 + 0x20),1,0);
        uStack_48 = uStack_64;
        local_50 = local_6c;
        uStack_3c = (undefined4)uStack_58;
        local_38 = (undefined4)((ulong)uStack_58 >> 0x20);
        uStack_44 = uStack_60;
        uStack_40 = uStack_5c;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar2 = FUN_07a5bc00(uVar5 & 0xffffffff,&local_28);
        if (lVar3 == 0) break;
        if (*(uint *)(lVar3 + 0x18) <= uVar5) goto OVRPlugin_Vector4s__ToString;
        *puVar6 = uVar2;
        puVar6[8] = 0;
        uVar5 = uVar5 + 1;
        *(ulong *)(puVar6 + 3) = CONCAT44(uStack_44,uStack_48);
        *(undefined8 *)(puVar6 + 1) = local_50;
        *(ulong *)(puVar6 + 6) = CONCAT44(local_38,uStack_3c);
        *(ulong *)(puVar6 + 4) = CONCAT44(uStack_40,uStack_44);
        puVar6 = puVar6 + 9;
      } while (local_28 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


