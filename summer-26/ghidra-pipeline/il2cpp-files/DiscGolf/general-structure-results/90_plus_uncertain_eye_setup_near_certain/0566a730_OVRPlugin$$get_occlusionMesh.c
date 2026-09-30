/*
FUNCTION_NAME: OVRPlugin$$get_occlusionMesh
ENTRY_POINT: 0566a730
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0566a8dc) */

void OVRPlugin__get_occlusionMesh(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  undefined4 unaff_s8;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  int iStack000000000000006c;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  long *in_stack_000000a8;
  
  puVar1 = PTR_DAT_06a0f1a0;
  if ((DAT_06dbc62f & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0f1a0);
    FUN_02d965b8(PTR_DAT_069fbff0);
    DAT_06dbc62f = 1;
  }
  in_stack_000000a8 = (long *)0x0;
  in_stack_00000090 = 0;
  iStack000000000000006c = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  in_stack_000000a8 = (long *)FUN_0564de84(2,0);
  uVar3 = FUN_0566cbf8(param_1,&stack0x00000070,&stack0x0000006c);
  if (((uVar3 & 1) != 0) && (uVar3 = FUN_0566cc78(param_1,&stack0x00000010), (uVar3 & 1) != 0)) {
    if (*(int *)(param_1 + 0x200) == iStack000000000000006c) {
      if (*(int *)(param_1 + 0x208) == in_stack_00000040._4_4_) {
        FUN_0566cef0(param_1,&stack0x00000010);
        FUN_0566d300(unaff_s8,param_1,&stack0x00000010,&stack0x00000070);
      }
      else if ((*(int *)(param_1 + 0x214) != in_stack_00000040._4_4_) &&
              (*(char *)(param_1 + 0x20) == '\0')) {
        OVRPlugin__GetTrackingTransformRawPose(param_1);
      }
    }
    else if ((*(int *)(param_1 + 0x20c) != iStack000000000000006c) &&
            (*(char *)(param_1 + 0x20) == '\0')) {
      FUN_0566cd08(param_1);
    }
  }
  plVar2 = in_stack_000000a8;
  if (in_stack_000000a8 != (long *)0x0) {
    lVar5 = *in_stack_000000a8;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_069fbff0) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0566a8b8;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_02dd004c(in_stack_000000a8,*(long *)PTR_DAT_069fbff0,0);
LAB_0566a8b8:
    (*(code *)*puVar4)(plVar2,puVar4[1]);
  }
  return;
}


