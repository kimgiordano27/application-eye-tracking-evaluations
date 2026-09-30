/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$get_Current
ENTRY_POINT: 01777894
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array_InternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__get_Current
               (long param_1,uint param_2,int param_3,long param_4,long param_5)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  
                    /* try { // try from 017778a4 to 018778b7 has its CatchHandler @ 017776e4 */
  lVar5 = *(long *)(param_5 + 0x20);
  iVar4 = param_3 - param_2;
                    /* try { // try from 017778b8 to 018778c7 has its CatchHandler @ 017778dc */
  if (iVar4 < 0) {
    iVar4 = iVar4 + 1;
  }
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 01777860 with catch @ 017778cc */
    lVar5 = FUN_0122e748();
  }
                    /* catch() { ... } // from try @ 01777870 with catch @ 017778d0 */
                    /* catch() { ... } // from try @ 01777888 with catch @ 017778d4 */
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x48);
                    /* catch() { ... } // from try @ 01777844 with catch @ 017778dc
                       catch() { ... } // from try @ 017778b8 with catch @ 017778dc */
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0122e748();
  }
                    /* try { // try from 017778e4 to 018778e7 has its CatchHandler @ 017779a0 */
                    /* try { // try from 017778e8 to 018778ff has its CatchHandler @ 017776e4 */
  uVar6 = param_2 + (iVar4 >> 1);
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  lVar5 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                    /* try { // try from 01777900 to 01877917 has its CatchHandler @ 01777990 */
    lVar5 = FUN_0122e748();
  }
                    /* try { // try from 01777918 to 0187797f has its CatchHandler @ 017776e4 */
  FUN_017773a0(param_1,param_4,param_2,uVar6,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x70));
  lVar5 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0122e748();
  }
  FUN_017773a0(param_1,param_4,param_2,param_3,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x70));
  lVar5 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0122e748();
  }
  FUN_017773a0(param_1,param_4,uVar6,param_3,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x70));
  if (param_1 == 0) {
LAB_01777b18:
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  if (uVar6 < *(uint *)(param_1 + 0x18)) {
    uVar1 = *(undefined2 *)(param_1 + (long)(int)uVar6 * 2 + 0x20);
    uVar3 = param_3 - 1;
    if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
      FUN_0122e748();
    }
    FUN_0177746c(param_1,uVar6,uVar3);
    uVar6 = uVar3;
    if ((int)uVar3 <= (int)param_2) {
LAB_01777aa8:
      lVar5 = *(long *)(param_5 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0122e748();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x48);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0122e748();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_0122e748();
      }
      FUN_0177746c(param_1,param_2,uVar3);
      return param_2;
    }
    while (param_2 = param_2 + 1, param_2 < *(uint *)(param_1 + 0x18)) {
      if (param_4 == 0) goto LAB_01777b18;
      uVar2 = *(undefined2 *)(param_1 + (long)(int)param_2 * 2 + 0x20);
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_0122e748();
      }
      iVar4 = (**(code **)(param_4 + 0x18))
                        (*(undefined8 *)(param_4 + 0x40),uVar2,uVar1,*(undefined8 *)(param_4 + 0x28)
                        );
      if (-1 < iVar4) {
        do {
          uVar6 = uVar6 - 1;
          if (*(uint *)(param_1 + 0x18) <= uVar6) goto LAB_01777b14;
          uVar2 = *(undefined2 *)(param_1 + (long)(int)uVar6 * 2 + 0x20);
          if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
            FUN_0122e748();
          }
          iVar4 = (**(code **)(param_4 + 0x18))
                            (*(undefined8 *)(param_4 + 0x40),uVar1,uVar2,
                             *(undefined8 *)(param_4 + 0x28));
        } while (iVar4 < 0);
        if ((int)uVar6 <= (int)param_2) goto LAB_01777aa8;
        lVar5 = *(long *)(param_5 + 0x20);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0122e748();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x48);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0122e748();
        }
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
          FUN_0122e748();
        }
        FUN_0177746c(param_1,param_2,uVar6);
      }
    }
  }
LAB_01777b14:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


