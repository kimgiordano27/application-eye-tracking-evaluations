/*
FUNCTION_NAME: OVRPlugin.OVRP_1_68_0$$ovrp_LoadRenderModel
ENTRY_POINT: 036a2918
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_68_0__ovrp_LoadRenderModel
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
               undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x19;
  long unaff_x20;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  
  uVar10 = CONCAT44(uStack0000000000000030,in_stack_00000028._4_4_);
  *(undefined8 *)(unaff_x20 + 0x1c) = in_stack_00000028;
  *(undefined8 *)(unaff_x20 + 0x14) = in_stack_00000020;
  *(undefined8 *)(unaff_x20 + 0x28) = uStack0000000000000034;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar10;
  puVar2 = Method_System_Array_InternalArray__RemoveAt__;
  puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    lVar8 = 0;
    uVar6 = 0;
    *(undefined4 *)(*(long *)(unaff_x19 + 0x48) + 0x60) = 0x3f800000;
    while (*(long *)(unaff_x19 + 0x58) != 0) {
      lVar3 = FUN_030f28e4(*(long *)(unaff_x19 + 0x58),uVar6 & 0xffffffff,*(undefined8 *)puVar2);
      if (*(long *)(unaff_x19 + 0x58) == 0) break;
      uVar4 = FUN_030f28e4(*(long *)(unaff_x19 + 0x58),uVar6 & 0xffffffff,*(undefined8 *)puVar2);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar1);
      }
      uVar5 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                        (uVar4,0,0);
      if ((uVar5 & 1) == 0) {
        if ((*(long *)(unaff_x19 + 0x48) == 0) || (lVar3 == 0)) break;
        lVar7 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38);
        lVar3 = FUN_04070398(lVar3,0);
        if ((lVar3 == 0) || (uVar9 = FUN_0407d66c(lVar3,0), lVar7 == 0)) break;
        if (*(uint *)(lVar7 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        lVar7 = lVar7 + lVar8;
        *(undefined4 *)(lVar7 + 0x20) = uVar9;
        *(int *)(lVar7 + 0x24) = (int)uVar10;
        *(undefined4 *)(lVar7 + 0x28) = param_3;
        *(undefined4 *)(lVar7 + 0x2c) = param_4;
      }
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 0x10;
      if (uVar6 == 0x18) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


