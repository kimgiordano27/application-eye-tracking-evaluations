/*
FUNCTION_NAME: FUN_05bbbb80
ENTRY_POINT: 05bbbb80
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_05bbbb80(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  
  if ((DAT_06b81ee7 & 1) == 0) {
                    /* try { // try from 05bbbbc0 to 05cbbbc3 has its CatchHandler @ 05bbbcb8 */
    FUN_02d6084c(Method_OVRObjectPool_HashSetScope<OVRAnchor_TrackableType>_Dispose__);
    FUN_02d6084c(Method_OVRObjectPool_HashSetScope<OVRPlugin_SpaceComponentType>__ctor__);
                    /* try { // try from 05bbbbd0 to 05cbbbdf has its CatchHandler @ 05bbbcc4 */
    FUN_02d6084c(Method_OVRObjectPool_HashSetScope<OVRPlugin_SpaceComponentType>_Dispose__);
    FUN_02d6084c(
                Method_System_Collections_Generic_HashSet<Action<RenderTargetIdentifier,_CommandBuffer>>__ctor__
                );
                    /* try { // try from 05bbbbe8 to 05cbbbf3 has its CatchHandler @ 05bbbcb0 */
    FUN_02d6084c(
                Method_System_Collections_Generic_HashSet<Action<RenderTargetIdentifier,_CommandBuffer>>_Add__
                );
                    /* try { // try from 05bbbbf8 to 05cbbc03 has its CatchHandler @ 05bbbcbc */
    FUN_02d6084c(
                Method_System_Collections_Generic_HashSet<Action<RenderTargetIdentifier,_CommandBuffer>>_GetEnumerator__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_HashSet<Action<RenderTargetIdentifier,_CommandBuffer>>_Remove__
                );
                    /* try { // try from 05bbbc10 to 05cbbc17 has its CatchHandler @ 05bbbcb4 */
    FUN_02d6084c(
                Method_System_Collections_Generic_HashSet<Action<RenderTargetIdentifier,_CommandBuffer>>_get_Count__
                );
                    /* try { // try from 05bbbc18 to 05cbbca7 has its CatchHandler @ 05bbba5c */
    FUN_02d6084c(Method_System_Collections_Generic_HashSet<Action>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_HashSet<Action>_Add__);
    FUN_02d6084c(PTR_DAT_06769c30);
    FUN_02d6084c(Method_System_Collections_Generic_HashSet<Action>_Clear__);
    FUN_02d6084c(Method_System_Collections_Generic_HashSet<Action>_GetEnumerator__);
    FUN_02d6084c(Method_System_Collections_Generic_HashSet<Binding>__ctor__);
    FUN_02d6084c(PTR_DAT_06780c20);
    DAT_06b81ee7 = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  FUN_05bba508(param_1,param_2);
  lVar1 = param_1 + 0x98;
  FUN_05bba4d4(param_1,lVar1);
  if (param_3 != 0) {
                    /* try { // try from 05bbbca8 to 05cbbcab has its CatchHandler @ 05bbbcc0 */
                    /* try { // try from 05bbbcac to 05cbbcdb has its CatchHandler @ 05bbba5c */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05bbbbe8 with catch @ 05bbbcb0
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05bbbc10 with catch @ 05bbbcb4
                        */
    FUN_05bba508(param_1,*(undefined8 *)Method_System_Collections_Generic_HashSet<Binding>__ctor__);
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05bbbbc0 with catch @ 05bbbcb8
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05bbbbf8 with catch @ 05bbbcbc
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05bbbca8 with catch @ 05bbbcc0
                        */
    FUN_05bba4d4(param_1,lVar1);
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05bbbbd0 with catch @ 05bbbcc4
                        */
    FUN_05bb4804(param_3,param_1);
    FUN_05bbaf34(param_1);
    FUN_05bba4d4(param_1,param_1 + 0xa0);
  }
  puVar5 = Method_System_Collections_Generic_HashSet<Action>_Clear__;
  puVar4 = 
  Method_System_Collections_Generic_HashSet<Action<RenderTargetIdentifier,_CommandBuffer>>_get_Count__
  ;
  puVar3 = Method_OVRObjectPool_HashSetScope<OVRPlugin_SpaceComponentType>_Dispose__;
  puVar2 = Method_OVRObjectPool_HashSetScope<OVRPlugin_SpaceComponentType>__ctor__;
  if (param_4 != 0) {
    if (0 < *(int *)(param_4 + 0x18)) {
      FUN_05bba508(param_1,*(undefined8 *)
                            Method_System_Collections_Generic_HashSet<Action>_GetEnumerator__);
      FUN_05bba4d4(param_1,param_1 + 0xa8);
      FUN_03aaceb0(&local_a0,param_4,*(undefined8 *)puVar4);
      uStack_68 = uStack_98;
      local_70 = local_a0;
      local_60 = local_90;
      while (uVar7 = FUN_04a7a4a0(&local_70,*(undefined8 *)puVar3), lVar6 = local_60,
            (uVar7 & 1) != 0) {
        FUN_05bba4d4(param_1,lVar1);
        FUN_05bba508(param_1,*(undefined8 *)puVar5);
        FUN_05bba4d4(param_1,lVar1);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        FUN_05bb4b44(lVar6,param_1);
        FUN_05bbaf34(param_1);
        FUN_05bba4d4(param_1,param_1 + 0xa0);
        FUN_05bbaf34(param_1);
        FUN_05bba4d4(param_1,param_1 + 0xa0);
      }
      FUN_04a7a49c(&local_70,*(undefined8 *)puVar2);
      FUN_05bbaf34(param_1);
      FUN_05bba4d4(param_1,param_1 + 0xb0);
    }
    puVar5 = 
    Method_System_Collections_Generic_HashSet<Action<RenderTargetIdentifier,_CommandBuffer>>_Remove__
    ;
    puVar4 = 
    Method_System_Collections_Generic_HashSet<Action<RenderTargetIdentifier,_CommandBuffer>>__ctor__
    ;
    puVar3 = Method_OVRObjectPool_HashSetScope<OVRAnchor_TrackableType>_Dispose__;
    puVar2 = PTR_DAT_06769c30;
    if (param_5 != 0) {
      if (0 < *(int *)(param_5 + 0x18)) {
        FUN_05bba508(param_1,*(undefined8 *)PTR_DAT_06780c20);
        FUN_05bba4d4(param_1,param_1 + 0xa8);
        FUN_03aaceb0(&local_88,param_5,*(undefined8 *)puVar5);
        while (uVar7 = FUN_04a7a4a0(&local_88,*(undefined8 *)puVar4), lVar6 = local_78,
              (uVar7 & 1) != 0) {
          FUN_05bba4d4(param_1,lVar1);
          FUN_05bba508(param_1,*(undefined8 *)puVar2);
          FUN_05bba4d4(param_1,lVar1);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          FUN_05bb4964(lVar6,param_1);
          FUN_05bbaf34(param_1);
          FUN_05bba4d4(param_1,param_1 + 0xa0);
          FUN_05bbaf34(param_1);
          FUN_05bba4d4(param_1,param_1 + 0xa0);
        }
        FUN_04a7a49c(&local_88,*(undefined8 *)puVar3);
        FUN_05bbaf34(param_1);
        FUN_05bba4d4(param_1,param_1 + 0xb0);
      }
      FUN_05bbaf34(param_1);
      FUN_05bba4d4(param_1,param_1 + 0xa0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


