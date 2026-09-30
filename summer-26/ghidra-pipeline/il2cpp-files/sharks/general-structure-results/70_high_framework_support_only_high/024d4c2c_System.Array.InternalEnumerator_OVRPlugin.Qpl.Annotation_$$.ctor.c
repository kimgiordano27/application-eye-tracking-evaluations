/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Qpl.Annotation>$$.ctor
ENTRY_POINT: 024d4c2c
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation>___ctor
               (ulong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined4 unaff_w22;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x26;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_0185daa4();
  }
  uVar2 = FUN_017fc3f4(param_2,unaff_w22);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  thunk_FUN_0188fd20((undefined8 *)(unaff_x20 + 0x18));
  lVar6 = *(long *)(unaff_x20 + 0x40);
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x108);
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar2 = FUN_02bddb5c(uVar2,0);
  if (lVar6 != 0) {
    lVar6 = FUN_02adfbec(lVar6,*(undefined8 *)PTR_DAT_037fb178,uVar2,0);
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0185daa4(lVar7);
    }
    if (lVar6 == 0) {
      thunk_FUN_01851c08(PTR_DAT_037fb188);
      uVar2 = thunk_FUN_01861bbc();
      uVar4 = thunk_FUN_01851c08(PTR_DAT_037fb190);
      FUN_02ad6d08(uVar2,uVar4,0);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar2);
    }
    lVar3 = thunk_FUN_01861ac0(lVar6,lVar7);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc944(lVar6,lVar7);
    }
    if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
      uVar8 = 0;
      uVar5 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
      do {
        if (uVar5 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5b0();
        }
        FUN_024d6bdc();
        uVar5 = (ulong)*(uint *)(lVar3 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar3 + 0x18));
    }
    if (*unaff_x21 != 0) {
      uVar1 = FUN_02ae1ed4(*unaff_x21,*(undefined8 *)PTR_DAT_037fae08,0);
      *(undefined4 *)(unaff_x20 + 0x38) = uVar1;
      *(undefined8 *)(unaff_x20 + 0x40) = 0;
      thunk_FUN_0188fd20();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


