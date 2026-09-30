/*
FUNCTION_NAME: FUN_040c3ee8
ENTRY_POINT: 040c3ee8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_040c3ee8(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  int local_70;
  undefined1 local_6c [4];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  
  puVar2 = PTR_DAT_06a0f9c8;
  if ((DAT_06db6618 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0f9c8);
    FUN_02d965b8(PTR_DAT_069fb930);
    FUN_02d965b8(PTR_DAT_069ff7d8);
    FUN_02d965b8(PTR_DAT_06a0f9d0);
    FUN_02d965b8(PTR_DAT_06a0f9d8);
    FUN_02d965b8(PTR_DAT_06a0f9e0);
    FUN_02d965b8(PTR_DAT_06a0f9e8);
    FUN_02d965b8(PTR_DAT_06a0f9f0);
    FUN_02d965b8(PTR_DAT_06a0f9f8);
    DAT_06db6618 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  if (DAT_06db6648 == '\0') {
    FUN_02d965b8(PTR_DAT_06a0f9c8);
    DAT_06db6648 = '\x01';
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar4 = *(long *)puVar2;
  }
  if (param_2 != 0) {
    lVar4 = System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>__get_Item
                      (param_2,*(byte *)(*(long *)(lVar4 + 0xb8) + 0x18) - 1,
                       *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x78));
    if (lVar4 != 0) {
      return;
    }
    lVar4 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff7d8);
    FUN_05377f4c(lVar4,0);
    puVar3 = PTR_DAT_06a0f9e8;
    puVar1 = PTR_DAT_069fb9c0;
    uVar8 = 0;
    iVar9 = 0;
    while( true ) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (DAT_06db6648 == '\0') {
        FUN_02d965b8(puVar2);
        DAT_06db6648 = '\x01';
      }
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar5 = *(long *)puVar2;
      }
      if ((uint)*(byte *)(*(long *)(lVar5 + 0xb8) + 0x18) <= (uVar8 & 0xff)) {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (DAT_06db6648 == '\0') {
          FUN_02d965b8(PTR_DAT_06a0f9c8);
          DAT_06db6648 = '\x01';
        }
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar5 = *(long *)puVar2;
        }
        local_6c[0] = *(undefined1 *)(*(long *)(lVar5 + 0xb8) + 0x18);
        uVar6 = thunk_FUN_02dd2d7c(*(undefined8 *)(puVar1 + 0x18),local_6c);
        local_70 = iVar9;
        uVar7 = thunk_FUN_02dd2d7c(*(undefined8 *)(puVar1 + 0x48),&local_70);
        uVar6 = FUN_0536e0dc(*(undefined8 *)PTR_DAT_06a0f9e0,uVar6,uVar7,0);
        uVar7 = FUN_0536388c(*(undefined8 *)PTR_DAT_06a0f9f8,lVar4,0);
        uVar6 = FUN_0536d554(*(undefined8 *)PTR_DAT_06a0f9f0,uVar6,uVar7,0);
        if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)PTR_DAT_069fb930);
        }
        FUN_0630c038(uVar6,param_1,0);
        return;
      }
      lVar5 = System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>__get_Item
                        (param_2,uVar8,
                         *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x78));
      local_64[0] = (char)uVar8;
      uVar6 = thunk_FUN_02dd2d7c(*(undefined8 *)(puVar1 + 0x18),local_64);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)puVar2);
      }
      uVar7 = FUN_062c2f38(uVar8,0);
      uVar6 = FUN_0536e0dc(*(undefined8 *)puVar3,uVar6,uVar7,0);
      if (lVar4 == 0) break;
      FUN_053798ac(lVar4,uVar6,0);
      if (lVar5 == 0) {
        FUN_05379d80(lVar4,*(undefined8 *)PTR_DAT_06a0f9d0,0);
      }
      else {
        local_68[0] = (char)uVar8;
        uVar6 = thunk_FUN_02dd2d7c(*(undefined8 *)(puVar1 + 0x18),local_68);
        uVar6 = FUN_0536e0dc(*(undefined8 *)PTR_DAT_06a0f9d8,uVar6,*(undefined8 *)(lVar5 + 0x10),0);
        FUN_05379d80(lVar4,uVar6,0);
        iVar9 = iVar9 + 1;
      }
      uVar8 = uVar8 + 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


