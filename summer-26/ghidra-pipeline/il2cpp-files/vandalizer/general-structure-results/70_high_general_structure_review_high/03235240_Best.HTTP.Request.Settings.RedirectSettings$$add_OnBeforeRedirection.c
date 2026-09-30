/*
FUNCTION_NAME: Best.HTTP.Request.Settings.RedirectSettings$$add_OnBeforeRedirection
ENTRY_POINT: 03235240
PROGRAM: vandalizer-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Best_HTTP_Request_Settings_RedirectSettings__add_OnBeforeRedirection
               (long param_1,long param_2,ulong param_3)

{
  long lVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong in_x9;
  long lVar5;
  long in_x10;
  ulong uVar6;
  ulong in_x11;
  uint in_w12;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  
  do {
    if ((in_w12 >> (param_3 & 7) & 1) == 0) {
      uVar2 = *(ushort *)(param_2 + 8);
      FUN_03214044();
      *(ulong *)(unaff_x19 + 0x68) =
           ((ulong)*(ushort *)(*(long *)(unaff_x19 + 0x48) + unaff_x24 * 0x10 + 8) - (ulong)uVar2) +
           *(long *)(unaff_x19 + 0x68);
      in_stack_00000068 = in_stack_00000068 + 0x20;
      FUN_031f6e3c();
      FUN_032343b8(&stack0x00000048);
      lVar5 = *(long *)(unaff_x20 + 0x48);
      lVar1 = *(long *)(unaff_x20 + 0x50);
      FUN_032343b8();
      if ((((in_stack_00000050 == lVar5) && (in_stack_00000058 == lVar1)) &&
          (in_stack_00000060 == lVar1)) &&
         ((in_stack_00000060 == in_stack_00000058 || (in_stack_00000068 == 0)))) {
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return;
      }
      param_1 = *(long *)(unaff_x19 + 0x48);
      uVar6 = *(ulong *)(in_stack_00000068 + 8) >> 3;
      in_x9 = *(long *)(unaff_x19 + 0x60) - 1;
      lVar5 = 1;
    }
    else {
      lVar5 = in_x10 + 1;
      uVar6 = in_x10 + in_x11;
    }
    in_x11 = uVar6 & in_x9;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = in_x11;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = unaff_x22;
    unaff_x24 = SUB168(auVar3 * auVar4,8) >> 5;
    param_3 = in_x11 - unaff_x24 * unaff_x23;
    param_2 = param_1 + unaff_x24 * 0x10;
    in_w12 = (uint)*(byte *)(param_2 + (param_3 >> 3) + 10);
    in_x10 = lVar5;
  } while( true );
}


