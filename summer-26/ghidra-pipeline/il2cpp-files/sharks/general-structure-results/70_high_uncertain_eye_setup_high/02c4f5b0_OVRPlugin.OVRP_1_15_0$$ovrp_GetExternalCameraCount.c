/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_GetExternalCameraCount
ENTRY_POINT: 02c4f5b0
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_15_0__ovrp_GetExternalCameraCount
               (ulong param_1,long *param_2,long param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined2 *unaff_x19;
  uint unaff_w20;
  uint unaff_w22;
  long unaff_x25;
  
  if ((param_1 & 1) == 0) {
    FUN_017fc350(PTR_DAT_037f2c00);
    FUN_017fc350(PTR_DAT_037f6f08);
    *(undefined1 *)(unaff_x25 + 0x120) = 1;
  }
  puVar5 = PTR_DAT_03800550;
  if ((unaff_x19 == (undefined2 *)0x0) || (puVar5 = PTR_DAT_03800588, param_3 == 0)) {
    uVar6 = thunk_FUN_01851c08(puVar5);
    thunk_FUN_01851c08(PTR_DAT_037f66a8);
    uVar7 = thunk_FUN_01861bbc();
    uVar8 = thunk_FUN_01851c08(PTR_DAT_03800558);
    FUN_02b44d94(uVar7,uVar6,uVar8,0);
LAB_02c4f784:
    uVar6 = thunk_FUN_01851c08(PTR_DAT_0380ca80);
                    /* WARNING: Subroutine does not return */
    FUN_017fc474(uVar7,uVar6);
  }
  if (((int)unaff_w20 < 0) || ((int)param_4 < 0)) {
    puVar5 = PTR_DAT_03800318;
    if (-1 < (int)param_4) {
      puVar5 = PTR_DAT_03800300;
    }
    uVar6 = thunk_FUN_01851c08(puVar5);
    thunk_FUN_01851c08(PTR_DAT_037f86c0);
    uVar7 = thunk_FUN_01861bbc();
    uVar8 = thunk_FUN_01851c08(PTR_DAT_037f8998);
    FUN_02b40444(uVar7,uVar6,uVar8,0);
    goto LAB_02c4f784;
  }
  lVar3 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f2c00,param_4);
  if (0 < (int)param_4) {
    if (lVar3 == 0) goto LAB_02c4f6d8;
    uVar2 = *(uint *)(lVar3 + 0x18);
    uVar9 = 0;
    do {
      if (uVar2 <= uVar9) goto LAB_02c4f6d4;
      *(undefined1 *)(lVar3 + 0x20 + uVar9) = *(undefined1 *)(param_3 + uVar9);
      uVar9 = uVar9 + 1;
    } while (param_4 != uVar9);
  }
  lVar4 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f6f08,unaff_w20);
  uVar2 = (**(code **)(*param_2 + 0x1c8))
                    (param_2,lVar3,0,(ulong)param_4,lVar4,0,unaff_w22 & 1,
                     *(undefined8 *)(*param_2 + 0x1d0));
  if ((int)unaff_w20 <= (int)uVar2) {
    uVar2 = unaff_w20;
  }
  if (0 < (int)uVar2) {
    if (lVar4 == 0) {
LAB_02c4f6d8:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar1 = *(uint *)(lVar4 + 0x18);
    uVar9 = 0;
    do {
      if (uVar1 <= uVar9) {
LAB_02c4f6d4:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      lVar3 = uVar9 * 2;
      uVar9 = uVar9 + 1;
      *unaff_x19 = *(undefined2 *)(lVar4 + 0x20 + lVar3);
      unaff_x19 = unaff_x19 + 1;
    } while (uVar2 != uVar9);
  }
  return;
}


