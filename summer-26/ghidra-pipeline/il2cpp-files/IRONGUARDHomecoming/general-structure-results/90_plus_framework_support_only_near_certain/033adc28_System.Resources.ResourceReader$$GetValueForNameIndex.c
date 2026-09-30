/*
FUNCTION_NAME: System.Resources.ResourceReader$$GetValueForNameIndex
ENTRY_POINT: 033adc28
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 132
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_3;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x033ae020) */

void System_Resources_ResourceReader__GetValueForNameIndex(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 uVar7;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  
  do {
    uVar3 = FUN_03582560();
    if ((uVar3 & 1) == 0) {
      FUN_03594a14();
    }
    do {
      if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      (**(code **)(*unaff_x25 + 0x168))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x170));
      if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<NavMeshAgent>__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      System_Resources_ResourceReader__Dispose();
      if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      (**(code **)(*unaff_x21 + 0x178))();
      lVar5 = *unaff_x22;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x28) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_033adb24;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238();
LAB_033adb24:
      uVar3 = (*(code *)*puVar2)();
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
      if ((uVar3 & 1) == 0) {
        plVar4 = (long *)thunk_FUN_01f116d0();
        if (plVar4 == (long *)0x0) {
          return;
        }
        lVar5 = *plVar4;
        uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar3 == 0) goto LAB_033add14;
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_033adcfc;
      }
      lVar5 = *unaff_x22;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x28) {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_033adb84;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238();
LAB_033adb84:
      unaff_x25 = (long *)(*(code *)*puVar2)();
      lVar5 = *unaff_x24;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)Method_UnityEngine_Component_GetComponents<BaseRaycaster>__) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_033adbe8;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238();
LAB_033adbe8:
      lVar5 = (*(code *)*puVar2)();
    } while (lVar5 != 0);
    uVar7 = *unaff_x27;
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_03579868(uVar7,0);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar6 = piVar6 + 4;
    if (uVar3 == 0) break;
LAB_033adcfc:
    if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_033add80;
    }
  }
LAB_033add14:
  puVar2 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_033add80:
  (*(code *)*puVar2)(plVar4,puVar2[1]);
  return;
}


