/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.MrukOnSceneAnchorRemoved$$EndInvoke
ENTRY_POINT: 04a6ddc4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnSceneAnchorRemoved__EndInvoke(long param_1)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long in_x10;
  int *piVar13;
  ulong uVar14;
  int unaff_w22;
  long *plVar15;
  long unaff_x24;
  uint uVar16;
  ulong uVar17;
  int iVar18;
  long unaff_x28;
  long lStack0000000000000000;
  
  uVar16 = *(int *)(param_1 + 0x20) - 1;
  if (-1 < (int)uVar16) {
    lVar11 = *(long *)(unaff_x28 + 0x18);
    if (lVar11 == 0) {
LAB_04a6dfe8:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar9 = *(undefined8 *)(lVar11 + 0x18);
    iVar18 = 0;
    lVar1 = lVar11 + 0x20;
    uVar14 = 0xffffffff;
    lStack0000000000000000 = in_x10;
    do {
      uVar17 = (ulong)uVar16;
      if ((uint)uVar9 <= uVar16) goto LAB_04a6dfa8;
      puVar2 = (undefined4 *)(lVar1 + uVar17 * 0x10);
      if (*(int *)(lVar1 + uVar17 * 0x10) == unaff_w22) {
        plVar15 = *(long **)(unaff_x28 + 0x30);
        if (plVar15 == (long *)0x0) goto LAB_04a6dfe8;
        uVar9 = *(undefined8 *)(puVar2 + 2);
        lVar7 = *(long *)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 0x20);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02b76218(lVar7);
        }
        lVar10 = *plVar15;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar7) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnDiscoveryFinished__BeginInvoke;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar5 = (undefined8 *)FUN_02b7654c(plVar15,lVar7,0);
Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnDiscoveryFinished__BeginInvoke:
        uVar12 = (*(code *)*puVar5)(plVar15,uVar9);
        if ((uVar12 & 1) != 0) {
          if ((int)(uint)uVar14 < 0) {
            uVar8 = *(uint *)(lVar11 + 0x18);
            if (uVar8 <= uVar16) goto LAB_04a6dfa8;
            lVar11 = *(long *)(unaff_x28 + 0x10);
            if (lVar11 == 0) goto LAB_04a6dfe8;
            if (*(uint *)(lVar11 + 0x18) <= (uint)lStack0000000000000000) goto LAB_04a6dfa8;
            *(int *)(lVar11 + lStack0000000000000000 * 4 + 0x20) = puVar2[1] + 1;
          }
          else {
            uVar8 = *(uint *)(lVar11 + 0x18);
            if ((uVar8 <= uVar16) || (uVar8 <= (uint)uVar14)) goto LAB_04a6dfa8;
            *(undefined4 *)(lVar1 + uVar14 * 0x10 + 4) = puVar2[1];
          }
          if (uVar16 < uVar8) {
            uVar3 = *(undefined4 *)(unaff_x28 + 0x28);
            iVar18 = *(int *)(unaff_x28 + 0x20);
            iVar4 = *(int *)(unaff_x28 + 0x38);
            *puVar2 = 0xffffffff;
            puVar2[1] = uVar3;
            iVar18 = iVar18 + -1;
            *(int *)(unaff_x28 + 0x20) = iVar18;
            *(int *)(unaff_x28 + 0x38) = iVar4 + 1;
            if (iVar18 == 0) {
              uVar16 = 0xffffffff;
              *(undefined4 *)(unaff_x28 + 0x24) = 0;
            }
            *(uint *)(unaff_x28 + 0x28) = uVar16;
            return 1;
          }
          goto LAB_04a6dfa8;
        }
        uVar9 = *(undefined8 *)(lVar11 + 0x18);
      }
      if ((int)(uint)uVar9 <= iVar18) {
        thunk_FUN_02ba3594(PTR_DAT_0631cb60);
        uVar9 = thunk_FUN_02b79644();
        uVar6 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
        FUN_04d7b3f4(uVar9,uVar6,0);
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar9,unaff_x24);
      }
      if ((uint)uVar9 <= uVar16) {
LAB_04a6dfa8:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      uVar16 = puVar2[1];
      iVar18 = iVar18 + 1;
      uVar14 = uVar17;
    } while (-1 < (int)uVar16);
  }
  return 0;
}


