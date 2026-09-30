/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$remove_OnImmersiveDebuggerEnabledChanged
ENTRY_POINT: 052c1aa0
PROGRAM: Untangled-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_15;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_RuntimeSettings__remove_OnImmersiveDebuggerEnabledChanged(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  long unaff_x19;
  long unaff_x21;
  uint uVar7;
  int unaff_w23;
  long lVar8;
  int iVar9;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined8 uVar10;
  int unaff_w27;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  int unaff_s10;
  float fVar18;
  undefined4 uVar19;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  if (param_1 != 0) {
    fVar18 = (float)unaff_w23 / (float)unaff_s10;
    fVar11 = fVar18;
    if (1.0 < fVar18) {
      fVar11 = 1.0;
    }
    if (fVar18 < 0.0) {
      fVar11 = 0.0;
    }
    if (*(long *)(unaff_x21 + 0x10) != 0) {
      fVar13 = (float)*(undefined8 *)(unaff_x24 + 0x10);
      fVar18 = (float)((ulong)*(undefined8 *)(unaff_x24 + 0x10) >> 0x20);
      fVar18 = fVar18 + ((float)((ulong)*(undefined8 *)(unaff_x25 + 0x10) >> 0x20) - fVar18) *
                        fVar11;
      FUN_066d3f5c(CONCAT44(fVar18,fVar13 + ((float)*(undefined8 *)(unaff_x25 + 0x10) - fVar13) *
                                            fVar11),fVar18,
                   *(float *)(unaff_x24 + 0x18) +
                   fVar11 * (*(float *)(unaff_x25 + 0x18) - *(float *)(unaff_x24 + 0x18)),
                   *(long *)(unaff_x21 + 0x10),0);
      uVar14 = (ulong)*(uint *)(unaff_x24 + 0x20);
      uVar16 = (ulong)*(uint *)(unaff_x24 + 0x24);
      lVar8 = *(long *)(unaff_x21 + 0x10);
      FUN_066bd920(*(undefined4 *)(unaff_x24 + 0x1c),uVar14,uVar16,*(undefined4 *)(unaff_x24 + 0x28)
                   ,*(undefined4 *)(unaff_x25 + 0x1c),*(undefined4 *)(unaff_x25 + 0x20),
                   *(undefined4 *)(unaff_x25 + 0x24),*(undefined4 *)(unaff_x25 + 0x28),0);
      if (lVar8 != 0) {
        FUN_066d4bec(lVar8,0);
        lVar8 = FUN_052c211c();
        puVar3 = PTR_DAT_06d09118;
        puVar2 = PTR_DAT_06d03000;
        puVar1 = PTR_DAT_06d02c10;
        if (*(long *)(unaff_x26 + 0x20) != 0) {
          if ((*(int *)(*(long *)(unaff_x26 + 0x20) + 0x18) + -1 == unaff_w27) ||
             (*(char *)(unaff_x19 + 0x2c) == '\0')) {
            if (lVar8 == 0) goto LAB_052c1da4;
            if (0 < *(int *)(lVar8 + 0x18)) {
              iVar9 = 0;
              do {
                FUN_0407af38(lVar8,iVar9,*(undefined8 *)puVar3);
                if (*(long *)(unaff_x21 + 0x10) == 0) goto LAB_052c1da4;
                uVar12 = FUN_066d31a4(*(long *)(unaff_x21 + 0x10),0);
                uVar19 = *(undefined4 *)(unaff_x19 + 0x28);
                uVar10 = *(undefined8 *)(unaff_x19 + 0x60);
                uVar4 = FUN_066ca064(*(undefined4 *)(unaff_x19 + 0x58),0);
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_02f12b58(*(long *)puVar2);
                }
                uVar15 = uVar14;
                uVar17 = uVar16;
                uVar5 = FUN_0673f798(uVar12,uVar14,uVar16,uVar19,uVar10,uVar4,1,0);
                if (0 < (int)uVar5) {
                  if (*(char *)(unaff_x19 + 0x52) != '\0') {
                    FUN_052c1f7c(uVar12,uVar14,uVar16);
                  }
                  puVar2 = PTR_DAT_06d3d400;
                  puVar1 = PTR_DAT_06d02708;
                  if (*(char *)(unaff_x19 + 0x53) == '\0')
                  goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_MeshRendererLayer;
                  uVar7 = 0;
                  goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ShowErrorLog;
                }
                if (*(char *)(unaff_x19 + 0x52) != '\0') {
                  if (DAT_071babf5 == '\0') {
                    FUN_02f07e70(puVar1);
                    DAT_071babf5 = '\x01';
                  }
                  puVar6 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
                  uVar15 = (ulong)(uint)puVar6[1];
                  uVar17 = (ulong)(uint)puVar6[2];
                  FUN_052c1f7c(*puVar6);
                }
                iVar9 = iVar9 + 1;
                uVar14 = uVar15;
                uVar16 = uVar17;
              } while (iVar9 < *(int *)(lVar8 + 0x18));
            }
          }
          return 0;
        }
      }
    }
  }
  goto LAB_052c1da4;
  while( true ) {
    uVar10 = FUN_066cd398(*(long *)(unaff_x21 + 0x10),0);
    lVar8 = *(long *)(unaff_x19 + 0x60);
    if (lVar8 == 0) goto LAB_052c1da4;
    if (*(uint *)(lVar8 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    lVar8 = *(long *)(lVar8 + (long)(int)uVar7 * 8 + 0x20);
    if (lVar8 == 0) goto LAB_052c1da4;
    uVar12 = FUN_066cd398(lVar8,0);
    uVar10 = FUN_05465414(uVar10,*(undefined8 *)puVar2,uVar12,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*(long *)puVar1);
    }
    FUN_06693690(uVar10,0);
    uVar7 = uVar7 + 1;
    if (uVar5 == uVar7) break;
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ShowErrorLog:
    if (*(long *)(unaff_x21 + 0x10) == 0) goto LAB_052c1da4;
  }
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_MeshRendererLayer:
  if (*(long *)(unaff_x21 + 0x10) != 0) {
    FUN_066d3f5c(*(long *)(unaff_x21 + 0x10),0);
    if (*(long *)(unaff_x21 + 0x10) != 0) {
      FUN_066d4bec(uStack000000000000001c,uStack0000000000000018,in_stack_00000010._4_4_,
                   *(long *)(unaff_x21 + 0x10),0);
      return 1;
    }
  }
LAB_052c1da4:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


