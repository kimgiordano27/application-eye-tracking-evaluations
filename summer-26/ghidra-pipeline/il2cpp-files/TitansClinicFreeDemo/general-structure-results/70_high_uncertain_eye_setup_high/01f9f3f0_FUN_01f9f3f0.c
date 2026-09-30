/*
FUNCTION_NAME: FUN_01f9f3f0
ENTRY_POINT: 01f9f3f0
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_01f9f3f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                 long param_5,uint param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  char cVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_74;
  char local_70 [4];
  char local_6c [4];
  undefined8 local_68;
  
  puVar1 = PTR_DAT_027b3ec0;
  local_68 = param_3;
  if ((DAT_0293df61 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027c1f10);
    thunk_FUN_01279b34(PTR_DAT_027c1f18);
    thunk_FUN_01279b34(PTR_DAT_027b3ec0);
    DAT_0293df61 = 1;
  }
  local_6c[0] = '\0';
  local_70[0] = '\0';
  local_74 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  FUN_01f9e0f8(param_4,&local_68,param_6 & 1,local_6c,local_70,&local_74);
  lVar8 = FUN_01f9f5f4(param_2,local_68,param_4,local_74,param_2);
  if (lVar8 != 0) {
    FUN_018de658(&local_90,*(undefined4 *)(lVar8 + 0x18),*(undefined8 *)PTR_DAT_027c1f18);
    cVar4 = local_6c[0];
    cVar3 = local_70[0];
    puVar2 = PTR_DAT_027c1f10;
    uVar6 = *(uint *)(lVar8 + 0x18);
    if (0 < (int)uVar6) {
      lVar12 = 0;
      do {
        if (uVar6 <= (uint)lVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_01230ca8();
        }
        plVar11 = *(long **)(lVar8 + 0x20 + lVar12 * 8);
        if (plVar11 == (long *)0x0) goto LAB_01f9f5ec;
        uVar6 = FUN_01ef5150(plVar11,0);
        uVar7 = FUN_01ef5150(plVar11,0);
        uVar5 = local_68;
        if ((uVar6 & (param_4 ^ 2)) == uVar7) {
          if (cVar4 != '\0') {
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            uVar9 = FUN_01f9e2bc(plVar11,uVar5,cVar3 != '\0');
            if ((uVar9 & 1) == 0) goto OVRPlugin_OVRP_1_78_0__ovrp_StartBodyTracking;
          }
          if (param_5 != 0) {
            lVar10 = (**(code **)(*plVar11 + 0x238))(plVar11,*(undefined8 *)(*plVar11 + 0x240));
            if (lVar10 == 0) goto LAB_01f9f5ec;
            if (*(int *)(lVar10 + 0x18) != *(int *)(param_5 + 0x18))
            goto OVRPlugin_OVRP_1_78_0__ovrp_StartBodyTracking;
          }
          FUN_018de888(&local_90,plVar11,*(undefined8 *)puVar2);
        }
OVRPlugin_OVRP_1_78_0__ovrp_StartBodyTracking:
        uVar6 = *(uint *)(lVar8 + 0x18);
        lVar12 = lVar12 + 1;
      } while ((int)lVar12 < (int)uVar6);
    }
    param_1[2] = local_80;
    param_1[1] = uStack_88;
    *param_1 = local_90;
    return;
  }
LAB_01f9f5ec:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


