/*
FUNCTION_NAME: FUN_05c1616c
ENTRY_POINT: 05c1616c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_05c1616c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  
  puVar6 = OVRPlugin_OVRP_1_36_0_TypeInfo;
  puVar5 = OVRPlugin_OVRP_1_121_0_TypeInfo;
  if ((DAT_06dc26f0 & 1) == 0) {
    FUN_02d965b8(OVRPlugin_OVRP_1_121_0_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0aa48);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__);
    FUN_02d965b8(OVRPlugin_OVRP_1_102_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_36_0_TypeInfo);
    DAT_06dc26f0 = 1;
  }
  puVar2 = PTR_DAT_069fb9c0;
  *(undefined2 *)(param_1 + 0x49) = 0x101;
  puVar4 = OVRPlugin_OVRP_1_102_0_TypeInfo;
  puVar3 = PTR_DAT_06a0aa48;
                    /* try { // try from 05c16208 to 05d1627b has its CatchHandler @ 05c16208
                       catch() { ... } // from try @ 05c16208 with catch @ 05c16208
                       catch() { ... } // from try @ 05c16434 with catch @ 05c16208
                       catch() { ... } // from try @ 05c164ec with catch @ 05c16208
                       catch() { ... } // from try @ 05c16558 with catch @ 05c16208 */
  lVar8 = *(long *)(puVar2 + 0x90);
  *(undefined8 *)(param_1 + 0x68) = 0xffffffffffffffff;
  puVar9 = *(undefined8 **)(lVar8 + 0xb8);
  *(undefined1 *)(param_1 + 0x98) = 1;
  *(undefined4 *)(param_1 + 0x9c) = 0x32;
  *(undefined8 *)(param_1 + 0xa0) = *puVar9;
  LeanTween__value();
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)puVar6;
  LeanTween__value();
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)puVar6;
  LeanTween__value((undefined8 *)(param_1 + 0xb0));
  lVar8 = *(long *)puVar5;
  *(undefined1 *)(param_1 + 0xb8) = 1;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar8 = *(long *)puVar5;
  }
  puVar5 = Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__;
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10);
  LeanTween__value((undefined8 *)(param_1 + 0xc0));
  uVar7 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0xf0) = DAT_010fc0c0;
  uVar7 = thunk_FUN_02dd3144(uVar7);
  FUN_0552aca4(uVar7,0);
  *(undefined8 *)(param_1 + 0x128) = uVar7;
  LeanTween__value(param_1 + 0x128,uVar7);
  iVar1 = *(int *)(*(long *)puVar4 + 0xe4);
  *(undefined4 *)(param_1 + 0x138) = 300000;
  if (iVar1 == 0) {
    thunk_FUN_02df485c();
  }
  FUN_05ce1d9c(param_1,0);
  *(undefined8 *)(param_1 + 0x38) = param_2;
  LeanTween__value((undefined8 *)(param_1 + 0x38),param_2);
  *(undefined8 *)(param_1 + 0x40) = param_2;
  LeanTween__value((undefined8 *)(param_1 + 0x40),param_2);
  uVar7 = FUN_05cf11c4(0);
  *(undefined8 *)(param_1 + 0xd8) = uVar7;
  LeanTween__value();
  uVar7 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
  FUN_05ceea6c(uVar7,3,0);
  *(undefined8 *)(param_1 + 0x90) = uVar7;
  LeanTween__value((undefined8 *)(param_1 + 0x90),uVar7);
  *(undefined1 *)(param_1 + 400) = 1;
  FUN_05c16790(param_1);
  return;
}


