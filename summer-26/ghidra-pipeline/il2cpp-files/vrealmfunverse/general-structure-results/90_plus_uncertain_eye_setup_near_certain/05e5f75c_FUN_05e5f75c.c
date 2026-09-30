/*
FUNCTION_NAME: FUN_05e5f75c
ENTRY_POINT: 05e5f75c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_15;weak_xr_or_state_hits_15;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_15
*/


void FUN_05e5f75c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((DAT_066dc640 & 1) == 0) {
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_39__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_4__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_40__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_41__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_42__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_43__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_44__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_45__);
    DAT_066dc640 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  auVar10 = ZEXT816(0);
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar7 = FUN_03abd178(*(long *)(param_1 + 0x20),
                           *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_42__),
     puVar5 = Method_OVRPlugin_<>c_<_cctor>b__810_45__,
     puVar4 = Method_OVRPlugin_<>c_<_cctor>b__810_44__,
     puVar3 = Method_OVRPlugin_<>c_<_cctor>b__810_43__,
     puVar2 = Method_OVRPlugin_<>c_<_cctor>b__810_4__,
     puVar1 = Method_OVRPlugin_<>c_<_cctor>b__810_39__, auVar10._8_8_ = local_90._8_8_,
     auVar10._0_8_ = local_90._0_8_, lVar7 != 0)) {
    FUN_036562d4(&local_70,lVar7,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_41__);
    while (uVar8 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<TerrainTileCoord,_object>__Dispose
                             (&local_70,*(undefined8 *)puVar2), (uVar8 & 1) != 0) {
      lVar7 = *(long *)(param_1 + 0x28);
      local_80 = local_60;
      uStack_78 = uStack_58;
      uVar9 = FUN_0322c2e4(local_60,uStack_58,*(undefined8 *)puVar4);
      uVar9 = FUN_04dc6844(uVar9,0);
      uVar6 = FUN_03ac5544(&local_80,*(undefined8 *)puVar5);
      auVar10 = FUN_05e530ec(uVar9,uVar6,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_05e5f440(lVar7,auVar10._0_8_,auVar10._8_8_);
    }
    FUN_046f50e4(&local_70,*(undefined8 *)puVar1);
    auVar10._8_8_ = local_90._8_8_;
    auVar10._0_8_ = local_90._0_8_;
    if (*(long *)(param_1 + 0x28) != 0) {
      local_90 = FUN_05e5f4ac();
      FUN_05c351e4(local_90,0);
      auVar10 = local_90;
      if (*(long *)(param_1 + 0x20) != 0) {
        FUN_03abd378(*(long *)(param_1 + 0x20),*(undefined8 *)puVar3);
        return;
      }
    }
  }
  local_90 = auVar10;
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


