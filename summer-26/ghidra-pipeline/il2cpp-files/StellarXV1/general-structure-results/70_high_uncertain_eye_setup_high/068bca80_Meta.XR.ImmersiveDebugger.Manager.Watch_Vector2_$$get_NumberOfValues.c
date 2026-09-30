/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$get_NumberOfValues
ENTRY_POINT: 068bca80
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_NumberOfValues(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined4 uVar8;
  undefined4 uStack000000000000000c;
  undefined4 in_stack_00000010;
  
  lVar3 = thunk_FUN_040b5044();
  puVar1 = PTR_DAT_092bb9e0;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar5 = *unaff_x19;
  uVar8 = *(undefined4 *)(lVar3 + 8);
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_092bb9e0) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_068bcaf0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_040b1e00();
LAB_068bcaf0:
  iVar2 = (*(code *)*puVar4)();
  if (iVar2 == 0) {
    lVar3 = *(long *)(unaff_x20 + 0x20);
    in_stack_00000010 = *(undefined4 *)(unaff_x21 + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x10),&stack0x00000010);
    lVar3 = *(long *)(unaff_x20 + 0x20);
    uStack000000000000000c = uVar8;
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x10),&stack0x0000000c);
    lVar3 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_068bcbb0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00();
LAB_068bcbb0:
    (*(code *)*puVar4)();
  }
  return;
}


