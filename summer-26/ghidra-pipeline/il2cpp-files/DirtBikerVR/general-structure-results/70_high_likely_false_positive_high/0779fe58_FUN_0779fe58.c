/*
FUNCTION_NAME: FUN_0779fe58
ENTRY_POINT: 0779fe58
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_0779fe58(long param_1,long *param_2,undefined8 param_3,long param_4,long param_5,
                 long param_6,undefined8 param_7,uint param_8,undefined4 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 auVar8 [12];
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 local_528;
  undefined1 auStack_520 [200];
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined1 auStack_390 [248];
  undefined4 local_298;
  undefined1 local_294;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined1 auStack_260 [304];
  undefined1 auStack_130 [200];
  long local_68;
  
  puVar6 = UnityEngine_Rendering_OccluderContext_var;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_528 = param_3;
  if ((DAT_08986f6b & 1) == 0) {
    FUN_03a8a718(UnityEngine_Rendering_OccluderContext_var);
    FUN_03a8a718(UnityEngine_UIElements_DataBindingManager_BindingRequest_var);
    FUN_03a8a718(UnityEngine_UIElements_DataBindingManager_ChangesFromUI_var);
    FUN_03a8a718(NWH_VehiclePhysics2_Input_InputSystemVehicleInputProvider_var);
    FUN_03a8a718(UnityEngine_InspectorNameAttribute_var);
    FUN_03a8a718(UnityEngine_InputSystem_InputProcessor_var);
    FUN_03a8a718(UnityEngine_InputSystem_InputProcessor<TValue>_var);
    FUN_03a8a718(PTR_DAT_08503ff0);
    FUN_03a8a718(PTR_DAT_084887c8);
    DAT_08986f6b = 1;
  }
  memset(auStack_130,0,200);
  local_560 = 0;
  uStack_558 = 0;
  local_570 = 0;
  uStack_568 = 0;
  uStack_548 = 0;
  local_550 = 0;
  uStack_538 = 0;
  uStack_540 = 0;
  memset(auStack_260,0,0x130);
  memset(auStack_390,0,0x130);
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  puVar5 = UnityEngine_InspectorNameAttribute_var;
  puVar4 = NWH_VehiclePhysics2_Input_InputSystemVehicleInputProvider_var;
  if (param_6 != 0) {
    FUN_076f4d88(&local_458,param_1,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18),
                 param_5,param_6,param_7,*(undefined4 *)(param_6 + 0x198),0);
    memcpy(auStack_130,&local_458,200);
    uStack_548 = *(undefined8 *)(param_1 + 200);
    local_550 = *(undefined8 *)(param_1 + 0xc0);
    uStack_538 = *(undefined8 *)(param_1 + 0xd8);
    uStack_540 = *(undefined8 *)(param_1 + 0xd0);
    FUN_07cd6b14(&local_550,param_9,0);
    FUN_0514c5a4(&local_560,*(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x20),2,
                 *(undefined8 *)puVar5);
    FUN_05144ff4(&local_570,*(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x28),2,
                 *(undefined8 *)puVar4);
    puVar5 = UnityEngine_InputSystem_InputProcessor<TValue>_var;
    puVar4 = UnityEngine_InputSystem_InputProcessor_var;
    if (param_5 != 0) {
      uVar1 = *(undefined8 *)(param_5 + 0x18);
      uVar2 = *(undefined8 *)(param_5 + 0x20);
      uStack_588 = uStack_548;
      local_590 = local_550;
      uStack_578 = uStack_538;
      uStack_580 = uStack_540;
      if (*(int *)(*(long *)PTR_DAT_08503ff0 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      memcpy(auStack_520,auStack_130,200);
      uStack_5a8 = uStack_588;
      local_5b0 = local_590;
      uStack_598 = uStack_578;
      uStack_5a0 = uStack_580;
      FUN_07cd9990(auStack_390,uVar1,uVar2,auStack_520,&local_5b0,0);
      local_5c8 = 0;
      uStack_5c0 = 0;
      local_5b8 = 0;
      FUN_0528ff54(&local_5c8,local_560,uStack_558,*(undefined8 *)puVar4);
      local_5e0 = 0;
      uStack_5d8 = 0;
      uStack_288 = uStack_5c0;
      local_290 = local_5c8;
      local_280 = local_5b8;
      local_5d0 = 0;
      FUN_0528fb34(&local_5e0,local_570,uStack_568,*(undefined8 *)puVar5);
      uStack_270 = uStack_5d8;
      local_278 = local_5e0;
      local_268 = local_5d0;
      local_298 = *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x1c);
      local_294 = 0;
      memcpy(auStack_260,auStack_390,0x130);
      lVar7 = *param_2;
      if ((param_8 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_084887c8 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_07cdc788(&local_458,&local_528,auStack_260,0);
        if (lVar7 == 0) goto LAB_077a01cc;
        *(undefined8 *)(lVar7 + 0x50) = uStack_450;
        *(undefined8 *)(lVar7 + 0x48) = local_458;
        *(undefined8 *)(lVar7 + 0x58) = local_448;
      }
      else {
        if ((param_4 == 0) || (auVar8 = FUN_074151f0(param_4,auStack_260,0), lVar7 == 0))
        goto LAB_077a01cc;
        *(undefined1 (*) [12])(lVar7 + 0x30) = auVar8;
      }
      puVar6 = UnityEngine_UIElements_DataBindingManager_BindingRequest_var;
      FUN_0514c7ec(&local_560,
                   *(undefined8 *)UnityEngine_UIElements_DataBindingManager_ChangesFromUI_var);
      FUN_0514527c(&local_570,*(undefined8 *)puVar6);
      if (*(long *)(lVar3 + 0x28) == local_68) {
        return;
      }
      goto LAB_077a01e0;
    }
  }
LAB_077a01cc:
  if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
LAB_077a01e0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


