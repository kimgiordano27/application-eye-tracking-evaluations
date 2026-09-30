/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.KeyCollection<StylePropertyAnimationSystem.ElementPropertyPair,-object>$$get_Count
ENTRY_POINT: 02f12404
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02f125b4) */

void System_Collections_Generic_Dictionary_KeyCollection<StylePropertyAnimationSystem_ElementPropertyPair,_object>__get_Count
               (long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  int iVar8;
  
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar8 = 0;
  do {
    lVar4 = *param_1;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02f12468;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(param_1,*(long *)puVar1,0);
LAB_02f12468:
    uVar6 = (*(code *)*puVar2)(param_1,puVar2[1]);
    if ((uVar6 & 1) == 0) {
      if (param_1 == (long *)0x0) {
        return;
      }
      lVar4 = *param_1;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 == 0) goto LAB_02f12564;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x38);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar5 = *param_1;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto FUN_02f124ec;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(param_1,lVar4,0);
FUN_02f124ec:
    uVar3 = (*(code *)*puVar2)(param_1,puVar2[1]);
    puVar2 = (undefined8 *)(unaff_x21 + 8);
    if (iVar8 != 0) {
      lVar4 = *(long *)(unaff_x21 + 0x10);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(uint *)(lVar4 + 0x18) <= iVar8 - 1U) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      puVar2 = (undefined8 *)(lVar4 + (long)(int)(iVar8 - 1U) * 8 + 0x20);
    }
    *puVar2 = uVar3;
    iVar8 = iVar8 + 1;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *unaff_x22) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_02f12580;
    }
  }
LAB_02f12564:
  puVar2 = (undefined8 *)FUN_01ecb238(param_1,*unaff_x22,0);
LAB_02f12580:
  (*(code *)*puVar2)(param_1,puVar2[1]);
  return;
}


