/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.AvatarEntity$$ReloadAvatarManually
ENTRY_POINT: 0562c194
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_AvatarEntity__ReloadAvatarManually
               (undefined8 *param_1,undefined8 param_2)

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
  long *unaff_x21;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  puVar1 = PTR_DAT_07279510;
  iVar2 = FUN_058311c0(param_2,*param_1,0);
  lVar6 = *(long *)puVar1;
  lVar8 = *unaff_x21;
  uVar10 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x110);
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(lVar6);
  }
                    /* try { // try from 0562c1d0 to 0572c1df has its CatchHandler @ 0562c1e0 */
  uVar10 = FUN_059324dc(uVar10,0);
  if (lVar8 != 0) {
    lVar6 = FUN_0582f318(lVar8,*(undefined8 *)PTR_DAT_072824a0,uVar10,0);
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_032934b8(lVar8);
    }
    if (lVar6 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_032a55a4(lVar6,lVar8);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(lVar6,lVar8);
      }
    }
    *(long *)(unaff_x20 + 0x30) = lVar4;
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_032934b8(lVar8);
    }
    if (lVar6 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_032a55a4(lVar6,lVar8);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(lVar6,lVar8);
      }
    }
    thunk_FUN_0333a630((long *)(unaff_x20 + 0x30),lVar4);
    *(undefined4 *)(unaff_x20 + 0x28) = 0xffffffff;
    if (iVar2 == 0) {
      *(undefined8 *)(unaff_x20 + 0x10) = 0;
      thunk_FUN_0333a630((undefined8 *)(unaff_x20 + 0x10),0);
    }
    else {
      uVar10 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_0727aa68,iVar2);
      *(undefined8 *)(unaff_x20 + 0x10) = uVar10;
      thunk_FUN_0333a630();
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x118);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_032934b8();
      }
      uVar10 = FUN_032d5d3c(lVar6,iVar2);
      *(undefined8 *)(unaff_x20 + 0x18) = uVar10;
      thunk_FUN_0333a630((undefined8 *)(unaff_x20 + 0x18));
      lVar6 = *(long *)(unaff_x20 + 0x40);
      uVar10 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x108);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar10 = FUN_059324dc(uVar10,0);
      if (lVar6 == 0) goto LAB_0562c444;
      lVar6 = FUN_0582f318(lVar6,*(undefined8 *)PTR_DAT_07282498,uVar10,0);
      lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_032934b8(lVar8);
      }
      if (lVar6 == 0) {
        thunk_FUN_032e1da0(PTR_DAT_072824b8);
        uVar10 = thunk_FUN_032a56a0();
        uVar5 = thunk_FUN_032e1da0(PTR_DAT_072824c0);
        FUN_058261c8(uVar10,uVar5,0);
                    /* WARNING: Subroutine does not return */
        FUN_032d5dbc(uVar10);
      }
      lVar4 = thunk_FUN_032a55a4(lVar6,lVar8);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(lVar6,lVar8);
      }
      if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
        uVar9 = 0;
        uVar7 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
        do {
          if (uVar7 <= uVar9) {
                    /* WARNING: Subroutine does not return */
            Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
          }
          FUN_0562e2b0();
          uVar7 = (ulong)*(uint *)(lVar4 + 0x18);
          uVar9 = uVar9 + 1;
        } while ((long)uVar9 < (long)(int)*(uint *)(lVar4 + 0x18));
      }
    }
    if (*unaff_x21 != 0) {
      uVar3 = FUN_058311c0(*unaff_x21,*(undefined8 *)PTR_DAT_072824a8,0);
      *(undefined4 *)(unaff_x20 + 0x38) = uVar3;
      *(undefined8 *)(unaff_x20 + 0x40) = 0;
      thunk_FUN_0333a630();
      return;
    }
  }
LAB_0562c444:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


