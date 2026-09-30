/*
FUNCTION_NAME: FUN_05500c50
ENTRY_POINT: 05500c50
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_7
*/


/* WARNING: Removing unreachable block (ram,0x05500ee4) */

undefined8 FUN_05500c50(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long extraout_x1;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  long **pplStack_58;
  long *local_48;
  
  if ((DAT_06bbf550 & 1) == 0) {
    FUN_02f08768(OVRPlugin_HandStatus_TypeInfo);
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
    FUN_02f08768(PTR_DAT_067c91b8);
    FUN_02f08768(System_Collections_ListDictionaryInternal_DictionaryNode_TypeInfo);
    FUN_02f08768(OVRPlugin_LayerLayout_TypeInfo);
    FUN_02f08768(OVRPlugin_LogLevel_TypeInfo);
    DAT_06bbf550 = 1;
  }
  local_48 = (long *)0x0;
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar6 = FUN_03ac12f8(*(long *)(param_1 + 0x20),*(undefined8 *)OVRPlugin_LogLevel_TypeInfo);
    puVar4 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
    puVar3 = System_Collections_ListDictionaryInternal_DictionaryNode_TypeInfo;
    puVar2 = PTR_DAT_067c91b8;
    puVar1 = PTR_DAT_067c91b0;
    if (*(long *)(param_1 + 0x28) != 0) {
      local_48 = (long *)FUN_03783500(*(long *)(param_1 + 0x28),
                                      *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
      pplStack_58 = &local_48;
      local_60 = 0;
      do {
        plVar5 = local_48;
        if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar9 = *local_48;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_05500d94;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)FUN_02f421d0(local_48,*(long *)puVar2,0);
LAB_05500d94:
        uVar10 = (*(code *)*puVar7)(plVar5,puVar7[1]);
        plVar5 = local_48;
        if ((uVar10 & 1) == 0) {
          if (local_48 == (long *)0x0) goto LAB_05500e7c;
          lVar9 = *local_48;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 == 0) goto LAB_05500e54;
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_05500e3c;
        }
        if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar9 = *local_48;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_05500df8;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)FUN_02f421d0(local_48,*(long *)puVar4,0);
LAB_05500df8:
        (*(code *)*puVar7)(plVar5,puVar7[1]);
        if (extraout_x1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        FUN_054fe1dc(extraout_x1);
      } while( true );
    }
  }
  goto LAB_05500ee0;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_05500e3c:
    if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_05500e70;
    }
  }
LAB_05500e54:
  puVar7 = (undefined8 *)FUN_02f421d0(local_48,*(long *)puVar1,0);
LAB_05500e70:
  (*(code *)*puVar7)(plVar5,puVar7[1]);
LAB_05500e7c:
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar12 = *(undefined8 *)(param_1 + 0x18);
    FUN_054f7094(auStack_88);
    uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
    FUN_054fd4c0(uVar8,param_2,uVar12,auStack_88,uVar6);
    return uVar8;
  }
LAB_05500ee0:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


