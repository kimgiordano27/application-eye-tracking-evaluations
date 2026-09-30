/*
FUNCTION_NAME: System.Array$$IndexOf<FormatterLocator.FormatterLocatorInfo>
ENTRY_POINT: 02372d44
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


/* WARNING: Removing unreachable block (ram,0x02372ea8) */
/* WARNING: Removing unreachable block (ram,0x02372fe8) */
/* WARNING: Removing unreachable block (ram,0x0237300c) */

void System_Array__IndexOf<FormatterLocator_FormatterLocatorInfo>(ulong param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
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
  
  do {
    if ((param_1 & 1) == 0) {
      if (unaff_x28 != (long *)0x0) {
        lVar8 = *unaff_x28;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto FUN_02372e90;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)
                 FUN_01ecb238(unaff_x28,
                              *(long *)
                               Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
FUN_02372e90:
        (*(code *)*puVar4)(unaff_x28,puVar4[1]);
      }
      FUN_039b6544(in_stack_00000020,*(undefined8 *)(unaff_x29 + 0x18),uStack0000000000000014,0);
      puVar2 = Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__;
      if (*(long *)(in_stack_00000018 + 0x18) == 0) {
LAB_02373008:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      iVar3 = FUN_0265d6c4(*(long *)(in_stack_00000018 + 0x18),
                           *(undefined8 *)
                            Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__
                          );
      if (unaff_w26 < iVar3 + -1) {
        lVar8 = *(long *)(in_stack_00000020 + 0x10);
        uVar7 = FUN_039b1960(in_stack_00000008,in_stack_00000020,0);
        if (lVar8 == 0) goto LAB_02373008;
        FUN_039afc24(lVar8,uVar7,0,uStack0000000000000010 & 1,0);
      }
      unaff_w26 = unaff_w26 + 1;
      if (*(long *)(in_stack_00000018 + 0x18) == 0) goto LAB_02373008;
      iVar3 = FUN_0265d6c4(*(long *)(in_stack_00000018 + 0x18),*(undefined8 *)puVar2);
      if (iVar3 <= unaff_w26) {
        lVar8 = *(long *)(in_stack_00000020 + 0x10);
        uVar7 = FUN_039b1960(in_stack_00000008,in_stack_00000020,0);
        if (lVar8 != 0) {
          FUN_039afab4(lVar8,uVar7,0);
          return;
        }
        goto LAB_02373008;
      }
      if (*(long *)(in_stack_00000018 + 0x18) == 0) goto LAB_02373008;
      unaff_x29 = FUN_0265d74c(*(long *)(in_stack_00000018 + 0x18),unaff_w26,
                               *(undefined8 *)
                                Method_UnityEngine_Component_GetComponent<ParticleSystemRenderer>__)
      ;
      if (((*(long *)(in_stack_00000020 + 0x10) == 0) ||
          (System_ComponentModel_ArrayConverter___ctor(*(long *)(in_stack_00000020 + 0x10),0),
          unaff_x29 == 0)) || (*(long *)(unaff_x29 + 0x10) == 0)) goto LAB_02373008;
      unaff_x28 = (long *)FUN_0265d924(*(long *)(unaff_x29 + 0x10),
                                       *(undefined8 *)
                                        Method_UnityEngine_Component_GetComponent<OVRSpatialAnchor>__
                                      );
      if (unaff_x28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    }
    else {
      lVar8 = *unaff_x28;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_02372d94;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
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
      lVar8 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x18);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44(lVar8);
      }
      if ((lVar11 != 0) && (lVar6 = thunk_FUN_01f116d0(lVar11,lVar8), lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(lVar11,lVar8);
      }
      if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      System_Linq_EnumerableSorter<MarkToBaseAdjustmentRecord>__Sort();
    }
    lVar8 = *unaff_x28;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x27) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02372d38;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(unaff_x28,*unaff_x27,0);
LAB_02372d38:
    param_1 = (*(code *)*puVar4)(unaff_x28,puVar4[1]);
  } while( true );
}


