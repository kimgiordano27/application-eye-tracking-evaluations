/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.Item<__Il2CppFullySharedGenericType>$$get_TypedOwner
ENTRY_POINT: 024deac0
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


void Meta_XR_ImmersiveDebugger_Hierarchy_Item<__Il2CppFullySharedGenericType>__get_TypedOwner(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  FUN_017fc350();
  FUN_017fc350(PTR_DAT_037fb178);
  FUN_017fc350(PTR_DAT_037fadf8);
  FUN_017fc350(PTR_DAT_037fb180);
  FUN_017fc350(PTR_DAT_037fae08);
  *(undefined1 *)(unaff_x21 + 0xf2d) = 1;
  puVar1 = PTR_DAT_037f2c78;
  plVar8 = (long *)(unaff_x20 + 0x40);
  if (*plVar8 == 0) {
    return;
  }
  iVar2 = FUN_02ae1ed4(*plVar8,*(undefined8 *)PTR_DAT_037fb180,0);
  lVar6 = *(long *)puVar1;
  lVar9 = *plVar8;
  uVar11 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x110);
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01843fdc(lVar6);
  }
  uVar11 = FUN_02bddb5c(uVar11,0);
  if (lVar9 != 0) {
    lVar6 = FUN_02adfbec(lVar9,*(undefined8 *)PTR_DAT_037fadf8,uVar11,0);
    lVar9 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0185daa4(lVar9);
    }
    if (lVar6 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01861ac0(lVar6,lVar9);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc944(lVar6,lVar9);
      }
    }
    *(long *)(unaff_x20 + 0x30) = lVar4;
    lVar9 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0185daa4(lVar9);
    }
    if (lVar6 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01861ac0(lVar6,lVar9);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc944(lVar6,lVar9);
      }
    }
    thunk_FUN_0188fd20((long *)(unaff_x20 + 0x30),lVar4);
    *(undefined4 *)(unaff_x20 + 0x28) = 0xffffffff;
    if (iVar2 == 0) {
      *(undefined8 *)(unaff_x20 + 0x10) = 0;
      thunk_FUN_0188fd20((undefined8 *)(unaff_x20 + 0x10),0);
    }
    else {
      uVar11 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f5118,iVar2);
      *(undefined8 *)(unaff_x20 + 0x10) = uVar11;
      thunk_FUN_0188fd20();
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x118);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0185daa4();
      }
      uVar11 = FUN_017fc3f4(lVar6,iVar2);
      *(undefined8 *)(unaff_x20 + 0x18) = uVar11;
      thunk_FUN_0188fd20((undefined8 *)(unaff_x20 + 0x18));
      lVar6 = *(long *)(unaff_x20 + 0x40);
      uVar11 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x108);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      uVar11 = FUN_02bddb5c(uVar11,0);
      if (lVar6 == 0) goto LAB_024dedc4;
      lVar6 = FUN_02adfbec(lVar6,*(undefined8 *)PTR_DAT_037fb178,uVar11,0);
      lVar9 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0185daa4(lVar9);
      }
      if (lVar6 == 0) {
        thunk_FUN_01851c08(PTR_DAT_037fb188);
        uVar11 = thunk_FUN_01861bbc();
        uVar5 = thunk_FUN_01851c08(PTR_DAT_037fb190);
        FUN_02ad6d08(uVar11,uVar5,0);
                    /* WARNING: Subroutine does not return */
        FUN_017fc474(uVar11);
      }
      lVar4 = thunk_FUN_01861ac0(lVar6,lVar9);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc944(lVar6,lVar9);
      }
      if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
        uVar10 = 0;
        uVar7 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
        do {
          if (uVar7 <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5b0();
          }
          FUN_024e0cf4();
          uVar7 = (ulong)*(uint *)(lVar4 + 0x18);
          uVar10 = uVar10 + 1;
        } while ((long)uVar10 < (long)(int)*(uint *)(lVar4 + 0x18));
      }
    }
    if (*plVar8 != 0) {
      uVar3 = FUN_02ae1ed4(*plVar8,*(undefined8 *)PTR_DAT_037fae08,0);
      *(undefined4 *)(unaff_x20 + 0x38) = uVar3;
      *(undefined8 *)(unaff_x20 + 0x40) = 0;
      thunk_FUN_0188fd20(plVar8,0);
      return;
    }
  }
LAB_024dedc4:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


