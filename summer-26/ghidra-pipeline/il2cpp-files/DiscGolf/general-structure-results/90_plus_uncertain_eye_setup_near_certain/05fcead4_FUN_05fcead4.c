/*
FUNCTION_NAME: FUN_05fcead4
ENTRY_POINT: 05fcead4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05fcf0e4) */

void FUN_05fcead4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,int param_10,int param_11,int param_12,int param_13,int param_14
                 ,int param_15,undefined4 param_16,undefined8 param_17,undefined8 param_18,
                 undefined4 param_19)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  byte bVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  int iVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  int iVar14;
  undefined8 uVar15;
  long lVar16;
  double dVar17;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  long local_138;
  undefined8 local_130;
  int iStack_12c;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long *local_88;
  undefined *puVar9;
  
  local_b0 = param_8;
  uStack_a8 = param_9;
  local_a0 = param_6;
  uStack_98 = param_7;
  if ((DAT_06dc4818 & 1) == 0) {
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<string>__);
    FUN_02d965b8(Method_UnityEngine_Events_UnityEvent<float>_RemoveListener__);
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<Vector2>__);
    FUN_02d965b8(Method_System_Array_Empty<OVRPlugin_VirtualKeyboardModelAnimationState>__);
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputControlScheme_DeviceRequirement>__
                );
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputEventTrace_DeviceInfo>__
                );
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<KeyValuePair<InternedString,_object>>__
                );
    DAT_06dc4818 = 1;
  }
  local_88 = (long *)0x0;
  local_138 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_05fb45b0(&local_1b8,param_5,param_6,param_7,0);
  FUN_05fb45b0(&local_1b8,param_5,local_b0,uStack_a8,0);
  memcpy(&stack0xfffffffffffffed0,&local_1b8,0x80);
  if (local_1b8._4_4_ <= (int)uStack_1b0) {
    local_1b8._4_4_ = (int)uStack_1b0;
  }
  iVar14 = local_1b8._4_4_;
  if (local_1b8._4_4_ <= uStack_1b0._4_4_) {
    iVar14 = uStack_1b0._4_4_;
  }
  if (DAT_06dc486c == '\0') {
    FUN_02d965b8(PTR_DAT_069fbb48);
    DAT_06dc486c = '\x01';
  }
  puVar9 = PTR_DAT_069fbb48;
  if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  dVar17 = (double)FUN_054e8f58((double)iVar14,0x4000000000000000,0);
  iVar14 = -0x7fffffff;
  iVar10 = uStack_128._4_4_;
  if ((float)dVar17 != INFINITY) {
    iVar14 = (int)dVar17 + 1;
  }
  iVar1 = iStack_12c;
  if (iStack_12c <= (int)uStack_128) {
    iVar1 = (int)uStack_128;
  }
  if (iVar1 <= uStack_128._4_4_) {
    iVar1 = uStack_128._4_4_;
  }
  if (DAT_06dc486c == '\0') {
    FUN_02d965b8(PTR_DAT_069fbb48);
    DAT_06dc486c = '\x01';
  }
  if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  dVar17 = (double)FUN_054e8f58((double)iVar1,0x4000000000000000,0);
  iVar1 = uStack_1b0._4_4_ - param_10;
  if (param_12 != -1) {
    iVar1 = param_12;
  }
  if ((uStack_1b0._4_4_ - param_10 < iVar1) || (iVar10 - param_11 < iVar1)) {
    uVar15 = thunk_FUN_02dfd288(
                               Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_RemoteInputDevice>__
                               );
    puVar9 = 
    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_RemoteSender>__;
  }
  else {
    iVar10 = -0x7fffffff;
    if ((float)dVar17 != INFINITY) {
      iVar10 = (int)dVar17 + 1;
    }
    iVar2 = iVar14 - param_13;
    if (param_15 != -1) {
      iVar2 = param_15;
    }
    if ((iVar2 <= iVar14 - param_13) && (iVar2 <= iVar10 - param_14)) {
      local_88 = (long *)FUN_037fefa4(param_5,param_17,&local_138,param_18,param_19,
                                      *(undefined8 *)
                                       Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputControlScheme_DeviceRequirement>__
                                     );
      lVar11 = local_138;
      uStack_1b0 = &local_88;
      local_1b8 = 0;
      if (local_138 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      *(undefined4 *)(local_138 + 0x30) = param_1;
      *(undefined4 *)(local_138 + 0x34) = param_2;
      *(undefined4 *)(local_138 + 0x38) = param_3;
      *(undefined4 *)(local_138 + 0x3c) = param_4;
      *(undefined8 *)(local_138 + 0x18) = uStack_98;
      *(undefined8 *)(local_138 + 0x10) = local_a0;
      *(undefined8 *)(local_138 + 0x28) = uStack_a8;
      *(undefined8 *)(local_138 + 0x20) = local_b0;
      *(int *)(local_138 + 0x40) = param_10;
      *(int *)(local_138 + 0x44) = param_11;
      *(int *)(local_138 + 0x48) = iVar1;
      puVar9 = Method_System_Array_Empty<OVRPlugin_VirtualKeyboardModelAnimationState>__;
      *(int *)(local_138 + 0x4c) = param_13;
      *(int *)(local_138 + 0x50) = param_14;
      *(int *)(local_138 + 0x54) = iVar2;
      lVar5 = *(long *)puVar9;
      *(undefined4 *)(local_138 + 0x58) = param_16;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      bVar4 = FUN_05fce98c(&stack0xfffffffffffffed0,param_10,param_11,iVar1,iVar2);
      plVar3 = local_88;
      *(byte *)(lVar11 + 0x5c) = bVar4 & 1;
      puVar9 = Method_UnityEngine_Events_UnityEvent<float>_RemoveListener__;
      if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar11 = *local_88;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)Method_UnityEngine_Events_UnityEvent<float>_RemoveListener__) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_05fcee34;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_02dd004c(local_88,*(long *)
                                      Method_UnityEngine_Events_UnityEvent<float>_RemoveListener__,0
                           );
LAB_05fcee34:
      (*(code *)*puVar6)(plVar3,&local_a0,1,puVar6[1]);
      plVar3 = local_88;
      if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar11 = *local_88;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar9) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_05fcee9c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_02dd004c(local_88,*(long *)puVar9,0);
