/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxConfigurationOptions$$get_InternalVivoxConfig
ENTRY_POINT: 05fcec94
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x05fcf0e4) */

void Unity_Services_Vivox_VivoxConfigurationOptions__get_InternalVivoxConfig(void)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  char in_NG;
  bool in_ZR;
  char in_OV;
  byte bVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int in_w8;
  int iVar13;
  int in_w9;
  ulong uVar14;
  int *piVar15;
  int unaff_w19;
  int unaff_w20;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  int unaff_w22;
  long unaff_x23;
  int unaff_w24;
  long *unaff_x25;
  int unaff_w26;
  int unaff_w27;
  double dVar19;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  long in_stack_00000088;
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
  
  if (in_ZR || in_NG != in_OV) {
    in_w8 = unaff_w27;
  }
  if (in_w9 == 0) {
    FUN_02d965b8(PTR_DAT_069fbb48);
    *(undefined1 *)(unaff_x23 + 0x86c) = 1;
  }
  uVar17 = in_stack_000001e0;
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  dVar19 = (double)FUN_054e8f58((double)in_w8,0x4000000000000000,0);
  iVar5 = in_stack_000001c8;
  iVar4 = in_stack_000001c0;
  iVar1 = unaff_w24 - unaff_w20;
  if (unaff_w22 != -1) {
    iVar1 = unaff_w22;
  }
  if ((unaff_w24 - unaff_w20 < iVar1) || (unaff_w27 - unaff_w19 < iVar1)) {
    uVar10 = thunk_FUN_02dfd288(
                               Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_RemoteInputDevice>__
                               );
    puVar12 = 
    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_RemoteSender>__;
  }
  else {
    iVar13 = -0x7fffffff;
    if ((float)dVar19 != INFINITY) {
      iVar13 = (int)dVar19 + 1;
    }
    iVar2 = unaff_w26 - in_stack_000001c0;
    if (in_stack_000001d0 != -1) {
      iVar2 = in_stack_000001d0;
    }
    if ((iVar2 <= unaff_w26 - in_stack_000001c0) && (iVar2 <= iVar13 - in_stack_000001c8)) {
      in_stack_00000138 = (long *)FUN_037fefa4();
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
      *(byte *)(in_stack_00000088 + 0x5c) = bVar6 & 1;
      puVar12 = Method_UnityEngine_Events_UnityEvent<float>_RemoveListener__;
      if (in_stack_00000138 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar7 = *in_stack_00000138;
      uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) ==
              *(long *)Method_UnityEngine_Events_UnityEvent<float>_RemoveListener__) {
            puVar8 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_05fcee34;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
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
      lVar7 = *in_stack_00000138;
      uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar12) {
            puVar8 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_05fcee9c;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)FUN_02dd004c(in_stack_00000138,*(long *)puVar12,0);
LAB_05fcee9c:
      (*(code *)*puVar8)(plVar3,&stack0x00000110,2,puVar8[1]);
      plVar3 = in_stack_00000138;
      puVar12 = 
      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<KeyValuePair<InternedString,_object>>__
      ;
      lVar7 = *(long *)
               Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<KeyValuePair<InternedString,_object>>__
      ;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar7 = *(long *)puVar12;
      }
      puVar8 = *(undefined8 **)(lVar7 + 0xb8);
      lVar16 = puVar8[2];
      if (lVar16 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          puVar8 = *(undefined8 **)(*(long *)puVar12 + 0xb8);
        }
        uVar17 = *puVar8;
        lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                     Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<string>__
                                   );
        FUN_04444ef4(lVar16,uVar17,
                     *(undefined8 *)
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputEventTrace_DeviceInfo>__
                     ,0);
        plVar9 = (long *)(*(long *)(*(long *)puVar12 + 0xb8) + 0x10);
        *plVar9 = lVar16;
        LeanTween__value(plVar9,lVar16);
      }
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar7 = *plVar3;
      lVar18 = *(long *)Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<Vector2>__;
      uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)(lVar18 + 0x20)) {
            lVar7 = lVar7 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar18 + 0x50)) * 0x10 + 0x138;
            goto LAB_05fcef94;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      lVar7 = FUN_02dd004c(plVar3);
LAB_05fcef94:
      lVar7 = thunk_FUN_02db5310(*(undefined8 *)(lVar7 + 8),lVar18);
      (**(code **)(lVar7 + 8))(plVar3,lVar16,lVar7);
      plVar3 = in_stack_00000138;
      if (in_stack_00000138 != (long *)0x0) {
        lVar7 = *in_stack_00000138;
        uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_069fbff0) {
              puVar8 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_05fcf018;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
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
  uVar17 = FUN_0536d554(uVar10,uVar17,uVar11,0);
  thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
  uVar10 = thunk_FUN_02dd3144();
  FUN_05452924(uVar10,uVar17,0);
  uVar17 = thunk_FUN_02dfd288(
                             Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<RemoteInputPlayerConnection_Subscriber>__
                             );
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar10,uVar17);
}


