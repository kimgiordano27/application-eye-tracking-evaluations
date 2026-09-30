/*
FUNCTION_NAME: System.Runtime.Serialization.Formatters.Binary.Converter$$ToType
ENTRY_POINT: 033910e8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 118
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_18;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;negative_system_io_serialization_or_json_helper_without_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03391580) */
/* WARNING: Removing unreachable block (ram,0x03390de0) */
/* WARNING: Removing unreachable block (ram,0x03391574) */
/* WARNING: Removing unreachable block (ram,0x03391490) */
/* WARNING: Removing unreachable block (ram,0x033914a4) */
/* WARNING: Removing unreachable block (ram,0x03391548) */
/* WARNING: Removing unreachable block (ram,0x03391520) */

void System_Runtime_Serialization_Formatters_Binary_Converter__ToType
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long in_x9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  long lVar11;
  int unaff_w23;
  long unaff_x24;
  long *unaff_x26;
  
  if (in_x9 != 0) {
    piVar10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == param_3) {
        puVar5 = (undefined8 *)(param_1 + (long)*piVar10 * 0x10 + 0x138);
        goto code_r0x03391128;
      }
      in_x9 = in_x9 + -1;
      piVar10 = piVar10 + 4;
    } while (in_x9 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ecb238();
code_r0x03391128:
  (*(code *)*puVar5)();
  if (unaff_x24 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990();
  }
  if (unaff_w23 == 1) {
    plVar6 = (long *)__cxa_begin_catch();
    lVar11 = *plVar6;
    __cxa_end_catch();
    if (unaff_x20 != (long *)0x0) {
      lVar9 = *unaff_x20;
      uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar2 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x26) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03390dcc;
          }
          uVar2 = uVar2 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar2 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238();
LAB_03390dcc:
      (*(code *)*puVar5)();
    }
    if (lVar11 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01eed990(lVar11);
    }
  }
  else {
    if (unaff_x20 != (long *)0x0) {
      lVar11 = *unaff_x20;
      uVar2 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar2 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x26) {
            puVar5 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
            goto FUN_033911b0;
          }
          uVar2 = uVar2 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar2 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238();
FUN_033911b0:
      (*(code *)*puVar5)();
    }
    if (unaff_w23 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_01fbfd14();
    }
    puVar5 = (undefined8 *)__cxa_begin_catch();
    uVar3 = thunk_FUN_01efb3a4(Method_Sirenix_Serialization_IDataWriter_WritePrimitiveArray<byte>__)
    ;
    uVar2 = thunk_FUN_01ef6ec0(uVar3,*(undefined8 *)*puVar5);
    if ((uVar2 & 1) == 0) {
      uVar3 = thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToList<Material>__);
      uVar2 = thunk_FUN_01ef6ec0(uVar3,*(undefined8 *)*puVar5);
      if ((uVar2 & 1) != 0) {
        plVar6 = (long *)*puVar5;
        __cxa_end_catch();
        if (plVar6 == (long *)0x0) goto LAB_03391468;
        if ((*(uint *)((long)plVar6 + 0x8c) | 8) != 0xe) {
          uVar3 = (**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
          *(undefined8 *)(unaff_x19 + 0xd0) = uVar3;
          thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0xd0),uVar3);
          FUN_0338f7c8();
          uVar3 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
          *(undefined8 *)(unaff_x19 + 0xe8) = uVar3;
          thunk_FUN_01f51358();
          FUN_033a2f1c(plVar6,0);
          plVar6 = (long *)plVar6[0x12];
          lVar11 = thunk_FUN_01efb3a4(
                                     Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<long>__
                                     );
          if (plVar6 != (long *)0x0) {
            lVar9 = *plVar6;
            if ((*(byte *)(lVar11 + 0x130) <= *(byte *)(lVar9 + 0x130)) &&
               (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) ==
                lVar11)) {
              (**(code **)(lVar9 + 0x218))(plVar6,*(undefined8 *)(lVar9 + 0x220));
              FUN_0338f7c8();
              plVar6 = (long *)(**(code **)(*plVar6 + 0x1f8))
                                         (plVar6,*(undefined8 *)(*plVar6 + 0x200));
              if (plVar6 != (long *)0x0) {
                thunk_FUN_01efb3a4(
                                  Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<sbyte>__
                                  );
                plVar7 = (long *)thunk_FUN_01f117cc();
                FUN_034caed0(plVar7,plVar6,0);
                if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                uVar3 = (**(code **)(*plVar7 + 0x1f8))(plVar7,*(undefined8 *)(*plVar7 + 0x200));
                uVar2 = FUN_0340eec4(uVar3,0);
                if ((uVar2 & 1) == 0) {
                  FUN_03391c3c();
                }
                lVar11 = thunk_FUN_01efb3a4(
                                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                           );
                lVar9 = *plVar7;
                uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar2 != 0) {
                  piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar10 + -2) == lVar11) {
                      puVar5 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                      goto LAB_03391478;
                    }
                    uVar2 = uVar2 - 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar2 != 0);
                }
                puVar5 = (undefined8 *)FUN_01ecb238(plVar7,lVar11,0);
