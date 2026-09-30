/*
FUNCTION_NAME: FUN_03902034
ENTRY_POINT: 03902034
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 178
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_8;ray_or_cast_sink_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03902698) */
/* WARNING: Removing unreachable block (ram,0x0390281c) */

void FUN_03902034(long param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 local_88;
  long **pplStack_80;
  undefined8 *local_78;
  undefined8 local_70;
  long *local_68;
  
  if ((DAT_048381db & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__)
    ;
    thunk_FUN_01efb3a4(Method_System_Configuration_ConfigurationElement_Reset__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponents<BaseRaycaster>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_System_Linq_Enumerable_ToList<KeyValuePair<Camera,_List<DrawCommand>>>__
                      );
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToList<ValueTuple<string,_Type>>__);
    DAT_048381db = 1;
  }
  puVar2 = Method_System_Configuration_ConfigurationElement_Reset__;
  puVar1 = Method_UnityEngine_Component_GetComponents<BaseRaycaster>__;
  local_70 = 0;
  local_68 = (long *)0x0;
  lVar12 = *param_2;
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar13 = *(undefined8 *)Method_UnityEngine_Component_GetComponents<BaseRaycaster>__;
  plVar7 = (long *)thunk_FUN_01f116d0(lVar12,uVar13);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc(lVar12,uVar13);
  }
  lVar12 = *plVar7;
  uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) ==
          *(long *)Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__) {
        puVar8 = (undefined8 *)(lVar12 + (long)(*piVar11 + 1) * 0x10 + 0x138);
        goto LAB_0390215c;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar8 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__
                        ,1);
LAB_0390215c:
  iVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar12 = *param_3;
  uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
        puVar8 = (undefined8 *)(lVar12 + (long)(*piVar11 + 0xc) * 0x10 + 0x138);
        goto LAB_039021c0;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar8 = (undefined8 *)FUN_01ecb238(param_3,*(long *)puVar2,0xc);
LAB_039021c0:
  (*(code *)*puVar8)(param_3,(long)iVar6,puVar8[1]);
  lVar12 = *plVar7;
  uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
        puVar8 = (undefined8 *)(lVar12 + (long)(*piVar11 + 9) * 0x10 + 0x138);
        goto LAB_03902220;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,9);
LAB_03902220:
  plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
  puVar5 = Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__;
  puVar4 = Method_System_Linq_Enumerable_ToList<ValueTuple<string,_Type>>__;
  puVar3 = Method_System_Linq_Enumerable_ToList<KeyValuePair<Camera,_List<DrawCommand>>>__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
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
    uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar8 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_039022c0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_039022c0:
    uVar10 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if ((uVar10 & 1) == 0) {
      FUN_01e5485c(&local_88);
      if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar12 = *param_3;
      uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar10 == 0) goto LAB_039027c8;
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      break;
    }
    lVar12 = *param_3;
    uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar12 + (long)(*piVar11 + 10) * 0x10 + 0x138);
          goto LAB_03902320;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(param_3,*(long *)puVar2,10);
LAB_03902320:
    (*(code *)*puVar8)(param_3,0,0,puVar8[1]);
    plVar7 = local_68;
    if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar9 = *local_68;
    plVar14 = *(long **)(param_1 + 0x40);
    lVar12 = *(long *)puVar5;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar12) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0390238c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(local_68,lVar12,0);
LAB_0390238c:
    uVar13 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar14 + 0x188))
              (plVar14,*(undefined8 *)puVar4,uVar13,param_3,*(undefined8 *)(*plVar14 + 400));
    plVar7 = local_68;
    if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar9 = *local_68;
    plVar14 = *(long **)(param_1 + 0x48);
    lVar12 = *(long *)puVar5;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar12) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_03902414;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(local_68,lVar12,1);
LAB_03902414:
    uVar13 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar14 + 0x188))
              (plVar14,*(undefined8 *)puVar3,uVar13,param_3,*(undefined8 *)(*plVar14 + 400));
    lVar12 = *param_3;
    uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar12 + (long)(*piVar11 + 0xb) * 0x10 + 0x138);
          goto LAB_0390249c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(param_3,*(long *)puVar2,0xb);
LAB_0390249c:
    (*(code *)*puVar8)(param_3,0,puVar8[1]);
    plVar7 = local_68;
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
      puVar8 = (undefined8 *)(lVar12 + (long)(*piVar11 + 0xd) * 0x10 + 0x138);
      goto LAB_039027e8;
    }
  }
LAB_039027c8:
  puVar8 = (undefined8 *)FUN_01ecb238(param_3,*(long *)puVar2,0xd);
LAB_039027e8:
  (*(code *)*puVar8)(param_3,puVar8[1]);
  return;
}


