/*
FUNCTION_NAME: FUN_03390ac4
ENTRY_POINT: 03390ac4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_21;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03390fcc) */
/* WARNING: Removing unreachable block (ram,0x03390fc4) */
/* WARNING: Removing unreachable block (ram,0x03390d64) */
/* WARNING: Removing unreachable block (ram,0x03390d78) */
/* WARNING: Removing unreachable block (ram,0x03390fd4) */
/* WARNING: Removing unreachable block (ram,0x03391520) */

void FUN_03390ac4(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  int *piVar13;
  
  if ((DAT_04832221 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>_InteractableUnselected__
                      );
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<long>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<sbyte>__);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<float>__);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<ushort>__);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<uint>__);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<ulong>__);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_IDataWriter_WritePrimitiveArray<bool>__);
    thunk_FUN_01efb3a4(Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<DistanceGrabbable>__);
    DAT_04832221 = 1;
  }
  *(undefined1 *)(param_1 + 0xa0) = 1;
  FUN_03391804(param_1);
  plVar5 = *(long **)(param_1 + 0xb0);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar5 = (long *)(**(code **)(*plVar5 + 0x2a8))(plVar5,param_2,*(undefined8 *)(*plVar5 + 0x2b0));
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  FUN_03391804(param_1);
  if (plVar5 == (long *)0x0) {
LAB_03390fbc:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  bVar1 = *(byte *)(*(long *)Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<long>__ +
                   0x130);
  if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
      *(long *)Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<long>__))
  goto LAB_03390fbc;
  uVar4 = (**(code **)(*plVar5 + 0x218))(plVar5,*(undefined8 *)(*plVar5 + 0x220));
  FUN_0338f7c8(param_1,uVar4);
  uVar6 = (**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
  *(undefined8 *)(param_1 + 0xe8) = uVar6;
  thunk_FUN_01f51358();
  plVar7 = (long *)(**(code **)(*plVar5 + 0x1f8))(plVar5,*(undefined8 *)(*plVar5 + 0x200));
  plVar8 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                       Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<sbyte>__
                                     );
  uVar6 = FUN_034caed0(plVar8,plVar7,0);
  puVar3 = Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<ushort>__;
  while (lVar9 = FUN_03391a94(uVar6,plVar8,*(undefined8 *)puVar3), lVar9 != 0) {
    uVar6 = FUN_03391900(param_1);
  }
  if (plVar8 != (long *)0x0) {
    lVar9 = *plVar8;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar10 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03390ce4;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,0);
LAB_03390ce4:
    (*(code *)*puVar10)(plVar8,puVar10[1]);
  }
  if (plVar7 != (long *)0x0) {
    lVar9 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar10 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03390d4c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_03390d4c:
    (*(code *)*puVar10)(plVar7,puVar10[1]);
  }
  if (plVar5 != (long *)0x0) {
    lVar9 = *plVar5;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar10 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03390dcc;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_03390dcc:
    (*(code *)*puVar10)(plVar5,puVar10[1]);
  }
  FUN_0338f178(param_1);
  uVar12 = FUN_033af0a4(0,*(undefined8 *)(param_1 + 0xf0),0);
  if ((uVar12 & 1) == 0) {
    if ((DAT_04832294 & 1) == 0) {
      thunk_FUN_01efb3a4(Method_Oculus_Interaction_HandGrab_HandGrabInteractor_<Start>b__68_0__);
      DAT_04832294 = 1;
    }
    if ((*(long *)(param_1 + 0x30) == 0) || (*(int *)(*(long *)(param_1 + 0x30) + 0x10) != 200))
    goto LAB_03390f6c;
    FUN_0338f7c8(param_1,0xfffffffc);
    uVar6 = *(undefined8 *)Method_Sirenix_Serialization_IDataWriter_WritePrimitiveArray<bool>__;
    *(undefined8 *)(param_1 + 0xe8) = uVar6;
  }
  else {
    plVar5 = *(long **)(param_1 + 0xf0);
    if (plVar5 == (long *)0x0) {
LAB_03391468:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar6 = (**(code **)(*plVar5 + 0x1a8))
                      (plVar5,*(undefined8 *)
                               Method_UnityEngine_GameObject_GetComponent<DistanceGrabbable>__,
                       *(undefined8 *)(*plVar5 + 0x1b0));
    uVar11 = FUN_033af19c(uVar6,0);
    uVar12 = FUN_0340eec4(uVar11,0);
    if ((uVar12 & 1) != 0) goto LAB_03390f6c;
    plVar5 = *(long **)(param_1 + 0xf0);
    if (plVar5 == (long *)0x0) goto LAB_03391468;
    plVar5 = (long *)(**(code **)(*plVar5 + 0x1a8))
                               (plVar5,*(undefined8 *)
                                        Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<ulong>__
                                ,*(undefined8 *)(*plVar5 + 0x1b0));
    uVar12 = FUN_033af0a4(plVar5,0,0);
    if ((uVar12 & 1) != 0) {
      if (plVar5 == (long *)0x0) goto LAB_03391468;
      uVar4 = (**(code **)(*plVar5 + 600))(plVar5,*(undefined8 *)(*plVar5 + 0x260));
      FUN_0338f7c8(param_1,uVar4);
    }
    if ((DAT_04832294 & 1) == 0) {
      thunk_FUN_01efb3a4(Method_Oculus_Interaction_HandGrab_HandGrabInteractor_<Start>b__68_0__);
      DAT_04832294 = 1;
    }
    if ((*(long *)(param_1 + 0x30) != 0) && (*(int *)(*(long *)(param_1 + 0x30) + 0x10) == 200)) {
      FUN_0338f7c8(param_1,0xffffffff);
    }
    uVar12 = FUN_0340eec4(*(undefined8 *)(param_1 + 0xe8),0);
    if ((uVar12 & 1) == 0) goto LAB_03390f6c;
    uVar6 = FUN_0340f2f0(*(undefined8 *)
                          Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<uint>__,plVar5
                         ,uVar6,0);
    *(undefined8 *)(param_1 + 0xe8) = uVar6;
  }
  thunk_FUN_01f51358(param_1 + 0xe8,uVar6);
LAB_03390f6c:
  puVar2 = 
  Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>_InteractableUnselected__
  ;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  puVar3 = Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<float>__;
  uVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_034f6024(uVar6,param_1,*(undefined8 *)puVar3,0);
  FUN_0339040c(param_1,uVar6);
  return;
}


