/*
FUNCTION_NAME: Interop$$ThrowExceptionForIoErrno
ENTRY_POINT: 02c8d910
PROGRAM: vrfs-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_19;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Interop__ThrowExceptionForIoErrno(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  int unaff_w23;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  code *pcVar7;
  undefined1 in_stack_00000150;
  undefined8 in_stack_00000168;
  byte in_stack_000003b0;
  int in_stack_000003b4;
  undefined4 in_stack_000003b8;
  
  while( true ) {
    FUN_0326b504(&stack0x000003b0,param_1,unaff_w23,param_3);
    memcpy(&stack0x00000200,&stack0x000003b0,0xb0);
    OVRPlugin__StartBodyTracking2(&stack0x000002b0,0);
    FUN_02e4ab8c();
    FUN_0322bb6c(&stack0x000002b0,0);
    FUN_02e4abfc();
    lVar4 = *(long *)(unaff_x19 + 0x368);
    memcpy(&stack0x00000300,&stack0x00000200,0xb0);
    if (lVar4 == 0) break;
    uVar6 = *unaff_x27;
    memcpy(&stack0x000003b0,&stack0x00000300,0xb0);
    FUN_0326b568(lVar4,unaff_w23,&stack0x000003b0,uVar6);
    unaff_w21 = unaff_w21 + 1;
    if (unaff_w21 == unaff_w20) {
      lVar4 = *(long *)(unaff_x19 + 0x368);
      if (lVar4 != 0) {
        iVar2 = 0;
        goto LAB_02c8d9c0;
      }
      break;
    }
    FUN_0322c388(&stack0x000003b0,unaff_w21,0);
    memcpy(&stack0x000002b0,&stack0x000003b0,0x44);
    lVar4 = *(long *)(unaff_x19 + 0x368);
    if (lVar4 == 0) break;
    unaff_w23 = 0;
    while (unaff_w23 < *(int *)(lVar4 + 0x18)) {
      iVar2 = FUN_0322bb64(&stack0x000002b0,0);
      if (*(long *)(unaff_x19 + 0x368) == 0) goto LAB_02c8da58;
      FUN_0326b504(&stack0x000003b0,*(long *)(unaff_x19 + 0x368),unaff_w23,*unaff_x26);
      if (iVar2 == in_stack_000003b4) {
        if (-1 < unaff_w23) goto LAB_02c8d904;
        goto LAB_02c8d754;
      }
      lVar4 = *(long *)(unaff_x19 + 0x368);
      unaff_w23 = unaff_w23 + 1;
      if (lVar4 == 0) goto LAB_02c8da58;
    }
    unaff_w23 = -1;
LAB_02c8d754:
    lVar4 = *(long *)(unaff_x19 + 0x368);
    if (lVar4 == 0) break;
    iVar2 = 0;
    while (iVar2 < *(int *)(lVar4 + 0x18)) {
      FUN_0326b504(&stack0x000003b0,lVar4,iVar2,*unaff_x26);
      if ((in_stack_000003b0 & 1) == 0) {
        if (*(long *)(unaff_x19 + 0x368) == 0) goto LAB_02c8da58;
        FUN_0326b504(&stack0x000003b0,*(long *)(unaff_x19 + 0x368),iVar2,*unaff_x26);
        lVar4 = *(long *)(unaff_x19 + 0x368);
        memcpy(&stack0x00000108,&stack0x000002b0,0x44);
        memset(&stack0x00000300,0,0xb0);
        FUN_02c8e31c(&stack0x00000300,&stack0x00000108,in_stack_000003b8);
        if (lVar4 == 0) goto LAB_02c8da58;
        uVar6 = *unaff_x27;
        memcpy(&stack0x000003b0,&stack0x00000300,0xb0);
        FUN_0326b568(lVar4,iVar2,&stack0x000003b0,uVar6);
        unaff_w23 = iVar2;
        if (-1 < iVar2) goto LAB_02c8d904;
        goto LAB_02c8d824;
      }
      lVar4 = *(long *)(unaff_x19 + 0x368);
      iVar2 = iVar2 + 1;
      if (lVar4 == 0) goto LAB_02c8da58;
    }
    if (unaff_w23 < 0) {
LAB_02c8d824:
      lVar4 = *(long *)(unaff_x19 + 0x368);
      if (lVar4 == 0) break;
      unaff_w23 = *(int *)(lVar4 + 0x18);
      memcpy(&stack0x00000010,&stack0x000002b0,0x44);
      iVar2 = *(int *)(unaff_x19 + 400);
      *(int *)(unaff_x19 + 400) = iVar2 + 1;
      memset(&stack0x00000058,0,0xb0);
      FUN_02c8e31c(&stack0x00000058,&stack0x00000010,iVar2);
      lVar5 = *unaff_x28;
      memcpy(&stack0x00000300,&stack0x00000058,0xb0);
      lVar3 = *(long *)(lVar4 + 0x10);
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar3 == 0) break;
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        lVar3 = lVar3 + (long)(int)uVar1 * 0xb0;
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        memcpy((void *)(lVar3 + 0x20),&stack0x00000300,0xb0);
        thunk_FUN_01656ef8(lVar3 + 0x48,0);
      }
      else {
        lVar3 = *(long *)(*(long *)(lVar5 + 0x20) + 0xc0);
        pcVar7 = *(code **)(*(long *)(lVar3 + 0x58) + 8);
        memcpy(&stack0x000003b0,&stack0x00000300,0xb0);
        (*pcVar7)(lVar4,&stack0x000003b0,*(undefined8 *)(lVar3 + 0x58));
      }
    }
LAB_02c8d904:
    param_1 = *(long *)(unaff_x19 + 0x368);
    if (param_1 == 0) break;
    param_3 = *unaff_x26;
  }
  goto LAB_02c8da58;
  while( true ) {
    uVar6 = *unaff_x27;
    memcpy(&stack0x000003b0,&stack0x00000300,0xb0);
    FUN_0326b568(lVar4,iVar2,&stack0x000003b0,uVar6);
    lVar4 = *(long *)(unaff_x19 + 0x368);
    iVar2 = iVar2 + 1;
    if (lVar4 == 0) break;
LAB_02c8d9c0:
    if (*(int *)(lVar4 + 0x18) <= iVar2) {
      return 1;
    }
    FUN_0326b504(&stack0x000003b0,lVar4,iVar2,*unaff_x26);
    memcpy(&stack0x00000150,&stack0x000003b0,0xb0);
    FUN_02c8a530();
    if (in_stack_00000168._4_4_ - 3U < 2) {
      in_stack_00000150 = 0;
    }
    lVar4 = *(long *)(unaff_x19 + 0x368);
    memcpy(&stack0x00000300,&stack0x00000150,0xb0);
    if (lVar4 == 0) break;
  }
LAB_02c8da58:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


