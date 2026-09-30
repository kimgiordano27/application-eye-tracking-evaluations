/*
FUNCTION_NAME: System.Array$$IndexOf<HID.HIDCollectionDescriptor>
ENTRY_POINT: 02372e80
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


void System_Array__IndexOf<HID_HIDCollectionDescriptor>(undefined8 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long lVar10;
  int unaff_w23;
  long unaff_x24;
  long lVar11;
  int unaff_w26;
  long *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000008;
  uint uStack0000000000000010;
  undefined4 uStack0000000000000014;
  long in_stack_00000018;
  long in_stack_00000020;
  
FUN_02372e90:
  (*(code *)*param_1)(unaff_x28,param_1[1]);
LAB_02372e9c:
  if (unaff_x22 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(unaff_x22);
  }
  if ((unaff_w23 != 7) && (unaff_w23 != 0)) {
    return;
  }
  FUN_039b6544(in_stack_00000020,*(undefined8 *)(unaff_x29 + 0x18),uStack0000000000000014,0);
  puVar2 = Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__;
  if (*(long *)(in_stack_00000018 + 0x18) != 0) {
    iVar3 = FUN_0265d6c4(*(long *)(in_stack_00000018 + 0x18),
                         *(undefined8 *)
                          Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__
                        );
    if (unaff_w26 < iVar3 + -1) {
      lVar10 = *(long *)(in_stack_00000020 + 0x10);
      uVar7 = FUN_039b1960(in_stack_00000008,in_stack_00000020,0);
      if (lVar10 == 0) goto LAB_02373008;
      FUN_039afc24(lVar10,uVar7,0,uStack0000000000000010 & 1,0);
    }
    unaff_w26 = unaff_w26 + 1;
    if (*(long *)(in_stack_00000018 + 0x18) != 0) {
      iVar3 = FUN_0265d6c4(*(long *)(in_stack_00000018 + 0x18),*(undefined8 *)puVar2);
      if (unaff_w26 < iVar3) {
        if (*(long *)(in_stack_00000018 + 0x18) != 0) {
          unaff_x29 = FUN_0265d74c(*(long *)(in_stack_00000018 + 0x18),unaff_w26,
                                   *(undefined8 *)
                                    Method_UnityEngine_Component_GetComponent<ParticleSystemRenderer>__
                                  );
          if (((*(long *)(in_stack_00000020 + 0x10) != 0) &&
              (System_ComponentModel_ArrayConverter___ctor(*(long *)(in_stack_00000020 + 0x10),0),
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
              lVar10 = *unaff_x28;
              uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *unaff_x27) {
                    puVar4 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_02372d38;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar4 = (undefined8 *)FUN_01ecb238(unaff_x28,*unaff_x27,0);
LAB_02372d38:
              uVar8 = (*(code *)*puVar4)(unaff_x28,puVar4[1]);
              if ((uVar8 & 1) == 0) goto LAB_02372e30;
              lVar10 = *unaff_x28;
              uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *unaff_x21) {
                    puVar4 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_02372d94;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar4 = (undefined8 *)FUN_01ecb238(unaff_x28,*unaff_x21,0);
LAB_02372d94:
              plVar5 = (long *)(*(code *)*puVar4)(unaff_x28,puVar4[1]);
              if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              bVar1 = *(byte *)(*unaff_x19 + 0x130);
              if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x19)) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08cfc();
              }
              lVar11 = plVar5[2];
              lVar10 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x18);
              if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                lVar10 = FUN_01ecaf44(lVar10);
              }
              if ((lVar11 != 0) && (lVar6 = thunk_FUN_01f116d0(lVar11,lVar10), lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08cfc(lVar11,lVar10);
              }
              if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              System_Linq_EnumerableSorter<MarkToBaseAdjustmentRecord>__Sort();
            } while( true );
          }
        }
      }
      else {
        lVar10 = *(long *)(in_stack_00000020 + 0x10);
        uVar7 = FUN_039b1960(in_stack_00000008,in_stack_00000020,0);
        if (lVar10 != 0) {
          FUN_039afab4(lVar10,uVar7,0);
          return;
        }
      }
    }
  }
LAB_02373008:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_02372e30:
  unaff_x22 = 0;
  unaff_w23 = 7;
  if (unaff_x28 != (long *)0x0) goto code_r0x02372e3c;
  goto LAB_02372e9c;
code_r0x02372e3c:
  lVar10 = *unaff_x28;
  uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        param_1 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
        goto FUN_02372e90;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  param_1 = (undefined8 *)
            FUN_01ecb238(unaff_x28,
                         *(long *)
                          Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,0
                        );
  goto FUN_02372e90;
}


