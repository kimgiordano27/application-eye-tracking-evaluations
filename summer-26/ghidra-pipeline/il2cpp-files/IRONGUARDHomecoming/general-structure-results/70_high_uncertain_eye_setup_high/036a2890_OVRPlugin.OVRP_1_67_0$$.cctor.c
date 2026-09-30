/*
FUNCTION_NAME: OVRPlugin.OVRP_1_67_0$$.cctor
ENTRY_POINT: 036a2890
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_67_0___cctor
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
               undefined4 param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined4 uVar10;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  
  if ((DAT_04833f7a & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Array_InternalArray__RemoveAt__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    DAT_04833f7a = 1;
  }
  lVar7 = *(long *)(param_5 + 0x48);
  if (lVar7 != 0) {
    *(undefined2 *)(lVar7 + 0x10) = 0x101;
    *(undefined1 *)(lVar7 + 0x12) = 1;
    *(undefined1 *)(lVar7 + 0x40) = 1;
    *(undefined4 *)(lVar7 + 0x30) = 3;
    uVar3 = FUN_04070398(param_5,0);
    FUN_036670e4(uVar3,0,0);
    uVar3 = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
    *(undefined8 *)(lVar7 + 0x1c) = in_stack_00000008;
    *(undefined8 *)(lVar7 + 0x14) = in_stack_00000000;
    *(undefined8 *)(lVar7 + 0x28) = uStack0000000000000014;
    *(undefined8 *)(lVar7 + 0x20) = uVar3;
    puVar2 = Method_System_Array_InternalArray__RemoveAt__;
    puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
    if (*(long *)(param_5 + 0x48) != 0) {
      lVar7 = 0;
      uVar8 = 0;
      *(undefined4 *)(*(long *)(param_5 + 0x48) + 0x60) = 0x3f800000;
      while (*(long *)(param_5 + 0x58) != 0) {
        lVar4 = FUN_030f28e4(*(long *)(param_5 + 0x58),uVar8 & 0xffffffff,*(undefined8 *)puVar2);
        if (*(long *)(param_5 + 0x58) == 0) break;
        uVar5 = FUN_030f28e4(*(long *)(param_5 + 0x58),uVar8 & 0xffffffff,*(undefined8 *)puVar2);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar1);
        }
        uVar6 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                          (uVar5,0,0);
        if ((uVar6 & 1) == 0) {
          if ((*(long *)(param_5 + 0x48) == 0) || (lVar4 == 0)) break;
          lVar9 = *(long *)(*(long *)(param_5 + 0x48) + 0x38);
          lVar4 = FUN_04070398(lVar4,0);
          if ((lVar4 == 0) || (uVar10 = FUN_0407d66c(lVar4,0), lVar9 == 0)) break;
          if (*(uint *)(lVar9 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          lVar9 = lVar9 + lVar7;
          *(undefined4 *)(lVar9 + 0x20) = uVar10;
          *(int *)(lVar9 + 0x24) = (int)uVar3;
          *(undefined4 *)(lVar9 + 0x28) = param_3;
          *(undefined4 *)(lVar9 + 0x2c) = param_4;
        }
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x10;
        if (uVar8 == 0x18) {
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


