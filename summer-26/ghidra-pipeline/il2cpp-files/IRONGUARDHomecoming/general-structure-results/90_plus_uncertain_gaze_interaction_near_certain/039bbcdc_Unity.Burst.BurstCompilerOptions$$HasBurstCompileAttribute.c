/*
FUNCTION_NAME: Unity.Burst.BurstCompilerOptions$$HasBurstCompileAttribute
ENTRY_POINT: 039bbcdc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_4;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x039bbfcc) */

void Unity_Burst_BurstCompilerOptions__HasBurstCompileAttribute
               (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong in_x9;
  int *in_x10;
  int *piVar7;
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
  
  do {
    do {
      if (*(long *)(in_x10 + -2) == param_3) {
        puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
        goto LAB_039bbd10;
      }
      in_x9 = in_x9 - 1;
      in_x10 = in_x10 + 4;
    } while (in_x9 != 0);
    do {
      puVar3 = (undefined8 *)FUN_01ecb238(unaff_x27,param_3,0);
LAB_039bbd10:
      uVar4 = (*(code *)*puVar3)(unaff_x27,puVar3[1]);
      if ((uVar4 & 1) == 0) {
        if (unaff_x27 != (long *)0x0) {
          lVar6 = *unaff_x27;
          uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar4 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) ==
                  *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__)
              {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_039bbe4c;
              }
              uVar4 = uVar4 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar4 != 0);
          }
          puVar3 = (undefined8 *)
                   FUN_01ecb238(unaff_x27,
                                *(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                ,0);
LAB_039bbe4c:
          (*(code *)*puVar3)(unaff_x27,puVar3[1]);
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
        iVar2 = FUN_0265d6c4(*(long *)(in_stack_00000008 + 0x18),
                             *(undefined8 *)
                              Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__
                            );
        if (unaff_w26 < iVar2 + -1) {
          lVar6 = *(long *)(in_stack_00000010 + 0x10);
          FUN_039b1978(in_stack_00000000,in_stack_00000010);
          if (lVar6 == 0) goto LAB_039bbfc8;
          FUN_039afc24(lVar6,*(undefined8 *)(in_stack_00000000 + 0x18),0,uStack000000000000001c & 1)
          ;
        }
        unaff_w26 = unaff_w26 + 1;
        if (*(long *)(in_stack_00000008 + 0x18) == 0) goto LAB_039bbfc8;
        iVar2 = FUN_0265d6c4(*(long *)(in_stack_00000008 + 0x18),
                             *(undefined8 *)
                              Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__
                            );
        if (iVar2 <= unaff_w26) {
          lVar6 = *(long *)(in_stack_00000010 + 0x10);
          FUN_039b1978(in_stack_00000000,in_stack_00000010);
          if ((lVar6 != 0) && (*(long *)(in_stack_00000000 + 0x18) != 0)) {
            FUN_0399e034(*(long *)(in_stack_00000000 + 0x18),lVar6,0);
            return;
          }
          goto LAB_039bbfc8;
        }
        if (*(long *)(in_stack_00000008 + 0x18) == 0) goto LAB_039bbfc8;
        unaff_x28 = FUN_0265d74c(*(long *)(in_stack_00000008 + 0x18),unaff_w26,
                                 *(undefined8 *)
                                  Method_UnityEngine_Component_GetComponent<ParticleSystemRenderer>__
                                );
        if (((*(long *)(in_stack_00000010 + 0x10) == 0) ||
            (iVar2 = System_ComponentModel_ArrayConverter___ctor
                               (*(long *)(in_stack_00000010 + 0x10)), unaff_x28 == 0)) ||
           (*(long *)(unaff_x28 + 0x10) == 0)) goto LAB_039bbfc8;
        unaff_x27 = (long *)FUN_0265d924(*(long *)(unaff_x28 + 0x10),
                                         *(undefined8 *)
                                          Method_UnityEngine_Component_GetComponent<OVRSpatialAnchor>__
                                        );
        if (unaff_x27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        unaff_w29 = iVar2 - iStack0000000000000018;
      }
      else {
        lVar6 = *unaff_x27;
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar4 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x24) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_039bbd6c;
            }
            uVar4 = uVar4 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined8 *)FUN_01ecb238(unaff_x27,*unaff_x24,0);
LAB_039bbd6c:
        plVar5 = (long *)(*(code *)*puVar3)(unaff_x27,puVar3[1]);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        bVar1 = *(byte *)(*unaff_x22 + 0x130);
        if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x22)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc();
        }
        plVar5 = (long *)plVar5[2];
        if (plVar5 == (long *)0x0) {
          if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(int *)(unaff_x25 + 0x10) == 1) {
            *(int *)(unaff_x25 + 0x10) = unaff_w29;
          }
        }
        else {
          if (*plVar5 != *unaff_x20) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar5,*unaff_x20);
          }
          if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          System_Linq_EnumerableSorter<MarkToBaseAdjustmentRecord>__Sort();
        }
      }
      param_1 = *unaff_x27;
      param_3 = *unaff_x21;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  } while( true );
}


