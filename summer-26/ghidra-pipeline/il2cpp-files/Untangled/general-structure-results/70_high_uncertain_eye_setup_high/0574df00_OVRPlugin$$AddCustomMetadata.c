/*
FUNCTION_NAME: OVRPlugin$$AddCustomMetadata
ENTRY_POINT: 0574df00
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__AddCustomMetadata(long *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  long *unaff_x19;
  long *plVar7;
  long unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000048;
  
code_r0x0574df00:
  puVar2 = (undefined8 *)FUN_02eea86c(param_1,param_2,param_3);
  param_1 = unaff_x19;
  do {
    uVar3 = (*(code *)*puVar2)(param_1,puVar2[1]);
    if ((uVar3 & 1) == 0) {
      FUN_0574e178();
      *(undefined8 *)(in_stack_00000048 + 0x50) = 0;
      thunk_FUN_02f411dc((undefined8 *)(in_stack_00000048 + 0x50),0);
      return 0;
    }
    plVar7 = *(long **)(in_stack_00000048 + 0x50);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar5 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06d3b610) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0574df88;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_02eea86c(plVar7,*(long *)PTR_DAT_06d3b610,0);
LAB_0574df88:
    uVar4 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    *(undefined8 *)(in_stack_00000048 + 0x58) = uVar4;
    thunk_FUN_02f411dc();
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (*(long *)(unaff_x21 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_03f844bc(&stack0x00000008,*(long *)(unaff_x21 + 0x10),*(undefined8 *)PTR_DAT_06d09860);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    *(undefined8 *)(in_stack_00000048 + 0x70) = in_stack_00000018;
    *(undefined8 *)(in_stack_00000048 + 0x68) = in_stack_00000010;
    *(undefined8 *)(in_stack_00000048 + 0x60) = in_stack_00000008;
    thunk_FUN_02f411dc(in_stack_00000048 + 0x60,0);
    *(undefined4 *)(in_stack_00000048 + 0x10) = 0xfffffffc;
    puVar1 = PTR_DAT_06d09828;
    while (uVar3 = FUN_04de7cdc(in_stack_00000048 + 0x60,*(undefined8 *)puVar1), (uVar3 & 1) != 0) {
      lVar5 = FUN_0574d694(*(undefined8 *)(in_stack_00000048 + 0x58),
                           *(undefined8 *)(in_stack_00000048 + 0x40),
                           *(undefined4 *)(in_stack_00000048 + 0x70));
      if (lVar5 != 0) {
        *(long *)(in_stack_00000048 + 0x18) = lVar5;
        thunk_FUN_02f411dc((long *)(in_stack_00000048 + 0x18));
        *(undefined4 *)(in_stack_00000048 + 0x10) = 1;
        return 1;
      }
    }
    FUN_0574e128();
    *(undefined8 *)(in_stack_00000048 + 0x60) = 0;
    *(undefined8 *)(in_stack_00000048 + 0x58) = 0;
    *(undefined8 *)(in_stack_00000048 + 0x70) = 0;
    *(undefined8 *)(in_stack_00000048 + 0x68) = 0;
    thunk_FUN_02f411dc((undefined8 *)(in_stack_00000048 + 0x58),0);
    param_1 = *(long **)(in_stack_00000048 + 0x50);
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar5 = *param_1;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    param_2 = *(long *)PTR_DAT_06d02048;
    if (uVar3 == 0) break;
    piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    while (*(long *)(piVar6 + -2) != param_2) {
      uVar3 = uVar3 - 1;
      piVar6 = piVar6 + 4;
      if (uVar3 == 0) goto LAB_0574def8;
    }
    puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
  } while( true );
LAB_0574def8:
  param_3 = 0;
  unaff_x19 = param_1;
  goto code_r0x0574df00;
}


