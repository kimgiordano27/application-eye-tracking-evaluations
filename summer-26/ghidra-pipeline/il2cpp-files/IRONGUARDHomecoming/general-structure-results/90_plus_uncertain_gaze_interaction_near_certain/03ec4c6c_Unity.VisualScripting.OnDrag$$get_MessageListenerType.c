/*
FUNCTION_NAME: Unity.VisualScripting.OnDrag$$get_MessageListenerType
ENTRY_POINT: 03ec4c6c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 170
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;ray_or_cast_sink_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_3
*/


void Unity_VisualScripting_OnDrag__get_MessageListenerType(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *plVar13;
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__);
  thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponents<BaseRaycaster>__);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
  *(undefined1 *)(unaff_x22 + 0xc91) = 1;
  puVar3 = Method_UnityEngine_Component_GetComponents<BaseRaycaster>__;
  if (unaff_x21 != (long *)0x0) {
    lVar9 = *unaff_x21;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
                    /* try { // try from 03ec4cc0 to 03fc4cc3 has its CatchHandler @ 03ec4ccc */
                    /* try { // try from 03ec4cc4 to 03fc4ce7 has its CatchHandler @ 03ec4a54 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03ec4b8c with catch @ 03ec4cc8
                        */
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_UnityEngine_Component_GetComponents<BaseRaycaster>__) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar12 + 9) * 0x10 + 0x138);
          goto LAB_03ec4cf8;
        }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03ec4cc0 with catch @ 03ec4ccc
                        */
        uVar11 = uVar11 - 1;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03ec4b60 with catch @ 03ec4cd0
                        */
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238();
LAB_03ec4cf8:
    plVar6 = (long *)(*(code *)*puVar5)();
    puVar4 = Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__;
    puVar2 = Method_UnityEngine_Camera_GetAllCameras__;
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar6 != (long *)0x0) {
      do {
        lVar9 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_03ec4d70;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_03ec4d70:
        uVar11 = (*(code *)*puVar5)(plVar6,puVar5[1]);
        if ((uVar11 & 1) == 0) {
          return;
        }
        lVar10 = *plVar6;
        lVar9 = *(long *)puVar4;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar9) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_03ec4dcc;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(plVar6,lVar9,0);
LAB_03ec4dcc:
        (*(code *)*puVar5)(plVar6,puVar5[1]);
        lVar10 = *plVar6;
        lVar9 = *(long *)puVar4;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar9) {
              puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_03ec4e2c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(plVar6,lVar9,1);
LAB_03ec4e2c:
        (*(code *)*puVar5)(plVar6,puVar5[1]);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar2);
        }
        uVar7 = FUN_03ec4ae4();
        uVar8 = FUN_03ec4ae4();
        plVar13 = (long *)*unaff_x20;
        if (plVar13 == (long *)0x0) break;
        lVar9 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
              puVar5 = (undefined8 *)(lVar9 + (long)(*piVar12 + 5) * 0x10 + 0x138);
              goto LAB_03ec4ec8;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar3,5);
LAB_03ec4ec8:
        (*(code *)*puVar5)(plVar13,uVar7,uVar8,puVar5[1]);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


