/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxParticipant$$get_IsSelf
ENTRY_POINT: 05fce290
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x05fce7a4) */

void Unity_Services_Vivox_VivoxParticipant__get_IsSelf(void)

{
  long *plVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar8;
  int *piVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x26;
  long unaff_x27;
  undefined8 in_stack_00000008;
  int iStack0000000000000010;
  int iStack0000000000000014;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000088;
  undefined8 *in_stack_00000090;
  long in_stack_00000108;
  undefined8 in_stack_00000110;
  int iStack0000000000000118;
  int iStack000000000000011c;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  long *in_stack_00000198;
  undefined *puVar7;
  
  FUN_02d965b8();
  FUN_02d965b8(Method_Unity_XR_CoreUtils_ScriptableSettings<InteractionLayerSettings>__ctor__);
  FUN_02d965b8(Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<uint>__);
  FUN_02d965b8(
              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<KeyValuePair<InternedString,_object>>__
              );
  *(undefined1 *)(unaff_x27 + 0x814) = 1;
  in_stack_00000198 = (long *)0x0;
  in_stack_00000108 = 0;
  _iStack0000000000000118 = 0;
  in_stack_00000110 = 0;
  in_stack_00000128 = 0;
  in_stack_00000120 = 0;
  in_stack_00000138 = 0;
  in_stack_00000130 = 0;
  in_stack_00000148 = 0;
  in_stack_00000140 = 0;
  in_stack_00000158 = 0;
  in_stack_00000150 = 0;
  in_stack_00000168 = 0;
  in_stack_00000160 = 0;
  in_stack_00000178 = 0;
  in_stack_00000170 = 0;
  in_stack_00000188 = 0;
  in_stack_00000180 = 0;
  if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(char *)(unaff_x26 + 0x18) == '\0') {
    thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
    uVar11 = thunk_FUN_02dd3144();
    puVar7 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputActionMap>__;
  }
  else {
    FUN_05fb45b0(&stack0x00000088);
    memcpy(&stack0x00000110,&stack0x00000088,0x80);
    FUN_05fb45b0(&stack0x00000008);
    if (in_stack_00000148._4_4_ == in_stack_00000040._4_4_) {
      if ((in_stack_00000110._4_4_ == in_stack_00000008._4_4_) &&
         (iStack0000000000000118 == iStack0000000000000010)) {
        if (iStack000000000000011c == iStack0000000000000014) {
          if (1 < in_stack_00000040._4_4_) {
            if (*(int *)(*(long *)
                          Method_System_Array_Empty<OVRPlugin_VirtualKeyboardModelAnimationState>__
                        + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar3 = FUN_05fce0b0(&stack0x00000110);
            if ((uVar3 & 1) == 0) {
              thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
              uVar11 = thunk_FUN_02dd3144();
              puVar7 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<int>__;
              goto LAB_05fce7d8;
            }
          }
          in_stack_00000198 = (long *)FUN_037feb88();
          puVar7 = Method_Unity_XR_CoreUtils_ScriptableSettings<InteractionLayerSettings>__ctor__;
          in_stack_00000090 = &stack0x00000198;
          in_stack_00000088 = 0;
          if (in_stack_00000108 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          *(bool *)(in_stack_00000108 + 0x10) = 1 < in_stack_00000040._4_4_;
          if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          bVar2 = FUN_05f926c4(0);
          plVar1 = in_stack_00000198;
          if (in_stack_00000108 != 0) {
            *(byte *)(in_stack_00000108 + 0x11) = bVar2 & iStack000000000000011c < 2;
            puVar7 = Method_System_Net_WebCompletionSource<WebResponseStream>_TrySetException__;
            if (in_stack_00000198 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar8 = *in_stack_00000198;
            uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar3 != 0) {
              piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) ==
                    *(long *)
                     Method_System_Net_WebCompletionSource<WebResponseStream>_TrySetException__) {
                  puVar4 = (undefined8 *)(lVar8 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                  goto LAB_05fce474;
                }
                uVar3 = uVar3 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar3 != 0);
            }
            puVar4 = (undefined8 *)
                     FUN_02dd004c(in_stack_00000198,
                                  *(long *)
                                   Method_System_Net_WebCompletionSource<WebResponseStream>_TrySetException__
                                  ,2);
LAB_05fce474:
            (*(code *)*puVar4)(plVar1);
            plVar1 = in_stack_00000198;
            if (in_stack_00000198 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar8 = *in_stack_00000198;
            uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar3 != 0) {
              piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)puVar7) {
                  puVar4 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_05fce4e4;
                }
                uVar3 = uVar3 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar3 != 0);
            }
            puVar4 = (undefined8 *)FUN_02dd004c(in_stack_00000198,*(long *)puVar7,0);
LAB_05fce4e4:
            (*(code *)*puVar4)(plVar1);
            plVar1 = in_stack_00000198;
            puVar7 = 
            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<KeyValuePair<InternedString,_object>>__
            ;
            lVar8 = *(long *)
                     Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<KeyValuePair<InternedString,_object>>__
            ;
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar8 = *(long *)puVar7;
            }
            puVar4 = *(undefined8 **)(lVar8 + 0xb8);
            lVar10 = puVar4[1];
            if (lVar10 == 0) {
              if (*(int *)(lVar8 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                puVar4 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
              }
              uVar11 = *puVar4;
              lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                           Method_System_ComponentModel_ArrayConverter_ConvertTo__);
              FUN_04445048(lVar10,uVar11,
                           *(undefined8 *)
                            Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<uint>__,0);
              plVar5 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
              *plVar5 = lVar10;
              LeanTween__value(plVar5,lVar10);
            }
            if (plVar1 != (long *)0x0) {
              lVar8 = *plVar1;
              lVar12 = *(long *)
                        Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<GUIContent>__;
              uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar3 != 0) {
                piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *(long *)(lVar12 + 0x20)) {
                    lVar8 = lVar8 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar12 + 0x50)) * 0x10 +
                            0x138;
                    goto LAB_05fce5e4;
                  }
                  uVar3 = uVar3 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar3 != 0);
              }
              lVar8 = FUN_02dd004c(plVar1);
