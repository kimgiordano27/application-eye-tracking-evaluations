/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AnchorDebugVisual$$get_DebugVisualsVisible
ENTRY_POINT: 0562f858
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MultiplayerBlocks_Colocation_AnchorDebugVisual__get_DebugVisualsVisible
          (long param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  uint *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x23;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  
  if (param_1 == 0) goto LAB_0562fad4;
  uVar10 = *(uint *)(param_1 + 0x18);
  iVar14 = 0;
  if (uVar10 != 0) {
    iVar14 = param_2 / (int)uVar10;
  }
  uVar13 = param_2 - iVar14 * uVar10;
  if (uVar13 < uVar10) {
    lVar12 = *(long *)(unaff_x20 + 0x18);
    uVar10 = *(int *)(param_1 + (long)(int)uVar13 * 4 + 0x20) - 1;
    if (-1 < (int)uVar10) {
      if (lVar12 == 0) goto LAB_0562fad4;
      uVar5 = *(undefined8 *)(lVar12 + 0x18);
      iVar14 = 0;
      do {
        uVar11 = (ulong)uVar10;
        if ((uint)uVar5 <= uVar10) goto LAB_0562fa94;
        if (*(int *)(lVar12 + uVar11 * 0x10 + 0x20) == param_2) {
          plVar9 = *(long **)(unaff_x20 + 0x30);
          if (plVar9 == (long *)0x0) goto LAB_0562fad4;
          lVar4 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x20);
          uVar5 = *(undefined8 *)(lVar12 + uVar11 * 0x10 + 0x28);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_032934b8(lVar4);
          }
          lVar6 = *plVar9;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == lVar4) {
                puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_0562f92c;
              }
              uVar8 = uVar8 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar8 != 0);
          }
          puVar2 = (undefined8 *)FUN_032937ac(plVar9,lVar4,0);
LAB_0562f92c:
          uVar8 = (*(code *)*puVar2)(plVar9,uVar5);
          if ((uVar8 & 1) != 0) {
            uVar5 = 0;
            goto LAB_0562fa6c;
          }
          uVar5 = *(undefined8 *)(lVar12 + 0x18);
        }
        if ((int)(uint)uVar5 <= iVar14) {
          thunk_FUN_032e1da0(PTR_DAT_07279578);
          uVar5 = thunk_FUN_032a56a0();
          uVar3 = thunk_FUN_032e1da0(PTR_DAT_07282490);
          FUN_0592371c(uVar5,uVar3,0);
                    /* WARNING: Subroutine does not return */
          FUN_032d5dbc(uVar5);
        }
        if ((uint)uVar5 <= uVar10) goto LAB_0562fa94;
        uVar10 = *(uint *)(lVar12 + uVar11 * 0x10 + 0x24);
        iVar14 = iVar14 + 1;
      } while (-1 < (int)uVar10);
    }
    uVar10 = *(uint *)(unaff_x20 + 0x28);
    if ((int)uVar10 < 0) {
      if (lVar12 == 0) goto LAB_0562fad4;
      uVar10 = *(uint *)(unaff_x20 + 0x24);
      if (uVar10 == *(uint *)(lVar12 + 0x18)) {
        FUN_0562e0b4();
        if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0562fad4;
        uVar10 = *(uint *)(unaff_x20 + 0x24);
        lVar12 = *(long *)(unaff_x20 + 0x18);
        iVar14 = *(int *)(*(long *)(unaff_x20 + 0x10) + 0x18);
        *(uint *)(unaff_x20 + 0x24) = uVar10 + 1;
        if (lVar12 == 0) goto LAB_0562fad4;
        iVar1 = 0;
        if (iVar14 != 0) {
          iVar1 = param_2 / iVar14;
        }
        uVar13 = param_2 - iVar1 * iVar14;
      }
      else {
        *(uint *)(unaff_x20 + 0x24) = uVar10 + 1;
      }
    }
    else {
      if (lVar12 == 0) goto LAB_0562fad4;
      if (*(uint *)(lVar12 + 0x18) <= uVar10) goto LAB_0562fa94;
      *(undefined4 *)(unaff_x20 + 0x28) = *(undefined4 *)(lVar12 + (ulong)uVar10 * 0x10 + 0x24);
    }
    if (uVar10 < *(uint *)(lVar12 + 0x18)) {
      lVar4 = lVar12 + (long)(int)uVar10 * 0x10;
      *(int *)(lVar4 + 0x20) = param_2;
      *(undefined8 *)(lVar4 + 0x28) = unaff_x21;
      lVar4 = *(long *)(unaff_x20 + 0x10);
      if (lVar4 == 0) {
LAB_0562fad4:
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if ((uVar13 < *(uint *)(lVar4 + 0x18)) && (uVar10 < *(uint *)(lVar12 + 0x18))) {
        piVar7 = (int *)(lVar4 + (long)(int)uVar13 * 4 + 0x20);
        *(int *)(lVar12 + (long)(int)uVar10 * 0x10 + 0x24) = *piVar7 + -1;
        *piVar7 = uVar10 + 1;
        uVar5 = 1;
        *(int *)(unaff_x20 + 0x20) = *(int *)(unaff_x20 + 0x20) + 1;
        *(int *)(unaff_x20 + 0x38) = *(int *)(unaff_x20 + 0x38) + 1;
LAB_0562fa6c:
        *unaff_x19 = uVar10;
        return uVar5;
      }
    }
  }
LAB_0562fa94:
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


