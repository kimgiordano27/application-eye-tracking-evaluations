/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.DebugInterface$$.ctor
ENTRY_POINT: 04a394b0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_UserInterface_DebugInterface___ctor
          (long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  int iVar13;
  uint uVar14;
  
  if (param_1 != 0) {
    iVar3 = FUN_04a3c900();
    lVar7 = *(long *)(param_2 + 0x10);
    if (lVar7 == 0) {
LAB_04a39688:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar14 = *(uint *)(lVar7 + 0x18);
    iVar13 = 0;
    if (uVar14 != 0) {
      iVar13 = iVar3 / (int)uVar14;
    }
    uVar2 = iVar3 - iVar13 * uVar14;
    if (uVar14 <= uVar2) {
LAB_04a39648:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    uVar14 = *(int *)(lVar7 + (ulong)uVar2 * 4 + 0x20) - 1;
    if (-1 < (int)uVar14) {
      lVar7 = *(long *)(param_2 + 0x18);
      if (lVar7 == 0) goto LAB_04a39688;
      uVar8 = *(undefined8 *)(lVar7 + 0x18);
      iVar13 = 0;
      lVar1 = lVar7 + 0x20;
      do {
        if ((uint)uVar8 <= uVar14) goto LAB_04a39648;
        if (*(int *)(lVar1 + (ulong)uVar14 * 0x18) == iVar3) {
          plVar12 = *(long **)(param_2 + 0x30);
          if (plVar12 == (long *)0x0) goto LAB_04a39688;
          lVar6 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x20);
          lVar9 = lVar1 + (ulong)uVar14 * 0x18;
          uVar8 = *(undefined8 *)(lVar9 + 8);
          uVar5 = *(undefined8 *)(lVar9 + 0x10);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_02b76218(lVar6);
          }
          lVar9 = *plVar12;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar6) {
                puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_04a395c8;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar4 = (undefined8 *)FUN_02b7654c(plVar12,lVar6,0);
LAB_04a395c8:
          uVar10 = (*(code *)*puVar4)(plVar12,uVar8,uVar5,param_3,param_4,puVar4[1]);
          if ((uVar10 & 1) != 0) {
            return 1;
          }
          uVar8 = *(undefined8 *)(lVar7 + 0x18);
        }
        if ((int)(uint)uVar8 <= iVar13) {
          thunk_FUN_02ba3594(PTR_DAT_0631cb60);
          uVar8 = thunk_FUN_02b79644();
          uVar5 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
          FUN_04d7b3f4(uVar8,uVar5,0);
                    /* WARNING: Subroutine does not return */
          FUN_02b3c988(uVar8,param_5);
        }
        if ((uint)uVar8 <= uVar14) goto LAB_04a39648;
        iVar13 = iVar13 + 1;
        uVar14 = *(uint *)(lVar1 + (ulong)uVar14 * 0x18 + 4);
      } while (-1 < (int)uVar14);
    }
  }
  return 0;
}


