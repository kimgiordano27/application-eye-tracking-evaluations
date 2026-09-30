/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$ToDisplayStrings
ENTRY_POINT: 060113e8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__ToDisplayStrings(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  byte bStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_03cf1244();
  }
  if (*unaff_x21 != param_1) {
    in_stack_00000020 = unaff_x20[2];
    in_stack_00000018 = unaff_x20[1];
    in_stack_00000010 = *unaff_x20;
    lVar3 = FUN_0371099c(*(undefined8 *)(unaff_x22 + 0x20));
    uVar5 = thunk_FUN_03cf4e64(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 8),&stack0x00000010);
    plVar6 = (long *)thunk_FUN_03d12a58(uVar5,0);
    FUN_036f8b10();
    uVar5 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    uVar7 = thunk_FUN_03ce5214(PTR_DAT_08e85e30);
    uVar5 = FUN_06f559f0(uVar7,uVar5,0);
    thunk_FUN_03ce5214(PTR_DAT_08e76350);
    uVar7 = thunk_FUN_03cf5234();
    uVar8 = thunk_FUN_03ce5214(PTR_DAT_08e81068);
    FUN_0705df24(uVar7,uVar5,uVar8,0);
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc(uVar7);
  }
  lVar3 = *(long *)(unaff_x22 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03cf1244();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03cf1244(lVar3);
  }
  if (*(long *)(*unaff_x21 + 0x40) != *(long *)(lVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fecc();
  }
  puVar4 = (undefined8 *)thunk_FUN_03cf5388();
  uVar5 = *puVar4;
  in_stack_00000010 = CONCAT71(in_stack_00000010._1_7_,*(undefined1 *)unaff_x20);
  lVar3 = *(long *)(unaff_x22 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03cf1244();
  }
  thunk_FUN_03cf4e64(**(undefined8 **)(lVar3 + 0xc0),&stack0x00000010);
  bStack000000000000000c = (byte)uVar5 & 1;
  lVar3 = *(long *)(unaff_x22 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03cf1244(lVar3);
  }
  thunk_FUN_03cf4e64(**(undefined8 **)(lVar3 + 0xc0),&stack0x0000000c);
  puVar1 = PTR_DAT_08e85e28;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar3 = *unaff_x19;
  uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08e85e28) {
        puVar4 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_06011510;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06011510:
  iVar2 = (*(code *)*puVar4)();
  if (iVar2 == 0) {
    in_stack_00000010 = CONCAT71(in_stack_00000010._1_7_,*(undefined1 *)((long)unaff_x20 + 1));
    lVar3 = *(long *)(unaff_x22 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03cf1244();
    }
    thunk_FUN_03cf4e64(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x10),&stack0x00000010);
    bStack000000000000000c = (byte)((ulong)uVar5 >> 8) & 1;
    lVar3 = *(long *)(unaff_x22 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03cf1244(lVar3);
    }
    thunk_FUN_03cf4e64(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x10),&stack0x0000000c);
    lVar3 = *unaff_x19;
    uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_060115d4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_060115d4:
    iVar2 = (*(code *)*puVar4)();
    if (iVar2 == 0) {
      lVar3 = *unaff_x19;
      uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0601163c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_0601163c:
      iVar2 = (*(code *)*puVar4)();
      if (iVar2 == 0) {
        lVar3 = *unaff_x19;
        uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
              puVar4 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_060116a4;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_03cf1348();
LAB_060116a4:
        (*(code *)*puVar4)();
      }
    }
  }
  return;
}


