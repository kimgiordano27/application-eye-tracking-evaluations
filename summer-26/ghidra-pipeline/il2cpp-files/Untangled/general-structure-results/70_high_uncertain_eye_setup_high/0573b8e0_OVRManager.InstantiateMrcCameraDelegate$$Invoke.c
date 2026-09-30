/*
FUNCTION_NAME: OVRManager.InstantiateMrcCameraDelegate$$Invoke
ENTRY_POINT: 0573b8e0
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_InstantiateMrcCameraDelegate__Invoke
               (code *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long lVar9;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long *unaff_x29;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  
code_r0x0573b8e0:
  uVar4 = (*param_1)(param_2,unaff_x22,param_4);
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*unaff_x25);
  }
  FUN_056938e4(&stack0x00000058,2,0);
  uStack000000000000005c = uVar4;
  while( true ) {
    uVar2 = CONCAT44(uStack000000000000005c,uStack0000000000000058);
    if (unaff_x20 == 0) break;
    in_stack_00000078 = in_stack_00000060;
    in_stack_00000080 = in_stack_00000068;
    lVar6 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    in_stack_00000070 = uVar2;
    if (lVar6 == 0) break;
    uVar3 = *(uint *)(unaff_x20 + 0x18);
    if (uVar3 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar3 + 1;
      lVar6 = lVar6 + (int)uVar3 * unaff_x27;
      *(undefined8 *)(lVar6 + 0x30) = in_stack_00000068;
      *(long *)(lVar6 + 0x28) = in_stack_00000060;
      *(undefined8 *)(lVar6 + 0x20) = uVar2;
      thunk_FUN_02f411dc(lVar6 + 0x28,0);
    }
    else {
      FUN_03f984b0();
    }
    do {
      while( true ) {
        unaff_x22 = unaff_x19;
        unaff_x19 = (long *)unaff_x22[2];
        if (unaff_x19 == (long *)0x0) {
          FUN_037f063c();
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          Oculus_Platform_Message__GetAssetFileDownloadCancelResult();
          return;
        }
        uVar3 = (**(code **)(*unaff_x19 + 0x228))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x230));
        if ((uVar3 & 0xfffffffe) != 2) break;
        if (unaff_x22 != (long *)0x0) {
          lVar9 = *unaff_x26;
          lVar6 = thunk_FUN_02ef170c(unaff_x19,lVar9);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08440(unaff_x19,lVar9);
          }
          lVar6 = *unaff_x26;
          param_2 = (long *)thunk_FUN_02ef170c(unaff_x19,lVar6);
          if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08440(unaff_x19,lVar6);
          }
          lVar9 = *param_2;
          uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar7 == 0) goto LAB_0573b84c;
          piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_0573b834;
        }
      }
    } while (uVar3 != 4);
    bVar1 = *(byte *)(*unaff_x29 + 0x130);
    if ((*(byte *)(*unaff_x19 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x29)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(unaff_x19);
    }
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_056938e4(&stack0x00000058,1,0);
    in_stack_00000060 = unaff_x19[0xc];
    thunk_FUN_02f411dc();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_0573b834:
    if (*(long *)(piVar8 + -2) == lVar6) {
      puVar5 = (undefined8 *)(lVar9 + (long)(*piVar8 + 2) * 0x10 + 0x138);
      goto LAB_0573b8d8;
    }
  }
LAB_0573b84c:
  puVar5 = (undefined8 *)FUN_02eea86c(param_2,lVar6,2);
LAB_0573b8d8:
  param_1 = (code *)*puVar5;
  param_4 = puVar5[1];
  goto code_r0x0573b8e0;
}


