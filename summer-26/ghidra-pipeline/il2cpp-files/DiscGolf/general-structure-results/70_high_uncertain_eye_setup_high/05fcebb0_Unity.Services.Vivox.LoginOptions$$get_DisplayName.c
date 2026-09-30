/*
FUNCTION_NAME: Unity.Services.Vivox.LoginOptions$$get_DisplayName
ENTRY_POINT: 05fcebb0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x05fcf0e4) */

void Unity_Services_Vivox_LoginOptions__get_DisplayName(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  int iVar17;
  int unaff_w19;
  int unaff_w20;
  long unaff_x21;
  undefined8 uVar18;
  long lVar19;
  int unaff_w22;
  double dVar20;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined8 in_stack_00000008;
  int iStack0000000000000010;
  int iStack0000000000000014;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  int iStack0000000000000098;
  int iStack000000000000009c;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000d0;
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000f0;
  undefined8 uStack0000000000000100;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  long *in_stack_00000138;
  int in_stack_000001c0;
  int in_stack_000001c8;
  int in_stack_000001d0;
  undefined4 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined4 in_stack_000001f0;
  undefined *puVar12;
  
  uStack00000000000000b0 = param_1;
  uStack00000000000000c0 = param_1;
  uStack00000000000000d0 = param_1;
  uStack00000000000000e0 = param_1;
  uStack00000000000000f0 = param_1;
  uStack0000000000000100 = param_1;
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_05fb45b0(&stack0x00000008);
  iVar17 = in_stack_00000008._4_4_;
  iVar1 = iStack0000000000000010;
  iVar13 = iStack0000000000000014;
  FUN_05fb45b0(&stack0x00000008);
  memcpy(&stack0x00000090,&stack0x00000008,0x80);
  if (iVar17 <= iVar1) {
    iVar17 = iVar1;
  }
  if (iVar17 <= iVar13) {
    iVar17 = iVar13;
  }
  if (DAT_06dc486c == '\0') {
    FUN_02d965b8(PTR_DAT_069fbb48);
    DAT_06dc486c = '\x01';
  }
  puVar12 = PTR_DAT_069fbb48;
  if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  dVar20 = (double)FUN_054e8f58((double)iVar17,0x4000000000000000,0);
  iVar17 = -0x7fffffff;
  if ((float)dVar20 != INFINITY) {
    iVar17 = (int)dVar20 + 1;
  }
  if (in_stack_00000090._4_4_ <= iStack0000000000000098) {
    in_stack_00000090._4_4_ = iStack0000000000000098;
  }
  iVar1 = in_stack_00000090._4_4_;
  if (in_stack_00000090._4_4_ <= iStack000000000000009c) {
    iVar1 = iStack000000000000009c;
  }
  if (DAT_06dc486c == '\0') {
    FUN_02d965b8(PTR_DAT_069fbb48);
    DAT_06dc486c = '\x01';
  }
  uVar18 = in_stack_000001e0;
  if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  dVar20 = (double)FUN_054e8f58((double)iVar1,0x4000000000000000,0);
  iVar5 = in_stack_000001c8;
  iVar4 = in_stack_000001c0;
  iVar1 = iVar13 - unaff_w20;
  if (unaff_w22 != -1) {
    iVar1 = unaff_w22;
  }
  if ((iVar13 - unaff_w20 < iVar1) || (iStack000000000000009c - unaff_w19 < iVar1)) {
    uVar10 = thunk_FUN_02dfd288(
                               Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_RemoteInputDevice>__
                               );
    puVar12 = 
    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_RemoteSender>__;
  }
  else {
    iVar13 = -0x7fffffff;
    if ((float)dVar20 != INFINITY) {
      iVar13 = (int)dVar20 + 1;
    }
    iVar2 = iVar17 - in_stack_000001c0;
    if (in_stack_000001d0 != -1) {
      iVar2 = in_stack_000001d0;
    }
    if ((iVar2 <= iVar17 - in_stack_000001c0) && (iVar2 <= iVar13 - in_stack_000001c8)) {
      in_stack_00000138 = (long *)FUN_037fefa4();
      lVar14 = in_stack_00000088;
      _iStack0000000000000010 = &stack0x00000138;
      in_stack_00000008 = 0;
      if (in_stack_00000088 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      *(undefined4 *)(in_stack_00000088 + 0x30) = unaff_s11;
      *(undefined4 *)(in_stack_00000088 + 0x34) = unaff_s10;
      *(undefined4 *)(in_stack_00000088 + 0x38) = unaff_s9;
      *(undefined4 *)(in_stack_00000088 + 0x3c) = unaff_s8;
      *(undefined8 *)(in_stack_00000088 + 0x18) = in_stack_00000128;
      *(undefined8 *)(in_stack_00000088 + 0x10) = in_stack_00000120;
      *(undefined8 *)(in_stack_00000088 + 0x28) = in_stack_00000118;
      *(undefined8 *)(in_stack_00000088 + 0x20) = in_stack_00000110;
      *(int *)(in_stack_00000088 + 0x40) = unaff_w20;
      *(int *)(in_stack_00000088 + 0x44) = unaff_w19;
      *(int *)(in_stack_00000088 + 0x48) = iVar1;
      puVar12 = Method_System_Array_Empty<OVRPlugin_VirtualKeyboardModelAnimationState>__;
      *(int *)(in_stack_00000088 + 0x4c) = iVar4;
      *(int *)(in_stack_00000088 + 0x50) = iVar5;
      *(int *)(in_stack_00000088 + 0x54) = iVar2;
      lVar7 = *(long *)puVar12;
      *(undefined4 *)(in_stack_00000088 + 0x58) = in_stack_000001d8;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      bVar6 = FUN_05fce98c(&stack0x00000090,unaff_w20,unaff_w19,iVar1,iVar2);
      plVar3 = in_stack_00000138;
      *(byte *)(lVar14 + 0x5c) = bVar6 & 1;
      puVar12 = Method_UnityEngine_Events_UnityEvent<float>_RemoveListener__;
      if (in_stack_00000138 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar14 = *in_stack_00000138;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) ==
              *(long *)Method_UnityEngine_Events_UnityEvent<float>_RemoveListener__) {
            puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_05fcee34;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_02dd004c(in_stack_00000138,
                            *(long *)Method_UnityEngine_Events_UnityEvent<float>_RemoveListener__,0)
      ;
LAB_05fcee34:
      (*(code *)*puVar8)(plVar3,&stack0x00000120,1,puVar8[1]);
      plVar3 = in_stack_00000138;
      if (in_stack_00000138 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar14 = *in_stack_00000138;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar12) {
            puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_05fcee9c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_02dd004c(in_stack_00000138,*(long *)puVar12,0);
LAB_05fcee9c:
      (*(code *)*puVar8)(plVar3,&stack0x00000110,2,puVar8[1]);
      plVar3 = in_stack_00000138;
      puVar12 = 
      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<KeyValuePair<InternedString,_object>>__
      ;
      lVar14 = *(long *)
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<KeyValuePair<InternedString,_object>>__
      ;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar14 = *(long *)puVar12;
      }
      puVar8 = *(undefined8 **)(lVar14 + 0xb8);
      lVar7 = puVar8[2];
      if (lVar7 == 0) {
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          puVar8 = *(undefined8 **)(*(long *)puVar12 + 0xb8);
        }
        uVar18 = *puVar8;
        lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<string>__
                                  );
        FUN_04444ef4(lVar7,uVar18,
                     *(undefined8 *)
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputEventTrace_DeviceInfo>__
                     ,0);
        plVar9 = (long *)(*(long *)(*(long *)puVar12 + 0xb8) + 0x10);
        *plVar9 = lVar7;
        LeanTween__value(plVar9,lVar7);
      }
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar14 = *plVar3;
      lVar19 = *(long *)Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<Vector2>__;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)(lVar19 + 0x20)) {
            lVar14 = lVar14 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar19 + 0x50)) * 0x10 +
                     0x138;
            goto LAB_05fcef94;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      lVar14 = FUN_02dd004c(plVar3);
