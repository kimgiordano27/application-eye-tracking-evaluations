/*
FUNCTION_NAME: FUN_01f9fd38
ENTRY_POINT: 01f9fd38
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01f9fd38(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                 uint param_5)

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
  long lVar11;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_74;
  char local_70 [4];
  char local_6c [4];
  undefined8 local_68;
  
  puVar1 = PTR_DAT_027b3ec0;
                    /* try { // try from 01f9fd48 to 0209fd97 has its CatchHandler @ 01f9fc4c */
  local_68 = param_3;
  if ((DAT_0293df63 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027c1f48);
    thunk_FUN_01279b34(PTR_DAT_027c1f50);
    thunk_FUN_01279b34(PTR_DAT_027b3ec0);
    DAT_0293df63 = 1;
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
  FUN_01f9e0f8(param_4,&local_68,param_5 & 1,local_6c,local_70,&local_74);
  lVar8 = FUN_01f9ff08(param_2,local_68,param_4,local_74,param_2);
  if (lVar8 != 0) {
    FUN_018de658(&local_90,*(undefined4 *)(lVar8 + 0x18),*(undefined8 *)PTR_DAT_027c1f50);
    cVar4 = local_6c[0];
    cVar3 = local_70[0];
    puVar2 = PTR_DAT_027c1f48;
    uVar6 = *(uint *)(lVar8 + 0x18);
    if (0 < (int)uVar6) {
      lVar11 = 0;
      do {
        if (uVar6 <= (uint)lVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_01230ca8();
        }
        lVar10 = *(long *)(lVar8 + 0x20 + lVar11 * 8);
        if (lVar10 == 0) goto OVRPlugin_OVRP_1_78_0__ovrp_SetControllerHapticsAmplitudeEnvelope;
        uVar6 = FUN_01ef07cc(lVar10,0);
        uVar7 = FUN_01ef07cc(lVar10,0);
        uVar5 = local_68;
        if ((uVar6 & (param_4 ^ 2)) == uVar7) {
          if (cVar4 != '\0') {
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            uVar9 = FUN_01f9e2bc(lVar10,uVar5,cVar3 != '\0');
            if ((uVar9 & 1) == 0) goto LAB_01f9fec0;
          }
          FUN_018de888(&local_90,lVar10,*(undefined8 *)puVar2);
        }
LAB_01f9fec0:
        uVar6 = *(uint *)(lVar8 + 0x18);
        lVar11 = lVar11 + 1;
      } while ((int)lVar11 < (int)uVar6);
    }
    param_1[2] = local_80;
    param_1[1] = uStack_88;
    *param_1 = local_90;
    return;
  }
OVRPlugin_OVRP_1_78_0__ovrp_SetControllerHapticsAmplitudeEnvelope:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


