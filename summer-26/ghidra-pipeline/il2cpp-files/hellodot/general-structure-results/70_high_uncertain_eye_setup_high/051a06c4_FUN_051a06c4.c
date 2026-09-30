/*
FUNCTION_NAME: FUN_051a06c4
ENTRY_POINT: 051a06c4
PROGRAM: hellodot-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_051a06c4(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 local_d0 [2];
  undefined8 uStack_bc;
  undefined8 local_b0 [2];
  undefined8 uStack_9c;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_06a7122f & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06604d90);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608558);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608560);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608408);
    DAT_06a7122f = 1;
  }
  if (*(long *)(param_4 + 0x20) != 0) {
    if (*(int *)(*(long *)(param_4 + 0x20) + 0x84) == 3) {
      return;
    }
    uVar1 = FUN_0519f010();
    uVar10 = 0x3f800000;
    uVar11 = 0x3f800000;
    uVar12 = 0x3f800000;
    uVar13 = 0x3f800000;
    if ((uVar1 & 1) == 0) {
      uVar13 = *(undefined4 *)(param_4 + 0x54);
      uVar12 = *(undefined4 *)(param_4 + 0x58);
      uVar11 = *(undefined4 *)(param_4 + 0x5c);
      uVar10 = *(undefined4 *)(param_4 + 0x60);
    }
    lVar3 = *(long *)(param_4 + 0x20);
    if (lVar3 != 0) {
      local_70 = *(undefined8 *)(lVar3 + 0x168);
      uStack_88 = *(undefined8 *)(lVar3 + 0x150);
      local_90 = *(undefined8 *)(lVar3 + 0x148);
      uStack_78 = *(undefined8 *)(lVar3 + 0x160);
      uVar9 = *(undefined8 *)(lVar3 + 0x158);
      uStack_80 = uVar9;
      if (*(int *)(*(long *)PTR_DAT_06608408 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar8 = OVRManager__remove_SpaceSetComponentStatusComplete(&local_90,0);
      plVar6 = *(long **)(param_4 + 0x70);
      if (plVar6 != (long *)0x0) {
        lVar3 = *plVar6;
        uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar1 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06608558) {
              puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_051a0804;
            }
            uVar1 = uVar1 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar1 != 0);
        }
        puVar2 = (undefined8 *)FUN_02ce0a7c(plVar6,*(long *)PTR_DAT_06608558,0);
LAB_051a0804:
        uVar8 = (*(code *)*puVar2)(uVar8,uVar9,param_3,plVar6,puVar2[1]);
      }
      if (*(long *)(param_4 + 0x20) != 0) {
        FUN_0519e3e8(local_b0);
        local_d0[0] = local_b0[0];
        uStack_bc = uStack_9c;
        FUN_051a0958(uVar8,uVar9,param_3,param_4,local_d0);
        lVar3 = *(long *)(param_4 + 0x28);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x50) = uVar13;
          *(undefined4 *)(lVar3 + 0x54) = uVar12;
          *(undefined4 *)(lVar3 + 0x58) = uVar11;
          *(undefined4 *)(lVar3 + 0x5c) = uVar10;
          plVar6 = *(long **)(param_4 + 0x48);
          lVar3 = *(long *)(param_4 + 0x28);
          if (plVar6 == (long *)0x0) {
            uVar7 = 0;
          }
          else {
            lVar4 = *plVar6;
            uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar1 != 0) {
              piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06604d90) {
                  puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
                  goto LAB_051a08e4;
                }
                uVar1 = uVar1 - 1;
                piVar5 = piVar5 + 4;
              } while (uVar1 != 0);
            }
            puVar2 = (undefined8 *)FUN_02ce0a7c(plVar6,*(long *)PTR_DAT_06604d90,0);
LAB_051a08e4:
            uVar7 = (*(code *)*puVar2)(plVar6,puVar2[1]);
          }
          if (lVar3 != 0) {
            *(undefined4 *)(lVar3 + 0x78) = uVar7;
            if (*(long *)(param_4 + 0x28) != 0) {
              FUN_050e6f30(*(long *)(param_4 + 0x28),*(undefined8 *)(param_4 + 0x68),0,0);
              FUN_051a0f64(uVar13,uVar12,uVar11,uVar10,uVar8,uVar9,param_3,param_4);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


