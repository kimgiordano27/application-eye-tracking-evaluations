/*
FUNCTION_NAME: OVRPlugin.OVRP_1_68_0$$.cctor
ENTRY_POINT: 090d24b0
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_68_0___cctor(long param_1,long *param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined8 local_9c;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  
  if ((DAT_0b33056a & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac75880);
    FUN_04947ee4(PTR_DAT_0ac79420);
    FUN_04947ee4(PTR_DAT_0ac79410);
    DAT_0b33056a = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  local_48 = 0;
  local_50 = 0;
  uStack_4c = 0;
  if (param_2 != (long *)0x0) {
    lVar5 = *param_2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0ac79420) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_090d256c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_04980e68(param_2,*(long *)PTR_DAT_0ac79420,0);
LAB_090d256c:
    iVar3 = (*(code *)*puVar4)(param_2,puVar4[1]);
    puVar2 = PTR_DAT_0ac79410;
    puVar1 = PTR_DAT_0ac75880;
    if (iVar3 == 0x1a) {
      iVar3 = 0;
      do {
        lVar5 = *param_2;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_090d25e4;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_04980e68(param_2,*(long *)puVar2,0);
LAB_090d25e4:
        (*(code *)*puVar4)(&local_60,param_2,iVar3,puVar4[1]);
        if ((param_3 & 1) != 0) {
          uStack_6c = CONCAT44(local_48,uStack_4c);
          uStack_78 = uStack_58;
          local_80 = local_60;
          uStack_74 = uStack_54;
          uStack_70 = local_50;
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          uStack_b8 = uStack_78;
          local_c0 = local_80;
          uStack_ac = uStack_6c;
          uStack_b4 = uStack_74;
          uStack_b0 = uStack_70;
          FUN_090ce630(&local_9c,&local_c0,0);
          uStack_58 = uStack_94;
          local_60 = local_9c;
          uStack_4c = (undefined4)uStack_88;
          local_48 = (undefined4)((ulong)uStack_88 >> 0x20);
          uStack_54 = uStack_90;
          local_50 = uStack_8c;
        }
        if (param_1 == 0) goto LAB_090d2694;
        uStack_cc = CONCAT44(local_48,uStack_4c);
        uStack_d8 = uStack_58;
        local_e0 = local_60;
        uStack_d4 = uStack_54;
        uStack_d0 = local_50;
        FUN_090d1e28(param_1,iVar3,&local_e0);
        iVar3 = iVar3 + 1;
      } while (iVar3 != 0x1a);
    }
    return;
  }
LAB_090d2694:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


