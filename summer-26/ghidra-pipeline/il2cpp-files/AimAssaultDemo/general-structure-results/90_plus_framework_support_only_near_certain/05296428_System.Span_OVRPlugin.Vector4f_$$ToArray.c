/*
FUNCTION_NAME: System.Span<OVRPlugin.Vector4f>$$ToArray
ENTRY_POINT: 05296428
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05296658) */
/* WARNING: Removing unreachable block (ram,0x052967a4) */

void System_Span<OVRPlugin_Vector4f>__ToArray(ulong param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar7;
  int iVar8;
  long *unaff_x27;
  undefined8 *unaff_x28;
  float fVar9;
  float fVar10;
  undefined8 in_stack_00000010;
  float fStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_03775678();
  }
  if (*(long *)(*(long *)(param_2 + 0xb8) + 8) == 0) {
    lVar2 = *(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x188);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03775678();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    lVar6 = *(long *)(*unaff_x20 + 0xc0);
    lVar2 = *(long *)(lVar6 + 0x188);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03775678();
      lVar6 = *(long *)(*unaff_x20 + 0xc0);
    }
    lVar6 = *(long *)(lVar6 + 0x180);
    uVar7 = **(undefined8 **)(lVar2 + 0xb8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03775678(lVar6);
    }
    uVar3 = thunk_FUN_037788cc(lVar6);
    FUN_05814dbc(uVar3,uVar7,*(undefined8 *)(*(long *)(*unaff_x20 + 0xc0) + 400),
                 *(undefined8 *)(*(long *)(*unaff_x20 + 0xc0) + 0x198));
    lVar6 = *(long *)(*unaff_x20 + 0xc0);
    lVar2 = *(long *)(lVar6 + 0x188);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03775678();
      lVar6 = *(long *)(*unaff_x20 + 0xc0);
    }
    *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8) = uVar3;
    lVar2 = *(long *)(lVar6 + 0x188);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03775678();
    }
    thunk_FUN_037aeb94(*(long *)(lVar2 + 0xb8) + 8,uVar3);
  }
  if (unaff_x21 != 0) {
    FUN_048b4574();
    FUN_048b3584(&stack0x00000018);
    puVar1 = PTR_DAT_07d86548;
    in_stack_00000040 = CONCAT44(uStack000000000000001c,fStack0000000000000018);
    iVar8 = 0;
    fVar10 = 0.0;
    in_stack_00000048 = in_stack_00000020;
    in_stack_00000058 = in_stack_00000030;
    in_stack_00000050 = in_stack_00000028;
    while (uVar4 = FUN_05d33570(&stack0x00000040,
                                *(undefined8 *)(*(long *)(*unaff_x20 + 0xc0) + 0x1c8)),
          uVar7 = in_stack_00000050, (uVar4 & 1) != 0) {
      fVar9 = (float)in_stack_00000058;
      fVar10 = fVar10 + fVar9 * 9.536743e-07;
      fStack0000000000000018 = (float)iVar8;
      uVar3 = thunk_FUN_037784fc(*(undefined8 *)(puVar1 + 0x48),&stack0x00000018);
      in_stack_00000010._4_4_ = fVar9 * 9.536743e-07;
      uVar5 = thunk_FUN_037784fc(*(undefined8 *)(puVar1 + 0x78),(long)&stack0x00000010 + 4);
      FUN_060c2018(*unaff_x28,uVar3,uVar5,uVar7,0);
      lVar6 = *unaff_x27;
      lVar2 = *(long *)(lVar6 + 0x38);
      if (lVar2 == 0) {
        FUN_037756d4(lVar6);
        lVar2 = *(long *)(lVar6 + 0x38);
      }
      lVar2 = *(long *)(lVar2 + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03775678();
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar6 + 0x38) + 0x10) + 0x135) & 1) == 0) {
        FUN_03775678();
      }
      FUN_06fc825c();
      iVar8 = iVar8 + 1;
    }
    FUN_05d3356c(&stack0x00000040,*(undefined8 *)(*(long *)(*unaff_x20 + 0xc0) + 0x1d0));
    fStack0000000000000018 = fVar10;
    uVar7 = thunk_FUN_037784fc(*(undefined8 *)(puVar1 + 0x78),&stack0x00000018);
    FUN_060b76a8(*(undefined8 *)PTR_DAT_07d99df8,uVar7,0);
    lVar6 = *unaff_x27;
    lVar2 = *(long *)(lVar6 + 0x38);
    if (lVar2 == 0) {
      FUN_037756d4(lVar6);
      lVar2 = *(long *)(lVar6 + 0x38);
    }
    lVar2 = *(long *)(lVar2 + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03775678();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar6 + 0x38) + 0x10) + 0x135) & 1) == 0) {
      FUN_03775678();
    }
    FUN_06fc825c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


