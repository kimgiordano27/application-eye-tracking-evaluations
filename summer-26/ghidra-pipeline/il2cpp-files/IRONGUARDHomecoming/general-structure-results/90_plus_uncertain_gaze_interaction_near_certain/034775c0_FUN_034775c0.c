/*
FUNCTION_NAME: FUN_034775c0
ENTRY_POINT: 034775c0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 184
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_8;ray_or_cast_sink_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03477964) */

void FUN_034775c0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  
  if ((DAT_04832a3a & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToList<BezierKnot>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponents<BaseRaycaster>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    thunk_FUN_01efb3a4(Method_System_Reflection_SignatureType_get_MetadataToken__);
    thunk_FUN_01efb3a4(Method_System_Reflection_SignatureType_get_Module__);
    thunk_FUN_01efb3a4(Method_System_Reflection_SignatureType_get_ReflectedType__);
    thunk_FUN_01efb3a4(Method_System_Reflection_SignatureType_get_TypeHandle__);
    thunk_FUN_01efb3a4(Method_Mono_Globalization_Unicode_SimpleCollator_GetTailContraction__);
    thunk_FUN_01efb3a4(Method_Mono_Globalization_Unicode_SimpleCollator_IndexOf__);
    thunk_FUN_01efb3a4(Method_Mono_Globalization_Unicode_SimpleCollator_LastIndexOf__);
    DAT_04832a3a = 1;
  }
  puVar6 = Method_Mono_Globalization_Unicode_SimpleCollator_LastIndexOf__;
  puVar5 = Method_Mono_Globalization_Unicode_SimpleCollator_IndexOf__;
  puVar4 = Method_System_Reflection_SignatureType_get_TypeHandle__;
  puVar3 = Method_System_Reflection_SignatureType_get_ReflectedType__;
  puVar2 = Method_System_Reflection_SignatureType_get_Module__;
  puVar1 = Method_System_Reflection_SignatureType_get_MetadataToken__;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_03477a2c(param_2,*(undefined8 *)
                        Method_Mono_Globalization_Unicode_SimpleCollator_GetTailContraction__,
               *(undefined8 *)(param_1 + 0x18));
  FUN_03477a2c(param_2,*(undefined8 *)puVar5,*(undefined8 *)(param_1 + 0x20));
  FUN_03477a2c(param_2,*(undefined8 *)puVar4,*(undefined8 *)(param_1 + 0x30));
  FUN_03477a2c(param_2,*(undefined8 *)puVar2,*(undefined8 *)(param_1 + 0x28));
  FUN_03477a2c(param_2,*(undefined8 *)puVar6,*(undefined8 *)(param_1 + 0x40));
  FUN_03477a2c(param_2,*(undefined8 *)puVar3,*(undefined8 *)(param_1 + 0x10));
  FUN_03477a2c(param_2,*(undefined8 *)puVar1,*(undefined8 *)(param_1 + 0x50));
  plVar14 = *(long **)(param_1 + 0x60);
  if (plVar14 == (long *)0x0) {
    return;
  }
  lVar10 = *plVar14;
  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) ==
          *(long *)Method_UnityEngine_Component_GetComponents<BaseRaycaster>__) {
        puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 9) * 0x10 + 0x138);
        goto LAB_0347778c;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar7 = (undefined8 *)
           FUN_01ecb238(plVar14,*(long *)Method_UnityEngine_Component_GetComponents<BaseRaycaster>__
                        ,9);
LAB_0347778c:
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar14 = (long *)(*(code *)*puVar7)(plVar14,puVar7[1]);
  puVar4 = Method_System_Linq_Enumerable_ToList<BezierKnot>__;
  puVar3 = Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar11 = *plVar14;
    lVar10 = *(long *)puVar2;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0347780c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar14,lVar10,0);
LAB_0347780c:
    uVar12 = (*(code *)*puVar7)(plVar14,puVar7[1]);
    if ((uVar12 & 1) == 0) {
      plVar14 = (long *)thunk_FUN_01f116d0(plVar14,*(undefined8 *)puVar1);
      if (plVar14 == (long *)0x0) {
        return;
      }
      lVar11 = *plVar14;
      lVar10 = *(long *)puVar1;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 == 0) goto LAB_03477904;
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    lVar11 = *plVar14;
    lVar10 = *(long *)puVar2;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_0347786c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar14,lVar10,1);
LAB_0347786c:
    plVar8 = (long *)(*(code *)*puVar7)(plVar14,puVar7[1]);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)puVar4 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    plVar9 = (long *)thunk_FUN_01f11920();
    plVar8 = (long *)*plVar9;
    if ((plVar8 != (long *)0x0) && (*plVar8 != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar8,*(long *)puVar3,plVar9[1]);
    }
    FUN_03477a2c(param_2);
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar13 + -2) == lVar10) {
      puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03477920;
    }
  }
LAB_03477904:
  puVar7 = (undefined8 *)FUN_01ecb238(plVar14,lVar10,0);
LAB_03477920:
  (*(code *)*puVar7)(plVar14,puVar7[1]);
  return;
}


