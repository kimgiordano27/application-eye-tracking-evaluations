/*
FUNCTION_NAME: FUN_012c4004
ENTRY_POINT: 012c4004
PROGRAM: Lovesick-libil2cpp.so
SCORE: 140
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_1
*/


long * FUN_012c4004(ulong param_1,long param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  long unaff_x19;
  undefined8 uVar14;
  undefined8 uVar15;
  long *unaff_x25;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_00d5941c();
  }
  uVar14 = *(undefined8 *)(*(long *)(param_2 + 0xc0) + 0x20);
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_00d32864(*unaff_x25);
  }
  puVar4 = Method_Sirenix_Serialization_JsonDataReader_<_ctor>b__7_1__;
  plVar6 = (long *)FUN_01780344(uVar14,0);
  if (plVar6 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar4 + 300);
    if ((*(byte *)(*plVar6 + 300) < bVar1) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4))
    goto LAB_012c457c;
  }
  uVar14 = FUN_01780344(*(undefined8 *)
                         Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__,0);
  uVar7 = FUN_01789ac0(plVar6,uVar14,0);
  if ((uVar7 & 1) == 0) {
    uVar14 = *(undefined8 *)
              Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
    ;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar14 = FUN_01780344(uVar14,0);
    uVar7 = FUN_01789ac0(plVar6,uVar14,0);
    if ((uVar7 & 1) != 0) {
      plVar6 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                           Method_System_Collections_Generic_List<CatchAssistData>_Remove__
                                         );
      if (plVar6 == (long *)0x0) goto LAB_012c4584;
      FUN_0174bd14(plVar6,0);
      goto LAB_012c4118;
    }
    lVar8 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
      lVar8 = FUN_00d5941c();
    }
    uVar14 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_00d32864(*unaff_x25);
    }
    plVar9 = (long *)FUN_01780344(uVar14,0);
    if (plVar9 == (long *)0x0) goto LAB_012c4584;
    uVar7 = (**(code **)(*plVar9 + 0x2c8))(plVar9,plVar6,*(undefined8 *)(*plVar9 + 0x2d0));
    if ((uVar7 & 1) != 0) {
      lVar8 = *unaff_x25;
      puVar12 = (undefined8 *)Oculus_Interaction_PoseDetection_FeatureStateDescription_TypeInfo;
      goto LAB_012c41a8;
    }
    if (plVar6 == (long *)0x0) goto LAB_012c4584;
    uVar7 = (**(code **)(*plVar6 + 1000))(plVar6,*(undefined8 *)(*plVar6 + 0x3f0));
    puVar3 = System_Func<DiscriminatedUnionConverter_UnionCase,_bool>_TypeInfo;
    if ((uVar7 & 1) == 0) {
LAB_012c4424:
      uVar7 = (**(code **)(*plVar6 + 0x5c8))(plVar6,*(undefined8 *)(*plVar6 + 0x5d0));
      if ((uVar7 & 1) == 0) {
switchD_012c44a4_default:
        lVar8 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x30) + 0x132) & 1) == 0) {
          FUN_00d5941c();
        }
        plVar6 = (long *)thunk_FUN_00d62348();
        if (plVar6 != (long *)0x0) {
          lVar13 = *(long *)(unaff_x19 + 0x20);
          uVar2 = *(ushort *)(lVar13 + 0x132);
          lVar8 = lVar13;
          if ((uVar2 & 1) == 0) {
            lVar13 = FUN_00d5941c(lVar13);
            uVar2 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x132);
            lVar8 = *(long *)(unaff_x19 + 0x20);
          }
          uVar14 = **(undefined8 **)(*(long *)(lVar13 + 0xc0) + 0x38);
          if ((uVar2 & 1) == 0) {
            lVar8 = FUN_00d5941c(lVar8);
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x38);
          (**(code **)(lVar8 + 0x10))(uVar14,lVar8,plVar6,0,0);
          return plVar6;
        }
