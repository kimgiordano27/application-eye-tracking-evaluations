/*
FUNCTION_NAME: FUN_02994b04
ENTRY_POINT: 02994b04
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02994d98) */
/* WARNING: Removing unreachable block (ram,0x02994da4) */

long FUN_02994b04(long param_1,int param_2,uint param_3,byte param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 local_a0 [4];
  uint local_9c;
  long local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  int local_58;
  char local_54 [4];
  
  if ((DAT_04127ce5 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d079f0);
    FUN_01ab69ac(PTR_DAT_03d07bf8);
    FUN_01ab69ac(PTR_DAT_03d07c00);
    FUN_01ab69ac(PTR_DAT_03d07c08);
    FUN_01ab69ac(PTR_DAT_03cbeda8);
    FUN_01ab69ac(PTR_DAT_03d07c10);
    FUN_01ab69ac(PTR_DAT_03d07c18);
    FUN_01ab69ac(PTR_DAT_03d07c20);
    DAT_04127ce5 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uVar9 = *(undefined8 *)(param_1 + 0x128);
  local_54[0] = '\0';
  FUN_027e0bd8(uVar9,local_54,0);
  if (*(long *)(param_1 + 0x128) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  Animancer_FadeGroup__get_TargetWeight
            (*(long *)(param_1 + 0x128),&local_98,*(undefined8 *)PTR_DAT_03d07c10);
  puVar4 = PTR_DAT_03d07c18;
  puVar3 = PTR_DAT_03d07c08;
  puVar2 = PTR_DAT_03d07c00;
  puVar1 = PTR_DAT_03d07bf8;
  uStack_78 = uStack_90;
  local_80 = local_98;
  local_70 = local_88;
  do {
    uVar5 = FUN_021b51c8(&local_80,*(undefined8 *)puVar2);
    if ((uVar5 & 1) == 0) {
      lVar10 = 0;
      break;
    }
    FUN_01b7a454(&local_80,&local_98,*(undefined8 *)puVar3);
  } while ((((local_98 == 0) || (*(int *)(local_98 + 0x14) != param_2)) ||
           (*(byte *)(local_98 + 0x12) != param_3)) ||
          (lVar10 = local_98, (((*(byte *)(local_98 + 0x10) & 2) == 0 ^ param_4) & 1) == 0));
  FUN_021b51c4(&local_80,*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_03cbeda8;
  if (lVar10 == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if ((4 < *(byte *)(*(long *)(param_1 + 0x10) + 0x40)) && (1 < *(byte *)(param_1 + 0x40) - 3)) {
      local_58 = param_2;
      uVar6 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&local_58);
      local_9c = param_3;
      uVar7 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,&local_9c);
      local_a0[0] = *(undefined1 *)(param_1 + 0x40);
      uVar8 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03d079f0,local_a0);
      uVar6 = FUN_025be8b0(*(undefined8 *)PTR_DAT_03d07c20,uVar6,uVar7,uVar8,0);
      FUN_0298e564(param_1,5,uVar6);
    }
    lVar10 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x128) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02218bd8(*(long *)(param_1 + 0x128),lVar10,*(undefined8 *)puVar4);
  }
  if (local_54[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar9,0);
  }
  return lVar10;
}


