/*
FUNCTION_NAME: Unity.Services.Matchmaker.Http.IsolatedJsonConvert$$SerializeObjectInternal
ENTRY_POINT: 077e8250
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_7;functionality_data_collection_or_telemetry_hits_5
*/


void Unity_Services_Matchmaker_Http_IsolatedJsonConvert__SerializeObjectInternal
               (undefined8 param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 *unaff_x19;
  long *plVar8;
  uint uVar9;
  long unaff_x24;
  int in_stack_00000028;
  
  if (param_2 != 1) {
    if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_03b79cbc(param_1);
    }
    puVar2 = (undefined8 *)__cxa_begin_catch(param_1);
    uVar3 = thunk_FUN_03af1434(PTR_DAT_08488858);
    uVar4 = thunk_FUN_03aed0c4(uVar3,*(undefined8 *)*puVar2);
    if ((uVar4 & 1) != 0) {
      uVar3 = *puVar2;
      *(undefined8 *)(&stack0x00000018 + (long)in_stack_00000028 * 8) = uVar3;
      in_stack_00000028 = in_stack_00000028 + 1;
      __cxa_end_catch();
      *unaff_x19 = 0xfffffffe;
      lVar5 = thunk_FUN_03af1434(
                                System_Runtime_CompilerServices_ConditionalWeakTable<object,_SerializationInfo>_TypeInfo
                                );
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar6 = thunk_FUN_03af1434(Unity_Properties_ContainerPropertyBag<TransformOrigin>_TypeInfo);
      FUN_05338d34(unaff_x19 + 2,uVar3,uVar6);
      return;
    }
    puVar7 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar7 = *puVar2;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&PTR_PTR_07fde6e8,0);
  }
  puVar2 = (undefined8 *)__cxa_begin_catch(param_1);
  uVar3 = thunk_FUN_03af1434(System_Collections_Generic_Dictionary<int,_Queue<int>>_TypeInfo);
  uVar4 = thunk_FUN_03aed0c4(uVar3,*(undefined8 *)*puVar2);
  if ((uVar4 & 1) == 0) {
    uVar3 = thunk_FUN_03af1434(
                              System_Collections_Generic_Dictionary<int,_SortedList<int,_ValueTuple<RTHandle,_int>>>_TypeInfo
                              );
    uVar4 = thunk_FUN_03aed0c4(uVar3,*(undefined8 *)*puVar2);
    if ((uVar4 & 1) == 0) {
      uVar3 = thunk_FUN_03af1434(PTR_DAT_08493190);
      uVar4 = thunk_FUN_03aed0c4(uVar3,*(undefined8 *)*puVar2);
      if ((uVar4 & 1) == 0) {
        uVar3 = thunk_FUN_03af1434(
                                  System_Collections_Generic_Dictionary<int,_ValueTuple<uint,_uint>>_TypeInfo
                                  );
        uVar4 = thunk_FUN_03aed0c4(uVar3,*(undefined8 *)*puVar2);
        if ((uVar4 & 1) == 0) {
          uVar3 = thunk_FUN_03af1434(PTR_DAT_08488858);
          uVar4 = thunk_FUN_03aed0c4(uVar3,*(undefined8 *)*puVar2);
          if ((uVar4 & 1) == 0) {
            puVar7 = (undefined8 *)__cxa_allocate_exception(8);
            *puVar7 = *puVar2;
                    /* WARNING: Subroutine does not return */
            __cxa_throw(puVar7,&PTR_PTR_07fde6e8,0);
          }
          uVar9 = 0x12;
        }
        else {
          uVar9 = 0x11;
        }
      }
      else {
        uVar9 = 0x10;
      }
    }
    else {
      uVar9 = 0xf;
    }
  }
  else {
    uVar9 = 0xe;
  }
  iVar1 = in_stack_00000028;
  plVar8 = (long *)*puVar2;
  *(long **)(&stack0x00000018 + (long)in_stack_00000028 * 8) = plVar8;
  in_stack_00000028 = in_stack_00000028 + 1;
  __cxa_end_catch();
  if (0xf < uVar9) {
    if (uVar9 == 0x10) {
      if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar5 = *(long *)(unaff_x24 + 0x18);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uVar3 = thunk_FUN_03af1434(
                                System_Collections_Generic_Dictionary<int,_List<PostProcessVolume>>_TypeInfo
                                );
      uVar3 = FUN_03522c98(4,uVar3,lVar5,plVar8);
      in_stack_00000028 = iVar1;
      uVar6 = thunk_FUN_03af1434(
                                System_Collections_Generic_Dictionary<int,_ContactEventHandlerInfo>_TypeInfo
                                );
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar3,uVar6);
    }
    if (uVar9 == 0x11) {
      if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar5 = *(long *)(unaff_x24 + 0x18);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uVar3 = thunk_FUN_03af1434(
                                System_Collections_Generic_Dictionary<int,_List<PostProcessVolume>>_TypeInfo
                                );
      uVar3 = FUN_03522c98(5,uVar3,lVar5,plVar8);
      in_stack_00000028 = iVar1;
      uVar6 = thunk_FUN_03af1434(
                                System_Collections_Generic_Dictionary<int,_ContactEventHandlerInfo>_TypeInfo
                                );
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar3,uVar6);
    }
    lVar5 = thunk_FUN_03af1434(System_Runtime_Serialization_DataNode<char>_TypeInfo);
    if (plVar8 != (long *)0x0) {
      if ((*(byte *)(lVar5 + 0x130) <= *(byte *)(*plVar8 + 0x130)) &&
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) == lVar5))
      {
        in_stack_00000028 = iVar1;
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9b8(plVar8);
      }
    }
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar5 = *(long *)(unaff_x24 + 0x18);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar3 = thunk_FUN_03af1434(
                              System_Collections_Generic_Dictionary<int,_List<PostProcessVolume>>_TypeInfo
                              );
    uVar3 = FUN_03522c98(6,uVar3,lVar5,plVar8);
    in_stack_00000028 = iVar1;
    uVar6 = thunk_FUN_03af1434(
                              System_Collections_Generic_Dictionary<int,_ContactEventHandlerInfo>_TypeInfo
                              );
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar3,uVar6);
  }
  if (uVar9 != 0xe) {
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar5 = *(long *)(unaff_x24 + 0x18);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar3 = thunk_FUN_03af1434(
                              System_Collections_Generic_Dictionary<int,_List<PostProcessVolume>>_TypeInfo
                              );
    uVar3 = FUN_03522c98(2,uVar3,lVar5,plVar8);
    in_stack_00000028 = iVar1;
    uVar6 = thunk_FUN_03af1434(
                              System_Collections_Generic_Dictionary<int,_ContactEventHandlerInfo>_TypeInfo
                              );
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar3,uVar6);
  }
  if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar5 = *(long *)(unaff_x24 + 0x18);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar3 = thunk_FUN_03af1434(
                            System_Collections_Generic_Dictionary<int,_List<PostProcessVolume>>_TypeInfo
                            );
  uVar3 = FUN_03522c98(1,uVar3,lVar5,plVar8);
  in_stack_00000028 = iVar1;
  uVar6 = thunk_FUN_03af1434(
                            System_Collections_Generic_Dictionary<int,_ContactEventHandlerInfo>_TypeInfo
                            );
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar3,uVar6);
}


