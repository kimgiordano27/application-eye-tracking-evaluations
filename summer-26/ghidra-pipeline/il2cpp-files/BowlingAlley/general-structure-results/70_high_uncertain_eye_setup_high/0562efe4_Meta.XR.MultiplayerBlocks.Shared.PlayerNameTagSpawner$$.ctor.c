/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.PlayerNameTagSpawner$$.ctor
ENTRY_POINT: 0562efe4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_MultiplayerBlocks_Shared_PlayerNameTagSpawner___ctor(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x21;
  long *plVar11;
  int iVar12;
  
  lVar6 = *(long *)(unaff_x21 + 0x10);
  if (lVar6 == 0) {
LAB_0562f158:
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  uVar1 = *(uint *)(lVar6 + 0x18);
  iVar12 = 0;
  if (uVar1 != 0) {
    iVar12 = param_1 / (int)uVar1;
  }
  uVar2 = param_1 - iVar12 * uVar1;
  if (uVar1 <= uVar2) {
LAB_0562f118:
                    /* WARNING: Subroutine does not return */
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
  }
  uVar1 = *(int *)(lVar6 + (long)(int)uVar2 * 4 + 0x20) - 1;
  if (-1 < (int)uVar1) {
    lVar6 = *(long *)(unaff_x21 + 0x18);
    if (lVar6 == 0) goto LAB_0562f158;
    uVar7 = *(undefined8 *)(lVar6 + 0x18);
    iVar12 = 0;
    do {
      if ((uint)uVar7 <= uVar1) goto LAB_0562f118;
      if (*(int *)(lVar6 + (ulong)uVar1 * 0x10 + 0x20) == param_1) {
        plVar11 = *(long **)(unaff_x21 + 0x30);
        if (plVar11 == (long *)0x0) goto LAB_0562f158;
        lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
        uVar7 = *(undefined8 *)(lVar6 + (ulong)uVar1 * 0x10 + 0x28);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_032934b8(lVar5);
        }
        lVar8 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar5) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0562f0b8;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)FUN_032937ac(plVar11,lVar5,0);
LAB_0562f0b8:
        uVar9 = (*(code *)*puVar3)(plVar11,uVar7);
        if ((uVar9 & 1) != 0) {
          return uVar1;
        }
        uVar7 = *(undefined8 *)(lVar6 + 0x18);
      }
      if ((int)(uint)uVar7 <= iVar12) {
        thunk_FUN_032e1da0(PTR_DAT_07279578);
        uVar7 = thunk_FUN_032a56a0();
        uVar4 = thunk_FUN_032e1da0(PTR_DAT_07282490);
        FUN_0592371c(uVar7,uVar4,0);
                    /* WARNING: Subroutine does not return */
        FUN_032d5dbc(uVar7);
      }
      if ((uint)uVar7 <= uVar1) goto LAB_0562f118;
      uVar1 = *(uint *)(lVar6 + (ulong)uVar1 * 0x10 + 0x24);
      iVar12 = iVar12 + 1;
    } while (-1 < (int)uVar1);
  }
  return 0xffffffff;
}


