/*
FUNCTION_NAME: FUN_018a11c0
ENTRY_POINT: 018a11c0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 99
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_018a11c0(long *param_1,long param_2)

{
  ushort uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((DAT_0247bc89 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234bbd8);
    FUN_00fdc2e4(PTR_DAT_0234d280);
    DAT_0247bc89 = 1;
  }
  puVar2 = PTR_DAT_0234d280;
  if ((char)param_1[4] != '\0') {
    if (*(int *)(*(long *)PTR_DAT_0234d280 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
                    /* try { // try from 018a1224 to 019a126b has its CatchHandler @ 018a1224
                       catch() { ... } // from try @ 018a1224 with catch @ 018a1224
                       catch() { ... } // from try @ 018a12c4 with catch @ 018a1224
                       catch() { ... } // from try @ 018a12f4 with catch @ 018a1224
                       catch() { ... } // from try @ 018a1370 with catch @ 018a1224 */
    FUN_01dc0780(0);
  }
  *(undefined1 *)(param_1 + 4) = 1;
  if (*param_1 == 0) {
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01022c14();
      lVar3 = *(long *)puVar2;
    }
    lVar3 = FUN_00ff754c(param_1,**(undefined8 **)(lVar3 + 0xb8),0);
    if (lVar3 == 0) {
      return;
    }
  }
  lVar3 = *(long *)(param_2 + 0x20);
  lVar6 = param_1[2];
  if (lVar6 == 0) {
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
    FUN_018a14ac(param_1,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x68));
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
    FUN_0136af70(lVar3,uVar7,uVar8,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x50));
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
  System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_EyeGazeState>
            (lVar6,lVar3,param_1,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x58));
  return;
}


