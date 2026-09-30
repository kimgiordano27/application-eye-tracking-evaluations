/*
FUNCTION_NAME: Unity.VisualScripting.WarnBeforeEditingAttribute$$get_emptyValues
ENTRY_POINT: 03dc9828
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03dc9a24) */

void Unity_VisualScripting_WarnBeforeEditingAttribute__get_emptyValues(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  long unaff_x19;
  long unaff_x20;
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
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 4000));
  thunk_FUN_01efb3a4(PTR_DAT_04577d60);
  thunk_FUN_01efb3a4(PTR_DAT_04577fa8);
  *(undefined1 *)(unaff_x20 + 0x5b7) = 1;
  puVar8 = PTR_DAT_04577fa8;
  puVar7 = PTR_DAT_04577f98;
  puVar6 = PTR_DAT_04577f90;
  puVar5 = PTR_DAT_04577d60;
  puVar4 = PTR_DAT_045721d0;
  puVar3 = PTR_DAT_045721c8;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  in_stack_00000050 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  if (*(long *)(unaff_x19 + 0x10) == 0) {
LAB_03dc9b38:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_02b0758c(&stack0x00000008,*(long *)(unaff_x19 + 0x10),*(undefined8 *)PTR_DAT_045721c0);
  in_stack_00000038 = in_stack_00000010;
  in_stack_00000030 = in_stack_00000008;
  in_stack_00000048 = in_stack_00000020;
  in_stack_00000040 = in_stack_00000018;
  in_stack_00000050 = in_stack_00000028;
LAB_03dc98cc:
  uVar9 = FUN_02cd6e60(&stack0x00000030,*(undefined8 *)puVar4);
  if ((uVar9 & 1) != 0) {
    if (in_stack_00000048 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar10 = (long *)FUN_0271ca88(in_stack_00000048,*(undefined8 *)puVar8);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar12 = *plVar10;
      uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar9 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
            puVar11 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_03dc9940;
          }
          uVar9 = uVar9 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar9 != 0);
      }
      puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar2,0);
LAB_03dc9940:
      uVar9 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      if ((uVar9 & 1) == 0) goto LAB_03dc99c0;
      lVar12 = *plVar10;
      uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar9 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar7) {
            puVar11 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_03dc999c;
          }
          uVar9 = uVar9 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar9 != 0);
      }
      puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar7,0);
LAB_03dc999c:
      (*(code *)*puVar11)(&stack0x00000008,plVar10,puVar11[1]);
      if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_03d267e8(in_stack_00000010,0);
    } while( true );
  }
  FUN_02cd6f84(&stack0x00000030,*(undefined8 *)puVar3);
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    FUN_02b072dc(*(long *)(unaff_x19 + 0x10),*(undefined8 *)puVar6);
    lVar12 = *(long *)puVar5;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar12 = *(long *)puVar5;
    }
    **(undefined4 **)(lVar12 + 0xb8) = 0;
    return;
  }
  goto LAB_03dc9b38;
LAB_03dc99c0:
  if (plVar10 != (long *)0x0) {
    lVar12 = *plVar10;
    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar9 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
          puVar11 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03dc9a14;
        }
        uVar9 = uVar9 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar9 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar1,0);
LAB_03dc9a14:
    (*(code *)*puVar11)(plVar10,puVar11[1]);
  }
  goto LAB_03dc98cc;
}


