/*
FUNCTION_NAME: FUN_051fcb88
ENTRY_POINT: 051fcb88
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_051fcb88(long *param_1,undefined4 param_2)

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
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  
  puVar9 = System_Action<TimerState>_TypeInfo;
  puVar8 = System_Action<TextAsset>_TypeInfo;
  puVar7 = System_Action<TeleportationMultiAnchorVolume>_TypeInfo;
  puVar6 = System_Action<Task>_TypeInfo;
  puVar5 = System_Action<Tab>_TypeInfo;
  puVar4 = UnityEngine_XR_Management_XRManagementAnalytics_BuildEvent_var;
  puVar3 = PTR_DAT_0664c818;
  puVar2 = PTR_DAT_0664c810;
  if ((DAT_06a51feb & 1) == 0) {
    FUN_02d4dc40(PlayFab_ClientModels_UnlinkFacebookInstantGamesIdRequest_var);
    FUN_02d4dc40(System_Action<TimerState>_TypeInfo);
    FUN_02d4dc40(System_Action<Region>_TypeInfo);
    FUN_02d4dc40(System_Action<TrackedDevice>_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664c810);
    FUN_02d4dc40(PTR_DAT_0664c818);
    FUN_02d4dc40(System_Action<Transform>_TypeInfo);
    FUN_02d4dc40(System_Action<Task>_TypeInfo);
    FUN_02d4dc40(System_Action<Tab>_TypeInfo);
    FUN_02d4dc40(System_Action<TransformDispatchData>_TypeInfo);
    FUN_02d4dc40(System_Action<TreeViewExpansionChangedArgs>_TypeInfo);
    FUN_02d4dc40(System_Action<Type>_TypeInfo);
    FUN_02d4dc40(System_Action<TypeDispatchData>_TypeInfo);
    FUN_02d4dc40(System_Action<TextAsset>_TypeInfo);
    FUN_02d4dc40(System_Action<TeleportationMultiAnchorVolume>_TypeInfo);
    FUN_02d4dc40(System_Action<TypePathVisitor>_TypeInfo);
    FUN_02d4dc40(UnityEngine_XR_Management_XRManagementAnalytics_BuildEvent_var);
    DAT_06a51feb = 1;
  }
  param_1[0xb] = *(long *)puVar4;
  thunk_FUN_02dc1ef0();
  lVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar5);
  FUN_036a55a0(lVar10,*(undefined8 *)puVar6);
  param_1[0x23] = lVar10;
  thunk_FUN_02dc1ef0(param_1 + 0x23,lVar10);
  uVar11 = *(undefined8 *)puVar7;
  *(undefined1 *)(param_1 + 0x30) = 1;
  lVar10 = thunk_FUN_02d8a638(uVar11);
  FUN_03a8b5c4(lVar10,*(undefined8 *)puVar8);
  param_1[0x31] = lVar10;
  thunk_FUN_02dc1ef0(param_1 + 0x31,lVar10);
  lVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
  FUN_04caa7b0(lVar10,*(undefined8 *)puVar2);
  param_1[0x32] = lVar10;
  thunk_FUN_02dc1ef0(param_1 + 0x32,lVar10);
  FUN_05044d4c(param_1,0);
  lVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar9);
  FUN_051fcf9c(lVar10,param_1);
  param_1[0x17] = lVar10;
  thunk_FUN_02dc1ef0(param_1 + 0x17,lVar10);
  lVar10 = thunk_FUN_02d8a638(*(undefined8 *)System_Action<TypeDispatchData>_TypeInfo);
  FUN_051fd024(lVar10,param_1);
  param_1[0x18] = lVar10;
  thunk_FUN_02dc1ef0(param_1 + 0x18,lVar10);
  lVar10 = thunk_FUN_02d8a638(*(undefined8 *)System_Action<Transform>_TypeInfo);
                    /* try { // try from 051fcdb8 to 052fcf63 has its CatchHandler @ 051fcdb8
                       catch() { ... } // from try @ 051fcdb8 with catch @ 051fcdb8
                       catch() { ... } // from try @ 051fd06c with catch @ 051fcdb8
                       catch() { ... } // from try @ 051fd11c with catch @ 051fcdb8
                       catch() { ... } // from try @ 051fd178 with catch @ 051fcdb8 */
  FUN_051fd0ac(lVar10,param_1);
  param_1[0x19] = lVar10;
  thunk_FUN_02dc1ef0(param_1 + 0x19,lVar10);
  lVar10 = thunk_FUN_02d8a638(*(undefined8 *)System_Action<Type>_TypeInfo);
  FUN_051fd134(lVar10,param_1);
  param_1[0x1a] = lVar10;
  thunk_FUN_02dc1ef0(param_1 + 0x1a,lVar10);
  lVar10 = thunk_FUN_02d8a638(*(undefined8 *)System_Action<TypePathVisitor>_TypeInfo);
  FUN_051fd1bc(lVar10,param_1);
  param_1[0x1b] = lVar10;
  thunk_FUN_02dc1ef0(param_1 + 0x1b,lVar10);
  lVar10 = thunk_FUN_02d8a638(*(undefined8 *)System_Action<TrackedDevice>_TypeInfo);
  FUN_051fd244(lVar10,param_1);
  param_1[0x1c] = lVar10;
  thunk_FUN_02dc1ef0(param_1 + 0x1c,lVar10);
  lVar10 = thunk_FUN_02d8a638(*(undefined8 *)System_Action<TreeViewExpansionChangedArgs>_TypeInfo);
  FUN_051fd2cc(lVar10,param_1,param_2);
  plVar12 = param_1 + 2;
  *plVar12 = lVar10;
  thunk_FUN_02dc1ef0(plVar12,lVar10);
  lVar10 = *plVar12;
  uVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                               PlayFab_ClientModels_UnlinkFacebookInstantGamesIdRequest_var);
  FUN_04d28f90(uVar11,param_1,*(undefined8 *)System_Action<TransformDispatchData>_TypeInfo,0);
  if (lVar10 != 0) {
    FUN_051be920(lVar10,uVar11,0);
    puVar2 = PTR_DAT_066462a0;
    if (*plVar12 != 0) {
      *(undefined4 *)(*plVar12 + 0x28) = 1;
      puVar3 = System_Action<Region>_TypeInfo;
      lVar10 = (**(code **)(*param_1 + 0x1f8))
                         (param_1,**(undefined8 **)(*(long *)(puVar2 + 0x90) + 0xb8),0xffffffff,1,0,
                          *(undefined8 *)(*param_1 + 0x200));
      param_1[0x24] = lVar10;
      thunk_FUN_02dc1ef0(param_1 + 0x24,lVar10);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      FUN_051f9724();
      iVar1 = *(int *)((long)param_1 + 0x9c);
      if (iVar1 != 0) {
        lVar10 = param_1[0x14];
        *(undefined4 *)((long)param_1 + 0x9c) = 0;
        if (lVar10 != 0) {
                    /* try { // try from 051fcf64 to 052fcf8b has its CatchHandler @ 051fd144 */
                    /* WARNING: Could not recover jumptable at 0x051fcf78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar10 + 0x18))
                    (*(undefined8 *)(lVar10 + 0x40),iVar1,0,*(undefined8 *)(lVar10 + 0x28));
          return;
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


