/*
FUNCTION_NAME: FUN_01c2d3ec
ENTRY_POINT: 01c2d3ec
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x01c2db1c) */

long * FUN_01c2d3ec(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  int local_84;
  char local_80 [4];
  char local_7c [4];
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar3 = Method_Oculus_Interaction_UpdateDriverGroup_<>c_<InjectUpdateDrivers>b__15_0__;
  if ((DAT_0377ea21 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_IO_FileInfo_get_Length__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<JsonSerializerInternalReader_CreatorPropertyContext>__ctor__
                      );
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_UpdateDriverGroup_<>c_<InjectUpdateDrivers>b__15_0__
                      );
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<object,_object>_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_UIElements_PointerId_TypeInfo);
    thunk_FUN_00d48444(System_Runtime_CompilerServices_AsyncTaskMethodBuilder_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_ResourceLocator>_TryGetValue__
                      );
    thunk_FUN_00d48444(Mono_Net_Security_MonoSslClientAuthenticationOptions_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Collider>_Clear__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_66B8ADE862334112630302D3FDA850DE686B805F4B769228FEEE8737D734B051
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                      );
    thunk_FUN_00d48444(OVR_OpenVR_IVRChaperoneSetup__ReloadFromDisk_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f38b8);
    thunk_FUN_00d48444(Method_UnityEngine_Texture2D_Apply__);
    thunk_FUN_00d48444(TMPro_TMP_InputField_SubmitEvent_TypeInfo);
    DAT_0377ea21 = 1;
  }
  local_78 = 0;
  local_70 = 0;
  local_7c[0] = '\0';
  local_80[0] = '\0';
  local_84 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar4 = FUN_01c2de50(param_2,&local_70,local_7c,&local_78,local_80,&local_84);
  puVar3 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  if ((uVar4 & 1) == 0) {
    return (long *)0x0;
  }
  plVar5 = (long *)(**(code **)(*param_1 + 0x188))
                             (param_1,local_70,param_3,*(undefined8 *)(*param_1 + 400));
  lVar10 = *(long *)puVar3;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar10);
  }
  uVar4 = FUN_01789ac0(plVar5,0,0);
  if ((uVar4 & 1) != 0) {
    return (long *)0x0;
  }
  if (local_7c[0] != '\0') {
    if (plVar5 == (long *)0x0) goto System_Data_DataColumnCollection___ctor;
    uVar4 = (**(code **)(*plVar5 + 1000))(plVar5,*(undefined8 *)(*plVar5 + 0x3f0));
    puVar1 = Method_System_IO_FileInfo_get_Length__;
    if ((uVar4 & 1) == 0) {
      return (long *)0x0;
    }
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_List<JsonSerializerInternalReader_CreatorPropertyContext>__ctor__
                + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar6 = (long *)FUN_01254790(*(undefined8 *)puVar1);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar10 = plVar6[3];
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar12 = *(long *)UnityEngine_UIElements_PointerId_TypeInfo;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    uVar4 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 200));
    if ((uVar4 & 1) == 0) {
      *(undefined4 *)(lVar10 + 0x18) = 0;
    }
    else {
      iVar15 = *(int *)(lVar10 + 0x18);
      *(undefined4 *)(lVar10 + 0x18) = 0;
      if (0 < iVar15) {
        FUN_0179519c(*(undefined8 *)(lVar10 + 0x10),0,iVar15,0);
      }
    }
    lVar12 = local_78;
    puVar2 = Mono_Net_Security_MonoSslClientAuthenticationOptions_TypeInfo;
    puVar1 = System_Collections_Generic_Dictionary<object,_object>_TypeInfo;
    if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (0 < *(int *)(local_78 + 0x18)) {
      iVar15 = 0;
      do {
        FUN_0132138c(lVar12,iVar15,&local_68,*(undefined8 *)puVar2);
        uVar7 = (**(code **)(*param_1 + 0x188))
                          (param_1,local_68,param_3,*(undefined8 *)(*param_1 + 400));
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar4 = FUN_01789ac0(uVar7,0,0);
        if ((uVar4 & 1) != 0) goto LAB_01c2d95c;
        FUN_00acc5dc(lVar10,uVar7,*(undefined8 *)puVar1);
        iVar15 = iVar15 + 1;
      } while (iVar15 < *(int *)(lVar12 + 0x18));
    }
    lVar12 = FUN_01325140(lVar10,*(undefined8 *)
                                  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_TypeInfo);
    puVar3 = Method_System_Collections_Generic_List<Collider>_Clear__;
    if (*(int *)(*(long *)Method_System_Collections_Generic_List<Collider>_Clear__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_01c65a4c(plVar5,lVar12,0);
    puVar2 = TMPro_TMP_InputField_SubmitEvent_TypeInfo;
    puVar1 = PTR_DAT_033f38b8;
    if ((uVar4 & 1) == 0) {
      if (param_3 == 0) {
LAB_01c2d95c:
        uVar14 = 9;
      }
      else {
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar10 = *(long *)TMPro_TMP_InputField_SubmitEvent_TypeInfo;
        if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
          uVar4 = 0;
          uVar11 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
          do {
            if (uVar11 <= uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            uVar7 = *(undefined8 *)(lVar12 + 0x20 + uVar4 * 8);
            uVar11 = FUN_015fe7e8(lVar10,*(undefined8 *)puVar2,0);
            if ((uVar11 & 1) != 0) {
              lVar10 = FUN_015f5b28(lVar10,*(undefined8 *)puVar1,0);
            }
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar7 = FUN_01c4b4e0(uVar7,0);
            lVar10 = FUN_015f5b28(lVar10,uVar7,0);
            uVar11 = (ulong)*(uint *)(lVar12 + 0x18);
            uVar4 = uVar4 + 1;
          } while ((long)uVar4 < (long)(int)*(uint *)(lVar12 + 0x18));
        }
        plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,7);
        puVar1 = OVR_OpenVR_IVRChaperoneSetup__ReloadFromDisk_TypeInfo;
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if ((*(long *)OVR_OpenVR_IVRChaperoneSetup__ReloadFromDisk_TypeInfo != 0) &&
           (lVar12 = thunk_FUN_00d6225c(*(long *)
                                         OVR_OpenVR_IVRChaperoneSetup__ReloadFromDisk_TypeInfo,
                                        *(undefined8 *)(*plVar8 + 0x40)), lVar12 == 0)) {
          uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar7,0);
        }
        uVar14 = *(uint *)(plVar8 + 3);
        if (uVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar8[4] = *(long *)puVar1;
        if (lVar10 != 0) {
          lVar12 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar8 + 0x40));
          if (lVar12 == 0) {
            uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar7,0);
          }
          uVar14 = *(uint *)(plVar8 + 3);
        }
        puVar1 = 
        Field_<PrivateImplementationDetails>_66B8ADE862334112630302D3FDA850DE686B805F4B769228FEEE8737D734B051
        ;
        if (uVar14 < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar8[5] = lVar10;
        lVar10 = *(long *)puVar1;
        if (lVar10 != 0) {
          lVar10 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar8 + 0x40));
          if (lVar10 == 0) {
            uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar7,0);
          }
          uVar14 = *(uint *)(plVar8 + 3);
        }
        if (uVar14 < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar8[6] = *(long *)puVar1;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar10 = FUN_01c4b4e0(plVar5,0);
        if ((lVar10 != 0) &&
           (lVar12 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar12 == 0)) {
          uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar7,0);
        }
        puVar3 = Method_UnityEngine_Texture2D_Apply__;
        uVar14 = *(uint *)(plVar8 + 3);
        if (uVar14 < 4) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar8[7] = lVar10;
        lVar10 = *(long *)puVar3;
        if (lVar10 != 0) {
          lVar10 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar8 + 0x40));
          if (lVar10 == 0) {
            uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar7,0);
          }
          uVar14 = *(uint *)(plVar8 + 3);
        }
        if (uVar14 < 5) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar8[8] = *(long *)puVar3;
        if (param_2 != 0) {
          lVar10 = thunk_FUN_00d6225c(param_2,*(undefined8 *)(*plVar8 + 0x40));
          if (lVar10 == 0) {
            uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar7,0);
          }
          uVar14 = *(uint *)(plVar8 + 3);
        }
        puVar3 = Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
        ;
        if (uVar14 < 6) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar8[9] = param_2;
        lVar10 = *(long *)puVar3;
        if (lVar10 != 0) {
          lVar10 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar8 + 0x40));
          if (lVar10 == 0) {
            uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar7,0);
          }
          uVar14 = *(uint *)(plVar8 + 3);
        }
        if (uVar14 < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar8[10] = *(long *)puVar3;
        uVar7 = FUN_01600844(plVar8,0);
        FUN_01c25764(param_3,uVar7);
        uVar14 = 9;
      }
    }
    else {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x928))
                                 (plVar5,lVar12,*(undefined8 *)(*plVar5 + 0x930));
      lVar12 = *(long *)UnityEngine_UIElements_PointerId_TypeInfo;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      uVar4 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 200));
      if ((uVar4 & 1) == 0) {
        *(undefined4 *)(lVar10 + 0x18) = 0;
      }
      else {
        iVar15 = *(int *)(lVar10 + 0x18);
        *(undefined4 *)(lVar10 + 0x18) = 0;
        if (0 < iVar15) {
          FUN_0179519c(*(undefined8 *)(lVar10 + 0x10),0,iVar15,0);
        }
      }
      uVar14 = 4;
    }
    if (plVar6 != (long *)0x0) {
      lVar10 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar4 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)StringLiteral_10310) {
            puVar9 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_01c2da6c;
          }
          uVar4 = uVar4 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar4 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724(plVar6,*(long *)StringLiteral_10310,0);
LAB_01c2da6c:
      (*(code *)*puVar9)(plVar6,puVar9[1]);
    }
    if ((uVar14 | 4) != 4) {
      return (long *)0x0;
    }
  }
  if (local_80[0] == '\0') {
    return plVar5;
  }
  if (local_84 == 1) {
    if (plVar5 != (long *)0x0) {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x8f8))(plVar5,*(undefined8 *)(*plVar5 + 0x900));
      return plVar5;
    }
  }
  else if (plVar5 != (long *)0x0) {
    plVar5 = (long *)(**(code **)(*plVar5 + 0x908))
                               (plVar5,local_84,*(undefined8 *)(*plVar5 + 0x910));
    return plVar5;
  }
System_Data_DataColumnCollection___ctor:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


