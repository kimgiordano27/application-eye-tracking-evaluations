/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Qpl.Annotation>
ENTRY_POINT: 03176ab4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03176dd0) */

bool System_Array__InternalArray__ICollection_Contains<OVRPlugin_Qpl_Annotation>(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  int *piVar12;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 *in_stack_00000050;
  long *in_stack_00000058;
  long *in_stack_00000068;
  
  FUN_02d965b8();
  *(undefined1 *)(unaff_x21 + 0x7b7) = 1;
  puVar2 = PTR_DAT_069fb990;
  in_stack_00000068 = (long *)0x0;
  in_stack_00000058 = (long *)0x0;
  if (unaff_x20 != 0) {
    lVar7 = FUN_0364c2b0();
    lVar11 = *(long *)puVar2;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar11);
    }
    uVar8 = FUN_0634eb94(lVar7,0,0);
    if ((uVar8 & 1) == 0) {
      lVar7 = FUN_0634ee08();
      if (lVar7 != 0) {
        plVar9 = (long *)FUN_06360078(lVar7,0);
        puVar6 = PTR_DAT_069fc150;
        puVar5 = PTR_DAT_069fc000;
        puVar4 = PTR_DAT_069fbff8;
        in_stack_00000048 = &stack0x00000068;
        in_stack_00000040 = 0;
        in_stack_00000050 = &stack0x00000058;
        do {
          in_stack_00000068 = plVar9;
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar11 = *plVar9;
          lVar7 = *(long *)puVar4;
          uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar8 != 0) {
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar7) {
                puVar10 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_03176bd8;
              }
              uVar8 = uVar8 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)FUN_02dd004c(plVar9,lVar7,0);
LAB_03176bd8:
          uVar8 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          plVar9 = in_stack_00000068;
          puVar3 = PTR_DAT_069fbff0;
          if ((uVar8 & 1) == 0) {
            plVar9 = (long *)thunk_FUN_02dd3048(in_stack_00000068,*(undefined8 *)PTR_DAT_069fbff0);
            if (plVar9 == (long *)0x0) goto LAB_03176d90;
            lVar7 = *plVar9;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            in_stack_00000058 = plVar9;
            if (uVar8 == 0) goto LAB_03176d68;
            piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            goto LAB_03176d50;
          }
          if (in_stack_00000068 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar11 = *in_stack_00000068;
          lVar7 = *(long *)puVar4;
          uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar8 != 0) {
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar7) {
                puVar10 = (undefined8 *)(lVar11 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                goto LAB_03176c40;
              }
              uVar8 = uVar8 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)FUN_02dd004c(in_stack_00000068,lVar7,1);
LAB_03176c40:
          plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
          if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96be0();
          }
          lVar7 = FUN_035ab08c(plVar9,*(undefined8 *)puVar6);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar8 = FUN_0634eb94(lVar7,0,0);
          plVar9 = in_stack_00000068;
          if ((uVar8 & 1) != 0) {
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            FUN_0631be94(&stack0x00000020,lVar7,0);
            plVar9 = in_stack_00000068;
            if (*(float *)((long)unaff_x19 + 0x14) + *(float *)((long)unaff_x19 + 0x14) <
                in_stack_00000030._4_4_ + in_stack_00000030._4_4_) {
              FUN_0631be94(&stack0x00000008,lVar7,0);
              unaff_x19[1] = in_stack_00000010;
              *unaff_x19 = in_stack_00000008;
              unaff_x19[2] = in_stack_00000018;
              plVar9 = in_stack_00000068;
              in_stack_00000020 = in_stack_00000008;
              in_stack_00000028 = in_stack_00000010;
              in_stack_00000030 = in_stack_00000018;
            }
          }
        } while( true );
      }
    }
    else if (lVar7 != 0) {
      FUN_0631be94(&stack0x00000040,lVar7,0);
      unaff_x19[1] = in_stack_00000048;
      *unaff_x19 = in_stack_00000040;
      unaff_x19[2] = in_stack_00000050;
      return true;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar12 = piVar12 + 4;
    if (uVar8 == 0) break;
LAB_03176d50:
    if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
      puVar10 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_03176d84;
    }
  }
LAB_03176d68:
  puVar10 = (undefined8 *)FUN_02dd004c(plVar9,*(long *)puVar3,0);
LAB_03176d84:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_03176d90:
  return 0.0 < *(float *)((long)unaff_x19 + 0x14) + *(float *)((long)unaff_x19 + 0x14);
}


