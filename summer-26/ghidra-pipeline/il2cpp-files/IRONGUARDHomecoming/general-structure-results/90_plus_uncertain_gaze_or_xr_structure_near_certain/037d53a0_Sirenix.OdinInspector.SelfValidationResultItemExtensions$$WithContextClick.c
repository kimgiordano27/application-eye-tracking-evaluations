/*
FUNCTION_NAME: Sirenix.OdinInspector.SelfValidationResultItemExtensions$$WithContextClick
ENTRY_POINT: 037d53a0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x037d5544) */
/* WARNING: Removing unreachable block (ram,0x037d55f0) */

undefined4
Sirenix_OdinInspector_SelfValidationResultItemExtensions__WithContextClick
          (long param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined **in_x10;
  int *piVar5;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x25;
  ulong unaff_x26;
  int iVar6;
  int unaff_w28;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  
code_r0x037d53a0:
  uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)in_x10[0x80]) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_037d53f0;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238(param_2,*(long *)in_x10[0x80],0);
LAB_037d53f0:
  plVar2 = (long *)(*(code *)*puVar1)(param_2,puVar1[1]);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar6 = 0;
  do {
    lVar3 = *plVar2;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x29) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_037d5454;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238(plVar2,*unaff_x29,0);
LAB_037d5454:
    uVar4 = (*(code *)*puVar1)(plVar2,puVar1[1]);
    if ((uVar4 & 1) == 0) break;
    lVar3 = *plVar2;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto Sirenix_OdinInspector_SelfValidationResultItemExtensions__WithContextClick;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238(plVar2,*unaff_x25,0);
Sirenix_OdinInspector_SelfValidationResultItemExtensions__WithContextClick:
    lVar3 = (*(code *)*puVar1)(plVar2,puVar1[1]);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    iVar6 = *(int *)(lVar3 + 0x10) + iVar6;
  } while( true );
  if (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_037d552c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01ecb238(plVar2,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_037d552c:
    (*(code *)*puVar1)(plVar2,puVar1[1]);
  }
  if (unaff_w28 < iVar6) {
    if (unaff_x19 == 0) {
LAB_037d55e8:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x26) goto LAB_037d55ec;
    in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x19 + unaff_x26 * 4 + 0x20);
    unaff_w28 = iVar6;
  }
  unaff_x26 = unaff_x26 + 1;
  if ((long)(int)*(uint *)(unaff_x21 + 0x18) <= (long)unaff_x26) {
    return in_stack_00000008._4_4_;
  }
  if (unaff_x26 < *(uint *)(unaff_x21 + 0x18)) {
    param_2 = (long *)FUN_022fa0b4();
    if (param_2 == (long *)0x0) goto LAB_037d55e8;
    param_1 = *param_2;
    in_x10 = &Method_UnityEngine_Splines_SplineDataDictionary<Object>_set_Item__;
    goto code_r0x037d53a0;
  }
LAB_037d55ec:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


