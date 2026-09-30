/*
FUNCTION_NAME: OVRManager$$add_PassthroughLayerResumed
ENTRY_POINT: 0572ef9c
PROGRAM: Untangled-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_PassthroughLayerResumed(void)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  long *unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  long *unaff_x25;
  long *unaff_x26;
  
  puVar2 = (undefined8 *)FUN_02eea86c();
  lVar3 = (*(code *)*puVar2)();
  uVar4 = FUN_0572f38c();
  if ((uVar4 & 1) != 0) {
    return;
  }
  FUN_0572dbd8();
  lVar5 = FUN_0572e384();
  (**(code **)(*unaff_x19 + 0x6d8))();
  if (unaff_w20 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0572f068;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02eea86c();
LAB_0572f068:
    lVar7 = (*(code *)*puVar2)();
  }
  lVar8 = *unaff_x21;
  uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar4 != 0) {
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x25) {
        puVar2 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_0572f0c8;
      }
      uVar4 = uVar4 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_02eea86c();
LAB_0572f0c8:
  iVar1 = (*(code *)*puVar2)();
  if (iVar1 + -1 == unaff_w20) {
    lVar8 = 0;
  }
  else {
    lVar8 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0572f138;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02eea86c();
LAB_0572f138:
    lVar8 = (*(code *)*puVar2)();
  }
  if (lVar5 != 0) {
    *(long **)(lVar5 + 0x10) = unaff_x19;
    thunk_FUN_02f411dc();
    *(long *)(lVar5 + 0x18) = lVar7;
    thunk_FUN_02f411dc((long *)(lVar5 + 0x18),lVar7);
    if (lVar7 != 0) {
      *(long *)(lVar7 + 0x20) = lVar5;
      thunk_FUN_02f411dc((long *)(lVar7 + 0x20),lVar5);
    }
    *(long *)(lVar5 + 0x20) = lVar8;
    thunk_FUN_02f411dc((long *)(lVar5 + 0x20),lVar8);
    if (lVar8 != 0) {
      *(long *)(lVar8 + 0x18) = lVar5;
      thunk_FUN_02f411dc((long *)(lVar8 + 0x18),lVar5);
    }
    lVar7 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_0572f1f8;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02eea86c();
LAB_0572f1f8:
    (*(code *)*puVar2)();
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x10) = 0;
      thunk_FUN_02f411dc((undefined8 *)(lVar3 + 0x10),0);
      *(undefined8 *)(lVar3 + 0x18) = 0;
      thunk_FUN_02f411dc((undefined8 *)(lVar3 + 0x18),0);
      *(undefined8 *)(lVar3 + 0x20) = 0;
      thunk_FUN_02f411dc((undefined8 *)(lVar3 + 0x20),0);
      if (unaff_x19[6] != 0) {
        uVar6 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3aef0);
        FUN_05fcf3e0(uVar6,4,unaff_w20,0);
        (**(code **)(*unaff_x19 + 0x618))();
      }
      if (unaff_x19[8] == 0) {
        return;
      }
      uVar6 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d58898);
      FUN_06016ea8(uVar6,2,lVar5,lVar3,unaff_w20,0);
                    /* WARNING: Could not recover jumptable at 0x0572f2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x19 + 0x628))();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


