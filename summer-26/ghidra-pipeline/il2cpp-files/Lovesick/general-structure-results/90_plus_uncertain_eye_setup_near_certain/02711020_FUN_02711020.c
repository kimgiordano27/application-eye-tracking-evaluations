/*
FUNCTION_NAME: FUN_02711020
ENTRY_POINT: 02711020
PROGRAM: Lovesick-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_02711020(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 local_24 [4];
  
  if ((DAT_03788237 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(Method_OVRPlugin_PinnedArray<Guid>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Panel>_Add__);
    DAT_03788237 = 1;
  }
  local_24[0] = 0;
  if (param_2 != 0) {
    lVar6 = *(long *)(param_2 + 0x40);
    lVar7 = *(long *)(param_2 + 0x68);
    lVar4 = FUN_02727e38(0x5f,lVar6,0,*(undefined4 *)(param_1 + 0xe8),
                         *(undefined4 *)(param_1 + 0xf8),local_24,0);
    puVar3 = StringLiteral_302;
    puVar2 = Method_OVRPlugin_PinnedArray<Guid>__ctor__;
    puVar1 = Method_System_Collections_Generic_List<Panel>_Add__;
    if (lVar4 == 0) {
      if (lVar7 == 0) goto LAB_02711154;
      if (*(char *)(lVar7 + 0x88) != '\0') {
        if (lVar6 == 0) goto LAB_02711154;
        uVar5 = FUN_0268b6ac(lVar6,0);
        uVar5 = FUN_01600424(*(undefined8 *)puVar1,uVar5,*(undefined8 *)puVar2,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar3);
        }
        FUN_02661754(uVar5,0);
      }
    }
    else {
      uStack_48 = 0;
      local_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      FUN_0271e4d0(&local_50,lVar4,0,0);
      *(undefined8 *)(param_1 + 0xa38) = uStack_38;
      *(undefined8 *)(param_1 + 0xa30) = uStack_40;
      *(undefined8 *)(param_1 + 0xa28) = uStack_48;
      *(undefined8 *)(param_1 + 0xa20) = local_50;
    }
    return;
  }
LAB_02711154:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


