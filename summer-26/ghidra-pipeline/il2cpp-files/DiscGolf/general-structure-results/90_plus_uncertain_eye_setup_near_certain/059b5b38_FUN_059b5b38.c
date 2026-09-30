/*
FUNCTION_NAME: FUN_059b5b38
ENTRY_POINT: 059b5b38
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_16;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_21
*/


/* WARNING: Removing unreachable block (ram,0x059b6020) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_059b5b38(uint *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_70;
  int local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  uint local_34;
  
  if ((DAT_06dc14ba & 1) == 0) {
    FUN_02d965b8(OVRPlugin_OVRP_1_98_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_99_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_49_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_3_0_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0dba8);
    FUN_02d965b8(OVRPlugin_OVRP_1_9_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OverlayShape_TypeInfo);
    FUN_02d965b8(OVRPlugin_PoseStatef_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_84_0_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fbff0);
                    /* try { // try from 059b5bd8 to 05ab5beb has its CatchHandler @ 059b5f94 */
    FUN_02d965b8(OVRPlugin_Posef_TypeInfo);
    DAT_06dc14ba = 1;
  }
  local_34 = *param_1;
  lVar8 = *(long *)(param_1 + 8);
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  local_68 = 0;
  if (1 < local_34) {
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(long *)(lVar8 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
                    /* try { // try from 059b5c14 to 05ab5c23 has its CatchHandler @ 059b5f74 */
    uVar2 = FUN_0554d3a4(*(long *)(lVar8 + 0x28),0);
    uVar7 = *(undefined8 *)(param_1 + 10);
    if (*(int *)(*(long *)PTR_DAT_06a0dba8 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar2 = FUN_0554e408(uVar2,uVar7,0);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    LeanTween__value();
  }
                    /* try { // try from 059b5c68 to 05ab5c6b has its CatchHandler @ 059b5fc4 */
  if (local_34 == 0) {
    local_34 = 0xffffffff;
    local_50 = *(undefined1 (*) [16])(param_1 + 0x14);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *param_1 = 0xffffffff;
LAB_059b5da4:
                    /* try { // try from 059b5dac to 05ab5dcb has its CatchHandler @ 059b5f80 */
    uVar2 = FUN_04b88fc8(local_50,*(undefined8 *)OVRPlugin_OverlayShape_TypeInfo);
    *(undefined8 *)(param_1 + 0x12) = uVar2;
    LeanTween__value();
    auVar11._8_8_ = local_60._8_8_;
    auVar11._0_8_ = local_60._0_8_;
    lVar6 = *(long *)(param_1 + 0x12);
    if (lVar6 == 0) {
      thunk_FUN_02dfd288(PTR_DAT_069ff3c8);
      uVar2 = thunk_FUN_02dd3144();
      uVar7 = thunk_FUN_02dfd288(OVRPlugin_Quatf_TypeInfo);
      FUN_054e8008(uVar2,uVar7,0);
      uVar7 = thunk_FUN_02dfd288(OVRPlugin_Result_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar2,uVar7);
    }
    if ((*(long *)(lVar6 + 0x38) != 0) && (local_60 = auVar11, (param_1[0xe] & 1) == 0)) {
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
                    /* try { // try from 059b5dec to 05ab5df3 has its CatchHandler @ 059b5f88 */
      lVar8 = FUN_059b4788(*(long *)(lVar6 + 0x38),*(undefined8 *)(lVar8 + 0x40));
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
                    /* try { // try from 059b5df8 to 05ab5dff has its CatchHandler @ 059b5f90 */
      local_60 = FUN_0555c350(lVar8,0,0);
                    /* try { // try from 059b5e04 to 05ab5e1f has its CatchHandler @ 059b5f98 */
      uVar4 = FUN_05410178(local_60,0);
      if ((uVar4 & 1) == 0) {
        local_34 = 1;
                    /* try { // try from 059b5e20 to 05ab5e7b has its CatchHandler @ 059b5af4 */
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 0x18) = local_60;
        LeanTween__value(param_1 + 0x18,0);
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_3_0_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)OVRPlugin_OVRP_1_3_0_TypeInfo,extraout_x1,param_1);
        }
        FUN_031ff870(param_1 + 2,local_60,param_1,*(undefined8 *)OVRPlugin_OVRP_1_98_0_TypeInfo);
        goto LAB_059b5ee0;
      }
      goto LAB_059b5c9c;
    }
  }
  else {
                    /* try { // try from 059b5c78 to 05ab5c83 has its CatchHandler @ 059b5fc8 */
    if (local_34 != 1) {
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      plVar9 = *(long **)(lVar8 + 0x10);
      if (plVar9 != (long *)0x0) {
                    /* try { // try from 059b5cf0 to 05ab5cf7 has its CatchHandler @ 059b5fa0 */
        bVar1 = *(byte *)(*(long *)OVRPlugin_OVRP_1_84_0_TypeInfo + 0x130);
                    /* try { // try from 059b5d04 to 05ab5d13 has its CatchHandler @ 059b5fa4 */
        if ((bVar1 <= *(byte *)(*plVar9 + 0x130)) &&
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)OVRPlugin_OVRP_1_84_0_TypeInfo)) {
                    /* try { // try from 059b5d1c to 05ab5d23 has its CatchHandler @ 059b5fa8 */
          FUN_059b0ee8(plVar9,*(undefined8 *)(lVar8 + 0x48));
        }
      }
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
                    /* try { // try from 059b5d34 to 05ab5d3b has its CatchHandler @ 059b5fac */
      FUN_0554d6b8(*(long *)(param_1 + 0x10),*(undefined8 *)(lVar8 + 0x48),0);
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar2 = *(undefined8 *)(param_1 + 0xc);
      auVar11 = FUN_0554d3a4(*(long *)(param_1 + 0x10),0);
                    /* try { // try from 059b5d54 to 05ab5d67 has its CatchHandler @ 059b5f68 */
      plVar9 = *(long **)(lVar8 + 0x10);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860(0,auVar11._8_8_,auVar11._0_8_);
      }
      lVar6 = (**(code **)(*plVar9 + 0x198))
                        (plVar9,uVar2,auVar11._0_8_,*(undefined8 *)(*plVar9 + 0x1a0));
      if (lVar6 == 0) {
        thunk_FUN_02dfd288(PTR_DAT_069ff3c8);
        uVar2 = thunk_FUN_02dd3144();
        uVar7 = thunk_FUN_02dfd288(OVRPlugin_Size3f_TypeInfo);
        FUN_054e8008(uVar2,uVar7,0);
        uVar7 = thunk_FUN_02dfd288(OVRPlugin_Result_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar2,uVar7);
      }
                    /* try { // try from 059b5d70 to 05ab5d77 has its CatchHandler @ 059b5f90 */
                    /* try { // try from 059b5d7c to 05ab5d97 has its CatchHandler @ 059b5f84 */
      local_50 = FUN_0481d044(lVar6,0,*(undefined8 *)OVRPlugin_Posef_TypeInfo);
      uVar4 = FUN_04b88f80(local_50,*(undefined8 *)OVRPlugin_PoseStatef_TypeInfo);
      if ((uVar4 & 1) != 0) goto LAB_059b5da4;
      local_34 = 0;
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0x14) = local_50;
      LeanTween__value(param_1 + 0x14,0);
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_3_0_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)OVRPlugin_OVRP_1_3_0_TypeInfo,extraout_x1_00,param_1);
      }
      FUN_031e73b0(param_1 + 2,local_50,param_1,*(undefined8 *)OVRPlugin_OVRP_1_99_0_TypeInfo);
