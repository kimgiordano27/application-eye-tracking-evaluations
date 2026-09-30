/*
FUNCTION_NAME: System.Array$$IndexOf<HandGrabUtils.HandGrabInteractableData>
ENTRY_POINT: 023733b8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 155
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x023735a4) */
/* WARNING: Removing unreachable block (ram,0x023736f4) */

void System_Array__IndexOf<HandGrabUtils_HandGrabInteractableData>
               (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  void *__src;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong in_x9;
  int *in_x10;
  int *piVar9;
  long in_x11;
  long unaff_x19;
  int unaff_w20;
  int iVar10;
  long lVar11;
  long lVar12;
  size_t unaff_x22;
  undefined8 *unaff_x24;
  void *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  
  do {
    if (in_x11 == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_023733e8;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar3 = (undefined8 *)FUN_01ecb238(unaff_x26,param_3,0);
LAB_023733e8:
        uVar4 = (*(code *)*puVar3)(unaff_x26,puVar3[1]);
        if ((uVar4 & 1) == 0) {
          if (unaff_x26 != (long *)0x0) {
            lVar8 = *unaff_x26;
            uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar4 != 0) {
              piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) ==
                    *(long *)
                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                  puVar3 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_02373588;
                }
                uVar4 = uVar4 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar4 != 0);
            }
            puVar3 = (undefined8 *)
                     FUN_01ecb238(unaff_x26,
                                  *(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                  ,0);
LAB_02373588:
            (*(code *)*puVar3)(unaff_x26,puVar3[1]);
          }
          lVar12 = *(long *)(unaff_x29 + -0x38);
          FUN_039b6544(lVar12,*(undefined8 *)(*(long *)(unaff_x29 + -0x30) + 0x18),
                       *(undefined4 *)(unaff_x29 + -0x4c),0);
          lVar8 = *(long *)(unaff_x29 + -0x48);
          if (*(long *)(lVar8 + 0x18) == 0) {
LAB_023736f0:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          iVar2 = FUN_0265d6c4(*(long *)(lVar8 + 0x18),
                               *(undefined8 *)
                                Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__
                              );
          iVar10 = *(int *)(unaff_x29 + -0x24);
          if (iVar10 < iVar2 + -1) {
            lVar11 = *(long *)(lVar12 + 0x10);
            uVar6 = FUN_039b1960(*(undefined8 *)(unaff_x29 + -0x58),lVar12,0);
            if (lVar11 == 0) goto LAB_023736f0;
            FUN_039afc24(lVar11,uVar6,0,*(uint *)(unaff_x29 + -0x50) & 1,0);
            iVar10 = *(int *)(unaff_x29 + -0x24);
          }
          iVar10 = iVar10 + 1;
          if (*(long *)(lVar8 + 0x18) == 0) goto LAB_023736f0;
          iVar2 = FUN_0265d6c4(*(long *)(lVar8 + 0x18),
                               *(undefined8 *)
                                Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__
                              );
          if (iVar2 <= iVar10) {
            lVar8 = *(long *)(lVar12 + 0x10);
            uVar6 = FUN_039b1960(*(undefined8 *)(unaff_x29 + -0x58),lVar12,0);
            if (lVar8 != 0) {
              FUN_039afab4(lVar8,uVar6,0);
              if (*(long *)(*(long *)(unaff_x29 + -0x60) + 0x28) == *(long *)(unaff_x29 + -8)) {
                return;
              }
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            goto LAB_023736f0;
          }
          if (*(long *)(lVar8 + 0x18) == 0) goto LAB_023736f0;
          lVar8 = FUN_0265d74c(*(long *)(lVar8 + 0x18),iVar10,
                               *(undefined8 *)
                                Method_UnityEngine_Component_GetComponent<ParticleSystemRenderer>__)
          ;
          if ((*(long *)(lVar12 + 0x10) == 0) ||
             (iVar2 = System_ComponentModel_ArrayConverter___ctor(*(long *)(lVar12 + 0x10),0),
             lVar8 == 0)) goto LAB_023736f0;
          lVar12 = *(long *)(lVar8 + 0x10);
          *(long *)(unaff_x29 + -0x30) = lVar8;
          if (lVar12 == 0) goto LAB_023736f0;
          *(int *)(unaff_x29 + -0x24) = iVar10;
          unaff_x26 = (long *)FUN_0265d924(lVar12,*(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_Component_GetComponent<OVRSpatialAnchor>__
                                          );
          if (unaff_x26 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          unaff_w20 = iVar2 - *(int *)(unaff_x29 + -0x3c);
        }
        else {
          lVar8 = *unaff_x26;
          uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar4 != 0) {
            piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) ==
                  *(long *)Method_UnityEngine_Component_GetComponent<OVRSkeletonRenderer>__) {
                puVar3 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_0237344c;
              }
              uVar4 = uVar4 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar4 != 0);
          }
          puVar3 = (undefined8 *)
                   FUN_01ecb238(unaff_x26,
                                *(long *)
                                 Method_UnityEngine_Component_GetComponent<OVRSkeletonRenderer>__,0)
          ;
LAB_0237344c:
          plVar5 = (long *)(*(code *)*puVar3)(unaff_x26,puVar3[1]);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          bVar1 = *(byte *)(*(long *)Method_UnityEngine_Component_GetComponent<OVRSkeleton>__ +
                           0x130);
          if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Method_UnityEngine_Component_GetComponent<OVRSkeleton>__)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc();
          }
          lVar12 = plVar5[2];
          lVar8 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01ecaf44(lVar8);
          }
          __src = (void *)FUN_01f08934(lVar12,lVar8);
          memcpy(unaff_x25,__src,unaff_x22);
          memcpy(unaff_x24,unaff_x25,unaff_x22);
          if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          puVar3 = unaff_x24;
          if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x18) + 0x28)) {
            puVar3 = (undefined8 *)*unaff_x24;
          }
          puVar7 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x20);
          uVar6 = *puVar7;
          *(undefined8 **)(unaff_x29 + -0x20) = puVar3;
          *(int *)(unaff_x29 + -0xc) = unaff_w20;
          *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0xc;
          (*(code *)puVar7[2])(uVar6);
        }
        param_1 = *unaff_x26;
        param_3 = *unaff_x27;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
}


