/*
FUNCTION_NAME: FUN_033911b0
ENTRY_POINT: 033911b0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 168
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_18;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03391574) */
/* WARNING: Removing unreachable block (ram,0x03391490) */
/* WARNING: Removing unreachable block (ram,0x033914a4) */
/* WARNING: Removing unreachable block (ram,0x03391580) */
/* WARNING: Removing unreachable block (ram,0x03391520) */

void FUN_033911b0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long *plVar11;
  long unaff_x21;
  int unaff_w23;
  
  (*(code *)*param_1)();
  if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990();
  }
  if (unaff_w23 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_01fbfd14();
  }
  puVar3 = (undefined8 *)__cxa_begin_catch();
  uVar4 = thunk_FUN_01efb3a4(Method_Sirenix_Serialization_IDataWriter_WritePrimitiveArray<byte>__);
  uVar5 = thunk_FUN_01ef6ec0(uVar4,*(undefined8 *)*puVar3);
  if ((uVar5 & 1) == 0) {
    uVar4 = thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToList<Material>__);
    uVar5 = thunk_FUN_01ef6ec0(uVar4,*(undefined8 *)*puVar3);
    if ((uVar5 & 1) == 0) {
      uVar4 = thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
      uVar5 = thunk_FUN_01ef6ec0(uVar4,*(undefined8 *)*puVar3);
      if ((uVar5 & 1) == 0) {
        puVar8 = (undefined8 *)__cxa_allocate_exception(8);
        *puVar8 = *puVar3;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar8,&
                           PTR_Method_System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_get_Count___042b3198
                    ,0);
      }
      plVar11 = (long *)*puVar3;
      __cxa_end_catch();
      if (plVar11 == (long *)0x0) goto LAB_03391468;
      uVar4 = (**(code **)(*plVar11 + 0x1d8))(plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
      *(undefined8 *)(unaff_x19 + 0xd0) = uVar4;
      thunk_FUN_01f51358();
      FUN_0338f7c8();
      uVar4 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
      goto LAB_03391448;
    }
    plVar11 = (long *)*puVar3;
    __cxa_end_catch();
    if (plVar11 == (long *)0x0) goto LAB_03391468;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0339116c with catch @ 03391264
                       try { // try from 03391264 to 0349127b has its CatchHandler @ 03391124 */
    if ((*(uint *)((long)plVar11 + 0x8c) | 8) != 0xe) {
                    /* try { // try from 0339127c to 03491293 has its CatchHandler @ 03391300 */
      uVar4 = (**(code **)(*plVar11 + 0x1d8))(plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
      *(undefined8 *)(unaff_x19 + 0xd0) = uVar4;
      thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0xd0),uVar4);
                    /* try { // try from 03391294 to 034912ef has its CatchHandler @ 03391124 */
      FUN_0338f7c8();
      uVar4 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
      *(undefined8 *)(unaff_x19 + 0xe8) = uVar4;
      thunk_FUN_01f51358();
      FUN_033a2f1c(plVar11,0);
      plVar11 = (long *)plVar11[0x12];
      lVar6 = thunk_FUN_01efb3a4(Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<long>__
                                );
      if (plVar11 != (long *)0x0) {
        lVar9 = *plVar11;
        if ((*(byte *)(lVar6 + 0x130) <= *(byte *)(lVar9 + 0x130)) &&
           (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) == lVar6))
        {
          (**(code **)(lVar9 + 0x218))(plVar11,*(undefined8 *)(lVar9 + 0x220));
          FUN_0338f7c8();
          plVar11 = (long *)(**(code **)(*plVar11 + 0x1f8))
                                      (plVar11,*(undefined8 *)(*plVar11 + 0x200));
          if (plVar11 != (long *)0x0) {
            thunk_FUN_01efb3a4(Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<sbyte>__)
            ;
            plVar7 = (long *)thunk_FUN_01f117cc();
            FUN_034caed0(plVar7,plVar11,0);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar4 = (**(code **)(*plVar7 + 0x1f8))(plVar7,*(undefined8 *)(*plVar7 + 0x200));
            uVar5 = FUN_0340eec4(uVar4,0);
            if ((uVar5 & 1) == 0) {
              FUN_03391c3c();
            }
            lVar6 = thunk_FUN_01efb3a4(
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                      );
            lVar9 = *plVar7;
            uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar5 != 0) {
              piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == lVar6) {
                  puVar3 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_03391478;
                }
                uVar5 = uVar5 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar5 != 0);
            }
            puVar3 = (undefined8 *)FUN_01ecb238(plVar7,lVar6,0);
