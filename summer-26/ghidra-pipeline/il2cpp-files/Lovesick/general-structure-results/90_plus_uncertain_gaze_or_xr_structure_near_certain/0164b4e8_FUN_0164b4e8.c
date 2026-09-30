/*
FUNCTION_NAME: FUN_0164b4e8
ENTRY_POINT: 0164b4e8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 132
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_14;paired_field_refs_with_eye_source;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


undefined8 FUN_0164b4e8(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  long lVar10;
  long *local_28;
  
  if ((DAT_037782b5 & 1) == 0) {
    thunk_FUN_00d48444(Method_Newtonsoft_Json_Utilities_StringUtils_Trim__);
    thunk_FUN_00d48444(Method_OVRTask_FromRequest<OVRResult<ulong,_OVRPlugin_Result>>__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<DebugData>_GetEnumerator__);
    thunk_FUN_00d48444(Method_System_Convert_ToInt64__);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(StringLiteral_922);
    thunk_FUN_00d48444(System_Predicate<Tween_TweenCurve>_TypeInfo);
    DAT_037782b5 = 1;
  }
  iVar9 = *(int *)(param_1 + 0x10);
  lVar10 = *(long *)(param_1 + 0x28);
  if (iVar9 == 2) {
    plVar4 = *(long **)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    if (plVar4 != (long *)0x0) goto LAB_0164b718;
LAB_0164b608:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (iVar9 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    iVar9 = *(int *)(param_1 + 0x30) + 1;
    *(int *)(param_1 + 0x30) = iVar9;
  }
  else {
    if (iVar9 != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x30) = 0;
    iVar9 = 0;
  }
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar6 = *(long *)(lVar10 + 0x18);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (iVar9 < *(int *)(lVar6 + 0x18)) {
    FUN_0132138c(lVar6,iVar9,&local_28,*(undefined8 *)System_Predicate<Tween_TweenCurve>_TypeInfo);
    *(long **)(param_1 + 0x18) = local_28;
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  if (*(long *)(lVar10 + 0x20) == 0) {
    return 0;
  }
  iVar9 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  do {
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(long *)(lVar10 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    iVar2 = FUN_01261074(*(long *)(lVar10 + 0x20),
                         *(undefined8 *)Method_Newtonsoft_Json_Utilities_StringUtils_Trim__);
    puVar1 = Method_OVRTask_FromRequest<OVRResult<ulong,_OVRPlugin_Result>>__;
    if (iVar2 <= iVar9) {
      return 0;
    }
    if (*(long *)(lVar10 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01261120(*(long *)(lVar10 + 0x20),*(undefined4 *)(param_1 + 0x30),&local_28,
                 *(undefined8 *)Method_OVRTask_FromRequest<OVRResult<ulong,_OVRPlugin_Result>>__);
    if (local_28 != (long *)0x0) {
      if (*(long *)(lVar10 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01261120(*(long *)(lVar10 + 0x20),*(undefined4 *)(param_1 + 0x30),&local_28,
                   *(undefined8 *)puVar1);
      plVar4 = local_28;
      if (local_28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar6 = *local_28;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_System_Collections_Generic_List<DebugData>_GetEnumerator__) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0164b6f4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_00d59724(local_28,*(long *)
                                      Method_System_Collections_Generic_List<DebugData>_GetEnumerator__
                            ,0);
LAB_0164b6f4:
      plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
      *(long **)(param_1 + 0x38) = plVar4;
      *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
      if (plVar4 == (long *)0x0) goto LAB_0164b608;
LAB_0164b718:
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__)
          {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0164b76c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_00d59724(plVar4,*(long *)
                                    Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                            ,0);
LAB_0164b76c:
      uVar7 = (*(code *)*puVar3)(plVar4,puVar3[1]);
      if ((uVar7 & 1) != 0) {
        plVar4 = *(long **)(param_1 + 0x38);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar10 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar7 == 0) goto LAB_0164b804;
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        break;
      }
      FUN_0164b8ec();
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    iVar9 = *(int *)(param_1 + 0x30) + 1;
    *(int *)(param_1 + 0x30) = iVar9;
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)Method_System_Convert_ToInt64__) {
      puVar3 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0164b820;
    }
  }
LAB_0164b804:
  puVar3 = (undefined8 *)FUN_00d59724(plVar4,*(long *)Method_System_Convert_ToInt64__,0);
LAB_0164b820:
  uVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  *(undefined4 *)(param_1 + 0x10) = 2;
  return 1;
}


