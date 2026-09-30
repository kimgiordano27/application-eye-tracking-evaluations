/*
FUNCTION_NAME: FUN_034ec660
ENTRY_POINT: 034ec660
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_9;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_4
*/


void FUN_034ec660(uint *param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 uVar17;
  undefined1 auVar18 [16];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined1 local_d7;
  undefined1 local_d6;
  undefined1 local_d5;
  undefined4 local_d4;
  undefined1 local_d0;
  undefined4 local_cf;
  undefined3 uStack_cb;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long local_98;
  long local_90;
  long local_88;
  undefined4 uStack_80;
  undefined3 uStack_7c;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  
  if ((DAT_04832e1e & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
    thunk_FUN_01efb3a4(Method_System_Net_WebRequest_get_ContentLength__);
    thunk_FUN_01efb3a4(Method_System_Net_WebRequest_Abort__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                      );
    thunk_FUN_01efb3a4(Method_System_Net_WebConnectionStream_set_WriteTimeout__);
    DAT_04832e1e = 1;
  }
  puVar4 = Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
  local_70 = 0;
  local_68 = 0;
  local_78 = 0;
  uStack_7c = 0;
  uStack_80 = 0;
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  if (param_4 == 0) goto LAB_034ecda0;
  uVar1 = *param_1;
  uVar12 = *(uint *)(param_4 + 0x18);
  if ((int)uVar1 < (int)uVar12) {
    do {
      if (uVar12 <= uVar1) goto LAB_034ecd9c;
      lVar6 = *(long *)puVar4;
      uVar14 = *(undefined8 *)(param_4 + (long)(int)uVar1 * 8 + 0x20);
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar6 = *(long *)puVar4;
      }
      uVar7 = FUN_0354fecc(uVar14,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10),0);
      if ((uVar7 & 1) == 0) break;
      uVar1 = *param_1 + 1;
      *param_1 = uVar1;
      uVar12 = *(uint *)(param_4 + 0x18);
    } while ((int)uVar1 < (int)uVar12);
  }
  puVar4 = Method_System_Net_WebConnectionStream_set_WriteTimeout__;
  if (param_3 == 0) goto LAB_034ecda0;
  uVar1 = *param_1;
  uVar12 = *(uint *)(param_4 + 0x18);
  if ((*(int *)(param_3 + 0x18) == 0) && ((int)uVar1 < (int)uVar12)) {
    if (*(int *)(*(long *)Method_System_Net_WebConnectionStream_set_WriteTimeout__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    auVar18 = FUN_034ecda4(param_6);
    if (*(uint *)(param_4 + 0x18) <= *param_1) {
LAB_034ecd9c:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    local_68 = *(undefined8 *)(param_4 + (long)(int)*param_1 * 8 + 0x20);
    uVar14 = FUN_034ece54(auVar18._0_8_,param_2);
    puVar5 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__;
    lVar6 = *(long *)
             Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__;
    if ((auVar18._8_8_ & 1) == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar6);
        lVar6 = *(long *)puVar5;
      }
      uVar10 = uVar14;
      uVar14 = **(undefined8 **)(lVar6 + 0xb8);
    }
    else {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar6);
        lVar6 = *(long *)puVar5;
      }
      uVar10 = **(undefined8 **)(lVar6 + 0xb8);
    }
    puVar5 = Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
    lVar6 = *(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar6 = *(long *)puVar5;
    }
    uVar15 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
    uVar8 = FUN_0354cd34(&local_68,0xffffffffffffffff,0);
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    lVar6 = FUN_034ecf44(uVar15,uVar8,uVar14,&uStack_b0,&local_c8,uVar10,1);
    local_70 = lVar6;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar4);
    }
    uVar7 = FUN_034ed00c(param_2,lVar6);
    lVar6 = local_70;
    if ((uVar7 & 1) == 0) {
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_034ed080(param_2,&local_70);
      lVar6 = local_70;
    }
