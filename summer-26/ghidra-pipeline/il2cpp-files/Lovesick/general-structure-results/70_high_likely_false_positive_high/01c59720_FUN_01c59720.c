/*
FUNCTION_NAME: FUN_01c59720
ENTRY_POINT: 01c59720
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;data_collection;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_rendering_without_foveation_or_eye_source
*/


/* WARNING: Removing unreachable block (ram,0x01c5a0b0) */
/* WARNING: Removing unreachable block (ram,0x01c5a0e8) */
/* WARNING: Removing unreachable block (ram,0x01c5a0d4) */
/* WARNING: Removing unreachable block (ram,0x01c5a0a8) */
/* WARNING: Removing unreachable block (ram,0x01c5a0c0) */

void FUN_01c59720(undefined8 param_1,long *param_2,long *param_3,int param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  int *piVar16;
  long *plVar17;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_0377eb4a & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_10443);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<NamedValue>__ctor__);
    thunk_FUN_00d48444(MetaXRAcousticMaterialMapping_<>c__DisplayClass0_0_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f5b68);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Controller>_Remove__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<ProbeVolumeState,_ProbeVolumeAsset>_ContainsKey__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Object_FindObjectOfType<SceneLoader>__);
    thunk_FUN_00d48444(Method_UnityEngine_IntegratedSubsystemDescriptor<XRInputSubsystem>__ctor__);
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeArray_Enumerator<XRHumanBodyJoint>_get_Current__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_DataColumn>_get_Item__);
    thunk_FUN_00d48444(Method_OVRSpatialAnchor_OnSpaceSetComponentStatusComplete__);
    thunk_FUN_00d48444(Method_Newtonsoft_Json_Utilities_ReflectionUtils_GetMemberUnderlyingType__);
    thunk_FUN_00d48444(StringLiteral_9688);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_System_Diagnostics_TraceListener_set_IndentSize__);
    thunk_FUN_00d48444(OVR_OpenVR_IVRIOBuffer__Close_TypeInfo);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<AnimationMultiSfxPlayer_Mapping>_Dispose__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_UI_VirtualMouseInput_OnAfterInputUpdate__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_UIR_BasicNodePool<TextureEntry>__ctor__);
    thunk_FUN_00d48444(
                      Method_Sirenix_Serialization_Utilities_EmitUtilities_CreateWeakInstanceMethodCaller__
                      );
    DAT_0377eb4a = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar6 = FUN_0268b4e0(param_1,0,0);
  if ((uVar6 & 1) != 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar7 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar13 = thunk_FUN_00d48444(StringLiteral_12471);
    FUN_016ec5b8(uVar7,uVar13,0);
    uVar13 = thunk_FUN_00d48444(
                               Method_UnityEngine_XR_Management_XRLoaderHelper_StartSubsystem<XRInputSubsystem>__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar7,uVar13);
  }
  if ((*param_2 != 0) && (*(long *)(*param_2 + 0x18) != 0)) {
    if (param_4 == 2) {
      local_68 = 2;
      local_78 = *(undefined8 *)
                  Method_UnityEngine_IntegratedSubsystemDescriptor<XRInputSubsystem>__ctor__;
      uStack_70 = 0xffffffffffffffff;
      uVar7 = FUN_017a7f78(&local_78,0);
      uVar7 = FUN_01600424(*(undefined8 *)
                            Method_UnityEngine_UIElements_UIR_BasicNodePool<TextureEntry>__ctor__,
                           uVar7,*(undefined8 *)
                                  Method_Sirenix_Serialization_Utilities_EmitUtilities_CreateWeakInstanceMethodCaller__
                           ,0);
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_026610e4(uVar7,0);
    }
    else {
      if (*param_3 == 0) {
        lVar8 = thunk_FUN_00d62348(*(undefined8 *)OVR_OpenVR_IVRIOBuffer__Close_TypeInfo);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01320e50(lVar8,*(undefined8 *)Method_System_Diagnostics_TraceListener_set_IndentSize__);
        *param_3 = lVar8;
      }
      puVar2 = 
      Method_System_Collections_Generic_Dictionary<ProbeVolumeState,_ProbeVolumeAsset>_ContainsKey__
      ;
      puVar1 = MetaXRAcousticMaterialMapping_<>c__DisplayClass0_0_TypeInfo;
      if (*(int *)(*(long *)Method_UnityEngine_Object_FindObjectOfType<SceneLoader>__ + 0xe0) == 0)
      {
        thunk_FUN_00d32864();
      }
      plVar17 = (long *)StringLiteral_10310;
      plVar9 = (long *)FUN_01254790(*(undefined8 *)puVar1);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      plVar10 = (long *)FUN_01254790(*(undefined8 *)StringLiteral_10443);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      plVar11 = (long *)FUN_01c2a7ec(plVar9[3],0);
      lVar8 = *param_2;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      (**(code **)(*plVar11 + 0x368))
                (plVar11,lVar8,0,*(undefined4 *)(lVar8 + 0x18),*(undefined8 *)(*plVar11 + 0x370));
      if (plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      plVar11 = (long *)FUN_01c2a7ec(plVar9[3],0);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      (**(code **)(*plVar11 + 0x208))(plVar11,0,*(undefined8 *)(*plVar11 + 0x210));
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01c53b20(plVar10[3],*param_3);
      puVar5 = StringLiteral_9688;
      puVar4 = Method_UnityEngine_InputSystem_UI_VirtualMouseInput_OnAfterInputUpdate__;
      puVar2 = Method_Newtonsoft_Json_Utilities_ReflectionUtils_GetMemberUnderlyingType__;
      puVar1 = Method_System_Collections_Generic_List<Controller>_Remove__;
      if (param_5 == 0) {
        if (*(int *)(*(long *)Method_System_Collections_Generic_List<Controller>_Remove__ + 0xe0) ==
            0) {
          thunk_FUN_00d32864();
        }
        plVar11 = (long *)FUN_01254790(*(undefined8 *)
                                        Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<NamedValue>__ctor__
                                      );
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (plVar11[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar8 = FUN_01c25128(plVar11[3],0);
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_List_Enumerator<AnimationMultiSfxPlayer_Mapping>_Dispose__
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar7 = FUN_01c37adc(0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c(uVar7,uVar7);
        }
        FUN_01c37e70(lVar8,uVar7,0);
        uVar6 = FUN_012d8dd0(*(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<string,_DataColumn>_get_Item__
                            );
        lVar8 = plVar11[3];
        if ((uVar6 & 1) == 0) {
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar8 = FUN_01c25128(lVar8,0);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar8 = FUN_01c254c8(lVar8,0);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01c38380(lVar8,0,0);
          if (plVar11[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar8 = FUN_01c25128(plVar11[3],0);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar8 = FUN_01c254c8(lVar8,0);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01c38344(lVar8,0,0);
          if (plVar11[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar8 = FUN_01c25128(plVar11[3],0);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar8 = FUN_01c254c8(lVar8,0);
          if (*(int *)(*(long *)
                        Method_Unity_Collections_NativeArray_Enumerator<XRHumanBodyJoint>_get_Current__
                      + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar7 = FUN_01be25d8(0);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c(uVar7,uVar7);
          }
          FUN_01c38268(lVar8,uVar7,0);
        }
        else {
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar8 = FUN_01c25128(lVar8,0);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar8 = FUN_01c254c8(lVar8,0);
          puVar3 = Method_OVRSpatialAnchor_OnSpaceSetComponentStatusComplete__;
          lVar15 = FUN_012d8e4c(*(undefined8 *)
                                 Method_OVRSpatialAnchor_OnSpaceSetComponentStatusComplete__);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01c38380(lVar8,*(undefined4 *)(lVar15 + 0x28),0);
          if (plVar11[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar8 = FUN_01c25128(plVar11[3],0);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar8 = FUN_01c254c8(lVar8,0);
          lVar15 = FUN_012d8e4c(*(undefined8 *)puVar3);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01c38344(lVar8,*(undefined4 *)(lVar15 + 0x24),0);
          if (plVar11[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar8 = FUN_01c25128(plVar11[3],0);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar8 = FUN_01c254c8(lVar8,0);
          lVar15 = FUN_012d8e4c(*(undefined8 *)puVar3);
          plVar17 = (long *)StringLiteral_10310;
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar7 = FUN_01be290c(lVar15,0);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c(uVar7,uVar7);
          }
          FUN_01c38268(lVar8,uVar7,0);
        }
        if (plVar11[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        *(long *)(plVar11[3] + 0x50) = plVar10[3];
        if (plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar7 = FUN_01c2a7ec(plVar9[3],0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar13 = FUN_01255044(plVar11,*(undefined8 *)PTR_DAT_033f5b68);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar14 = (long *)FUN_01c5bb8c(param_4,uVar7,uVar13);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar15 = *plVar14;
        lVar8 = *(long *)puVar2;
        uVar6 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar6 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar8) {
              puVar12 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_01c59e58;
            }
            uVar6 = uVar6 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar6 != 0);
        }
        puVar12 = (undefined8 *)FUN_00d59724(plVar14,lVar8,0);
LAB_01c59e58:
        uVar7 = (*(code *)*puVar12)(plVar14,puVar12[1]);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar7 = thunk_FUN_00d6225c(uVar7,*(undefined8 *)puVar5);
        FUN_01c5a8d0(param_1,uVar7);
        if (plVar14 != (long *)0x0) {
          lVar8 = *plVar14;
          uVar6 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar6 != 0) {
            piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *plVar17) {
                puVar12 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_01c59ee4;
              }
              uVar6 = uVar6 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar6 != 0);
          }
          puVar12 = (undefined8 *)FUN_00d59724(plVar14,*plVar17,0);
LAB_01c59ee4:
          (*(code *)*puVar12)(plVar14,puVar12[1]);
        }
        if (plVar11 != (long *)0x0) {
          lVar8 = *plVar11;
          uVar6 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar6 != 0) {
            piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *plVar17) {
                puVar12 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_01c59f44;
              }
              uVar6 = uVar6 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar6 != 0);
          }
          puVar12 = (undefined8 *)FUN_00d59724(plVar11,*plVar17,0);
LAB_01c59f44:
          (*(code *)*puVar12)(plVar11,puVar12[1]);
        }
      }
      else {
        *(long *)(param_5 + 0x50) = plVar10[3];
        if (plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar7 = FUN_01c2a7ec(plVar9[3],0);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar11 = (long *)FUN_01c5bb8c(param_4,uVar7,param_5);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar15 = *plVar11;
        lVar8 = *(long *)puVar2;
        uVar6 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar6 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar8) {
              puVar12 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_01c59ae0;
            }
            uVar6 = uVar6 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar6 != 0);
        }
        puVar12 = (undefined8 *)FUN_00d59724(plVar11,lVar8,0);
LAB_01c59ae0:
        uVar7 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar7 = thunk_FUN_00d6225c(uVar7,*(undefined8 *)puVar5);
        FUN_01c5a8d0(param_1,uVar7);
        if (plVar11 != (long *)0x0) {
          lVar8 = *plVar11;
          uVar6 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar6 != 0) {
            piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *plVar17) {
                puVar12 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_01c59b70;
              }
              uVar6 = uVar6 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar6 != 0);
          }
          puVar12 = (undefined8 *)FUN_00d59724(plVar11,*plVar17,0);
LAB_01c59b70:
          (*(code *)*puVar12)(plVar11,puVar12[1]);
        }
      }
      if (plVar10 != (long *)0x0) {
        lVar8 = *plVar10;
        uVar6 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar6 != 0) {
          piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *plVar17) {
              puVar12 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_01c59fa8;
            }
            uVar6 = uVar6 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar6 != 0);
        }
        puVar12 = (undefined8 *)FUN_00d59724(plVar10,*plVar17,0);
LAB_01c59fa8:
        (*(code *)*puVar12)(plVar10,puVar12[1]);
      }
      if (plVar9 != (long *)0x0) {
        lVar8 = *plVar9;
        uVar6 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar6 != 0) {
          piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *plVar17) {
              puVar12 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_01c5a00c;
            }
            uVar6 = uVar6 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar6 != 0);
        }
        puVar12 = (undefined8 *)FUN_00d59724(plVar9,*plVar17,0);
LAB_01c5a00c:
        (*(code *)*puVar12)(plVar9,puVar12[1]);
      }
    }
  }
  return;
}


