/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_SetDynamicObjectTrackedClasses
ENTRY_POINT: 01dbfb80
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


void OVRPlugin_OVRP_1_104_0__ovrp_SetDynamicObjectTrackedClasses(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *puVar7;
  long *plVar8;
  int iVar9;
  
                    /* try { // try from 01dbfb84 to 01ebfb8b has its CatchHandler @ 01dc0048 */
  FUN_01db638c();
  FUN_01db6388(0);
                    /* try { // try from 01dbfba4 to 01ebfbaf has its CatchHandler @ 01dc0134 */
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
                    /* try { // try from 01dbfbb4 to 01ebfbbf has its CatchHandler @ 01dc0124 */
  if (DAT_0247b0d1 == '\0') {
    FUN_00fdc2e4(PTR_DAT_0234bc90);
    FUN_00fdc2e4(PTR_DAT_0234bca8);
    DAT_0247b0d1 = '\x01';
  }
                    /* try { // try from 01dbfbdc to 01ebfbeb has its CatchHandler @ 01dc0120 */
  puVar1 = PTR_DAT_0234bca8;
  lVar3 = *(long *)PTR_DAT_0234bca8;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01022c14();
    lVar3 = *(long *)puVar1;
  }
                    /* try { // try from 01dbfbfc to 01ebfc03 has its CatchHandler @ 01dc0128 */
  if (*(char *)(*(long *)(lVar3 + 0xb8) + 0x10) != '\0') {
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    FUN_01db669c();
  }
  puVar7 = (undefined8 *)(unaff_x19 + 0x58);
  plVar8 = (long *)*puVar7;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  lVar3 = *plVar8;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0235aa20) {
        puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_01dbfc94;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_0103c348(plVar8,*(long *)PTR_DAT_0235aa20,0);
LAB_01dbfc94:
  iVar2 = (*(code *)*puVar4)(plVar8,puVar4[1]);
  puVar1 = PTR_DAT_0235aa28;
  if (0 < iVar2) {
    iVar9 = 0;
    do {
      lVar3 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
            goto OVRPlugin_OVRP_1_104_0__ovrp_GetDynamicObjectKeyboardSupported;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined8 *)FUN_0103c348(plVar8,*(long *)puVar1,0);
OVRPlugin_OVRP_1_104_0__ovrp_GetDynamicObjectKeyboardSupported:
      lVar3 = (*(code *)*puVar4)(plVar8,iVar9,puVar4[1]);
      if ((lVar3 != 0) && (uVar5 = FUN_01db86c8(lVar3,0), (uVar5 & 1) == 0)) {
        FUN_01db751c(lVar3);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != iVar2);
  }
  *puVar7 = 0;
  thunk_FUN_0106e12c(puVar7,0);
  return;
}


