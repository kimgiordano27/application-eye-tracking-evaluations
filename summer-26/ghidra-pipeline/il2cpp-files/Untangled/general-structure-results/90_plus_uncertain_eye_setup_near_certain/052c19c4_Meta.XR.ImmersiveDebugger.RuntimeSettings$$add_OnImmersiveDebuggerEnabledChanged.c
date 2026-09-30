/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$add_OnImmersiveDebuggerEnabledChanged
ENTRY_POINT: 052c19c4
PROGRAM: Untangled-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_RuntimeSettings__add_OnImmersiveDebuggerEnabledChanged
          (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  long unaff_x19;
  uint unaff_w22;
  uint uVar10;
  int unaff_w23;
  long lVar11;
  int iVar12;
  long unaff_x25;
  long unaff_x26;
  undefined8 uVar13;
  int unaff_w27;
  undefined4 uVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  undefined8 uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  ulong uVar23;
  ulong uVar24;
  int unaff_s10;
  float fVar25;
  undefined4 uVar26;
  
  lVar6 = FUN_03fd09cc();
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x10) != 0)) {
    uVar16 = FUN_066d3ed0(*(long *)(lVar6 + 0x10),0);
    if (*(long *)(lVar6 + 0x10) != 0) {
      uVar19 = param_2;
      uVar22 = param_3;
      uVar14 = FUN_066d4b64(*(long *)(lVar6 + 0x10),0);
                    /* try { // try from 052c1a0c to 053c1a33 has its CatchHandler @ 052c1df8 */
      if ((*(long *)(unaff_x19 + 0xb0) != 0) &&
         (lVar7 = FUN_052c72b4(*(long *)(unaff_x19 + 0xb0),0), puVar1 = PTR_DAT_06d3d338, lVar7 != 0
         )) {
        if (*(uint *)(lVar7 + 0x18) <= unaff_w22) {
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_CustomIntegrationConfigClassName:
                    /* WARNING: Subroutine does not return */
          FUN_02f080c8();
        }
        lVar7 = *(long *)(lVar7 + unaff_x25 * 8 + 0x20);
        if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x10), lVar7 != 0)) {
                    /* try { // try from 052c1a4c to 053c1a8f has its CatchHandler @ 052c1df0 */
          lVar7 = FUN_03fd09cc(lVar7,unaff_w27,*(undefined8 *)PTR_DAT_06d3d338);
          if ((*(long *)(unaff_x19 + 0xb8) != 0) &&
             (lVar8 = FUN_052c72b4(*(long *)(unaff_x19 + 0xb8),0), lVar8 != 0)) {
            if (*(uint *)(lVar8 + 0x18) <= unaff_w22)
            goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_CustomIntegrationConfigClassName;
            lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
                    /* try { // try from 052c1a90 to 053c1b8f has its CatchHandler @ 052c1848 */
            if ((((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x10), lVar8 != 0)) &&
                (lVar8 = FUN_03fd09cc(lVar8,unaff_w27,*(undefined8 *)puVar1), lVar7 != 0)) &&
               (lVar8 != 0)) {
              fVar25 = (float)unaff_w23 / (float)unaff_s10;
              fVar15 = fVar25;
              if (1.0 < fVar25) {
                fVar15 = 1.0;
              }
              if (fVar25 < 0.0) {
                fVar15 = 0.0;
              }
              if (*(long *)(lVar6 + 0x10) != 0) {
                fVar18 = (float)*(undefined8 *)(lVar7 + 0x10);
                fVar25 = (float)((ulong)*(undefined8 *)(lVar7 + 0x10) >> 0x20);
                fVar25 = fVar25 + ((float)((ulong)*(undefined8 *)(lVar8 + 0x10) >> 0x20) - fVar25) *
                                  fVar15;
                FUN_066d3f5c(CONCAT44(fVar25,fVar18 + ((float)*(undefined8 *)(lVar8 + 0x10) - fVar18
                                                      ) * fVar15),fVar25,
                             *(float *)(lVar7 + 0x18) +
                             fVar15 * (*(float *)(lVar8 + 0x18) - *(float *)(lVar7 + 0x18)),
                             *(long *)(lVar6 + 0x10),0);
                uVar20 = (ulong)*(uint *)(lVar7 + 0x20);
                uVar23 = (ulong)*(uint *)(lVar7 + 0x24);
                lVar11 = *(long *)(lVar6 + 0x10);
                FUN_066bd920(*(undefined4 *)(lVar7 + 0x1c),uVar20,uVar23,
                             *(undefined4 *)(lVar7 + 0x28),*(undefined4 *)(lVar8 + 0x1c),
                             *(undefined4 *)(lVar8 + 0x20),*(undefined4 *)(lVar8 + 0x24),
                             *(undefined4 *)(lVar8 + 0x28),0);
                if (lVar11 != 0) {
                  FUN_066d4bec(lVar11,0);
                  lVar7 = FUN_052c211c();
                  puVar3 = PTR_DAT_06d09118;
                  puVar2 = PTR_DAT_06d03000;
                  puVar1 = PTR_DAT_06d02c10;
                  if (*(long *)(unaff_x26 + 0x20) != 0) {
                    if ((*(int *)(*(long *)(unaff_x26 + 0x20) + 0x18) + -1 == unaff_w27) ||
                       (*(char *)(unaff_x19 + 0x2c) == '\0')) {
                      if (lVar7 == 0) goto LAB_052c1da4;
                      if (0 < *(int *)(lVar7 + 0x18)) {
                        iVar12 = 0;
                        do {
                          FUN_0407af38(lVar7,iVar12,*(undefined8 *)puVar3);
                          if (*(long *)(lVar6 + 0x10) == 0) goto LAB_052c1da4;
                          uVar17 = FUN_066d31a4(*(long *)(lVar6 + 0x10),0);
                          uVar26 = *(undefined4 *)(unaff_x19 + 0x28);
                          uVar13 = *(undefined8 *)(unaff_x19 + 0x60);
                          uVar4 = FUN_066ca064(*(undefined4 *)(unaff_x19 + 0x58),0);
                          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                            thunk_FUN_02f12b58(*(long *)puVar2);
                          }
                          uVar21 = uVar20;
                          uVar24 = uVar23;
                          uVar5 = FUN_0673f798(uVar17,uVar20,uVar23,uVar26,uVar13,uVar4,1,0);
                          if (0 < (int)uVar5) {
                            if (*(char *)(unaff_x19 + 0x52) != '\0') {
                              FUN_052c1f7c(uVar17,uVar20,uVar23);
                            }
                            puVar2 = PTR_DAT_06d3d400;
                            puVar1 = PTR_DAT_06d02708;
                            if (*(char *)(unaff_x19 + 0x53) == '\0')
                            goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_MeshRendererLayer;
                            uVar10 = 0;
                            goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ShowErrorLog;
                          }
                          if (*(char *)(unaff_x19 + 0x52) != '\0') {
                            if (DAT_071babf5 == '\0') {
                              FUN_02f07e70(puVar1);
                              DAT_071babf5 = '\x01';
                            }
                            puVar9 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
                            uVar21 = (ulong)(uint)puVar9[1];
                            uVar24 = (ulong)(uint)puVar9[2];
                            FUN_052c1f7c(*puVar9);
                          }
                          iVar12 = iVar12 + 1;
                          uVar20 = uVar21;
                          uVar23 = uVar24;
                        } while (iVar12 < *(int *)(lVar7 + 0x18));
                      }
                    }
                    return 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_052c1da4;
  while( true ) {
    uVar13 = FUN_066cd398(*(long *)(lVar6 + 0x10),0);
    lVar7 = *(long *)(unaff_x19 + 0x60);
    if (lVar7 == 0) goto LAB_052c1da4;
    if (*(uint *)(lVar7 + 0x18) <= uVar10)
    goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_CustomIntegrationConfigClassName;
    lVar7 = *(long *)(lVar7 + (long)(int)uVar10 * 8 + 0x20);
    if (lVar7 == 0) goto LAB_052c1da4;
    uVar17 = FUN_066cd398(lVar7,0);
    uVar13 = FUN_05465414(uVar13,*(undefined8 *)puVar2,uVar17,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*(long *)puVar1);
    }
    FUN_06693690(uVar13,0);
    uVar10 = uVar10 + 1;
    if (uVar5 == uVar10) break;
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ShowErrorLog:
    if (*(long *)(lVar6 + 0x10) == 0) goto LAB_052c1da4;
  }
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_MeshRendererLayer:
  if (*(long *)(lVar6 + 0x10) != 0) {
    FUN_066d3f5c(uVar16,param_2,param_3,*(long *)(lVar6 + 0x10),0);
    if (*(long *)(lVar6 + 0x10) != 0) {
      FUN_066d4bec(uVar14,(int)uVar19,(int)uVar22,param_4,*(long *)(lVar6 + 0x10),0);
      return 1;
    }
  }
LAB_052c1da4:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


