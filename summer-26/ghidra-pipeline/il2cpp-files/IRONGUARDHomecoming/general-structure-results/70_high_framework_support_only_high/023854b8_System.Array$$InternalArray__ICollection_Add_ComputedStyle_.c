/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<ComputedStyle>
ENTRY_POINT: 023854b8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x023855d8) */
/* WARNING: Removing unreachable block (ram,0x02385620) */

void System_Array__InternalArray__ICollection_Add<ComputedStyle>
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong in_x9;
  int *piVar4;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  undefined8 in_stack_00000008;
  
  do {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == param_3) {
        lVar2 = param_1 + (long)*piVar4 * 0x10 + 0x138;
        goto LAB_023854f4;
      }
      in_x9 = in_x9 - 1;
      piVar4 = piVar4 + 4;
    } while (in_x9 != 0);
    do {
      lVar2 = FUN_01ecb238();
LAB_023854f4:
      (**(code **)(*(long *)(lVar2 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar2 + 8) + 8));
      if (unaff_x21 == 0) {
        if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x28) + 0x135) & 1) == 0) {
          FUN_01ecaf44();
        }
        unaff_x21 = thunk_FUN_01f117cc();
        (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x30))
                  (unaff_x21,in_stack_00000008);
      }
      else {
        (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x38))
                  (unaff_x21,in_stack_00000008);
      }
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar2 = *unaff_x20;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x23) {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_02385480;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02385480:
      uVar3 = (*(code *)*puVar1)();
      if ((uVar3 & 1) == 0) {
        if (unaff_x20 == (long *)0x0) goto LAB_023855cc;
        lVar2 = *unaff_x20;
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 == 0) goto LAB_023855a4;
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        goto LAB_0238558c;
      }
      param_3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
      if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
        param_3 = FUN_01ecaf44(param_3);
      }
      param_1 = *unaff_x20;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
LAB_0238558c:
    if (*(long *)(piVar4 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_023855c0;
    }
  }
LAB_023855a4:
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_023855c0:
  (*(code *)*puVar1)();
LAB_023855cc:
  if (unaff_x21 == 0) {
    (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x48))();
  }
  else {
    (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x40))(unaff_x21);
  }
  return;
}


