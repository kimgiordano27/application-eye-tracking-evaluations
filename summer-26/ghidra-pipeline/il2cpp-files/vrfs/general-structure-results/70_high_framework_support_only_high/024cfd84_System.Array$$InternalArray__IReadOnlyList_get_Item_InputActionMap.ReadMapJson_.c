/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<InputActionMap.ReadMapJson>
ENTRY_POINT: 024cfd84
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Array__InternalArray__IReadOnlyList_get_Item<InputActionMap_ReadMapJson>
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  byte bVar2;
  ulong uVar3;
  long unaff_x19;
  long *plVar4;
  long lVar5;
  undefined4 uVar6;
  
  puVar1 = PTR_DAT_06d9fd78;
  plVar4 = (long *)(unaff_x19 + 0xa0);
  *plVar4 = param_2;
  thunk_FUN_01656ef8(plVar4);
  lVar5 = *plVar4;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar3 = FUN_051d2ac0(lVar5,0,0);
  if ((uVar3 & 1) != 0) {
    if (*plVar4 != 0) {
      uVar6 = FUN_036e1ab8(*plVar4,0);
      *(undefined4 *)(unaff_x19 + 0xa8) = uVar6;
      if (*(long *)(unaff_x19 + 0xa0) != 0) {
        bVar2 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Copy
                          (*(long *)(unaff_x19 + 0xa0),0);
        *(byte *)(unaff_x19 + 0xac) = bVar2 & 1;
        if (*(long *)(unaff_x19 + 0xa0) != 0) {
          bVar2 = FUN_036e1bc0(*(long *)(unaff_x19 + 0xa0),0);
          *(byte *)(unaff_x19 + 0xad) = bVar2 & 1;
          if (*(long *)(unaff_x19 + 0xa0) != 0) {
            bVar2 = FUN_036e1c40(*(long *)(unaff_x19 + 0xa0),0);
            *(byte *)(unaff_x19 + 0xae) = bVar2 & 1;
            goto LAB_024cfe28;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
LAB_024cfe28:
  FUN_024cfe5c();
  if (*(char *)(unaff_x19 + 0x98) != '\0') {
    return;
  }
  FUN_039f3e98();
  return;
}


