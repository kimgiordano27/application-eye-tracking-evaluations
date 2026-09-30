/*
FUNCTION_NAME: Unity.Services.CloudSave.Internal.Models.SetItem400OneOf.<>c$$.cctor
ENTRY_POINT: 05f19c10
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Unity_Services_CloudSave_Internal_Models_SetItem400OneOf_<>c___cctor(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x26;
  long in_stack_00000618;
  
  FUN_02d965b8(*(undefined8 *)(param_1 + 0xd30));
  FUN_02d965b8(
              Method_Unity_Services_Vivox_ReadWriteDictionary<AccountId,_ILoginSession,_LoginSession>__ctor__
              );
  FUN_02d965b8(Method_System_ReadOnlySpan<OVRPlugin_Bool>_get_Length__);
  *(undefined1 *)(unaff_x23 + 0x15d) = 1;
  puVar3 = 
  Method_Unity_Services_Vivox_ReadWriteDictionary<AccountId,_ILoginSession,_LoginSession>__ctor__;
  puVar2 = Method_System_ReadOnlySpan<ProbeBrickIndex_Brick>_get_Length__;
  memset(&stack0x00000218,0,0x200);
  FUN_05d3c04c(&stack0x00000218,*unaff_x26,0);
  if (unaff_x21 != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    iVar6 = 0;
    do {
      lVar1 = (long)iVar6;
      iVar6 = iVar6 + 1;
    } while (*(char *)(unaff_x21 + lVar1) != '\0');
    if (iVar6 != 1) {
      FUN_03647340(&stack0x00000218,0x3a,*(undefined8 *)puVar2);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      iVar6 = -1;
      do {
        iVar6 = iVar6 + 1;
      } while (*(char *)(unaff_x21 + iVar6) != '\0');
      FUN_03647f84(&stack0x00000218);
      FUN_03647340(&stack0x00000218,0x3a,*(undefined8 *)puVar2);
      uVar4 = FUN_05542220(&stack0x00000010,0);
      FUN_0364738c(&stack0x00000218,uVar4,
                   *(undefined8 *)
                    Method_System_ReadOnlySpan<OVRPlugin_DynamicObjectClass>_GetPinnableReference__)
      ;
    }
  }
  if (unaff_x20 != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    iVar6 = 0;
    do {
      lVar1 = (long)iVar6;
      iVar6 = iVar6 + 1;
    } while (*(char *)(unaff_x20 + lVar1) != '\0');
    if (iVar6 != 1) {
      FUN_03647340(&stack0x00000218,0x3a,*(undefined8 *)puVar2);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      iVar6 = -1;
      do {
        iVar6 = iVar6 + 1;
      } while (*(char *)(unaff_x20 + iVar6) != '\0');
      FUN_03647f84(&stack0x00000218);
    }
  }
  FUN_03647340(&stack0x00000218,0x5d,*(undefined8 *)puVar2);
  FUN_03647340(&stack0x00000218,0x20,*(undefined8 *)puVar2);
  FUN_05542220(&stack0x00000008,0);
  FUN_03647f84(&stack0x00000218);
  memcpy(&stack0x00000018,&stack0x00000218,0x200);
  if (DAT_06dc41b8 == '\0') {
    FUN_02d965b8(PTR_DAT_069fb930);
    FUN_02d965b8(Method_System_Collections_Generic_LinkedList<WebConnection>_AddFirst__);
    DAT_06dc41b8 = '\x01';
  }
  memcpy(&stack0x00000418,&stack0x00000018,0x200);
  uVar5 = thunk_FUN_02dd2d7c(*(undefined8 *)
                              Method_System_Collections_Generic_LinkedList<WebConnection>_AddFirst__
                             ,&stack0x00000418);
  if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)PTR_DAT_069fb930);
  }
  FUN_0630b598(uVar5,0);
  if (*(long *)(unaff_x22 + 0x28) == in_stack_00000618) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


