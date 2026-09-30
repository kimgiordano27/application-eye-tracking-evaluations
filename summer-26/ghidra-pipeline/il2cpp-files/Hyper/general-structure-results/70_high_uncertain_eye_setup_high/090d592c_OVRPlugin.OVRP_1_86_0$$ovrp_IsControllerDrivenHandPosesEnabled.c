/*
FUNCTION_NAME: OVRPlugin.OVRP_1_86_0$$ovrp_IsControllerDrivenHandPosesEnabled
ENTRY_POINT: 090d592c
PROGRAM: Hyper-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_86_0__ovrp_IsControllerDrivenHandPosesEnabled
               (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  uint in_w8;
  long lVar8;
  long lVar9;
  long unaff_x19;
  undefined8 *unaff_x22;
  long *unaff_x23;
  
  if (0x12 < in_w8) {
    *(undefined8 *)(unaff_x19 + 0xb0) = param_2;
    thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0xb0));
    uVar4 = FUN_04947fd0(*unaff_x22,0);
    if (0x13 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0xb8) = uVar4;
      thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0xb8),uVar4);
      uVar4 = FUN_04947fd0(*unaff_x22,0);
      if (0x14 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0xc0) = uVar4;
        thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0xc0),uVar4);
        uVar4 = FUN_04947fd0(*unaff_x22,0);
        if (0x15 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 200) = uVar4;
          thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 200),uVar4);
          uVar4 = FUN_04947fd0(*unaff_x22,0);
          if (0x16 < *(uint *)(unaff_x19 + 0x18)) {
            *(undefined8 *)(unaff_x19 + 0xd0) = uVar4;
            thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0xd0),uVar4);
            uVar4 = FUN_04947fd0(*unaff_x22,0);
            puVar3 = PTR_DAT_0ac798d0;
            puVar2 = PTR_DAT_0ac798c8;
            if (0x17 < *(uint *)(unaff_x19 + 0x18)) {
              *(undefined8 *)(unaff_x19 + 0xd8) = uVar4;
              thunk_FUN_049ee3d8();
              *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x18) = unaff_x19;
              thunk_FUN_049ee3d8();
              lVar5 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
              FUN_06b13594(lVar5,*(undefined8 *)puVar2);
              puVar2 = PTR_DAT_0ac798b8;
              if (lVar5 != 0) {
                lVar8 = *(long *)(lVar5 + 0x10);
                lVar9 = *(long *)PTR_DAT_0ac798b8;
                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                if (lVar8 != 0) {
                  uVar1 = *(uint *)(lVar5 + 0x18);
                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                    *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 6;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  }
                  else {
                    FUN_06b13e24(lVar5,6,*(undefined8 *)
                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                    lVar8 = *(long *)(lVar5 + 0x10);
                    lVar9 = *(long *)puVar2;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar8 == 0) goto LAB_090d615c;
                  }
                  uVar1 = *(uint *)(lVar5 + 0x18);
                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                    *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 7;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  }
                  else {
                    FUN_06b13e24(lVar5,7,*(undefined8 *)
                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                    lVar8 = *(long *)(lVar5 + 0x10);
                    lVar9 = *(long *)puVar2;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar8 == 0) goto LAB_090d615c;
                  }
                  uVar1 = *(uint *)(lVar5 + 0x18);
                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                    *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 8;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  }
                  else {
                    FUN_06b13e24(lVar5,8,*(undefined8 *)
                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                    lVar8 = *(long *)(lVar5 + 0x10);
                    lVar9 = *(long *)puVar2;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar8 == 0) goto LAB_090d615c;
                  }
                  uVar1 = *(uint *)(lVar5 + 0x18);
                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                    *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 9;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  }
                  else {
                    FUN_06b13e24(lVar5,9,*(undefined8 *)
                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                    lVar8 = *(long *)(lVar5 + 0x10);
                    lVar9 = *(long *)puVar2;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar8 == 0) goto LAB_090d615c;
                  }
                  uVar1 = *(uint *)(lVar5 + 0x18);
                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                    *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 10;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  }
                  else {
                    FUN_06b13e24(lVar5,10,*(undefined8 *)
                                           (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                    lVar8 = *(long *)(lVar5 + 0x10);
                    lVar9 = *(long *)puVar2;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar8 == 0) goto LAB_090d615c;
                  }
                  uVar1 = *(uint *)(lVar5 + 0x18);
                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                    *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  }
                  else {
                    FUN_06b13e24(lVar5,0xb,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                    lVar8 = *(long *)(lVar5 + 0x10);
                    lVar9 = *(long *)puVar2;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar8 == 0) goto LAB_090d615c;
                  }
                  uVar1 = *(uint *)(lVar5 + 0x18);
                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                    *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  }
                  else {
                    FUN_06b13e24(lVar5,0xc,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                    lVar8 = *(long *)(lVar5 + 0x10);
                    lVar9 = *(long *)puVar2;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar8 == 0) goto LAB_090d615c;
                  }
                  uVar1 = *(uint *)(lVar5 + 0x18);
                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                    *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  }
                  else {
                    FUN_06b13e24(lVar5,0xd,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                    lVar8 = *(long *)(lVar5 + 0x10);
                    lVar9 = *(long *)puVar2;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar8 == 0) goto LAB_090d615c;
                  }
                  uVar1 = *(uint *)(lVar5 + 0x18);
                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                    *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  }
                  else {
                    FUN_06b13e24(lVar5,0xe,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                    lVar8 = *(long *)(lVar5 + 0x10);
                    lVar9 = *(long *)puVar2;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar8 == 0) goto LAB_090d615c;
                  }
                  uVar1 = *(uint *)(lVar5 + 0x18);
                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                    *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  }
                  else {
                    FUN_06b13e24(lVar5,0xf,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                    lVar8 = *(long *)(lVar5 + 0x10);
                    lVar9 = *(long *)puVar2;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar8 == 0) goto LAB_090d615c;
                  }
                  uVar1 = *(uint *)(lVar5 + 0x18);
                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                    *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  }
                  else {
                    FUN_06b13e24(lVar5,0x10,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                    lVar8 = *(long *)(lVar5 + 0x10);
                    lVar9 = *(long *)puVar2;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar8 == 0) goto LAB_090d615c;
                  }
                  uVar1 = *(uint *)(lVar5 + 0x18);
                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                    *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  }
                  else {
                    FUN_06b13e24(lVar5,0x11,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                    lVar8 = *(long *)(lVar5 + 0x10);
                    lVar9 = *(long *)puVar2;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar8 == 0) goto LAB_090d615c;
                  }
                  uVar1 = *(uint *)(lVar5 + 0x18);
                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                    *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  }
                  else {
                    FUN_06b13e24(lVar5,0x12,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                    lVar8 = *(long *)(lVar5 + 0x10);
                    lVar9 = *(long *)puVar2;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar8 == 0) goto LAB_090d615c;
                  }
                  uVar1 = *(uint *)(lVar5 + 0x18);
                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                    *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 2;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  }
                  else {
                    FUN_06b13e24(lVar5,2,*(undefined8 *)
                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                    lVar8 = *(long *)(lVar5 + 0x10);
                    lVar9 = *(long *)puVar2;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar8 == 0) goto LAB_090d615c;
                  }
                  uVar1 = *(uint *)(lVar5 + 0x18);
                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                    *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 3;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  }
                  else {
                    FUN_06b13e24(lVar5,3,*(undefined8 *)
                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                    lVar8 = *(long *)(lVar5 + 0x10);
                    lVar9 = *(long *)puVar2;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar8 == 0) goto LAB_090d615c;
                  }
                  uVar1 = *(uint *)(lVar5 + 0x18);
                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                    *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 4;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  }
                  else {
                    FUN_06b13e24(lVar5,4,*(undefined8 *)
                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                    lVar8 = *(long *)(lVar5 + 0x10);
                    lVar9 = *(long *)puVar2;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar8 == 0) goto LAB_090d615c;
                  }
                  puVar2 = PTR_DAT_0ac79908;
                  uVar1 = *(uint *)(lVar5 + 0x18);
                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                    *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 5;
                  }
                  else {
                    FUN_06b13e24(lVar5,5,*(undefined8 *)
                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                  }
                  plVar6 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 0x20);
                  *plVar6 = lVar5;
                  thunk_FUN_049ee3d8(plVar6,lVar5);
                  uVar4 = FUN_04947fd0(*unaff_x22,5);
                  FUN_08c82ec4(uVar4,*(undefined8 *)puVar2,0);
                  puVar7 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x28);
                  *puVar7 = uVar4;
                  thunk_FUN_049ee3d8(puVar7,uVar4);
                  return;
                }
              }
LAB_090d615c:
                    /* WARNING: Subroutine does not return */
              FUN_0494818c();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


