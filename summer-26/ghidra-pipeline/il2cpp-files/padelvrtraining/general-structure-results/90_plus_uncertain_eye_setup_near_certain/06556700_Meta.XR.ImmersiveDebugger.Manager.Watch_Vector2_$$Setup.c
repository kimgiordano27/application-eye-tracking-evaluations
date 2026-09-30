/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$Setup
ENTRY_POINT: 06556700
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__Setup(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  undefined4 uStack000000000000001c;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_03d8f26c();
  }
  lVar8 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_03d8f26c(lVar8);
  }
  if (*(long *)(*unaff_x22 + 0x40) != *(long *)(lVar8 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d8e4();
  }
  puVar6 = (undefined4 *)thunk_FUN_03d2f094();
  uVar1 = *puVar6;
  uVar2 = puVar6[1];
  uVar3 = puVar6[2];
  lVar8 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_03d8f26c();
  }
  thunk_FUN_03d2eb70(**(undefined8 **)(lVar8 + 0xc0));
  lVar8 = *(long *)(unaff_x20 + 0x20);
  uStack000000000000001c = uVar1;
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_03d8f26c(lVar8);
  }
  thunk_FUN_03d2eb70(**(undefined8 **)(lVar8 + 0xc0),&stack0x0000001c);
  puVar4 = PTR_DAT_091fe408;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar8 = *unaff_x19;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_091fe408) {
        puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_06556808;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar7 = (undefined8 *)FUN_03d8f370();
LAB_06556808:
  iVar5 = (*(code *)*puVar7)();
  if (iVar5 == 0) {
    lVar8 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03d8f26c();
    }
    thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x10));
    lVar8 = *(long *)(unaff_x20 + 0x20);
    uStack000000000000001c = uVar2;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03d8f26c(lVar8);
    }
    thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x10),&stack0x0000001c);
    lVar8 = *unaff_x19;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_065568c8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_03d8f370();
LAB_065568c8:
    iVar5 = (*(code *)*puVar7)();
    if (iVar5 == 0) {
      lVar8 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03d8f26c();
      }
      thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x18));
      lVar8 = *(long *)(unaff_x20 + 0x20);
      uStack000000000000001c = uVar3;
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03d8f26c(lVar8);
      }
      thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x18),&stack0x0000001c);
      lVar8 = *unaff_x19;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_06556988;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_03d8f370();
LAB_06556988:
      (*(code *)*puVar7)();
    }
  }
  return;
}


