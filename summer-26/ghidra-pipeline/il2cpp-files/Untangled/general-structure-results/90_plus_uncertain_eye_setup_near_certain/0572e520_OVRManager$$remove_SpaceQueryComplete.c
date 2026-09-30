/*
FUNCTION_NAME: OVRManager$$remove_SpaceQueryComplete
ENTRY_POINT: 0572e520
PROGRAM: Untangled-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 OVRManager__remove_SpaceQueryComplete(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  int unaff_w20;
  
  puVar1 = PTR_DAT_06d56470;
  if (param_1 != (long *)0x0) {
    lVar8 = *param_1;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06d56470) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0572e57c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined8 *)FUN_02eea86c(param_1,*(long *)PTR_DAT_06d56470,0);
LAB_0572e57c:
    iVar3 = (*(code *)*puVar4)(param_1,puVar4[1]);
    puVar2 = PTR_DAT_06d587c8;
    if (iVar3 < unaff_w20) {
      thunk_FUN_02f239f0(PTR_DAT_06d0e378);
      uVar5 = thunk_FUN_02ef1808();
      uVar6 = thunk_FUN_02f239f0(PTR_DAT_06d030f0);
      uVar7 = thunk_FUN_02f239f0(PTR_DAT_06d527d0);
      FUN_0555b650(uVar5,uVar6,uVar7,0);
      uVar6 = thunk_FUN_02f239f0(PTR_DAT_06d588a0);
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar5,uVar6);
    }
    FUN_0572dbd8();
    lVar8 = FUN_0572e384();
    if (unaff_w20 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = *param_1;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto OVRManager__add_SpaceSaveComplete;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined8 *)FUN_02eea86c(param_1,*(long *)puVar2,0);
OVRManager__add_SpaceSaveComplete:
      lVar9 = (*(code *)*puVar4)(param_1,unaff_w20 + -1,puVar4[1]);
    }
    lVar10 = *param_1;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0572e674;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined8 *)FUN_02eea86c(param_1,*(long *)puVar1,0);
LAB_0572e674:
    iVar3 = (*(code *)*puVar4)(param_1,puVar4[1]);
    if (iVar3 == unaff_w20) {
      lVar10 = 0;
    }
    else {
      lVar10 = *param_1;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0572e6dc;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined8 *)FUN_02eea86c(param_1,*(long *)puVar2,0);
LAB_0572e6dc:
      lVar10 = (*(code *)*puVar4)(param_1,unaff_w20,puVar4[1]);
    }
    (**(code **)(*unaff_x19 + 0x6d8))();
    if (lVar8 != 0) {
      *(long **)(lVar8 + 0x10) = unaff_x19;
      thunk_FUN_02f411dc();
      *(long *)(lVar8 + 0x18) = lVar9;
      thunk_FUN_02f411dc((long *)(lVar8 + 0x18),lVar9);
      if (lVar9 != 0) {
        *(long *)(lVar9 + 0x20) = lVar8;
        thunk_FUN_02f411dc((long *)(lVar9 + 0x20),lVar8);
      }
      *(long *)(lVar8 + 0x20) = lVar10;
      thunk_FUN_02f411dc((long *)(lVar8 + 0x20),lVar10);
      if (lVar10 != 0) {
        *(long *)(lVar10 + 0x18) = lVar8;
        thunk_FUN_02f411dc((long *)(lVar10 + 0x18),lVar8);
      }
      lVar9 = *param_1;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar9 + (long)(*piVar12 + 3) * 0x10 + 0x138);
            goto LAB_0572e7b8;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined8 *)FUN_02eea86c(param_1,*(long *)puVar2,3);
LAB_0572e7b8:
      (*(code *)*puVar4)(param_1,unaff_w20,lVar8,puVar4[1]);
      if (unaff_x19[6] != 0) {
        uVar5 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3aef0);
        FUN_05fcf3e0(uVar5,1,unaff_w20,0);
        (**(code **)(*unaff_x19 + 0x618))();
      }
      if (unaff_x19[8] != 0) {
        uVar5 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d58898);
        FUN_06016cb8(uVar5,0,lVar8,unaff_w20,0);
        (**(code **)(*unaff_x19 + 0x628))();
      }
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


