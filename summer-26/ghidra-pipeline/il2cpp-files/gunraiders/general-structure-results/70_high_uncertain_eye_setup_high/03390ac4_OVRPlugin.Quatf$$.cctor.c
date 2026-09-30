/*
FUNCTION_NAME: OVRPlugin.Quatf$$.cctor
ENTRY_POINT: 03390ac4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_13;weak_xr_or_state_hits_13;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_13
*/


void OVRPlugin_Quatf___cctor(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  byte bVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  long *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
  uVar3 = FUN_0337ffa8(param_1,param_2,0);
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_0337a7b4(*(undefined8 *)(unaff_x19 + 0x18),0);
    if ((uVar3 & 1) != 0) {
      plVar4 = *(long **)(unaff_x19 + 0x18);
      if (plVar4 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
      plVar4 = (long *)(**(code **)(*plVar4 + 0x438))(plVar4,*(undefined8 *)(*plVar4 + 0x440));
      if (plVar4 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
      uVar10 = (**(code **)(*plVar4 + 0x2d8))(plVar4,*(undefined8 *)(*plVar4 + 0x2e0));
      uVar3 = thunk_FUN_03152714(uVar10,*(undefined8 *)
                                         Method_UnityEngine_UIElements_EventBase<FocusEvent>_TypeId__
                                 ,0);
      if ((uVar3 & 1) != 0) {
        *(undefined1 *)(unaff_x19 + 0x100) = 1;
      }
    }
  }
  else {
    uVar10 = *(undefined8 *)System_ComponentModel_ListSortDescription_TypeInfo;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    plVar4 = (long *)FUN_032e04b8(uVar10,0);
    plVar5 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04230910,2);
    if (plVar5 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
    if ((unaff_x20 != 0) && (lVar6 = thunk_FUN_01c495e4(), lVar6 == 0)) goto LAB_0339125c;
    lVar6 = in_stack_00000010;
    uVar9 = *(uint *)(plVar5 + 3);
    if (uVar9 == 0) goto LAB_03391258;
    plVar5[4] = unaff_x20;
    if (in_stack_00000010 != 0) {
      lVar7 = thunk_FUN_01c495e4(in_stack_00000010,*(undefined8 *)(*plVar5 + 0x40));
      if (lVar7 == 0) goto LAB_0339125c;
      uVar9 = *(uint *)(plVar5 + 3);
    }
    if (uVar9 < 2) goto LAB_03391258;
    plVar5[5] = lVar6;
    if (plVar4 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
    (**(code **)(*plVar4 + 0x8f8))(plVar4,plVar5,*(undefined8 *)(*plVar4 + 0x900));
    FUN_0338ebf4();
  }
  uVar10 = *(undefined8 *)(unaff_x19 + 0x18);
  uVar11 = *(undefined8 *)Method_FastList<string>_ToArray__;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar11 = FUN_032e04b8(uVar11,0);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*unaff_x23);
  }
  bVar2 = FUN_033802b8(uVar10,uVar11,0);
  lVar6 = in_stack_00000018;
  *(byte *)(unaff_x19 + 0x28) = bVar2 & 1;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar3 = FUN_032ea0d4(lVar6,0,0);
  lVar6 = in_stack_00000010;
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar3 = FUN_032ea0d4(lVar6,0,0);
    if ((uVar3 & 1) != 0) {
      uVar10 = *(undefined8 *)(unaff_x19 + 0x58);
      uVar11 = *(undefined8 *)
                VoxelBusters_EssentialKit_GameServicesCore_LoadAchievementDescriptionsInternalCallback_TypeInfo
      ;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      plVar4 = (long *)FUN_032e04b8(uVar11,0);
      puVar1 = PTR_DAT_04230910;
      plVar5 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04230910,2);
      lVar6 = in_stack_00000018;
      if (plVar5 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
      if ((in_stack_00000018 != 0) &&
         (lVar7 = thunk_FUN_01c495e4(in_stack_00000018,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)
         ) goto LAB_0339125c;
      lVar7 = in_stack_00000010;
      uVar9 = *(uint *)(plVar5 + 3);
      if (uVar9 == 0) {
LAB_03391258:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      plVar5[4] = lVar6;
      if (in_stack_00000010 != 0) {
        lVar6 = thunk_FUN_01c495e4(in_stack_00000010,*(undefined8 *)(*plVar5 + 0x40));
        if (lVar6 == 0) goto LAB_0339125c;
        uVar9 = *(uint *)(plVar5 + 3);
      }
      if (uVar9 < 2) goto LAB_03391258;
      plVar5[5] = lVar7;
      if (plVar4 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
      uVar11 = (**(code **)(*plVar4 + 0x8f8))(plVar4,plVar5,*(undefined8 *)(*plVar4 + 0x900));
      plVar4 = (long *)FUN_032e04b8(*unaff_x24,0);
      plVar5 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar1,2);
      lVar6 = in_stack_00000018;
      if (plVar5 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
      if ((in_stack_00000018 != 0) &&
         (lVar7 = thunk_FUN_01c495e4(in_stack_00000018,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)
         ) {
LAB_0339125c:
        uVar10 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar10,0);
      }
      lVar7 = in_stack_00000010;
      uVar9 = *(uint *)(plVar5 + 3);
      if (uVar9 == 0) goto LAB_03391258;
      plVar5[4] = lVar6;
      if (in_stack_00000010 != 0) {
        lVar6 = thunk_FUN_01c495e4(in_stack_00000010,*(undefined8 *)(*plVar5 + 0x40));
        if (lVar6 == 0) goto LAB_0339125c;
        uVar9 = *(uint *)(plVar5 + 3);
      }
      if (uVar9 < 2) goto LAB_03391258;
      plVar5[5] = lVar7;
      if (plVar4 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
      uVar8 = (**(code **)(*plVar4 + 0x8f8))(plVar4,plVar5,*(undefined8 *)(*plVar4 + 0x900));
      uVar10 = FUN_0336db0c(uVar10,uVar11,uVar8,0);
      *(undefined8 *)(unaff_x19 + 0x108) = uVar10;
      uVar3 = FUN_03390838();
      if ((uVar3 & 1) == 0) {
        plVar4 = *(long **)(unaff_x19 + 0x18);
        if (plVar4 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
        uVar10 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
        uVar3 = thunk_FUN_03152714(uVar10,*(undefined8 *)
                                           Method_UnityEngine_UIElements_EventBase<ContextualMenuPopulateEvent>_SetCreateFunction__
                                   ,0);
        if ((uVar3 & 1) != 0) {
          uVar10 = FUN_0337a7dc(*(undefined8 *)(unaff_x19 + 0x18),0);
          puVar1 = 
          Method_System_Collections_Generic_Dictionary_Enumerator<int,_SortedList<int,_ValueTuple<ComputeBuffer,_int>>>_get_Current__
          ;
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary_Enumerator<int,_SortedList<int,_ValueTuple<ComputeBuffer,_int>>>_get_Current__
                      + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)
                                Method_System_Collections_Generic_Dictionary_Enumerator<int,_SortedList<int,_ValueTuple<ComputeBuffer,_int>>>_get_Current__
                              );
          }
          FUN_03379e44(uVar10,0);
          if (DAT_045336f7 == '\0') {
            FUN_01c5d288(
                        Method_System_Collections_Generic_Dictionary_Enumerator<int,_SortedList<int,_ValueTuple<ComputeBuffer,_int>>>_get_Current__
                        );
            DAT_045336f7 = '\x01';
          }
          lVar6 = *(long *)puVar1;
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            lVar6 = *(long *)puVar1;
          }
          lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
          if (lVar6 == 0) goto OVRPlugin_Sizei__GetHashCode;
          uVar10 = FUN_0337a0b0(lVar6,in_stack_00000018,in_stack_00000010,0);
          *(undefined8 *)(unaff_x19 + 0x118) = uVar10;
        }
      }
    }
  }
  uVar10 = *unaff_x26;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  plVar4 = (long *)FUN_032e04b8(uVar10,0);
  if (plVar4 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar4 + 0x298))
                      (plVar4,*(undefined8 *)(unaff_x19 + 0x58),*(undefined8 *)(*plVar4 + 0x2a0));
    lVar6 = in_stack_00000018;
    if ((uVar3 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x100) = 1;
    }
    *(long *)(unaff_x19 + 200) = in_stack_00000018;
    *(long *)(unaff_x19 + 0xd0) = in_stack_00000010;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar3 = FUN_032ea0d4(lVar6,0,0);
    if ((uVar3 & 1) != 0) {
      uVar10 = *(undefined8 *)(unaff_x19 + 0xd0);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar3 = FUN_032ea0d4(uVar10,0,0);
      if ((uVar3 & 1) != 0) {
        uVar8 = *(undefined8 *)(unaff_x19 + 0x18);
        uVar10 = *(undefined8 *)(unaff_x19 + 200);
        uVar11 = *(undefined8 *)(unaff_x19 + 0xd0);
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<int,_Player>_MoveNext__
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar3 = FUN_0337a7fc(uVar8,uVar10,uVar11,&stack0x00000008);
        if ((uVar3 & 1) != 0) {
          FUN_0338ebf4();
          *(undefined1 *)(unaff_x19 + 0x28) = 1;
          *(undefined8 *)(unaff_x19 + 0x118) = in_stack_00000000;
        }
      }
    }
    return;
  }
OVRPlugin_Sizei__GetHashCode:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


