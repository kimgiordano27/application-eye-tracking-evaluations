/*
FUNCTION_NAME: Unity.Burst.BurstString$$AlignRight
ENTRY_POINT: 039bef58
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x039bf18c) */

void Unity_Burst_BurstString__AlignRight(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x19;
  long unaff_x20;
  
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (param_1 != 0) {
    plVar6 = (long *)FUN_0265d924(param_1,*(undefined8 *)
                                           Method_UnityEngine_Component_GetComponent<OVRSpatialAnchor>__
                                 );
    puVar3 = Method_UnityEngine_Component_GetComponent<OVRSkeletonRenderer>__;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar9 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_039befd8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_039befd8:
      uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if ((uVar10 & 1) == 0) goto LAB_039bf050;
      lVar9 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_039bf034;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_039bf034:
      (*(code *)*puVar7)(plVar6,puVar7[1]);
      FUN_039b554c();
    } while( true );
  }
  goto LAB_039bf17c;
LAB_039bf050:
  if (plVar6 != (long *)0x0) {
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_039bf0a4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_039bf0a4:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  plVar6 = (long *)(**(code **)(*unaff_x19 + 0x188))();
  if (plVar6 != (long *)0x0) {
    uVar8 = (**(code **)(*plVar6 + 0x438))(plVar6,*(undefined8 *)(*plVar6 + 0x440));
    if (unaff_x19[3] != 0) {
      iVar4 = FUN_0265d6c4(unaff_x19[3],*(undefined8 *)StringLiteral_4564);
      iVar5 = (**(code **)(*unaff_x19 + 0x178))();
      lVar9 = *(long *)(unaff_x20 + 0x10);
      if (iVar5 == 0x20) {
        if (lVar9 != 0) {
          System_Collections_Specialized_ListDictionary__get_IsReadOnly(lVar9,uVar8,iVar4);
          return;
        }
      }
      else if (lVar9 != 0) {
        if (iVar4 == 1) {
          FUN_039ad088();
          return;
        }
        FUN_039ad0f4(lVar9,uVar8,iVar4);
        return;
      }
    }
  }
LAB_039bf17c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


