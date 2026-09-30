/*
FUNCTION_NAME: FUN_05fce1f8
ENTRY_POINT: 05fce1f8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05fce7a4) */

void FUN_05fce1f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

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
  undefined1 auStack_1e8 [4];
  int local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1ac;
  undefined8 local_168;
  long **pplStack_160;
  long local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *local_58;
  undefined *puVar7;
  
  if ((DAT_06dc4814 & 1) == 0) {
    FUN_02d965b8(Method_System_ComponentModel_ArrayConverter_ConvertTo__);
    FUN_02d965b8(Method_UnityEngine_Events_UnityEvent<float>_RemoveListener__);
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<GUIContent>__);
    FUN_02d965b8(Method_System_Net_WebCompletionSource<WebResponseStream>_TrySetException__);
    FUN_02d965b8(Method_System_Array_Empty<OVRPlugin_VirtualKeyboardModelAnimationState>__);
    FUN_02d965b8(Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<int>__);
    FUN_02d965b8(Method_Unity_XR_CoreUtils_ScriptableSettings<InteractionLayerSettings>__ctor__);
    FUN_02d965b8(Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<uint>__);
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<KeyValuePair<InternedString,_object>>__
                );
    DAT_06dc4814 = 1;
  }
  local_58 = (long *)0x0;
  local_e8 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(char *)(param_1 + 0x18) == '\0') {
    thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
    uVar11 = thunk_FUN_02dd3144();
    puVar7 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputActionMap>__;
  }
  else {
    FUN_05fb45b0(&local_168,param_1,param_2,param_3,0);
    memcpy(&local_e0,&local_168,0x80);
    FUN_05fb45b0(auStack_1e8,param_1,param_4,param_5,0);
    if (uStack_a8._4_4_ == local_1ac) {
      if ((local_e0._4_4_ == local_1e4) && ((int)uStack_d8 == local_1e0)) {
        if (uStack_d8._4_4_ == local_1dc) {
          if (1 < local_1ac) {
            if (*(int *)(*(long *)
                          Method_System_Array_Empty<OVRPlugin_VirtualKeyboardModelAnimationState>__
                        + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar3 = FUN_05fce0b0(&local_e0);
            if ((uVar3 & 1) == 0) {
              thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
              uVar11 = thunk_FUN_02dd3144();
              puVar7 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<int>__;
              goto LAB_05fce7d8;
            }
          }
          local_58 = (long *)FUN_037feb88(param_1,param_6,&local_e8,param_7,param_8,
                                          *(undefined8 *)
                                           Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<int>__
                                         );
          puVar7 = Method_Unity_XR_CoreUtils_ScriptableSettings<InteractionLayerSettings>__ctor__;
          pplStack_160 = &local_58;
          local_168 = 0;
          if (local_e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          *(bool *)(local_e8 + 0x10) = 1 < local_1ac;
          if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          bVar2 = FUN_05f926c4(0);
          plVar1 = local_58;
          if (local_e8 != 0) {
            *(byte *)(local_e8 + 0x11) = bVar2 & uStack_d8._4_4_ < 2;
            puVar7 = Method_System_Net_WebCompletionSource<WebResponseStream>_TrySetException__;
            if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar8 = *local_58;
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
                     FUN_02dd004c(local_58,*(long *)
                                            Method_System_Net_WebCompletionSource<WebResponseStream>_TrySetException__
                                  ,2);
LAB_05fce474:
            (*(code *)*puVar4)(plVar1,param_2,param_3,0,1,puVar4[1]);
            plVar1 = local_58;
            if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar8 = *local_58;
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
            puVar4 = (undefined8 *)FUN_02dd004c(local_58,*(long *)puVar7,0);
LAB_05fce4e4:
            (*(code *)*puVar4)(plVar1,param_4,param_5,0,2,puVar4[1]);
            plVar1 = local_58;
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
              plVar1 = local_58;
              if (local_e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              if (*(char *)(local_e8 + 0x11) != '\0') {
                if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                lVar8 = *local_58;
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
                         FUN_02dd004c(local_58,*(long *)
                                                Method_UnityEngine_Events_UnityEvent<float>_RemoveListener__
                                      ,0xc);
LAB_05fce674:
                (*(code *)*puVar4)(plVar1,1,puVar4[1]);
              }
              plVar1 = local_58;
              if (local_58 != (long *)0x0) {
                lVar8 = *local_58;
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
                puVar4 = (undefined8 *)FUN_02dd004c(local_58,*(long *)PTR_DAT_069fbff0,0);
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


