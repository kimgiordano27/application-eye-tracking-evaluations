/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.Qpl.Annotation>$$.cctor
ENTRY_POINT: 05fc2c10
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05fc2d1c) */

void System_EmptyArray<OVRPlugin_Qpl_Annotation>___cctor
               (long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong in_x9;
  int *in_x10;
  int *piVar5;
  long in_x11;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long *in_stack_00000038;
  
  do {
    if (in_x11 == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_05fc2b68;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
                    /* try { // try from 05fc2c28 to 060c2efb has its CatchHandler @ 05fc2c28
                       catch() { ... } // from try @ 05fc2c28 with catch @ 05fc2c28
                       catch() { ... } // from try @ 05fc2fd4 with catch @ 05fc2c28
                       catch() { ... } // from try @ 05fc306c with catch @ 05fc2c28
                       catch() { ... } // from try @ 05fc30d8 with catch @ 05fc2c28 */
        puVar2 = (undefined8 *)FUN_03ac43c4(unaff_x21,param_3,0);
LAB_05fc2b68:
        (*(code *)*puVar2)(&stack0x00000008,unaff_x21,puVar2[1]);
        FUN_05fc3bc4();
        plVar1 = in_stack_00000038;
        if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar3 = *in_stack_00000038;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x23) {
              puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_05fc2bbc;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)FUN_03ac43c4(in_stack_00000038,*unaff_x23,0);
LAB_05fc2bbc:
        uVar4 = (*(code *)*puVar2)(plVar1,puVar2[1]);
        unaff_x21 = in_stack_00000038;
        if ((uVar4 & 1) == 0) {
          if (in_stack_00000038 == (long *)0x0) {
            return;
          }
          lVar3 = *in_stack_00000038;
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar4 == 0) goto LAB_05fc2cc0;
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          goto LAB_05fc2ca8;
        }
        if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        param_3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
        if ((*(ushort *)(param_3 + 0x135) & 1) == 0) {
          param_3 = FUN_03ac4090(param_3);
        }
        param_1 = *unaff_x21;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_05fc2ca8:
    if (*(long *)(piVar5 + -2) == *unaff_x22) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_05fc2cdc;
    }
  }
LAB_05fc2cc0:
  puVar2 = (undefined8 *)FUN_03ac43c4(in_stack_00000038,*unaff_x22,0);
LAB_05fc2cdc:
  (*(code *)*puVar2)(unaff_x21,puVar2[1]);
  return;
}


