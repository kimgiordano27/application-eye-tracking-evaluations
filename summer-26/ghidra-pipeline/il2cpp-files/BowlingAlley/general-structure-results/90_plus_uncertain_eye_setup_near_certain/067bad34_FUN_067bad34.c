/*
FUNCTION_NAME: FUN_067bad34
ENTRY_POINT: 067bad34
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_067bad34(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined8 local_78;
  
  if ((DAT_076e0a99 & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_System_IO_Enumeration_FileSystemEnumerable<string>_set_ShouldIncludePredicate__
                      );
    thunk_FUN_032e1da0(Method_OVRObjectPool_HashSetScope<OVRPlugin_SpaceComponentType>__ctor__);
    thunk_FUN_032e1da0(
                      Method_System_IO_Enumeration_FileSystemEnumerable<FileSystemInfo>_set_ShouldIncludePredicate__
                      );
    DAT_076e0a99 = 1;
  }
  puVar4 = Method_OVRObjectPool_HashSetScope<OVRPlugin_SpaceComponentType>__ctor__;
  local_78 = 0;
  if (*(char *)(param_1 + 0xe0) == '\0') {
    if (param_2 == 0) goto LAB_067bb008;
    FUN_06c042c8(param_2,*(undefined4 *)
                          (*(long *)(*(long *)
                                      Method_OVRObjectPool_HashSetScope<OVRPlugin_SpaceComponentType>__ctor__
                                    + 0xb8) + 4),*(undefined8 *)(param_1 + 0x120),0);
    FUN_06c0431c(param_2,**(undefined4 **)(*(long *)puVar4 + 0xb8),*(undefined8 *)(param_1 + 0x128),
                 0);
  }
  else {
    lVar5 = FUN_0678b474(0);
    if (((*(long *)(param_1 + 0x120) == 0) || (lVar5 == 0)) ||
       (lVar5 = FUN_0678b614(lVar5,*(undefined4 *)(*(long *)(param_1 + 0x120) + 0x18),0),
       puVar3 = 
       Method_System_IO_Enumeration_FileSystemEnumerable<string>_set_ShouldIncludePredicate__,
       lVar5 == 0)) goto LAB_067bb008;
    FUN_06bef5a8(lVar5,*(undefined8 *)(param_1 + 0x120),0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    if (param_2 == 0) goto LAB_067bb008;
    FUN_06c07860(param_2,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x1c),lVar5,0);
    lVar5 = FUN_0678b474(0);
    if (((*(long *)(param_1 + 0x128) == 0) || (lVar5 == 0)) ||
       (lVar5 = FUN_0678b670(lVar5,*(undefined4 *)(*(long *)(param_1 + 0x128) + 0x18),0), lVar5 == 0
       )) goto LAB_067bb008;
    FUN_06bef5a8(lVar5,*(undefined8 *)(param_1 + 0x128),0);
    FUN_06c07860(param_2,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18),lVar5,0);
  }
  uVar6 = *(undefined4 *)(param_1 + 0xf0);
  uVar7 = *(undefined4 *)(param_1 + 0xf4);
  if (*(int *)(*(long *)
                Method_System_IO_Enumeration_FileSystemEnumerable<FileSystemInfo>_set_ShouldIncludePredicate__
              + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_0678ccd4(uVar6,uVar7,(long)&local_78 + 4,&local_78,0);
  FUN_06c03c68(local_78._4_4_,local_78 & 0xffffffff,0,0,param_2,
               *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10),0);
  if ((param_3 & 1) != 0) {
    lVar5 = *(long *)(param_1 + 0xe8);
    if (lVar5 == 0) {
LAB_067bb008:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    iVar1 = *(int *)(lVar5 + 0xac);
    iVar2 = *(int *)(lVar5 + 0xb0);
    if (DAT_076cd825 == '\0') {
      thunk_FUN_032e1da0(PTR_DAT_07279af0);
      DAT_076cd825 = '\x01';
    }
    fVar8 = *(float *)(*(long *)(*(long *)PTR_DAT_07279af0 + 0xb8) + 8) / (float)iVar1;
    fVar9 = *(float *)(*(long *)(*(long *)PTR_DAT_07279af0 + 0xb8) + 0xc) / (float)iVar2;
                    /* try { // try from 067baf78 to 068bb1fb has its CatchHandler @ 067baf78
                       catch() { ... } // from try @ 067baf78 with catch @ 067baf78
                       catch() { ... } // from try @ 067bb2fc with catch @ 067baf78
                       catch() { ... } // from try @ 067bb424 with catch @ 067baf78
                       catch() { ... } // from try @ 067bb4d0 with catch @ 067baf78 */
    FUN_06c03c68(-(fVar8 * 0.5),-(fVar9 * 0.5),fVar8 * 0.5,-(fVar9 * 0.5),param_2,
                 *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8),0);
    FUN_06c03c68(-(fVar8 * 0.5),fVar9 * 0.5,fVar8 * 0.5,fVar9 * 0.5,param_2,
                 *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xc),0);
    FUN_06c03c68(fVar8,fVar9,(float)iVar1,(float)iVar2,param_2,
                 *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x14),0);
  }
  return;
}


