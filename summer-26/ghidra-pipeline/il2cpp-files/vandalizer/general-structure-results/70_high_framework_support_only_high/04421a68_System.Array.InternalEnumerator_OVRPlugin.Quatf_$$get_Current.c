/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Quatf>$$get_Current
ENTRY_POINT: 04421a68
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04421bdc) */

void System_Array_InternalEnumerator<OVRPlugin_Quatf>__get_Current(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 (*pauVar5) [16];
  long in_x9;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  int unaff_w24;
  long *unaff_x25;
  undefined1 auVar7 [16];
  
code_r0x04421a68:
  puVar3 = (undefined8 *)(param_1 + in_x9 * 0x10 + 0x138);
  while (uVar1 = (*(code *)*puVar3)(), (uVar1 & 1) != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x38);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4(lVar2);
    }
    lVar4 = *unaff_x19;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04421af4;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_0322c1e8();
                    /* try { // try from 04421ae4 to 04521b5b has its CatchHandler @ 04421ae4
                       catch() { ... } // from try @ 04421ae4 with catch @ 04421ae4
                       catch() { ... } // from try @ 04421ec0 with catch @ 04421ae4
                       catch() { ... } // from try @ 04421f0c with catch @ 04421ae4
                       catch() { ... } // from try @ 04421f78 with catch @ 04421ae4 */
LAB_04421af4:
    auVar7 = (*(code *)*puVar3)();
    if (unaff_w24 == 0) {
      *(undefined1 (*) [16])(unaff_x21 + 8) = auVar7;
      thunk_FUN_0329bf60();
    }
    else {
      lVar2 = *(long *)(unaff_x21 + 0x18);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      if (*(uint *)(lVar2 + 0x18) <= unaff_w24 - 1U) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      pauVar5 = (undefined1 (*) [16])(lVar2 + (long)(int)(unaff_w24 - 1U) * 0x10 + 0x20);
      *pauVar5 = auVar7;
      thunk_FUN_0329bf60(pauVar5,0);
    }
    unaff_w24 = unaff_w24 + 1;
    param_1 = *unaff_x19;
    uVar1 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          in_x9 = (long)*piVar6;
          goto code_r0x04421a68;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_0322c1e8();
  }
  if (unaff_x19 != (long *)0x0) {
    lVar2 = *unaff_x19;
    uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x23) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04421ba8;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_0322c1e8();
LAB_04421ba8:
    (*(code *)*puVar3)();
  }
  return;
}


