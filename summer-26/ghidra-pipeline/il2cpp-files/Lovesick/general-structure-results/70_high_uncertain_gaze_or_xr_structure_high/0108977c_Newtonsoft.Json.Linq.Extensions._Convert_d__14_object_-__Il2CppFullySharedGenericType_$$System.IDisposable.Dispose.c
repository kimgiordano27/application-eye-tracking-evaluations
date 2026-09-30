/*
FUNCTION_NAME: Newtonsoft.Json.Linq.Extensions.<Convert>d__14<object,-__Il2CppFullySharedGenericType>$$System.IDisposable.Dispose
ENTRY_POINT: 0108977c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;functionality_data_collection_or_telemetry_hits_1
*/


undefined8
Newtonsoft_Json_Linq_Extensions_<Convert>d__14<object,___Il2CppFullySharedGenericType>__System_IDisposable_Dispose
          (undefined8 param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  int unaff_w20;
  int unaff_w21;
  int unaff_w22;
  long *unaff_x23;
  long unaff_x24;
  long *unaff_x27;
  byte unaff_w28;
  byte bVar15;
  int unaff_w29;
  undefined8 in_stack_00000000;
  short sStack0000000000000008;
  undefined2 uStack000000000000000c;
  
  while (unaff_x24 != 0) {
    FUN_0160c430(unaff_x24,param_1,0);
    lVar11 = (**(code **)(*unaff_x23 + 0x188))(unaff_x23,*(undefined8 *)(*unaff_x23 + 400));
    puVar6 = Method_OVRPlugin_<>c_<_cctor>b__796_105__;
    if ((lVar11 == 0) ||
       (lVar11 = UnityEngine_InputSystem_InputActionMap__remove_actionTriggered(lVar11,1,0),
       lVar11 == 0)) break;
    iVar10 = *(int *)(lVar11 + 0x10) + 1;
    unaff_w21 = iVar10 + unaff_w21;
    unaff_w22 = iVar10 + unaff_w22;
    unaff_w20 = *(int *)(lVar11 + 0x10) + unaff_w20;
    do {
      while( true ) {
        bVar15 = unaff_w28;
        iVar10 = unaff_w20;
        unaff_w20 = iVar10 + 1;
        if ((unaff_w21 <= unaff_w20) || (unaff_w29 < unaff_w20)) {
          lVar11 = *unaff_x27;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar11 = *unaff_x27;
          }
          puVar5 = Method_System_Collections_Generic_List<MB3_AgglomerativeClustering_item_s>_Add__;
          puVar4 = Method_System_Collections_Generic_List<CatchAssistData>_get_Item__;
          lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
          if (lVar14 == 0) goto LAB_010899d4;
          if ((*(int *)(lVar14 + 0x18) < 1) || (in_stack_00000000._4_4_ + -1 <= unaff_w20))
          goto LAB_0108999c;
          goto LAB_01089834;
        }
        uVar9 = FUN_015fa29c();
        if ((uVar9 & 0xffff) == 0x3c) break;
        unaff_w28 = bVar15;
        if (unaff_w22 <= unaff_w20) {
          lVar11 = *unaff_x27;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar11 = *unaff_x27;
          }
          if (**(long **)(lVar11 + 0xb8) == 0) goto LAB_010899d4;
          FUN_0160cd0c(**(long **)(lVar11 + 0xb8),uVar9,0);
        }
      }
      uVar9 = FUN_015fa29c();
      lVar11 = *unaff_x27;
      bVar1 = unaff_w29 <= unaff_w20;
      bVar7 = (uVar9 & 0xffff) != 0x2f;
      unaff_w28 = bVar1 || bVar7;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar11 = *unaff_x27;
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
      if (bVar1 || bVar7) {
        if (lVar11 == 0) goto LAB_010899d4;
        uVar2 = 99;
        if ((uVar9 & 0xffff) != 0x23) {
          uVar2 = uVar9;
        }
        FUN_00ac29ec(lVar11,uVar2,*(undefined8 *)StringLiteral_1595);
      }
      else {
        if (lVar11 == 0) goto LAB_010899d4;
        FUN_01324ac8(lVar11,*(int *)(lVar11 + 0x18) + -1,
                     *(undefined8 *)Method_System_Threading_Tasks_ValueTask<int>__ctor__);
      }
      uVar12 = FUN_01603ec8();
      lVar11 = *(long *)puVar6;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar11);
      }
      unaff_x23 = (long *)FUN_0202015c(uVar12,*(undefined8 *)
                                               Method_System_Collections_Concurrent_ConcurrentDictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>_GetKeys__
                                       ,0);
      if (unaff_x23 == (long *)0x0) goto LAB_010899d4;
      uVar13 = FUN_0201bf00(unaff_x23,0);
    } while ((uVar13 & 1) == 0);
    if ((bVar15 & 1) == 0 && (!bVar1 && !bVar7)) {
      sVar8 = FUN_015fa29c();
      iVar3 = unaff_w20;
      if (sVar8 == 99) {
        lVar11 = FUN_00da4fb8(*(undefined8 *)
                               Method_Meta_XR_MRUtilityKit_SceneDebugger_<SnapCanvasInFrontOfCamera>b__78_0__
                              ,2);
        if (lVar11 == 0) break;
        if ((*(int *)(lVar11 + 0x18) == 0) ||
           (*(undefined2 *)(lVar11 + 0x20) = 0x23, *(int *)(lVar11 + 0x18) == 1)) {
LAB_010899d8:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        *(undefined2 *)(lVar11 + 0x22) = 99;
      }
      else {
        lVar11 = FUN_00da4fb8(*(undefined8 *)
                               Method_Meta_XR_MRUtilityKit_SceneDebugger_<SnapCanvasInFrontOfCamera>b__78_0__
                              ,1);
        if (lVar11 == 0) break;
        if (*(int *)(lVar11 + 0x18) == 0) goto LAB_010899d8;
        *(short *)(lVar11 + 0x20) = sVar8;
      }
      while (-1 < iVar10) {
        sVar8 = FUN_015fa29c();
        if ((sVar8 == 0x3c) && (sVar8 = FUN_015fa29c(), sVar8 != 0x2f)) {
          uStack000000000000000c = FUN_015fa29c();
          iVar10 = FUN_010ae258(lVar11,(long)&stack0x00000008 + 4,
                                *(undefined8 *)
                                 Method_Oculus_Interaction_MonoBehaviourEndOfFrameExtensions_UnregisterEndOfFrameCallback__
                               );
          if (iVar10 != -1) {
            lVar11 = *unaff_x27;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar11 = *unaff_x27;
            }
            lVar11 = **(long **)(lVar11 + 0xb8);
            FUN_016047b8();
            uVar12 = FUN_01601d40();
            if (lVar11 == 0) goto LAB_010899d4;
            FUN_0160cfc4(lVar11,0,uVar12,0);
            break;
          }
        }
        iVar10 = iVar3 + -2;
        iVar3 = iVar3 + -1;
      }
    }
    lVar11 = *unaff_x27;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar11 = *unaff_x27;
    }
    unaff_x24 = **(long **)(lVar11 + 0xb8);
    param_1 = FUN_0201bd24(unaff_x23,0);
  }
