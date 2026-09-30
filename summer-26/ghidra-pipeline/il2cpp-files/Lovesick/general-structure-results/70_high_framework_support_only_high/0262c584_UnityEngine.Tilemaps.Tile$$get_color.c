/*
FUNCTION_NAME: UnityEngine.Tilemaps.Tile$$get_color
ENTRY_POINT: 0262c584
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_Tilemaps_Tile__get_color(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long *plVar10;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x27;
  
  FUN_013df2bc(param_2,param_3,*(undefined8 *)(param_1 + 0x270));
  if (unaff_x20 == 0) {
LAB_0262cc7c:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_013df780();
  plVar10 = *(long **)(unaff_x19 + 0x88);
  if (plVar10 == (long *)0x0) goto LAB_0262cc7c;
  lVar7 = *plVar10;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x23) {
        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 3) * 0x10 + 0x138);
        goto LAB_0262c5fc;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_00d59724(plVar10,*unaff_x23,3);
LAB_0262c5fc:
  lVar7 = (*(code *)*puVar4)(plVar10,puVar4[1]);
  lVar5 = thunk_FUN_00d62348(*unaff_x25);
  if ((lVar5 == 0) || (FUN_013df2bc(), lVar7 == 0)) goto LAB_0262cc7c;
  FUN_013df780(lVar7,lVar5,*unaff_x27);
  puVar2 = Method_OVRNativeList<OVRLocatable>_Dispose__;
  puVar1 = Oculus_Interaction_ControllerSelector_<>c_TypeInfo;
  plVar10 = *(long **)(unaff_x19 + 0x90);
  if (plVar10 != (long *)0x0) {
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)Oculus_Interaction_ControllerSelector_<>c_TypeInfo) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0262c6ac;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_00d59724(plVar10,*(long *)Oculus_Interaction_ControllerSelector_<>c_TypeInfo,0);
LAB_0262c6ac:
    lVar7 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if ((lVar5 == 0) || (FUN_013df2bc(), lVar7 == 0)) goto LAB_0262cc7c;
    FUN_013df780(lVar7,lVar5,
                 *(undefined8 *)
                  System_ComponentModel_TypeConverter_StandardValuesCollection_TypeInfo);
    puVar2 = Oculus_Platform_Models_SdkAccount_TypeInfo;
    plVar10 = *(long **)(unaff_x19 + 0x90);
    if (plVar10 == (long *)0x0) goto LAB_0262cc7c;
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_0262c760;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar1,1);
LAB_0262c760:
    lVar7 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if ((lVar5 == 0) || (FUN_013df2bc(), lVar7 == 0)) goto LAB_0262cc7c;
    FUN_013df780(lVar7,lVar5,
                 *(undefined8 *)
                  Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_TryGetBodyJointId__
                );
  }
  puVar2 = Method_DG_Tweening_Core_Extensions_Blendable<Vector3,_Vector3[],_Vector3ArrayOptions>__;
  puVar1 = 
  Method_Sirenix_Utilities_ImmutableList<__Il2CppFullySharedGenericType>_System_Collections_Generic_ICollection<T>_Clear__
  ;
  plVar10 = *(long **)(unaff_x19 + 0x98);
  if (plVar10 != (long *)0x0) {
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)
             Method_Sirenix_Utilities_ImmutableList<__Il2CppFullySharedGenericType>_System_Collections_Generic_ICollection<T>_Clear__
           ) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0262c818;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_00d59724(plVar10,*(long *)
                                   Method_Sirenix_Utilities_ImmutableList<__Il2CppFullySharedGenericType>_System_Collections_Generic_ICollection<T>_Clear__
                          ,0);
LAB_0262c818:
    lVar7 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if ((lVar5 == 0) || (FUN_013df2bc(), lVar7 == 0)) goto LAB_0262cc7c;
    FUN_013df780(lVar7,lVar5,*(undefined8 *)System_Collections_Generic_List<OVRBone>_TypeInfo);
    puVar2 = StringLiteral_13359;
    plVar10 = *(long **)(unaff_x19 + 0x98);
    if (plVar10 == (long *)0x0) goto LAB_0262cc7c;
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_0262c8cc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar1,1);
LAB_0262c8cc:
    lVar7 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if ((lVar5 == 0) || (FUN_013df2bc(), lVar7 == 0)) goto LAB_0262cc7c;
    FUN_013df780(lVar7,lVar5,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List_Enumerator<IGameObjectFilter>_MoveNext__);
  }
  puVar2 = StringLiteral_11733;
  puVar1 = UnityEngine_XR_Interaction_Toolkit_Transformers_DropEventArgs_TypeInfo;
  plVar10 = *(long **)(unaff_x19 + 0xa0);
  if (plVar10 != (long *)0x0) {
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)StringLiteral_11733) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0262c984;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724(plVar10,*(long *)StringLiteral_11733,0);
LAB_0262c984:
    lVar7 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if ((lVar5 == 0) || (FUN_013df2bc(), lVar7 == 0)) goto LAB_0262cc7c;
    FUN_013df780(lVar7,lVar5,*(undefined8 *)StringLiteral_9656);
    puVar1 = StringLiteral_1571;
    plVar10 = *(long **)(unaff_x19 + 0xa0);
    if (plVar10 == (long *)0x0) goto LAB_0262cc7c;
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_0262ca38;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar2,1);
LAB_0262ca38:
    lVar7 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if ((lVar5 == 0) || (FUN_013df2bc(), lVar7 == 0)) goto LAB_0262cc7c;
    FUN_013df780(lVar7,lVar5,*(undefined8 *)Method_OVRLocatable_UpdateSceneAnchorTransforms__);
  }
  puVar1 = System_Collections_Generic_List<VisualElement>_TypeInfo;
  plVar10 = *(long **)(unaff_x19 + 0xa8);
  if (plVar10 != (long *)0x0) {
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)long___var) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0262caf0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724(plVar10,*(long *)long___var,0);
LAB_0262caf0:
    plVar10 = (long *)(*(code *)*puVar4)(plVar10,puVar4[1]);
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if ((lVar7 == 0) || (FUN_011c181c(), plVar10 == (long *)0x0)) goto LAB_0262cc7c;
    lVar5 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)
             Method_System_Runtime_InteropServices_MemoryMarshal_GetNonNullPinnableReference<byte>__
           ) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0262cb80;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_00d59724(plVar10,*(long *)
                                   Method_System_Runtime_InteropServices_MemoryMarshal_GetNonNullPinnableReference<byte>__
                          ,0);
LAB_0262cb80:
    uVar6 = (*(code *)*puVar4)(plVar10,lVar7,puVar4[1]);
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_0262cc7c;
    FUN_025718f8(*(long *)(unaff_x19 + 0x40),uVar6,0);
  }
  plVar10 = *(long **)(unaff_x19 + 0x80);
  *(undefined1 *)(unaff_x19 + 0xc9) = 0;
  if (plVar10 == (long *)0x0) {
LAB_0262cc14:
    bVar3 = 1;
  }
  else {
    lVar7 = *plVar10;
    bVar3 = *(byte *)(*(long *)
                       Method_System_Collections_Generic_List<XmlQualifiedName>_GetEnumerator__ +
                     300);
    if ((*(byte *)(lVar7 + 300) < bVar3) ||
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar3 * 8 + -8) !=
        *(long *)Method_System_Collections_Generic_List<XmlQualifiedName>_GetEnumerator__)) {
      bVar3 = *(byte *)(*(long *)Method_System_Collections_Generic_List<StyleSheet>_Contains__ + 300
                       );
      if ((*(byte *)(lVar7 + 300) < bVar3) ||
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar3 * 8 + -8) !=
          *(long *)Method_System_Collections_Generic_List<StyleSheet>_Contains__))
      goto LAB_0262cc14;
      bVar3 = FUN_02689fe0(plVar10,0);
    }
    else {
      lVar7 = plVar10[6];
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_02681b9c(lVar7,0,0);
      if ((uVar8 & 1) == 0) {
        bVar3 = 0;
        goto LAB_0262cc18;
      }
      if (plVar10[6] == 0) goto LAB_0262cc7c;
      bVar3 = FUN_025b9434(plVar10[6],*(undefined8 *)(unaff_x19 + 0x80),0);
    }
    bVar3 = bVar3 & 1;
  }
LAB_0262cc18:
  *(byte *)(unaff_x19 + 0xca) = bVar3;
  FUN_0262ae04();
  return;
}


