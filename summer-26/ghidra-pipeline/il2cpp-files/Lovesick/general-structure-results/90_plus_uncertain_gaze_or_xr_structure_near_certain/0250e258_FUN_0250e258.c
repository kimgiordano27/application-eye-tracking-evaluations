/*
FUNCTION_NAME: FUN_0250e258
ENTRY_POINT: 0250e258
PROGRAM: Lovesick-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x0250e568) */

void FUN_0250e258(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  
  if ((DAT_03782936 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnItemIndexChanged__
                      );
    thunk_FUN_00d48444(StringLiteral_1200);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_66__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<OVRLocatable_TrackingSpacePose>_get_Current__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Controller>_get_Count__);
    thunk_FUN_00d48444(Method_Newtonsoft_Json_Converters_ExpandoObjectConverter_ReadList__);
    DAT_03782936 = 1;
  }
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar9 = *param_1;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) ==
          *(long *)Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnItemIndexChanged__) {
        puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_0250e34c;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)
           FUN_00d59724(param_1,*(long *)
                                 Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnItemIndexChanged__
                        ,0);
LAB_0250e34c:
  plVar7 = (long *)(*(code *)*puVar6)(param_1,puVar6[1]);
  puVar5 = StringLiteral_1200;
  puVar4 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
  puVar3 = Method_Newtonsoft_Json_Converters_ExpandoObjectConverter_ReadList__;
  puVar2 = Method_System_Collections_Generic_List<Controller>_get_Count__;
  puVar1 = 
  Method_System_Collections_Generic_List_Enumerator<OVRLocatable_TrackingSpacePose>_get_Current__;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  do {
    lVar9 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0250e3d4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar4,0);
LAB_0250e3d4:
    uVar10 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar7 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar10 == 0) goto LAB_0250e508;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar5) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto 
          UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator__UnsubscribeZConstraintAction
          ;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar5,0);
UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator__UnsubscribeZConstraintAction
    :
    lVar9 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if (lVar9 == 0) {
      lVar8 = 0;
    }
    else {
      uVar12 = *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_66__;
      lVar8 = thunk_FUN_00d6225c(lVar9,uVar12);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(lVar9,uVar12);
      }
    }
    auVar13 = FUN_025169f0(param_2,param_3,lVar8,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    auVar13 = FUN_013953ac(auVar13._0_8_,auVar13._8_8_,*(undefined8 *)puVar2);
    if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_00cb9e18(param_4,auVar13._0_8_,auVar13._8_8_,*(undefined8 *)puVar1);
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == *(long *)StringLiteral_10310) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0250e524;
    }
  }
LAB_0250e508:
  puVar6 = (undefined8 *)FUN_00d59724(plVar7,*(long *)StringLiteral_10310,0);
LAB_0250e524:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
  return;
}


