/*
FUNCTION_NAME: FUN_05ce4470
ENTRY_POINT: 05ce4470
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x05ce47d0) */
/* WARNING: Removing unreachable block (ram,0x05ce477c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long FUN_05ce4470(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  char local_54 [4];
  undefined8 local_50;
  long local_48;
  
  puVar2 = Method_System_Collections_Generic_Dictionary<ulong,_Request>_Remove__;
  local_48 = param_1;
  if ((DAT_06dc2d59 & 1) == 0) {
                    /* try { // try from 05ce44ac to 05de44b3 has its CatchHandler @ 05ce452c */
    FUN_02d965b8(Method_System_IO_Enumeration_FileSystemEnumerable<FileSystemInfo>__ctor__);
                    /* try { // try from 05ce44b4 to 05de44b7 has its CatchHandler @ 05ce451c */
                    /* try { // try from 05ce44b8 to 05de44bb has its CatchHandler @ 05ce4518 */
                    /* try { // try from 05ce44bc to 05de44c3 has its CatchHandler @ 05ce4578 */
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<ulong,_Request>_Remove__);
                    /* try { // try from 05ce44c4 to 05de44cb has its CatchHandler @ 05ce4514 */
    FUN_02d965b8(PTR_DAT_069fc180);
                    /* try { // try from 05ce44cc to 05de44cf has its CatchHandler @ 05ce4510 */
                    /* try { // try from 05ce44d0 to 05de44d3 has its CatchHandler @ 05ce450c */
                    /* try { // try from 05ce44d4 to 05de44db has its CatchHandler @ 05ce4540 */
    FUN_02d965b8(Method_Unity_XR_CoreUtils_Collections_HashSetList<IDisposable>_Clear__);
                    /* try { // try from 05ce44dc to 05de44e7 has its CatchHandler @ 05ce4578 */
    FUN_02d965b8(Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractor>_get_Item__);
                    /* try { // try from 05ce44e8 to 05de44f3 has its CatchHandler @ 05ce4540 */
    DAT_06dc2d59 = 1;
  }
  local_50 = 0;
                    /* try { // try from 05ce44f4 to 05de455b has its CatchHandler @ 05ce3ca0 */
  local_54[0] = '\0';
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  puVar3 = Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractor>_get_Item__;
                    /* catch() { ... } // from try @ 05ce44d0 with catch @ 05ce450c */
                    /* catch() { ... } // from try @ 05ce44cc with catch @ 05ce4510 */
                    /* catch() { ... } // from try @ 05ce44c4 with catch @ 05ce4514 */
  uVar4 = FUN_05cd427c(0);
  puVar1 = PTR_DAT_069fc180;
                    /* catch() { ... } // from try @ 05ce44b8 with catch @ 05ce4518 */
  if ((uVar4 & 1) != 0) {
                    /* catch() { ... } // from try @ 05ce44b4 with catch @ 05ce451c */
                    /* catch() { ... } // from try @ 05ce43e4 with catch @ 05ce4520 */
                    /* catch() { ... } // from try @ 05ce4378 with catch @ 05ce4524 */
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_05cd5218(param_1,0,*(undefined8 *)puVar3,0);
    plVar5 = (long *)FUN_02d966a4(*(undefined8 *)puVar1,1);
    if ((*(long *)(param_1 + 0x50) == 0) || (plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar9 = *(long *)(*(long *)(param_1 + 0x50) + 0x10);
    if ((lVar9 != 0) &&
       (lVar6 = thunk_FUN_02dd3048(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
      uVar7 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar7,0);
    }
    if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    plVar5[4] = lVar9;
    LeanTween__value(plVar5 + 4,lVar9);
    uVar7 = FUN_0540edec(*(undefined8 *)
                          Method_Unity_XR_CoreUtils_Collections_HashSetList<IDisposable>_Clear__,
                         plVar5,0);
    FUN_05cd42e0(param_1,uVar7,*(undefined8 *)puVar3,0);
  }
  if (*(char *)(param_1 + 0x60) != '\0') {
    thunk_FUN_02dfd288(PTR_DAT_069ff3c8);
    uVar7 = thunk_FUN_02dd3144();
    uVar8 = thunk_FUN_02dfd288(
                              Method_System_Collections_Generic_Dictionary<uint,_SpriteGlyph>_Clear__
                              );
    FUN_054e8008(uVar7,uVar8,0);
    uVar8 = thunk_FUN_02dfd288(
                              Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRInteractionGroup>__ctor__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar7,uVar8);
  }
  *(undefined1 *)(param_1 + 0x60) = 1;
  if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if ((*(byte *)(*(long *)(param_1 + 0x50) + 0x1c) >> 1 & 1) == 0) {
    thunk_FUN_02dfd288(Method_System_Collections_Generic_Dictionary<string,_StringBuilder>_Clear__);
    uVar7 = thunk_FUN_02dd3144();
    uVar8 = thunk_FUN_02dfd288(
                              Method_System_Collections_Generic_Dictionary<string,_Variant>_get_Values__
                              );
    FUN_054e8008(uVar7,uVar8,0);
    uVar8 = thunk_FUN_02dfd288(
                              Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRInteractionGroup>__ctor__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar7,uVar8);
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    FUN_0540e544(*(long *)(param_1 + 0xa8),0);
    param_1 = local_48;
  }
  FUN_05ce2738(param_1,1);
  lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                              Method_System_IO_Enumeration_FileSystemEnumerable<FileSystemInfo>__ctor__
                            );
  FUN_05cd3b10(lVar9,1,1,local_48,param_3,param_2,0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  local_50 = FUN_05cd3bd8(lVar9,0);
  local_54[0] = '\0';
  FUN_0554bf68(local_50,local_54,0);
  *(long *)(local_48 + 0xf8) = lVar9;
  LeanTween__value((long *)(local_48 + 0xf8),lVar9);
  UnityEngine_InputSystem_InputManager__PerformLayoutPostRegistration(local_48,1);
  FUN_05cd3db0(lVar9,0);
  FUN_05ce2738(local_48,0);
  if (local_54[0] != '\0') {
    thunk_FUN_02da42ec(local_50,0);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar4 = FUN_05cd427c(0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_05cd5d64(local_48,0,*(undefined8 *)puVar3,0);
  }
  return lVar9;
}