LAB_05fcef94:
      lVar14 = thunk_FUN_02db5310(*(undefined8 *)(lVar14 + 8),lVar19);
      (**(code **)(lVar14 + 8))(plVar3,lVar7,lVar14);
      plVar3 = in_stack_00000138;
      if (in_stack_00000138 != (long *)0x0) {
        lVar14 = *in_stack_00000138;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_069fbff0) {
              puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_05fcf018;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar8 = (undefined8 *)FUN_02dd004c(in_stack_00000138,*(long *)PTR_DAT_069fbff0,0);
LAB_05fcf018:
        (*(code *)*puVar8)(plVar3,puVar8[1]);
      }
      return;
    }
    uVar10 = thunk_FUN_02dfd288(
                               Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_RemoteInputDevice>__
                               );
    puVar12 = 
    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_Subscriber>__;
  }
  uVar11 = thunk_FUN_02dfd288(puVar12);
  uVar18 = FUN_0536d554(uVar10,uVar18,uVar11,0);
  thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
  uVar10 = thunk_FUN_02dd3144();
  FUN_05452924(uVar10,uVar18,0);
  uVar18 = thunk_FUN_02dfd288(
                             Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<RemoteInputPlayerConnection_Subscriber>__
                             );
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar10,uVar18);
}


