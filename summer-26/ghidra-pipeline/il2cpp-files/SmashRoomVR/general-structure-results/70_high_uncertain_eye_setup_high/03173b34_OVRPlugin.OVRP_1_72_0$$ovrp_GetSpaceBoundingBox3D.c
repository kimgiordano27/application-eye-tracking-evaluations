/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_GetSpaceBoundingBox3D
ENTRY_POINT: 03173b34
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_72_0__ovrp_GetSpaceBoundingBox3D(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  ulong in_x9;
  long lVar3;
  uint unaff_w19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 uStack0000000000000000;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 uStack000000000000003c;
  undefined4 in_stack_00000040;
  undefined4 uStack0000000000000044;
  undefined4 in_stack_00000048;
  
  uStack0000000000000000 = param_1;
  if ((in_x9 & 1) == 0) {
    thunk_FUN_01ad9084(Method_UnityEngine_UI_ToggleGroup_<>c_<ActiveToggles>b__14_0__);
    *(undefined1 *)(unaff_x23 + 0x123) = 1;
  }
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  uStack000000000000003c = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  uStack0000000000000044 = 0;
  uVar1 = 1 << (ulong)(unaff_w19 & 0x1f);
  if ((*(uint *)(unaff_x21 + 0x40) & uVar1) != 0) {
    if (*(int *)(*(long *)Method_UnityEngine_UI_ToggleGroup_<>c_<ActiveToggles>b__14_0__ + 0xe0) ==
        0) {
      thunk_FUN_01ac7298();
    }
    FUN_03927648(&stack0x00000010,0);
    in_stack_00000038 = uStack0000000000000018;
    in_stack_00000030 = in_stack_00000010;
    uStack0000000000000044 = (undefined4)uStack0000000000000024;
    in_stack_00000048 = SUB84(uStack0000000000000024,4);
    uStack000000000000003c = uStack000000000000001c;
    in_stack_00000040 = uStack0000000000000020;
    FUN_03174810();
    lVar2 = *(long *)(unaff_x21 + 0x10);
    if ((lVar2 == 0) || (lVar3 = *(long *)(unaff_x21 + 0x20), lVar3 == 0)) goto LAB_03173cac;
    if ((*(int *)(lVar2 + 0x18) == 0) || (*(uint *)(lVar3 + 0x18) <= unaff_w19)) goto LAB_03173cb0;
    lVar4 = (long)(int)unaff_w19;
    FUN_03136f90(lVar2 + 0x20,&stack0x00000030,lVar3 + lVar4 * 0x1c + 0x20,0);
    lVar2 = *(long *)(unaff_x21 + 0x20);
    if (lVar2 == 0) goto LAB_03173cac;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w19) goto LAB_03173cb0;
    lVar2 = lVar2 + lVar4 * 0x1c;
    fVar8 = (float)uStack0000000000000000;
    *(ulong *)(lVar2 + 0x20) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 0x20) >> 0x20) * fVar8,
                  (float)*(undefined8 *)(lVar2 + 0x20) * fVar8);
    *(float *)(lVar2 + 0x28) = *(float *)(lVar2 + 0x28) * fVar8;
    lVar2 = *(long *)(unaff_x21 + 0x20);
    if (lVar2 == 0) goto LAB_03173cac;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w19) goto LAB_03173cb0;
    FUN_031370b8(lVar2 + lVar4 * 0x1c + 0x20);
    *(uint *)(unaff_x21 + 0x40) = *(uint *)(unaff_x21 + 0x40) & (uVar1 ^ 0xffffffff);
  }
  lVar2 = *(long *)(unaff_x21 + 0x20);
  if (lVar2 != 0) {
    if (unaff_w19 < *(uint *)(lVar2 + 0x18)) {
      lVar2 = lVar2 + (long)(int)unaff_w19 * 0x1c;
      uVar5 = *(undefined8 *)(lVar2 + 0x2c);
      uVar7 = *(undefined8 *)(lVar2 + 0x28);
      uVar6 = *(undefined8 *)(lVar2 + 0x20);
      *(undefined8 *)((long)unaff_x20 + 0x14) = *(undefined8 *)(lVar2 + 0x34);
      *(undefined8 *)((long)unaff_x20 + 0xc) = uVar5;
      unaff_x20[1] = uVar7;
      *unaff_x20 = uVar6;
      return;
    }
LAB_03173cb0:
                    /* WARNING: Subroutine does not return */
    FUN_01b48180();
  }
LAB_03173cac:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


