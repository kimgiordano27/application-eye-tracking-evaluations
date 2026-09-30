/*
FUNCTION_NAME: FUN_024df1d8
ENTRY_POINT: 024df1d8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_024df1d8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 local_34 [4];
  
  puVar1 = MB_AtlasesAndRects_TypeInfo;
  if ((DAT_03782789 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(MB_AtlasesAndRects_TypeInfo);
    thunk_FUN_00d48444(Method_OVRPlugin_PinnedArray<Guid>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Panel>_Add__);
    DAT_03782789 = 1;
  }
  local_34[0] = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar4 = FUN_024ba464(0x5f,param_2,0,0,400,local_34,0);
  if (lVar4 == 0) {
    uVar5 = FUN_024e91fc();
    puVar3 = StringLiteral_302;
    puVar2 = Method_OVRPlugin_PinnedArray<Guid>__ctor__;
    puVar1 = Method_System_Collections_Generic_List<Panel>_Add__;
    if ((uVar5 & 1) == 0) {
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar6 = FUN_0268b6ac(param_2,0);
      uVar6 = FUN_01600424(*(undefined8 *)puVar1,uVar6,*(undefined8 *)puVar2,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar3);
      }
      FUN_0266185c(uVar6,param_1,0);
    }
  }
  else {
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    FUN_024f1034(&local_60,lVar4,0,0);
    *(undefined8 *)(param_1 + 0x670) = uStack_58;
    *(undefined8 *)(param_1 + 0x668) = local_60;
    *(undefined8 *)(param_1 + 0x680) = uStack_48;
    *(undefined8 *)(param_1 + 0x678) = uStack_50;
  }
  return;
}


