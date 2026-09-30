/*
FUNCTION_NAME: FUN_01e70798
ENTRY_POINT: 01e70798
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_16;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 * FUN_01e70798(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  void *pvVar12;
  
  pcVar8 = (char *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if ((ulong)((long)pbVar2 - (long)pcVar8) < 3) {
    if ((long)pbVar2 - (long)pcVar8 == 2) {
LAB_01e708bc:
      cVar3 = *pcVar8;
      goto LAB_01e708c0;
    }
    bVar4 = false;
  }
  else {
    cVar3 = *pcVar8;
    if (cVar3 == 's') {
      if ((pcVar8[1] == 'r') && (pcVar8[2] == 'N')) {
        *param_1 = (long)(pcVar8 + 3);
        puVar11 = (undefined8 *)FUN_01e74eac(param_1);
        if (puVar11 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        puVar5 = puVar11;
        if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
          lVar10 = FUN_01e6bf78(param_1,0);
          if (lVar10 == 0) {
            return (undefined8 *)0x0;
          }
          pvVar12 = (void *)param_1[0x266];
          lVar9 = *(long *)((long)pvVar12 + 8);
          puVar6 = pvVar12;
          if (0xfef < lVar9 + 0x20U) {
            puVar6 = malloc(0x1000);
            if (puVar6 == (void *)0x0) goto LAB_01e70dd0;
            lVar9 = 0;
            *puVar6 = pvVar12;
            puVar6[1] = 0;
            param_1[0x266] = (long)puVar6;
          }
          *(long *)((long)puVar6 + 8) = lVar9 + 0x20;
          puVar5 = (undefined8 *)((long)puVar6 + lVar9 + 0x10);
          *puVar5 = &
                    Method_RoomMeshAnchor_<GenerateRoomMesh>d__15_System_Collections_IEnumerator_Reset__
          ;
          *(undefined8 **)((long)puVar6 + lVar9 + 0x20) = puVar11;
          *(long *)((long)puVar6 + lVar9 + 0x28) = lVar10;
          *(undefined4 *)((long)puVar6 + lVar9 + 0x18) = 0x1010125;
        }
        while ((pcVar8 = (char *)*param_1, pcVar8 == (char *)param_1[1] || (*pcVar8 != 'E'))) {
          puVar11 = (undefined8 *)FUN_01e751dc(param_1);
          if (puVar11 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
          puVar6 = puVar11;
          if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
            lVar10 = FUN_01e6bf78(param_1,0);
            if (lVar10 == 0) {
              return (undefined8 *)0x0;
            }
            pvVar12 = (void *)param_1[0x266];
            lVar9 = *(long *)((long)pvVar12 + 8);
            puVar7 = pvVar12;
            if (0xfef < lVar9 + 0x20U) {
              puVar7 = malloc(0x1000);
              if (puVar7 == (void *)0x0) goto LAB_01e70dd0;
              lVar9 = 0;
              *puVar7 = pvVar12;
              puVar7[1] = 0;
              param_1[0x266] = (long)puVar7;
            }
            *(long *)((long)puVar7 + 8) = lVar9 + 0x20;
            puVar6 = (undefined8 *)((long)puVar7 + lVar9 + 0x10);
            *puVar6 = &
                      Method_RoomMeshAnchor_<GenerateRoomMesh>d__15_System_Collections_IEnumerator_Reset__
            ;
            *(undefined8 **)((long)puVar7 + lVar9 + 0x20) = puVar11;
            *(long *)((long)puVar7 + lVar9 + 0x28) = lVar10;
            *(undefined4 *)((long)puVar7 + lVar9 + 0x18) = 0x1010125;
          }
          pvVar12 = (void *)param_1[0x266];
          lVar10 = *(long *)((long)pvVar12 + 8);
          puVar11 = pvVar12;
          if (0xfef < lVar10 + 0x20U) {
            puVar11 = malloc(0x1000);
            if (puVar11 == (void *)0x0) goto LAB_01e70dd0;
            lVar10 = 0;
            *puVar11 = pvVar12;
            puVar11[1] = 0;
            param_1[0x266] = (long)puVar11;
          }
          *(long *)((long)puVar11 + 8) = lVar10 + 0x20;
          puVar7 = (undefined8 *)((long)puVar11 + lVar10 + 0x10);
          *puVar7 = &Method_OVRPlugin_<>c_<_cctor>b__786_81__;
          *(undefined4 *)((long)puVar11 + lVar10 + 0x18) = 0x1010116;
          *(undefined8 **)((long)puVar11 + lVar10 + 0x20) = puVar5;
          *(undefined8 **)((long)puVar11 + lVar10 + 0x28) = puVar6;
          puVar5 = puVar7;
        }
        *param_1 = (long)(pcVar8 + 1);
        lVar10 = FUN_01e74f6c(param_1);
        if (lVar10 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar12 = (void *)param_1[0x266];
        lVar9 = *(long *)((long)pvVar12 + 8);
        puVar11 = pvVar12;
        if (lVar9 + 0x20U < 0xff0) {
LAB_01e70d14:
          *(long *)((long)puVar11 + 8) = lVar9 + 0x20;
          puVar6 = (undefined8 *)((long)puVar11 + lVar9 + 0x10);
          *puVar6 = &Method_OVRPlugin_<>c_<_cctor>b__786_81__;
          *(undefined4 *)((long)puVar11 + lVar9 + 0x18) = 0x1010116;
          goto LAB_01e70da0;
        }
        puVar11 = malloc(0x1000);
        if (puVar11 != (void *)0x0) {
          lVar9 = 0;
          *puVar11 = pvVar12;
          puVar11[1] = 0;
          param_1[0x266] = (long)puVar11;
          goto LAB_01e70d14;
        }
        goto LAB_01e70dd0;
      }
      goto LAB_01e708bc;
    }
LAB_01e708c0:
    if ((cVar3 == 'g') && (pcVar8[1] == 's')) {
      pcVar8 = pcVar8 + 2;
      bVar4 = true;
      *param_1 = (long)pcVar8;
      if ((ulong)((long)pbVar2 - (long)pcVar8) < 2) goto LAB_01e709c8;
    }
    else {
      bVar4 = false;
    }
    if ((*pcVar8 == 's') && (pcVar8[1] == 'r')) {
      pbVar1 = (byte *)(pcVar8 + 2);
      *param_1 = (long)pbVar1;
      if ((pbVar2 != pbVar1) && (*pbVar1 - 0x30 < 10)) {
        puVar11 = (undefined8 *)FUN_01e751dc(param_1);
        if (puVar11 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        puVar6 = (undefined8 *)0x0;
        do {
          puVar5 = puVar11;
          if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
            lVar10 = FUN_01e6bf78(param_1,0);
            if (lVar10 == 0) {
              return (undefined8 *)0x0;
            }
            pvVar12 = (void *)param_1[0x266];
            lVar9 = *(long *)((long)pvVar12 + 8);
            puVar7 = pvVar12;
            if (0xfef < lVar9 + 0x20U) {
              puVar7 = malloc(0x1000);
              if (puVar7 == (void *)0x0) goto LAB_01e70dd0;
              lVar9 = 0;
              *puVar7 = pvVar12;
              puVar7[1] = 0;
              param_1[0x266] = (long)puVar7;
            }
            *(long *)((long)puVar7 + 8) = lVar9 + 0x20;
            puVar5 = (undefined8 *)((long)puVar7 + lVar9 + 0x10);
            *puVar5 = &
                      Method_RoomMeshAnchor_<GenerateRoomMesh>d__15_System_Collections_IEnumerator_Reset__
            ;
            *(undefined8 **)((long)puVar7 + lVar9 + 0x20) = puVar11;
            *(long *)((long)puVar7 + lVar9 + 0x28) = lVar10;
            *(undefined4 *)((long)puVar7 + lVar9 + 0x18) = 0x1010125;
          }
          if (puVar6 == (undefined8 *)0x0) {
            if (bVar4) {
              pvVar12 = (void *)param_1[0x266];
              lVar10 = *(long *)((long)pvVar12 + 8);
              puVar11 = pvVar12;
              if (0xfef < lVar10 + 0x20U) {
                puVar11 = malloc(0x1000);
                if (puVar11 == (void *)0x0) goto LAB_01e70dd0;
                lVar10 = 0;
                *puVar11 = pvVar12;
                puVar11[1] = 0;
                param_1[0x266] = (long)puVar11;
              }
              *(long *)((long)puVar11 + 8) = lVar10 + 0x20;
              puVar7 = (undefined8 *)((long)puVar11 + lVar10 + 0x10);
              *puVar7 = &
                        Method_OVRTrackedKeyboard_<StartKeyboardTrackingCoroutine>d__93_System_Collections_IEnumerator_Reset__
              ;
              *(undefined4 *)((long)puVar11 + lVar10 + 0x18) = 0x1010126;
              puVar11 = (undefined8 *)((long)puVar11 + lVar10 + 0x20);
              goto LAB_01e70ca0;
            }
          }
          else {
            pvVar12 = (void *)param_1[0x266];
            lVar10 = *(long *)((long)pvVar12 + 8);
            puVar11 = pvVar12;
            if (0xfef < lVar10 + 0x20U) {
              puVar11 = malloc(0x1000);
              if (puVar11 == (void *)0x0) goto LAB_01e70dd0;
              lVar10 = 0;
              *puVar11 = pvVar12;
              puVar11[1] = 0;
              param_1[0x266] = (long)puVar11;
            }
            *(long *)((long)puVar11 + 8) = lVar10 + 0x20;
            puVar7 = (undefined8 *)((long)puVar11 + lVar10 + 0x10);
            *puVar7 = &Method_OVRPlugin_<>c_<_cctor>b__786_81__;
            *(undefined4 *)((long)puVar11 + lVar10 + 0x18) = 0x1010116;
            *(undefined8 **)((long)puVar11 + lVar10 + 0x20) = puVar6;
            puVar11 = (undefined8 *)((long)puVar11 + lVar10 + 0x28);
LAB_01e70ca0:
            *puVar11 = puVar5;
            puVar5 = puVar7;
          }
          pcVar8 = (char *)*param_1;
          if ((pcVar8 != (char *)param_1[1]) && (*pcVar8 == 'E')) {
            *param_1 = (long)(pcVar8 + 1);
            goto LAB_01e70d3c;
          }
          puVar11 = (undefined8 *)FUN_01e751dc(param_1);
          puVar6 = puVar5;
          if (puVar11 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
        } while( true );
      }
      puVar11 = (undefined8 *)FUN_01e74eac(param_1);
      if (puVar11 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      puVar5 = puVar11;
      if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
        lVar10 = FUN_01e6bf78(param_1,0);
        if (lVar10 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar12 = (void *)param_1[0x266];
        lVar9 = *(long *)((long)pvVar12 + 8);
        puVar6 = pvVar12;
        if (0xfef < lVar9 + 0x20U) {
          puVar6 = malloc(0x1000);
          if (puVar6 == (void *)0x0) goto LAB_01e70dd0;
          lVar9 = 0;
          *puVar6 = pvVar12;
          puVar6[1] = 0;
          param_1[0x266] = (long)puVar6;
        }
        *(long *)((long)puVar6 + 8) = lVar9 + 0x20;
        puVar5 = (undefined8 *)((long)puVar6 + lVar9 + 0x10);
        *puVar5 = &
                  Method_RoomMeshAnchor_<GenerateRoomMesh>d__15_System_Collections_IEnumerator_Reset__
        ;
        *(undefined8 **)((long)puVar6 + lVar9 + 0x20) = puVar11;
        *(long *)((long)puVar6 + lVar9 + 0x28) = lVar10;
        *(undefined4 *)((long)puVar6 + lVar9 + 0x18) = 0x1010125;
      }
LAB_01e70d3c:
      lVar10 = FUN_01e74f6c(param_1);
      if (lVar10 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar12 = (void *)param_1[0x266];
      lVar9 = *(long *)((long)pvVar12 + 8);
      puVar11 = pvVar12;
      if (lVar9 + 0x20U < 0xff0) {
LAB_01e70d7c:
        *(long *)((long)puVar11 + 8) = lVar9 + 0x20;
        puVar6 = (undefined8 *)((long)puVar11 + lVar9 + 0x10);
        *puVar6 = &Method_OVRPlugin_<>c_<_cctor>b__786_81__;
        *(undefined4 *)((long)puVar11 + lVar9 + 0x18) = 0x1010116;
LAB_01e70da0:
        puVar6[2] = puVar5;
        puVar6[3] = lVar10;
        return puVar6;
      }
      puVar11 = malloc(0x1000);
      if (puVar11 != (void *)0x0) {
        lVar9 = 0;
        *puVar11 = pvVar12;
        puVar11[1] = 0;
        param_1[0x266] = (long)puVar11;
        goto LAB_01e70d7c;
      }
      goto LAB_01e70dd0;
    }
  }
LAB_01e709c8:
  puVar5 = (undefined8 *)FUN_01e74f6c(param_1);
  puVar11 = puVar5;
  if ((puVar5 != (undefined8 *)0x0) && (bVar4)) {
    pvVar12 = (void *)param_1[0x266];
    lVar10 = *(long *)((long)pvVar12 + 8);
    puVar6 = pvVar12;
    if (0xfef < lVar10 + 0x20U) {
      puVar6 = malloc(0x1000);
      if (puVar6 == (void *)0x0) {
LAB_01e70dd0:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar10 = 0;
      *puVar6 = pvVar12;
      puVar6[1] = 0;
      param_1[0x266] = (long)puVar6;
    }
    *(long *)((long)puVar6 + 8) = lVar10 + 0x20;
    puVar11 = (undefined8 *)((long)puVar6 + lVar10 + 0x10);
    *puVar11 = &
               Method_OVRTrackedKeyboard_<StartKeyboardTrackingCoroutine>d__93_System_Collections_IEnumerator_Reset__
    ;
    *(undefined4 *)((long)puVar6 + lVar10 + 0x18) = 0x1010126;
    *(undefined8 **)((long)puVar6 + lVar10 + 0x20) = puVar5;
  }
  return puVar11;
}


