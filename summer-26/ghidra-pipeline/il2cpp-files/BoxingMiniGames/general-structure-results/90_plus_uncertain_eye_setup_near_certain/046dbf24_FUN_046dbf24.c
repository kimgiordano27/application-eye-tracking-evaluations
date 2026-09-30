/*
FUNCTION_NAME: FUN_046dbf24
ENTRY_POINT: 046dbf24
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;telemetry_or_network_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


long FUN_046dbf24(long param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_2c0 [208];
  undefined1 auStack_1f0 [208];
  undefined1 auStack_120 [208];
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling(8);
  }
  if ((*(ushort *)(**(long **)(*(long *)(param_3 + 0x20) + 0xc0) + 0x135) & 1) == 0) {
    FUN_0367c9fc();
  }
  lVar2 = thunk_FUN_0367fe20();
  System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>__Sort
            (lVar2,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x110));
  if (0 < *(int *)(param_1 + 0x18)) {
    uVar5 = 0;
    lVar6 = 0x20;
    do {
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 == 0) goto LAB_046dc0d0;
      if (*(uint *)(lVar4 + 0x18) <= uVar5) {
LAB_046dc0d4:
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      if (param_2 == 0) goto LAB_046dc0d0;
      memcpy(auStack_2c0,(void *)(lVar4 + lVar6),0xd0);
      memcpy(auStack_120,auStack_2c0,0xd0);
      uVar3 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),auStack_120,*(undefined8 *)(param_2 + 0x28)
                        );
      if ((uVar3 & 1) != 0) {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 == 0) goto LAB_046dc0d0;
        if (*(uint *)(lVar4 + 0x18) <= uVar5) goto LAB_046dc0d4;
        if (lVar2 == 0) {
LAB_046dc0d0:
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        memcpy(auStack_1f0,(void *)(lVar4 + lVar6),0xd0);
        lVar4 = *(long *)(lVar2 + 0x10);
        lVar7 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80);
        *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
        if (lVar4 == 0) goto LAB_046dc0d0;
        uVar1 = *(uint *)(lVar2 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          lVar4 = lVar4 + (long)(int)uVar1 * 0xd0;
          *(uint *)(lVar2 + 0x18) = uVar1 + 1;
          memcpy((void *)(lVar4 + 0x20),auStack_1f0,0xd0);
          thunk_FUN_036b7ad0(lVar4 + 0x20,0);
        }
        else {
          memcpy(auStack_120,auStack_1f0,0xd0);
          FUN_046db640(lVar2,auStack_120,
                       *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0xd0;
    } while ((long)uVar5 < (long)*(int *)(param_1 + 0x18));
  }
  return lVar2;
}


