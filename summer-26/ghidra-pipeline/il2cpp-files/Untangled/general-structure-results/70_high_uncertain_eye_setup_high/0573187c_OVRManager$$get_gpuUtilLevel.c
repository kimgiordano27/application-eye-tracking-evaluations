/*
FUNCTION_NAME: OVRManager$$get_gpuUtilLevel
ENTRY_POINT: 0573187c
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__get_gpuUtilLevel(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x21;
  long in_stack_00000018;
  
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  plVar1 = (long *)(**(code **)(*param_1 + 0x5e8))(param_1,*(undefined8 *)(*param_1 + 0x5f0));
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar4 = *plVar1;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06d581b0) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_057318f0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_02eea86c(plVar1,*(long *)PTR_DAT_06d581b0,0);
LAB_057318f0:
  uVar3 = (*(code *)*puVar2)(plVar1,puVar2[1]);
  *(undefined8 *)(in_stack_00000018 + 0x30) = uVar3;
  thunk_FUN_02f411dc();
  *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffd;
  plVar1 = *(long **)(in_stack_00000018 + 0x30);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar4 = *plVar1;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x21) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_05731a8c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_02eea86c(plVar1,*unaff_x21,0);
LAB_05731a8c:
  uVar5 = (*(code *)*puVar2)(plVar1,puVar2[1]);
  if ((uVar5 & 1) == 0) {
    FUN_05731cf4();
    *(undefined8 *)(in_stack_00000018 + 0x30) = 0;
    thunk_FUN_02f411dc((undefined8 *)(in_stack_00000018 + 0x30),0);
    uVar3 = 0;
  }
  else {
    plVar1 = *(long **)(in_stack_00000018 + 0x30);
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar4 = *plVar1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06d3b610) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_05731b1c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02eea86c(plVar1,*(long *)PTR_DAT_06d3b610,0);
LAB_05731b1c:
    uVar3 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    *(undefined8 *)(in_stack_00000018 + 0x38) = uVar3;
    thunk_FUN_02f411dc();
    *(undefined8 *)(in_stack_00000018 + 0x18) = *(undefined8 *)(in_stack_00000018 + 0x38);
    thunk_FUN_02f411dc();
    *(undefined4 *)(in_stack_00000018 + 0x10) = 2;
    uVar3 = 1;
  }
  return uVar3;
}


