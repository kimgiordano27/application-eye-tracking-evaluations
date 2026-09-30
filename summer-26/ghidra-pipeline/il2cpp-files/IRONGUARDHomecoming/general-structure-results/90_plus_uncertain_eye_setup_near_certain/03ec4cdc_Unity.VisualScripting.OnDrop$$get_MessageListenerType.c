/*
FUNCTION_NAME: Unity.VisualScripting.OnDrop$$get_MessageListenerType
ENTRY_POINT: 03ec4cdc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Unity_VisualScripting_OnDrop__get_MessageListenerType(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 *unaff_x20;
  long *plVar12;
  long *unaff_x25;
  
  puVar4 = (undefined8 *)FUN_01ecb238();
  plVar5 = (long *)(*(code *)*puVar4)();
  puVar3 = Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__;
  puVar2 = Method_UnityEngine_Camera_GetAllCameras__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar5 == (long *)0x0) {
LAB_03ec4efc:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar8 = *plVar5;
                    /* try { // try from 03ec4d28 to 03fc4d2f has its CatchHandler @ 03ec4d30 */
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03ec4d14 with catch @ 03ec4d30
                       catch(type#2 @ 00000000) { ... } // from try @ 03ec4d28 with catch @ 03ec4d30
                        */
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03ec4d70;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_03ec4d70:
    uVar10 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar10 & 1) == 0) {
      return;
    }
    lVar9 = *plVar5;
    lVar8 = *(long *)puVar3;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03ec4dcc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,lVar8,0);
LAB_03ec4dcc:
    (*(code *)*puVar4)(plVar5,puVar4[1]);
    lVar9 = *plVar5;
    lVar8 = *(long *)puVar3;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar4 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_03ec4e2c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,lVar8,1);
LAB_03ec4e2c:
    (*(code *)*puVar4)(plVar5,puVar4[1]);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar2);
    }
    uVar6 = FUN_03ec4ae4();
    uVar7 = FUN_03ec4ae4();
    plVar12 = (long *)*unaff_x20;
    if (plVar12 == (long *)0x0) goto LAB_03ec4efc;
    lVar8 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x25) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar11 + 5) * 0x10 + 0x138);
          goto LAB_03ec4ec8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar12,*unaff_x25,5);
LAB_03ec4ec8:
    (*(code *)*puVar4)(plVar12,uVar6,uVar7,puVar4[1]);
  } while( true );
}


