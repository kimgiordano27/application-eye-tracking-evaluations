/*
FUNCTION_NAME: FUN_05df4108
ENTRY_POINT: 05df4108
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05df4108(undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
                 undefined4 param_4,undefined8 param_5,long param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  char cVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  int iVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long *plVar33;
  long lVar34;
  ulong uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  float fVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined1 auVar62 [16];
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined1 *puStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a4 [4];
  
  if ((DAT_06bc3d99 & 1) == 0) {
    FUN_02f08768(
                Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                );
    FUN_02f08768(Method_UnityEngine_GameObject_AddComponent<SphereGrabSurface>__);
    FUN_02f08768(Method_System_Net_Sockets_NetworkStream_Close__);
    FUN_02f08768(Method_System_Threading_SemaphoreSlim_CancellationTokenCanceledEventHandler__);
    FUN_02f08768(Method_OVRTask_SetResult<bool>__);
    FUN_02f08768(PTR_DAT_067cb280);
    FUN_02f08768(PTR_DAT_067cdbd8);
    FUN_02f08768(Method_System_Threading_SemaphoreSlim_CheckDispose__);
    FUN_02f08768(Method_UnityEngine_InputSystem_Pen_get_Item__);
    FUN_02f08768(Method_System_Threading_SemaphoreSlim_Release__);
    FUN_02f08768(Method_System_Threading_SemaphoreSlim_Wait__);
    FUN_02f08768(Method_System_Threading_SemaphoreSlim_WaitAsync__);
    FUN_02f08768(Method_UnityEngine_InputSystem_XR_Haptics_SendBufferedHapticCommand_Create__);
    FUN_02f08768(Method_UnityEngine_UIElements_PanelEventHandler_OnElementFocus__);
    FUN_02f08768(Method_System_Threading_SendOrPostCallback_Invoke__);
    FUN_02f08768(Method_UnityEngine_InputSystem_PlayerInput_Instantiate__);
    FUN_02f08768(Method_UnityEngine_InputSystem_PlayerInput_OnActionTriggered__);
    DAT_06bc3d99 = 1;
  }
  puVar6 = PTR_DAT_067cdbd8;
  local_a4[0] = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_f8 = 0;
  local_f0 = 0;
  if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar34 = *(long *)(param_6 + 0x20);
  lVar3 = *(long *)(param_6 + 0x28);
  cVar5 = *(char *)(param_6 + 0x30);
  uVar24 = FUN_034dac00(4,*(undefined8 *)Method_System_Net_Sockets_NetworkStream_Close__);
  FUN_05c5cb4c(local_a4,param_5,uVar24,0);
  local_108 = 0;
  puStack_100 = local_a4;
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar25 = FUN_05c74700(0);
  if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar25 = *(long *)(lVar25 + 0x10);
  if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar26 = FUN_035eb4b0(lVar25,*(undefined8 *)Method_System_Threading_SemaphoreSlim_CheckDispose__);
  lVar27 = FUN_035eb4b0(lVar25,*(undefined8 *)Method_UnityEngine_InputSystem_Pen_get_Item__);
  lVar28 = FUN_035eb4b0(lVar25,*(undefined8 *)Method_System_Threading_SemaphoreSlim_Release__);
  lVar29 = FUN_035eb4b0(lVar25,*(undefined8 *)Method_System_Threading_SemaphoreSlim_Wait__);
  lVar30 = FUN_035eb4b0(lVar25,*(undefined8 *)Method_System_Threading_SemaphoreSlim_WaitAsync__);
  lVar31 = FUN_035eb4b0(lVar25,*(undefined8 *)
                                Method_UnityEngine_InputSystem_XR_Haptics_SendBufferedHapticCommand_Create__
                       );
  lVar32 = FUN_035eb4b0(lVar25,*(undefined8 *)
                                Method_UnityEngine_UIElements_PanelEventHandler_OnElementFocus__);
  lVar25 = FUN_035eb4b0(lVar25,*(undefined8 *)Method_System_Threading_SendOrPostCallback_Invoke__);
  if (*(long *)(param_6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  iVar23 = *(int *)(*(long *)(param_6 + 0x18) + 0x14);
  lVar1 = lVar3;
  if (iVar23 != 1) {
    lVar1 = lVar34;
  }
  if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  plVar33 = *(long **)(lVar25 + 0x38);
  if (plVar33 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar36 = (**(code **)(*plVar33 + 0x218))(plVar33,*(undefined8 *)(*plVar33 + 0x220));
  plVar33 = *(long **)(lVar25 + 0x40);
  if (plVar33 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar37 = (**(code **)(*plVar33 + 0x218))(plVar33,*(undefined8 *)(*plVar33 + 0x220));
  if (*(int *)(*(long *)Method_UnityEngine_GameObject_AddComponent<SphereGrabSurface>__ + 0xe4) == 0
     ) {
    thunk_FUN_02f6670c();
  }
  uVar36 = FUN_05cac880(uVar36,0);
  if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  plVar33 = *(long **)(lVar27 + 0x50);
  if (plVar33 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar59 = uVar37;
  uVar61 = param_3;
  fVar38 = (float)(**(code **)(*plVar33 + 0x218))(plVar33,*(undefined8 *)(*plVar33 + 0x220));
  plVar33 = *(long **)(lVar27 + 0x58);
  if (plVar33 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  fVar39 = (float)(**(code **)(*plVar33 + 0x218))(plVar33,*(undefined8 *)(*plVar33 + 0x220));
  plVar33 = *(long **)(lVar27 + 0x40);
  if (plVar33 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  fVar40 = (float)(**(code **)(*plVar33 + 0x218))(plVar33,*(undefined8 *)(*plVar33 + 0x220));
  if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  plVar33 = *(long **)(lVar26 + 0x38);
  if (plVar33 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  fVar41 = (float)(**(code **)(*plVar33 + 0x218))(plVar33,*(undefined8 *)(*plVar33 + 0x220));
  plVar33 = *(long **)(lVar26 + 0x40);
  if (plVar33 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  fVar42 = (float)(**(code **)(*plVar33 + 0x218))(plVar33,*(undefined8 *)(*plVar33 + 0x220));
  plVar33 = *(long **)(lVar26 + 0x48);
  if (plVar33 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  fVar43 = (float)(**(code **)(*plVar33 + 0x218))(plVar33,*(undefined8 *)(*plVar33 + 0x220));
  plVar33 = *(long **)(lVar26 + 0x50);
  if (plVar33 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  fVar44 = (float)(**(code **)(*plVar33 + 0x218))(plVar33,*(undefined8 *)(*plVar33 + 0x220));
  plVar33 = *(long **)(lVar26 + 0x58);
  if (plVar33 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  fVar45 = (float)(**(code **)(*plVar33 + 0x218))(plVar33,*(undefined8 *)(*plVar33 + 0x220));
  plVar33 = *(long **)(lVar26 + 0x60);
  if (plVar33 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  fVar46 = (float)(**(code **)(*plVar33 + 0x218))(plVar33,*(undefined8 *)(*plVar33 + 0x220));
  plVar33 = *(long **)(lVar26 + 0x68);
  if (plVar33 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  fVar47 = (float)(**(code **)(*plVar33 + 0x218))(plVar33,*(undefined8 *)(*plVar33 + 0x220));
  plVar33 = *(long **)(lVar26 + 0x70);
  if (plVar33 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  fVar48 = (float)(**(code **)(*plVar33 + 0x218))(plVar33,*(undefined8 *)(*plVar33 + 0x220));
  plVar33 = *(long **)(lVar26 + 0x78);
  if (plVar33 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  fVar49 = (float)(**(code **)(*plVar33 + 0x218))(plVar33,*(undefined8 *)(*plVar33 + 0x220));
  if (lVar30 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  plVar33 = *(long **)(lVar30 + 0x50);
  if (plVar33 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar50 = (**(code **)(*plVar33 + 0x218))(plVar33,*(undefined8 *)(*plVar33 + 0x220));
  plVar33 = *(long **)(lVar30 + 0x58);
  if (plVar33 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar51 = (**(code **)(*plVar33 + 0x218))(plVar33,*(undefined8 *)(*plVar33 + 0x220));
  plVar33 = *(long **)(lVar30 + 0x60);
  if (plVar33 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar52 = (**(code **)(*plVar33 + 0x218))(plVar33,*(undefined8 *)(*plVar33 + 0x220));
  plVar33 = *(long **)(lVar30 + 0x68);
  if (plVar33 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar53 = (**(code **)(*plVar33 + 0x218))(plVar33,*(undefined8 *)(*plVar33 + 0x220));
  plVar33 = *(long **)(lVar30 + 0x38);
  if (plVar33 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar54 = (**(code **)(*plVar33 + 0x218))(plVar33,*(undefined8 *)(*plVar33 + 0x220));
  plVar33 = *(long **)(lVar30 + 0x40);
  local_b8 = CONCAT44(uVar59,uVar54);
  local_b0 = CONCAT44(param_4,uVar61);
  if (plVar33 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar54 = (**(code **)(*plVar33 + 0x218))(plVar33,*(undefined8 *)(*plVar33 + 0x220));
  plVar33 = *(long **)(lVar30 + 0x48);
  local_c8 = CONCAT44(uVar59,uVar54);
  local_c0 = CONCAT44(param_4,uVar61);
  if (plVar33 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar54 = (**(code **)(*plVar33 + 0x218))(plVar33,*(undefined8 *)(*plVar33 + 0x220));
  local_d8 = CONCAT44(uVar59,uVar54);
  local_d0 = CONCAT44(param_4,uVar61);
  FUN_05cac9dc(&local_138,&local_b8,&local_c8,&local_d8,0);
  uVar22 = local_10c;
  uVar21 = local_110;
  uVar20 = local_114;
  uVar19 = local_118;
  uVar17 = local_11c;
  uVar15 = local_120;
  uVar13 = uStack_124;
  uVar11 = local_128;
  uVar9 = uStack_12c;
  uVar7 = local_130;
  uVar54 = uStack_134;
  uVar59 = local_138;
  if (lVar29 != 0) {
    plVar33 = *(long **)(lVar29 + 0x38);
    if (plVar33 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar60 = local_110;
    uVar55 = (**(code **)(*plVar33 + 0x218))(plVar33,*(undefined8 *)(*plVar33 + 0x220));
    plVar33 = *(long **)(lVar29 + 0x40);
    local_b8 = CONCAT44(uVar60,uVar55);
    local_b0 = CONCAT44(param_4,uVar61);
    if (plVar33 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar55 = (**(code **)(*plVar33 + 0x218))(plVar33,*(undefined8 *)(*plVar33 + 0x220));
    plVar33 = *(long **)(lVar29 + 0x48);
    local_c8 = CONCAT44(uVar60,uVar55);
    local_c0 = CONCAT44(param_4,uVar61);
    if (plVar33 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar55 = (**(code **)(*plVar33 + 0x218))(plVar33,*(undefined8 *)(*plVar33 + 0x220));
    local_d8 = CONCAT44(uVar60,uVar55);
    local_d0 = CONCAT44(param_4,uVar61);
    FUN_05cacbc0(&local_138,&local_b8,&local_c8,&local_d8,0);
    uVar18 = local_11c;
    uVar16 = local_120;
    uVar14 = uStack_124;
    uVar12 = local_128;
    uVar10 = uStack_12c;
    uVar8 = local_130;
    uVar55 = uStack_134;
    uVar60 = local_138;
    if (lVar31 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    plVar33 = *(long **)(lVar31 + 0x38);
    if (plVar33 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar58 = local_110;
    uVar56 = (**(code **)(*plVar33 + 0x218))(plVar33,*(undefined8 *)(*plVar33 + 0x220));
    plVar33 = *(long **)(lVar31 + 0x40);
    local_b8 = CONCAT44(uVar58,uVar56);
    local_b0 = CONCAT44(param_4,uVar61);
    if (plVar33 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar56 = (**(code **)(*plVar33 + 0x218))(plVar33,*(undefined8 *)(*plVar33 + 0x220));
    plVar33 = *(long **)(lVar31 + 0x48);
    local_c8 = CONCAT44(uVar58,uVar56);
    local_c0 = CONCAT44(param_4,uVar61);
    if (plVar33 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    (**(code **)(*plVar33 + 0x218))(plVar33,*(undefined8 *)(*plVar33 + 0x220));
    FUN_05cace6c(&local_138,&local_b8,&local_c8,0);
    puVar6 = Method_System_Threading_SemaphoreSlim_CancellationTokenCanceledEventHandler__;
    if (*(long *)(param_6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    iVar4 = *(int *)(*(long *)(param_6 + 0x18) + 0x18);
    if (*(int *)(*(long *)
                  Method_System_Threading_SemaphoreSlim_CancellationTokenCanceledEventHandler__ +
                0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    fVar57 = (float)iVar4;
    thunk_FUN_060bfdac(fVar57,0.5 / (float)(iVar4 * iVar4),0.5 / fVar57,fVar57 / (fVar57 + -1.0),
                       lVar1,**(undefined4 **)(*(long *)puVar6 + 0xb8),0);
    uVar61 = 0;
    thunk_FUN_060bfdac(uVar36,uVar37,param_3,0,lVar1,
                       *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 4),0);
    plVar33 = *(long **)(lVar27 + 0x48);
    if (plVar33 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar36 = *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 8);
    (**(code **)(*plVar33 + 0x218))(plVar33,*(undefined8 *)(*plVar33 + 0x220));
    uVar58 = FUN_060d9e9c(0);
    uVar37 = FUN_060d9e9c(uVar37,0);
    uVar56 = FUN_060d9e9c(param_3,0);
    thunk_FUN_060bfdac(uVar58,uVar37,uVar56,uVar61,lVar1,uVar36,0);
    thunk_FUN_060bfdac(fVar41 / 100.0,fVar42 / 100.0,fVar43 / 100.0,0,lVar1,
                       *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xc),0);
    thunk_FUN_060bfdac(fVar44 / 100.0,fVar45 / 100.0,fVar46 / 100.0,0,lVar1,
                       *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10),0);
    thunk_FUN_060bfdac(fVar47 / 100.0,fVar48 / 100.0,fVar49 / 100.0,0,lVar1,
                       *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x14),0);
    thunk_FUN_060bfdac(fVar38 / 360.0,fVar39 / 100.0 + 1.0,fVar40 / 100.0 + 1.0,0,lVar1,
                       *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18),0);
    thunk_FUN_060bfdac(uVar60,uVar55,uVar8,uVar10,lVar1,
                       *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x1c),0);
    thunk_FUN_060bfdac(uVar12,uVar14,uVar16,uVar18,lVar1,
                       *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x20),0);
    thunk_FUN_060bfdac(local_118,local_114,local_110,local_10c,lVar1,
                       *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x24),0);
    thunk_FUN_060bfdac(uVar59,uVar54,uVar7,uVar9,lVar1,
                       *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x28),0);
    thunk_FUN_060bfdac(uVar11,uVar13,uVar15,uVar17,lVar1,
                       *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x2c),0);
    thunk_FUN_060bfdac(uVar19,uVar20,uVar21,uVar22,lVar1,
                       *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x30),0);
    thunk_FUN_060bfdac(uVar50,uVar51,uVar52,uVar53,lVar1,
                       *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x34),0);
    thunk_FUN_060bfdac(local_138,uStack_134,local_130,uStack_12c,lVar1,
                       *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x38),0);
    thunk_FUN_060bfdac(local_128,uStack_124,local_120,local_11c,lVar1,
                       *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x3c),0);
    if (lVar28 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    plVar33 = *(long **)(lVar28 + 0x38);
    if (plVar33 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar36 = *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x40);
    lVar34 = (**(code **)(*plVar33 + 0x218))(plVar33,*(undefined8 *)(*plVar33 + 0x220));
    if (lVar34 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar24 = FUN_05cb851c(lVar34,0);
    UnityEngine_TextCore_Text_SpriteAsset__get_height(lVar1,uVar36,uVar24,0);
    plVar33 = *(long **)(lVar28 + 0x40);
    if (plVar33 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar36 = *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x44);
    lVar34 = (**(code **)(*plVar33 + 0x218))(plVar33,*(undefined8 *)(*plVar33 + 0x220));
    if (lVar34 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar24 = FUN_05cb851c(lVar34,0);
    UnityEngine_TextCore_Text_SpriteAsset__get_height(lVar1,uVar36,uVar24,0);
    plVar33 = *(long **)(lVar28 + 0x48);
    if (plVar33 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar36 = *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x48);
    lVar34 = (**(code **)(*plVar33 + 0x218))(plVar33,*(undefined8 *)(*plVar33 + 0x220));
    if (lVar34 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar24 = FUN_05cb851c(lVar34,0);
    UnityEngine_TextCore_Text_SpriteAsset__get_height(lVar1,uVar36,uVar24,0);
    plVar33 = *(long **)(lVar28 + 0x50);
    if (plVar33 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar36 = *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x4c);
    lVar34 = (**(code **)(*plVar33 + 0x218))(plVar33,*(undefined8 *)(*plVar33 + 0x220));
    if (lVar34 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar24 = FUN_05cb851c(lVar34,0);
    UnityEngine_TextCore_Text_SpriteAsset__get_height(lVar1,uVar36,uVar24,0);
    plVar33 = *(long **)(lVar28 + 0x58);
    if (plVar33 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar36 = *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x50);
    lVar34 = (**(code **)(*plVar33 + 0x218))(plVar33,*(undefined8 *)(*plVar33 + 0x220));
    if (lVar34 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar24 = FUN_05cb851c(lVar34,0);
    UnityEngine_TextCore_Text_SpriteAsset__get_height(lVar1,uVar36,uVar24,0);
    plVar33 = *(long **)(lVar28 + 0x60);
    if (plVar33 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar36 = *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x54);
    lVar34 = (**(code **)(*plVar33 + 0x218))(plVar33,*(undefined8 *)(*plVar33 + 0x220));
    if (lVar34 != 0) {
      uVar24 = FUN_05cb851c(lVar34,0);
      UnityEngine_TextCore_Text_SpriteAsset__get_height(lVar1,uVar36,uVar24,0);
      plVar33 = *(long **)(lVar28 + 0x70);
      if (plVar33 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar36 = *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x58);
      lVar34 = (**(code **)(*plVar33 + 0x218))(plVar33,*(undefined8 *)(*plVar33 + 0x220));
      if (lVar34 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar24 = FUN_05cb851c(lVar34,0);
      UnityEngine_TextCore_Text_SpriteAsset__get_height(lVar1,uVar36,uVar24,0);
      plVar33 = *(long **)(lVar28 + 0x68);
      if (plVar33 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar36 = *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x5c);
      lVar34 = (**(code **)(*plVar33 + 0x218))(plVar33,*(undefined8 *)(*plVar33 + 0x220));
      if (lVar34 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar24 = FUN_05cb851c(lVar34,0);
      UnityEngine_TextCore_Text_SpriteAsset__get_height(lVar1,uVar36,uVar24,0);
      if (iVar23 == 1) {
        thunk_FUN_060bf9c4(lVar3,0,0);
        if (lVar32 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        plVar33 = *(long **)(lVar32 + 0x38);
        if (plVar33 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        iVar23 = (**(code **)(*plVar33 + 0x218))(plVar33,*(undefined8 *)(*plVar33 + 0x220));
        if (iVar23 == 1) {
          FUN_060be514(lVar3,*(undefined8 *)
                              Method_UnityEngine_InputSystem_PlayerInput_OnActionTriggered__,0);
        }
        else if (iVar23 == 2) {
          puVar2 = (undefined8 *)Method_UnityEngine_InputSystem_PlayerInput_OnActionTriggered__;
          if (cVar5 != '\0') {
            puVar2 = (undefined8 *)Method_UnityEngine_InputSystem_PlayerInput_Instantiate__;
          }
          FUN_060be514(lVar3,*puVar2,0);
        }
        if (*(long *)(param_6 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar35 = FUN_05d6d398(*(long *)(param_6 + 0x10),0);
        if ((uVar35 & 1) != 0) {
          if (*(long *)(param_6 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          auVar62 = FUN_05d6d448(*(long *)(param_6 + 0x10),0);
          if (*(long *)(param_6 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          uVar36 = FUN_05d6d540(*(long *)(param_6 + 0x10),0);
          if (*(int *)(*(long *)PTR_DAT_067cb280 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_05dddc0c(auVar62._0_8_,auVar62._8_8_,uVar36,lVar32,&local_e8,0);
          FUN_05dddcfc(lVar32,&local_f8,0);
          puVar6 = Method_OVRTask_SetResult<bool>__;
          lVar34 = *(long *)Method_OVRTask_SetResult<bool>__;
          if (*(int *)(lVar34 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            lVar34 = *(long *)puVar6;
          }
          thunk_FUN_060bfdac((undefined4)local_e8,local_e8._4_4_,local_e0 & 0xffffffff,
                             local_e0._4_4_,lVar3,*(undefined4 *)(*(long *)(lVar34 + 0xb8) + 0xe0),0
                            );
          thunk_FUN_060bfdac((undefined4)local_f8,local_f8._4_4_,local_f0 & 0xffffffff,
                             local_f0._4_4_,lVar3,
                             *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xe4),0);
          if (*(long *)(param_6 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          uVar36 = FUN_05d6d540(*(long *)(param_6 + 0x10),0);
          FUN_05cb5c84(lVar3,uVar36,1,0);
        }
      }
      if (*(long *)(param_6 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar34 = *(long *)(*(long *)(param_6 + 0x10) + 0x1a0);
      if (lVar34 != 0) {
        FUN_05c3a430(lVar34,param_5,0);
        if (DAT_06bb8a4a == '\0') {
          FUN_02f08768(PTR_DAT_067c9848);
          DAT_06bb8a4a = '\x01';
        }
        uVar36 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_067c9848 + 0xb8) + 8);
        uVar37 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_067c9848 + 0xb8) + 0xc);
        if (*(int *)(*(long *)
                      Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                    + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05caa8c8(uVar36,uVar37,0,0,param_5,param_7,lVar1,0,0);
        if (*(long *)(param_6 + 0x10) != 0) {
          lVar34 = *(long *)(*(long *)(param_6 + 0x10) + 0x1a0);
          if (lVar34 != 0) {
            FUN_05c3a3b0(lVar34,param_5,0);
            FUN_05c5cb50(local_a4,0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


