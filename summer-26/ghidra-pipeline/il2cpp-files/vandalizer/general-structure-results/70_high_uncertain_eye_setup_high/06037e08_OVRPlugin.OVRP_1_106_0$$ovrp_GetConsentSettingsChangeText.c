/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_GetConsentSettingsChangeText
ENTRY_POINT: 06037e08
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_106_0__ovrp_GetConsentSettingsChangeText(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined4 in_w8;
  long lVar8;
  long lVar9;
  long unaff_x19;
  uint *puVar10;
  undefined8 *unaff_x22;
  long *unaff_x23;
  int *piVar11;
  
  *(undefined4 *)(param_2 + 0x20) = in_w8;
  if (0x12 < *(uint *)(unaff_x19 + 0x18)) {
    *(long *)(unaff_x19 + 0xb0) = param_2;
    thunk_FUN_0329bf60((long *)(unaff_x19 + 0xb0));
    uVar4 = FUN_031f21dc(*unaff_x22,0);
    if (0x13 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0xb8) = uVar4;
      thunk_FUN_0329bf60((undefined8 *)(unaff_x19 + 0xb8),uVar4);
      uVar4 = FUN_031f21dc(*unaff_x22,0);
      if (0x14 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0xc0) = uVar4;
        thunk_FUN_0329bf60((undefined8 *)(unaff_x19 + 0xc0),uVar4);
        uVar4 = FUN_031f21dc(*unaff_x22,0);
        if (0x15 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 200) = uVar4;
          thunk_FUN_0329bf60((undefined8 *)(unaff_x19 + 200),uVar4);
          uVar4 = FUN_031f21dc(*unaff_x22,0);
          if (0x16 < *(uint *)(unaff_x19 + 0x18)) {
            *(undefined8 *)(unaff_x19 + 0xd0) = uVar4;
            thunk_FUN_0329bf60((undefined8 *)(unaff_x19 + 0xd0),uVar4);
            uVar4 = FUN_031f21dc(*unaff_x22,0);
            puVar3 = PTR_DAT_075f7b08;
            puVar2 = PTR_DAT_075f7b00;
            if (0x17 < *(uint *)(unaff_x19 + 0x18)) {
              *(undefined8 *)(unaff_x19 + 0xd8) = uVar4;
              thunk_FUN_0329bf60();
              *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x18) = unaff_x19;
              thunk_FUN_0329bf60();
              lVar5 = thunk_FUN_0322f148(*(undefined8 *)puVar3);
              FUN_04751f00(lVar5,*(undefined8 *)puVar2);
              puVar2 = PTR_DAT_075f7af0;
              if (lVar5 != 0) {
                lVar8 = *(long *)PTR_DAT_075f7af0;
                piVar11 = (int *)(lVar5 + 0x1c);
                *piVar11 = *piVar11 + 1;
                lVar9 = *(long *)(lVar5 + 0x10);
                puVar10 = (uint *)(lVar5 + 0x18);
                uVar1 = *puVar10;
                if (lVar9 != 0) {
                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                    *puVar10 = uVar1 + 1;
                    *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 6;
                    *piVar11 = *piVar11 + 1;
                  }
                  else {
                    FUN_04752754(lVar5,6,*(undefined8 *)
                                          (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                    lVar9 = *(long *)(lVar5 + 0x10);
                    lVar8 = *(long *)puVar2;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar9 == 0) goto LAB_06038648;
                  }
                  uVar1 = *puVar10;
                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                    *puVar10 = uVar1 + 1;
                    *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 7;
                    *piVar11 = *piVar11 + 1;
                  }
                  else {
                    FUN_04752754(lVar5,7,*(undefined8 *)
                                          (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                    lVar9 = *(long *)(lVar5 + 0x10);
                    lVar8 = *(long *)puVar2;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar9 == 0) goto LAB_06038648;
                  }
                  uVar1 = *puVar10;
                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                    *puVar10 = uVar1 + 1;
                    *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 8;
                    *piVar11 = *piVar11 + 1;
                  }
                  else {
                    FUN_04752754(lVar5,8,*(undefined8 *)
                                          (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                    lVar9 = *(long *)(lVar5 + 0x10);
                    lVar8 = *(long *)puVar2;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar9 == 0) goto LAB_06038648;
                  }
                  uVar1 = *puVar10;
                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                    *puVar10 = uVar1 + 1;
                    *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 9;
                    *piVar11 = *piVar11 + 1;
                  }
                  else {
                    FUN_04752754(lVar5,9,*(undefined8 *)
                                          (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                    lVar9 = *(long *)(lVar5 + 0x10);
                    lVar8 = *(long *)puVar2;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar9 == 0) goto LAB_06038648;
                  }
                  uVar1 = *puVar10;
                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                    *puVar10 = uVar1 + 1;
                    *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 10;
                    *piVar11 = *piVar11 + 1;
                  }
                  else {
                    FUN_04752754(lVar5,10,*(undefined8 *)
                                           (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                    lVar9 = *(long *)(lVar5 + 0x10);
                    lVar8 = *(long *)puVar2;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar9 == 0) goto LAB_06038648;
                  }
                  uVar1 = *puVar10;
                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                    *puVar10 = uVar1 + 1;
                    *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                    *piVar11 = *piVar11 + 1;
                  }
                  else {
                    FUN_04752754(lVar5,0xb,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                    lVar9 = *(long *)(lVar5 + 0x10);
                    lVar8 = *(long *)puVar2;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar9 == 0) goto LAB_06038648;
                  }
                  uVar1 = *puVar10;
                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                    *puVar10 = uVar1 + 1;
                    *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                    *piVar11 = *piVar11 + 1;
                  }
                  else {
                    FUN_04752754(lVar5,0xc,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                    lVar9 = *(long *)(lVar5 + 0x10);
                    lVar8 = *(long *)puVar2;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar9 == 0) goto LAB_06038648;
                  }
                  uVar1 = *puVar10;
                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                    *puVar10 = uVar1 + 1;
                    *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                    *piVar11 = *piVar11 + 1;
                  }
                  else {
                    FUN_04752754(lVar5,0xd,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                    lVar9 = *(long *)(lVar5 + 0x10);
                    lVar8 = *(long *)puVar2;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar9 == 0) goto LAB_06038648;
                  }
                  uVar1 = *puVar10;
                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                    *puVar10 = uVar1 + 1;
                    *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                    *piVar11 = *piVar11 + 1;
                  }
                  else {
                    FUN_04752754(lVar5,0xe,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                    lVar9 = *(long *)(lVar5 + 0x10);
                    lVar8 = *(long *)puVar2;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar9 == 0) goto LAB_06038648;
                  }
                  uVar1 = *puVar10;
                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                    *puVar10 = uVar1 + 1;
                    *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
                    *piVar11 = *piVar11 + 1;
                  }
                  else {
                    FUN_04752754(lVar5,0xf,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                    lVar9 = *(long *)(lVar5 + 0x10);
                    lVar8 = *(long *)puVar2;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar9 == 0) goto LAB_06038648;
                  }
                  uVar1 = *puVar10;
                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                    *puVar10 = uVar1 + 1;
                    *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                    *piVar11 = *piVar11 + 1;
                  }
                  else {
                    FUN_04752754(lVar5,0x10,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                    lVar9 = *(long *)(lVar5 + 0x10);
                    lVar8 = *(long *)puVar2;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar9 == 0) goto LAB_06038648;
                  }
                  uVar1 = *puVar10;
                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                    *puVar10 = uVar1 + 1;
                    *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                    *piVar11 = *piVar11 + 1;
                  }
                  else {
                    FUN_04752754(lVar5,0x11,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                    lVar9 = *(long *)(lVar5 + 0x10);
                    lVar8 = *(long *)puVar2;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar9 == 0) goto LAB_06038648;
                  }
                  uVar1 = *puVar10;
                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                    *puVar10 = uVar1 + 1;
                    *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                    *piVar11 = *piVar11 + 1;
                  }
                  else {
                    FUN_04752754(lVar5,0x12,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                    lVar9 = *(long *)(lVar5 + 0x10);
                    lVar8 = *(long *)puVar2;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar9 == 0) goto LAB_06038648;
                  }
                  uVar1 = *puVar10;
                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                    *puVar10 = uVar1 + 1;
                    *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 2;
                    *piVar11 = *piVar11 + 1;
                  }
                  else {
                    FUN_04752754(lVar5,2,*(undefined8 *)
                                          (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                    lVar9 = *(long *)(lVar5 + 0x10);
                    lVar8 = *(long *)puVar2;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar9 == 0) goto LAB_06038648;
                  }
                  uVar1 = *puVar10;
                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                    *puVar10 = uVar1 + 1;
                    *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 3;
                    *piVar11 = *piVar11 + 1;
                  }
                  else {
                    FUN_04752754(lVar5,3,*(undefined8 *)
                                          (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                    lVar9 = *(long *)(lVar5 + 0x10);
                    lVar8 = *(long *)puVar2;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar9 == 0) goto LAB_06038648;
                  }
                  uVar1 = *puVar10;
                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                    *puVar10 = uVar1 + 1;
                    *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 4;
                    *piVar11 = *piVar11 + 1;
                  }
                  else {
                    FUN_04752754(lVar5,4,*(undefined8 *)
                                          (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                    lVar9 = *(long *)(lVar5 + 0x10);
                    lVar8 = *(long *)puVar2;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar9 == 0) goto LAB_06038648;
                  }
                  puVar2 = PTR_DAT_075f7b40;
                  uVar1 = *puVar10;
                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                    *puVar10 = uVar1 + 1;
                    *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = 5;
                  }
                  else {
                    FUN_04752754(lVar5,5,*(undefined8 *)
                                          (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                  }
                  plVar6 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 0x20);
                  *plVar6 = lVar5;
                  thunk_FUN_0329bf60(plVar6,lVar5);
                  uVar4 = FUN_031f21dc(*unaff_x22,5);
                  FUN_05d2c79c(uVar4,*(undefined8 *)puVar2,0);
                  puVar7 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x28);
                  *puVar7 = uVar4;
                  thunk_FUN_0329bf60(puVar7,uVar4);
                  return;
                }
              }
LAB_06038648:
                    /* WARNING: Subroutine does not return */
              FUN_031f2390();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


