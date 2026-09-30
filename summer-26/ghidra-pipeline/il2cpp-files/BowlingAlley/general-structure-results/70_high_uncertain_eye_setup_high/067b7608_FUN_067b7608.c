/*
FUNCTION_NAME: FUN_067b7608
ENTRY_POINT: 067b7608
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_067b7608(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  byte bVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  
  puVar4 = PTR_DAT_07279c60;
  puVar3 = PTR_DAT_07279c58;
  puVar2 = PTR_DAT_072799f0;
  if ((DAT_076e0a91 & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_System_IO_Enumeration_FileSystemEnumerable<string>_set_ShouldIncludePredicate__
                      );
    thunk_FUN_032e1da0(Method_OVRObjectPool_HashSetScope<OVRPlugin_SpaceComponentType>__ctor__);
    thunk_FUN_032e1da0(Method_OVRObjectPool_HashSetScope<OVRPlugin_SpaceComponentType>_Dispose__);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_HashSet<Action<RenderTargetIdentifier,_CommandBuffer>>__ctor__
                      );
    thunk_FUN_032e1da0(PTR_DAT_0727aa68);
    thunk_FUN_032e1da0(PTR_DAT_07279c60);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_HashSet<Action<RenderTargetIdentifier,_CommandBuffer>>_Add__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_HashSet<Action<RenderTargetIdentifier,_CommandBuffer>>_GetEnumerator__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_HashSet<Action<RenderTargetIdentifier,_CommandBuffer>>_Remove__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_HashSet<Action<RenderTargetIdentifier,_CommandBuffer>>_get_Count__
                      );
    thunk_FUN_032e1da0(PTR_DAT_07279c58);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_HashSet<KeyValuePair<int,_int>>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_HashSet<KeyValuePair<int,_int>>_Add__);
    thunk_FUN_032e1da0(PTR_DAT_07279c00);
    thunk_FUN_032e1da0(PTR_DAT_07286a90);
    thunk_FUN_032e1da0(PTR_DAT_072799f0);
    thunk_FUN_032e1da0(PTR_DAT_07279a10);
    thunk_FUN_032e1da0(PTR_DAT_07279a08);
    thunk_FUN_032e1da0(PTR_DAT_07279908);
    thunk_FUN_032e1da0(PTR_DAT_07281d10);
    thunk_FUN_032e1da0(PTR_DAT_0728dcf8);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_HashSet<KeyValuePair<int,_int>>_RemoveWhere__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_HashSet<Tuple<string,_string>>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_HashSet<Tuple<string,_string>>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_HashSet<Tuple<string,_string>>_Contains__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_HashSet<Action>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_HashSet<Action>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_HashSet<Action>_Clear__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_HashSet<Action>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_HashSet<BindingRestrictions>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_HashSet<BindingRestrictions>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_HashSet<BodyJointId>_Add__);
    DAT_076e0a91 = 1;
  }
  puVar9 = Method_System_Collections_Generic_HashSet<BodyJointId>_Add__;
  puVar8 = Method_System_Collections_Generic_HashSet<Tuple<string,_string>>__ctor__;
  puVar7 = Method_System_Collections_Generic_HashSet<KeyValuePair<int,_int>>_RemoveWhere__;
  puVar6 = Method_OVRObjectPool_HashSetScope<OVRPlugin_SpaceComponentType>__ctor__;
  puVar5 = Method_System_IO_Enumeration_FileSystemEnumerable<string>_set_ShouldIncludePredicate__;
  uVar14 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
  FUN_0418d31c(uVar14,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x110) = uVar14;
  thunk_FUN_0333a630(param_1 + 0x110,uVar14);
  uVar14 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
  FUN_0418d31c(uVar14,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x118) = uVar14;
  thunk_FUN_0333a630(param_1 + 0x118,uVar14);
  uVar14 = thunk_FUN_032a56a0(*(undefined8 *)
                               Method_System_Collections_Generic_HashSet<KeyValuePair<int,_int>>_Add__
                             );
  FUN_042bd528(uVar14,*(undefined8 *)
                       Method_System_Collections_Generic_HashSet<Action<RenderTargetIdentifier,_CommandBuffer>>_Add__
              );
  *(undefined8 *)(param_1 + 0x130) = uVar14;
  thunk_FUN_0333a630((long *)(param_1 + 0x130),uVar14);
  uVar14 = thunk_FUN_032a56a0(*(undefined8 *)
                               Method_System_Collections_Generic_HashSet<KeyValuePair<int,_int>>__ctor__
                             );
  FUN_0420d00c(uVar14,*(undefined8 *)
                       Method_System_Collections_Generic_HashSet<Action<RenderTargetIdentifier,_CommandBuffer>>_GetEnumerator__
              );
  *(undefined8 *)(param_1 + 0x150) = uVar14;
  thunk_FUN_0333a630(param_1 + 0x150,uVar14);
  uVar14 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
  FUN_066c2eec(uVar14,*(undefined8 *)
                       Method_System_Collections_Generic_HashSet<BindingRestrictions>_Add__,0);
  *(undefined8 *)(param_1 + 0x168) = uVar14;
  thunk_FUN_0333a630(param_1 + 0x168,uVar14);
  uVar14 = thunk_FUN_032a56a0(*(undefined8 *)
                               Method_System_Collections_Generic_HashSet<Action<RenderTargetIdentifier,_CommandBuffer>>__ctor__
                             );
  FUN_0504edfc(uVar14,*(undefined8 *)
                       Method_OVRObjectPool_HashSetScope<OVRPlugin_SpaceComponentType>_Dispose__);
  *(undefined8 *)(param_1 + 0x170) = uVar14;
  thunk_FUN_0333a630(param_1 + 0x170,uVar14);
  if (*(int *)(*(long *)PTR_DAT_07279a08 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  puVar4 = Method_System_Collections_Generic_HashSet<Action>_Add__;
  puVar3 = PTR_DAT_07279a10;
  FUN_06756528(param_1,0);
  uVar14 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
  FUN_066c2eec(uVar14,*(undefined8 *)puVar9,0);
  *(undefined8 *)(param_1 + 0x38) = uVar14;
  thunk_FUN_0333a630((undefined8 *)(param_1 + 0x38),uVar14);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  uVar11 = FUN_06bc0fd0(*(undefined8 *)puVar8,0);
  **(undefined4 **)(*(long *)puVar6 + 0xb8) = uVar11;
  uVar11 = FUN_06bc0fd0(*(undefined8 *)puVar7,0);
  *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 4) = uVar11;
  uVar11 = FUN_06bc0fd0(*(undefined8 *)
                         Method_System_Collections_Generic_HashSet<Action>_GetEnumerator__,0);
  *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 8) = uVar11;
  uVar11 = FUN_06bc0fd0(*(undefined8 *)Method_System_Collections_Generic_HashSet<Action>__ctor__,0);
  *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xc) = uVar11;
  uVar11 = FUN_06bc0fd0(*(undefined8 *)Method_System_Collections_Generic_HashSet<Action>_Clear__,0);
  *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10) = uVar11;
  uVar11 = FUN_06bc0fd0(*(undefined8 *)
                         Method_System_Collections_Generic_HashSet<Tuple<string,_string>>_Add__,0);
  *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x14) = uVar11;
  uVar11 = FUN_06bc0fd0(*(undefined8 *)
                         Method_System_Collections_Generic_HashSet<BindingRestrictions>__ctor__,0);
  *(undefined4 *)(param_1 + 0xe4) = uVar11;
  uVar11 = FUN_06bc0fd0(*(undefined8 *)
                         Method_System_Collections_Generic_HashSet<Tuple<string,_string>>_Contains__
                        ,0);
  lVar15 = *(long *)puVar5;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(lVar15);
    lVar15 = *(long *)puVar5;
  }
  *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0x18) = uVar11;
  puVar2 = PTR_DAT_07281d10;
  uVar11 = FUN_06bc0fd0(*(undefined8 *)puVar4,0);
  *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x1c) = uVar11;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  bVar10 = FUN_06785e80(0);
  *(byte *)(param_1 + 0xe0) = bVar10 & 1;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  puVar4 = PTR_DAT_0728dcf8;
  puVar3 = PTR_DAT_0727aa68;
  puVar2 = PTR_DAT_07279908;
  iVar12 = FUN_0679ce30(0);
  iVar1 = iVar12 + 1;
  iVar13 = iVar1;
  if (*(char *)(param_1 + 0xe0) == '\0') {
    if (*(int *)(*(long *)PTR_DAT_07279c00 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    iVar13 = FUN_05924844(iVar1,iVar12,0);
  }
  uVar14 = FUN_032d5d3c(*(undefined8 *)puVar3,iVar13);
  *(undefined8 *)(param_1 + 0x108) = uVar14;
  thunk_FUN_0333a630(param_1 + 0x108);
  uVar14 = FUN_032d5d3c(*(undefined8 *)puVar3,iVar1);
  *(undefined8 *)(param_1 + 0x100) = uVar14;
  thunk_FUN_0333a630(param_1 + 0x100);
  uVar14 = FUN_032d5d3c(*(undefined8 *)puVar3,iVar1);
  *(undefined8 *)(param_1 + 0x148) = uVar14;
  thunk_FUN_0333a630(param_1 + 0x148);
  uVar14 = FUN_032d5d3c(*(undefined8 *)puVar4,iVar13);
  *(undefined8 *)(param_1 + 0x120) = uVar14;
  thunk_FUN_0333a630(param_1 + 0x120);
  uVar14 = FUN_032d5d3c(*(undefined8 *)puVar2,iVar1);
  *(undefined8 *)(param_1 + 0x138) = uVar14;
  thunk_FUN_0333a630(param_1 + 0x138);
  if (*(char *)(param_1 + 0xe0) != '\0') {
    return;
  }
  uVar14 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_07286a90,iVar12);
  *(undefined8 *)(param_1 + 0x128) = uVar14;
  thunk_FUN_0333a630(param_1 + 0x128);
  if (*(long *)(param_1 + 0x150) != 0) {
    FUN_0420d3c4(*(long *)(param_1 + 0x150),iVar12,
                 *(undefined8 *)
                  Method_System_Collections_Generic_HashSet<Action<RenderTargetIdentifier,_CommandBuffer>>_get_Count__
                );
    lVar15 = *(long *)(param_1 + 0x130);
    if (lVar15 != 0) {
      FUN_042bd8e0(lVar15,iVar12,
                   *(undefined8 *)
                    Method_System_Collections_Generic_HashSet<Action<RenderTargetIdentifier,_CommandBuffer>>_Remove__
                  );
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


