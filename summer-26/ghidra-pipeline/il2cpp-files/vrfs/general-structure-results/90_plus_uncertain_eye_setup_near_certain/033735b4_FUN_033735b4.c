/*
FUNCTION_NAME: FUN_033735b4
ENTRY_POINT: 033735b4
PROGRAM: vrfs-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


long * FUN_033735b4(undefined1 param_1 [16],float param_2,long param_3,undefined8 param_4,
                   char *param_5,undefined8 param_6)

{
  long *plVar1;
  undefined *puVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  float fVar10;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long *plStack_38;
  
  if ((bRam0000000007238583 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e66d30);
    bRam0000000007238583 = 1;
  }
  plStack_38 = (long *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uVar4 = FUN_0322bb64(param_4,0);
  uVar6 = FUN_03373464(param_3,uVar4,&plStack_38,1);
  if (plStack_38 == (long *)0x0) goto LAB_03373934;
  (**(code **)(*plStack_38 + 0x178))(plStack_38,*(undefined8 *)(*plStack_38 + 0x180));
  if ((uVar6 & 1) == 0) {
    iVar5 = OVRPlugin__StartBodyTracking2(param_4,0);
    bVar3 = iVar5 == 0;
  }
  else {
    bVar3 = true;
  }
  *param_5 = bVar3;
  iVar5 = OVRPlugin__StartBodyTracking2(param_4,0);
  if (iVar5 == 4) {
    bVar3 = true;
  }
  else {
    iVar5 = OVRPlugin__StartBodyTracking2(param_4,0);
    bVar3 = iVar5 == 3;
  }
  plVar1 = plStack_38;
  *(bool *)param_6 = bVar3;
  if ((uVar6 & 1) != 0) {
    uVar4 = FUN_0322bb6c(param_4,0);
    if (plVar1 == (long *)0x0) goto LAB_03373934;
    *(undefined4 *)(plVar1 + 0x20) = uVar4;
    *(float *)((long)plVar1 + 0x104) = param_2;
  }
  plVar1 = plStack_38;
  puVar2 = PTR_DAT_06e4d340;
  if (*param_5 == '\0') {
    fVar10 = (float)FUN_0322bb6c(param_4,0);
    plVar9 = plStack_38;
    if ((plStack_38 == (long *)0x0) || (plVar1 == (long *)0x0)) goto LAB_03373934;
    plVar1[0x21] = CONCAT44(param_2 - (float)((ulong)plStack_38[0x20] >> 0x20),
                            fVar10 - (float)plStack_38[0x20]);
    uVar4 = FUN_0322bb6c(param_4,0);
  }
  else {
    if (DAT_0722a89c == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06e4d340);
      DAT_0722a89c = '\x01';
    }
    plVar9 = plStack_38;
    if (plVar1 == (long *)0x0) goto LAB_03373934;
    plVar1[0x21] = **(long **)(*(long *)puVar2 + 0xb8);
    uVar4 = FUN_0322bb6c(param_4,0);
    if (plVar9 == (long *)0x0) goto LAB_03373934;
  }
  *(undefined4 *)(plVar9 + 0x20) = uVar4;
  *(float *)((long)plVar9 + 0x104) = param_2;
  if (plStack_38 == (long *)0x0) goto LAB_03373934;
  *(undefined4 *)((long)plStack_38 + 0x144) = 0;
  uVar7 = OVRPlugin__StartBodyTracking2(param_4,0);
  if ((int)uVar7 == 4) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    if (plStack_38 == (long *)0x0) goto LAB_03373934;
    plVar1 = plStack_38 + 10;
    memcpy(plVar1,&uStack_e0,0x50);
    thunk_FUN_01656ef8(plVar1,0);
  }
  else {
    if (*(long *)(param_3 + 0x30) == 0) goto LAB_03373934;
    FUN_0336e8d0(uVar7,plStack_38,*(undefined8 *)(param_3 + 0x18));
    FUN_03372394(&uStack_90,*(undefined8 *)(param_3 + 0x18));
    plVar1 = plStack_38;
    memcpy(&uStack_e0,&uStack_90,0x50);
    if (plVar1 == (long *)0x0) goto LAB_03373934;
    plVar1 = plVar1 + 10;
    memcpy(plVar1,&uStack_e0,0x50);
    thunk_FUN_01656ef8(plVar1,0);
    lVar8 = *(long *)(param_3 + 0x18);
    if (lVar8 == 0) goto LAB_03373934;
    iVar5 = *(int *)(lVar8 + 0x18);
    *(undefined4 *)(lVar8 + 0x18) = 0;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (0 < iVar5) {
      FUN_031dd574(*(undefined8 *)(lVar8 + 0x10),0,iVar5,0);
    }
  }
  plVar1 = plStack_38;
  uVar4 = FUN_0322bbb4(param_4,0);
  plVar9 = plStack_38;
  if (plVar1 != (long *)0x0) {
    *(undefined4 *)(plVar1 + 0x29) = uVar4;
    uVar4 = FUN_0322bbcc(param_4,0);
    plVar1 = plStack_38;
    if (plVar9 != (long *)0x0) {
      *(undefined4 *)(plVar9 + 0x2a) = uVar4;
      uVar4 = FUN_0322bbd4(param_4,0);
      plVar9 = plStack_38;
      if (plVar1 != (long *)0x0) {
        *(undefined4 *)((long)plVar1 + 0x154) = uVar4;
        if (DAT_0722b91f == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06e4d340);
          DAT_0722b91f = '\x01';
        }
        uVar7 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
        fVar10 = (float)FUN_0322bbdc(param_4,0);
        plVar1 = plStack_38;
        if (plVar9 != (long *)0x0) {
          *(ulong *)((long)plVar9 + 0x15c) =
               CONCAT44((float)((ulong)uVar7 >> 0x20) * fVar10,(float)uVar7 * fVar10);
          if (DAT_0722b91f == '\0') {
            thunk_FUN_0159f088(PTR_DAT_06e4d340);
            DAT_0722b91f = '\x01';
          }
          uVar7 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
          fVar10 = (float)FUN_0322bbe4(param_4,0);
          if (plVar1 != (long *)0x0) {
            *(ulong *)((long)plVar1 + 0x164) =
                 CONCAT44((float)((ulong)uVar7 >> 0x20) * fVar10,(float)uVar7 * fVar10);
            return plStack_38;
          }
        }
      }
    }
  }
LAB_03373934:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