LAB_034ecc00:
    lVar11 = *(long *)(param_3 + 0x10);
    lVar13 = *(long *)Method_System_Net_WebRequest_get_ContentLength__;
    *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
    if (lVar11 == 0) {
LAB_034ecda0:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar1 = *(uint *)(param_3 + 0x18);
    if (*(uint *)(lVar11 + 0x18) <= uVar1) {
      lVar11 = *(long *)(lVar13 + 0x20);
LAB_034ecd64:
      FUN_030f2bb4(param_3,lVar6,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x70));
      goto LAB_034ecd70;
    }
    *(uint *)(param_3 + 0x18) = uVar1 + 1;
    plVar9 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
    *plVar9 = lVar6;
  }
  else {
    uVar3 = uVar1 - 1;
    if (uVar12 <= uVar3) goto LAB_034ecd9c;
    uVar14 = *(undefined8 *)(param_4 + (long)(int)uVar3 * 8 + 0x20);
    if ((int)uVar1 < (int)uVar12) {
      if (param_5 == 0) goto LAB_034ecda0;
      if (*(uint *)(param_5 + 0x18) <= uVar3) goto LAB_034ecd9c;
      if (param_6 == 0) goto LAB_034ecda0;
      bVar2 = *(byte *)(param_5 + (int)uVar3 + 0x20);
      if ((*(uint *)(param_6 + 0x18) <= (uint)bVar2) || (uVar12 <= uVar1)) goto LAB_034ecd9c;
      local_78 = *(undefined8 *)(param_4 + (long)(int)uVar1 * 8 + 0x20);
      param_6 = param_6 + (ulong)bVar2 * 0x10;
      uVar10 = *(undefined8 *)(param_6 + 0x20);
      uVar7 = *(ulong *)(param_6 + 0x28);
      if (*(int *)(*(long *)Method_System_Net_WebConnectionStream_set_WriteTimeout__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar10 = FUN_034ece54(uVar10,param_2);
      puVar5 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__;
      lVar6 = *(long *)
               Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__;
      if ((uVar7 & 1) == 0) {
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(lVar6);
          lVar6 = *(long *)puVar5;
        }
        uVar17 = 0;
        uVar16 = 0;
        uStack_7c = 0;
        uStack_80 = 0;
        uVar15 = **(undefined8 **)(lVar6 + 0xb8);
        uVar8 = uVar10;
      }
      else {
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(lVar6);
          lVar6 = *(long *)puVar5;
        }
        puVar5 = Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
        lVar11 = *(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
        uVar8 = **(undefined8 **)(lVar6 + 0xb8);
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar11 = *(long *)puVar5;
        }
        uVar16 = FUN_0354cfd0(0x4000000000000000,*(long *)(lVar11 + 0xb8) + 0x10,0);
        uStack_80 = 0;
        uStack_7c = 0;
        uVar17 = 1;
        FUN_034f522c(uVar16,1,1,1,0);
        uVar15 = uVar10;
      }
      if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0) ==
          0) {
        thunk_FUN_01ee6d7c();
      }
      uVar10 = FUN_0354cd34(&local_78,0xffffffffffffffff,0);
      local_f0 = 0;
      uStack_e8 = 0;
      local_f8 = 0;
      local_d5 = 0;
      local_d4 = 0;
      local_cf = uStack_80;
      uStack_cb = uStack_7c;
      local_e0 = uVar16;
      local_d8 = uVar17;
      local_d7 = uVar17;
      local_d6 = uVar17;
      local_d0 = uVar17;
      lVar6 = FUN_034ecf44(uVar14,uVar10,uVar15,&local_e0,&local_f8,uVar8,1);
      local_88 = lVar6;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar4);
      }
      uVar7 = FUN_034ed00c(param_2,lVar6);
      lVar6 = local_88;
      if ((uVar7 & 1) == 0) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_034ed080(param_2,&local_88);
        lVar6 = local_88;
      }
      goto LAB_034ecc00;
    }
    uVar7 = FUN_0340eec4(param_9,0);
    puVar4 = Method_System_Net_WebConnectionStream_set_WriteTimeout__;
    if ((uVar7 & 1) == 0) {
      if (*(int *)(*(long *)Method_System_Net_WebConnectionStream_set_WriteTimeout__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar6 = FUN_034ed32c(param_9,uVar14,param_2);
      if (lVar6 == 0) goto LAB_034ecd70;
      local_90 = lVar6;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar7 = FUN_034ed00c(param_2,lVar6);
      if ((uVar7 & 1) == 0) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_034ed080(param_2,&local_90);
        lVar6 = local_90;
      }
    }
    else {
      if (param_5 == 0) goto LAB_034ecda0;
      if (*(uint *)(param_5 + 0x18) <= *param_1 - 1) goto LAB_034ecd9c;
      if (param_6 == 0) goto LAB_034ecda0;
      bVar2 = *(byte *)(param_5 + (int)(*param_1 - 1) + 0x20);
      if (*(uint *)(param_6 + 0x18) <= (uint)bVar2) goto LAB_034ecd9c;
      param_6 = param_6 + (ulong)bVar2 * 0x10;
      uVar10 = *(undefined8 *)(param_6 + 0x20);
      uVar7 = *(ulong *)(param_6 + 0x28);
      if (*(int *)(*(long *)Method_System_Net_WebConnectionStream_set_WriteTimeout__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar10 = FUN_034ece54(uVar10,param_2);
      puVar5 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__;
      lVar6 = *(long *)
               Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__;
      if ((uVar7 & 1) == 0) {
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(lVar6);
          lVar6 = *(long *)puVar5;
        }
        uVar8 = uVar10;
        uVar10 = **(undefined8 **)(lVar6 + 0xb8);
      }
      else {
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(lVar6);
          lVar6 = *(long *)puVar5;
        }
        uVar8 = **(undefined8 **)(lVar6 + 0xb8);
      }
      puVar5 = Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
      lVar6 = *(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar6 = *(long *)puVar5;
      }
      local_110 = 0;
      uStack_108 = 0;
      local_100 = 0;
      local_120 = 0;
      uStack_118 = 0;
      local_128 = 0;
      lVar6 = FUN_034ecf44(uVar14,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x18),uVar10,&local_110,
                           &local_128,uVar8,1);
      local_98 = lVar6;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar4);
      }
      uVar7 = FUN_034ed00c(param_2,lVar6);
      if ((uVar7 & 1) == 0) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_034ed080(param_2,&local_98);
        lVar6 = local_98;
      }
    }
    lVar11 = *(long *)(param_3 + 0x10);
    lVar13 = *(long *)Method_System_Net_WebRequest_get_ContentLength__;
    *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
    if (lVar11 == 0) goto LAB_034ecda0;
    uVar1 = *(uint *)(param_3 + 0x18);
    if (*(uint *)(lVar11 + 0x18) <= uVar1) {
      lVar11 = *(long *)(lVar13 + 0x20);
      goto LAB_034ecd64;
    }
    *(uint *)(param_3 + 0x18) = uVar1 + 1;
    plVar9 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
    *plVar9 = lVar6;
  }
  thunk_FUN_01f51358(plVar9,lVar6);
LAB_034ecd70:
  *param_1 = *param_1 + 1;
  return;
}


