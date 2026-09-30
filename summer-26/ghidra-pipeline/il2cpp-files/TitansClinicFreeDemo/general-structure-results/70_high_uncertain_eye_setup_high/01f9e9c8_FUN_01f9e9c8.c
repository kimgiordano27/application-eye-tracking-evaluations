/*
FUNCTION_NAME: FUN_01f9e9c8
ENTRY_POINT: 01f9e9c8
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_01f9e9c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6,int param_7,uint param_8)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_74;
  char local_70 [4];
  char local_6c [4];
  undefined8 local_68;
  
                    /* try { // try from 01f9e9cc to 0209ea3f has its CatchHandler @ 01f9eba8 */
  local_68 = param_3;
  if ((DAT_0293df5f & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027c1ee0);
    thunk_FUN_01279b34(PTR_DAT_027c1ee8);
    thunk_FUN_01279b34(PTR_DAT_027b3ec0);
    DAT_0293df5f = 1;
  }
  local_6c[0] = '\0';
  local_70[0] = '\0';
                    /* try { // try from 01f9ea44 to 0209ea8b has its CatchHandler @ 01f9eb78 */
  local_74 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  if (*(int *)(*(long *)PTR_DAT_027b3ec0 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  FUN_01f9e0f8(param_4,&local_68,param_8 & 1,local_6c,local_70,&local_74);
  lVar5 = FUN_01f9ec24(param_2,local_68,param_4,local_74,param_2);
  if (lVar5 != 0) {
    FUN_018de658(&local_90,*(undefined4 *)(lVar5 + 0x18),*(undefined8 *)PTR_DAT_027c1ee8);
    cVar2 = local_6c[0];
    cVar1 = local_70[0];
    if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
      uVar9 = 0;
      uVar7 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
      do {
        if (uVar7 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_01230ca8();
        }
        plVar8 = *(long **)(lVar5 + 0x20 + uVar9 * 8);
        if (param_7 == -1) {
LAB_01f9eb54:
          if (*(int *)(*(long *)PTR_DAT_027b3ec0 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar7 = FUN_01f9e620(plVar8,param_4,param_5,param_6);
          uVar3 = local_68;
          if ((uVar7 & 1) != 0) {
            if (cVar2 != '\0') {
              if (*(int *)(*(long *)PTR_DAT_027b3ec0 + 0xe0) == 0) {
                thunk_FUN_01220628();
              }
              uVar7 = FUN_01f9e2bc(plVar8,uVar3,cVar1 != '\0');
              if ((uVar7 & 1) == 0) goto LAB_01f9ebd8;
            }
            FUN_018de888(&local_90,plVar8,*(undefined8 *)PTR_DAT_027c1ee0);
          }
        }
        else {
          if (plVar8 == (long *)0x0) goto OVRPlugin_OVRP_1_74_0__ovrp_CreateVirtualKeyboard;
          bVar4 = (**(code **)(*plVar8 + 0x2b8))(plVar8,*(undefined8 *)(*plVar8 + 0x2c0));
          if ((param_7 == 0 & bVar4) != (param_7 < 1 | bVar4 & 1)) {
            lVar6 = (**(code **)(*plVar8 + 0x2d8))(plVar8,*(undefined8 *)(*plVar8 + 0x2e0));
            if (lVar6 == 0) goto OVRPlugin_OVRP_1_74_0__ovrp_CreateVirtualKeyboard;
            if (*(int *)(lVar6 + 0x18) == param_7) goto LAB_01f9eb54;
          }
        }
LAB_01f9ebd8:
        uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)(int)*(uint *)(lVar5 + 0x18));
    }
    param_1[2] = local_80;
    param_1[1] = uStack_88;
    *param_1 = local_90;
    return;
  }
OVRPlugin_OVRP_1_74_0__ovrp_CreateVirtualKeyboard:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


