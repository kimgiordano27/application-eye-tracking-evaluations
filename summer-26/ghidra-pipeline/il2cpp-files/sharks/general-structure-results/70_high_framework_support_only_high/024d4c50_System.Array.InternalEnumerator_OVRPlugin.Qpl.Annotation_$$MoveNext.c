/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Qpl.Annotation>$$MoveNext
ENTRY_POINT: 024d4c50
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


void System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation>__MoveNext(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x26;
  
  lVar5 = *(long *)(unaff_x22 + 0x28);
  uVar6 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x108);
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar6 = FUN_02bddb5c(uVar6,0);
  if (lVar5 != 0) {
    lVar5 = FUN_02adfbec(lVar5,*(undefined8 *)PTR_DAT_037fb178,uVar6,0);
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0185daa4(lVar7);
    }
    if (lVar5 == 0) {
      thunk_FUN_01851c08(PTR_DAT_037fb188);
      uVar6 = thunk_FUN_01861bbc();
      uVar3 = thunk_FUN_01851c08(PTR_DAT_037fb190);
      FUN_02ad6d08(uVar6,uVar3,0);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar6);
    }
    lVar2 = thunk_FUN_01861ac0(lVar5,lVar7);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc944(lVar5,lVar7);
    }
    if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
      uVar8 = 0;
      uVar4 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
      do {
        if (uVar4 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5b0();
        }
        FUN_024d6bdc();
        uVar4 = (ulong)*(uint *)(lVar2 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar2 + 0x18));
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


