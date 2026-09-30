/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$get_Value
ENTRY_POINT: 056a3ec8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__get_Value(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  byte bStack000000000000000c;
  undefined1 in_stack_00000010;
  byte bStack0000000000000014;
  
  bVar1 = *param_1;
  bVar2 = param_1[1];
  lVar5 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03775678();
  }
  thunk_FUN_037784fc(**(undefined8 **)(lVar5 + 0xc0),&stack0x00000018);
  bStack0000000000000014 = bVar1 & 1;
  lVar5 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
  }
  thunk_FUN_037784fc(**(undefined8 **)(lVar5 + 0xc0),&stack0x00000014);
  puVar3 = PTR_DAT_07d9a648;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar5 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07d9a648) {
        puVar6 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_056a3f8c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar6 = (undefined8 *)FUN_0377596c();
LAB_056a3f8c:
  iVar4 = (*(code *)*puVar6)();
  if (iVar4 == 0) {
    in_stack_00000010 = *(undefined1 *)(unaff_x21 + 1);
    lVar5 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03775678();
    }
    thunk_FUN_037784fc(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x10),&stack0x00000010);
    bStack000000000000000c = bVar2 & 1;
    lVar5 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03775678(lVar5);
    }
    thunk_FUN_037784fc(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x10),&stack0x0000000c);
    lVar5 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_056a4050;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_0377596c();
LAB_056a4050:
    (*(code *)*puVar6)();
  }
  return;
}


