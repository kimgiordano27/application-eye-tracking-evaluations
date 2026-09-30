/*
FUNCTION_NAME: FUN_03901584
ENTRY_POINT: 03901584
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 184
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_12;ray_or_cast_sink_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03901a68) */
/* WARNING: Removing unreachable block (ram,0x03901c80) */
/* WARNING: Removing unreachable block (ram,0x03901e1c) */

void FUN_03901584(long param_1,long *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  int *piVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined8 local_88;
  long **pplStack_80;
  undefined8 *local_78;
  undefined8 local_70;
  long *local_68;
  
  if ((DAT_048381d9 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Configuration_ConfigurationElement_Reset__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponents<BaseRaycaster>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToDictionary<CreepUnit,_int,_CreepUnit>__);
    thunk_FUN_01efb3a4(
                      Method_System_Linq_Enumerable_ToList<KeyValuePair<Camera,_List<DrawCommand>>>__
                      );
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToList<ValueTuple<string,_Type>>__);
    DAT_048381d9 = 1;
  }
  puVar3 = Method_System_Configuration_ConfigurationElement_Reset__;
  puVar2 = Method_UnityEngine_Component_GetComponents<BaseRaycaster>__;
  local_70 = 0;
  local_68 = (long *)0x0;
  lVar12 = *param_2;
  if (lVar12 == 0) {
    plVar7 = (long *)0x0;
  }
  else {
    uVar14 = *(undefined8 *)Method_UnityEngine_Component_GetComponents<BaseRaycaster>__;
    plVar7 = (long *)thunk_FUN_01f116d0(lVar12,uVar14);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(lVar12,uVar14);
    }
  }
  uVar8 = FUN_034b298c(*(undefined8 *)(param_1 + 0x60),0,0);
  if ((uVar8 & 1) != 0) {
    plVar9 = *(long **)(param_1 + 0x60);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    auVar15 = (**(code **)(*plVar9 + 0x308))(plVar9,*param_2,0,*(undefined8 *)(*plVar9 + 0x310));
    lVar12 = auVar15._0_8_;
    if (lVar12 != 0) {
      plVar9 = *(long **)(param_1 + 0x40);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(0,auVar15._8_8_,lVar12);
      }
      (**(code **)(*plVar9 + 0x188))
                (plVar9,*(undefined8 *)
                         Method_System_Linq_Enumerable_ToDictionary<CreepUnit,_int,_CreepUnit>__,
                 lVar12,param_3,*(undefined8 *)(*plVar9 + 400));
    }
  }
  plVar9 = *(long **)(param_1 + 0x68);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar9 = (long *)(**(code **)(*plVar9 + 0x308))
                             (plVar9,*param_2,0,*(undefined8 *)(*plVar9 + 0x310));
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(long *)(*plVar9 + 0x40) !=
      *(long *)(*(long *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__ + 0x40
               )) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc();
  }
  lVar13 = *(long *)puVar3;
  piVar10 = (int *)thunk_FUN_01f11920();
  lVar12 = *param_3;
  iVar1 = *piVar10;
  uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar8 != 0) {
    piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar13) {
        puVar11 = (undefined8 *)(lVar12 + (long)(*piVar10 + 0xc) * 0x10 + 0x138);
        goto LAB_03901774;
      }
      uVar8 = uVar8 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar8 != 0);
  }
  puVar11 = (undefined8 *)FUN_01ecb238(param_3,lVar13,0xc);
LAB_03901774:
  (*(code *)*puVar11)(param_3,(long)iVar1,puVar11[1]);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar12 = *plVar7;
  uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar8 != 0) {
    piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
        puVar11 = (undefined8 *)(lVar12 + (long)(*piVar10 + 9) * 0x10 + 0x138);
        goto LAB_039017d8;
      }
      uVar8 = uVar8 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar8 != 0);
  }
  puVar11 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,9);
LAB_039017d8:
  plVar7 = (long *)(*(code *)*puVar11)(plVar7,puVar11[1]);
  puVar6 = Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__;
  puVar5 = Method_System_Linq_Enumerable_ToList<ValueTuple<string,_Type>>__;
  puVar4 = Method_System_Linq_Enumerable_ToList<KeyValuePair<Camera,_List<DrawCommand>>>__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  pplStack_80 = &local_68;
  local_78 = &local_70;
  local_88 = 0;
  do {
    local_68 = plVar7;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar12 = *plVar7;
    uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar11 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03901874;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_03901874:
    uVar8 = (*(code *)*puVar11)(plVar7,puVar11[1]);
    if ((uVar8 & 1) == 0) {
      FUN_01e5485c(&local_88);
      if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar12 = *param_3;
      uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar8 == 0) goto LAB_03901dc8;
      piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      break;
    }
    lVar12 = *param_3;
    uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar11 = (undefined8 *)(lVar12 + (long)(*piVar10 + 10) * 0x10 + 0x138);
          goto LAB_039018d4;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238(param_3,*(long *)puVar3,10);
LAB_039018d4:
    (*(code *)*puVar11)(param_3,0,0,puVar11[1]);
    plVar7 = local_68;
    if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar13 = *local_68;
    plVar9 = *(long **)(param_1 + 0x48);
    lVar12 = *(long *)puVar6;
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar12) {
          puVar11 = (undefined8 *)(lVar13 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03901940;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238(local_68,lVar12,0);
LAB_03901940:
    uVar14 = (*(code *)*puVar11)(plVar7,puVar11[1]);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar9 + 0x188))
              (plVar9,*(undefined8 *)puVar5,uVar14,param_3,*(undefined8 *)(*plVar9 + 400));
    plVar7 = local_68;
    if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar13 = *local_68;
    plVar9 = *(long **)(param_1 + 0x50);
    lVar12 = *(long *)puVar6;
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar12) {
          puVar11 = (undefined8 *)(lVar13 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_039019c8;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238(local_68,lVar12,1);
LAB_039019c8:
    uVar14 = (*(code *)*puVar11)(plVar7,puVar11[1]);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar9 + 0x188))
              (plVar9,*(undefined8 *)puVar4,uVar14,param_3,*(undefined8 *)(*plVar9 + 400));
    lVar12 = *param_3;
    uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar11 = (undefined8 *)(lVar12 + (long)(*piVar10 + 0xb) * 0x10 + 0x138);
          goto LAB_03901a4c;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238(param_3,*(long *)puVar3,0xb);
LAB_03901a4c:
    (*(code *)*puVar11)(param_3,0,puVar11[1]);
    plVar7 = local_68;
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar10 = piVar10 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
      puVar11 = (undefined8 *)(lVar12 + (long)(*piVar10 + 0xd) * 0x10 + 0x138);
      goto LAB_03901de8;
    }
  }
LAB_03901dc8:
  puVar11 = (undefined8 *)FUN_01ecb238(param_3,*(long *)puVar3,0xd);
LAB_03901de8:
  (*(code *)*puVar11)(param_3,puVar11[1]);
  return;
}


