/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.Item<__Il2CppFullySharedGenericType>$$SetOwner
ENTRY_POINT: 024deb58
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Hierarchy_Item<__Il2CppFullySharedGenericType>__SetOwner(void)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  long unaff_x23;
  ulong uVar7;
  long lVar8;
  long *unaff_x26;
  
                    /* catch() { ... } // from try @ 024dec98 with catch @ 024deb58
                       catch() { ... } // from try @ 024decd4 with catch @ 024deb58
                       catch() { ... } // from try @ 024ded10 with catch @ 024deb58
                       catch() { ... } // from try @ 024ded3c with catch @ 024deb58
                       catch() { ... } // from try @ 024dedb0 with catch @ 024deb58 */
  if (unaff_x23 != 0) {
    lVar2 = FUN_02adfbec();
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
                    /* try { // try from 024deb8c to 025deb8f has its CatchHandler @ 024dec98 */
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0185daa4(lVar8);
    }
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
                    /* try { // try from 024deba8 to 025dec97 has its CatchHandler @ 024deca4 */
      lVar3 = thunk_FUN_01861ac0(lVar2,lVar8);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc944(lVar2,lVar8);
      }
    }
    *(long *)(unaff_x20 + 0x30) = lVar3;
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0185daa4(lVar8);
    }
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = thunk_FUN_01861ac0(lVar2,lVar8);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc944(lVar2,lVar8);
      }
    }
    thunk_FUN_0188fd20((long *)(unaff_x20 + 0x30),lVar3);
    *(undefined4 *)(unaff_x20 + 0x28) = 0xffffffff;
    if (unaff_w22 == 0) {
      *(undefined8 *)(unaff_x20 + 0x10) = 0;
      thunk_FUN_0188fd20((undefined8 *)(unaff_x20 + 0x10),0);
    }
    else {
      uVar4 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f5118,unaff_w22);
      *(undefined8 *)(unaff_x20 + 0x10) = uVar4;
      thunk_FUN_0188fd20();
      lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x118);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0185daa4();
      }
      uVar4 = FUN_017fc3f4(lVar2,unaff_w22);
      *(undefined8 *)(unaff_x20 + 0x18) = uVar4;
      thunk_FUN_0188fd20((undefined8 *)(unaff_x20 + 0x18));
      lVar2 = *(long *)(unaff_x20 + 0x40);
      uVar4 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x108);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      uVar4 = FUN_02bddb5c(uVar4,0);
      if (lVar2 == 0) goto LAB_024dedc4;
      lVar2 = FUN_02adfbec(lVar2,*(undefined8 *)PTR_DAT_037fb178,uVar4,0);
      lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0185daa4(lVar8);
      }
      if (lVar2 == 0) {
        thunk_FUN_01851c08(PTR_DAT_037fb188);
        uVar4 = thunk_FUN_01861bbc();
        uVar5 = thunk_FUN_01851c08(PTR_DAT_037fb190);
        FUN_02ad6d08(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
        FUN_017fc474(uVar4);
      }
      lVar3 = thunk_FUN_01861ac0(lVar2,lVar8);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc944(lVar2,lVar8);
      }
      if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
        uVar7 = 0;
        uVar6 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
        do {
          if (uVar6 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5b0();
          }
          FUN_024e0cf4();
          uVar6 = (ulong)*(uint *)(lVar3 + 0x18);
          uVar7 = uVar7 + 1;
        } while ((long)uVar7 < (long)(int)*(uint *)(lVar3 + 0x18));
      }
    }
    if (*unaff_x21 != 0) {
      uVar1 = FUN_02ae1ed4(*unaff_x21,*(undefined8 *)PTR_DAT_037fae08,0);
      *(undefined4 *)(unaff_x20 + 0x38) = uVar1;
      *(undefined8 *)(unaff_x20 + 0x40) = 0;
      thunk_FUN_0188fd20();
      return;
    }
  }
LAB_024dedc4:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


