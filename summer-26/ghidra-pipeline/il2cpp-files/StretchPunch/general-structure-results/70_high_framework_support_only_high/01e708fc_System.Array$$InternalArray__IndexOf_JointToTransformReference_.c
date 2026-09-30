/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<JointToTransformReference>
ENTRY_POINT: 01e708fc
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 * System_Array__InternalArray__IndexOf<JointToTransformReference>(long param_1)

{
  byte *pbVar1;
  char *pcVar2;
  bool in_ZR;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  byte *in_x9;
  long *unaff_x19;
  void *pvVar9;
  int unaff_w23;
  
  if ((!in_ZR) || (*(char *)(param_1 + 1) != 'r')) {
    puVar3 = (undefined8 *)FUN_01e74f6c();
    if (puVar3 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    if (unaff_w23 == 0) {
      return puVar3;
    }
    pvVar9 = (void *)unaff_x19[0x266];
    lVar4 = *(long *)((long)pvVar9 + 8);
    puVar8 = pvVar9;
    if (0xfef < lVar4 + 0x20U) {
      puVar8 = malloc(0x1000);
      if (puVar8 == (void *)0x0) {
LAB_01e70dd0:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar4 = 0;
      *puVar8 = pvVar9;
      puVar8[1] = 0;
      unaff_x19[0x266] = (long)puVar8;
    }
    *(long *)((long)puVar8 + 8) = lVar4 + 0x20;
    puVar5 = (undefined8 *)((long)puVar8 + lVar4 + 0x10);
    *puVar5 = &
              Method_OVRTrackedKeyboard_<StartKeyboardTrackingCoroutine>d__93_System_Collections_IEnumerator_Reset__
    ;
    *(undefined4 *)((long)puVar8 + lVar4 + 0x18) = 0x1010126;
    *(undefined8 **)((long)puVar8 + lVar4 + 0x20) = puVar3;
    return puVar5;
  }
  pbVar1 = (byte *)(param_1 + 2);
  *unaff_x19 = (long)pbVar1;
  if ((in_x9 == pbVar1) || (9 < *pbVar1 - 0x30)) {
    puVar3 = (undefined8 *)FUN_01e74eac();
    if (puVar3 != (undefined8 *)0x0) {
      puVar8 = puVar3;
      if (((char *)unaff_x19[1] != (char *)*unaff_x19) && (*(char *)*unaff_x19 == 'I')) {
        lVar4 = FUN_01e6bf78();
        if (lVar4 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar9 = (void *)unaff_x19[0x266];
        lVar7 = *(long *)((long)pvVar9 + 8);
        puVar5 = pvVar9;
        if (0xfef < lVar7 + 0x20U) {
          puVar5 = malloc(0x1000);
          if (puVar5 == (void *)0x0) goto LAB_01e70dd0;
          lVar7 = 0;
          *puVar5 = pvVar9;
          puVar5[1] = 0;
          unaff_x19[0x266] = (long)puVar5;
        }
        *(long *)((long)puVar5 + 8) = lVar7 + 0x20;
        puVar8 = (undefined8 *)((long)puVar5 + lVar7 + 0x10);
        *puVar8 = &
                  Method_RoomMeshAnchor_<GenerateRoomMesh>d__15_System_Collections_IEnumerator_Reset__
        ;
        *(undefined8 **)((long)puVar5 + lVar7 + 0x20) = puVar3;
        *(long *)((long)puVar5 + lVar7 + 0x28) = lVar4;
        *(undefined4 *)((long)puVar5 + lVar7 + 0x18) = 0x1010125;
      }
LAB_01e70d3c:
      lVar4 = FUN_01e74f6c();
      if (lVar4 != 0) {
        pvVar9 = (void *)unaff_x19[0x266];
        lVar7 = *(long *)((long)pvVar9 + 8);
        puVar3 = pvVar9;
        if (0xfef < lVar7 + 0x20U) {
          puVar3 = malloc(0x1000);
          if (puVar3 == (void *)0x0) goto LAB_01e70dd0;
          lVar7 = 0;
          *puVar3 = pvVar9;
          puVar3[1] = 0;
          unaff_x19[0x266] = (long)puVar3;
        }
        *(long *)((long)puVar3 + 8) = lVar7 + 0x20;
        puVar5 = (undefined8 *)((long)puVar3 + lVar7 + 0x10);
        *puVar5 = &Method_OVRPlugin_<>c_<_cctor>b__786_81__;
        *(undefined4 *)((long)puVar3 + lVar7 + 0x18) = 0x1010116;
        *(undefined8 **)((long)puVar3 + lVar7 + 0x20) = puVar8;
        *(long *)((long)puVar3 + lVar7 + 0x28) = lVar4;
        return puVar5;
      }
    }
  }
  else {
    puVar3 = (undefined8 *)FUN_01e751dc();
    if (puVar3 != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
      do {
        puVar8 = puVar3;
        if (((char *)unaff_x19[1] != (char *)*unaff_x19) && (*(char *)*unaff_x19 == 'I')) {
          lVar4 = FUN_01e6bf78();
          if (lVar4 == 0) {
            return (undefined8 *)0x0;
          }
          pvVar9 = (void *)unaff_x19[0x266];
          lVar7 = *(long *)((long)pvVar9 + 8);
          puVar6 = pvVar9;
          if (0xfef < lVar7 + 0x20U) {
            puVar6 = malloc(0x1000);
            if (puVar6 == (void *)0x0) goto LAB_01e70dd0;
            lVar7 = 0;
            *puVar6 = pvVar9;
            puVar6[1] = 0;
            unaff_x19[0x266] = (long)puVar6;
          }
          *(long *)((long)puVar6 + 8) = lVar7 + 0x20;
          puVar8 = (undefined8 *)((long)puVar6 + lVar7 + 0x10);
          *puVar8 = &
                    Method_RoomMeshAnchor_<GenerateRoomMesh>d__15_System_Collections_IEnumerator_Reset__
          ;
          *(undefined8 **)((long)puVar6 + lVar7 + 0x20) = puVar3;
          *(long *)((long)puVar6 + lVar7 + 0x28) = lVar4;
          *(undefined4 *)((long)puVar6 + lVar7 + 0x18) = 0x1010125;
        }
        if (puVar5 == (undefined8 *)0x0) {
          if (unaff_w23 != 0) {
            pvVar9 = (void *)unaff_x19[0x266];
            lVar4 = *(long *)((long)pvVar9 + 8);
            puVar3 = pvVar9;
            if (0xfef < lVar4 + 0x20U) {
              puVar3 = malloc(0x1000);
              if (puVar3 == (void *)0x0) goto LAB_01e70dd0;
              lVar4 = 0;
              *puVar3 = pvVar9;
              puVar3[1] = 0;
              unaff_x19[0x266] = (long)puVar3;
            }
            *(long *)((long)puVar3 + 8) = lVar4 + 0x20;
            puVar6 = (undefined8 *)((long)puVar3 + lVar4 + 0x10);
            *puVar6 = &
                      Method_OVRTrackedKeyboard_<StartKeyboardTrackingCoroutine>d__93_System_Collections_IEnumerator_Reset__
            ;
            *(undefined4 *)((long)puVar3 + lVar4 + 0x18) = 0x1010126;
            puVar3 = (undefined8 *)((long)puVar3 + lVar4 + 0x20);
            goto LAB_01e70ca0;
          }
        }
        else {
          pvVar9 = (void *)unaff_x19[0x266];
          lVar4 = *(long *)((long)pvVar9 + 8);
          puVar3 = pvVar9;
          if (0xfef < lVar4 + 0x20U) {
            puVar3 = malloc(0x1000);
            if (puVar3 == (void *)0x0) goto LAB_01e70dd0;
            lVar4 = 0;
            *puVar3 = pvVar9;
            puVar3[1] = 0;
            unaff_x19[0x266] = (long)puVar3;
          }
          *(long *)((long)puVar3 + 8) = lVar4 + 0x20;
          puVar6 = (undefined8 *)((long)puVar3 + lVar4 + 0x10);
          *puVar6 = &Method_OVRPlugin_<>c_<_cctor>b__786_81__;
          *(undefined4 *)((long)puVar3 + lVar4 + 0x18) = 0x1010116;
          *(undefined8 **)((long)puVar3 + lVar4 + 0x20) = puVar5;
          puVar3 = (undefined8 *)((long)puVar3 + lVar4 + 0x28);
LAB_01e70ca0:
          *puVar3 = puVar8;
          puVar8 = puVar6;
        }
        pcVar2 = (char *)*unaff_x19;
        if ((pcVar2 != (char *)unaff_x19[1]) && (*pcVar2 == 'E')) {
          *unaff_x19 = (long)(pcVar2 + 1);
          goto LAB_01e70d3c;
        }
        puVar3 = (undefined8 *)FUN_01e751dc();
        puVar5 = puVar8;
        if (puVar3 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
      } while( true );
    }
  }
  return (undefined8 *)0x0;
}


