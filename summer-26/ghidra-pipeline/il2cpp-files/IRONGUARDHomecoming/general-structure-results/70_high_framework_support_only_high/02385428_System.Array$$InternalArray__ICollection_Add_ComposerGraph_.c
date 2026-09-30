/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<ComposerGraph>
ENTRY_POINT: 02385428
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x023855d8) */
/* WARNING: Removing unreachable block (ram,0x02385620) */

void System_Array__InternalArray__ICollection_Add<ComposerGraph>(long *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long lVar7;
  long *unaff_x23;
  undefined8 in_stack_00000008;
  
  lVar7 = 0;
  do {
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = *param_1;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02385480;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(param_1,*unaff_x23,0);
LAB_02385480:
    uVar5 = (*(code *)*puVar2)(param_1,puVar2[1]);
    if ((uVar5 & 1) == 0) {
      if (param_1 == (long *)0x0) goto LAB_023855cc;
      lVar3 = *param_1;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 == 0) goto LAB_023855a4;
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *param_1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          lVar3 = lVar4 + (long)*piVar6 * 0x10 + 0x138;
          goto LAB_023854f4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar3 = FUN_01ecb238(param_1,lVar3,0);
LAB_023854f4:
    lVar3 = *(long *)(lVar3 + 8);
    (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 8),lVar3,param_1,0,&stack0x00000008);
    uVar1 = in_stack_00000008;
    if (lVar7 == 0) {
      if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x28) + 0x135) & 1) == 0) {
        FUN_01ecaf44();
      }
      lVar7 = thunk_FUN_01f117cc();
      (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x30))(lVar7,uVar1);
    }
    else {
      (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x38))(lVar7,in_stack_00000008);
    }
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_023855c0;
    }
  }
LAB_023855a4:
  puVar2 = (undefined8 *)
           FUN_01ecb238(param_1,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_023855c0:
  (*(code *)*puVar2)(param_1,puVar2[1]);
LAB_023855cc:
  if (lVar7 == 0) {
    (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x48))();
  }
  else {
    (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x40))(lVar7);
  }
  return;
}


