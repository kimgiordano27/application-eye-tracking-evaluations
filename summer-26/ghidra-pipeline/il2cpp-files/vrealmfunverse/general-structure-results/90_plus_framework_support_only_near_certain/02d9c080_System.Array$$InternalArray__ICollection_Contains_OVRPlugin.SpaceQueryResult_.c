/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 02d9c080
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_SpaceQueryResult>
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  
  *(undefined8 *)(unaff_x19 + 0x98) = unaff_x20;
  thunk_FUN_02bb0e9c();
  uVar4 = FUN_02b3c908(*unaff_x22,0x19);
  *(undefined8 *)(unaff_x19 + 0xe8) = uVar4;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xe8),uVar4);
  iVar2 = FUN_05c8db90(*(undefined4 *)(unaff_x19 + 0x30),0);
  puVar1 = PTR_DAT_06318660;
  if (iVar2 == 0) {
    lVar5 = *(long *)PTR_DAT_06318660;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar5 = *(long *)puVar1;
    }
    uVar4 = FUN_05c8de5c(**(undefined8 **)(lVar5 + 0xb8),0);
    uVar3 = FUN_05c8db94(uVar4,0);
    *(undefined4 *)(unaff_x19 + 0x30) = uVar3;
  }
  uVar4 = *(undefined8 *)(unaff_x19 + 0x20);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar6 = FUN_05c8e378(uVar4,0,0);
  if ((uVar6 & 1) != 0) {
    uVar4 = FUN_05c89410();
    FUN_02d3c40c(uVar4,(undefined8 *)(unaff_x19 + 0x20),0,0);
  }
  lVar5 = FUN_05c89340();
  if (lVar5 != 0) {
    uVar3 = FUN_05c9bf94(lVar5,0);
    *(undefined4 *)(unaff_x19 + 0xac) = uVar3;
    *(undefined4 *)(unaff_x19 + 0xb0) = param_2;
    *(undefined4 *)(unaff_x19 + 0xb4) = param_3;
    lVar5 = FUN_05c89340();
    if (lVar5 != 0) {
      uVar3 = FUN_05c9a10c(lVar5,0);
      *(undefined4 *)(unaff_x19 + 0xb8) = uVar3;
      *(undefined4 *)(unaff_x19 + 0xbc) = param_2;
      *(undefined4 *)(unaff_x19 + 0xc0) = param_3;
      *(undefined4 *)(unaff_x19 + 0xc4) = param_4;
      FUN_02d9c1b0();
      FUN_05c8efe4();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


