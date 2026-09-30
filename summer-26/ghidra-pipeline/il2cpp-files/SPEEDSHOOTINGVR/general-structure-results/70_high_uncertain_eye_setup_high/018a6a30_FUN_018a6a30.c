/*
FUNCTION_NAME: FUN_018a6a30
ENTRY_POINT: 018a6a30
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_018a6a30(long *param_1,long param_2)

{
  ushort uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((DAT_0247bca7 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234bbd8);
    FUN_00fdc2e4(PTR_DAT_0234d280);
    DAT_0247bca7 = 1;
  }
  puVar2 = PTR_DAT_0234d280;
                    /* try { // try from 018a6a80 to 019a6abf has its CatchHandler @ 018a6a80
                       catch() { ... } // from try @ 018a6a80 with catch @ 018a6a80
                       catch() { ... } // from try @ 018a6ad4 with catch @ 018a6a80
                       catch() { ... } // from try @ 018a6b10 with catch @ 018a6a80
                       catch() { ... } // from try @ 018a6b50 with catch @ 018a6a80 */
  if ((char)param_1[4] != '\0') {
    if (*(int *)(*(long *)PTR_DAT_0234d280 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    FUN_01dc0780(0);
  }
  *(undefined1 *)(param_1 + 4) = 1;
  if (*param_1 == 0) {
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01022c14();
      lVar3 = *(long *)puVar2;
    }
                    /* try { // try from 018a6ac0 to 019a6ad3 has its CatchHandler @ 018a6ae0 */
    lVar3 = FUN_00ff754c(param_1,**(undefined8 **)(lVar3 + 0xb8),0);
                    /* try { // try from 018a6ad4 to 019a6af7 has its CatchHandler @ 018a6a80 */
    if (lVar3 == 0) {
      return;
    }
  }
  lVar3 = *(long *)(param_2 + 0x20);
  lVar6 = param_1[2];
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 018a6ac0 with catch @ 018a6ae0
                        */
  if (lVar6 == 0) {
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
    FUN_018a6d1c(param_1,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x68));
    return;
  }
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0103c244();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x30);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0103c244();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  lVar3 = *(long *)(param_2 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0103c244();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x30);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0103c244();
  }
  puVar2 = PTR_DAT_0234bbd8;
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x30);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    lVar3 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x30);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
    lVar4 = *(long *)(param_2 + 0x20);
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244(lVar4);
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x40) + 0x135) & 1) == 0) {
      FUN_0103c244();
    }
    lVar3 = thunk_FUN_010400dc();
    lVar5 = *(long *)(param_2 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x135);
    lVar4 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_0103c244(lVar5);
      uVar1 = *(ushort *)(*(long *)(param_2 + 0x20) + 0x135);
      lVar4 = *(long *)(param_2 + 0x20);
    }
    uVar8 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x48);
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_0103c244(lVar4);
    }
    FUN_0136b280(lVar3,uVar7,uVar8,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x50));
    lVar4 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x30);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244();
    }
    *(long *)(*(long *)(lVar4 + 0xb8) + 0x10) = lVar3;
    lVar4 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x30);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244();
    }
    thunk_FUN_0106e12c(*(long *)(lVar4 + 0xb8) + 0x10,lVar3);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  lVar4 = *(long *)(param_2 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0103c244();
  }
  System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_SpaceQueryResult>
            (lVar6,lVar3,param_1,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x58));
  return;
}


