/*
FUNCTION_NAME: FUN_0147e85c
ENTRY_POINT: 0147e85c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 111
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


uint FUN_0147e85c(long param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  
  if ((DAT_03776b5d & 1) == 0) {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03776b5d = 1;
  }
  if (0x20 < param_2) {
    thunk_FUN_00d48444(StringLiteral_8570);
    uVar10 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar7 = thunk_FUN_00d48444(PTR_DAT_033ee3d0);
    uVar8 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_142__);
    FUN_016efd4c(uVar10,uVar7,uVar8,0);
    uVar7 = thunk_FUN_00d48444(Method_System_Nullable<AsyncGPUReadbackRequest>_get_Value__);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar10,uVar7);
  }
  if ((param_2 == 0) || (uVar14 = *(uint *)(param_1 + 0x20), uVar14 == 0)) {
    uVar13 = 0;
    *param_3 = 0;
  }
  else {
    lVar11 = *(long *)(param_1 + 0x10);
    if (lVar11 == 0) {
LAB_0147e9dc:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar10 = *(undefined8 *)(lVar11 + 0x18);
    if ((uint)uVar10 <= *(uint *)(param_1 + 0x18)) {
LAB_0147e9e0:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    bVar2 = *(byte *)(lVar11 + (int)*(uint *)(param_1 + 0x18) + 0x20);
    if (uVar14 - param_2 == 0 || (int)uVar14 < (int)param_2) {
      iVar12 = param_2 - uVar14;
      uVar13 = (uint)bVar2 & (-1 << (ulong)(uVar14 & 0x1f) ^ 0xffffffffU);
      *param_3 = uVar14;
      puVar5 = System_Threading_Timer_TimerComparer_TypeInfo;
      if (0 < iVar12) {
        uVar14 = *(uint *)(param_1 + 0x18);
        do {
          iVar3 = 0;
          iVar9 = (int)uVar10;
          if (iVar9 != 0) {
            iVar3 = (int)(uVar14 + 1) / iVar9;
          }
          uVar14 = (uVar14 + 1) - iVar3 * iVar9;
          if (uVar14 == *(int *)(param_1 + 0x1c) + 1U) {
            return uVar13;
          }
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar6 = FUN_017726a0(iVar12,8,0);
          lVar11 = *(long *)(param_1 + 0x10);
          if (lVar11 == 0) goto LAB_0147e9dc;
          uVar10 = *(undefined8 *)(lVar11 + 0x18);
          if ((uint)uVar10 <= uVar14) goto LAB_0147e9e0;
          uVar4 = 8 - uVar6;
          uVar1 = 0xf - uVar6;
          if (-1 < (int)uVar4) {
            uVar1 = uVar4;
          }
          iVar12 = iVar12 - uVar6;
          uVar13 = (uint)(*(byte *)(lVar11 + (int)uVar14 + 0x20) >>
                         (ulong)(uVar4 - (uVar1 & 0x18) & 0x1f)) | uVar13 << (ulong)(uVar6 & 0x1f);
          *param_3 = *param_3 + uVar6;
        } while (0 < iVar12);
      }
    }
    else {
      uVar13 = (uint)(bVar2 >> (ulong)(uVar14 - param_2 & 0x1f)) &
               (-1 << (ulong)(param_2 & 0x1f) ^ 0xffffffffU);
      *param_3 = param_2;
    }
  }
  return uVar13;
}


