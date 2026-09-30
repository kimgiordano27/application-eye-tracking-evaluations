/*
FUNCTION_NAME: FUN_035714e4
ENTRY_POINT: 035714e4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_4
*/


long FUN_035714e4(undefined4 param_1,long param_2,long param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6,undefined1 *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  undefined4 local_6c;
  long local_68;
  
  if ((DAT_0412dfe2 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc8e90);
    FUN_01ab69ac(PTR_DAT_03ccbbf8);
    FUN_01ab69ac(PTR_DAT_03cc8bb0);
    FUN_01ab69ac(PTR_DAT_03cc8ba8);
    FUN_01ab69ac(PTR_DAT_03cc45a0);
    FUN_01ab69ac(PTR_DAT_03cc45a8);
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_Size3f_TypeInfo);
    DAT_0412dfe2 = 1;
  }
  *param_7 = 0;
  puVar1 = OVRPlugin_Size3f_TypeInfo;
  if ((param_3 != 0) && (iVar10 = *(int *)(param_3 + 0x18), iVar10 != 0)) {
    if ((param_4 & 1) != 0) {
      lVar4 = *(long *)OVRPlugin_Size3f_TypeInfo;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar4 = *(long *)puVar1;
      }
      lVar8 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
      if (lVar8 == 0) {
        uVar5 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc8ba8);
        FUN_021e44d8(uVar5,*(undefined8 *)PTR_DAT_03cc8bb0);
        lVar4 = *(long *)puVar1;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar4 = *(long *)puVar1;
        }
        puVar6 = (undefined8 *)(*(long *)(lVar4 + 0xb8) + 8);
        *puVar6 = uVar5;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar6,uVar5);
      }
      else {
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar8 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
          if (lVar8 == 0) {
LAB_0357173c:
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
        }
        FUN_021e4d64(lVar8,*(undefined8 *)PTR_DAT_03ccbbf8);
      }
      iVar10 = *(int *)(param_3 + 0x18);
    }
    puVar2 = PTR_DAT_03cc45a8;
    puVar1 = PTR_DAT_03cbdf88;
    if (0 < iVar10) {
      iVar9 = 0;
      do {
        FUN_02215a88(param_3,iVar9,&local_68,*(undefined8 *)puVar2);
        lVar4 = local_68;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar7 = FUN_036d35a8(lVar4,0,0);
        if ((uVar7 & 1) == 0) {
          if ((param_2 == 0) || (lVar4 == 0)) goto LAB_0357173c;
          lVar8 = *(long *)(param_2 + 0x1c0);
          uVar3 = FUN_0355ea04(lVar4,0);
          if (lVar8 == 0) goto LAB_0357173c;
          local_6c = uVar3;
          FUN_021e5f08(lVar8,&local_6c,*(undefined8 *)PTR_DAT_03cc8e90);
          if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          lVar4 = FUN_03571120(param_1,lVar4,param_4 & 1,param_5,param_6,param_7);
          if (lVar4 != 0) {
            return lVar4;
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar10 != iVar9);
    }
  }
  return 0;
}


