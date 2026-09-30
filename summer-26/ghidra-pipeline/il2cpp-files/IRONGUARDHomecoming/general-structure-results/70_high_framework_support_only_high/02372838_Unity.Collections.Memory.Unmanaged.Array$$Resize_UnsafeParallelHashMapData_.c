/*
FUNCTION_NAME: Unity.Collections.Memory.Unmanaged.Array$$Resize<UnsafeParallelHashMapData>
ENTRY_POINT: 02372838
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


void Unity_Collections_Memory_Unmanaged_Array__Resize<UnsafeParallelHashMapData>(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  int *in_x10;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long lVar9;
  int unaff_w23;
  long unaff_x24;
  long *unaff_x25;
  int unaff_w26;
  long *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000000;
  uint uStack0000000000000008;
  undefined4 uStack000000000000000c;
  long in_stack_00000010;
  
code_r0x02372838:
  puVar4 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_02372844:
  (*(code *)*puVar4)(unaff_x28,puVar4[1]);
LAB_02372850:
  if (unaff_x22 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(unaff_x22);
  }
  if ((unaff_w23 != 7) && (unaff_w23 != 0)) {
    return;
  }
  FUN_039b6544(unaff_x19,*(undefined8 *)(unaff_x29 + 0x18),uStack000000000000000c,0);
  puVar2 = Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__;
  if (*(long *)(in_stack_00000010 + 0x18) != 0) {
    iVar3 = FUN_0265d6c4(*(long *)(in_stack_00000010 + 0x18),
                         *(undefined8 *)
                          Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__
                        );
    if (unaff_w26 < iVar3 + -1) {
      lVar9 = *(long *)(unaff_x19 + 0x10);
      uVar6 = FUN_039b1960(in_stack_00000000,unaff_x19,0);
      if (lVar9 == 0) goto LAB_023729c0;
      FUN_039afc24(lVar9,uVar6,0,uStack0000000000000008 & 1,0);
    }
    unaff_w26 = unaff_w26 + 1;
    if (*(long *)(in_stack_00000010 + 0x18) != 0) {
      iVar3 = FUN_0265d6c4(*(long *)(in_stack_00000010 + 0x18),*(undefined8 *)puVar2);
      if (unaff_w26 < iVar3) {
        if (*(long *)(in_stack_00000010 + 0x18) != 0) {
          unaff_x29 = FUN_0265d74c(*(long *)(in_stack_00000010 + 0x18),unaff_w26,
                                   *(undefined8 *)
                                    Method_UnityEngine_Component_GetComponent<ParticleSystemRenderer>__
                                  );
          if (((*(long *)(unaff_x19 + 0x10) != 0) &&
              (System_ComponentModel_ArrayConverter___ctor(*(long *)(unaff_x19 + 0x10),0),
              unaff_x29 != 0)) && (*(long *)(unaff_x29 + 0x10) != 0)) {
            unaff_x28 = (long *)FUN_0265d924(*(long *)(unaff_x29 + 0x10),
                                             *(undefined8 *)
                                              Method_UnityEngine_Component_GetComponent<OVRSpatialAnchor>__
                                            );
            if (unaff_x28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            do {
              lVar9 = *unaff_x28;
              uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *unaff_x25) {
                    puVar4 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_023726ec;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar4 = (undefined8 *)FUN_01ecb238(unaff_x28,*unaff_x25,0);
LAB_023726ec:
              uVar7 = (*(code *)*puVar4)(unaff_x28,puVar4[1]);
              if ((uVar7 & 1) == 0) goto LAB_023727e4;
              lVar9 = *unaff_x28;
              uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *unaff_x27) {
                    puVar4 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_02372748;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar4 = (undefined8 *)FUN_01ecb238(unaff_x28,*unaff_x27,0);
LAB_02372748:
              plVar5 = (long *)(*(code *)*puVar4)(unaff_x28,puVar4[1]);
              if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              bVar1 = *(byte *)(*unaff_x21 + 0x130);
              if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x21)) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08cfc();
              }
              plVar5 = (long *)plVar5[2];
              lVar9 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x18);
              if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                lVar9 = FUN_01ecaf44(lVar9);
              }
              if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              if (*(long *)(*plVar5 + 0x40) != *(long *)(lVar9 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08cfc(plVar5);
              }
              thunk_FUN_01f11920(plVar5);
              if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              FUN_02b02c4c();
            } while( true );
          }
        }
      }
      else {
        lVar9 = *(long *)(unaff_x19 + 0x10);
        uVar6 = FUN_039b1960(in_stack_00000000,unaff_x19,0);
        if (lVar9 != 0) {
          FUN_039afab4(lVar9,uVar6,0);
          return;
        }
      }
    }
  }
LAB_023729c0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_023727e4:
  unaff_x22 = 0;
  unaff_w23 = 7;
  if (unaff_x28 != (long *)0x0) goto code_r0x023727f0;
  goto LAB_02372850;
code_r0x023727f0:
  param_1 = *unaff_x28;
  uVar7 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar7 != 0) {
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(in_x10 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__)
      goto code_r0x02372838;
      uVar7 = uVar7 - 1;
      in_x10 = in_x10 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_01ecb238(unaff_x28,
                        *(long *)
                         Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,0)
  ;
  goto LAB_02372844;
}


