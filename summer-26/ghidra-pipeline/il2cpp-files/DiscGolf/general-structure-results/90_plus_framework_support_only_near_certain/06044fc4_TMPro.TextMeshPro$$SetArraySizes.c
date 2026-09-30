/*
FUNCTION_NAME: TMPro.TextMeshPro$$SetArraySizes
ENTRY_POINT: 06044fc4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06044c70) */
/* WARNING: Removing unreachable block (ram,0x06044c74) */
/* WARNING: Removing unreachable block (ram,0x06044e4c) */
/* WARNING: Removing unreachable block (ram,0x06044d6c) */

void TMPro_TextMeshPro__SetArraySizes(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong extraout_x1;
  ulong extraout_x1_00;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long in_stack_00000010;
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
  
  __cxa_end_catch();
  FUN_05228c84(in_stack_00000028,
               *(undefined8 *)Method_UnityEngine_Component_GetComponentsInChildren<RectTransform>__)
  ;
  if (unaff_x24 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858();
  }
  if (unaff_x19 != 0) {
    iVar6 = FUN_04e56ca4();
    if ((0 < iVar6) && (lVar14 = *(long *)(unaff_x23 + 0x28), lVar14 != 0)) {
      (**(code **)(lVar14 + 0x18))(*(undefined8 *)(lVar14 + 0x40));
    }
    if (unaff_x22 != 0) {
      iVar6 = FUN_04e56ca4();
      if ((0 < iVar6) && (lVar14 = *(long *)(unaff_x23 + 0x30), lVar14 != 0)) {
        (**(code **)(lVar14 + 0x18))(*(undefined8 *)(lVar14 + 0x40));
      }
      if (unaff_x21 != 0) {
        iVar6 = FUN_04e56ca4();
        if ((0 < iVar6) && (lVar14 = *(long *)(unaff_x23 + 0x38), lVar14 != 0)) {
          (**(code **)(lVar14 + 0x18))(*(undefined8 *)(lVar14 + 0x40));
        }
        lVar14 = *unaff_x20;
        uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *unaff_x25) {
              puVar7 = (undefined8 *)(lVar14 + (long)(*piVar17 + 10) * 0x10 + 0x138);
              goto LAB_060447c8;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar7 = (undefined8 *)FUN_02dd004c();
LAB_060447c8:
        (*(code *)*puVar7)();
        if ((extraout_x1 & 0xff00) == 0) {
          lVar14 = *unaff_x20;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *unaff_x25) {
                puVar7 = (undefined8 *)(lVar14 + (long)(*piVar17 + 10) * 0x10 + 0x138);
                goto LAB_0604482c;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar7 = (undefined8 *)FUN_02dd004c();
LAB_0604482c:
          (*(code *)*puVar7)();
          if ((extraout_x1_00 & 0xff) == 0) {
            return;
          }
        }
        puVar2 = Method_UnityEngine_Component_GetComponentsInChildren<RawImage>__;
        puVar1 = Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__;
        lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                     Method_UnityEngine_Component_GetComponentsInChildren<RawImage>__
                                   );
        FUN_04d95918(lVar14,*(undefined8 *)puVar1);
        lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
        FUN_04d95918(lVar8,*(undefined8 *)puVar1);
        lVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
        FUN_04d95918(lVar9,*(undefined8 *)puVar1);
        lVar15 = *unaff_x20;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *unaff_x25) {
              puVar7 = (undefined8 *)(lVar15 + (long)(*piVar17 + 10) * 0x10 + 0x138);
              goto LAB_060448dc;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar7 = (undefined8 *)FUN_02dd004c();
LAB_060448dc:
        lVar15 = (*(code *)*puVar7)();
        puVar4 = Method_UnityEngine_Component_GetComponents<Collider>__;
        puVar3 = Method_UnityEngine_Component_GetComponents<MonoBehaviour>__;
        puVar2 = Method_UnityEngine_Component_GetComponent<OvrAvatarHandJointType>__;
        puVar7 = (undefined8 *)Method_UnityEngine_Component_GetComponent<OvrAvatarEntity>__;
        puVar1 = Method_UnityEngine_Component_GetComponent<MonoBehaviour>__;
        if (lVar15 != 0) {
          FUN_04d96af4(&stack0x00000020,lVar15,
                       *(undefined8 *)Method_UnityEngine_Component_GetComponent<OVRManager>__);
          in_stack_000000c0 = in_stack_00000040;
          in_stack_00000058 = &stack0x000000a0;
          in_stack_000000a8 = in_stack_00000028;
          in_stack_000000a0 = in_stack_00000020;
          in_stack_000000b8 = in_stack_00000038;
          in_stack_000000b0 = in_stack_00000030;
          in_stack_00000050 = 0;
          while (uVar10 = FUN_0520e87c(&stack0x000000a0,*puVar7), lVar13 = in_stack_000000b8,
                uVar16 = in_stack_000000b0, lVar15 = in_stack_00000050, (uVar10 & 1) != 0) {
            if (in_stack_000000b8 == 0) {
LAB_06044c1c:
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              FUN_04d966b8(lVar8,uVar16 & 0xffffffff,0,
                           *(undefined8 *)
                            Method_UnityEngine_Component_GetComponents<IMaterialModifier>__);
            }
            else {
              lVar15 = *(long *)(in_stack_000000b8 + 0x38);
              if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<NetworkObject>__ +
                          0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              if (lVar15 == 0) goto LAB_06044c1c;
              lVar15 = *(long *)(lVar13 + 0x38);
              if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<NetworkObject>__ +
                          0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              FUN_04e57418(&stack0x00000020,lVar15,
                           *(undefined8 *)Method_UnityEngine_Component_GetComponent<OVRGrabbable>__)
              ;
              in_stack_00000070 = in_stack_00000020;
              in_stack_00000020 = 0;
              in_stack_00000078 = in_stack_00000028;
              in_stack_00000088 = in_stack_00000038;
              in_stack_00000080 = in_stack_00000030;
              in_stack_00000098 = in_stack_00000048;
              in_stack_00000090 = in_stack_00000040;
              in_stack_00000028 = &stack0x00000070;
              while (uVar11 = FUN_05228778(&stack0x00000070,*(undefined8 *)puVar2),
                    uVar5 = in_stack_00000090, lVar15 = in_stack_00000088,
                    uVar10 = in_stack_00000080,
                    puVar7 = (undefined8 *)
                             Method_UnityEngine_Component_GetComponent<OvrAvatarEntity>__,
                    (uVar11 & 1) != 0) {
                in_stack_00000060 = in_stack_00000088;
                in_stack_00000068 = in_stack_00000090;
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                uVar11 = FUN_046fc988(&stack0x00000060,*(undefined8 *)puVar3);
                if ((uVar11 & 1) == 0) {
                  in_stack_00000060 = lVar15;
                  in_stack_00000068 = uVar5;
                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  uVar11 = FUN_046fc830(&stack0x00000060,
                                        *(undefined8 *)
                                         Method_UnityEngine_Component_GetComponent<LobbyListSingleUI>__
                                       );
                  if ((uVar11 & 1) == 0) {
                    in_stack_00000060 = lVar15;
                    in_stack_00000068 = uVar5;
                    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    uVar11 = FUN_046fc8ac(&stack0x00000060,
                                          *(undefined8 *)
                                           Method_UnityEngine_Component_GetComponents<CanvasGroup>__
                                         );
                    if ((uVar11 & 1) != 0) {
                      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d96860();
                      }
                      uVar11 = FUN_04d968ac(lVar14,uVar16 & 0xffffffff,
                                            *(undefined8 *)
                                             Method_UnityEngine_Component_GetComponents<Mask>__);
                      if ((uVar11 & 1) == 0) {
                        uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                          
                                                  Method_UnityEngine_Component_GetComponentsInChildren<ParticleSystem>__
                                                  );
                        FUN_04e56274(uVar12,*(undefined8 *)
                                             Method_UnityEngine_Component_GetComponentsInChildren<Image>__
                                    );
                        FUN_04d966b8(lVar14,uVar16 & 0xffffffff,uVar12,
                                     *(undefined8 *)
                                      Method_UnityEngine_Component_GetComponents<IMaterialModifier>__
                                    );
                      }
                      lVar13 = FUN_04d96618(lVar14,uVar16 & 0xffffffff,
                                            *(undefined8 *)
                                             Method_UnityEngine_Component_GetComponentsInChildren<OVRControllerHelper>__
                                           );
                      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d96860();
                      }
                      FUN_04e56ff0(lVar13,uVar10,lVar15,uVar5,*(undefined8 *)puVar4);
                    }
                  }
                  else {
                    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d96860();
                    }
                    uVar11 = FUN_04d968ac(lVar8,uVar16 & 0xffffffff,
                                          *(undefined8 *)
                                           Method_UnityEngine_Component_GetComponents<Mask>__);
                    if ((uVar11 & 1) == 0) {
                      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_Component_GetComponentsInChildren<ParticleSystem>__
                                                 );
                      FUN_04e56274(uVar12,*(undefined8 *)
                                           Method_UnityEngine_Component_GetComponentsInChildren<Image>__
                                  );
                      FUN_04d966b8(lVar8,uVar16 & 0xffffffff,uVar12,
                                   *(undefined8 *)
                                    Method_UnityEngine_Component_GetComponents<IMaterialModifier>__)
                      ;
                    }
                    lVar13 = FUN_04d96618(lVar8,uVar16 & 0xffffffff,
                                          *(undefined8 *)
                                           Method_UnityEngine_Component_GetComponentsInChildren<OVRControllerHelper>__
                                         );
                    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d96860();
                    }
                    FUN_04e56ff0(lVar13,uVar10,lVar15,uVar5,*(undefined8 *)puVar4);
                  }
                }
                else {
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  uVar11 = FUN_04d968ac(lVar9,uVar16 & 0xffffffff,
                                        *(undefined8 *)
                                         Method_UnityEngine_Component_GetComponents<Mask>__);
                  if ((uVar11 & 1) == 0) {
                    uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                 Method_UnityEngine_Component_GetComponentsInChildren<ParticleSystem>__
                                               );
                    FUN_04e56274(uVar12,*(undefined8 *)
                                         Method_UnityEngine_Component_GetComponentsInChildren<Image>__
                                );
                    FUN_04d966b8(lVar9,uVar16 & 0xffffffff,uVar12,
                                 *(undefined8 *)
                                  Method_UnityEngine_Component_GetComponents<IMaterialModifier>__);
                  }
                  lVar13 = FUN_04d96618(lVar9,uVar16 & 0xffffffff,
                                        *(undefined8 *)
                                         Method_UnityEngine_Component_GetComponentsInChildren<OVRControllerHelper>__
                                       );
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  FUN_04e56ff0(lVar13,uVar10,lVar15,uVar5,*(undefined8 *)puVar4);
                }
              }
              FUN_052288b4(&stack0x00000070,
                           *(undefined8 *)Method_UnityEngine_Component_GetComponent<OVRSkeleton>__);
            }
          }
          FUN_0520e9a0(in_stack_00000058,
                       *(undefined8 *)
                        Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__
                      );
          puVar1 = Method_UnityEngine_Component_GetComponentsInChildren<NavMeshModifierVolume>__;
          if (lVar15 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96858(lVar15);
          }
          if (lVar14 != 0) {
            iVar6 = FUN_04d96350(lVar14,*(undefined8 *)
                                         Method_UnityEngine_Component_GetComponentsInChildren<NavMeshModifierVolume>__
                                );
            if ((0 < iVar6) && (lVar15 = *(long *)(in_stack_00000010 + 0x40), lVar15 != 0)) {
              (**(code **)(lVar15 + 0x18))
                        (*(undefined8 *)(lVar15 + 0x40),lVar14,*(undefined8 *)(lVar15 + 0x28));
            }
            if (lVar8 != 0) {
              iVar6 = FUN_04d96350(lVar8,*(undefined8 *)puVar1);
              if ((0 < iVar6) && (lVar14 = *(long *)(in_stack_00000010 + 0x48), lVar14 != 0)) {
                (**(code **)(lVar14 + 0x18))
                          (*(undefined8 *)(lVar14 + 0x40),lVar8,*(undefined8 *)(lVar14 + 0x28));
              }
              if (lVar9 != 0) {
                iVar6 = FUN_04d96350(lVar9,*(undefined8 *)puVar1);
                if ((0 < iVar6) && (lVar14 = *(long *)(in_stack_00000010 + 0x50), lVar14 != 0)) {
                  (**(code **)(lVar14 + 0x18))
                            (*(undefined8 *)(lVar14 + 0x40),lVar9,*(undefined8 *)(lVar14 + 0x28));
                }
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