LAB_010899d4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
LAB_01089834:
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar11 = *unaff_x27;
  }
  lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
  if (lVar14 != 0) {
    if ((in_stack_00000000._4_4_ + -1 <= unaff_w20) || (*(int *)(lVar14 + 0x18) < 1))
    goto LAB_0108999c;
    uVar12 = FUN_01603ec8();
    lVar11 = *(long *)puVar6;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar11);
    }
    lVar11 = FUN_0202015c(uVar12,*(undefined8 *)puVar5,0);
    if (lVar11 != 0) goto code_r0x010898a0;
  }
  goto LAB_010899d4;
code_r0x010898a0:
  uVar13 = FUN_0201bf00(lVar11,0);
  if ((uVar13 & 1) == 0) {
    lVar11 = *unaff_x27;
LAB_0108999c:
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    return **(undefined8 **)(*unaff_x27 + 0xb8);
  }
  lVar14 = FUN_0201bd24(lVar11,0);
  if (lVar14 == 0) goto LAB_010899d4;
  sVar8 = FUN_015fa29c(lVar14,2,0);
  lVar14 = *unaff_x27;
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar14);
    lVar14 = *unaff_x27;
  }
  lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
  if (lVar14 == 0) goto LAB_010899d4;
  FUN_0132138c(lVar14,*(int *)(lVar14 + 0x18) + -1,&stack0x00000008,*(undefined8 *)puVar4);
  if (sStack0000000000000008 == sVar8) {
    lVar14 = *unaff_x27;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar14 = *unaff_x27;
    }
    lVar14 = **(long **)(lVar14 + 0xb8);
    uVar12 = FUN_0201bd24(lVar11,0);
    if (lVar14 == 0) goto LAB_010899d4;
    FUN_0160c430(lVar14,uVar12,0);
    lVar14 = *(long *)(*(long *)(*unaff_x27 + 0xb8) + 8);
    if (lVar14 == 0) goto LAB_010899d4;
    FUN_01324ac8(lVar14,*(int *)(lVar14 + 0x18) + -1,
                 *(undefined8 *)Method_System_Threading_Tasks_ValueTask<int>__ctor__);
  }
  lVar14 = FUN_0201bd24(lVar11,0);
  if (lVar14 == 0) goto LAB_010899d4;
  lVar11 = *unaff_x27;
  unaff_w20 = *(int *)(lVar14 + 0x10) + unaff_w20;
  goto LAB_01089834;
}


