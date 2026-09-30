/*
FUNCTION_NAME: FUN_067ba474
ENTRY_POINT: 067ba474
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_067ba474(long param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_07279a48;
  if ((DAT_076e0a97 & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_System_IO_Enumeration_FileSystemEnumerable<string>_set_ShouldIncludePredicate__
                      );
    thunk_FUN_032e1da0(Method_OVRObjectPool_HashSetScope<OVRPlugin_SpaceComponentType>__ctor__);
    thunk_FUN_032e1da0(PTR_DAT_07279a48);
    thunk_FUN_032e1da0(PTR_DAT_07279a10);
    thunk_FUN_032e1da0(PTR_DAT_07279a28);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary_Enumerator<string,_string>_MoveNext__
                      );
    DAT_076e0a97 = 1;
  }
  puVar3 = Method_System_Collections_Generic_Dictionary_Enumerator<string,_string>_MoveNext__;
  puVar1 = PTR_DAT_07279a10;
  lVar6 = *param_3;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_066fc668(lVar6,*(undefined8 *)puVar3,1,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar4 = FUN_06785e80(0);
  if ((uVar4 & 1) == 0) {
    if (lVar6 != 0) {
      FUN_06c042c8(lVar6,*(undefined4 *)
                          (*(long *)(*(long *)
                                      Method_OVRObjectPool_HashSetScope<OVRPlugin_SpaceComponentType>__ctor__
                                    + 0xb8) + 4),*(undefined8 *)(param_1 + 0x120),0);
LAB_067ba5dc:
      if (*(int *)(*(long *)PTR_DAT_07279a28 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_06c106d4(param_2,lVar6,0);
      FUN_06c0270c(lVar6,0);
      return;
    }
  }
  else {
    lVar5 = FUN_0678b474(0);
    if (((*(long *)(param_1 + 0x120) != 0) && (lVar5 != 0)) &&
       (lVar5 = FUN_0678b614(lVar5,*(undefined4 *)(*(long *)(param_1 + 0x120) + 0x18),0), lVar5 != 0
       )) {
      FUN_06bef5a8(lVar5,*(undefined8 *)(param_1 + 0x120),0);
      puVar2 = 
      Method_System_IO_Enumeration_FileSystemEnumerable<string>_set_ShouldIncludePredicate__;
      if (*(int *)(*(long *)
                    Method_System_IO_Enumeration_FileSystemEnumerable<string>_set_ShouldIncludePredicate__
                  + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      if (lVar6 != 0) {
        FUN_06c07860(lVar6,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x1c),lVar5,0);
        goto LAB_067ba5dc;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


