/*
FUNCTION_NAME: FUN_012cdae4
ENTRY_POINT: 012cdae4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x012cdf24) */

void FUN_012cdae4(long *param_1,byte param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  char local_44 [4];
  byte *local_40;
  byte local_34 [4];
  
  if ((DAT_037765e3 & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_95_0_TypeInfo);
    thunk_FUN_00d48444(Method_System_IO_Stream_NullStream_EndWrite__);
    thunk_FUN_00d48444(
                      Method_System_Collections_ObjectModel_ReadOnlyCollection<VolumeParameter>_get_Item__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f3600);
    DAT_037765e3 = 1;
  }
  local_44[0] = '\0';
  lVar1 = **(long **)(*(long *)(param_3 + 0x20) + 0xc0);
  if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
    lVar1 = FUN_00d5941c();
  }
  plVar2 = (long *)thunk_FUN_00d32ed4(param_1,*(long *)(lVar1 + 0x80) + 0x60);
  if (*plVar2 != 0) {
    lVar1 = **(long **)(*(long *)(param_3 + 0x20) + 0xc0);
    if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
      lVar1 = FUN_00d5941c();
    }
    puVar3 = (undefined8 *)thunk_FUN_00d32ed4(param_1,*(long *)(lVar1 + 0x80) + 0x60);
    uVar5 = *puVar3;
    local_44[0] = '\0';
    FUN_017d75a8(uVar5,local_44,0);
    lVar1 = **(long **)(*(long *)(param_3 + 0x20) + 0xc0);
    if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
      lVar1 = FUN_00d5941c();
    }
    lVar1 = *(long *)(lVar1 + 0x80) + 0xc0;
    FUN_00da4f60(lVar1,1);
    puVar4 = (undefined1 *)thunk_FUN_00d32ed4(param_1,lVar1);
    *puVar4 = 1;
    lVar1 = **(long **)(*(long *)(param_3 + 0x20) + 0xc0);
    if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
      lVar1 = FUN_00d5941c();
    }
    lVar1 = *(long *)(lVar1 + 0x80) + 0xe0;
    FUN_00da4f60(lVar1,8);
    puVar3 = (undefined8 *)thunk_FUN_00d32ed4(param_1,lVar1);
    *puVar3 = 0;
    puVar3 = *(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
    (*(code *)puVar3[2])(*puVar3,puVar3,param_1,0,0);
    lVar1 = **(long **)(*(long *)(param_3 + 0x20) + 0xc0);
    if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
      lVar1 = FUN_00d5941c();
    }
    plVar2 = (long *)thunk_FUN_00d32ed4(param_1,*(long *)(lVar1 + 0x80) + 0x140);
    if (*plVar2 != 0) {
      if (*(int *)(*(long *)
                    Method_System_Collections_ObjectModel_ReadOnlyCollection<VolumeParameter>_get_Item__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar6 = *(long *)Method_System_IO_Stream_NullStream_EndWrite__;
      lVar1 = *(long *)(lVar6 + 0x20);
      if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
        lVar1 = FUN_00d5941c();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
        lVar1 = FUN_00d5941c();
      }
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar1 = *(long *)(lVar6 + 0x20);
      if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
        lVar1 = FUN_00d5941c();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
        lVar1 = FUN_00d5941c();
      }
      plVar2 = (long *)**(undefined8 **)(lVar1 + 0xb8);
      lVar1 = **(long **)(*(long *)(param_3 + 0x20) + 0xc0);
      if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
        lVar1 = FUN_00d5941c(lVar1);
      }
      puVar3 = (undefined8 *)thunk_FUN_00d32ed4(param_1,*(long *)(lVar1 + 0x80) + 0x140);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      (**(code **)(*plVar2 + 0x188))(plVar2,*puVar3,0,*(undefined8 *)(*plVar2 + 400));
    }
    lVar1 = **(long **)(*(long *)(param_3 + 0x20) + 0xc0);
    if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
      lVar1 = FUN_00d5941c();
    }
    lVar1 = *(long *)(lVar1 + 0x80) + 0x140;
    FUN_00da4f60(lVar1,8);
    puVar3 = (undefined8 *)thunk_FUN_00d32ed4(param_1,lVar1);
    *puVar3 = 0;
    lVar1 = **(long **)(*(long *)(param_3 + 0x20) + 0xc0);
    if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
      lVar1 = FUN_00d5941c();
    }
    plVar2 = (long *)thunk_FUN_00d32ed4(param_1,*(long *)(lVar1 + 0x80) + 0x160);
    if (*plVar2 != 0) {
      if (*(int *)(*(long *)PTR_DAT_033f3600 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar6 = *(long *)OVRPlugin_OVRP_1_95_0_TypeInfo;
      lVar1 = *(long *)(lVar6 + 0x20);
      if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
        lVar1 = FUN_00d5941c();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
        lVar1 = FUN_00d5941c();
      }
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar1 = *(long *)(lVar6 + 0x20);
      if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
        lVar1 = FUN_00d5941c();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
        lVar1 = FUN_00d5941c();
      }
      plVar2 = (long *)**(undefined8 **)(lVar1 + 0xb8);
      lVar1 = **(long **)(*(long *)(param_3 + 0x20) + 0xc0);
      if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
        lVar1 = FUN_00d5941c(lVar1);
      }
      puVar3 = (undefined8 *)thunk_FUN_00d32ed4(param_1,*(long *)(lVar1 + 0x80) + 0x160);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      (**(code **)(*plVar2 + 0x188))(plVar2,*puVar3,0,*(undefined8 *)(*plVar2 + 400));
    }
    lVar1 = **(long **)(*(long *)(param_3 + 0x20) + 0xc0);
    if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
      lVar1 = FUN_00d5941c();
    }
    lVar1 = *(long *)(lVar1 + 0x80) + 0x160;
    FUN_00da4f60(lVar1,8);
    puVar3 = (undefined8 *)thunk_FUN_00d32ed4(param_1,lVar1);
    *puVar3 = 0;
    if (local_44[0] != '\0') {
      thunk_FUN_00d56f10(uVar5,0);
    }
  }
  local_34[0] = param_2 & 1;
  local_40 = local_34;
  lVar1 = *(long *)(*param_1 + 0x220);
  (**(code **)(lVar1 + 0x10))(*(undefined8 *)(lVar1 + 8),lVar1,param_1,&local_40,local_34);
  return;
}


