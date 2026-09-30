/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector2>$$.ctor
ENTRY_POINT: 064012a0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector2>___ctor(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long *plVar10;
  
  puVar2 = (undefined8 *)FUN_03d8f370();
  iVar1 = (*(code *)*puVar2)();
  if (iVar1 == 1) {
    plVar10 = *(long **)(unaff_x20 + 0x20);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03d8f26c(lVar5);
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0640135c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)FUN_03d8f370(plVar10,lVar5,0);
LAB_0640135c:
    UNRECOVERED_JUMPTABLE = (code *)*puVar2;
    uVar6 = puVar2[1];
  }
  else {
    lVar5 = *(long *)(unaff_x20 + 0x18);
    if (lVar5 == 0) {
      uVar6 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x30);
      thunk_FUN_03d1e194(PTR_DAT_091a1be8);
      FUN_037e7a9c();
      plVar10 = (long *)FUN_07186ef4(uVar6,0);
      FUN_037e46c4();
      uVar6 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
      uVar3 = thunk_FUN_03d1e194(PTR_DAT_091fe438);
      uVar4 = thunk_FUN_03d1e194(PTR_DAT_091fe440);
      uVar6 = FUN_06fd2168(uVar3,uVar6,uVar4,0);
      thunk_FUN_03d1e194(PTR_DAT_091aa550);
      uVar3 = thunk_FUN_03d2ef40();
      Newtonsoft_Json_Serialization_JsonFormatterConverter__ToInt16(uVar3,uVar6,0);
                    /* WARNING: Subroutine does not return */
      FUN_03d2d414(uVar3);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 0x18);
    plVar10 = *(long **)(lVar5 + 0x40);
    uVar6 = *(undefined8 *)(lVar5 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x0640134c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar10,uVar6);
  return;
}


