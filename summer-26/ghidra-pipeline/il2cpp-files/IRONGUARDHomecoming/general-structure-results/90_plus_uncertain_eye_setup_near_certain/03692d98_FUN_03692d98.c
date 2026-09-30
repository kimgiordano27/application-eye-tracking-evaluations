/*
FUNCTION_NAME: FUN_03692d98
ENTRY_POINT: 03692d98
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_10
*/


void FUN_03692d98(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined8 uStack_60;
  undefined8 uStack_4c;
  
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__653_60__;
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__653_6__;
                    /* try { // try from 03692dac to 03792daf has its CatchHandler @ 03692dbc */
                    /* catch() { ... } // from try @ 03692dac with catch @ 03692dbc */
                    /* try { // try from 03692dc8 to 03792dd3 has its CatchHandler @ 03692de8 */
  if ((DAT_04833ed2 & 1) == 0) {
                    /* try { // try from 03692dd4 to 03792ddf has its CatchHandler @ 03692ce8 */
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_57__);
                    /* try { // try from 03692de0 to 03792de7 has its CatchHandler @ 03692de8 */
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_6__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03692dc8 with catch @ 03692de8
                       catch(type#2 @ 00000000) { ... } // from try @ 03692de0 with catch @ 03692de8
                        */
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_60__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_61__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_62__);
    DAT_04833ed2 = 1;
  }
  plVar4 = (long *)FUN_01f08890(*(undefined8 *)puVar2,3);
  lVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
  uVar7 = DAT_00c8e998;
  *(undefined8 *)(lVar5 + 0x10) = DAT_00c8e998;
  *(undefined1 *)(lVar5 + 0x18) = 1;
  FUN_035ac8e8(lVar5,0);
  *(undefined4 *)(lVar5 + 0x1c) = 1;
  *(undefined4 *)(lVar5 + 0x14) = 0x42be0000;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = thunk_FUN_01f116d0(lVar5,*(undefined8 *)(*plVar4 + 0x40));
  if (lVar6 != 0) {
    if ((int)plVar4[3] != 0) {
      plVar4[4] = lVar5;
      thunk_FUN_01f51358(plVar4 + 4,lVar5);
      lVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
      *(undefined8 *)(lVar5 + 0x10) = uVar7;
      *(undefined1 *)(lVar5 + 0x18) = 1;
      FUN_035ac8e8(lVar5,0);
      uVar1 = DAT_00c8e8d8;
      *(undefined4 *)(lVar5 + 0x1c) = 2;
      *(undefined8 *)(lVar5 + 0x10) = uVar1;
      lVar6 = thunk_FUN_01f116d0(lVar5,*(undefined8 *)(*plVar4 + 0x40));
      if (lVar6 == 0) goto LAB_0369306c;
      if (1 < *(uint *)(plVar4 + 3)) {
        plVar4[5] = lVar5;
        thunk_FUN_01f51358(plVar4 + 5,lVar5);
        lVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
        *(undefined8 *)(lVar5 + 0x10) = uVar7;
        *(undefined1 *)(lVar5 + 0x18) = 1;
        FUN_035ac8e8(lVar5,0);
        *(undefined4 *)(lVar5 + 0x1c) = 1;
        *(undefined4 *)(lVar5 + 0x10) = 0x42f00000;
        *(undefined1 *)(lVar5 + 0x18) = 0;
        lVar6 = thunk_FUN_01f116d0(lVar5,*(undefined8 *)(*plVar4 + 0x40));
        puVar3 = Method_OVRPlugin_<>c_<_cctor>b__653_62__;
        puVar2 = Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__;
        if (lVar6 == 0) goto LAB_0369306c;
        if (2 < *(uint *)(plVar4 + 3)) {
          plVar4[6] = lVar5;
          thunk_FUN_01f51358(plVar4 + 6,lVar5);
          *(long *)(param_1 + 0x38) = (long)plVar4;
          thunk_FUN_01f51358((long *)(param_1 + 0x38),plVar4);
          *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0407bc90(&uStack_80,0);
          uStack_4c = uStack_6c;
          uStack_60 = uStack_80;
          *(undefined8 *)(param_1 + 0xa0) = uStack_6c;
          *(ulong *)(param_1 + 0x98) = CONCAT44(uStack_70,local_74);
          *(ulong *)(param_1 + 0x94) = CONCAT44(local_74,uStack_78);
          *(undefined8 *)(param_1 + 0x8c) = uStack_80;
          lVar5 = *(long *)puVar3;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar5 = *(long *)puVar3;
          }
          lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
          if (lVar6 == 0) {
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar5 = *(long *)puVar3;
            }
            uVar7 = **(undefined8 **)(lVar5 + 0xb8);
            lVar6 = thunk_FUN_01f117cc(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__653_57__);
                    /* try { // try from 03693010 to 03793067 has its CatchHandler @ 03693010
                       catch() { ... } // from try @ 03693010 with catch @ 03693010
                       catch() { ... } // from try @ 03693148 with catch @ 03693010
                       catch() { ... } // from try @ 0369321c with catch @ 03693010
                       catch() { ... } // from try @ 03693298 with catch @ 03693010 */
            FUN_02b83988(lVar6,uVar7,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__653_61__,0);
            plVar4 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
            *plVar4 = lVar6;
            thunk_FUN_01f51358(plVar4,lVar6);
          }
          *(long *)(param_1 + 0xa8) = lVar6;
          thunk_FUN_01f51358((long *)(param_1 + 0xa8),lVar6);
          thunk_FUN_0406f928(param_1,0);
                    /* try { // try from 03693068 to 03793073 has its CatchHandler @ 03693250 */
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
LAB_0369306c:
  uVar7 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar7,0);
}


