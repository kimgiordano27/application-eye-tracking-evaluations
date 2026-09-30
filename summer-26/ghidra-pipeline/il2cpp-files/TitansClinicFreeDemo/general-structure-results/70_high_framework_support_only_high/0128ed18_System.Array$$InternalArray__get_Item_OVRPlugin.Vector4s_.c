/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.Vector4s>
ENTRY_POINT: 0128ed18
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x012901f8) */
/* WARNING: Removing unreachable block (ram,0x01290204) */

ulong System_Array__InternalArray__get_Item<OVRPlugin_Vector4s>
                (undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5,
                long param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *unaff_x19;
  int unaff_w20;
  undefined8 unaff_x21;
  ulong uVar6;
  undefined8 unaff_x22;
  int unaff_w23;
  ulong unaff_x24;
  uint *unaff_x25;
  long unaff_x26;
  int unaff_w27;
  undefined8 in_stack_00000048;
  undefined8 *in_stack_00000058;
  int in_stack_00000068;
  
  uVar5 = DAT_00745ed8;
  *(undefined **)(unaff_x26 + 0x68) = &DAT_00a8023a;
  *(undefined **)(unaff_x26 + 0x70) = &DAT_00a80a3a;
  *(undefined8 *)(unaff_x26 + 0x78) = uVar5;
  *(undefined4 *)(unaff_x26 + 8) = 0x3f47;
  if (in_stack_00000068 == 6) {
    unaff_x19[3] = unaff_x21;
    *(int *)(unaff_x19 + 4) = param_3;
    *unaff_x19 = unaff_x22;
    *(int *)(unaff_x19 + 1) = unaff_w27;
    *(ulong *)(unaff_x26 + 0x50) = unaff_x24 >> 3;
    *(int *)(unaff_x26 + 0x58) = param_7 + -3;
    if ((*(int *)(unaff_x26 + 0x3c) != 0) || ((unaff_w20 != param_3 && (*unaff_x25 < 0x3f51)))) {
      iVar4 = FUN_01290384();
      if (iVar4 != 0) {
        *unaff_x25 = 0x3f52;
        return 0xfffffffc;
      }
      unaff_w27 = *(int *)(unaff_x19 + 1);
      param_3 = *(int *)(unaff_x19 + 4);
    }
    uVar3 = unaff_w20 - param_3;
    uVar6 = (ulong)uVar3;
    unaff_x19[2] = unaff_x19[2] + (ulong)(uint)(unaff_w23 - unaff_w27);
    unaff_x19[5] = unaff_x19[5] + uVar6;
    *(ulong *)(unaff_x26 + 0x28) = *(long *)(unaff_x26 + 0x28) + uVar6;
    if ((uVar3 != 0) && ((*(uint *)(unaff_x26 + 0x10) >> 2 & 1) != 0)) {
      if (*(int *)(unaff_x26 + 0x18) == 0) {
        uVar5 = FUN_0128e738(*(undefined8 *)(unaff_x26 + 0x20),unaff_x19[3] - uVar6,uVar6);
      }
      else {
        uVar5 = FUN_0129514c();
      }
      *in_stack_00000058 = uVar5;
      unaff_x19[0xc] = uVar5;
    }
    iVar2 = *(int *)(unaff_x26 + 8);
    iVar4 = 0x100;
    if (iVar2 != 0x3f42 && iVar2 != 0x3f47) {
      iVar4 = 0;
    }
    *(uint *)(unaff_x19 + 0xb) =
         *(int *)(unaff_x26 + 0x58) + (uint)(*(int *)(unaff_x26 + 0xc) != 0) * 0x40 +
         (uint)(iVar2 == 0x3f3f) * 0x80 + iVar4;
    uVar1 = 0xfffffffb;
    if ((uVar3 != 0 || unaff_w23 - unaff_w27 != 0) || in_stack_00000048._4_4_ != 0) {
      uVar1 = in_stack_00000048._4_4_;
    }
    uVar6 = (ulong)uVar1;
  }
  else {
    if (*unaff_x25 + param_5 < 0x1f) {
                    /* WARNING: Could not recover jumptable at 0x0128eacc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)((ulong)*(ushort *)(param_6 + (ulong)(*unaff_x25 + param_5) * 2) * 4 +
                        0x128ead0))(&DAT_00a80214);
      return uVar6;
    }
    uVar6 = 0xfffffffe;
  }
  return uVar6;
}


