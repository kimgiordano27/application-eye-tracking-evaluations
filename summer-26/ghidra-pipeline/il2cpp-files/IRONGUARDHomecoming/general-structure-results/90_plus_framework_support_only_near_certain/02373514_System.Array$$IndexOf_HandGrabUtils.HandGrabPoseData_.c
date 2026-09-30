/*
FUNCTION_NAME: System.Array$$IndexOf<HandGrabUtils.HandGrabPoseData>
ENTRY_POINT: 02373514
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

void System_Array__IndexOf<HandGrabUtils_HandGrabPoseData>(code *param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  void *__src;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
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
  
code_r0x02373514:
  (*param_1)(param_2);
  do {
    lVar7 = *unaff_x26;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x27) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_023733e8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(unaff_x26,*unaff_x27,0);
LAB_023733e8:
    uVar8 = (*(code *)*puVar3)(unaff_x26,puVar3[1]);
    if ((uVar8 & 1) != 0) break;
    if (unaff_x26 != (long *)0x0) {
      lVar7 = *unaff_x26;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_02373588;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
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
    lVar7 = *(long *)(unaff_x29 + -0x48);
    if (*(long *)(lVar7 + 0x18) == 0) {
LAB_023736f0:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    iVar2 = FUN_0265d6c4(*(long *)(lVar7 + 0x18),
                         *(undefined8 *)
                          Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__
                        );
    iVar10 = *(int *)(unaff_x29 + -0x24);
    if (iVar10 < iVar2 + -1) {
      lVar11 = *(long *)(lVar12 + 0x10);
      uVar5 = FUN_039b1960(*(undefined8 *)(unaff_x29 + -0x58),lVar12,0);
      if (lVar11 == 0) goto LAB_023736f0;
      FUN_039afc24(lVar11,uVar5,0,*(uint *)(unaff_x29 + -0x50) & 1,0);
      iVar10 = *(int *)(unaff_x29 + -0x24);
    }
    iVar10 = iVar10 + 1;
    if (*(long *)(lVar7 + 0x18) == 0) goto LAB_023736f0;
    iVar2 = FUN_0265d6c4(*(long *)(lVar7 + 0x18),
                         *(undefined8 *)
                          Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__
                        );
    if (iVar2 <= iVar10) {
      lVar7 = *(long *)(lVar12 + 0x10);
      uVar5 = FUN_039b1960(*(undefined8 *)(unaff_x29 + -0x58),lVar12,0);
      if (lVar7 != 0) {
        FUN_039afab4(lVar7,uVar5,0);
        if (*(long *)(*(long *)(unaff_x29 + -0x60) + 0x28) == *(long *)(unaff_x29 + -8)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      goto LAB_023736f0;
    }
    if (*(long *)(lVar7 + 0x18) == 0) goto LAB_023736f0;
    lVar7 = FUN_0265d74c(*(long *)(lVar7 + 0x18),iVar10,
                         *(undefined8 *)
                          Method_UnityEngine_Component_GetComponent<ParticleSystemRenderer>__);
    if ((*(long *)(lVar12 + 0x10) == 0) ||
       (iVar2 = System_ComponentModel_ArrayConverter___ctor(*(long *)(lVar12 + 0x10),0), lVar7 == 0)
       ) goto LAB_023736f0;
    lVar12 = *(long *)(lVar7 + 0x10);
    *(long *)(unaff_x29 + -0x30) = lVar7;
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
  } while( true );
  lVar7 = *unaff_x26;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) ==
          *(long *)Method_UnityEngine_Component_GetComponent<OVRSkeletonRenderer>__) {
        puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_0237344c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01ecb238(unaff_x26,
                        *(long *)Method_UnityEngine_Component_GetComponent<OVRSkeletonRenderer>__,0)
  ;
LAB_0237344c:
  plVar4 = (long *)(*(code *)*puVar3)(unaff_x26,puVar3[1]);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  bVar1 = *(byte *)(*(long *)Method_UnityEngine_Component_GetComponent<OVRSkeleton>__ + 0x130);
  if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
      *(long *)Method_UnityEngine_Component_GetComponent<OVRSkeleton>__)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc();
  }
  lVar12 = plVar4[2];
  lVar7 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44(lVar7);
  }
  __src = (void *)FUN_01f08934(lVar12,lVar7);
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
  puVar6 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x20);
  param_2 = *puVar6;
  *(undefined8 **)(unaff_x29 + -0x20) = puVar3;
  *(int *)(unaff_x29 + -0xc) = unaff_w20;
  *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0xc;
  param_1 = (code *)puVar6[2];
  goto code_r0x02373514;
}


