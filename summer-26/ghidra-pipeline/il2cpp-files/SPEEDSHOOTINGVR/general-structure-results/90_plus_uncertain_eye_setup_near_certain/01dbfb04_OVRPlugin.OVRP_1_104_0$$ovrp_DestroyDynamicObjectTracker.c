/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_DestroyDynamicObjectTracker
ENTRY_POINT: 01dbfb04
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_104_0__ovrp_DestroyDynamicObjectTracker(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  long unaff_x19;
  undefined8 *puVar8;
  long unaff_x21;
  long *plVar9;
  int iVar10;
  
                    /* try { // try from 01dbfb04 to 01ebfb07 has its CatchHandler @ 01dc002c */
  FUN_00fdc2e4(PTR_DAT_0235aa20);
                    /* try { // try from 01dbfb14 to 01ebfb37 has its CatchHandler @ 01dc0030 */
  FUN_00fdc2e4(PTR_DAT_0235aa28);
  FUN_00fdc2e4(PTR_DAT_0235aa48);
  *(undefined1 *)(unaff_x21 + 0xa8f) = 1;
  uVar4 = FUN_01a526d4();
  puVar1 = PTR_DAT_0234bc90;
  if ((uVar4 & 1) == 0) {
    return;
  }
                    /* try { // try from 01dbfb50 to 01ebfb7b has its CatchHandler @ 01dc0040 */
  if (*(int *)(*(long *)PTR_DAT_0234bc90 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  uVar4 = FUN_01db637c(0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    FUN_01db638c(1);
    FUN_01db6388(0);
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  if (DAT_0247b0d1 == '\0') {
    FUN_00fdc2e4(PTR_DAT_0234bc90);
    FUN_00fdc2e4(PTR_DAT_0234bca8);
    DAT_0247b0d1 = '\x01';
  }
  puVar2 = PTR_DAT_0234bca8;
  lVar5 = *(long *)PTR_DAT_0234bca8;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01022c14();
    lVar5 = *(long *)puVar2;
  }
  if (*(char *)(*(long *)(lVar5 + 0xb8) + 0x10) != '\0') {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    FUN_01db669c();
  }
  puVar8 = (undefined8 *)(unaff_x19 + 0x58);
  plVar9 = (long *)*puVar8;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  lVar5 = *plVar9;
  uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar4 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0235aa20) {
        puVar6 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_01dbfc94;
      }
      uVar4 = uVar4 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar4 != 0);
  }
  puVar6 = (undefined8 *)FUN_0103c348(plVar9,*(long *)PTR_DAT_0235aa20,0);
LAB_01dbfc94:
  iVar3 = (*(code *)*puVar6)(plVar9,puVar6[1]);
  puVar1 = PTR_DAT_0235aa28;
  if (0 < iVar3) {
    iVar10 = 0;
    do {
      lVar5 = *plVar9;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto OVRPlugin_OVRP_1_104_0__ovrp_GetDynamicObjectKeyboardSupported;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_0103c348(plVar9,*(long *)puVar1,0);
OVRPlugin_OVRP_1_104_0__ovrp_GetDynamicObjectKeyboardSupported:
      lVar5 = (*(code *)*puVar6)(plVar9,iVar10,puVar6[1]);
      if ((lVar5 != 0) && (uVar4 = FUN_01db86c8(lVar5,0), (uVar4 & 1) == 0)) {
        FUN_01db751c(lVar5);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 != iVar3);
  }
  *puVar8 = 0;
  thunk_FUN_0106e12c(puVar8,0);
  return;
}