LAB_03391478:
                (*(code *)*puVar5)(plVar7,puVar5[1]);
              }
              if (plVar6 != (long *)0x0) {
                lVar11 = thunk_FUN_01efb3a4(
                                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                           );
                lVar9 = *plVar6;
                uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar2 != 0) {
                  piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar10 + -2) == lVar11) {
                      puVar5 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                      goto LAB_03391504;
                    }
                    uVar2 = uVar2 - 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar2 != 0);
                }
                puVar5 = (undefined8 *)FUN_01ecb238(plVar6,lVar11,0);
LAB_03391504:
                (*(code *)*puVar5)(plVar6,puVar5[1]);
              }
            }
          }
        }
        goto LAB_03390de8;
      }
      uVar3 = thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
      uVar2 = thunk_FUN_01ef6ec0(uVar3,*(undefined8 *)*puVar5);
      if ((uVar2 & 1) == 0) {
        puVar8 = (undefined8 *)__cxa_allocate_exception(8);
        *puVar8 = *puVar5;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar8,&
                           PTR_Method_System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_get_Count___042b3198
                    ,0);
      }
      plVar6 = (long *)*puVar5;
      __cxa_end_catch();
      if (plVar6 == (long *)0x0) goto LAB_03391468;
      uVar3 = (**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
      *(undefined8 *)(unaff_x19 + 0xd0) = uVar3;
      thunk_FUN_01f51358();
      FUN_0338f7c8();
      uVar3 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
    }
    else {
      plVar6 = (long *)*puVar5;
      __cxa_end_catch();
      if (plVar6 == (long *)0x0) goto LAB_03391468;
      uVar3 = (**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
      *(undefined8 *)(unaff_x19 + 0xd0) = uVar3;
      thunk_FUN_01f51358();
      FUN_0338f7c8();
      uVar3 = thunk_FUN_01efb3a4(
                                Method_Sirenix_Serialization_IDataWriter_WritePrimitiveArray<char>__
                                );
    }
    *(undefined8 *)(unaff_x19 + 0xe8) = uVar3;
    thunk_FUN_01f51358();
    FUN_033a2f1c(plVar6,0);
  }
LAB_03390de8:
  FUN_0338f178();
  uVar2 = FUN_033af0a4(0,*(undefined8 *)(unaff_x19 + 0xf0),0);
  if ((uVar2 & 1) == 0) {
    if ((DAT_04832294 & 1) == 0) {
      thunk_FUN_01efb3a4(Method_Oculus_Interaction_HandGrab_HandGrabInteractor_<Start>b__68_0__);
      DAT_04832294 = 1;
    }
    if ((*(long *)(unaff_x19 + 0x30) == 0) || (*(int *)(*(long *)(unaff_x19 + 0x30) + 0x10) != 200))
    goto LAB_03390f6c;
    FUN_0338f7c8();
    uVar3 = *(undefined8 *)Method_Sirenix_Serialization_IDataWriter_WritePrimitiveArray<bool>__;
    *(undefined8 *)(unaff_x19 + 0xe8) = uVar3;
  }
  else {
    plVar6 = *(long **)(unaff_x19 + 0xf0);
    if (plVar6 == (long *)0x0) {
LAB_03391468:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar3 = (**(code **)(*plVar6 + 0x1a8))
                      (plVar6,*(undefined8 *)
                               Method_UnityEngine_GameObject_GetComponent<DistanceGrabbable>__,
                       *(undefined8 *)(*plVar6 + 0x1b0));
    uVar4 = FUN_033af19c(uVar3,0);
    uVar2 = FUN_0340eec4(uVar4,0);
    if ((uVar2 & 1) != 0) goto LAB_03390f6c;
    plVar6 = *(long **)(unaff_x19 + 0xf0);
    if (plVar6 == (long *)0x0) goto LAB_03391468;
    plVar6 = (long *)(**(code **)(*plVar6 + 0x1a8))
                               (plVar6,*(undefined8 *)
                                        Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<ulong>__
                                ,*(undefined8 *)(*plVar6 + 0x1b0));
    uVar2 = FUN_033af0a4(plVar6,0,0);
    if ((uVar2 & 1) != 0) {
      if (plVar6 == (long *)0x0) goto LAB_03391468;
      (**(code **)(*plVar6 + 600))(plVar6,*(undefined8 *)(*plVar6 + 0x260));
      FUN_0338f7c8();
    }
    if ((DAT_04832294 & 1) == 0) {
      thunk_FUN_01efb3a4(Method_Oculus_Interaction_HandGrab_HandGrabInteractor_<Start>b__68_0__);
      DAT_04832294 = 1;
    }
    if ((*(long *)(unaff_x19 + 0x30) != 0) && (*(int *)(*(long *)(unaff_x19 + 0x30) + 0x10) == 200))
    {
      FUN_0338f7c8();
    }
    uVar2 = FUN_0340eec4(*(undefined8 *)(unaff_x19 + 0xe8),0);
    if ((uVar2 & 1) == 0) goto LAB_03390f6c;
    uVar3 = FUN_0340f2f0(*(undefined8 *)
                          Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<uint>__,plVar6
                         ,uVar3,0);
    *(undefined8 *)(unaff_x19 + 0xe8) = uVar3;
  }
  thunk_FUN_01f51358(unaff_x19 + 0xe8,uVar3);
LAB_03390f6c:
  puVar1 = 
  Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>_InteractableUnselected__
  ;
  *(undefined1 *)(unaff_x19 + 0xa0) = 0;
  thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_034f6024();
  FUN_0339040c();
  return;
}


