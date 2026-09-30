/*
FUNCTION_NAME: Unity.Burst.BurstString$$AlignLeft
ENTRY_POINT: 039bef0c
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

void Unity_Burst_BurstString__AlignLeft(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0xa78));
  *(undefined1 *)(unaff_x21 + 0x844) = 1;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (unaff_x19 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)StringLiteral_5406 + 0x130);
    if ((*(byte *)(*unaff_x19 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)StringLiteral_5406)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    if (unaff_x19[3] != 0) {
      plVar7 = (long *)FUN_0265d924(unaff_x19[3],
                                    *(undefined8 *)
                                     Method_UnityEngine_Component_GetComponent<OVRSpatialAnchor>__);
      puVar4 = Method_UnityEngine_Component_GetComponent<OVRSkeletonRenderer>__;
      puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar10 = *plVar7;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_039befd8;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar3,0);
LAB_039befd8:
        uVar11 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((uVar11 & 1) == 0) goto LAB_039bf050;
        lVar10 = *plVar7;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_039bf034;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar4,0);
LAB_039bf034:
        (*(code *)*puVar8)(plVar7,puVar8[1]);
        FUN_039b554c();
      } while( true );
    }
  }
  goto LAB_039bf17c;
LAB_039bf050:
  if (plVar7 != (long *)0x0) {
    lVar10 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_039bf0a4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_039bf0a4:
    (*(code *)*puVar8)(plVar7,puVar8[1]);
  }
  plVar7 = (long *)(**(code **)(*unaff_x19 + 0x188))();
  if (plVar7 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar7 + 0x438))(plVar7,*(undefined8 *)(*plVar7 + 0x440));
    if (unaff_x19[3] != 0) {
      iVar5 = FUN_0265d6c4(unaff_x19[3],*(undefined8 *)StringLiteral_4564);
      iVar6 = (**(code **)(*unaff_x19 + 0x178))();
      lVar10 = *(long *)(unaff_x20 + 0x10);
      if (iVar6 == 0x20) {
        if (lVar10 != 0) {
          System_Collections_Specialized_ListDictionary__get_IsReadOnly(lVar10,uVar9,iVar5);
          return;
        }
      }
      else if (lVar10 != 0) {
        if (iVar5 == 1) {
          FUN_039ad088();
          return;
        }
        FUN_039ad0f4(lVar10,uVar9,iVar5);
        return;
      }
    }
  }
LAB_039bf17c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


