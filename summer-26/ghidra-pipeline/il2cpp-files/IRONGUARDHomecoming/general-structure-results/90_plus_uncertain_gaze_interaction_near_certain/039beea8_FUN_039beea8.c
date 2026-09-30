/*
FUNCTION_NAME: FUN_039beea8
ENTRY_POINT: 039beea8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 174
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x039bf18c) */

void FUN_039beea8(long param_1,long *param_2)

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
  
                    /* try { // try from 039beeac to 03abeeb3 has its CatchHandler @ 039beec8 */
                    /* try { // try from 039beeb4 to 03abeebf has its CatchHandler @ 039bec8c */
                    /* try { // try from 039beec0 to 03abeec7 has its CatchHandler @ 039beec8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 039beeac with catch @ 039beec8
                       catch(type#2 @ 00000000) { ... } // from try @ 039beec0 with catch @ 039beec8
                        */
  if ((DAT_04838844 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<OVRSkeletonRenderer>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_5406);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<OVRSpatialAnchor>__);
    thunk_FUN_01efb3a4(StringLiteral_4564);
    DAT_04838844 = 1;
  }
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)StringLiteral_5406 + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)StringLiteral_5406)
       ) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(param_2);
    }
    if (param_2[3] != 0) {
      plVar7 = (long *)FUN_0265d924(param_2[3],
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
        uVar9 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        FUN_039b554c(param_1,uVar9);
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
  plVar7 = (long *)(**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
  if (plVar7 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar7 + 0x438))(plVar7,*(undefined8 *)(*plVar7 + 0x440));
    if (param_2[3] != 0) {
      iVar5 = FUN_0265d6c4(param_2[3],*(undefined8 *)StringLiteral_4564);
      iVar6 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
      lVar10 = *(long *)(param_1 + 0x10);
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