LAB_05fce5e4:
              lVar8 = thunk_FUN_02db5310(*(undefined8 *)(lVar8 + 8),lVar12);
              (**(code **)(lVar8 + 8))(plVar1,lVar10,lVar8);
              plVar1 = in_stack_00000198;
              if (in_stack_00000108 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              if (*(char *)(in_stack_00000108 + 0x11) != '\0') {
                if (in_stack_00000198 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                lVar8 = *in_stack_00000198;
                uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar3 != 0) {
                  piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) ==
                        *(long *)Method_UnityEngine_Events_UnityEvent<float>_RemoveListener__) {
                      puVar4 = (undefined8 *)(lVar8 + (long)(*piVar9 + 0xc) * 0x10 + 0x138);
                      goto LAB_05fce674;
                    }
                    uVar3 = uVar3 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar3 != 0);
                }
                puVar4 = (undefined8 *)
                         FUN_02dd004c(in_stack_00000198,
                                      *(long *)
                                       Method_UnityEngine_Events_UnityEvent<float>_RemoveListener__,
                                      0xc);
LAB_05fce674:
                (*(code *)*puVar4)(plVar1,1,puVar4[1]);
              }
              plVar1 = in_stack_00000198;
              if (in_stack_00000198 != (long *)0x0) {
                lVar8 = *in_stack_00000198;
                uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar3 != 0) {
                  piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_069fbff0) {
                      puVar4 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                      goto LAB_05fce6e8;
                    }
                    uVar3 = uVar3 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar3 != 0);
                }
                puVar4 = (undefined8 *)FUN_02dd004c(in_stack_00000198,*(long *)PTR_DAT_069fbff0,0);
LAB_05fce6e8:
                (*(code *)*puVar4)(plVar1,puVar4[1]);
              }
              return;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
        uVar11 = thunk_FUN_02dd3144();
        puVar7 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputControlScheme>__;
      }
      else {
        thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
        uVar11 = thunk_FUN_02dd3144();
        puVar7 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputAction>__;
      }
    }
    else {
      thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
      uVar11 = thunk_FUN_02dd3144();
      puVar7 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputBinding>__;
    }
  }
LAB_05fce7d8:
  uVar6 = thunk_FUN_02dfd288(puVar7);
  FUN_05452924(uVar11,uVar6,0);
  uVar6 = thunk_FUN_02dfd288(
                            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InternedString>__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar11,uVar6);
}


