/*
FUNCTION_NAME: FUN_08727b38
ENTRY_POINT: 08727b38
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


void FUN_08727b38(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  int local_68 [6];
  
  if ((DAT_0943c8f5 & 1) == 0) {
    FUN_03c8f898(
                Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource<AsyncGPUReadbackRequest>_TypeInfo
                );
    FUN_03c8f898(Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource<Object>_TypeInfo);
    FUN_03c8f898(Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource<UnityWebRequest>_TypeInfo)
    ;
    FUN_03c8f898(UnityEngine_UIElements_BaseCompositeField<Rect,_FloatField,_float>_TypeInfo);
    FUN_03c8f898(UnityEngine_UIElements_BaseCompositeField<RectInt,_IntegerField,_int>_TypeInfo);
    FUN_03c8f898(UnityEngine_UIElements_BaseCompositeField<Vector2,_FloatField,_float>_TypeInfo);
    DAT_0943c8f5 = 1;
  }
  puVar4 = UnityEngine_UIElements_BaseCompositeField<RectInt,_IntegerField,_int>_TypeInfo;
  puVar3 = UnityEngine_UIElements_BaseCompositeField<Rect,_FloatField,_float>_TypeInfo;
  puVar2 = Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource<UnityWebRequest>_TypeInfo;
  puVar1 = 
  Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource<AsyncGPUReadbackRequest>_TypeInfo;
  if (param_2 != 0) {
    FUN_08727db0(local_68,param_2);
    do {
      switch(local_68[0]) {
      case 0xe:
        uVar7 = FUN_08727fd0(param_1,param_2);
        goto LAB_08727c30;
      case 0xf:
      case 0x14:
        goto switchD_08727c08_caseD_f;
      case 0x10:
      case 0x11:
      case 0x13:
switchD_08727c08_caseD_10:
        uVar7 = thunk_FUN_03ce5214(
                                  UnityEngine_UIElements_BaseCompositeField<Vector2Int,_IntegerField,_int>_TypeInfo
                                  );
        uVar7 = thunk_FUN_03cf4e64(uVar7,local_68);
        uVar9 = thunk_FUN_03ce5214(
                                  UnityEngine_UIElements_BaseCompositeField<Vector3,_FloatField,_float>_TypeInfo
                                  );
        uVar7 = FUN_06f6be0c(uVar9,uVar7,0);
        thunk_FUN_03ce5214(PTR_DAT_08e695a0);
        uVar9 = thunk_FUN_03cf5234();
        FUN_071396dc(uVar9,uVar7,0);
        uVar7 = thunk_FUN_03ce5214(
                                  UnityEngine_UIElements_BaseCompositeField<Vector3Int,_IntegerField,_int>_TypeInfo
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_03c8f9fc(uVar9,uVar7);
      default:
        if (local_68[0] != 1) goto switchD_08727c08_caseD_10;
      case 0x12:
        uVar7 = FUN_08727e70(param_1,param_2);
LAB_08727c30:
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_08727d3c;
        uVar7 = FUN_05aa0fdc(*(long *)(param_1 + 0x18),uVar7,*(undefined8 *)puVar4);
        iVar5 = UnityEngine_VFX_VFXEventAttribute__SetInt(uVar7,param_2);
        if (iVar5 != 0) {
          lVar8 = *(long *)(param_1 + 0x20);
          if (lVar8 == 0) goto LAB_08727d3c;
          if (0 < *(int *)(lVar8 + 0x18)) {
            do {
              iVar6 = FUN_05a9ffe4(lVar8,*(undefined8 *)puVar1);
              while( true ) {
                if ((iVar6 <= iVar5) || (iVar6 == 5)) goto LAB_08727ca4;
                FUN_08728348(param_1);
                lVar8 = *(long *)(param_1 + 0x20);
                if (lVar8 == 0) goto LAB_08727d3c;
                if (0 < *(int *)(lVar8 + 0x18)) break;
                iVar6 = 0;
              }
            } while( true );
          }
LAB_08727ca4:
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_08727d3c;
          FUN_05aa0078(*(long *)(param_1 + 0x20),iVar5,*(undefined8 *)puVar3);
        }
        FUN_08727db0(local_68,param_2);
      }
    } while( true );
  }
LAB_08727d3c:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
switchD_08727c08_caseD_f:
  lVar8 = *(long *)(param_1 + 0x20);
  if (lVar8 == 0) goto LAB_08727d3c;
  if (*(int *)(lVar8 + 0x18) < 1) {
LAB_08727d14:
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_05aa0f7c(*(long *)(param_1 + 0x18),*(undefined8 *)puVar2);
      return;
    }
    goto LAB_08727d3c;
  }
  iVar5 = FUN_05a9ffe4(lVar8,*(undefined8 *)puVar1);
  if (iVar5 == 5) {
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_05aa0028(*(long *)(param_1 + 0x20),
                   *(undefined8 *)
                    Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource<Object>_TypeInfo);
      goto LAB_08727d14;
    }
    goto LAB_08727d3c;
  }
  FUN_08728348(param_1);
  goto switchD_08727c08_caseD_f;
}