LAB_059b5ee0:
      lVar6 = 0;
      iVar10 = 10;
      goto LAB_059b5eec;
    }
    local_34 = 0xffffffff;
    local_60 = *(undefined1 (*) [16])(param_1 + 0x18);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    *param_1 = 0xffffffff;
LAB_059b5c9c:
                    /* try { // try from 059b5ca4 to 05ab5cc3 has its CatchHandler @ 059b5f8c */
    FUN_05410190(local_60,0);
    lVar6 = *(long *)(param_1 + 0x12);
  }
  iVar10 = 0x10;
LAB_059b5eec:
  if (((int)local_34 < 0) && (plVar9 = *(long **)(param_1 + 0x10), plVar9 != (long *)0x0)) {
    lVar8 = *plVar9;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_069fbff0) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_059b5f5c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_02dd004c(plVar9,*(long *)PTR_DAT_069fbff0,0);
LAB_059b5f5c:
    (*(code *)*puVar3)(plVar9,puVar3[1]);
  }
  if (iVar10 == 0x10) {
    lVar8 = *(long *)OVRPlugin_OVRP_1_3_0_TypeInfo;
    *param_1 = 0xfffffffe;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_040b19d8(param_1 + 2,lVar6,*(undefined8 *)OVRPlugin_OVRP_1_49_0_TypeInfo);
  }
  else if (iVar10 == 0) {
    uVar2 = (&uStack_70)[local_68 + -1];
    *param_1 = 0xfffffffe;
    lVar8 = thunk_FUN_02dfd288(OVRPlugin_OVRP_1_3_0_TypeInfo);
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar7 = thunk_FUN_02dfd288(OVRPlugin_OVRP_1_75_0_TypeInfo);
    FUN_040b1c24(param_1 + 2,uVar2,uVar7);
  }
  return;
}


