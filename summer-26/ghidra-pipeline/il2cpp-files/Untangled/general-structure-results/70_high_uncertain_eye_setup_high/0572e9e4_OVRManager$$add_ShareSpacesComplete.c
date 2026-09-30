/*
FUNCTION_NAME: OVRManager$$add_ShareSpacesComplete
ENTRY_POINT: 0572e9e4
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_ShareSpacesComplete(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  int *in_x10;
  int *piVar8;
  long in_x11;
  long *unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  long *unaff_x24;
  long *unaff_x25;
  
  while (in_x11 != param_3) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar2 = (undefined8 *)FUN_02eea86c();
      goto LAB_0572ea14;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_0572ea14:
  lVar3 = (*(code *)*puVar2)();
  if (unaff_w20 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *unaff_x21;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0572ea84;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_02eea86c();
LAB_0572ea84:
    lVar5 = (*(code *)*puVar2)();
  }
  lVar6 = *unaff_x21;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x24) {
        puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0572eae4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_02eea86c();
LAB_0572eae4:
  iVar1 = (*(code *)*puVar2)();
  if (iVar1 + -1 == unaff_w20) {
    lVar6 = 0;
  }
  else {
    lVar6 = *unaff_x21;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0572eb58;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_02eea86c();
LAB_0572eb58:
    lVar6 = (*(code *)*puVar2)();
  }
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x20) = lVar6;
    thunk_FUN_02f411dc((long *)(lVar5 + 0x20),lVar6);
  }
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x18) = lVar5;
    thunk_FUN_02f411dc((long *)(lVar6 + 0x18),lVar5);
  }
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  *(undefined8 *)(lVar3 + 0x10) = 0;
  thunk_FUN_02f411dc((undefined8 *)(lVar3 + 0x10),0);
  *(undefined8 *)(lVar3 + 0x18) = 0;
  thunk_FUN_02f411dc((undefined8 *)(lVar3 + 0x18),0);
  *(undefined8 *)(lVar3 + 0x20) = 0;
  thunk_FUN_02f411dc((undefined8 *)(lVar3 + 0x20),0);
  lVar5 = *unaff_x21;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x25) {
        puVar2 = (undefined8 *)(lVar5 + (long)(*piVar8 + 4) * 0x10 + 0x138);
        goto LAB_0572ec18;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_02eea86c();
LAB_0572ec18:
  (*(code *)*puVar2)();
  if (unaff_x19[6] != 0) {
    uVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3aef0);
    FUN_05fcf3e0(uVar4,2,unaff_w20,0);
    (**(code **)(*unaff_x19 + 0x618))();
  }
  if (unaff_x19[8] != 0) {
    uVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d58898);
    FUN_06016cb8(uVar4,1,lVar3,unaff_w20,0);
                    /* WARNING: Could not recover jumptable at 0x0572ecc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x19 + 0x628))();
    return;
  }
  return;
}


