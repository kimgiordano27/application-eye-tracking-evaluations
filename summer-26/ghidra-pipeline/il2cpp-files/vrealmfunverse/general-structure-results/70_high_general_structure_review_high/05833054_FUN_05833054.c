/*
FUNCTION_NAME: FUN_05833054
ENTRY_POINT: 05833054
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_4;telemetry_or_network_hits_4
*/


void FUN_05833054(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if ((DAT_066d2d46 & 1) == 0) {
    FUN_02b3c81c(
                Method_System_Collections_Generic_List<RenderTreeManager_ElementInsertionData>_get_Count__
                );
    FUN_02b3c81c(PTR_DAT_063196e0);
    FUN_02b3c81c(PTR_DAT_06312520);
    FUN_02b3c81c(Method_System_Collections_Generic_List<RegexCharClass_SingleRange>_set_Item__);
    FUN_02b3c81c(Method_Oculus_Platform_Message<NetSyncSetSessionPropertyResult>__ctor__);
    FUN_02b3c81c(Method_Oculus_Platform_Message<NetSyncSetSessionPropertyResult>_get_Data__);
    FUN_02b3c81c(Method_Oculus_Platform_Message<NetSyncVoipAttenuationValueList>__ctor__);
    FUN_02b3c81c(Method_Oculus_Platform_Message<NetSyncVoipAttenuationValueList>_get_Data__);
    FUN_02b3c81c(Method_Oculus_Platform_Message<OrgScopedID>__ctor__);
    FUN_02b3c81c(Method_Oculus_Platform_Message<OrgScopedID>_get_Data__);
    DAT_066d2d46 = 1;
  }
  uVar5 = FUN_05c97594(0);
  puVar3 = 
  Method_System_Collections_Generic_List<RenderTreeManager_ElementInsertionData>_get_Count__;
  puVar1 = PTR_DAT_063196e0;
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_063196e0 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    puVar2 = Method_System_Collections_Generic_List<RegexCharClass_SingleRange>_set_Item__;
    lVar6 = FUN_031da4f0(*(undefined8 *)puVar3);
    if (lVar6 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(lVar6 + 0x20);
    }
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar6 = *(long *)puVar2;
    }
    puVar7 = (undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x38);
    *puVar7 = uVar9;
    thunk_FUN_02bb0e9c(puVar7,uVar9);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar6 = FUN_031da4f0(*(undefined8 *)puVar3);
    puVar1 = PTR_DAT_06312520;
    if (lVar6 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(lVar6 + 0x28);
    }
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar6 = *(long *)puVar2;
    }
    puVar7 = (undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x48);
    *puVar7 = uVar9;
    thunk_FUN_02bb0e9c(puVar7,uVar9);
    uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar5 = FUN_05c8c45c(uVar9,0,0);
    if ((uVar5 & 1) != 0) {
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar6 = *(long *)puVar2;
      }
      uVar9 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x38);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)puVar1);
      }
      uVar5 = FUN_05c921ac(uVar9,0);
      if ((uVar5 & 1) == 0) {
        uVar4 = 0xffffffff;
      }
      else {
        lVar6 = *(long *)puVar2;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar6 = *(long *)puVar2;
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x38);
        if (lVar6 == 0) goto LAB_058334bc;
        uVar4 = FUN_05c958b0(lVar6,*(undefined8 *)
                                    Method_Oculus_Platform_Message<OrgScopedID>_get_Data__,0);
      }
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar6 = *(long *)puVar2;
      }
      puVar3 = Method_Oculus_Platform_Message<NetSyncSetSessionPropertyResult>__ctor__;
      lVar6 = *(long *)(lVar6 + 0xb8);
      local_48 = 0;
      uStack_40 = 0;
      *(undefined4 *)(lVar6 + 0x40) = uVar4;
      local_38 = 0;
      FUN_05ccfebc(&local_48,*(undefined8 *)(lVar6 + 0x38),*(undefined8 *)puVar3,0);
      lVar6 = *(long *)puVar2;
      lVar8 = *(long *)(lVar6 + 0xb8);
      *(undefined8 *)(lVar8 + 0x60) = uStack_40;
      *(undefined8 *)(lVar8 + 0x58) = local_48;
      *(undefined8 *)(lVar8 + 0x68) = local_38;
      thunk_FUN_02bb0e9c(*(long *)(lVar6 + 0xb8) + 0x60,0);
      local_60 = 0;
      uStack_58 = 0;
      local_50 = 0;
      FUN_05ccfebc(&local_60,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38),
                   *(undefined8 *)
                    Method_Oculus_Platform_Message<NetSyncVoipAttenuationValueList>__ctor__,0);
      lVar6 = *(long *)puVar2;
      lVar8 = *(long *)(lVar6 + 0xb8);
      *(undefined8 *)(lVar8 + 0x78) = uStack_58;
      *(undefined8 *)(lVar8 + 0x70) = local_60;
      *(undefined8 *)(lVar8 + 0x80) = local_50;
      thunk_FUN_02bb0e9c(*(long *)(lVar6 + 0xb8) + 0x78,0);
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      FUN_05ccfebc(&local_78,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38),
                   *(undefined8 *)
                    Method_Oculus_Platform_Message<NetSyncVoipAttenuationValueList>_get_Data__,0);
      lVar6 = *(long *)puVar2;
      lVar8 = *(long *)(lVar6 + 0xb8);
      *(undefined8 *)(lVar8 + 0x90) = uStack_70;
      *(undefined8 *)(lVar8 + 0x88) = local_78;
      *(undefined8 *)(lVar8 + 0x98) = local_68;
      thunk_FUN_02bb0e9c(*(long *)(lVar6 + 0xb8) + 0x90,0);
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      FUN_05ccfebc(&local_90,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38),
                   *(undefined8 *)
                    Method_Oculus_Platform_Message<NetSyncSetSessionPropertyResult>_get_Data__,0);
      lVar6 = *(long *)puVar2;
      lVar8 = *(long *)(lVar6 + 0xb8);
      *(undefined8 *)(lVar8 + 0xa8) = uStack_88;
      *(undefined8 *)(lVar8 + 0xa0) = local_90;
      *(undefined8 *)(lVar8 + 0xb0) = local_80;
      thunk_FUN_02bb0e9c(*(long *)(lVar6 + 0xb8) + 0xa8,0);
    }
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar6 = *(long *)puVar2;
    }
    uVar9 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x48);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)puVar1);
    }
    uVar5 = FUN_05c8c45c(uVar9,0,0);
    if ((uVar5 & 1) != 0) {
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar6 = *(long *)puVar2;
      }
      uVar9 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x48);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)puVar1);
      }
      uVar5 = FUN_05c921ac(uVar9,0);
      if ((uVar5 & 1) == 0) {
        uVar4 = 0xffffffff;
      }
      else {
        lVar6 = *(long *)puVar2;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar6 = *(long *)puVar2;
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x48);
        if (lVar6 == 0) {
LAB_058334bc:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        uVar4 = FUN_05c958b0(lVar6,*(undefined8 *)
                                    Method_Oculus_Platform_Message<OrgScopedID>__ctor__,0);
      }
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar6 = *(long *)puVar2;
      }
      *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x50) = uVar4;
    }
  }
  return;
}


