/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.MrukOnDiscoveryFinished$$.ctor
ENTRY_POINT: 04a6dddc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnDiscoveryFinished___ctor(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  long in_x9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  int unaff_w22;
  long *plVar14;
  long unaff_x24;
  uint unaff_w25;
  int iVar15;
  long unaff_x28;
  long in_stack_00000000;
  long lStack0000000000000008;
  
  uVar8 = *(undefined8 *)(in_x9 + 0x18);
  iVar15 = 0;
  lVar11 = in_x9 + 0x20;
  uVar13 = 0xffffffff;
  lStack0000000000000008 = in_x9;
  do {
    if ((uint)uVar8 <= unaff_w25) goto LAB_04a6dfa8;
    puVar1 = (undefined4 *)(lVar11 + (ulong)unaff_w25 * 0x10);
    if (*(int *)(lVar11 + (ulong)unaff_w25 * 0x10) == unaff_w22) {
      plVar14 = *(long **)(unaff_x28 + 0x30);
      if (plVar14 == (long *)0x0) {
LAB_04a6dfe8:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar8 = *(undefined8 *)(puVar1 + 2);
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02b76218(lVar6);
      }
      lVar9 = *plVar14;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar6) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnDiscoveryFinished__BeginInvoke;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)FUN_02b7654c(plVar14,lVar6,0);
Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnDiscoveryFinished__BeginInvoke:
      uVar10 = (*(code *)*puVar4)(plVar14,uVar8);
      if ((uVar10 & 1) != 0) {
        if ((int)(uint)uVar13 < 0) {
          uVar7 = *(uint *)(lStack0000000000000008 + 0x18);
          if (uVar7 <= unaff_w25) goto LAB_04a6dfa8;
          lVar11 = *(long *)(unaff_x28 + 0x10);
          if (lVar11 == 0) goto LAB_04a6dfe8;
          if (*(uint *)(lVar11 + 0x18) <= (uint)in_stack_00000000) goto LAB_04a6dfa8;
          *(int *)(lVar11 + in_stack_00000000 * 4 + 0x20) = puVar1[1] + 1;
        }
        else {
          uVar7 = *(uint *)(lStack0000000000000008 + 0x18);
          if ((uVar7 <= unaff_w25) || (uVar7 <= (uint)uVar13)) goto LAB_04a6dfa8;
          *(undefined4 *)(lVar11 + uVar13 * 0x10 + 4) = puVar1[1];
        }
        if (unaff_w25 < uVar7) {
          uVar2 = *(undefined4 *)(unaff_x28 + 0x28);
          iVar15 = *(int *)(unaff_x28 + 0x20);
          iVar3 = *(int *)(unaff_x28 + 0x38);
          *puVar1 = 0xffffffff;
          puVar1[1] = uVar2;
          iVar15 = iVar15 + -1;
          *(int *)(unaff_x28 + 0x20) = iVar15;
          *(int *)(unaff_x28 + 0x38) = iVar3 + 1;
          if (iVar15 == 0) {
            unaff_w25 = 0xffffffff;
            *(undefined4 *)(unaff_x28 + 0x24) = 0;
          }
          *(uint *)(unaff_x28 + 0x28) = unaff_w25;
          return 1;
        }
        goto LAB_04a6dfa8;
      }
      uVar8 = *(undefined8 *)(lStack0000000000000008 + 0x18);
    }
    if ((int)(uint)uVar8 <= iVar15) {
      thunk_FUN_02ba3594(PTR_DAT_0631cb60);
      uVar8 = thunk_FUN_02b79644();
      uVar5 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
      FUN_04d7b3f4(uVar8,uVar5,0);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar8,unaff_x24);
    }
    if ((uint)uVar8 <= unaff_w25) {
LAB_04a6dfa8:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    iVar15 = iVar15 + 1;
    uVar13 = (ulong)unaff_w25;
    unaff_w25 = puVar1[1];
    if ((int)puVar1[1] < 0) {
      return 0;
    }
  } while( true );
}


