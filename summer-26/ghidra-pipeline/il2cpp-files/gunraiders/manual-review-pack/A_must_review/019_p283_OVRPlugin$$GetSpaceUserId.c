/*
FUNCTION_NAME: OVRPlugin$$GetSpaceUserId
ENTRY_POINT: 0338e0f4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 203
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_8;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_3;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_3
*/


void OVRPlugin__GetSpaceUserId(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 uVar10;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  
  FUN_032e04b8(param_1,0);
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar4 = OVRPlugin__GetTrackerPose();
  puVar2 = Method_TMPro_FastAction<Object>_Remove__;
  if ((unaff_x20 & 1) != 0) {
    if ((uVar4 & 1) == 0) {
      uVar7 = *(undefined8 *)(unaff_x19 + 0x18);
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar7 = FUN_033805b8(uVar7,0);
    }
    else {
      plVar5 = *(long **)(unaff_x19 + 0xd0);
      if (plVar5 == (long *)0x0) goto LAB_0338ead4;
      lVar6 = (**(code **)(*plVar5 + 0x458))(plVar5,*(undefined8 *)(*plVar5 + 0x460));
      if (lVar6 == 0) goto LAB_0338ead4;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_0338ead8;
      uVar7 = *(undefined8 *)(lVar6 + 0x20);
    }
    *(undefined8 *)(unaff_x19 + 0xc0) = uVar7;
    uVar7 = *(undefined8 *)(unaff_x19 + 0x18);
    uVar10 = *unaff_x28;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar10 = FUN_032e04b8(uVar10,0);
    uVar4 = FUN_032e935c(uVar7,uVar10,0);
    if ((uVar4 & 1) != 0) {
      uVar7 = *(undefined8 *)
               VoxelBusters_EssentialKit_NotificationServicesCore_Android_NativeScheduleNotificationListener_OnFailureDelegate_TypeInfo
      ;
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_032e04b8(uVar7,0);
      FUN_0338ebf4();
    }
    uVar7 = *(undefined8 *)(unaff_x19 + 0xc0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar4 = FUN_032ea0d4(uVar7,0,0);
    if ((uVar4 & 1) != 0) {
      uVar7 = FUN_0336d9fc(*(undefined8 *)(unaff_x19 + 0x18),*(undefined8 *)(unaff_x19 + 0xc0),0);
      *(undefined8 *)(unaff_x19 + 0xf8) = uVar7;
    }
    uVar7 = *(undefined8 *)(unaff_x19 + 0x18);
    uVar10 = *(undefined8 *)Method_TMPro_FastAction<bool,_Material>_Call__;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar10 = FUN_032e04b8(uVar10,0);
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*unaff_x27);
    }
    bVar3 = FUN_033802b8(uVar7,uVar10,0);
    *(byte *)(unaff_x19 + 0x28) = bVar3 & 1;
    bVar3 = 1;
    goto LAB_0338e504;
  }
  if ((uVar4 & 1) == 0) {
    uVar7 = *(undefined8 *)(unaff_x19 + 0x18);
    uVar10 = *(undefined8 *)Method_TMPro_FastAction<Object>_Remove__;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar10 = FUN_032e04b8(uVar10,0);
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*unaff_x27);
    }
    uVar4 = OVRPlugin__GetTrackerPose(uVar7,uVar10,&stack0x00000018,0);
    puVar1 = Method_System_Collections_Generic_List_Enumerator<UIRStylePainter_Entry>_Dispose__;
    if ((uVar4 & 1) == 0) {
      uVar7 = *(undefined8 *)(unaff_x19 + 0x18);
      uVar10 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<UIRStylePainter_Entry>_Dispose__;
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar10 = FUN_032e04b8(uVar10,0);
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x27);
      }
      uVar4 = OVRPlugin__GetTrackerPose(uVar7,uVar10,&stack0x00000018,0);
      if ((uVar4 & 1) == 0) {
        bVar3 = 0;
        *(undefined1 *)(unaff_x19 + 0xf1) = 1;
        goto LAB_0338e504;
      }
      if (in_stack_00000018 == (long *)0x0) goto LAB_0338ead4;
      lVar6 = (**(code **)(*in_stack_00000018 + 0x458))
                        (in_stack_00000018,*(undefined8 *)(*in_stack_00000018 + 0x460));
      if (lVar6 == 0) goto LAB_0338ead4;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_0338ead8;
      uVar7 = *(undefined8 *)(unaff_x19 + 0x60);
      *(undefined8 *)(unaff_x19 + 0xc0) = *(undefined8 *)(lVar6 + 0x20);
      uVar10 = *(undefined8 *)puVar1;
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar10 = FUN_032e04b8(uVar10,0);
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x27);
      }
      uVar4 = FUN_0337ffa8(uVar7,uVar10,0);
      if ((uVar4 & 1) != 0) {
        uVar7 = *unaff_x26;
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        plVar5 = (long *)FUN_032e04b8(uVar7,0);
        plVar8 = (long *)FUN_01c5d2fc(*unaff_x25,1);
        if (plVar8 == (long *)0x0) goto LAB_0338ead4;
        lVar6 = *(long *)(unaff_x19 + 0xc0);
        if ((lVar6 != 0) &&
           (lVar9 = thunk_FUN_01c495e4(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
        goto LAB_0338eadc;
        if ((int)plVar8[3] == 0) goto LAB_0338ead8;
        plVar8[4] = lVar6;
        if (plVar5 == (long *)0x0) goto LAB_0338ead4;
        (**(code **)(*plVar5 + 0x8f8))(plVar5,plVar8,*(undefined8 *)(*plVar5 + 0x900));
        FUN_0338ebf4();
      }
      uVar7 = FUN_0336d9fc(*(undefined8 *)(unaff_x19 + 0x18),*(undefined8 *)(unaff_x19 + 0xc0),0);
      *(undefined8 *)(unaff_x19 + 0xf8) = uVar7;
      FUN_0338ec9c();
      uVar4 = FUN_0337a7b4(*(undefined8 *)(unaff_x19 + 0x18),0);
      if ((uVar4 & 1) != 0) {
        plVar5 = *(long **)(unaff_x19 + 0x18);
        if (plVar5 == (long *)0x0) goto LAB_0338ead4;
        uVar7 = (**(code **)(*plVar5 + 0x438))(plVar5,*(undefined8 *)(*plVar5 + 0x440));
        uVar10 = *(undefined8 *)puVar1;
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*unaff_x24);
        }
        uVar10 = FUN_032e04b8(uVar10,0);
        uVar4 = FUN_032e935c(uVar7,uVar10,0);
        if ((uVar4 & 1) != 0) {
          *(undefined1 *)(unaff_x19 + 0x28) = 0;
          *(undefined1 *)(unaff_x19 + 0xf1) = 0;
          bVar3 = 1;
          *(long **)(unaff_x19 + 0xd0) = in_stack_00000018;
          goto LAB_0338e504;
        }
      }
      uVar7 = *unaff_x26;
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      plVar5 = (long *)FUN_032e04b8(uVar7,0);
      plVar8 = (long *)FUN_01c5d2fc(*unaff_x25,1);
      if (plVar8 == (long *)0x0) goto LAB_0338ead4;
      lVar6 = *(long *)(unaff_x19 + 0xc0);
      if ((lVar6 != 0) &&
         (lVar9 = thunk_FUN_01c495e4(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
      goto LAB_0338eadc;
      if ((int)plVar8[3] == 0) goto LAB_0338ead8;
      plVar8[4] = lVar6;
      if (plVar5 == (long *)0x0) goto LAB_0338ead4;
      uVar7 = (**(code **)(*plVar5 + 0x8f8))(plVar5,plVar8,*(undefined8 *)(*plVar5 + 0x900));
      *(undefined8 *)(unaff_x19 + 0xd0) = uVar7;
      *(undefined1 *)(unaff_x19 + 0x28) = 1;
      *(undefined1 *)(unaff_x19 + 0xf1) = 1;
    }
    else {
      if (in_stack_00000018 == (long *)0x0) goto LAB_0338ead4;
      lVar6 = (**(code **)(*in_stack_00000018 + 0x458))
                        (in_stack_00000018,*(undefined8 *)(*in_stack_00000018 + 0x460));
      if (lVar6 == 0) goto LAB_0338ead4;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_0338ead8;
      uVar7 = *(undefined8 *)(unaff_x19 + 0x18);
      *(undefined8 *)(unaff_x19 + 0xc0) = *(undefined8 *)(lVar6 + 0x20);
      uVar10 = *(undefined8 *)puVar2;
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar10 = FUN_032e04b8(uVar10,0);
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x27);
      }
      uVar4 = FUN_0337ffa8(uVar7,uVar10,0);
      if ((uVar4 & 1) == 0) {
        uVar7 = *(undefined8 *)(unaff_x19 + 0x18);
        uVar10 = *(undefined8 *)Method_TMPro_FastAction<bool,_Material>__ctor__;
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar10 = FUN_032e04b8(uVar10,0);
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*unaff_x27);
        }
        uVar4 = FUN_0337ffa8(uVar7,uVar10,0);
        if ((uVar4 & 1) != 0) goto LAB_0338e6e0;
      }
      else {
LAB_0338e6e0:
        uVar7 = *(undefined8 *)Method_TMPro_FastAction<bool,_Material>_Call__;
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        plVar5 = (long *)FUN_032e04b8(uVar7,0);
        plVar8 = (long *)FUN_01c5d2fc(*unaff_x25,1);
        if (plVar8 == (long *)0x0) goto LAB_0338ead4;
        lVar6 = *(long *)(unaff_x19 + 0xc0);
        if ((lVar6 != 0) &&
           (lVar9 = thunk_FUN_01c495e4(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
        goto LAB_0338eadc;
        if ((int)plVar8[3] == 0) goto LAB_0338ead8;
        plVar8[4] = lVar6;
        if (plVar5 == (long *)0x0) goto LAB_0338ead4;
        (**(code **)(*plVar5 + 0x8f8))(plVar5,plVar8,*(undefined8 *)(*plVar5 + 0x900));
        FUN_0338ebf4();
      }
      uVar7 = *unaff_x26;
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      plVar5 = (long *)FUN_032e04b8(uVar7,0);
      plVar8 = (long *)FUN_01c5d2fc(*unaff_x25,1);
      if (plVar8 == (long *)0x0) goto LAB_0338ead4;
      lVar6 = *(long *)(unaff_x19 + 0xc0);
      if ((lVar6 != 0) &&
         (lVar9 = thunk_FUN_01c495e4(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
      goto LAB_0338eadc;
      if ((int)plVar8[3] == 0) goto LAB_0338ead8;
      plVar8[4] = lVar6;
      if (plVar5 == (long *)0x0) goto LAB_0338ead4;
      uVar7 = (**(code **)(*plVar5 + 0x8f8))(plVar5,plVar8,*(undefined8 *)(*plVar5 + 0x900));
      *(undefined8 *)(unaff_x19 + 0xd0) = uVar7;
      uVar7 = FUN_0336d9fc(*(undefined8 *)(unaff_x19 + 0x58),*(undefined8 *)(unaff_x19 + 0xc0),0);
      *(undefined8 *)(unaff_x19 + 0xf8) = uVar7;
      FUN_0338ec9c();
      *(undefined1 *)(unaff_x19 + 0x28) = 1;
    }
    bVar3 = FUN_0338dd68();
    goto LAB_0338e504;
  }
  plVar5 = *(long **)(unaff_x19 + 0xd0);
  if (plVar5 == (long *)0x0) goto LAB_0338ead4;
  lVar6 = (**(code **)(*plVar5 + 0x458))(plVar5,*(undefined8 *)(*plVar5 + 0x460));
  if (lVar6 == 0) goto LAB_0338ead4;
  if (*(int *)(lVar6 + 0x18) == 0) goto LAB_0338ead8;
  uVar7 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x19 + 0xc0) = *(undefined8 *)(lVar6 + 0x20);
  uVar10 = *unaff_x29;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar10 = FUN_032e04b8(uVar10,0);
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*unaff_x27);
  }
  uVar4 = FUN_0337ffa8(uVar7,uVar10,0);
  if ((uVar4 & 1) == 0) {
    uVar7 = *(undefined8 *)(unaff_x19 + 0x18);
    uVar10 = *(undefined8 *)UnityEngine_EventSystems_ISelectHandler_TypeInfo;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar10 = FUN_032e04b8(uVar10,0);
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*unaff_x27);
    }
    uVar4 = FUN_0337ffa8(uVar7,uVar10,0);
    if ((uVar4 & 1) != 0) goto LAB_0338e240;
  }
  else {
LAB_0338e240:
    uVar7 = *unaff_x26;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    plVar5 = (long *)FUN_032e04b8(uVar7,0);
    plVar8 = (long *)FUN_01c5d2fc(*unaff_x25,1);
    if (plVar8 == (long *)0x0) goto LAB_0338ead4;
    lVar6 = *(long *)(unaff_x19 + 0xc0);
    if ((lVar6 != 0) &&
       (lVar9 = thunk_FUN_01c495e4(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
    goto LAB_0338eadc;
    if ((int)plVar8[3] == 0) goto LAB_0338ead8;
    plVar8[4] = lVar6;
    if (plVar5 == (long *)0x0) goto LAB_0338ead4;
    (**(code **)(*plVar5 + 0x8f8))(plVar5,plVar8,*(undefined8 *)(*plVar5 + 0x900));
    FUN_0338ebf4();
  }
  uVar7 = *(undefined8 *)(unaff_x19 + 0x18);
  uVar10 = *(undefined8 *)Oculus_Platform_Models_LivestreamingVideoStats_TypeInfo;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar10 = FUN_032e04b8(uVar10,0);
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*unaff_x27);
  }
  uVar4 = FUN_0337ffa8(uVar7,uVar10,0);
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)UnityEngine_UIElements_ListViewReorderableDragAndDropController_TypeInfo;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    plVar5 = (long *)FUN_032e04b8(uVar7,0);
    plVar8 = (long *)FUN_01c5d2fc(*unaff_x25,1);
    if (plVar8 == (long *)0x0) {
LAB_0338ead4:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar6 = *(long *)(unaff_x19 + 0xc0);
    if ((lVar6 != 0) &&
       (lVar9 = thunk_FUN_01c495e4(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
LAB_0338eadc:
      uVar7 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar7,0);
    }
    if ((int)plVar8[3] == 0) {
LAB_0338ead8:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    plVar8[4] = lVar6;
    if (plVar5 == (long *)0x0) goto LAB_0338ead4;
    (**(code **)(*plVar5 + 0x8f8))(plVar5,plVar8,*(undefined8 *)(*plVar5 + 0x900));
    FUN_0338ebf4();
  }
  uVar7 = FUN_0336d9fc(*(undefined8 *)(unaff_x19 + 0x18),*(undefined8 *)(unaff_x19 + 0xc0),0);
  *(undefined8 *)(unaff_x19 + 0xf8) = uVar7;
  bVar3 = 1;
  *(undefined1 *)(unaff_x19 + 0xf1) = 1;
LAB_0338e504:
  *(byte *)(unaff_x19 + 0xf2) = bVar3 & 1;
  uVar7 = *(undefined8 *)(unaff_x19 + 0xc0);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar4 = FUN_032ea0d4(uVar7,0,0);
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(unaff_x19 + 0x18);
    uVar10 = *(undefined8 *)(unaff_x19 + 0xc0);
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<int,_Player>_MoveNext__
                + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar4 = FUN_0337a364(uVar7,uVar10,&stack0x00000010,&stack0x00000008,0);
    if ((uVar4 & 1) != 0) {
      FUN_0338ebf4();
      *(undefined1 *)(unaff_x19 + 0x28) = 1;
      *(undefined1 *)(unaff_x19 + 0xf2) = 1;
      *(undefined8 *)(unaff_x19 + 0x100) = in_stack_00000008;
    }
  }
  return;
}


