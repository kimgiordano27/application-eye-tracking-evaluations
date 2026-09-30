/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_EnqueueSubmitLayer
ENTRY_POINT: 01db3b1c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01db3d28) */

uint OVRPlugin_OVRP_1_15_0__ovrp_EnqueueSubmitLayer(long param_1,ulong param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_30;
  char acStack_24 [4];
  code *pcStack_20;
  undefined *puStack_18;
  long lStack_10;
  ulong uStack_8;
  
  if ((DAT_0247d9ff & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0235a278);
    DAT_0247d9ff = 1;
  }
  puVar1 = PTR_DAT_0235a278;
  if (param_1 == 0) {
    uVar4 = thunk_FUN_010303a8(PTR_DAT_023580f8);
    uVar4 = FUN_01d75474(uVar4,0);
    thunk_FUN_010303a8(PTR_DAT_0234c5c8);
    uVar5 = thunk_FUN_010400dc();
    FUN_01d57b1c(uVar5,0,uVar4,0);
    uVar4 = thunk_FUN_010303a8(PTR_DAT_0235a510);
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar5,uVar4);
  }
  if (*(int *)(*(long *)PTR_DAT_0235a278 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  iVar2 = FUN_01db3c00(param_1,param_2 & 0xffffffff,0,0);
  if (iVar2 == 0x80) {
    FUN_00e5daf0(*(undefined8 *)puVar1);
    auVar10 = FUN_01db3db8();
    lVar6 = auVar10._0_8_;
    pcStack_20 = FUN_01db3c00;
    puStack_18 = puVar1;
    uVar9 = auVar10._8_8_ & 0xffffffff;
    lStack_10 = param_1;
    uStack_8 = param_2;
    if ((DAT_0247da04 & 1) == 0) {
      FUN_00fdc2e4(PTR_DAT_02359478);
      FUN_00fdc2e4(PTR_DAT_0235a278);
      DAT_0247da04 = 1;
    }
    uStack_30 = 0;
    acStack_24[0] = '\0';
    plVar7 = (long *)FUN_01da6590();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    FUN_01cb9690(lVar6,acStack_24,0);
    if ((plVar7 == (long *)0x0) || ((*(byte *)(plVar7 + 2) & 1) == 0)) {
      uStack_30 = *(undefined8 *)(lVar6 + 0x10);
      if (*(int *)(*(long *)PTR_DAT_0235a278 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      uVar3 = FUN_0102ae7c(&uStack_30,1,0,uVar9);
    }
    else {
      lVar8 = FUN_00fdc388(*(undefined8 *)PTR_DAT_02359478,1);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(lVar6 + 0x10);
      uVar3 = (**(code **)(*plVar7 + 0x1b8))(plVar7,lVar8,0,uVar9,*(undefined8 *)(*plVar7 + 0x1c0));
    }
    if (acStack_24[0] != '\0') {
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      FUN_01cb97fc(lVar6,0);
    }
    return uVar3;
  }
  return (uint)(iVar2 != 0x102 && iVar2 != 0x7fffffff);
}