LAB_012c4584:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(int *)(*(long *)
                    Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar14 = FUN_017a5e58(plVar6,0);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864(*unaff_x25);
      }
      uVar5 = FUN_0178c8c0(uVar14,0);
      switch(uVar5) {
      case 5:
        lVar8 = *unaff_x25;
        puVar12 = (undefined8 *)StringLiteral_9632;
        break;
      case 6:
      case 8:
      case 9:
      case 10:
        lVar8 = *unaff_x25;
        puVar12 = (undefined8 *)PTR_DAT_033eb0d8;
        break;
      case 7:
        lVar8 = *unaff_x25;
        puVar12 = (undefined8 *)OVRPlugin_Quatf___TypeInfo;
        break;
      case 0xb:
      case 0xc:
        lVar8 = *unaff_x25;
        puVar12 = (undefined8 *)StringLiteral_9798;
        break;
      default:
        goto switchD_012c44a4_default;
      }
LAB_012c41a8:
      uVar14 = *puVar12;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar14 = FUN_01780344(uVar14,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar4);
      }
    }
    else {
      uVar14 = (**(code **)(*plVar6 + 0x468))(plVar6,*(undefined8 *)(*plVar6 + 0x470));
      uVar15 = *(undefined8 *)puVar3;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864(*unaff_x25);
      }
      uVar15 = FUN_01780344(uVar15,0);
      uVar7 = FUN_01789ac0(uVar14,uVar15,0);
      if ((uVar7 & 1) == 0) goto LAB_012c4424;
      lVar8 = (**(code **)(*plVar6 + 0x488))(plVar6,*(undefined8 *)(*plVar6 + 0x490));
      puVar3 = Method_System_Collections_Generic_List<PropertyInfo>_get_Item__;
      if (lVar8 == 0) goto LAB_012c4584;
      if (*(int *)(lVar8 + 0x18) == 0) {
LAB_012c4588:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar9 = *(long **)(lVar8 + 0x20);
      if (plVar9 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar4 + 300);
        if ((*(byte *)(*plVar9 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar9);
        }
      }
      uVar14 = *(undefined8 *)Method_UnityEngine_UIElements_PanelRaycaster_OnPanelDestroyed__;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar10 = (long *)FUN_01780344(uVar14,0);
      plVar11 = (long *)FUN_00da4fb8(*(undefined8 *)puVar3,1);
      if (plVar11 == (long *)0x0) goto LAB_012c4584;
      if ((plVar9 != (long *)0x0) &&
         (lVar8 = thunk_FUN_00d6225c(plVar9,*(undefined8 *)(*plVar11 + 0x40)), lVar8 == 0)) {
        uVar14 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar14,0);
      }
      if ((int)plVar11[3] == 0) goto LAB_012c4588;
      plVar11[4] = (long)plVar9;
      if ((plVar10 == (long *)0x0) ||
         (plVar10 = (long *)(**(code **)(*plVar10 + 0x928))
                                      (plVar10,plVar11,*(undefined8 *)(*plVar10 + 0x930)),
         plVar10 == (long *)0x0)) goto LAB_012c4584;
      uVar7 = (**(code **)(*plVar10 + 0x2c8))(plVar10,plVar9,*(undefined8 *)(*plVar10 + 0x2d0));
      if ((uVar7 & 1) == 0) goto LAB_012c4424;
      uVar14 = *(undefined8 *)Method_System_RuntimeType_CreateInstanceCheckThis__;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar14 = FUN_01780344(uVar14,0);
      plVar6 = plVar9;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar4);
      }
    }
    plVar6 = (long *)FUN_017b3918(uVar14,plVar6,0);
    lVar8 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
      lVar8 = FUN_00d5941c(lVar8);
    }
    lVar8 = **(long **)(lVar8 + 0xc0);
    if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
      lVar8 = FUN_00d5941c(lVar8);
    }
    if (plVar6 == (long *)0x0) {
      return (long *)0x0;
    }
  }
  else {
    plVar6 = (long *)thunk_FUN_00d62348(*(undefined8 *)StringLiteral_1972);
    if (plVar6 == (long *)0x0) goto LAB_012c4584;
    FUN_0174bc10(plVar6,0);
LAB_012c4118:
    lVar8 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
      lVar8 = FUN_00d5941c();
    }
    lVar8 = **(long **)(lVar8 + 0xc0);
    if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
      lVar8 = FUN_00d5941c(lVar8);
    }
  }
  if ((*(byte *)(lVar8 + 300) <= *(byte *)(*plVar6 + 300)) &&
     (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar8 + 300) * 8 + -8) == lVar8)) {
    return plVar6;
  }
LAB_012c457c:
                    /* WARNING: Subroutine does not return */
  FUN_00da544c(plVar6);
}


