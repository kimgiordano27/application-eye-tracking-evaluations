/*
FUNCTION_NAME: Unity.Services.CloudSave.Internal.Models.SetItem400OneOf.<>c$$<DeserializeIntoActualObject>b__13_0
ENTRY_POINT: 05f19c80
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Unity_Services_CloudSave_Internal_Models_SetItem400OneOf_<>c__<DeserializeIntoActualObject>b__13_0
               (void)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long in_stack_00000618;
  
  thunk_FUN_02df485c();
  iVar4 = 0;
  do {
    lVar1 = (long)iVar4;
    iVar4 = iVar4 + 1;
  } while (*(char *)(unaff_x21 + lVar1) != '\0');
  if (iVar4 != 1) {
    FUN_03647340(&stack0x00000218,0x3a,*unaff_x24);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    iVar4 = -1;
    do {
      iVar4 = iVar4 + 1;
    } while (*(char *)(unaff_x21 + iVar4) != '\0');
    FUN_03647f84(&stack0x00000218);
    FUN_03647340(&stack0x00000218,0x3a,*unaff_x24);
    uVar2 = FUN_05542220(&stack0x00000010,0);
    FUN_0364738c(&stack0x00000218,uVar2,
                 *(undefined8 *)
                  Method_System_ReadOnlySpan<OVRPlugin_DynamicObjectClass>_GetPinnableReference__);
  }
  if (unaff_x20 != 0) {
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    iVar4 = 0;
    do {
      lVar1 = (long)iVar4;
      iVar4 = iVar4 + 1;
    } while (*(char *)(unaff_x20 + lVar1) != '\0');
    if (iVar4 != 1) {
      FUN_03647340(&stack0x00000218,0x3a,*unaff_x24);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      iVar4 = -1;
      do {
        iVar4 = iVar4 + 1;
      } while (*(char *)(unaff_x20 + iVar4) != '\0');
      FUN_03647f84(&stack0x00000218);
    }
  }
  FUN_03647340(&stack0x00000218,0x5d,*unaff_x24);
  FUN_03647340(&stack0x00000218,0x20,*unaff_x24);
  FUN_05542220(&stack0x00000008,0);
  FUN_03647f84(&stack0x00000218);
  memcpy(&stack0x00000018,&stack0x00000218,0x200);
  if (DAT_06dc41b8 == '\0') {
    FUN_02d965b8(PTR_DAT_069fb930);
    FUN_02d965b8(Method_System_Collections_Generic_LinkedList<WebConnection>_AddFirst__);
    DAT_06dc41b8 = '\x01';
  }
  memcpy(&stack0x00000418,&stack0x00000018,0x200);
  uVar3 = thunk_FUN_02dd2d7c(*(undefined8 *)
                              Method_System_Collections_Generic_LinkedList<WebConnection>_AddFirst__
                             ,&stack0x00000418);
  if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)PTR_DAT_069fb930);
  }
  FUN_0630b598(uVar3,0);
  if (*(long *)(unaff_x22 + 0x28) == in_stack_00000618) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


