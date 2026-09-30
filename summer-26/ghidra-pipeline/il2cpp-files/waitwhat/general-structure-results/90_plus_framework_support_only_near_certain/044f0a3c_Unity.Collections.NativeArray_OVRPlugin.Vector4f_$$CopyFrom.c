/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopyFrom
ENTRY_POINT: 044f0a3c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x044f0e30) */
/* WARNING: Removing unreachable block (ram,0x044f0e78) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopyFrom(void)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long *in_stack_00000058;
  
  plVar4 = (long *)thunk_FUN_031c3cac();
  if (plVar4 == (long *)0x0) {
    if (unaff_w21 < (int)unaff_x19[3]) {
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_031c09d4(lVar6);
      }
      lVar7 = *unaff_x22;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_044f0c6c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_031c0d08();
LAB_044f0c6c:
      plVar4 = (long *)(*(code *)*puVar5)();
      puVar2 = PTR_DAT_070c7c80;
      in_stack_00000028 = &stack0x00000058;
      in_stack_00000020 = 0;
      do {
        in_stack_00000058 = plVar4;
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar6 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_044f0ce0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_031c0d08(plVar4,*(long *)puVar2,0);
LAB_044f0ce0:
        uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        plVar4 = in_stack_00000058;
        if ((uVar9 & 1) == 0) {
          if (in_stack_00000058 == (long *)0x0) goto LAB_044f0e4c;
          lVar6 = *in_stack_00000058;
          uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar9 == 0) goto LAB_044f0dfc;
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_044f0de4;
        }
        if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_031c09d4(lVar6);
        }
        lVar7 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar6) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_044f0d64;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_031c0d08(plVar4,lVar6,0);
LAB_044f0d64:
        (*(code *)*puVar5)(&stack0x00000008,plVar4,puVar5[1]);
        in_stack_00000038 = in_stack_00000010;
        in_stack_00000030 = in_stack_00000008;
        in_stack_00000040 = in_stack_00000018;
        FUN_044f0738();
        plVar4 = in_stack_00000058;
      } while( true );
    }
    FUN_044f1758();
  }
  else {
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
    }
    lVar7 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_044f0b28;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_031c0d08(plVar4,lVar6,0);
LAB_044f0b28:
    iVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (0 < iVar3) {
      Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy();
      iVar1 = (int)unaff_x19[3] - unaff_w21;
      if (iVar1 != 0 && unaff_w21 <= (int)unaff_x19[3]) {
        FUN_0595261c(unaff_x19[2],unaff_w21,unaff_x19[2],iVar3 + unaff_w21,iVar1,0);
      }
      lVar6 = unaff_x19[2];
      if (plVar4 == unaff_x19) {
        FUN_0595261c(lVar6,0,lVar6,unaff_w21,unaff_w21,0);
        FUN_0595261c(unaff_x19[2],iVar3 + unaff_w21,unaff_x19[2],unaff_w21 << 1,
                     (int)unaff_x19[3] - unaff_w21,0);
      }
      else {
        lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_031c09d4(lVar7);
        }
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar7) {
              puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
              goto LAB_044f0c3c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_031c0d08(plVar4,lVar7,5);
LAB_044f0c3c:
        (*(code *)*puVar5)(plVar4,lVar6,unaff_w21,puVar5[1]);
      }
      *(int *)(unaff_x19 + 3) = (int)unaff_x19[3] + iVar3;
    }
  }
LAB_044f0e4c:
  *(int *)((long)unaff_x19 + 0x1c) = *(int *)((long)unaff_x19 + 0x1c) + 1;
  return;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_044f0de4:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_070c2e88) {
      puVar5 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_044f0e18;
    }
  }
LAB_044f0dfc:
  puVar5 = (undefined8 *)FUN_031c0d08(in_stack_00000058,*(long *)PTR_DAT_070c2e88,0);
LAB_044f0e18:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  goto LAB_044f0e4c;
}


