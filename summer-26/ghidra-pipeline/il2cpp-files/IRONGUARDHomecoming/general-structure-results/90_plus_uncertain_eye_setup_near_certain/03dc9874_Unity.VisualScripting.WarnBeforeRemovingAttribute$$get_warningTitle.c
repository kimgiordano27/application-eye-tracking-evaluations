/*
FUNCTION_NAME: Unity.VisualScripting.WarnBeforeRemovingAttribute$$get_warningTitle
ENTRY_POINT: 03dc9874
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03dc9a24) */

void Unity_VisualScripting_WarnBeforeRemovingAttribute__get_warningTitle
               (undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x28;
  undefined8 *puVar12;
  long unaff_x29;
  undefined8 *puVar13;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  
  puVar6 = PTR_DAT_04577f98;
  puVar5 = PTR_DAT_04577f90;
  puVar4 = PTR_DAT_04577d60;
  puVar3 = PTR_DAT_045721c8;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  puVar12 = *(undefined8 **)(unaff_x28 + 0x1d0);
  puVar13 = *(undefined8 **)(unaff_x29 + 0xfa8);
  FUN_02b0758c(&stack0x00000008,param_2,*param_1);
  in_stack_00000038 = in_stack_00000010;
  in_stack_00000030 = in_stack_00000008;
  in_stack_00000048 = in_stack_00000020;
  in_stack_00000040 = in_stack_00000018;
  in_stack_00000050 = in_stack_00000028;
LAB_03dc98cc:
  uVar7 = FUN_02cd6e60(&stack0x00000030,*puVar12);
  if ((uVar7 & 1) == 0) {
    FUN_02cd6f84(&stack0x00000030,*(undefined8 *)puVar3);
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_02b072dc(*(long *)(unaff_x19 + 0x10),*(undefined8 *)puVar5);
      lVar10 = *(long *)puVar4;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar10 = *(long *)puVar4;
      }
      **(undefined4 **)(lVar10 + 0xb8) = 0;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (in_stack_00000048 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar8 = (long *)FUN_0271ca88(in_stack_00000048,*puVar13);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar10 = *plVar8;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03dc9940;
        }
        uVar7 = uVar7 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,0);
LAB_03dc9940:
    uVar7 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    if ((uVar7 & 1) == 0) break;
    lVar10 = *plVar8;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar6) {
          puVar9 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03dc999c;
        }
        uVar7 = uVar7 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar6,0);
LAB_03dc999c:
    (*(code *)*puVar9)(&stack0x00000008,plVar8,puVar9[1]);
    if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_03d267e8(in_stack_00000010,0);
  } while( true );
  if (plVar8 != (long *)0x0) {
    lVar10 = *plVar8;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar9 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03dc9a14;
        }
        uVar7 = uVar7 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar1,0);
LAB_03dc9a14:
    (*(code *)*puVar9)(plVar8,puVar9[1]);
  }
  goto LAB_03dc98cc;
}


