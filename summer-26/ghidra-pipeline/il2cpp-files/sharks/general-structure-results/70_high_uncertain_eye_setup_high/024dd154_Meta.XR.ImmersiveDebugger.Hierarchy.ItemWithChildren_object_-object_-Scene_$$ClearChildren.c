/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.ItemWithChildren<object,-object,-Scene>$$ClearChildren
ENTRY_POINT: 024dd154
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_Hierarchy_ItemWithChildren<object,_object,_Scene>__ClearChildren
          (long param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  uint in_w9;
  ulong uVar7;
  int *piVar8;
  long unaff_x20;
  undefined8 unaff_x21;
  int unaff_w22;
  long unaff_x23;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  uint *in_stack_00000008;
  
  iVar14 = 0;
  if (in_w9 != 0) {
    iVar14 = param_2 / (int)in_w9;
  }
  uVar13 = param_2 - iVar14 * in_w9;
  if (uVar13 < in_w9) {
    lVar12 = *(long *)(unaff_x20 + 0x18);
    uVar10 = *(int *)(param_1 + (long)(int)uVar13 * 4 + 0x20) - 1;
    if (-1 < (int)uVar10) {
      if (lVar12 == 0) goto LAB_024dd3b4;
      uVar5 = *(undefined8 *)(lVar12 + 0x18);
      iVar14 = 0;
      do {
        uVar11 = (ulong)uVar10;
        if ((uint)uVar5 <= uVar10) goto LAB_024dd374;
        if (*(int *)(lVar12 + uVar11 * 0x10 + 0x20) == unaff_w22) {
          plVar9 = *(long **)(unaff_x20 + 0x30);
          if (plVar9 == (long *)0x0) goto LAB_024dd3b4;
          lVar4 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x20);
          uVar5 = *(undefined8 *)(lVar12 + uVar11 * 0x10 + 0x28);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0185daa4(lVar4);
          }
          lVar6 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar4) {
                puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_024dd218;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar2 = (undefined8 *)FUN_0185dba8(plVar9,lVar4,0);
LAB_024dd218:
          uVar7 = (*(code *)*puVar2)(plVar9,uVar5);
          if ((uVar7 & 1) != 0) {
            uVar5 = 0;
            goto LAB_024dd34c;
          }
          uVar5 = *(undefined8 *)(lVar12 + 0x18);
        }
        if ((int)(uint)uVar5 <= iVar14) {
          thunk_FUN_01851c08(PTR_DAT_037f8d50);
          uVar5 = thunk_FUN_01861bbc();
          uVar3 = thunk_FUN_01851c08(PTR_DAT_037fb170);
          FUN_02bcf690(uVar5,uVar3,0);
                    /* WARNING: Subroutine does not return */
          FUN_017fc474(uVar5);
        }
        if ((uint)uVar5 <= uVar10) goto LAB_024dd374;
        uVar10 = *(uint *)(lVar12 + uVar11 * 0x10 + 0x24);
        iVar14 = iVar14 + 1;
      } while (-1 < (int)uVar10);
    }
    uVar10 = *(uint *)(unaff_x20 + 0x28);
    if ((int)uVar10 < 0) {
      if (lVar12 == 0) goto LAB_024dd3b4;
      uVar10 = *(uint *)(unaff_x20 + 0x24);
      if (uVar10 == *(uint *)(lVar12 + 0x18)) {
        FUN_024db9cc();
        if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_024dd3b4;
        uVar10 = *(uint *)(unaff_x20 + 0x24);
        lVar12 = *(long *)(unaff_x20 + 0x18);
        iVar14 = *(int *)(*(long *)(unaff_x20 + 0x10) + 0x18);
        *(uint *)(unaff_x20 + 0x24) = uVar10 + 1;
        if (lVar12 == 0) goto LAB_024dd3b4;
        iVar1 = 0;
        if (iVar14 != 0) {
          iVar1 = unaff_w22 / iVar14;
        }
        uVar13 = unaff_w22 - iVar1 * iVar14;
      }
      else {
        *(uint *)(unaff_x20 + 0x24) = uVar10 + 1;
      }
    }
    else {
      if (lVar12 == 0) goto LAB_024dd3b4;
      if (*(uint *)(lVar12 + 0x18) <= uVar10) goto LAB_024dd374;
      *(undefined4 *)(unaff_x20 + 0x28) = *(undefined4 *)(lVar12 + (ulong)uVar10 * 0x10 + 0x24);
    }
    if (uVar10 < *(uint *)(lVar12 + 0x18)) {
      lVar4 = lVar12 + (long)(int)uVar10 * 0x10;
      *(int *)(lVar4 + 0x20) = unaff_w22;
      *(undefined8 *)(lVar4 + 0x28) = unaff_x21;
      lVar4 = *(long *)(unaff_x20 + 0x10);
      if (lVar4 == 0) {
LAB_024dd3b4:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      if (uVar13 < *(uint *)(lVar4 + 0x18)) {
        lVar4 = lVar4 + (long)(int)uVar13 * 4;
        *(int *)(lVar12 + (long)(int)uVar10 * 0x10 + 0x24) = *(int *)(lVar4 + 0x20) + -1;
        *(uint *)(lVar4 + 0x20) = uVar10 + 1;
        uVar5 = 1;
        *(int *)(unaff_x20 + 0x20) = *(int *)(unaff_x20 + 0x20) + 1;
        *(int *)(unaff_x20 + 0x38) = *(int *)(unaff_x20 + 0x38) + 1;
LAB_024dd34c:
        *in_stack_00000008 = uVar10;
        return uVar5;
      }
    }
  }
LAB_024dd374:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


