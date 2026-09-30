/*
FUNCTION_NAME: DG.Tweening.Core.TweenerCore<double,-double,-NoOptions>$$Validate
ENTRY_POINT: 026dc1fc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x026dc3c8) */
/* WARNING: Removing unreachable block (ram,0x026dc4b8) */

void DG_Tweening_Core_TweenerCore<double,_double,_NoOptions>__Validate(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x20;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  long lStack0000000000000048;
  undefined8 in_stack_00000050;
  
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  uStack0000000000000030 = param_1;
  uStack0000000000000040 = param_1;
  if (unaff_x20[2] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_02b0758c(&stack0x00000008,unaff_x20[2],
               *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90));
  uStack0000000000000038 = in_stack_00000010;
  uStack0000000000000030 = in_stack_00000008;
  lStack0000000000000048 = in_stack_00000020;
  uStack0000000000000040 = in_stack_00000018;
  in_stack_00000050 = in_stack_00000028;
LAB_026dc240:
  uVar3 = FUN_02cd6e60(&stack0x00000030,
                       *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x100));
  if ((uVar3 & 1) == 0) {
    FUN_02cd6f84(&stack0x00000030,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x108));
    return;
  }
  if (lStack0000000000000048 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar4 = (long *)FUN_0271ca88(lStack0000000000000048,
                                *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 200)
                               );
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar6 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_026dc2c4;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_026dc2c4:
    uVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar3 & 1) == 0) break;
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xd0);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar7 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_026dc33c;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,lVar6,0);
LAB_026dc33c:
    (*(code *)*puVar5)(&stack0x00000008,plVar4,puVar5[1]);
    (**(code **)(*unaff_x20 + 0x1b8))();
  } while( true );
  if (plVar4 != (long *)0x0) {
    lVar6 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_026dc3b8;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_026dc3b8:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  goto LAB_026dc240;
}


