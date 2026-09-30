/*
FUNCTION_NAME: Unity.Burst.BurstCompiler$$Cancel
ENTRY_POINT: 039bbda0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_4;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x039bbfcc) */

void Unity_Burst_BurstCompiler__Cancel(long param_1,long *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  int unaff_w26;
  long *unaff_x27;
  long unaff_x28;
  int unaff_w29;
  long in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  int iStack0000000000000018;
  uint uStack000000000000001c;
  
code_r0x039bbda0:
  if (param_1 == param_3) {
    plVar3 = (long *)param_2[2];
    if (plVar3 == (long *)0x0) {
      if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(int *)(unaff_x25 + 0x10) == 1) {
        *(int *)(unaff_x25 + 0x10) = unaff_w29;
      }
    }
    else {
      if (*plVar3 != *unaff_x20) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar3,*unaff_x20);
      }
      if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      System_Linq_EnumerableSorter<MarkToBaseAdjustmentRecord>__Sort();
    }
    do {
      lVar4 = *unaff_x27;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x21) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_039bbd10;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238(unaff_x27,*unaff_x21,0);
LAB_039bbd10:
      uVar5 = (*(code *)*puVar2)(unaff_x27,puVar2[1]);
      if ((uVar5 & 1) != 0) goto code_r0x039bbd20;
      if (unaff_x27 != (long *)0x0) {
        lVar4 = *unaff_x27;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_039bbe4c;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)
                 FUN_01ecb238(unaff_x27,
                              *(long *)
                               Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_039bbe4c:
        (*(code *)*puVar2)(unaff_x27,puVar2[1]);
      }
      if ((_iStack0000000000000018 & 0x100000000) == 0) {
        FUN_039b65ec(in_stack_00000010,*(undefined8 *)(unaff_x28 + 0x18));
      }
      else {
        FUN_039b554c(in_stack_00000010);
      }
      if (*(long *)(in_stack_00000008 + 0x18) == 0) {
LAB_039bbfc8:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      iVar1 = FUN_0265d6c4(*(long *)(in_stack_00000008 + 0x18),
                           *(undefined8 *)
                            Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__
                          );
      if (unaff_w26 < iVar1 + -1) {
        lVar4 = *(long *)(in_stack_00000010 + 0x10);
        FUN_039b1978(in_stack_00000000,in_stack_00000010);
        if (lVar4 == 0) goto LAB_039bbfc8;
        FUN_039afc24(lVar4,*(undefined8 *)(in_stack_00000000 + 0x18),0,uStack000000000000001c & 1);
      }
      unaff_w26 = unaff_w26 + 1;
      if (*(long *)(in_stack_00000008 + 0x18) == 0) goto LAB_039bbfc8;
      iVar1 = FUN_0265d6c4(*(long *)(in_stack_00000008 + 0x18),
                           *(undefined8 *)
                            Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__
                          );
      if (iVar1 <= unaff_w26) {
        lVar4 = *(long *)(in_stack_00000010 + 0x10);
        FUN_039b1978(in_stack_00000000,in_stack_00000010);
        if ((lVar4 != 0) && (*(long *)(in_stack_00000000 + 0x18) != 0)) {
          FUN_0399e034(*(long *)(in_stack_00000000 + 0x18),lVar4,0);
          return;
        }
        goto LAB_039bbfc8;
      }
      if (*(long *)(in_stack_00000008 + 0x18) == 0) goto LAB_039bbfc8;
      unaff_x28 = FUN_0265d74c(*(long *)(in_stack_00000008 + 0x18),unaff_w26,
                               *(undefined8 *)
                                Method_UnityEngine_Component_GetComponent<ParticleSystemRenderer>__)
      ;
      if (((*(long *)(in_stack_00000010 + 0x10) == 0) ||
          (iVar1 = System_ComponentModel_ArrayConverter___ctor(*(long *)(in_stack_00000010 + 0x10)),
          unaff_x28 == 0)) || (*(long *)(unaff_x28 + 0x10) == 0)) goto LAB_039bbfc8;
      unaff_x27 = (long *)FUN_0265d924(*(long *)(unaff_x28 + 0x10),
                                       *(undefined8 *)
                                        Method_UnityEngine_Component_GetComponent<OVRSpatialAnchor>__
                                      );
      if (unaff_x27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      unaff_w29 = iVar1 - iStack0000000000000018;
    } while( true );
  }
LAB_039bbf0c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08cfc();
code_r0x039bbd20:
  lVar4 = *unaff_x27;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x24) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_039bbd6c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238(unaff_x27,*unaff_x24,0);
LAB_039bbd6c:
  param_2 = (long *)(*(code *)*puVar2)(unaff_x27,puVar2[1]);
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  param_3 = *unaff_x22;
  if (*(byte *)(*param_2 + 0x130) < *(byte *)(param_3 + 0x130)) goto LAB_039bbf0c;
  param_1 = *(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(param_3 + 0x130) * 8 + -8);
  goto code_r0x039bbda0;
}


