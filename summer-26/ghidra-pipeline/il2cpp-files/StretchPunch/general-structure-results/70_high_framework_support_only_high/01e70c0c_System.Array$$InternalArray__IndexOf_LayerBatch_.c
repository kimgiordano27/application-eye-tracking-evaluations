/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<LayerBatch>
ENTRY_POINT: 01e70c0c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 * System_Array__InternalArray__IndexOf<LayerBatch>(size_t param_1)

{
  char *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  void *unaff_x22;
  int unaff_w23;
  void *pvVar6;
  undefined4 unaff_w24;
  undefined8 unaff_x26;
  undefined4 unaff_w27;
  undefined8 unaff_x28;
  
code_r0x01e70c0c:
  puVar2 = malloc(param_1);
  if (puVar2 == (void *)0x0) {
LAB_01e70dd0:
                    /* WARNING: Subroutine does not return */
    std::terminate();
  }
  lVar3 = 0;
  *puVar2 = unaff_x22;
  puVar2[1] = 0;
  unaff_x19[0x266] = (long)puVar2;
LAB_01e70c24:
  *(long *)((long)puVar2 + 8) = lVar3 + 0x20;
  puVar4 = (undefined8 *)((long)puVar2 + lVar3 + 0x10);
  *puVar4 = unaff_x26;
  *(undefined4 *)((long)puVar2 + lVar3 + 0x18) = unaff_w27;
  *(undefined8 **)((long)puVar2 + lVar3 + 0x20) = unaff_x20;
  puVar2 = (undefined8 *)((long)puVar2 + lVar3 + 0x28);
  do {
    *puVar2 = unaff_x21;
    unaff_x20 = puVar4;
    do {
      pcVar1 = (char *)*unaff_x19;
      if ((pcVar1 != (char *)unaff_x19[1]) && (*pcVar1 == 'E')) {
        *unaff_x19 = (long)(pcVar1 + 1);
        lVar3 = FUN_01e74f6c();
        if (lVar3 == 0) {
          puVar2 = (undefined8 *)0x0;
        }
        else {
          pvVar6 = (void *)unaff_x19[0x266];
          lVar5 = *(long *)((long)pvVar6 + 8);
          puVar4 = pvVar6;
          if (0xfef < lVar5 + 0x20U) {
            puVar4 = malloc(0x1000);
            if (puVar4 == (void *)0x0) goto LAB_01e70dd0;
            lVar5 = 0;
            *puVar4 = pvVar6;
            puVar4[1] = 0;
            unaff_x19[0x266] = (long)puVar4;
          }
          *(long *)((long)puVar4 + 8) = lVar5 + 0x20;
          puVar2 = (undefined8 *)((long)puVar4 + lVar5 + 0x10);
          *puVar2 = &Method_OVRPlugin_<>c_<_cctor>b__786_81__;
          *(undefined4 *)((long)puVar4 + lVar5 + 0x18) = 0x1010116;
          *(undefined8 **)((long)puVar4 + lVar5 + 0x20) = unaff_x20;
          *(long *)((long)puVar4 + lVar5 + 0x28) = lVar3;
        }
        return puVar2;
      }
      puVar2 = (undefined8 *)FUN_01e751dc();
      if (puVar2 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      unaff_x21 = puVar2;
      if (((char *)unaff_x19[1] != (char *)*unaff_x19) && (*(char *)*unaff_x19 == 'I')) {
        lVar3 = FUN_01e6bf78();
        if (lVar3 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar6 = (void *)unaff_x19[0x266];
        lVar5 = *(long *)((long)pvVar6 + 8);
        puVar4 = pvVar6;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) goto LAB_01e70dd0;
          lVar5 = 0;
          *puVar4 = pvVar6;
          puVar4[1] = 0;
          unaff_x19[0x266] = (long)puVar4;
        }
        *(long *)((long)puVar4 + 8) = lVar5 + 0x20;
        unaff_x21 = (undefined8 *)((long)puVar4 + lVar5 + 0x10);
        *unaff_x21 = unaff_x28;
        *(undefined8 **)((long)puVar4 + lVar5 + 0x20) = puVar2;
        *(long *)((long)puVar4 + lVar5 + 0x28) = lVar3;
        *(undefined4 *)((long)puVar4 + lVar5 + 0x18) = unaff_w24;
      }
      if (unaff_x20 != (undefined8 *)0x0) {
        puVar2 = (undefined8 *)unaff_x19[0x266];
        lVar3 = *(long *)((long)puVar2 + 8);
        if (lVar3 + 0x20U < 0xff0) goto LAB_01e70c24;
        param_1 = 0x1000;
        unaff_x22 = puVar2;
        goto code_r0x01e70c0c;
      }
      unaff_x20 = unaff_x21;
    } while (unaff_w23 == 0);
    pvVar6 = (void *)unaff_x19[0x266];
    lVar3 = *(long *)((long)pvVar6 + 8);
    puVar2 = pvVar6;
    if (0xfef < lVar3 + 0x20U) {
      puVar2 = malloc(0x1000);
      if (puVar2 == (void *)0x0) goto LAB_01e70dd0;
      lVar3 = 0;
      *puVar2 = pvVar6;
      puVar2[1] = 0;
      unaff_x19[0x266] = (long)puVar2;
    }
    *(long *)((long)puVar2 + 8) = lVar3 + 0x20;
    puVar4 = (undefined8 *)((long)puVar2 + lVar3 + 0x10);
    *puVar4 = &
              Method_OVRTrackedKeyboard_<StartKeyboardTrackingCoroutine>d__93_System_Collections_IEnumerator_Reset__
    ;
    *(undefined4 *)((long)puVar2 + lVar3 + 0x18) = 0x1010126;
    puVar2 = (undefined8 *)((long)puVar2 + lVar3 + 0x20);
  } while( true );
}


