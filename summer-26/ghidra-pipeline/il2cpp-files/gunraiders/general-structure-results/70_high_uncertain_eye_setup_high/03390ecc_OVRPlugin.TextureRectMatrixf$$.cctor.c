/*
FUNCTION_NAME: OVRPlugin.TextureRectMatrixf$$.cctor
ENTRY_POINT: 03390ecc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_9
*/


void OVRPlugin_TextureRectMatrixf___cctor(void)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  long unaff_x19;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
  thunk_FUN_01c1d1e8();
  uVar2 = FUN_032ea0d4();
  lVar6 = in_stack_00000010;
  if ((uVar2 & 1) != 0) {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar2 = FUN_032ea0d4(lVar6,0,0);
    if ((uVar2 & 1) != 0) {
      uVar9 = *(undefined8 *)(unaff_x19 + 0x58);
      uVar10 = *(undefined8 *)
                VoxelBusters_EssentialKit_GameServicesCore_LoadAchievementDescriptionsInternalCallback_TypeInfo
      ;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      plVar3 = (long *)FUN_032e04b8(uVar10,0);
      puVar1 = PTR_DAT_04230910;
      plVar4 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04230910,2);
      lVar6 = in_stack_00000018;
      if (plVar4 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
      if ((in_stack_00000018 != 0) &&
         (lVar5 = thunk_FUN_01c495e4(in_stack_00000018,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)
         ) goto LAB_0339125c;
      lVar5 = in_stack_00000010;
      uVar8 = *(uint *)(plVar4 + 3);
      if (uVar8 == 0) {
LAB_03391258:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      plVar4[4] = lVar6;
      if (in_stack_00000010 != 0) {
        lVar6 = thunk_FUN_01c495e4(in_stack_00000010,*(undefined8 *)(*plVar4 + 0x40));
        if (lVar6 == 0) goto LAB_0339125c;
        uVar8 = *(uint *)(plVar4 + 3);
      }
      if (uVar8 < 2) goto LAB_03391258;
      plVar4[5] = lVar5;
      if (plVar3 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
      uVar10 = (**(code **)(*plVar3 + 0x8f8))(plVar3,plVar4,*(undefined8 *)(*plVar3 + 0x900));
      plVar3 = (long *)FUN_032e04b8(*unaff_x24,0);
      plVar4 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar1,2);
      lVar6 = in_stack_00000018;
      if (plVar4 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
      if ((in_stack_00000018 != 0) &&
         (lVar5 = thunk_FUN_01c495e4(in_stack_00000018,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)
         ) {
LAB_0339125c:
        uVar9 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar9,0);
      }
      lVar5 = in_stack_00000010;
      uVar8 = *(uint *)(plVar4 + 3);
      if (uVar8 == 0) goto LAB_03391258;
      plVar4[4] = lVar6;
      if (in_stack_00000010 != 0) {
        lVar6 = thunk_FUN_01c495e4(in_stack_00000010,*(undefined8 *)(*plVar4 + 0x40));
        if (lVar6 == 0) goto LAB_0339125c;
        uVar8 = *(uint *)(plVar4 + 3);
      }
      if (uVar8 < 2) goto LAB_03391258;
      plVar4[5] = lVar5;
      if (plVar3 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
      uVar7 = (**(code **)(*plVar3 + 0x8f8))(plVar3,plVar4,*(undefined8 *)(*plVar3 + 0x900));
      uVar9 = FUN_0336db0c(uVar9,uVar10,uVar7,0);
      *(undefined8 *)(unaff_x19 + 0x108) = uVar9;
      uVar2 = FUN_03390838();
      if ((uVar2 & 1) == 0) {
        plVar3 = *(long **)(unaff_x19 + 0x18);
        if (plVar3 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
        uVar9 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
        uVar2 = thunk_FUN_03152714(uVar9,*(undefined8 *)
                                          Method_UnityEngine_UIElements_EventBase<ContextualMenuPopulateEvent>_SetCreateFunction__
                                   ,0);
        if ((uVar2 & 1) != 0) {
          uVar9 = FUN_0337a7dc(*(undefined8 *)(unaff_x19 + 0x18),0);
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
          FUN_03379e44(uVar9,0);
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
          uVar9 = FUN_0337a0b0(lVar6,in_stack_00000018,in_stack_00000010,0);
          *(undefined8 *)(unaff_x19 + 0x118) = uVar9;
        }
      }
    }
  }
  uVar9 = *unaff_x26;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  plVar3 = (long *)FUN_032e04b8(uVar9,0);
  if (plVar3 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar3 + 0x298))
                      (plVar3,*(undefined8 *)(unaff_x19 + 0x58),*(undefined8 *)(*plVar3 + 0x2a0));
    lVar6 = in_stack_00000018;
    if ((uVar2 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x100) = 1;
    }
    *(long *)(unaff_x19 + 200) = in_stack_00000018;
    *(long *)(unaff_x19 + 0xd0) = in_stack_00000010;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar2 = FUN_032ea0d4(lVar6,0,0);
    if ((uVar2 & 1) != 0) {
      uVar9 = *(undefined8 *)(unaff_x19 + 0xd0);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar2 = FUN_032ea0d4(uVar9,0,0);
      if ((uVar2 & 1) != 0) {
        uVar7 = *(undefined8 *)(unaff_x19 + 0x18);
        uVar9 = *(undefined8 *)(unaff_x19 + 200);
        uVar10 = *(undefined8 *)(unaff_x19 + 0xd0);
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<int,_Player>_MoveNext__
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar2 = FUN_0337a7fc(uVar7,uVar9,uVar10,&stack0x00000008);
        if ((uVar2 & 1) != 0) {
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


