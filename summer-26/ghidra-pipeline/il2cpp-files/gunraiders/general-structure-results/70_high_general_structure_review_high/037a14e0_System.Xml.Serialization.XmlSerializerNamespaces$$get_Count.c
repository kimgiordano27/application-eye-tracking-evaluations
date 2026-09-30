/*
FUNCTION_NAME: System.Xml.Serialization.XmlSerializerNamespaces$$get_Count
ENTRY_POINT: 037a14e0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void System_Xml_Serialization_XmlSerializerNamespaces__get_Count(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long in_x9;
  long lVar10;
  uint in_w11;
  long unaff_x19;
  long unaff_x20;
  long *plVar11;
  long lVar12;
  long unaff_x22;
  long *unaff_x23;
  ulong *unaff_x28;
  undefined8 *puVar13;
  ulong in_stack_00000028;
  
  puVar2 = Method_ListWithEvents<IUpdateReceiver>_add_OnElementAdded__;
  puVar1 = 
  VoxelBusters_EssentialKit_GameServicesCore_Android_NativeLoadLocalPlayerScoreListener_TypeInfo;
  puVar13 = (undefined8 *)Method_UnityEngine_Rendering_ListChangedEventArgs<DebugUI_Widget>__ctor__;
  if (in_w11 < *(byte *)(param_1 + 0x130)) {
    lVar8 = 0;
  }
  else {
    lVar8 = unaff_x22;
    if (*(long *)(*(long *)(in_x9 + 200) + (ulong)*(byte *)(param_1 + 0x130) * 8 + -8) != param_1) {
      lVar8 = 0;
    }
  }
  do {
    plVar4 = *(long **)(unaff_x19 + 0x20);
    if (plVar4 == (long *)0x0) goto LAB_037a1a34;
    uVar5 = (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
    uVar6 = thunk_FUN_03152714(uVar5,*(undefined8 *)puVar1,0);
    if ((uVar6 & 1) != 0) {
      thunk_FUN_01c273e8(
                        Method_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback<string>__
                        );
      uVar7 = thunk_FUN_01c496e0();
      uVar5 = thunk_FUN_01c273e8(
                                Method_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback<Vector3Int>__
                                );
      FUN_0379cc54(uVar7,uVar5,0,0);
LAB_037a1a6c:
      uVar5 = thunk_FUN_01c273e8(Method_System_Net_IPEndPoint_Create__);
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar7,uVar5);
    }
    plVar4 = *(long **)(unaff_x19 + 0x20);
    if (plVar4 == (long *)0x0) goto LAB_037a1a34;
    uVar5 = (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
    uVar6 = thunk_FUN_03152714(uVar5,*(undefined8 *)puVar2,0);
    plVar4 = *(long **)(unaff_x19 + 0x20);
    if (plVar4 == (long *)0x0) goto LAB_037a1a34;
    lVar10 = *plVar4;
    if ((uVar6 & 1) == 0) {
      uVar5 = (**(code **)(lVar10 + 0x1c8))(plVar4,*(undefined8 *)(lVar10 + 0x1d0));
      uVar6 = thunk_FUN_03152714(uVar5,*(undefined8 *)
                                        Method_System_Linq_Enumerable_ToArray<Volume>__,0);
      if ((uVar6 & 1) == 0) {
        if (lVar8 == 0) {
LAB_037a16b4:
          lVar8 = thunk_FUN_01c496e0();
          uVar6 = FUN_037f5c1c(lVar8,0);
          if (*unaff_x23 == 0) goto LAB_037a1a34;
          *(long *)(*unaff_x23 + 0xb8) = lVar8;
        }
        else {
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          if (DAT_04538eab == '\0') {
            FUN_01c5d288(unaff_x28);
            DAT_04538eab = '\x01';
          }
          uVar6 = *unaff_x28;
          if (*(int *)(uVar6 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            uVar6 = *unaff_x28;
          }
          if (lVar8 == **(long **)(uVar6 + 0xb8)) goto LAB_037a16b4;
        }
        if ((unaff_x22 == 0) || (*(long *)(unaff_x22 + 0x68) == 0)) {
LAB_037a16f8:
          if (lVar8 == 0) goto LAB_037a1a34;
        }
        else {
          if ((*unaff_x23 == 0) || (lVar10 = *(long *)(*unaff_x23 + 0xb0), lVar10 == 0))
          goto LAB_037a1a34;
          uVar6 = FUN_0389cba0(lVar10,0);
          if ((uVar6 & 1) != 0) goto LAB_037a16f8;
          plVar4 = (long *)thunk_FUN_01c496e0(*(undefined8 *)
                                               Method_System_Linq_Enumerable_ToList<TMP_Character>__
                                             );
          FUN_03803320(plVar4,0);
          if (lVar8 == 0) goto LAB_037a1a34;
          *(long **)(lVar8 + 0x98) = plVar4;
          lVar10 = thunk_FUN_01c496e0(*(undefined8 *)
                                       Method_System_Linq_Enumerable_ToList<StoreItem>__);
          FUN_038033e8(lVar10,0);
          if (plVar4 == (long *)0x0) goto LAB_037a1a34;
          (**(code **)(*plVar4 + 0x228))(plVar4,lVar10,*(undefined8 *)(*plVar4 + 0x230));
          if ((*unaff_x23 == 0) || (lVar10 == 0)) goto LAB_037a1a34;
          FUN_03803330(lVar10,*(undefined8 *)(*unaff_x23 + 0xb0),0);
          lVar12 = *unaff_x23;
          if (lVar12 == 0) goto LAB_037a1a34;
          *(undefined4 *)(lVar10 + 0x10) = *(undefined4 *)(lVar12 + 0x10);
          *(undefined4 *)(lVar12 + 0x10) = 0;
          puVar3 = 
          Method_Unity_Services_Core_Internal_CoreRegistry_RegisterPackage<Ua2CoreInitializeCallback>__
          ;
          lVar10 = *(long *)
                    Method_Unity_Services_Core_Internal_CoreRegistry_RegisterPackage<Ua2CoreInitializeCallback>__
          ;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            lVar10 = *(long *)puVar3;
          }
          uVar6 = FUN_037f7cb0(lVar12,*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 8),0);
        }
        if (*(long *)(lVar8 + 0x98) == 0) {
          plVar4 = *(long **)(unaff_x19 + 0x20);
          if (plVar4 == (long *)0x0) goto LAB_037a1a34;
          (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
          plVar4 = *(long **)(unaff_x19 + 0x20);
          if (plVar4 == (long *)0x0) goto LAB_037a1a34;
          (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
          plVar4 = *(long **)(unaff_x19 + 0x20);
          if (plVar4 == (long *)0x0) goto LAB_037a1a34;
          (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
          plVar4 = *(long **)(unaff_x19 + 0x20);
          if (plVar4 == (long *)0x0) goto LAB_037a1a34;
          (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
          FUN_037f5e34(lVar8,0);
          FUN_037f5ec0(lVar8,0);
        }
        else {
          lVar10 = FUN_037a1b48(uVar6,lVar8);
          plVar4 = *(long **)(unaff_x19 + 0x20);
          if (plVar4 == (long *)0x0) goto LAB_037a1a34;
          (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
          plVar4 = *(long **)(unaff_x19 + 0x20);
          if (plVar4 == (long *)0x0) goto LAB_037a1a34;
          (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
          plVar4 = *(long **)(unaff_x19 + 0x20);
          if (plVar4 == (long *)0x0) goto LAB_037a1a34;
          (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
          plVar4 = *(long **)(unaff_x19 + 0x20);
          if ((plVar4 == (long *)0x0) ||
             ((**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0)), lVar10 == 0))
          goto LAB_037a1a34;
          FUN_037f5ec0(lVar8,0);
        }
        lVar10 = FUN_0379e640();
        unaff_x28 = (ulong *)Method_System_Security_Cryptography_DSACryptoServiceProvider_HashData__
        ;
        puVar13 = (undefined8 *)
                  Method_UnityEngine_Rendering_ListChangedEventArgs<DebugUI_Widget>__ctor__;
        if (lVar10 != 0) {
          if (unaff_x20 == 0) goto LAB_037a1a34;
          FUN_037f2e04(unaff_x20,lVar10,0);
        }
      }
      else {
        plVar4 = *(long **)(unaff_x19 + 0x20);
        if (plVar4 == (long *)0x0) goto LAB_037a1a34;
        uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
        uVar6 = thunk_FUN_03152714(uVar5,*(undefined8 *)PTR_DAT_0423a830,0);
        if ((uVar6 & 1) == 0) {
          uVar6 = FUN_031529f8(uVar5,*(undefined8 *)UnityEngine_Events_InvokableCall_TypeInfo,0);
          if ((((uVar6 & 1) != 0) &&
              (uVar6 = FUN_031529f8(uVar5,*(undefined8 *)
                                           Method_UnityEngine_EventSystems_ExecuteEvents_ExecuteHierarchy<IScrollHandler>__
                                    ,0), (uVar6 & 1) != 0)) &&
             (uVar6 = FUN_031529f8(uVar5,*(undefined8 *)Method_System_Net_IPEndPoint__ctor__,0),
             (uVar6 & 1) != 0)) {
            thunk_FUN_01c273e8(
                              Method_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback<string>__
                              );
            uVar7 = thunk_FUN_01c496e0();
            uVar9 = thunk_FUN_01c273e8(
                                      Method_System_Net_NetworkInformation_IPGlobalPropertiesFactoryPal_Create__
                                      );
            FUN_037a36e0(uVar7,uVar9,uVar5);
            goto LAB_037a1a6c;
          }
        }
        else {
          if (*unaff_x23 == 0) goto LAB_037a1a34;
          FUN_037f7b44(*unaff_x23,1,0);
        }
      }
    }
    else {
      uVar5 = (**(code **)(lVar10 + 0x1d8))(plVar4,*(undefined8 *)(lVar10 + 0x1e0));
      uVar6 = thunk_FUN_03152714(uVar5,*puVar13,0);
      if ((uVar6 & 1) != 0) {
        plVar4 = *(long **)(unaff_x19 + 0x20);
        if (plVar4 == (long *)0x0) goto LAB_037a1a34;
        plVar11 = *(long **)(unaff_x19 + 0x38);
        uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
        plVar4 = *(long **)(unaff_x19 + 0x20);
        if ((plVar4 == (long *)0x0) ||
           (uVar7 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0)),
           plVar11 == (long *)0x0)) goto LAB_037a1a34;
        (**(code **)(*plVar11 + 0x1f8))(plVar11,uVar5,uVar7,*(undefined8 *)(*plVar11 + 0x200));
      }
    }
    plVar4 = *(long **)(unaff_x19 + 0x20);
    if (plVar4 == (long *)0x0) {
LAB_037a1a34:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar6 = (**(code **)(*plVar4 + 0x2f8))(plVar4,*(undefined8 *)(*plVar4 + 0x300));
    if ((uVar6 & 1) == 0) {
      if ((lVar8 != 0) && ((in_stack_00000028 & 0x100000000) == 0)) {
        FUN_037a1ab8();
        return;
      }
      return;
    }
  } while( true );
}


