/*
FUNCTION_NAME: FUN_0572e4a0
ENTRY_POINT: 0572e4a0
PROGRAM: Untangled-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_0572e4a0(long *param_1,int param_2,undefined8 param_3,uint param_4,uint param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  
  if ((DAT_071c38b4 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d56470);
    FUN_02f07e70(PTR_DAT_06d587c8);
    FUN_02f07e70(PTR_DAT_06d3aef0);
    FUN_02f07e70(PTR_DAT_06d58898);
    DAT_071c38b4 = 1;
  }
  plVar4 = (long *)(**(code **)(*param_1 + 0x5e8))(param_1,*(undefined8 *)(*param_1 + 0x5f0));
  puVar1 = PTR_DAT_06d56470;
  if (plVar4 != (long *)0x0) {
    lVar9 = *plVar4;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06d56470) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0572e57c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_02eea86c(plVar4,*(long *)PTR_DAT_06d56470,0);
LAB_0572e57c:
    iVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    puVar2 = PTR_DAT_06d587c8;
    if (iVar3 < param_2) {
      thunk_FUN_02f239f0(PTR_DAT_06d0e378);
      uVar6 = thunk_FUN_02ef1808();
      uVar7 = thunk_FUN_02f239f0(PTR_DAT_06d030f0);
      uVar8 = thunk_FUN_02f239f0(PTR_DAT_06d527d0);
      FUN_0555b650(uVar6,uVar7,uVar8,0);
      uVar7 = thunk_FUN_02f239f0(PTR_DAT_06d588a0);
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar6,uVar7);
    }
    FUN_0572dbd8(param_1);
    lVar9 = FUN_0572e384(param_1,param_3,param_4 & 1,param_5 & 1);
    if (param_2 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = *plVar4;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto OVRManager__add_SpaceSaveComplete;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar5 = (undefined8 *)FUN_02eea86c(plVar4,*(long *)puVar2,0);
OVRManager__add_SpaceSaveComplete:
      lVar10 = (*(code *)*puVar5)(plVar4,param_2 + -1,puVar5[1]);
    }
    lVar11 = *plVar4;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0572e674;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_02eea86c(plVar4,*(long *)puVar1,0);
LAB_0572e674:
    iVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (iVar3 == param_2) {
      lVar11 = 0;
    }
    else {
      lVar11 = *plVar4;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0572e6dc;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar5 = (undefined8 *)FUN_02eea86c(plVar4,*(long *)puVar2,0);
LAB_0572e6dc:
      lVar11 = (*(code *)*puVar5)(plVar4,param_2,puVar5[1]);
    }
    (**(code **)(*param_1 + 0x6d8))(param_1,lVar9,0,*(undefined8 *)(*param_1 + 0x6e0));
    if (lVar9 != 0) {
      *(long *)(lVar9 + 0x10) = (long)param_1;
      thunk_FUN_02f411dc((long *)(lVar9 + 0x10),param_1);
      *(long *)(lVar9 + 0x18) = lVar10;
      thunk_FUN_02f411dc((long *)(lVar9 + 0x18),lVar10);
      if (lVar10 != 0) {
        *(long *)(lVar10 + 0x20) = lVar9;
        thunk_FUN_02f411dc((long *)(lVar10 + 0x20),lVar9);
      }
      *(long *)(lVar9 + 0x20) = lVar11;
      thunk_FUN_02f411dc((long *)(lVar9 + 0x20),lVar11);
      if (lVar11 != 0) {
        *(long *)(lVar11 + 0x18) = lVar9;
        thunk_FUN_02f411dc((long *)(lVar11 + 0x18),lVar9);
      }
      lVar10 = *plVar4;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar10 + (long)(*piVar13 + 3) * 0x10 + 0x138);
            goto LAB_0572e7b8;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar5 = (undefined8 *)FUN_02eea86c(plVar4,*(long *)puVar2,3);
LAB_0572e7b8:
      (*(code *)*puVar5)(plVar4,param_2,lVar9,puVar5[1]);
      if (param_1[6] != 0) {
        uVar6 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3aef0);
        FUN_05fcf3e0(uVar6,1,param_2,0);
        (**(code **)(*param_1 + 0x618))(param_1,uVar6,*(undefined8 *)(*param_1 + 0x620));
      }
      if (param_1[8] != 0) {
        uVar6 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d58898);
        FUN_06016cb8(uVar6,0,lVar9,param_2,0);
        (**(code **)(*param_1 + 0x628))(param_1,uVar6,*(undefined8 *)(*param_1 + 0x630));
      }
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


