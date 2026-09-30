/*
FUNCTION_NAME: PlayFab.Json.PlayFabSimpleJson$$SerializeArray
ENTRY_POINT: 05922024
PROGRAM: Untangled-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05922228) */

void PlayFab_Json_PlayFabSimpleJson__SerializeArray(long param_1)

{
  long lVar1;
  int in_w8;
  long *unaff_x19;
  long unaff_x20;
  long lVar2;
  uint unaff_w22;
  long *unaff_x23;
  char in_stack_00000008;
  
  if (in_w8 == 0) {
    thunk_FUN_02f12b58();
    param_1 = *unaff_x23;
  }
  if (unaff_w22 == *(byte *)(*(long *)(param_1 + 0xb8) + 4)) {
    lVar1 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d16cf8);
    FUN_05645a04(lVar1,0);
    *(long *)(lVar1 + 0x18) = unaff_x20;
    thunk_FUN_02f411dc();
    *(int *)(lVar1 + 0x14) = (int)*(undefined8 *)(unaff_x20 + 0x18);
    (**(code **)(*unaff_x19 + 0x278))();
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_06d63060 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar1 = FUN_058f1ffc(0);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_059158d8();
    *(undefined4 *)(lVar1 + 0x10) = 0;
    if (*(int *)(lVar1 + 0x14) < 0) {
      *(undefined4 *)(lVar1 + 0x14) = 0;
      FUN_0591d0e8(lVar1,0);
    }
    lVar2 = unaff_x19[0x24];
    in_stack_00000008 = '\0';
    FUN_056681d8(lVar2,&stack0x00000008,0);
    if (unaff_x19[0x24] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_0446c850(unaff_x19[0x24],lVar1,*(undefined8 *)PTR_DAT_06d63278);
    if (in_stack_00000008 != '\0') {
      thunk_FUN_02eb9f78(lVar2,0);
    }
  }
  return;
}