LAB_03391478:
            (*(code *)*puVar3)(plVar7,puVar3[1]);
          }
          if (plVar11 != (long *)0x0) {
            lVar6 = thunk_FUN_01efb3a4(
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                      );
            lVar9 = *plVar11;
            uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar5 != 0) {
              piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == lVar6) {
                  puVar3 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_03391504;
                }
                uVar5 = uVar5 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar5 != 0);
            }
            puVar3 = (undefined8 *)FUN_01ecb238(plVar11,lVar6,0);
LAB_03391504:
            (*(code *)*puVar3)(plVar11,puVar3[1]);
          }
        }
      }
    }
  }
  else {
    plVar11 = (long *)*puVar3;
    __cxa_end_catch();
    if (plVar11 == (long *)0x0) goto LAB_03391468;
    uVar4 = (**(code **)(*plVar11 + 0x1d8))(plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
    *(undefined8 *)(unaff_x19 + 0xd0) = uVar4;
    thunk_FUN_01f51358();
    FUN_0338f7c8();
    uVar4 = thunk_FUN_01efb3a4(Method_Sirenix_Serialization_IDataWriter_WritePrimitiveArray<char>__)
    ;
LAB_03391448:
    *(undefined8 *)(unaff_x19 + 0xe8) = uVar4;
    thunk_FUN_01f51358();
    FUN_033a2f1c(plVar11,0);
  }
  FUN_0338f178();
  uVar5 = FUN_033af0a4(0,*(undefined8 *)(unaff_x19 + 0xf0),0);
  if ((uVar5 & 1) == 0) {
    if ((DAT_04832294 & 1) == 0) {
      thunk_FUN_01efb3a4(Method_Oculus_Interaction_HandGrab_HandGrabInteractor_<Start>b__68_0__);
      DAT_04832294 = 1;
    }
    if ((*(long *)(unaff_x19 + 0x30) == 0) || (*(int *)(*(long *)(unaff_x19 + 0x30) + 0x10) != 200))
    goto LAB_03390f6c;
    FUN_0338f7c8();
    uVar4 = *(undefined8 *)Method_Sirenix_Serialization_IDataWriter_WritePrimitiveArray<bool>__;
    *(undefined8 *)(unaff_x19 + 0xe8) = uVar4;
  }
  else {
    plVar11 = *(long **)(unaff_x19 + 0xf0);
    if (plVar11 == (long *)0x0) {
LAB_03391468:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar4 = (**(code **)(*plVar11 + 0x1a8))
                      (plVar11,*(undefined8 *)
                                Method_UnityEngine_GameObject_GetComponent<DistanceGrabbable>__,
                       *(undefined8 *)(*plVar11 + 0x1b0));
    uVar2 = FUN_033af19c(uVar4,0);
    uVar5 = FUN_0340eec4(uVar2,0);
    if ((uVar5 & 1) != 0) goto LAB_03390f6c;
    plVar11 = *(long **)(unaff_x19 + 0xf0);
    if (plVar11 == (long *)0x0) goto LAB_03391468;
    plVar11 = (long *)(**(code **)(*plVar11 + 0x1a8))
                                (plVar11,*(undefined8 *)
                                          Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<ulong>__
                                 ,*(undefined8 *)(*plVar11 + 0x1b0));
    uVar5 = FUN_033af0a4(plVar11,0,0);
    if ((uVar5 & 1) != 0) {
      if (plVar11 == (long *)0x0) goto LAB_03391468;
      (**(code **)(*plVar11 + 600))(plVar11,*(undefined8 *)(*plVar11 + 0x260));
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
    uVar5 = FUN_0340eec4(*(undefined8 *)(unaff_x19 + 0xe8),0);
    if ((uVar5 & 1) == 0) goto LAB_03390f6c;
    uVar4 = FUN_0340f2f0(*(undefined8 *)
                          Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<uint>__,
                         plVar11,uVar4,0);
    *(undefined8 *)(unaff_x19 + 0xe8) = uVar4;
  }
  thunk_FUN_01f51358(unaff_x19 + 0xe8,uVar4);
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


