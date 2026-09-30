/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$IsTypeSpecified
ENTRY_POINT: 05ba5bec
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_17;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void Unity_VisualScripting_FullSerializer_fsSerializer__IsTypeSpecified
               (undefined1 param_1 [16],undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x19;
  int iVar9;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined4 uVar14;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  
                    /* catch() { ... } // from try @ 05ba5b04 with catch @ 05ba5bec
                       catch() { ... } // from try @ 05ba5bd0 with catch @ 05ba5bec
                       catch() { ... } // from try @ 05ba5be4 with catch @ 05ba5bec */
  AkMIDIEventCallbackInfo__get_byProgramNum();
                    /* try { // try from 05ba5bf0 to 05ca5de3 has its CatchHandler @ 05ba5bf0
                       catch() { ... } // from try @ 05ba5bf0 with catch @ 05ba5bf0
                       catch() { ... } // from try @ 05ba603c with catch @ 05ba5bf0
                       catch() { ... } // from try @ 05ba6114 with catch @ 05ba5bf0
                       catch() { ... } // from try @ 05ba6198 with catch @ 05ba5bf0
                       catch() { ... } // from try @ 05ba61d8 with catch @ 05ba5bf0 */
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cbf70);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06638208);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ca028);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ee5e0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ca030);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ee5d8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ca040);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8c40);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cbe88);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_0663fc10);
  *(undefined1 *)(unaff_x20 + 0x420) = 1;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  _uStack0000000000000038 = 0;
  _uStack0000000000000030 = 0;
  if (*(long *)(unaff_x19 + 0x38) == 0) {
    return;
  }
  if (*(long *)(*(long *)(unaff_x19 + 0x38) + 0x18) == 0) {
    return;
  }
  lVar5 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065ca040);
  FUN_03a13dc8(lVar5,*(undefined8 *)PTR_DAT_065ca028);
  puVar3 = PTR_DAT_065ca020;
  puVar2 = PTR_DAT_065c8c40;
  lVar12 = *(long *)(unaff_x19 + 0x38);
  if (lVar12 == 0) goto LAB_05ba5fdc;
  if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
    uVar13 = 0;
    uVar7 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
    do {
      if (uVar7 <= uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      lVar10 = *(long *)(lVar12 + 0x20 + uVar13 * 8);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar7 = FUN_05ef59b8(lVar10,0,0);
      if ((uVar7 & 1) != 0) {
        if (((lVar10 == 0) ||
            (lVar10 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(lVar10,0),
            lVar10 == 0)) || (uVar14 = FUN_05f01910(lVar10,0), lVar5 == 0)) goto LAB_05ba5fdc;
        lVar8 = *(long *)(lVar5 + 0x10);
        lVar10 = *(long *)puVar3;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_05ba5fdc;
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          lVar8 = lVar8 + (long)(int)uVar1 * 0xc;
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar8 + 0x20) = uVar14;
          *(int *)(lVar8 + 0x24) = (int)param_2;
          *(undefined4 *)(lVar8 + 0x28) = param_3;
        }
        else {
          FUN_03a14600(lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
      }
      uVar7 = (ulong)*(uint *)(lVar12 + 0x18);
      uVar13 = uVar13 + 1;
    } while ((long)uVar13 < (long)(int)*(uint *)(lVar12 + 0x18));
  }
  if (lVar5 == 0) goto LAB_05ba5fdc;
  *(undefined4 *)(unaff_x19 + 0x50) = *(undefined4 *)(lVar5 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x19 + 0x48);
  if (*(int *)(*(long *)PTR_DAT_065c8c40 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar13 = FUN_05ef739c(uVar11,0,0);
  if ((uVar13 & 1) == 0) {
    plVar6 = *(long **)(unaff_x19 + 0x48);
    if (plVar6 == (long *)0x0) goto LAB_05ba5fdc;
    iVar4 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
    iVar9 = *(int *)(unaff_x19 + 0x50);
    if (iVar4 != iVar9) goto LAB_05ba5df8;
  }
  else {
    iVar9 = *(int *)(unaff_x19 + 0x50);
LAB_05ba5df8:
    uVar11 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cbe88);
    FUN_05edac08(uVar11,iVar9,1,0x14,0,0);
    *(undefined8 *)(unaff_x19 + 0x48) = uVar11;
  }
  lVar12 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065ee5d8);
  FUN_038d88a4(lVar12,*(undefined8 *)PTR_DAT_065ee5e0);
  FUN_03a15074(lVar5,*(undefined8 *)PTR_DAT_065cbf70);
  puVar3 = PTR_DAT_065ee588;
  puVar2 = PTR_DAT_065cbf50;
  in_stack_00000028 = in_stack_00000008;
  in_stack_00000020 = in_stack_00000000;
  _uStack0000000000000038 = in_stack_00000018;
  _uStack0000000000000030 = in_stack_00000010;
  while (uVar13 = FUN_0482dcbc(&stack0x00000020,*(undefined8 *)puVar2), (uVar13 & 1) != 0) {
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar5 = *(long *)(lVar12 + 0x10);
    lVar10 = *(long *)puVar3;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar1 = *(uint *)(lVar12 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      lVar5 = lVar5 + (long)(int)uVar1 * 0x10;
      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar5 + 0x20) = uStack0000000000000030;
      *(undefined4 *)(lVar5 + 0x24) = uStack0000000000000034;
      *(undefined4 *)(lVar5 + 0x28) = uStack0000000000000038;
      *(undefined4 *)(lVar5 + 0x2c) = 0x3f800000;
    }
    else {
      FUN_038d90d4(lVar12,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
  }
  FUN_0482dcb8(&stack0x00000020,*(undefined8 *)PTR_DAT_065cbf48);
  lVar10 = *(long *)(unaff_x19 + 0x48);
  lVar5 = FUN_05ef2cf0();
  if (lVar5 != 0) {
    uVar11 = FUN_05efa158(lVar5,0);
    uVar11 = FUN_04db00f0(uVar11,*(undefined8 *)PTR_DAT_0663fc10,0);
    if (lVar10 != 0) {
      FUN_05efa208(lVar10,uVar11,0);
      if (*(long *)(unaff_x19 + 0x48) != 0) {
        FUN_05ed85f8(*(long *)(unaff_x19 + 0x48),0,0);
        if ((*(long *)(unaff_x19 + 0x48) != 0) &&
           (FUN_05ed84ac(*(long *)(unaff_x19 + 0x48),0,0), lVar12 != 0)) {
          lVar5 = *(long *)(unaff_x19 + 0x48);
          uVar11 = FUN_038dab60(lVar12,*(undefined8 *)PTR_DAT_06638208);
          if (lVar5 != 0) {
            FUN_05edb078(lVar5,uVar11,0,0);
            if (*(long *)(unaff_x19 + 0x48) != 0) {
              FUN_05edb618(*(long *)(unaff_x19 + 0x48),0);
              return;
            }
          }
        }
      }
    }
  }
LAB_05ba5fdc:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


