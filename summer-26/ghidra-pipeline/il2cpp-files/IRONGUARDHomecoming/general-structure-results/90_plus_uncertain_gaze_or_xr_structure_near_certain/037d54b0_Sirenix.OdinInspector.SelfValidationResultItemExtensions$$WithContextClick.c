/*
FUNCTION_NAME: Sirenix.OdinInspector.SelfValidationResultItemExtensions$$WithContextClick
ENTRY_POINT: 037d54b0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x037d5544) */
/* WARNING: Removing unreachable block (ram,0x037d55f0) */

undefined4
Sirenix_OdinInspector_SelfValidationResultItemExtensions__WithContextClick(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x23;
  long *unaff_x25;
  ulong unaff_x26;
  int unaff_w27;
  int unaff_w28;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  
code_r0x037d54b0:
  lVar3 = (*(code *)*param_1)(unaff_x23,param_1[1]);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  unaff_w27 = *(int *)(lVar3 + 0x10) + unaff_w27;
  do {
    lVar3 = *unaff_x23;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x29) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_037d5454;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(unaff_x23,*unaff_x29,0);
LAB_037d5454:
    uVar4 = (*(code *)*puVar2)(unaff_x23,puVar2[1]);
    if ((uVar4 & 1) != 0) break;
    if (unaff_x23 != (long *)0x0) {
      lVar3 = *unaff_x23;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_037d552c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_01ecb238(unaff_x23,
                            *(long *)
                             Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_037d552c:
      (*(code *)*puVar2)(unaff_x23,puVar2[1]);
    }
    if (unaff_w28 < unaff_w27) {
      if (unaff_x19 == 0) goto LAB_037d55e8;
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_x26) goto LAB_037d55ec;
      in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x19 + unaff_x26 * 4 + 0x20);
      unaff_w28 = unaff_w27;
    }
    unaff_x26 = unaff_x26 + 1;
    if ((long)(int)*(uint *)(unaff_x21 + 0x18) <= (long)unaff_x26) {
      return in_stack_00000008._4_4_;
    }
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_x26) {
LAB_037d55ec:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    plVar1 = (long *)FUN_022fa0b4();
    if (plVar1 == (long *)0x0) {
LAB_037d55e8:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = *plVar1;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_System_Collections_Generic_Stack<Tween>_Clear__) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_037d53f0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar1,*(long *)Method_System_Collections_Generic_Stack<Tween>_Clear__,0);
LAB_037d53f0:
    unaff_x23 = (long *)(*(code *)*puVar2)(plVar1,puVar2[1]);
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    unaff_w27 = 0;
  } while( true );
  lVar3 = *unaff_x23;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x25) {
        param_1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto code_r0x037d54b0;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  param_1 = (undefined8 *)FUN_01ecb238(unaff_x23,*unaff_x25,0);
  goto code_r0x037d54b0;
}


