/*
FUNCTION_NAME: Unity.AI.Navigation.NavMeshModifier$$set_ignoreFromBuild
ENTRY_POINT: 055b7e28
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Unity_AI_Navigation_NavMeshModifier__set_ignoreFromBuild
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
               undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  int *piVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined8 uVar18;
  
  if ((DAT_066d17ed & 1) == 0) {
    FUN_02b3c81c(OVR_OpenVR_IVRCompositor__ShowMirrorWindow_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06313048);
    FUN_02b3c81c(OVRPlugin_OVRP_1_7_0_TypeInfo);
    FUN_02b3c81c(UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_TypeInfo);
    FUN_02b3c81c(Method_System_Collections_Generic_Dictionary<int,_float>__ctor__);
    FUN_02b3c81c(System_Runtime_Serialization_XmlFormatClassReaderDelegate_TypeInfo);
    FUN_02b3c81c(UnityEngine_Rendering_Universal_PostProcessUtils_ShaderConstants_TypeInfo);
    FUN_02b3c81c(System_Text_RegularExpressions_Regex_CachedCodeEntry_TypeInfo);
    FUN_02b3c81c(System_Xml_Serialization_XmlEnumAttribute_TypeInfo);
    FUN_02b3c81c(Method_System_Collections_Generic_Dictionary<int,_float>_GetEnumerator__);
    DAT_066d17ed = 1;
  }
  FUN_055b78e0(param_1,param_3,param_4,param_5,param_6,param_7);
  puVar13 = PTR_DAT_06312310;
  if (param_5 == 0) goto LAB_055b84c0;
  uVar16 = *(undefined8 *)(param_5 + 0x10);
  uVar18 = *(undefined8 *)UnityEngine_Rendering_Universal_PostProcessUtils_ShaderConstants_TypeInfo;
  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar18 = FUN_04d8a7b0(uVar18,0);
  plVar5 = (long *)FUN_04da7158(uVar16,uVar18,0);
  puVar2 = UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_TypeInfo;
  if (plVar5 == (long *)0x0) {
    lVar6 = FUN_04da5f98(*(undefined8 *)(param_5 + 0x10),1,0);
    puVar13 = OVR_OpenVR_IVRCompositor__ShowMirrorWindow_TypeInfo;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar16 = *(undefined8 *)OVR_OpenVR_IVRCompositor__ShowMirrorWindow_TypeInfo;
    plVar5 = (long *)thunk_FUN_02b79548(lVar6,uVar16);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44(lVar6,uVar16);
    }
    lVar6 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar13) {
          puVar7 = (undefined8 *)(lVar6 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_055b8254;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_02b7654c(plVar5,*(long *)puVar13,0);
LAB_055b8254:
    uVar16 = (*(code *)*puVar7)(plVar5,puVar7[1]);
    *(undefined8 *)(param_1 + 0x78) = uVar16;
    thunk_FUN_02bb0e9c();
    if (*(long *)(param_1 + 0x78) == 0) {
      return;
    }
    lVar6 = *(long *)(*(long *)(param_1 + 0x78) + 0x68);
    if ((lVar6 != 0) && (*(int *)(lVar6 + 0x10) != 0)) {
      return;
    }
    FUN_0275e13c(param_5);
    plVar5 = *(long **)(param_5 + 0x10);
    FUN_0275e13c(plVar5);
    uVar16 = (**(code **)(*plVar5 + 0x2d8))(plVar5,*(undefined8 *)(*plVar5 + 0x2e0));
    uVar18 = thunk_FUN_02ba3594(Method_System_Collections_Generic_Dictionary<int,_float>_Remove__);
    uVar12 = thunk_FUN_02ba3594(
                               Method_System_Collections_Generic_Dictionary<int,_float>_TryGetValue__
                               );
    uVar16 = FUN_04c0a5c4(uVar18,uVar16,uVar12,0);
    goto LAB_055b8544;
  }
  if (*plVar5 != *(long *)System_Text_RegularExpressions_Regex_CachedCodeEntry_TypeInfo) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3ce44(plVar5);
  }
  lVar6 = *(long *)UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_TypeInfo;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar6 = *(long *)puVar2;
  }
  plVar17 = (long *)(param_1 + 0x88);
  *plVar17 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
  thunk_FUN_02bb0e9c(plVar17);
  if ((char)plVar5[3] != '\0') {
    *(undefined1 *)(param_1 + 0x6b) = 1;
    return;
  }
  if (*(long *)(param_5 + 0x10) == 0) goto LAB_055b84c0;
  lVar6 = plVar5[2];
  plVar5 = (long *)FUN_04d95c44(*(long *)(param_5 + 0x10),lVar6,0x58,0);
  uVar8 = FUN_04cb7c3c(plVar5,0,0);
  if ((uVar8 & 1) != 0) {
    FUN_0275e13c(param_5);
    uVar16 = *(undefined8 *)(param_5 + 0x10);
    puVar13 = Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__;
LAB_055b8530:
    uVar18 = thunk_FUN_02ba3594(puVar13);
    uVar16 = FUN_04c0af28(uVar18,uVar16,lVar6,0);
LAB_055b8544:
    thunk_FUN_02ba3594(PTR_DAT_0631cb60);
    uVar18 = thunk_FUN_02b79644();
    FUN_04d7b3f4(uVar18,uVar16,0);
    uVar16 = thunk_FUN_02ba3594(Method_System_Collections_Generic_Dictionary<int,_float>_set_Item__)
    ;
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar18,uVar16);
  }
  uVar16 = *(undefined8 *)OVRPlugin_OVRP_1_7_0_TypeInfo;
  if (*(int *)(*(long *)(puVar13 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  plVar9 = (long *)FUN_04d8a7b0(uVar16,0);
  if ((plVar5 == (long *)0x0) ||
     (uVar16 = (**(code **)(*plVar5 + 0x3d8))(plVar5,*(undefined8 *)(*plVar5 + 0x3e0)),
     plVar9 == (long *)0x0)) goto LAB_055b84c0;
  uVar8 = (**(code **)(*plVar9 + 0x298))(plVar9,uVar16,*(undefined8 *)(*plVar9 + 0x2a0));
  if ((uVar8 & 1) == 0) {
    uVar16 = *(undefined8 *)Method_System_Collections_Generic_Dictionary<int,_float>__ctor__;
    if (*(int *)(*(long *)(puVar13 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    plVar9 = (long *)FUN_04d8a7b0(uVar16,0);
    uVar16 = (**(code **)(*plVar5 + 0x3d8))(plVar5,*(undefined8 *)(*plVar5 + 0x3e0));
    if (plVar9 == (long *)0x0) goto LAB_055b84c0;
    uVar8 = (**(code **)(*plVar9 + 0x298))(plVar9,uVar16,*(undefined8 *)(*plVar9 + 0x2a0));
    if ((uVar8 & 1) == 0) {
      uVar16 = thunk_FUN_02ba3594(
                                 Method_System_Collections_Generic_Dictionary<int,_SpriteAsset>__ctor__
                                 );
      uVar16 = FUN_04c00984(uVar16,lVar6,0);
      goto LAB_055b8544;
    }
  }
  lVar10 = thunk_FUN_02b79644(*(undefined8 *)System_Xml_Serialization_XmlEnumAttribute_TypeInfo);
  FUN_054d2ac8(lVar10,0);
  plVar9 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,1);
  if (plVar9 == (long *)0x0) goto LAB_055b84c0;
  if ((lVar10 != 0) &&
     (lVar11 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0)) {
    uVar16 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar16,0);
  }
  if ((int)plVar9[3] == 0) goto LAB_055b84e4;
  plVar9[4] = lVar10;
  thunk_FUN_02bb0e9c(plVar9 + 4,lVar10);
  plVar5 = (long *)FUN_04cb7c68(plVar5,0,plVar9,0);
  if (plVar5 == (long *)0x0) {
    return;
  }
  lVar11 = *(long *)System_Runtime_Serialization_XmlFormatClassReaderDelegate_TypeInfo;
  lVar14 = *plVar5;
  bVar1 = *(byte *)(lVar11 + 0x130);
  if ((*(byte *)(lVar14 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar1 * 8 + -8) != lVar11)) {
    lVar11 = *(long *)puVar2;
    bVar1 = *(byte *)(lVar11 + 0x130);
    if ((*(byte *)(lVar14 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar1 * 8 + -8) != lVar11)) {
      FUN_0275e13c(param_5);
      plVar5 = *(long **)(param_5 + 0x10);
      FUN_0275e13c(plVar5);
      uVar16 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      puVar13 = Method_System_Collections_Generic_Dictionary<int,_float>_get_Count__;
      goto LAB_055b8530;
    }
    *plVar17 = (long)plVar5;
    if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != lVar11)) goto LAB_055b84dc;
  }
  else {
    plVar9 = (long *)(param_1 + 0x80);
    *plVar9 = (long)plVar5;
    if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != lVar11)) {
LAB_055b84dc:
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44(plVar5);
    }
    thunk_FUN_02bb0e9c(plVar9,plVar5);
    if ((*plVar9 == 0) || (lVar6 = FUN_054d9f50(*plVar9,0), lVar6 == 0)) goto LAB_055b84c0;
    uVar8 = FUN_0558a954(lVar6,0);
    if ((uVar8 & 1) == 0) {
      if (*plVar9 == 0) goto LAB_055b84c0;
      plVar5 = (long *)FUN_054d9f50(*plVar9,0);
      *plVar17 = (long)plVar5;
    }
    else {
      plVar5 = (long *)thunk_FUN_02b79644(*(undefined8 *)puVar2);
      FUN_0558a674(plVar5,param_6,param_7,0);
      *plVar17 = (long)plVar5;
    }
  }
  thunk_FUN_02bb0e9c(plVar17,plVar5);
  if (param_2 == 0) {
    lVar6 = *plVar17;
    if (lVar6 == 0) goto LAB_055b84c0;
    lVar11 = *(long *)(param_1 + 0x38);
    uVar16 = *(undefined8 *)(lVar6 + 0x10);
    if (lVar11 == 0) {
      plVar5 = (long *)(lVar6 + 0x18);
      goto LAB_055b8240;
    }
  }
  else {
    uVar16 = FUN_0559da8c(param_2,0);
    plVar5 = (long *)(param_2 + 0x28);
LAB_055b8240:
    lVar11 = *plVar5;
  }
  uVar18 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
  FUN_0558a674(uVar18,uVar16,lVar11,0);
  FUN_055b7d80(param_1,uVar18);
  if (*(long *)(param_1 + 0x88) != 0) {
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(*(long *)(param_1 + 0x88) + 0x18);
    thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x50));
    if (*(long *)(param_1 + 0x88) != 0) {
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(*(long *)(param_1 + 0x88) + 0x10);
      thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x48));
      if (*(long *)(param_1 + 0x88) != 0) {
        uVar8 = FUN_0558a954(*(long *)(param_1 + 0x88),0);
        if ((uVar8 & 1) != 0) {
          return;
        }
        if (lVar10 != 0) {
          iVar3 = FUN_054d3014(lVar10,0);
          if (iVar3 < 1) {
            return;
          }
          uVar4 = FUN_054d3014(lVar10,0);
          lVar6 = FUN_02b3c908(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<int,_float>_GetEnumerator__
                               ,uVar4);
          FUN_054d858c(lVar10,lVar6,0,0);
          if (lVar6 != 0) {
            if (*(int *)(lVar6 + 0x18) != 0) {
              *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar6 + 0x20);
              thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x78));
              return;
            }
LAB_055b84e4:
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
        }
      }
    }
  }
LAB_055b84c0:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


