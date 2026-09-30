/*
FUNCTION_NAME: TMPro.TextMeshPro$$SetOutlineThickness
ENTRY_POINT: 06044888
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_19;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06044c70) */
/* WARNING: Removing unreachable block (ram,0x06044c74) */
/* WARNING: Removing unreachable block (ram,0x06044e4c) */
/* WARNING: Removing unreachable block (ram,0x06044d6c) */

void TMPro_TextMeshPro__SetOutlineThickness(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x25;
  long in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  ulong in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 *in_stack_00000058;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 *in_stack_00000078;
  ulong in_stack_00000080;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 *in_stack_000000a8;
  ulong in_stack_000000b0;
  long in_stack_000000b8;
  undefined8 in_stack_000000c0;
  
  FUN_04d95918();
  lVar12 = *unaff_x20;
  uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *unaff_x25) {
        puVar7 = (undefined8 *)(lVar12 + (long)(*piVar14 + 10) * 0x10 + 0x138);
        goto LAB_060448dc;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar7 = (undefined8 *)FUN_02dd004c();
LAB_060448dc:
  lVar12 = (*(code *)*puVar7)();
  puVar4 = Method_UnityEngine_Component_GetComponents<Collider>__;
  puVar3 = Method_UnityEngine_Component_GetComponents<MonoBehaviour>__;
  puVar2 = Method_UnityEngine_Component_GetComponent<OvrAvatarHandJointType>__;
  puVar7 = (undefined8 *)Method_UnityEngine_Component_GetComponent<OvrAvatarEntity>__;
  puVar1 = Method_UnityEngine_Component_GetComponent<MonoBehaviour>__;
  if (lVar12 != 0) {
    FUN_04d96af4(&stack0x00000020,lVar12,
                 *(undefined8 *)Method_UnityEngine_Component_GetComponent<OVRManager>__);
    in_stack_000000c0 = in_stack_00000040;
    in_stack_00000058 = &stack0x000000a0;
    in_stack_000000a8 = in_stack_00000028;
    in_stack_000000a0 = in_stack_00000020;
    in_stack_000000b8 = in_stack_00000038;
    in_stack_000000b0 = in_stack_00000030;
    in_stack_00000050 = 0;
    while (uVar8 = FUN_0520e87c(&stack0x000000a0,*puVar7), lVar11 = in_stack_000000b8,
          uVar13 = in_stack_000000b0, lVar12 = in_stack_00000050, (uVar8 & 1) != 0) {
      if (in_stack_000000b8 == 0) {
LAB_06044c1c:
        if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_04d966b8();
      }
      else {
        lVar12 = *(long *)(in_stack_000000b8 + 0x38);
        if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<NetworkObject>__ + 0xe4) ==
            0) {
          thunk_FUN_02df485c();
        }
        if (lVar12 == 0) goto LAB_06044c1c;
        lVar12 = *(long *)(lVar11 + 0x38);
        if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<NetworkObject>__ + 0xe4) ==
            0) {
          thunk_FUN_02df485c();
        }
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_04e57418(&stack0x00000020,lVar12,
                     *(undefined8 *)Method_UnityEngine_Component_GetComponent<OVRGrabbable>__);
        in_stack_00000070 = in_stack_00000020;
        in_stack_00000020 = 0;
        in_stack_00000078 = in_stack_00000028;
        in_stack_00000088 = in_stack_00000038;
        in_stack_00000080 = in_stack_00000030;
        in_stack_00000098 = in_stack_00000048;
        in_stack_00000090 = in_stack_00000040;
        in_stack_00000028 = &stack0x00000070;
        while (uVar9 = FUN_05228778(&stack0x00000070,*(undefined8 *)puVar2),
              uVar5 = in_stack_00000090, lVar12 = in_stack_00000088, uVar8 = in_stack_00000080,
              puVar7 = (undefined8 *)Method_UnityEngine_Component_GetComponent<OvrAvatarEntity>__,
              (uVar9 & 1) != 0) {
          in_stack_00000060 = in_stack_00000088;
          in_stack_00000068 = in_stack_00000090;
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar9 = FUN_046fc988(&stack0x00000060,*(undefined8 *)puVar3);
          if ((uVar9 & 1) == 0) {
            in_stack_00000060 = lVar12;
            in_stack_00000068 = uVar5;
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar9 = FUN_046fc830(&stack0x00000060,
                                 *(undefined8 *)
                                  Method_UnityEngine_Component_GetComponent<LobbyListSingleUI>__);
            if ((uVar9 & 1) == 0) {
              in_stack_00000060 = lVar12;
              in_stack_00000068 = uVar5;
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar9 = FUN_046fc8ac(&stack0x00000060,
                                   *(undefined8 *)
                                    Method_UnityEngine_Component_GetComponents<CanvasGroup>__);
              if ((uVar9 & 1) != 0) {
                if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                uVar9 = FUN_04d968ac(in_stack_00000018,uVar13 & 0xffffffff,
                                     *(undefined8 *)
                                      Method_UnityEngine_Component_GetComponents<Mask>__);
                if ((uVar9 & 1) == 0) {
                  uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                               Method_UnityEngine_Component_GetComponentsInChildren<ParticleSystem>__
                                             );
                  FUN_04e56274(uVar10,*(undefined8 *)
                                       Method_UnityEngine_Component_GetComponentsInChildren<Image>__
                              );
                  FUN_04d966b8(in_stack_00000018,uVar13 & 0xffffffff,uVar10,
                               *(undefined8 *)
                                Method_UnityEngine_Component_GetComponents<IMaterialModifier>__);
                }
                lVar11 = FUN_04d96618(in_stack_00000018,uVar13 & 0xffffffff,
                                      *(undefined8 *)
                                       Method_UnityEngine_Component_GetComponentsInChildren<OVRControllerHelper>__
                                     );
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                FUN_04e56ff0(lVar11,uVar8,lVar12,uVar5,*(undefined8 *)puVar4);
              }
            }
            else {
              if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              uVar9 = FUN_04d968ac();
              if ((uVar9 & 1) == 0) {
                uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                             Method_UnityEngine_Component_GetComponentsInChildren<ParticleSystem>__
                                           );
                FUN_04e56274(uVar10,*(undefined8 *)
                                     Method_UnityEngine_Component_GetComponentsInChildren<Image>__);
                FUN_04d966b8();
              }
              lVar11 = FUN_04d96618();
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              FUN_04e56ff0(lVar11,uVar8,lVar12,uVar5,*(undefined8 *)puVar4);
            }
          }
          else {
            if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            uVar9 = FUN_04d968ac();
            if ((uVar9 & 1) == 0) {
              uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                           Method_UnityEngine_Component_GetComponentsInChildren<ParticleSystem>__
                                         );
              FUN_04e56274(uVar10,*(undefined8 *)
                                   Method_UnityEngine_Component_GetComponentsInChildren<Image>__);
              FUN_04d966b8();
            }
            lVar11 = FUN_04d96618();
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            FUN_04e56ff0(lVar11,uVar8,lVar12,uVar5,*(undefined8 *)puVar4);
          }
        }
        FUN_052288b4(&stack0x00000070,
                     *(undefined8 *)Method_UnityEngine_Component_GetComponent<OVRSkeleton>__);
      }
    }
    FUN_0520e9a0(in_stack_00000058,
                 *(undefined8 *)
                  Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__)
    ;
    if (lVar12 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96858(lVar12);
    }
    if (in_stack_00000018 != 0) {
      iVar6 = FUN_04d96350(in_stack_00000018,
                           *(undefined8 *)
                            Method_UnityEngine_Component_GetComponentsInChildren<NavMeshModifierVolume>__
                          );
      if ((0 < iVar6) && (lVar12 = *(long *)(in_stack_00000010 + 0x40), lVar12 != 0)) {
        (**(code **)(lVar12 + 0x18))
                  (*(undefined8 *)(lVar12 + 0x40),in_stack_00000018,*(undefined8 *)(lVar12 + 0x28));
      }
      if (unaff_x22 != 0) {
        iVar6 = FUN_04d96350();
        if ((0 < iVar6) && (lVar12 = *(long *)(in_stack_00000010 + 0x48), lVar12 != 0)) {
          (**(code **)(lVar12 + 0x18))(*(undefined8 *)(lVar12 + 0x40));
        }
        if (unaff_x21 != 0) {
          iVar6 = FUN_04d96350();
          if ((0 < iVar6) && (lVar12 = *(long *)(in_stack_00000010 + 0x50), lVar12 != 0)) {
            (**(code **)(lVar12 + 0x18))(*(undefined8 *)(lVar12 + 0x40));
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


