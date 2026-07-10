/*
FUNCTION_NAME: Broccoli.Controller.BroccoTreeController_1_2_5$$GetWindZoneValues
ENTRY_POINT: 01d4f000
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_6;repeated_pose_getters;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Broccoli_Controller_BroccoTreeController_1_2_5__GetWindZoneValues
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  long *plVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  puVar3 = PTR_UnityEngine_Object_TypeInfo_03cb5a80;
  if ((DAT_03ef1413 & 1) == 0) {
    FUN_01c5c92c(PTR_Method_UnityEngine_Object_FindObjectsOfType<WindZone>___03cb6258);
    FUN_01c5c92c(PTR_UnityEngine_Object_TypeInfo_03cb5a80);
    DAT_03ef1413 = 1;
  }
  uVar2 = _DAT_00b47dc0;
  lVar5 = *(long *)puVar3;
  *(undefined8 *)(param_4 + 0x74) = _UNK_00b47dc8;
  *(undefined8 *)(param_4 + 0x6c) = uVar2;
  puVar3 = PTR_Method_UnityEngine_Object_FindObjectsOfType<WindZone>___03cb6258;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  lVar5 = UnityEngine_Object__FindObjectsOfType<object>(*(undefined8 *)puVar3);
  if (lVar5 != 0) {
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar1) {
      uVar8 = 0;
      do {
        if (uVar1 <= uVar8) goto LAB_01d4f1b0;
        plVar9 = (long *)(lVar5 + (long)(int)uVar8 * 8 + 0x20);
        if ((*plVar9 == 0) || (lVar6 = UnityEngine_Component__get_gameObject(*plVar9,0), lVar6 == 0)
           ) goto LAB_01d4f1ac;
        uVar7 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
        uVar10 = param_2;
        if ((uVar7 & 1) != 0) {
          if (*(uint *)(lVar5 + 0x18) <= uVar8) goto LAB_01d4f1b0;
          if (*plVar9 == 0) goto LAB_01d4f1ac;
          iVar4 = UnityEngine_WindZone__get_mode(*plVar9,0);
          uVar10 = param_2;
          if (iVar4 == 0) {
            if (*(uint *)(lVar5 + 0x18) <= uVar8) {
LAB_01d4f1b0:
                    /* WARNING: Subroutine does not return */
              FUN_01c5cbdc();
            }
            if (*plVar9 == 0) goto LAB_01d4f1ac;
            uVar10 = UnityEngine_WindZone__get_windMain(*plVar9,0);
            uVar1 = *(uint *)(lVar5 + 0x18);
            *(undefined4 *)(param_4 + 100) = uVar10;
            if (uVar1 <= uVar8) goto LAB_01d4f1b0;
            if ((*plVar9 == 0) ||
               (lVar6 = UnityEngine_Component__get_transform(*plVar9,0), lVar6 == 0))
            goto LAB_01d4f1ac;
            uVar11 = UnityEngine_Transform__get_forward(lVar6,0);
            if (*(uint *)(lVar5 + 0x18) <= uVar8) goto LAB_01d4f1b0;
            if (*plVar9 == 0) goto LAB_01d4f1ac;
            lVar6 = UnityEngine_Component__get_transform(*plVar9,0);
            if (lVar6 == 0) goto LAB_01d4f1ac;
            UnityEngine_Transform__get_forward(lVar6,0);
            if (*(uint *)(lVar5 + 0x18) <= uVar8) goto LAB_01d4f1b0;
            if ((*plVar9 == 0) ||
               (uVar10 = param_2, lVar6 = UnityEngine_Component__get_transform(*plVar9,0),
               lVar6 == 0)) goto LAB_01d4f1ac;
            UnityEngine_Transform__get_forward(lVar6,0);
            *(undefined4 *)(param_4 + 0x6c) = uVar11;
            *(undefined4 *)(param_4 + 0x70) = param_2;
            *(undefined4 *)(param_4 + 0x74) = param_3;
            *(undefined4 *)(param_4 + 0x78) = 0x3f800000;
          }
        }
        uVar1 = *(uint *)(lVar5 + 0x18);
        uVar8 = uVar8 + 1;
        param_2 = uVar10;
      } while ((int)uVar8 < (int)uVar1);
    }
    return;
  }
LAB_01d4f1ac:
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