LAB_05fcee9c:
      (*(code *)*puVar6)(plVar3,&local_b0,2,puVar6[1]);
      plVar3 = local_88;
      puVar9 = 
      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<KeyValuePair<InternedString,_object>>__
      ;
      lVar11 = *(long *)
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<KeyValuePair<InternedString,_object>>__
      ;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar11 = *(long *)puVar9;
      }
      puVar6 = *(undefined8 **)(lVar11 + 0xb8);
      lVar5 = puVar6[2];
      if (lVar5 == 0) {
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          puVar6 = *(undefined8 **)(*(long *)puVar9 + 0xb8);
        }
        uVar15 = *puVar6;
        lVar5 = thunk_FUN_02dd3144(*(undefined8 *)
                                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<string>__
                                  );
        FUN_04444ef4(lVar5,uVar15,
                     *(undefined8 *)
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputEventTrace_DeviceInfo>__
                     ,0);
        plVar7 = (long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x10);
        *plVar7 = lVar5;
        LeanTween__value(plVar7,lVar5);
      }
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar11 = *plVar3;
      lVar16 = *(long *)Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<Vector2>__;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)(lVar16 + 0x20)) {
            lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar16 + 0x50)) * 0x10 +
                     0x138;
            goto LAB_05fcef94;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      lVar11 = FUN_02dd004c(plVar3);
LAB_05fcef94:
      lVar11 = thunk_FUN_02db5310(*(undefined8 *)(lVar11 + 8),lVar16);
      (**(code **)(lVar11 + 8))(plVar3,lVar5,lVar11);
      plVar3 = local_88;
      if (local_88 != (long *)0x0) {
        lVar11 = *local_88;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_069fbff0) {
              puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_05fcf018;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_02dd004c(local_88,*(long *)PTR_DAT_069fbff0,0);
LAB_05fcf018:
        (*(code *)*puVar6)(plVar3,puVar6[1]);
      }
      return;
    }
    uVar15 = thunk_FUN_02dfd288(
                               Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_RemoteInputDevice>__
                               );
    puVar9 = 
    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_Subscriber>__;
  }
  uVar8 = thunk_FUN_02dfd288(puVar9);
  uVar15 = FUN_0536d554(uVar15,param_17,uVar8,0);
  thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
  uVar8 = thunk_FUN_02dd3144();
  FUN_05452924(uVar8,uVar15,0);
  uVar15 = thunk_FUN_02dfd288(
                             Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<RemoteInputPlayerConnection_Subscriber>__
                             );
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar8,uVar15);
}


