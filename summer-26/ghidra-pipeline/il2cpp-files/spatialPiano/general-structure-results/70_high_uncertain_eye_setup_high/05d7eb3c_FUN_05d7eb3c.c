/*
FUNCTION_NAME: FUN_05d7eb3c
ENTRY_POINT: 05d7eb3c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_05d7eb3c(long param_1,long *param_2,undefined8 param_3,uint param_4,undefined8 param_5,
                 undefined8 param_6,ulong param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_4dc [108];
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined1 auStack_44c [108];
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined1 auStack_3bc [108];
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined4 uStack_2d8;
  undefined4 local_2d4;
  undefined4 uStack_2d0;
  undefined8 uStack_2cc;
  undefined1 auStack_2c0 [200];
  undefined1 auStack_1f8 [200];
  undefined1 auStack_130 [200];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((DAT_06bc3a39 & 1) == 0) {
    FUN_02f08768(Method_System_Xml_Schema_Parser_LoadAttributeNode__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    DAT_06bc3a39 = 1;
  }
  memset(auStack_130,0,200);
  uStack_2cc = 0;
  uStack_2d0 = 0;
  uStack_328 = 0;
  local_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  local_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  local_2f0 = 0;
  uStack_2d8 = 0;
  local_2d4 = 0;
  uStack_2e0 = 0;
  if (*param_2 == 0) {
LAB_05d7ed54:
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
  else {
    uVar3 = *(undefined8 *)(*param_2 + 0x10);
    if (*(int *)(*(long *)Method_System_Xml_Schema_Parser_LoadAttributeNode__ + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05d7ed6c(auStack_130,uVar3,param_4 & 1);
    FUN_06127030(&local_330,0,0);
    if ((param_7 & 1) == 0) {
      uStack_348 = *(undefined8 *)(param_1 + 0xd8);
      local_350 = *(undefined8 *)(param_1 + 0xd0);
      uStack_338 = *(undefined8 *)(param_1 + 0xe8);
      uStack_340 = *(undefined8 *)(param_1 + 0xe0);
      memcpy(auStack_3bc,&local_330,0x6c);
      lVar2 = *param_2;
      if (lVar2 == 0) goto LAB_05d7ed54;
      if (*(int *)(*(long *)
                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      memcpy(auStack_2c0,auStack_130,200);
      uStack_468 = uStack_348;
      local_470 = local_350;
      uStack_458 = uStack_338;
      uStack_460 = uStack_340;
      memcpy(auStack_4dc,auStack_3bc,0x6c);
      FUN_05dacbf0(param_5,param_3,auStack_2c0,&local_470,auStack_4dc,lVar2 + 0x68,0);
    }
    else {
      uStack_348 = *(undefined8 *)(param_1 + 0xd8);
      local_350 = *(undefined8 *)(param_1 + 0xd0);
      uStack_338 = *(undefined8 *)(param_1 + 0xe8);
      uStack_340 = *(undefined8 *)(param_1 + 0xe0);
      memcpy(auStack_3bc,&local_330,0x6c);
      lVar2 = *param_2;
      if (lVar2 == 0) goto LAB_05d7ed54;
      if (*(int *)(*(long *)
                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      memcpy(auStack_1f8,auStack_130,200);
      uStack_3d8 = uStack_348;
      local_3e0 = local_350;
      uStack_3c8 = uStack_338;
      uStack_3d0 = uStack_340;
      memcpy(auStack_44c,auStack_3bc,0x6c);
      FUN_05dace88(param_6,param_3,auStack_1f8,&local_3e0,auStack_44c,lVar2 + 0x58,0);
    }
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 05d7ed48 to 05e7eeef has its CatchHandler @ 05d7ed48
                       catch() { ... } // from try @ 05d7ed48 with catch @ 05d7ed48
                       catch() { ... } // from try @ 05d7eef8 with catch @ 05d7ed48
                       catch() { ... } // from try @ 05d7ef14 with catch @ 05d7ed48
                       catch() { ... } // from try @ 05d7f0dc with catch @ 05d7ed48
                       catch() { ... } // from try @ 05d7f100 with catch @ 05d7ed48 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


