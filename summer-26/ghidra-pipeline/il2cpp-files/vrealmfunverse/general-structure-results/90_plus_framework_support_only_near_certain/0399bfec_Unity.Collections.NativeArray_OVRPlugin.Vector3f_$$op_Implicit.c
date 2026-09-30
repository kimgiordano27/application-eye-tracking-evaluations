/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$op_Implicit
ENTRY_POINT: 0399bfec
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0399c31c) */
/* WARNING: Removing unreachable block (ram,0x0399c318) */
/* WARNING: Removing unreachable block (ram,0x0399c360) */

void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__op_Implicit
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  int *in_x10;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_000001b8;
  undefined8 *in_stack_000001c0;
  long *in_stack_000001c8;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)in_x10[4] * 0x10 + 0x138);
      goto Unity_Collections_NativeArray<OVRPlugin_Vector4f>___ctor;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar2 = (undefined8 *)FUN_02b7654c();
Unity_Collections_NativeArray<OVRPlugin_Vector4f>___ctor:
  plVar3 = (long *)(*(code *)*puVar2)();
  puVar1 = PTR_DAT_06312f90;
  in_stack_000001c0 = &stack0x000001c8;
  in_stack_000001b8 = 0;
  do {
    in_stack_000001c8 = plVar3;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar4 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0399c1c8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_02b7654c(plVar3,*(long *)puVar1,0);
LAB_0399c1c8:
    uVar6 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    plVar3 = in_stack_000001c8;
    if ((uVar6 & 1) == 0) {
      if (in_stack_000001c8 == (long *)0x0) goto LAB_0399c30c;
      lVar4 = *in_stack_000001c8;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 == 0) goto LAB_0399c2e4;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    if (in_stack_000001c8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218(lVar4);
    }
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0399c24c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_02b7654c(plVar3,lVar4,0);
LAB_0399c24c:
    (*(code *)*puVar2)(&stack0x00000008,plVar3,puVar2[1]);
    memcpy(&stack0x000001d0,&stack0x00000008,0x1b0);
    FUN_0399bc18();
    plVar3 = in_stack_000001c8;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0399c300;
    }
  }
LAB_0399c2e4:
  puVar2 = (undefined8 *)FUN_02b7654c(in_stack_000001c8,*(long *)PTR_DAT_06312f78,0);
LAB_0399c300:
  (*(code *)*puVar2)(plVar3,puVar2[1]);
LAB_0399c30c:
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


