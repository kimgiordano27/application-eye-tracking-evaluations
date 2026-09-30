/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AnchorDebugVisual$$Awake
ENTRY_POINT: 0562f954
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MultiplayerBlocks_Colocation_AnchorDebugVisual__Awake(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 in_CY;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  ulong unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  int unaff_w22;
  long unaff_x23;
  long *plVar10;
  uint uVar11;
  long unaff_x27;
  uint unaff_w28;
  int unaff_w29;
  uint *in_stack_00000008;
  
  do {
    if ((bool)in_CY) {
LAB_0562fa94:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    uVar11 = *(uint *)(unaff_x27 + unaff_x19 * 0x10 + 0x24);
    unaff_x19 = (ulong)uVar11;
    unaff_w29 = unaff_w29 + 1;
    if ((int)uVar11 < 0) {
      uVar11 = *(uint *)(unaff_x20 + 0x28);
      if ((int)uVar11 < 0) {
        if (unaff_x27 == 0) goto LAB_0562fad4;
        uVar11 = *(uint *)(unaff_x20 + 0x24);
        if (uVar11 == *(uint *)(unaff_x27 + 0x18)) {
          FUN_0562e0b4();
          if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0562fad4;
          uVar11 = *(uint *)(unaff_x20 + 0x24);
          unaff_x27 = *(long *)(unaff_x20 + 0x18);
          iVar1 = *(int *)(*(long *)(unaff_x20 + 0x10) + 0x18);
          *(uint *)(unaff_x20 + 0x24) = uVar11 + 1;
          if (unaff_x27 == 0) goto LAB_0562fad4;
          iVar2 = 0;
          if (iVar1 != 0) {
            iVar2 = unaff_w22 / iVar1;
          }
          unaff_w28 = unaff_w22 - iVar2 * iVar1;
        }
        else {
          *(uint *)(unaff_x20 + 0x24) = uVar11 + 1;
        }
      }
      else {
        if (unaff_x27 == 0) goto LAB_0562fad4;
        if (*(uint *)(unaff_x27 + 0x18) <= uVar11) goto LAB_0562fa94;
        *(undefined4 *)(unaff_x20 + 0x28) = *(undefined4 *)(unaff_x27 + (ulong)uVar11 * 0x10 + 0x24)
        ;
      }
      if (uVar11 < *(uint *)(unaff_x27 + 0x18)) {
        lVar7 = unaff_x27 + (long)(int)uVar11 * 0x10;
        *(int *)(lVar7 + 0x20) = unaff_w22;
        *(undefined8 *)(lVar7 + 0x28) = unaff_x21;
        lVar7 = *(long *)(unaff_x20 + 0x10);
        if (lVar7 == 0) {
LAB_0562fad4:
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        if ((unaff_w28 < *(uint *)(lVar7 + 0x18)) && (uVar11 < *(uint *)(unaff_x27 + 0x18))) {
          piVar8 = (int *)(lVar7 + (long)(int)unaff_w28 * 4 + 0x20);
          *(int *)(unaff_x27 + (long)(int)uVar11 * 0x10 + 0x24) = *piVar8 + -1;
          *piVar8 = uVar11 + 1;
          uVar4 = 1;
          *(int *)(unaff_x20 + 0x20) = *(int *)(unaff_x20 + 0x20) + 1;
          *(int *)(unaff_x20 + 0x38) = *(int *)(unaff_x20 + 0x38) + 1;
LAB_0562fa6c:
          *in_stack_00000008 = uVar11;
          return uVar4;
        }
      }
      goto LAB_0562fa94;
    }
    if ((uint)param_1 <= uVar11) goto LAB_0562fa94;
    if (*(int *)(unaff_x27 + unaff_x19 * 0x10 + 0x20) == unaff_w22) {
      plVar10 = *(long **)(unaff_x20 + 0x30);
      if (plVar10 == (long *)0x0) goto LAB_0562fad4;
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x20);
      uVar4 = *(undefined8 *)(unaff_x27 + unaff_x19 * 0x10 + 0x28);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_032934b8(lVar7);
      }
      lVar6 = *plVar10;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar7) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0562f92c;
          }
          uVar9 = uVar9 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_032937ac(plVar10,lVar7,0);
LAB_0562f92c:
      uVar9 = (*(code *)*puVar3)(plVar10,uVar4);
      if ((uVar9 & 1) != 0) {
        uVar4 = 0;
        goto LAB_0562fa6c;
      }
      param_1 = *(undefined8 *)(unaff_x27 + 0x18);
    }
    if ((int)(uint)param_1 <= unaff_w29) {
      thunk_FUN_032e1da0(PTR_DAT_07279578);
      uVar4 = thunk_FUN_032a56a0();
      uVar5 = thunk_FUN_032e1da0(PTR_DAT_07282490);
      FUN_0592371c(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
      FUN_032d5dbc(uVar4);
    }
    in_CY = (uint)param_1 <= uVar11;
  } while( true );
}


