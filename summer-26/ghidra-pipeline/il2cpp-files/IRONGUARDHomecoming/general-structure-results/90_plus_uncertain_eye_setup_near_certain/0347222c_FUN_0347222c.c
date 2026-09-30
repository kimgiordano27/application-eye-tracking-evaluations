/*
FUNCTION_NAME: FUN_0347222c
ENTRY_POINT: 0347222c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0347222c(long param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  
  if ((DAT_048329f9 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_SerializationUtility_GetCachedReader__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    thunk_FUN_01efb3a4(Method_System_Reflection_SignatureType_GetEvent__);
    thunk_FUN_01efb3a4(Method_System_Reflection_SignatureType_GetField__);
    thunk_FUN_01efb3a4(Method_System_Reflection_SignatureType_GetFields__);
    thunk_FUN_01efb3a4(Method_System_Reflection_SignatureType_GetGenericParameterConstraints__);
    DAT_048329f9 = 1;
  }
  puVar1 = Method_Sirenix_Serialization_SerializationUtility_GetCachedReader__;
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar9 = thunk_FUN_01f117cc();
    uVar10 = thunk_FUN_01efb3a4(Method_System_Text_DecoderFallbackBuffer_InternalFallback__);
    FUN_034efd20(uVar9,uVar10,0);
    uVar10 = thunk_FUN_01efb3a4(Method_System_Reflection_SignatureType_GetInterfaces__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar9,uVar10);
  }
  lVar5 = *(long *)Method_Sirenix_Serialization_SerializationUtility_GetCachedReader__;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar5 = *(long *)puVar1;
  }
  FUN_034898b4(param_2,**(undefined8 **)(lVar5 + 0xb8),0);
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_03477a2c(param_2,*(undefined8 *)Method_System_Reflection_SignatureType_GetField__,
                 *(long *)(param_1 + 0x18),0);
  }
  if ((param_4 == 0x80) && (*(long *)(param_1 + 0x20) != 0)) {
    FUN_03477a2c(param_2,*(undefined8 *)
                          Method_System_Reflection_SignatureType_GetGenericParameterConstraints__,
                 *(long *)(param_1 + 0x20),0);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_03477a2c(param_2,*(undefined8 *)Method_System_Reflection_SignatureType_GetEvent__,
                 *(long *)(param_1 + 0x28),0);
  }
  if (*(char *)(param_1 + 0x30) != '\0') {
    FUN_0348aba4(param_2,*(undefined8 *)Method_System_Reflection_SignatureType_GetFields__,1,0);
  }
  plVar6 = *(long **)(param_1 + 0x10);
  if ((plVar6 == (long *)0x0) ||
     (iVar4 = (**(code **)(*plVar6 + 0x3c8))(plVar6,*(undefined8 *)(*plVar6 + 0x3d0)), iVar4 < 1)) {
    return;
  }
  plVar6 = *(long **)(param_1 + 0x10);
  if ((plVar6 == (long *)0x0) ||
     (plVar6 = (long *)(**(code **)(*plVar6 + 0x328))(plVar6,*(undefined8 *)(*plVar6 + 0x330)),
     puVar3 = Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__,
     puVar2 = Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__,
     puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__,
     plVar6 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar5 = *plVar6;
    uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03472420;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_03472420:
    uVar12 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if ((uVar12 & 1) == 0) {
      return;
    }
    lVar11 = *plVar6;
    lVar5 = *(long *)puVar3;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar5) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0347247c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,lVar5,0);
LAB_0347247c:
    plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
    lVar11 = *plVar6;
    lVar5 = *(long *)puVar3;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar5) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_034724dc;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,lVar5,1);
LAB_034724dc:
    uVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if ((plVar8 != (long *)0x0) && (*plVar8 != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar8,*(long *)puVar2,uVar9);
    }
    FUN_03477a2c(param_2,plVar8,uVar9,0);
  } while( true );
}


